//
// Created by Tom Guo on 13/10/2017.
//

#include <iostream>

const int ArSize = 10;

void strcount(const char* str);

int main(){

    using namespace std;

    char input[ArSize];
    cin.get(input,  ArSize);
    char next;
    while(cin){
        cin.get(next);
        while(next != '\n')
            cin.get(next);
        strcount(input);
        cout<<"Enter next line (empty line to quit):\n";
        cin.get(input, ArSize);
    }
    cout<<"Bye.\n";

    return 0;
}

void strcount(const char* str){

    using namespace std;

    static int total = 0;
    int count = 0;
    cout<<"\"" <<str<<"\" contains ";
    while(*str++)
        count++;
    total += count;
    cout<<count<<" characters.\n"<<total<<" characters total.\n";
}