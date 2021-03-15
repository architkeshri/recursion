#include<bits/stdc++.h>


using namespace std;
vector<string> s;


void balanced_paranthesis(string op, int open, int close){
    if(open == 0 && close == 0){
        s.push_back(op);
        return;
    }
    string op1 , op2;

    if(open == close){
        op1 = op;
        op1.push_back('(');
        open--;
        balanced_paranthesis(op1, open, close);
      
    }
    else if(open == 0 && close != 0){
        op1 = op;
        op1.push_back(')');
        close--;
        balanced_paranthesis(op1, open, close);
    
    }
    else if(open < close){
        op1 = op;
        op2 = op;
        op1.push_back('(');
        op2.push_back(')');
        
        balanced_paranthesis(op1, open-1, close);
        balanced_paranthesis(op2, open, close-1);
    }
    
} 
int main(){

    int n;
    cin >> n;
    string op = "";
    int open = n;
    int close = n;
    balanced_paranthesis(op, open, close);
    for (int i = 0; i < s.size(); i++)
    {
        cout << s[i] << endl;
    }
    
    return 0;
}