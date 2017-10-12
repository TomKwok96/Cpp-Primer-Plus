//
// Created by Tom Guo on 12/10/2017.
//

#include <iostream>
#include <string>

using namespace std;

const int SIZE = 5;

void display(const string sa[], int n);

int main(){

    string list[SIZE];
    cout<<"Enter your "<<SIZE<<" favorite astronomical sights:\n";
    for(int i = 0; i < SIZE; i++){
        cout<<i + 1<<": ";
        getline(cin, list[i]);
    }
    cout<<"Your list:\n";
    display(list, SIZE);
}

void display(const string sa[], int n){
    for(int i = 0; i < n; i++)
        cout<<i + 1<<": "<<sa[i]<<endl;
}