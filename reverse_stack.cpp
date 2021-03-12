#include<bits/stdc++.h>

using namespace std;
void rev_stack(stack<int> &st){
    if(st.size() == 0){
        return;
    }
    int val = st.top();
    st.pop();
    rev_stack(st);
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

    rev_stack(st);


    while (!st.empty())
    {
        cout <<  st.top() << " ";
        st.pop();
    }

    return 0;
}