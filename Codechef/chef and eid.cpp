#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){
    ll t, n;
    cin >> t;
    while(t --){
        cin >> n;
        ll x;
        vector <ll> v;
        while(n --){
            cin >> x;
            v.push_back(x);
        }
        sort(v.begin(), v.end());
        if(v.size() == 2){
            cout << v[1] - v[0] << endl;
            continue;
        }
        ll m = LONG_MAX;
        for(int i = 0; i < v.size()-1; i ++){
            m = min(m, v[i+1] - v[i]);
        }
        cout << m << endl;
    }
    return 0;
}
