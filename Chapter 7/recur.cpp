//
// Created by Tom Guo on 12/10/2017.
//

#include <iostream>

void countdown(int n);

int main(){
    countdown(4);
    return 0;
}

void countdown(int n){

    using namespace std;

    cout<<"Counting down … "<<n<<"  (n at "<<&n<<" )"<<endl;
    if(n > 0)
        countdown(n - 1);
    cout<<n<<": Kaboom!         (n at "<<&n<<" )"<<endl;
}