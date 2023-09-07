#include<bits/stdc++.h>
using namespace std;


void towerOfHanoi(int n, char sauce, char destination, char helper){

    if(n==0){
        return;
    }

    towerOfHanoi(n-1, sauce, helper, destination);
    cout<<"Move the ring form "<<sauce<<" to "<<destination<<endl;
    towerOfHanoi(n-1, helper, destination, sauce);
}

int main(){

    towerOfHanoi(3,'A','C','B');
    return 0;
}