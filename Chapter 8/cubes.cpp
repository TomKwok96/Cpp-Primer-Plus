//
// Created by Tom Guo on 13/10/2017.
//

#include <iostream>

double cube(double a);
double refcube(double &ra);

int main(){

    using namespace std;

    double x = 3.0;

    cout<<cube(x)<<" = cube of "<<x<<endl;
    cout<<refcube(x)<<" = cube of "<<x<<endl;

    return 0;
}

double cube(double a){
    a *= a * a;
    return a;
}

double refcube(double &ra){
    ra *= ra * ra;
    return ra;
}