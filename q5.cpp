#include <iostream>
using namespace std;

int main(){
     for(int i=1;i<=5;i++)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<"*";
        }
        cout<<"\n";
    }

    for(int q=4;q>=1;q--)
    {
        for(int w=1;w<=q;w++)
        {
            cout<<"*";
        }
        cout<<"\n";
    }
}