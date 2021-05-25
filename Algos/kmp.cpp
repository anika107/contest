#include <bits/stdc++.h>

using namespace std;

vector <int> find_lps(string p ){
    vector <int> lps(p.size()+1);
   // cout << p.size() << lps[0] << endl;
    int j = 0, c = 0;
    for(int i = 1;i < p.size();){
       if(p[i] == p[c]){
          lps[i++] = ++c;
       }
       else{
          if(c != 0){
            c = lps[c-1];
          }
          else{
             lps[i++] = 0;
          }
       }
    }
    return lps;
}
int main(){
    string t, p;
    cin >> t >> p;
    vector <int> lps;
    lps = find_lps(p);
   /*for(int i = 0; i < p.size(); i ++){
        cout << lps[i] << " ";
    }
    cout << endl;*/
    int sz = 0, f = 0, i = 0, j = 0,c = 0;
    while(i < t.size()){
       if(t[i] == p[j]){
         i ++;
         j ++;
       }
       else{
          if(j > 0){
            j = lps[j-1];
          }
          else{
            i ++;
          }
       }
       if(j == p.size()){
         c ++;
       }
    }
    cout << c;
    return 0;
}
