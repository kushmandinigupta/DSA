#include<iostream>
using namespace std;

/*Write a program in C++ to find the Greatest Common Divisor (GCD) of two numbers. Go to the editor
Sample Output:
Input the first number: 25
Input the second number: 15
The Greatest Common Divisor is: 5*/
int main() {

    int n,n1,n2,gcd=0;
    cout<<"Input the first number\n";
    cin>>n1;
    cout<<"Input the second number\n";
    cin>>n2;

    if (n1>>n2)
    {
        n=n1;
    }
    else
    {
        n=n2;
    }
    
    for (int i = 1; i <= n; i++)
    {
        if (n1%i==0)
        {
            if (n2%i==0)
            {
                gcd=i;
            }
            
        }        
    }

    cout<<"the GCD of the given numbers is\n";
    cout<<gcd<<endl;

    return 0;
}