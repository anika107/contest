#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){
    ll t;
    cin >> t;
    while(t --){
        vector <pair <ll, ll>> pr;
        ll n, p, s, e, d = 1, e_max = 0;
        cin >> n >> p;
        while(n --){
           cin >> s >> e;
           pr.push_back(make_pair(s,e));
           //e_max = max (e_max, e);

        }
       // cout << pr.size();
       vector <vector <ll>> v;
       for(int i = 0; i < pr.size(); i ++){
           //cout << pr[i].first << " " << pr[i].second << endl;
           ll s = pr[i].first;
           ll e = pr[i].second;
           for(int j = s; j <= e; j ++){
              v[j].push_back(d);
           }
           d ++;
       }

       /* for(int i = 0; i < pr.size(); i ++){
            cout << pr[i].first << " " << pr[i].second << endl;
            for(int j = pr[i].first; j <= pr[i].second; j ++){
                v[j].push_back(d);
            }
            d ++;
        }*/

        for(int i = 0; i < pr.size(); i ++){
            for(int j = 0; j < v[i].size(); j ++){
                cout << v[i][j] << " ";
            }
            cout << endl;
        }
    }
    return 0;
}
