#include <iostream>
using namespace std;

int main(){
    
    string month;
    cout<<"Enter name of the month"<<endl;;
    cin>>month;

    if(month == "January"|| month == "March" || month== "May"|| month == "July"|| month == "August" || month == "October" || month== "December")
    {
        cout<< "31 days";
    }
    else if(month == "February"){
        cout<<"28 days";
    }
    else{
        cout<<"30 days";
    }
    return 0;

}