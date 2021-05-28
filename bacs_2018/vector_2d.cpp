#include <bits/stdc++.h>

using namespace std;
int main(){
    int n, s, e;
    cin >> n;
    vector <vector <int>> v;
    int d = n;
    while(n --){
       cin >> s >> e;
       int f = 1;
       for(int i = s; i < e; i ++){
          if(v.size() == 0 || v.size() <= i){
              vector <int> tem;
              tem.push_back(f);
              v.push_back(tem);
          }
          else{
             v[i].push_back(f);
          }
          f ++;
       }
    }
     for(int i = 0; i < d; i ++){
         for(int j = 0; j < v[i].size(); j ++){
            cout << v[i][j] << " ";
         }
         cout << endl;
    }

}
