/*Write a program in C++ to find the factorial of a number. Go to the editor
Sample output:
Input a number to find the factorial: 5
The factorial of the given number is: 120*/
#include<iostream>
using namespace std;

int main() {
    int n,fact=1;
    cout<<"enter the number you want to find the factorial of\n";
    cin>>n;

    for (int i = 1; i <=n; i++)
    {
        fact=fact*i;
    }
    cout<<fact;
    
    return 0;
}