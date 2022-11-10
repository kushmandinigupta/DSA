#include<iostream>
using namespace std;
//Take 3 int values from user and print greatest among them.
int main(){

    int a,b,c;
    cout<<"enter values that you want to compare\n";
    cin>>a>>b>>c;

    if(a>b)
    {
        if (a>c)
        {
            cout<<a<<endl;
        }
        else{
            cout<<c<<endl;
        }
    }
    else if(b>c)
    {
        cout<<b<<endl;    
    }
    else{
        cout<<c<<endl;
    }
    return 0;

}