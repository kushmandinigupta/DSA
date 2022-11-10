#include<iostream>
using namespace std;

//print sum of all numbers till n
int main(){

    int n,sum;
    sum=0;
    cout<<"enter the value till where you want the sum printed\n";
    cin>>n;

    for (int i = 0; i <= n; i++)
    {
        sum=sum+n;
    }
    cout<<"the sum =\n";
    cout<<sum;

return 0;
}