#include<iostream.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *link;
}*head;

void add_beg(int d);
void add_end(int data);
void displaylist();



//creating a node 
void createNodeList(int n)
{
    struct node *fnNode, *tmp;
    int num, i;
 
    head = (struct node *)malloc(sizeof(struct node));
    if(head == NULL) //check whether the stnode is NULL and if so no memory allocation
    {
        printf(" Memory can not be allocated.");
    }
    else
    {
// reads data for the node through keyboard
        printf(" Input data for node 1 : ");
        scanf("%d", &num);
        head-> data = num;      
        head->link = NULL; //Links the address field to NULL
        tmp = head;
 
//Creates n nodes and adds to linked list
        for(i=2; i<=n; i++)
        {
            NewNode = (struct node *)malloc(sizeof(struct node));
 

            if(NewNode == NULL) //check whether the fnnode is NULL and if so no memory allocation
            {
                printf(" Memory can not be allocated.");
                break;
            }
            else
            {
                printf(" Input data for node %d : ", i);
                scanf(" %d", &num);
                NewNode->data = num;      // links the num field of fnNode with num
                NewNode->link = NULL; // links the address field of fnNode with NULL
                tmp->link = NewNode; // links previous node i.e. tmp to the fnNode
                tmp = tmp->link;
            }
        }
    }
} 


//adding node with at begining of list
void add_beg(int d)
{
  struct node *ptr = malloc(sizeof(struct node));
  ptr->data = d;
  ptr->link = NULL;
  ptr->link = head;
  head = ptr;
}
//adding node with data at end of list
void  add_end(int d)
{ 
  struct node *temp,*new;
  new =(struct node*)malloc(sizeof(struct node));

     if (new==NULL){
        printf("Unable to allocate");
      } 
     else
     {
    new->data = d;
    new->link = NULL;
    temp = head;
    while(temp->link!=NULL){

        temp = temp->link;
                }
    temp->link = new;
  printf("Node is INSERTED at End aucessfully");
}
}
/*
void add_end(int data)
{
    struct node *newNode, *temp;

    newNode = (struct node*)malloc(sizeof(struct node));

    if(newNode == NULL)
    {
        printf("Unable to allocate memory.");
    }
    else
    {
        newNode->data = data; // Link the data part
        newNode->link = NULL;

        temp = head;

        // Traverse to the last node
        while(temp->link != NULL)
            temp = temp->link;

        temp->link = newNode; // Link address part

        printf("DATA INSERTED SUCCESSFULLY\n");
    }
}

*/
//display the data of list
void displaylist()
 {
   struct node *temp;
   if(head==NULL)
     {
         printf("Memory not allocated");
     }
 
   else
    {
     temp = head;
     while(temp!=NULL)
       {
 
         printf("%d\n",temp->data);
         temp = temp->link;
 
        }
 
    }
 }
 




int main()
{
    int n,num;
		printf("\n\n Linked List : Insert a new node at the beginning of a Singly Linked List:\n");
		printf("------------------------------------------------------------------------------\n");
    printf(" Input the number of nodes : ");
    scanf("%d", &n);
    createNodeList(n);
    printf("\n Data entered in the list are : \n");		
    displaylist();
    printf("\n Input data to insert at the beginning of the list : ");
    scanf("%d", &num);
    add_beg(num);
    printf("\n Data after inserted in the list are : \n");		
    displaylist();
    printf("\n Enter the data to insert at the end of the list :");
    scanf("%d",&num);
    add_end(num);
    printf("\n Data after inserted in the list are :\n");
    displaylist();
    return 0;
}
