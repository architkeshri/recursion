#include<bits/stdc++.h>


using namespace std;

void pop_mid_stack(stack<int> &st,int n){
    int static m = n;
    if(m/2 + 1 == n){
        st.pop();
        return;

    }
    int val = st.top();
    st.pop();
    pop_mid_stack(st,st.size());
    st.push(val);
}
int main(){

    stack<int> st;
    int n;
    cin >> n;
    while (n--)
    {
        int x;
        cin >> x;
        st.push(x);
    }

    pop_mid_stack(st,st.size());
    

    while (!st.empty())
    {
        cout << " " <<  st.top();
        st.pop();
    }
    
    
    
    return 0;
}