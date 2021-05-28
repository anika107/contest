#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){
    ll t;
    cin >> t;
    while(t --){
        ll n, m;
        cin >> n >> m;
        string s1, s2, s;
         ll in = 0, fn = 0, w = 0;
        while(n --){
            s = " ";
            cin >> s1 >> s2;
            if(s1 == "correct"){
                ll f = 0;
                for(int i = 0; i < m ;i ++){
                    if(s2[i] == '0'){
                        f = 1;
                        break;
                    }
                }
                if(f == 1){
                    in = 1;
                }
                else{
                    fn = 1;
                }
            }
            if(s1 == "wrong"){
                ll f = 0;
                for(int i = 0; i < m ;i ++){
                    if(s2[i] == '1'){
                        f ++;
                        //break;
                    }
                }
                if(f == m){
                    w = 1;
                }
            }
        }
        if(in == 1){
            cout << "INVALID" << endl;
        }
        else if(fn == 1 && w == 0){
            cout << "FINE" << endl;
        }
        else{
            cout << "WEAK" << endl;
        }
    }
    return 0;
}
