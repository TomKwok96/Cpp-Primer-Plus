//
// Created by Tom Guo on 12/10/2017.
//

#include <iostream>
#include <fstream>
#include <cstdlib>

const int SIZE = 60;

int main(){

    using namespace std;

    ifstream inFile;
    inFile.open("/Users/tom/Documents/Programming/Cpp-Primer-Plus/Chapter 6/scores.txt");
    if(!inFile.is_open()){
        cout<<"Could not open the file"<<endl;
        cout<<"Program terminating.\n";
        exit(EXIT_FAILURE);
    }
    double value;
    double sum = 0.0;
    int count = 0;
    inFile>>value;
    while(inFile.good()){
        ++count;
        sum += value;
        inFile>>value;
    }
    if(inFile.eof())
        cout<<"End of the file reached.\n";
    else if(inFile.fail())
        cout<<"Input terminated by data mismatch.\n";
    else
        cout<<"Input terminated for unknown reason.\n";
    if(count == 0)
        cout<<"No data processed.\n";
    else {
        cout<<"Items read: "<<count<<endl;
        cout<<"Sum: "<<sum<<endl;
        cout<<"Average: "<<sum / count<<endl;
    }

    inFile.close();
    return 0;
}
