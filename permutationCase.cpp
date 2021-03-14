#include<bits/stdc++.h>

using namespace std;

void permuation_case(string s, string op){
    if(s.size() == 0){
        cout << op << endl;
        return;
    }

    string op1 = op;
    string op2 = op;
    op1.push_back((s[0]));
    op2.push_back(toupper(s[0]));

    s.erase(s.begin()+0);
    permuation_case(s,op1);
    permuation_case(s,op2);

}
int main(){

    string s;
    cin >> s;
    cout << "\n";
    string op = "";
   
    permuation_case(s,op);
    return 0;
}