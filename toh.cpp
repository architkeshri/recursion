#include<bits/stdc++.h>

using namespace std;

void toh(int n, char s, char d, char h){
    if(n == 1){
        cout << "moving plate "  << n <<  " " << s << " to " << d << endl;
        return;
    }
    toh(n-1,s,h,d);
    cout << "moving plate " << n << " " << s << " to " << d << endl;
    toh(n-1,h,d,s);
}
int main(){

    char s = 'S';
    char h = 'H';
    char d = 'D';
    int n;
    cout << "enter number of plates";
    cin >> n;
    toh(n,s,d,h);
    return 0;
}