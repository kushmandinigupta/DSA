/*Write a program in C++ to find the sum of digits of a given number. Go to the editor
Sample Output:
Input a number: 1234
The sum of digits of 1234 is: 10*/

#include<iostream>
using namespace std;
int main() {

    int n,temp,num,sum,c=0;

    cout<<"Enter the number"<<endl;
    cin>>n;

    temp=num=n;

    while (num>0)
    {
        num=num/10;
        c=c+1;
    }
     

   for (int i = 0; i<c; i--)
   {
      temp=temp%10;
      sum=sum+temp;
      
   }
   cout<<sum<<endl; 

    return 0;
}