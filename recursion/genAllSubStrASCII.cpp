//generate all substrings along with their ascii code
#include<bits/stdc++.h>
using namespace std;

void allSubstr(string s, string ans){

    if(s.length()==0){
        cout<<ans<<endl;
        return;
    }

    char ch=s[0];
    int code=ch;
    string rest=s.substr(1);

    allSubstr(rest, ans);
    allSubstr(rest, ans+ch);
    allSubstr(rest, ans+to_string(code));
}

int main(){

    allSubstr("AB","");

    return 0;
}