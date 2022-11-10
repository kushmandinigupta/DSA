#include<iostream>
using namespace std;

//cpp program to display n terms of natural numbers and their sum 
int main()
{
    int n,sum;
    sum=0;
    cout<<"enter the value of n"<<endl;
    cin>>n;

    for (int i = 0; i <= n; i++)
    {
        cout<<"the values\n";
        cout<<i<<endl;
        sum=sum+i;
    }
    cout<<"the sum = ";
    cout<<sum<<endl;

    return 0;
}

