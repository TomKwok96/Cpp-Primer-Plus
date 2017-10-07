//
// Created by Tom Guo on 07/10/2017.
//

#include <iostream>

//using std::cout;

int stonetolb(int);

int main(){

    using namespace std;
    int stone;
    cout<<"Enter the weight in stones: ";
    cin>>stone;
    int pounds = stonetolb(stone);
    cout<<stone<<" stone = "<<pounds<<" pounds."<<endl;
    return 0;

}

int stonetolb(int stone){
    return 14 * stone;
}