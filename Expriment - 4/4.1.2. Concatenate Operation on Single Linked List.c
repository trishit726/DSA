struct node {
    int data;
    struct node* next;
};

typedef struct node* NODE;

NODE createNode(int x) {
    //write your code here..
     NODE newNode = (NODE)malloc(sizeof(struct node));
    if (newNode == NULL) {
        printf("Memory allocation failed\n");
        return NULL;
    }
    newNode->data = x;
    newNode->next = NULL;
    return newNode;
    
    
    
    
}

NODE addNode(NODE first, int x) {
  
    //write your code here..
    NODE newNode = createNode(x);
    if (first == NULL) {
        return newNode;
    }
    
    NODE temp = first;
    while (temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = newNode;
}