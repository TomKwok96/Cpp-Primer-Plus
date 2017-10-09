//
// Created by Tom Guo on 09/10/2017.
//

#include <iostream>

int main(){

    using namespace std;

    float hats, heads;

    cout.setf(ios_base::fixed, ios_base::floatfield);
    cout<<"Please enter a number: ";
    cin>>hats;
    cout<<"Enter another number: ";
    cin>>heads;

    cout<<"hats = "<<hats<<"; heads = "<<heads<<endl;
    cout<<"heats + heads = "<<hats + heads<<endl;
    cout<<"heats - heads = "<<hats - heads<<endl;
    cout<<"heats * heads = "<<hats * heads<<endl;
    cout<<"heats / heads = "<<hats / heads<<endl;

    return 0;
}
