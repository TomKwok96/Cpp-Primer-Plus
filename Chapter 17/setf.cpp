//
// Created by Tom Guo on 14/10/2017.
//

#include <iostream>

int main(){

    using std::cout;
    using std::endl;
    using std::ios_base;

    int temperature = 63;
    cout<<"Today's water temperatur: ";
    cout.setf(ios_base::showpos);
    cout<<temperature<<".\n";

    cout<<"For our programming friends, that's "<<std::hex<<temperature;
    cout.setf(ios_base::uppercase);
    cout.setf(ios_base::showbase);
    cout<<" or "<<temperature<<".\n";
    cout<<"How "<<true<<"! opps -- How ";
    cout.setf(ios_base::boolalpha);
    cout<<true<<"!\n";

    return 0;
}