#include<iostream>
using namespace std;
int main()
{
    char al='A';
    for(int i=0;i<5;i++)
    {
        al='A'+i;
        for(int j=0;j<=i;j++)
        {
            cout<<al;
        }
        cout<<endl;
    }
}