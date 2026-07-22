#include<iostream>
using namespace std;
int main()
{
    for(int i=0;i<5;i++)
    {
        for(char al='A';al<='A'+i;al++)
        {
            cout<<al;
        }
        cout<<endl;
    }
}