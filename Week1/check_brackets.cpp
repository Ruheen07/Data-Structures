#include <iostream>
#include <string>
#include <stack>
#include <bits/stdc++.h>
using namespace std;



int main(){
    stack <char> f;
    string s;
    int i;
    cin>>s;
    for(i=0; i<s.length(); i++){
        if(s.length()==1){
            cout<<"1";
            
        }
        if(s[i]=='(' || s[i]=='{' || s[i]=='['){
            f.push(s[i]);
            continue;
        }
        
        else if((f.top()=='{' && s[i]=='}') || (f.top()=='(' && s[i]==')') || (f.top()=='[' && s[i]==']')){
            f.pop();
            continue;
        }
        
        else if((f.top()=='{' && s[i]!='}') || (f.top()=='(' && s[i]!=')') || (f.top()=='[' && s[i]!=']')){
            break;
        }
        
        else
            continue;
    }   
    if(f.empty()){
        cout<<"SUCCESS";
    }
    if(!f.empty()){
        cout<<i+1;
    }
}
