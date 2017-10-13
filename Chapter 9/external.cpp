//
// Created by Tom Guo on 13/10/2017.
//

#include <iostream>

using namespace std;

double warming = 0.3;

void update(double dt);
void local();

int main(){

    cout<<"Global warming is "<<warming<<" degree.\n";
    update(0.1);
    cout<<"Global warming is "<<warming<<" degree.\n";
    local();
    cout<<"Global warming is "<<warming<<" degree.\n";

    return 0;
}