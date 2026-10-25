#include <stdio.h>
#include <stdlib.h>

// Structure of a tree node
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

    // Insert in left subtree
    if (value < root->data) {
        root->left = insert(root->left, value);
    }

    // Insert in right subtree
    else if (value > root->data) {
        root->right = insert(root->right, value);
    }

    // Duplicate value
    else {
        printf("Duplicate value is not allowed!\n");
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

// Search for a value
void search(struct Node *root, int value) {

    if (root == NULL) {
        printf("%d not found!\n", value);
        return;
    }

    if (root->data == value) {
        printf("%d found!\n", value);
    }

    else if (value < root->data) {
        search(root->left, value);
    }

    else {
        search(root->right, value);
    }
}

// Find minimum value
struct Node* findMin(struct Node *root) {

    while (root != NULL && root->left != NULL) {
        root = root->left;
    }

    return root;
}

// Delete a node
struct Node* deleteNode(struct Node *root, int value) {

    if (root == NULL) {
        printf("%d not found!\n", value);
        return NULL;
    }

    // Search in left subtree
    if (value < root->data) {
        root->left = deleteNode(root->left, value);
    }

    // Search in right subtree
    else if (value > root->data) {
        root->right = deleteNode(root->right, value);
    }

    // Node found
    else {

        // Case 1: No child
        if (root->left == NULL && root->right == NULL) {
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
            struct Node *temp = findMin(root->right);

            root->data = temp->data;

            root->right = deleteNode(root->right, temp->data);
        }
    }

    return root;
}

// Count total nodes
int countNodes(struct Node *root) {

    if (root == NULL) {
        return 0;
    }

    return 1 + countNodes(root->left)
             + countNodes(root->right);
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

// Free the entire tree
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

        printf("\n\n===== Binary Search Tree =====\n");
        printf("1. Insert\n");
        printf("2. Inorder Traversal\n");
        printf("3. Preorder Traversal\n");
        printf("4. Postorder Traversal\n");
        printf("5. Search\n");
        printf("6. Delete\n");
        printf("7. Count Nodes\n");
        printf("8. Height of Tree\n");
        printf("9. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {

            case 1:
                printf("Enter value: ");
                scanf("%d", &value);

                root = insert(root, value);

                printf("%d inserted successfully!\n", value);
                break;

            case 2:
                printf("Inorder: ");

                if (root == NULL) {
                    printf("Tree is empty!");
                }
                else {
                    inorder(root);
                }

                printf("\n");
                break;

            case 3:
                printf("Preorder: ");

                if (root == NULL) {
                    printf("Tree is empty!");
                }
                else {
                    preorder(root);
                }

                printf("\n");
                break;

            case 4:
                printf("Postorder: ");

                if (root == NULL) {
                    printf("Tree is empty!");
                }
                else {
                    postorder(root);
                }

                printf("\n");
                break;

            case 5:
                printf("Enter value to search: ");
                scanf("%d", &value);

                search(root, value);
                break;

            case 6:
                printf("Enter value to delete: ");
                scanf("%d", &value);

                root = deleteNode(root, value);
                break;

            case 7:
                printf("Total nodes: %d\n", countNodes(root));
                break;

            case 8:
                printf("Height of tree: %d\n", height(root));
                break;

            case 9:
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