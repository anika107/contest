#include <bits/stdc++.h>

using namespace std;
int main()
{
    int t, x, n, k, m, i, j, o, e;
    char st[10000005];
    cin >> t;
    while(t --){
        cin >> n >> m >> x >> k;
        cin >> st;
        e = 0;
        o = 0;
        for(i = 0; st[i] != '\0' ; i ++){
            if(st[i] == 'E') e ++;
            if(st[i] == 'O') o ++;
        }
        int we = e;
        int wo = o;
        int p = 0;
        for(i = 1; i <= m; i ++){
            if(i%2 != 0){
               if(wo > x){
                 wo = wo - x;
                 p ++;
               }
               else{
                   p ++;
                   break;
               }
            }
        }
        for(i = 1; i <= m; i ++){
            if(i%2 == 0){
               if(we > x){
                 we = we - x;
                 p ++;
               }
               else{
                   p ++;
                   break;
               }
            }
        }
        int mp = 0;
        for(i = 1; i <= m; i ++){
            if(i%2 != 0){
               if(o > 1){
                 o = o - 1;
                 mp ++;
               }
               else{
                   mp ++;
                   break;
               }
            }
        }
        for(i = 1; i <= m; i ++){
            if(i%2 == 0){
               if(e > 1){
                 e = e - 1;
                 mp ++;
               }
               else{
                   mp ++;
                   break;
               }
            }
        }
        if(n >= p && n <= mp)
            cout <<"yes" << endl;
        else
            cout << "no" << endl;
    }
    return 0;
}
