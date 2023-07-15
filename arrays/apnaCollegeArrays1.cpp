//Given an array of size N. The task is to find the maximum and the minimum 
//element of the array using the minimum number of comparisons.
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,i;
    cin>>n;

    int a[n];
    for(i=0;i<n;i++){
        cin>>a[i];
    }

    int mn=INT_MAX, mx= INT_MIN;
    for(i=0;i<n;i++){
        mn= min(mn,a[i]);
        mx= max(mx,a[i]);
    }
    cout<<"Minimum element is: "<<mn<<endl;
    cout<<"Mamimum element is: "<<mx<<endl;

    return 0;
}