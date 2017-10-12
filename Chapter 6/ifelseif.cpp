//
// Created by Tom Guo on 12/10/2017.
//

#include <iostream>

const int Fave = 27;

int main(){

    using namespace std;

    int n;
    cout<<"Enter a number in the range 1 - 100 to find my favorite number: ";
    do {
        cin >> n;
        if (n < Fave)
            cout << "Too Low -- guess again: ";
        else if (n > Fave)
            cout << "Too High -- guess again: ";
        else
            cout << Fave << " is right\n";
    } while(n != Fave);

    return 0;
}