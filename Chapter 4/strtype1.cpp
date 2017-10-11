//
// Created by Tom Guo on 10/10/2017.
//

#include <iostream>

int main(){

    using namespace std;

    char charr1[20], charr2[20] = "jugar";
    string str1, str2 = "panther";

    cout<<"Enter a kind of feline: ";
    cin>>charr1;
    cout<<"Enter another kind of feline: ";
    cin>>str1;
    cout<<"Here are some felines:\n"<<charr1<<" "<<charr2<<" "<<str1<<" "<<str2<<endl;
    cout<<"Third letter in "<<charr2<<" is "<<charr2[2]<<endl;
    cout<<"The third letter in "<<str2[2]<<" is "<<str2[2]<<endl;
}