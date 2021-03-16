#include<bits/stdc++.h>

using namespace std;
void josephus(vector<int> &person, int k, int sword){
    if(person.size() == 1){
        cout << person[0];
        return;
    }
    sword = (sword + k) % person.size();
    person.erase(person.begin() + sword);
    josephus(person, k, sword);
}
int main(){

    int n, k;
    cin >> n >> k;
    vector<int> person;
    for (int i = 1; i <= n; i++)
    {
        person.push_back(i);
    }
    k--;
    int sword = 0;
    josephus(person, k, sword);    

    return 0;
}