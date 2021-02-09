#include<bits/stdc++.h>

using namespace std;

const int N = 10000007;
long int pf[N] = {0};

int main(){
    int n;
    cin >> n;
    int a[n];
    for(int i = 1; i <= n; ++i){
        cin >> a[i];
        pf[i] = pf[i-1] + a[i];
    }
    int t;
    cin >> t;
    while(t--){
        int l, r;
        cin >> l >> r;
        cout << pf[r] - pf[l-1] << endl;
    }
    return 0;
}