#include<bits/stdc++.h>

using namespace std;

long int gcd(long int a, long int b){
    if(b == 0)
        return a;
    return gcd(b, a % b);
}

int main(){
    long int a, b;
    cin >> a >> b;
    long int ans = gcd(a, b);
    cout << ans << endl;

    return 0;
}