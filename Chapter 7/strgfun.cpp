//
// Created by Tom Guo on 12/10/2017.
//

#include <iostream>

unsigned c_in_str(const char str[], char ch);

int main(){

    using namespace std;

    char m[15] = "minimum";
    char* w = "ululate";

    unsigned ms = c_in_str(m, 'm');
    unsigned us = c_in_str(w, 'u');
    cout<<ms<<" m characters in "<<m<<endl;
    cout<<us<<" u characters in "<<w<<endl;

    return 0;
}

unsigned c_in_str(const char str[], char ch){
    unsigned count = 0;
    while(*str){
        if(*str == ch)
            count++;
        str++;
    }
    return count;
}