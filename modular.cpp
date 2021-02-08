#include<bits/stdc++.h>

using namespace std;

long int modpower(long int a, long int n, long int m){
    if(n == 0)
        return 1;
    long int x = modpower(a, n/2, m);
    x = (x * x) % m;
    if(n & 1){
        x = (x * a) % m;
    }
    return x;
}

int main(){
    long int a, n, m;
    cin >> a >> n >> m;
    long int x = modpower(a, n, m);
    cout << x;

    return 0;
}