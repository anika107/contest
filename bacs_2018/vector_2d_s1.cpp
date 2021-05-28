#include <bits/stdc++.h>

using namespace std;
vector <vector <int>> v;
vector <pair <int , int>> pr;
int main(){
    int t;
    cin >> t;
    int cs = 0;
    while(t --){
    int n, s, e, e_max = 0, p;
    int c = 0, cnt, cnt_min = INT_MAX;
    cin >> n >> p;
    int d = n;
    //int f = 1;
    while(n --){
       cin >> s >> e;
       pr.push_back(make_pair(s, e));
       e_max = max(e, e_max);

    }
    for(int i = 0 ; i < e_max+1; i ++){
        vector <int> tem;
        tem.push_back(0);
        v.push_back(tem);
    }
    int f = 1;
    for(int i = 0; i < pr.size(); i ++){

        for(int j = pr[i].first; j <= pr[i].second; j ++){
            v[j].push_back(f);
        }
        f ++;
    }
     /*for(int i = 0; i < v.size(); i ++){
         for(int j = 0; j < v[i].size(); j ++){
            cout << v[i][j] << " ";
         }
         cout << endl;
    }*/
    vector <int> a(e_max+1);
    for(int i =1; i < v.size(); i ++){
        c = 0;
        fill(a.begin(), a.end(), 0);
        //memset(a, 0, sizeof a);
        for(int j = i; j < v.size(); j ++){
            for(int k = 0;k < v[j].size(); k ++ ){
                if(v[j][k] != 0){
                    if(a[v[j][k]] == 0){
                        a[v[j][k]] = 1;
                        c ++;
                    }
                    if(c == p){
                        //cout << j << " " << i << endl;
                        cnt_min = min((j-i), cnt_min);
                        break;
                    }
                }
            }

            //cnt ++;
             if(c == p){
               break;
            }
        }
    }
    cout << "Case " << ++cs<< ": " << cnt_min << endl;
    a.clear();
    pr.clear();
    v.clear();
    }
    return 0;

}

