//
// Created by Tom Guo on 10/10/2017.
//

#include <iostream>
#include <string>
#include <cstring>

int main(){

    using namespace std;

    char charr[20];
    string str;

    cout<<"Length of string in charr before input: "<<strlen(charr)<<endl;
    cout<<"Length of string in str before input: "<<str.length()<<endl;
    cout<<"Enter a line of text: \n";
    cin.getline(charr, 20);
    cout<<"You entered: "<<charr<<endl;
    cout<<"Enter another line of text: \n";
    getline(cin, str);
    cout<<"You entered: "<<str<<endl;
    cout<<"Length of string in charr after input: "<<strlen(charr)<<endl;
    cout<<"Length of string in str after input: "<<str.length()<<endl;

    return 0;
}