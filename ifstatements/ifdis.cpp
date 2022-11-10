#include<iostream>
using namespace std;

/*A shop will give discount of 10% if the cost of purchased quantity is more than 1000.
Ask user for quantity
Suppose, one unit will cost 100.
Judge and print total cost for user.*/

int main(){
    int quantity,cost;
    cout<<"Enter the quantity; how many units\n";
    cin>>quantity;

    cost=quantity*100;

    if(cost>1000)
    {
        cout<<"discount of 10% will be applied and the amount that user has to pay\n";
        cout<<(cost*10)/100+cost;
    }
    else{
        cout<<"no discount; amount that user has to pay\n";
        cout<<cost;
    }
    return 0;
}