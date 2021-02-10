#include <bits/stdc++.h>

using namespace  std;
#define M 10000007 


unsigned long long int modpower(long int a, long int b){
    if(b == 0)
        return 1;
    unsigned long long int x = modpower(a, b/2);
    x = (x * x)%M;
    if(b & 1){
        x = (x * a)%M;
    }
    return x;

}

int main(){
    long int n,k;
    
   
    do
    {   
        unsigned long long int ans;
        cin >> n >>k;
        if(n != 0 && k != 0){
            ans = (2 * modpower(n-1,k) + modpower(n,k) + 2 * modpower(n-1,n-1) + modpower(n,n)) % M;
             cout << ans << endl;
        }
       
       
       
    } while (n != 0 && k !=0);
    
    
    return 0;
}