#include <stdio.h>
#include <stdlib.h>

// Structure of AVL Tree node
struct Node {
    int data;
    struct Node *left;
    struct Node *right;
    int height;
};

// Get maximum of two numbers
int max(int a, int b) {
    return (a > b) ? a : b;
}

// Get height of a node
int getHeight(struct Node *node) {
    if (node == NULL) {
        return 0;
    }

    return node->height;
}

// Create a new node
struct Node* createNode(int value) {

    struct Node *newNode = malloc(sizeof(struct Node));

    if (newNode == NULL) {
        printf("Memory allocation failed!\n");
        return NULL;
    }

    newNode->data = value;
    newNode->left = NULL;
    newNode->right = NULL;
    newNode->height = 1;

    return newNode;
}

// Get balance factor
int getBalance(struct Node *node) {

    if (node == NULL) {
        return 0;
    }

    return getHeight(node->left)
           - getHeight(node->right);
}

// Right Rotation
struct Node* rightRotate(struct Node *y) {

    struct Node *x = y->left;
    struct Node *T2 = x->right;

    // Perform rotation
    x->right = y;
    y->left = T2;

    // Update heights
    y->height = 1 + max(
        getHeight(y->left),
        getHeight(y->right)
    );

    x->height = 1 + max(
        getHeight(x->left),
        getHeight(x->right)
    );

    return x;
}

// Left Rotation
struct Node* leftRotate(struct Node *x) {

    struct Node *y = x->right;
    struct Node *T2 = y->left;

    // Perform rotation
    y->left = x;
    x->right = T2;

    // Update heights
    x->height = 1 + max(
        getHeight(x->left),
        getHeight(x->right)
    );

    y->height = 1 + max(
        getHeight(y->left),
        getHeight(y->right)
    );

    return y;
}

// Insert a node
struct Node* insert(struct Node *root, int value) {

    // Normal BST insertion
    if (root == NULL) {
        return createNode(value);
    }

    if (value < root->data) {

        root->left = insert(root->left, value);

    }
    else if (value > root->data) {

        root->right = insert(root->right, value);

    }
    else {

        printf("Duplicate value is not allowed!\n");
        return root;
    }

    // Update height
    root->height = 1 + max(
        getHeight(root->left),
        getHeight(root->right)
    );

    // Get balance factor
    int balance = getBalance(root);

    // ==========================================
    // CASE 1: Left Left (LL)
    // ==========================================

    if (balance > 1 && value < root->left->data) {

        return rightRotate(root);
    }

    // ==========================================
    // CASE 2: Right Right (RR)
    // ==========================================

    if (balance < -1 && value > root->right->data) {

        return leftRotate(root);
    }

    // ==========================================
    // CASE 3: Left Right (LR)
    // ==========================================

    if (balance > 1 && value > root->left->data) {

        root->left = leftRotate(root->left);

        return rightRotate(root);
    }

    // ==========================================
    // CASE 4: Right Left (RL)
    // ==========================================

    if (balance < -1 && value < root->right->data) {

        root->right = rightRotate(root->right);

        return leftRotate(root);
    }

    return root;
}

// Search a node
struct Node* search(struct Node *root, int value) {

    if (root == NULL) {
        return NULL;
    }

    if (root->data == value) {
        return root;
    }

    if (value < root->data) {
        return search(root->left, value);
    }

    return search(root->right, value);
}

// Find minimum node
struct Node* findMin(struct Node *root) {

    if (root == NULL) {
        return NULL;
    }

    while (root->left != NULL) {
        root = root->left;
    }

    return root;
}

// Delete a node
struct Node* deleteNode(struct Node *root, int value) {

    // Normal BST deletion
    if (root == NULL) {
        return NULL;
    }

    if (value < root->data) {

        root->left = deleteNode(root->left, value);

    }
    else if (value > root->data) {

        root->right = deleteNode(root->right, value);

    }
    else {

        // Case 1 and 2:
        // Node has zero or one child

        if (root->left == NULL ||
            root->right == NULL) {

            struct Node *child;

            if (root->left != NULL) {
                child = root->left;
            }
            else {
                child = root->right;
            }

            // No child
            if (child == NULL) {

                free(root);
                return NULL;
            }

            // One child
            else {

                struct Node *temp = root;

                root = child;

                free(temp);
            }
        }

        // Case 3:
        // Node has two children
        else {

            struct Node *temp =
                findMin(root->right);

            root->data = temp->data;

            root->right =
                deleteNode(root->right, temp->data);
        }
    }

    // Update height
    root->height = 1 + max(
        getHeight(root->left),
        getHeight(root->right)
    );

    // Get balance factor
    int balance = getBalance(root);

    // ==========================================
    // Left Left (LL)
    // ==========================================

    if (balance > 1 &&
        getBalance(root->left) >= 0) {

        return rightRotate(root);
    }

    // ==========================================
    // Left Right (LR)
    // ==========================================

