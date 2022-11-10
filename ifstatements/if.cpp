#include<iostream>
using namespace std;
//Take values of length and breadth of a rectangle from user and check if it is square or not.
int main(){

    int len, bth;
    cin>>len>>bth;

    if(len==bth){
        cout<<"is a square\n";
    }
    else{
        cout<<"ain't a square\n";
    }

    return 0;
}