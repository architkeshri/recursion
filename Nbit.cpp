#include<bits/stdc++.h>


using namespace std;

vector<string> ans;

void solve(int N, string op, int count1, int count0){
    if(N == 0){
        ans.push_back(op);
        return;
    }
    string op1, op2;
    if(count1 >= count0+1){
        
        op1 = op;
        op2 = op;
        op1.push_back('1');
        op2.push_back('0');
        solve(N-1, op1, count1+1, count0);
        solve(N-1, op2, count1, count0+1);
    }
    else{
        op1 = op;
        op1.push_back('1');
        solve(N-1, op1, count1+1, count0);
    }
}


int main(){
    int N;
    cin >> N; 
    string op = "1";
    int count1 = 1;
    int count0 = 0;
    solve(N-1, op, count1, count0);
    for (int i = 0; i < ans.size(); i++)
  {
      cout << ans[i] << endl;
  }
  

    return 0;
}


