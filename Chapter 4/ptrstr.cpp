//
// Created by Tom Guo on 11/10/2017.
//

#include <iostream>
#include <cstring>

int main(){

    using namespace std;

    char animal[20] = "bear";
    const char* bird = "wren";
    char *ps;

    cout<<animal<<" and "<<bird<<"\n";
    cout<<"Enter a kind of animal: ";
    cin>>animal;

    ps = animal;
    cout<<ps<<"!\nBefore using strcpy();\n"<<animal<<" at "<<(int *)ps<<endl;

    ps = new char[strlen(animal) + 1];
    strcpy(ps, animal);
    cout<<"After using strcpty();\n"<<animal<<" at "<<(int *)ps<<endl;

    delete[] ps;
    return 0;

}