
struct node
{
    int data;
    struct node *next;
};


void insertAtBegining(struct node** headRef, int newData)
{
    // Code here
    struct node* p = new node;
    struct node* temp = new node;
    temp->data = newData;
    p = *headRef;
    if(p ==NULL){
        temp->next = NULL;
    }
    else{
        temp->next = p;
    }
    *headRef = temp;
   
}
// function appends the data at the end of the list
void insertAtEnd(struct node** headRef, int newData)
{
    // Code here
    struct node* p = new node;
    struct node* temp = new node;
    p = *headRef;
    temp->data = newData;
    temp->next = NULL;
    if(*headRef==NULL){
        *headRef = temp; // do not use p here as 
    }
    else{
        while(p->next!=NULL){ 
            p = p->next;
        }
        p->next = temp;
    }
        
}

void insertAtEnd(struct node** headRef, int newData)
{
    // Code here
    struct node* new_node = (struct node*) malloc(sizeof(struct node)); 
    struct node *last = *headRef;  /* used in step 5*/

    new_node->data  = newData; 
    new_node->next = NULL;
    if (*headRef == NULL){ 
       *headRef = new_node; 
       return; 
    } 
    while (last->next != NULL) 
        last = last->next; 
    last->next = new_node; 
    return; 
}
