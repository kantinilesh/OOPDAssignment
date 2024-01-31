#include <iostream>
using namespace std;
int main(){
    string str;
    cout << "Enter the string: ";
    cin >> str;
    int len;
    int count_digit{0};
    int count_letter{0};
    len = str.size();
    for (int i=0;i<len;i++){
        if(isdigit(str[i])){
            count_digit++;
        }else{
            count_letter++;
        }
    }
    cout << "Number of letters is: " << count_letter << endl;
    cout << "Number of digits is: "  << count_digit <<  endl;
    return 0;
}