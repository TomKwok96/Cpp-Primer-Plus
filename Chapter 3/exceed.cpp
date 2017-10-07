//
// Created by Tom Guo on 07/10/2017.
//

#include <iostream>
#include <climits>

#define ZERO 0

int main(){

    using namespace std;

    short sam = SHRT_MAX;
    unsigned short sue = sam;

    cout<<"Sam has "<<sam<<" dollars and Sue has "<<sue<<" dollars deposited."<<endl
        <<"Add $1 to each account."<<endl
        <<"Now ";
    sam++;
    sue++;
    cout<<"Sam has "<<sam<<" dollars and Sue has "<<sue<<" dollars deposited."<<endl
        <<"Poor Sam!"<<endl<<endl;

    sam = ZERO;
    sue = ZERO;

    cout<<"Sam has "<<sam<<" dollars and Sue has "<<sue<<" dollars deposited."<<endl
        <<"Take $1 from each account."<<endl
        <<"Now ";
    sam--;
    sue--;
    cout<<"Sam has "<<sam<<" dollars and Sue has "<<sue<<" dollars deposited."<<endl
            <<"Lucky Sue!"<<endl;

    return 0;
}
