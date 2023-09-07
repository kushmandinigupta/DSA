#include<bits/stdc++.h>
using namespace std;

string keyPadCh[]={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};

void keyPad(string s, string ans){
    if(s.length()==0){
        cout<<ans<<endl;
        return;
    }

    char ch=s[0];
    string key=keyPadCh[ch-'0'];
    string rest=s.substr(1);

    for(int i=0;i<key.length();i++){
        keyPad(rest, ans+key[i]);
    }
}

int main(){

    keyPad("23","");
    return 0;

}