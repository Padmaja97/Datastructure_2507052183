struct node {
    int data;
    struct node* next;
};

typedef struct node* NODE;

NODE createNode(int x) {
    NODE newNode;

    newNode = (NODE)malloc(sizeof(struct node));
    if (newNode == NULL) {
        printf("Memory allocation failed\n");
        exit(0);
    }

    newNode->data = x;
    newNode->next = NULL;

    return newNode;
}

NODE addNode(NODE first, int x) {
    NODE newNode = createNode(x);

    // If list is empty
    if (first == NULL) {
        return newNode;
    }

    NODE temp = first;

    // Traverse to last node
    while (temp->next != NULL) {
        temp = temp->next;
    }
}
