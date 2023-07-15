//Given an integer array nums, return true if any value 
//appears at least twice in the array, and return false if every element is distinct.
#include<bits/stdc++.h>
using namespace std;

int main(){
    
    int n,i,j;
    cin>>n;

    int nums[n];
    for(i=0;i<n;i++){
        cin>>nums[i];
    }

    if(n==1){
        cout<<"false"<<endl;
        return 0;
    }

    int N= sizeof(nums)/sizeof(nums[0]);
    sort(nums, nums+N);

    for(i=0;i<n;i++){
        j=i+1;
        if(j<n){
            if(nums[i]==nums[j]){
                cout<<"true"<<endl;
                return 0;
            }
        }
    }
    cout<<"false"<<endl;
    return 0;
}