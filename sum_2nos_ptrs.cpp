#include<iostream>
using namespace std;
int main()
{
    int *a , *b , *c , x , y;
    cout<<"Enter two numbers: ";
    a = &x;
    b = &y;
    cin>>x;
    cin>>y;
    *c = *a + *b;
    cout<<"Sum of "<<*a<<" and "<<*b<<" is "<<*c;
    return 0;
}