#include <bits/stdc++.h>
#define ll long long int
using namespace std;

ll bin_pow(ll a, ll b){
    ll r = 1;
    while(b){
        if(b&1){
            r = r * a;
        }
        a = a*a;
        b >>= 1;
    }
    return r;
}
int main(){
    ll a, b;
    cin >> a >> b;
    cout << bin_pow(a, b);
    return 0;
}
