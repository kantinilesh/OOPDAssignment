#include <iostream>
using namespace std;

int main(){

    int n;
    cout<<"enter number of letters you want to enter"<<endl;
    cin>>n;

    char str[n] , temp;
    cout<<"enter your string"<<endl;
    cin>>str;

    int i = 0,j;
    j = n-1;
    while(i<j){
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
        i++;
        j--;
    }
    cout<<str<<endl;
    return 0;

}

