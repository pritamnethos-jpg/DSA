#include<iostream>
using namespace std;
int main()
{
    int n,last;
    int count=0;
    cout<<"Enter a number: ";
    cin>>n;
    while(n>0)
    {
        count++;
        n=n/10;
    }
    cout<<"Total number of digits:"<<count;
}