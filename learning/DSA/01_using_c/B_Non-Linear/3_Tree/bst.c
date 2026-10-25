#include <stdio.h>
#include <stdlib.h>

// Structure of BST node
struct Node {
    int data;
    struct Node *left;
    struct Node *right;
};

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

    return newNode;
}

// Insert a node
struct Node* insert(struct Node *root, int value) {

    // If tree is empty
    if (root == NULL) {
        return createNode(value);
    }

    // Smaller value goes to left
    if (value < root->data) {
        root->left = insert(root->left, value);
    }

    // Larger value goes to right
    else if (value > root->data) {
        root->right = insert(root->right, value);
    }

    // Duplicate value
    else {
        printf("Duplicate value is not allowed!\n");
    }

    return root;
}

// Search a node
struct Node* search(struct Node *root, int value) {

    // Value not found
    if (root == NULL) {
        return NULL;
    }

    // Value found
    if (root->data == value) {
        return root;
    }

    // Search left subtree
    if (value < root->data) {
        return search(root->left, value);
    }

    // Search right subtree
    return search(root->right, value);
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

// Find maximum node
struct Node* findMax(struct Node *root) {

    if (root == NULL) {
        return NULL;
    }

    while (root->right != NULL) {
        root = root->right;
    }

    return root;
}

// Delete a node
struct Node* deleteNode(struct Node *root, int value) {

    // Value not found
    if (root == NULL) {
        return NULL;
    }

    // Search left subtree
    if (value < root->data) {

        root->left = deleteNode(root->left, value);
    }

    // Search right subtree
    else if (value > root->data) {

        root->right = deleteNode(root->right, value);
    }

    // Node found
    else {

        // Case 1: No child
        if (root->left == NULL &&
            root->right == NULL) {

            free(root);

            return NULL;
        }

        // Case 2: Only right child
        else if (root->left == NULL) {

            struct Node *temp = root->right;

            free(root);

            return temp;
        }

        // Case 3: Only left child
        else if (root->right == NULL) {

            struct Node *temp = root->left;

            free(root);

            return temp;
        }

        // Case 4: Two children
        else {

            // Find smallest node
            // from right subtree
            struct Node *temp = findMin(root->right);

            // Copy value
            root->data = temp->data;

            // Delete duplicate node
            root->right =
                deleteNode(root->right, temp->data);
        }
    }

    return root;
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

    // Leaf node
    if (root->left == NULL &&
        root->right == NULL) {

        return 1;
    }

    return countLeafNodes(root->left)
           + countLeafNodes(root->right);
}

// Find height of tree
int height(struct Node *root) {

    if (root == NULL) {
        return 0;
    }

    int leftHeight = height(root->left);

    int rightHeight = height(root->right);

    if (leftHeight > rightHeight) {
        return leftHeight + 1;
    }

    return rightHeight + 1;
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

        printf("\n========== BINARY SEARCH TREE ==========\n");

        printf("1. Insert\n");
        printf("2. Search\n");
        printf("3. Delete\n");
        printf("4. Inorder Traversal\n");
        printf("5. Preorder Traversal\n");
        printf("6. Postorder Traversal\n");
        printf("7. Find Minimum\n");
        printf("8. Find Maximum\n");
        printf("9. Count Total Nodes\n");
        printf("10. Count Leaf Nodes\n");
        printf("11. Find Height\n");
        printf("12. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {

            case 1:

                printf("Enter value: ");
                scanf("%d", &value);

                root = insert(root, value);

                printf("%d inserted successfully!\n", value);

                break;

            case 2: {

                printf("Enter value to search: ");
                scanf("%d", &value);

                struct Node *result =
                    search(root, value);

                if (result != NULL) {
                    printf("%d found in BST!\n", value);
                }
                else {
                    printf("%d not found!\n", value);
                }

                break;
            }

            case 3:

                printf("Enter value to delete: ");
                scanf("%d", &value);

                if (search(root, value) == NULL) {

                    printf("%d not found!\n", value);
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

            case 8: {

                struct Node *maxNode =
                    findMax(root);

                if (maxNode == NULL) {
                    printf("Tree is empty!\n");
                }
                else {
                    printf("Maximum value: %d\n",
                           maxNode->data);
                }

                break;
            }

            case 9:

                printf("Total nodes: %d\n",
                       countNodes(root));

                break;

            case 10:

                printf("Leaf nodes: %d\n",
                       countLeafNodes(root));

                break;

            case 11:

                printf("Height: %d\n",
                       height(root));

                break;

            case 12:

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