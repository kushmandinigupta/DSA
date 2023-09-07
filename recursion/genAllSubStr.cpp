//generate all substrings
#include<bits/stdc++.h>
using namespace std;

void allSubstrings(string s, string ans){

    if(s.length()==0){
        cout<<ans<<endl;
        return;
    }

    char ch=s[0];
    string rest=s.substr(1);

    allSubstrings(rest, ans);
    allSubstrings(rest, ans+ch);
}

int main(){

    allSubstrings("ABC","");
    return 0;
}