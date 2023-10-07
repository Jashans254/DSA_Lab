#include<iostream>
using namespace std;
struct node{
    int data;
    node *next;
};
node* head ;
void insert_at_end(int item)
{
    node* temp = new node();
    temp->data = item;
    temp->next = NULL;
    if(head == NULL)
    {
        head = temp;
    }
    else{
    node* temp1 = head;
    while(temp1->next != NULL)
    {
        temp1 = temp1->next;
    }
    temp1->next = temp;
    }
}
void insert_at_begin(int item)
{
    node* temp = new node();
    temp->data = item;
    temp->next = NULL;
    temp->next = head;
    head = temp;
}
void insert_at_nth(int item ,int n)
{
   node* temp1 = new node();
   temp1->data = item ;
   temp1->next = NULL;
   if( n == 1)
   {
    temp1->next = head;
    head = temp1;
   }
   else 
   {
   node* temp2 = head;
   for(int i = 0 ; i < n-2; i++)  
   {
    temp2 = temp2->next;
   } 
   temp1->next = temp2->next;
   temp2->next = temp1; 
   }
}
void delete_begin()
{
    node* temp = head;
    head = temp->next;
    free(temp);
}
void deleteatTail(node*head){
   node*prev= NULL;
   node*temp= head;
   while(temp->next!=NULL){
      prev= temp;
      temp=temp->next;
   }
   delete temp;
   prev->next= NULL;
   return;
}
void delete_end()
{
    if (head == NULL) 
        return;
  
    if (head->next == NULL) { 
        delete head; 
        return;
    } 
    node* temp = head;
    while(temp->next->next!= NULL)
    {
        temp = temp->next;
    }
    
    delete (temp->next);
    temp->next = NULL;
}
void delete_nth(int n)
{
    node* temp1 = head;
    if(n==1)
    {
        head = temp1->next;
        free(temp1);
        return;
    }
    else{
        for(int i = 0; i<n-2 ;i++)
        {
            temp1 = temp1->next;
        }
        node* temp2 = temp1->next;
        temp1->next = temp2->next;
        free(temp2);
    }
}

void display()
{
    node* temp = head;
    while(temp!= NULL)
    {
        cout<<temp->data<<" ";
        temp = temp->next;
    }
}
int main()
{
    head = NULL;
    // insert_at_end(9);
    // insert_at_end(99);
    insert_at_begin(11);
    insert_at_begin(12);
    insert_at_begin(13);
    insert_at_begin(12);
    display();
    cout<<"\n-----\n";
    insert_at_nth(89 , 3);
    display();
    cout<<"\n-----\n";
    delete_begin();
    display();
    cout<<"\n-----\n";
    delete_end();
    delete_end();
    delete_end();
    display();
    return 0;
}