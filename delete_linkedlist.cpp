#include<iostream>
using namespace std;
struct node{
    int data;
    node *next;
};
node* head ;
void insert_at_begin(int item)
{
    node* temp = new node();
    temp->data = item;
    temp->next = NULL;
    temp->next = head;
    head = temp;
}
void delete_begin()
{
    node* temp = head;
    head = temp->next;
    free(temp);
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
    insert_at_begin(11);
    insert_at_begin(12);
    insert_at_begin(13);
    insert_at_begin(15);
    insert_at_begin(23);
    cout<<"Linked list is\n";
    display();
    cout<<"\nAfter Deleting end node\n";
    delete_end();
    display();
    cout<<"\nAfter Deleting starting node\n";
    delete_begin();
    display();
    return 0;
}