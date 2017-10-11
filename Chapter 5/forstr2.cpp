//
// Created by Tom Guo on 11/10/2017.
//

#include <iostream>
#include <string>
#include <algorithm>

int main(){

    using namespace std;

    cout<<"Enter a word: ";
    string word;
    cin>>word;

    char temp;
    int i, j;
    for (j = 0, i = word.size() - 1; j < i; --i, ++j)
        swap(word[i], word[j]);
    cout<<word<<"\nDone\n";

    return 0;
}