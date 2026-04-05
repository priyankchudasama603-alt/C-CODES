#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *Lchild;
    struct node *Rchild;
};

struct node* createNode(int value) {
    struct node *NewNode = (struct node*)malloc(sizeof(struct node));
    NewNode->data = value;
    NewNode->Lchild = NULL;
    NewNode->Rchild = NULL;
    return NewNode;
}

struct node* insert(struct node* root, int value) {
    if (root == NULL)
        return createNode(value);

    if (value < root->data)
        root->Lchild = insert(root->Lchild, value);
    else if (value > root->data)
        root->Rchild = insert(root->Rchild, value);

    return root;
}

struct node* findMin(struct node* root) {
    while (root->Lchild != NULL)
        root = root->Lchild;
    return root;
}

struct node* deleteNode(struct node* root, int value) {
    if (root == NULL)
        return root;

    if (value < root->data) {
        root->Lchild = deleteNode(root->Lchild, value);
    }
    else if (value > root->data) {
        root->Rchild = deleteNode(root->Rchild, value);
    }
    else {
        if (root->Lchild == NULL) {
            struct node* temp = root->Rchild;
            free(root);
            return temp;
        }
        else if (root->Rchild == NULL) {
            struct node* temp = root->Lchild;
            free(root);
            return temp;
        }
        struct node* temp = findMin(root->Rchild);
        root->data = temp->data;
        root->Rchild = deleteNode(root->Rchild, temp->data);
    }
    return root;
}

void inorder(struct node* root) {
    if (root != NULL) {
        inorder(root->Lchild);
        printf("%d ", root->data);
        inorder(root->Rchild);
    }
}

void preorder(struct node* root) {
    if (root != NULL) {
        printf("%d ", root->data);
        preorder(root->Lchild);
        preorder(root->Rchild);
    }
}

void postorder(struct node* root) {
    if (root != NULL) {
        postorder(root->Lchild);
        postorder(root->Rchild);
        printf("%d ", root->data);
    }
}

int main() {
    struct node* root = NULL;
    int choice, value;

    while (1) {
        printf("\n\nBinary Search Tree Menu");
        printf("\n1. Insert");
        printf("\n2. Inorder Traversal");
        printf("\n3. Preorder Traversal");
        printf("\n4. Postorder Traversal");
        printf("\n5. Delete Node");
        printf("\n6. Exit");
        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter value to insert: ");
                scanf("%d", &value);
                root = insert(root, value);
                break;

            case 2:
                printf("Inorder Traversal: ");
                inorder(root);
                break;

            case 3:
                printf("Preorder Traversal: ");
                preorder(root);
                break;

            case 4:
                printf("Postorder Traversal: ");
                postorder(root);
                break;

            case 5:
                printf("Enter value to delete: ");
                scanf("%d", &value);
                root = deleteNode(root, value);
                printf("Node deleted (if existed).");
                break;

            case 6:
                exit(0);

            default:
                printf("Invalid choice!");
        }
    }
    return 0;
}
