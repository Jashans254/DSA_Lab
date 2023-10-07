// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int a[10];
int max_size = 10 ;
int top = - 1 ;
void push( int item )
{
    if(top >=max_size)
    {
        cout<<"overflow";
    }
    a[++top] = item;
}
void pop() 
{
    if( top == -1)
    {
        cout<<"underflow";
    }
    --top;
}
void peak( )
{
    if( top != -1 )
    {
        cout<<a[top]<<endl;
    }
    
}
void display()
{
    cout<<"The elements in stack are:\n";
    for(int i = top ; i>=0; i--)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
}
int main() {
   cout<<"\n1- To insert a new element\n";
   cout<<"2- to delete an existing element\n";
   cout<<"3- to print all elements\n";
   cout<<"4- to print topmost element\n";
   cout<<"5 - exit \n";
   
   int ch;
   bool y = true;
   while(y)
   {
   cout<<"Enter operation to be performed:";
   cin>>ch;
   switch(ch) {
   case 1 :
      cout<<"enter value";
      int x ;
      cin>>x;
      push(x);
      break;
   case 2:
       pop();
       break;
   case 3:
       display();
       break;
   case 4:
       peak();
       break;
   case 5:
        y = false;
        cout<<"\nbye Thank you\n";
        break;
       
   default :
      cout<<"invalid choice \n";
      break;
   }
   }
    return 0;
}