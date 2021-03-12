#include<bits/stdc++.h>

using namespace std;

void insert(vector<int> &v,int temp, int top){
    if(top == -1 || v[top] <= temp){
        v.push_back(temp);
        return;
    }
    int val = v[top];
    v.pop_back();
    top--;
    insert(v,temp,top);
    v.push_back(val);
}
void sort_stack(vector<int> &v, int top){
    if(top == 0){
        return;
    }
    int temp = v[top];
    v.pop_back();
    top--;
    sort_stack(v,top);
    insert(v,temp,top);
}
int main(){

    vector<int> v  = {1,0,8,4,6,2};
    int top = 5;
    sort_stack(v,top);

    for (int i = 0; i < 6; i++)
    {
        
        cout << v[i] << " ";
    }
    
    return 0;
}