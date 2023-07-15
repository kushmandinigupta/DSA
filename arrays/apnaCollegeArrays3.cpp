//Given an integer array nums, find the subarray with the largest sum, and return its sum.
#include<bits/stdc++.h>
using namespace std;

int main(){

    int n,i;
    cin>>n;

    int nums[n];
    for(i=0;i<n;i++){
        cin>>nums[i];
    }

    if (n==1)
    {
        cout<<nums[0];
    }

    int sum=0, mx=INT_MIN, mx_ele=INT_MIN;
    for(i=0;i<n;i++){
        sum+= nums[i];
        if(sum<0){
            sum=0;
        }
        mx_ele=max(mx_ele,nums[i]);
        mx=max(mx,sum);
    }

    if(mx==0){
        cout<<mx_ele<<endl;
    }
    cout<<mx<<endl;


    return 0;
}