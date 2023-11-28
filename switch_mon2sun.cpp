#include<iostream>
using namespace std;
int main()
{
    int x;
    for(int i = 1;i<=8;i++)
    {
        if(i !=8)
        cout<<endl<<i<<"- ";
        
    switch(i)
    {
        case 1:
        cout<<"Monday";
        break;
        case 2:
        cout<<"Tuesday";
        break;
        case 3:
        cout<<"Wednesday";
        break;
        case 4:
        cout<<"Thursday";
        break;
        case 5:
        cout<<"Friday";
        break;
        case 6:
        cout<<"Saturday";
        break;
        case 7:
        cout<<"Sunday";
        break;
        default:
        cout<<"\nSorry! number out of range";
    }
    }
}