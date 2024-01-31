#include <iostream>
#include<string.h>
using namespace std;

int main(){

    char str[50],temp;
    cout<<"Enter your string"<<endl;
    cin>>str;

    int i=0 ,j;
    j = strlen(str)-1;
    while(i<j){
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
        i++;
        j--;
    }
    cout<<"Reversed string is : "<<str;
    return 0;

    

}