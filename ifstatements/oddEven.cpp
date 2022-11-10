#include<iostream>
using namespace std;
//find out if a given number is odd or even 
int main(){

    cout<<"enter the number\n";
    int num;
    cin>>num;
    
    if (num%2==0)
    {
        cout<<"the number is EVEN\n";
    }
    else{
        cout<<"the number is ODD\n";
    }
    return 0;

}