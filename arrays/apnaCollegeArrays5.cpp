// Given an array of N integers where each value represents the number of chocolates in a packet. 
// Each packet can have a variable number of chocolates. There are m students, 
// the task is to distribute chocolate packets such that: 

// >Each student gets one packet.
// >The difference between the number of chocolates in the packet with 
// maximum chocolates and the packet with minimum chocolates given to the students is minimum.
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,m;
    cin>>n>>m;

    int nums[n];
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }

    // int i=0, diff=0, ans=INT_MAX;

    // int N= sizeof(nums)/sizeof(nums[0]);
    // sort(nums, nums+N);
    // m = m - 1;

    // for(i = 0; i < n - m; i++){ // Loop should go up to n - m to avoid index out of bounds.
    //     diff = nums[i + m] - nums[i];
    //     if(diff < ans){
    //         ans = diff;
    //     }
    // }
    // cout<<ans<<endl;
    
//both solutions work
    int i=0, j=0, diff=INT_MAX, mx=INT_MIN, mn=INT_MAX;;
    while(i<n){
        while((j-i) <m){
            mx= max(mx,nums[j]);
            mn= min(mn,nums[j]);
            j++;
        }
        diff= min(diff, (mx-mn));
        mx=INT_MIN; mn=INT_MAX;
        i++;
        j=i;
    }

    cout<<diff<<endl;

    return 0;
}