    if (balance > 1 &&
        getBalance(root->left) < 0) {

        root->left =
            leftRotate(root->left);

        return rightRotate(root);
    }

    // ==========================================
    // Right Right (RR)
    // ==========================================

    if (balance < -1 &&
        getBalance(root->right) <= 0) {

        return leftRotate(root);
    }

    // ==========================================
    // Right Left (RL)
    // ==========================================

    if (balance < -1 &&
        getBalance(root->right) > 0) {

        root->right =
            rightRotate(root->right);

        return leftRotate(root);
    }

    return root;
}

// Inorder traversal
void inorder(struct Node *root) {

    if (root == NULL) {
        return;
    }

    inorder(root->left);

    printf("%d ", root->data);

    inorder(root->right);
}

// Preorder traversal
void preorder(struct Node *root) {

    if (root == NULL) {
        return;
    }

    printf("%d ", root->data);

    preorder(root->left);

    preorder(root->right);
}

// Postorder traversal
void postorder(struct Node *root) {

    if (root == NULL) {
        return;
    }

    postorder(root->left);

    postorder(root->right);

    printf("%d ", root->data);
}

// Count total nodes
int countNodes(struct Node *root) {

    if (root == NULL) {
        return 0;
    }

    return 1
           + countNodes(root->left)
           + countNodes(root->right);
}

// Count leaf nodes
int countLeafNodes(struct Node *root) {

    if (root == NULL) {
        return 0;
    }

    if (root->left == NULL &&
        root->right == NULL) {

        return 1;
    }

    return countLeafNodes(root->left)
           + countLeafNodes(root->right);
}

// Display balance factor of every node
void displayBalance(struct Node *root) {

    if (root == NULL) {
        return;
    }

    displayBalance(root->left);

    printf(
        "Node: %d | Height: %d | Balance Factor: %d\n",
        root->data,
        root->height,
        getBalance(root)
    );

    displayBalance(root->right);
}

// Free entire tree
void freeTree(struct Node *root) {

    if (root == NULL) {
        return;
    }

    freeTree(root->left);
    freeTree(root->right);

    free(root);
}

// Main function
int main() {

    struct Node *root = NULL;

    int choice;
    int value;

    while (1) {

        printf("\n========== AVL TREE ==========\n");

        printf("1. Insert\n");
        printf("2. Search\n");
        printf("3. Delete\n");
        printf("4. Inorder Traversal\n");
        printf("5. Preorder Traversal\n");
        printf("6. Postorder Traversal\n");
        printf("7. Find Minimum\n");
        printf("8. Count Total Nodes\n");
        printf("9. Count Leaf Nodes\n");
        printf("10. Display Height & Balance Factor\n");
        printf("11. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {

            case 1:

                printf("Enter value: ");
                scanf("%d", &value);

                root = insert(root, value);

                printf("%d inserted successfully!\n",
                       value);

                break;

            case 2: {

                printf("Enter value to search: ");
                scanf("%d", &value);

                struct Node *result =
                    search(root, value);

                if (result != NULL) {
                    printf("%d found in AVL Tree!\n",
                           value);
                }
                else {
                    printf("%d not found!\n",
                           value);
                }

                break;
            }

            case 3:

                printf("Enter value to delete: ");
                scanf("%d", &value);

                if (search(root, value) == NULL) {

                    printf("%d not found!\n",
                           value);
                }
                else {

                    root = deleteNode(root, value);

                    printf("%d deleted successfully!\n",
                           value);
                }

                break;

            case 4:

                if (root == NULL) {
                    printf("Tree is empty!\n");
                }
                else {

                    printf("Inorder: ");

                    inorder(root);

                    printf("\n");
                }

                break;

            case 5:

                if (root == NULL) {
                    printf("Tree is empty!\n");
                }
                else {

                    printf("Preorder: ");

                    preorder(root);

                    printf("\n");
                }

                break;

            case 6:

                if (root == NULL) {
                    printf("Tree is empty!\n");
                }
                else {

                    printf("Postorder: ");

                    postorder(root);

                    printf("\n");
                }

                break;

            case 7: {

                struct Node *minNode =
                    findMin(root);

                if (minNode == NULL) {
                    printf("Tree is empty!\n");
                }
                else {
                    printf("Minimum value: %d\n",
                           minNode->data);
                }

                break;
            }

            case 8:

                printf("Total nodes: %d\n",
                       countNodes(root));

                break;

            case 9:

                printf("Leaf nodes: %d\n",
                       countLeafNodes(root));

                break;

            case 10:

                if (root == NULL) {
                    printf("Tree is empty!\n");
                }
                else {

                    displayBalance(root);
                }

                break;

            case 11:

                freeTree(root);

                printf("Memory freed.\n");
                printf("Program ended.\n");

                return 0;

            default:

                printf("Invalid choice!\n");
        }
    }

    return 0;
}