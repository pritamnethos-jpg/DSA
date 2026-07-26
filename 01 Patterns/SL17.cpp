#include<iostream>
using namespace std;
int main()
{
    int n=4;
    for(int i=1;i<=n;i++)
    {
        for(int j=4-i;j>=0;j--)
        {
            cout<<" ";
        }
        char al='A';
        int breakpoint=((2*i)-1)/2;
        for(int j=1;j<=(2*i)-1;j++)
        {
            if (j<=breakpoint+1)
            {cout<<al;
            al++;
            }
            else 
            {al--;
            cout<<al;
            };
        }
        for(int j=4-i;j>=0;j--)
        {
            cout<<" ";
        }
        cout<<endl;
    }
}