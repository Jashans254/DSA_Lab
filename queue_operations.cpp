#include<iostream>
using namespace std;
int a[5],n = 5 ;
int front = -1 ,rear = -1;
void enqueue(int item)
{
    if(rear == n-1)
    {
        cout<<"\nOverflow occured..\n";
        return;
    }
    if(front == -1)
    {
        front = 0;
    }
    a[++rear] = item;
}
void dequeue()
{
    if(rear == -1)
    {
        cout<<"\nUnderflow occured\n";
    }
    else{
        cout<<"\nDeleted element is "<<a[front];
        if(front == rear)
        {
        front = rear = -1;
        }
        else{
        front++;
        }
    } 
}
void display()
{
    if(rear == -1)
    {
        cout<<"\nEmpty queue";
    }
    else{
        for(int i = front ; i<=rear; i ++)
    {
        cout<<a[i]<<" ";
    }
    }
   
}
int main() 
{
    int ch;
    cout<<"\n1 - To insert new element";
    cout<<"\n2 - To delete existing element";
    cout<<"\n3 - To display all the elements";
    cout<<"\n4- To exit";
    do{
    cout<<"\nEnter your choice:";
    cin>>ch;
    switch(ch){
        case 1:
            cout<<"\nEnter the value of element:";
            int value;
            cin>>value;
            enqueue(value);
            break;
        case 2:
            dequeue();
            break;
        case 3:
            display();
            break;
        case 4:
            cout<<"\nexiting";
            break;
        default:
            cout<<"\nInvalid choice";
            break;
    }
    }while(ch!=4);
    
    return 0;
}
