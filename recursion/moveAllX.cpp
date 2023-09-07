//move all the 'x' present in the string to the end
#include<bits/stdc++.h>
using namespace std;

string moveAllX(string s){

    if(s.length()==0){
        return "";
    }

    char ch=s[0];
    string rest=moveAllX(s.substr(1));

    if(ch=='x'){
        return rest+ch;
    }else{
        return ch+rest;
    }
}

int main(){

    cout<<moveAllX("axxbdx")<<endl;
    return 0;
}