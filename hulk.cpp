#include<iostream>
using namespace std;
int main()
{
    int i,a;
    cin>>a;
    for(i=0;i<a;i++)
    {
        if(i%2==0)
        {
            cout<<"I hate  ";
        }
        else
        {
            cout<<"I love  ";
        }
    
    if(i!=a-1)
    {
        cout<<"that ";
    }
    else
    {
        cout<<"it ";
    }
    }
    return 0;
    
}