#include<iostream>
using namespace std;

//A company decided to give bonus of 5% to employee if his/her year of service is more than 5 years.
//Ask user for their salary and year of service and print the net bonus amount.

int main(){
    int salary, yofs;
    cout<<"Enter your salary\n";
    cin>>salary;

    cout<<"Enter your years of service\n";
    cin>>yofs;

    if(yofs>5){
        cout<<"congratulations! you're eligible for bonous!!!! hence the bonous amount\n";
        cout<<(salary*5)/100;
    }
    else
    {
        cout<<"you're NOT eligible for bonous\n";
    }
    
return 0;

}