#include <iostream>
using namespace std;

int main(){


    int n;
    cout<<"MENU\n"<<"1.ADD\n"<< "2.Subtract\n"<<"3.Multiply\n"<<"4.Devide\n"<<"5.Modulus\n"<<endl;
    cout<<"Enter your choice"<<endl;
    cin>>n;
    int a , b;
    cin>>a>>b;

    switch(n){
        
        case 1 :
        cout<<a+b;
        break;

        case 2 :
        cout<<a-b;
        break;

        case 3 :
        cout<<a*b;
        break;

        case 4 :
        cout<<a/b;
        break;

        case 5 :
        cout<<a%b;
        break;

        case 6 :
        cout<<"Wrong choice";
        break;
    }
    return 0;
}