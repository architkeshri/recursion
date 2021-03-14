#include<bits/stdc++.h>

using namespace std;

map<string, int> mp;

void substring(string s, string op){
    if(s.size() == 0){
        mp[op]++;
        return;
    }
    string op1 = op;
    string op2 = op;
    op2.push_back(s[0]);
    s.erase(s.begin()+0);
    substring(s,op1);
    substring(s,op2);
}

int main(){

    string s;
    cin >> s;
    string op = " ";

    substring(s,op);

    for(auto x : mp){
        cout << x.first << endl;
    }
    return 0;
}