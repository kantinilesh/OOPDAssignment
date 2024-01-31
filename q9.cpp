#include <iostream>
using namespace std;

int main(){
    string name;
    cout<<"Enter a string:";
    getline(cin,name);
    int length = name.length();
    int number=0;
    int letterU=0;
    int letterL = 0;
    int symbol=0;
    for(char ch:name)
    {
        if(isdigit(ch))
        {
            number++;
        }
        if(isupper(ch))
        {
            letterU++;
        }
        if(islower(ch)){
            letterL++;
        }
        if(ispunct(ch))
        {
            symbol++;
        }
    }
    if(length>=6 && length<=16 && number>=1 && letterU>=1 && symbol>=1 && letterL>=1)
    {
        cout<<"Valid password!"<<endl;
    }
    else
    {
        cout<<"Not a Valid Password!"<<endl;
    }
}
