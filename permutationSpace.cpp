#include<bits/stdc++.h>

using namespace std;

void permuation_space(string s, string op){
    if(s.size() == 0){
        cout << op << endl;
        return;
    }

    string op1 = op;
    string op2 = op;
    
    op2.push_back('-');
    op2.push_back(s[0]);
    s.erase(s.begin()+0);
    permuation_space(s,op1);
    permuation_space(s,op2);

}
int main(){

    string s;
    cin >> s;
    string op;
    op.push_back(s[0]);
    s.erase(s.begin()+0);
    permuation_space(s,op);
    return 0;
}