// Given a string S, the task is to print all the duplicate characters with their occurrences 
//in the given string.
// Example:

// Input: S = “geeksforgeeks”
// Output:
// e, count = 4
// g, count = 2
// k, count = 2
// s, count = 2

#include<iostream>
#include<algorithm>
using namespace std;

int main(){

    string s;
    getline(cin, s);

    int freq[26]={0};
    int i;

    for(i=0;i<s.size();i++){
        freq[s[i]-'a']++;
    }

    for(i=0;i<26;i++){ 
        if(freq[i]>1)
            cout<<char(i+'a')<<", count="<<freq[i]<<endl;
    }

    return 0;

}