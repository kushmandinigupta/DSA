#include<iostream>
using namespace std;

/*Q1. Write a program in C++ to find the perfect numbers between 1 and 500. 
(what is perfect number????
a perfect number is a positive integer that is equal to the sum of its positive divisors, 
excluding the number itself.)*/

int main() {
    int sum=0;

    for (int i=1; i<=500; i++)
    {
        for (int j=1; j<i; j++)
        {
            if (i%j==0)
            {
                sum=sum+j;
            }
        }
         //cout<<sum<<endl;
        if(sum==i){
            cout<<sum;
            cout<<" is perfect"<<endl;
        }
    sum=0;
    }
    
    return 0;
}
