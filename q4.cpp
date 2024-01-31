#include <iostream>
using namespace std;

int main(){
    int n = 7;
    int guess;

    do{
        cout<<"Enter your guess between 1 - 9"<<endl;
        cin>>guess;
        if(guess==7){
            break;
        }
        cout<<"try again"<<endl;

    }while(guess != 7);

    cout<<"well guessed";
    return 0 ;
    

   
}