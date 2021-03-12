#include<bits/stdc++.h>

using namespace std;

void insert(stack<int> &st, int temp){
    if(st.size() == 0){
        st.push(temp);
        return;
    }
    int val = st.top();
    st.pop();
    insert(st,temp);
    st.push(val);
}
void rev_stack(stack<int> &st){
    if(st.size() == 0){
        return;
    }
    int temp = st.top();
    st.pop();
    rev_stack(st);
    insert(st,temp);
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