#include<iostream>
using namespace std;
/*Write a program in C++ to find prime number within a range. Go to the editor
Input number for starting range: 1
Input number for ending range: 100
The prime numbers between 1 and 100 are:
2 3 5 7 11 13 17 19 23 29 31 37 41 43 47 53 59 61 67 71 73 79 83 89 97
The total number of prime numbers between 1 to 100 is: 25*/
int main()
{
    int n,c;
    c=0;
    cout<<"enter the value you want to find prime numbers till"<<endl;
    cin>>n;

    for (int i = 2; i <= n; i++)
    {
        for (int j = 2; j <i ; j++)
        {
            if (i%j==0)
            {
                c=1;
            }
            
        }
        if (c==0)
        {
            cout<<i<<endl;
        }
        c=0;
        
    }
    

    return 0;
}