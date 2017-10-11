//
// Created by Tom Guo on 11/10/2017.
//

#include <iostream>

int main(){

    using namespace std;

    int updates = 6;
    int *p_updates;
    p_updates = &updates;

    cout<<"Values: updates = "<<updates<<", *p_updates = "<<*p_updates<<endl;
    cout<<"Addresses: &updates = "<<&updates<<", p_updates = "<<p_updates<<endl;

    (*p_updates)++;
    cout<<"Now updates = "<<updates<<endl;

    return 0;
}