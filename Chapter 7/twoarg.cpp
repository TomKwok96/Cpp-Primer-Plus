//
// Created by Tom Guo on 12/10/2017.
//

#include <iostream>

using namespace std;

void n_chars(char, int);

int main(){

    int times;
    char ch;

    cout<<"Enter a character: ";
    cin>>ch;
    while(ch != 'q'){
        cout<<"Enter an integer: ";
        cin>>times;
        n_chars(ch, times);
        cout<<"\nEnter another character or press the q-key to quit: ";
        cin>>ch;
    }
    cout<<"Then value of tiems is "<<times<<".\n";
    cout<<"Bye.\n";

    return 0;
}

void n_chars(char ch, int times){
    while(times-- > 0){
        cout<<ch;
    }
}