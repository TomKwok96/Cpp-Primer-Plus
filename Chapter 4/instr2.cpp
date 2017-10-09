//
// Created by Tom Guo on 09/10/2017.
//

#include <iostream>

int main(){

    using namespace std;

    const int ArSize = 20;
    char name[ArSize];
    char dessert[ArSize];

    cout<<"Enter your name:\n";
    cin.getline(name, ArSize);
    cout<<"Enter your favorite dessert:\n";
    cin.getline(dessert, ArSize);
    cout<<"I have some dilicious "<<dessert<<" for you, "<<name<<".\n";

    return 0;
}
