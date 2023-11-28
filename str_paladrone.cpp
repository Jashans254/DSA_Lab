#include<iostream>
using namespace std;
int main()
{
    string str;
    bool flag = true;
    cout<<"Enter the string: ";
    cin>>str;
    cout<<"Given string is "<<str<<endl;
    int l = str.length();
    for(int i = 0 , j = l-1; i<= l/2 , j>=2; i++ ,j--)
    {
        if(str[i] != str[j])
        {
            cout<<str<<" is not a palindrone.";
            flag = 0;
            break;
        }   
    }
    if(flag)
    {
        cout<<str<<" is a palindrone string.";
    }
}