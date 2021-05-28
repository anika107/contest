#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){
    ll t, f = 0;
    cin >> t;
    while(t -- ){
        ll n;
        cin >> n;
        vector <ll> v;
        //ll v[100000];
        ll x;
        while(n --){
            cin >> x;
           // i ++;
           v.push_back(x);
        }
        ll c = 0;
        for(int i = 0; i < v.size() - 1; i ++){
            //cout << v[i] << endl;
            if(v[i] == v[i+1] - 1){
                cout << "Case " << ++f << ": Yes" << endl;
                c = 1;
                break;
            }
        }
        if(c == 0){
           cout << "Case " << ++f << ": No" << endl;
        }
    }
    return 0;
}
