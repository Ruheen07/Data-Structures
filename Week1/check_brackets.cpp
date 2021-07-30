#include <iostream>
#include <string>
#include <bits/stdc++.h>
using namespace std;



int main(){
    stack<char> f;
    string s;
    cin>>s;
    for(int i=0; i<s.length(); i++){
        if(s[i]=='(' || s[i]=='{' || s[i]=='['){
            f.push(s[i]);
            continue;
        }
        if(s[i]==')' || s[i]=='}' || s[i]==']'){
            f.push(s[i]);
        }
    }
    if(stack.empty())
        cout>>"Success";
    else
        cout>>f.size();
}