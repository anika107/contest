#include <bits/stdc++.h>

using namespace std;


int main()
{
    long t, c, h, e, f, i, j, flag = 0;
    cin >> t;
    char tx[500005];
    while(t --){
        flag = 0;
        cin >> tx;
        for(i = 0; tx[i] != '\0'; i ++){
            c = 0;
            h = 0;
            e = 0;
            f = 0;
            for(j = i; j < i + 4; j ++){
                if(tx[j] == 'c') c ++;
                else if(tx[j] == 'h') h ++;
                else if(tx[j] == 'e') e ++;
                else if(tx[j] == 'f') f ++;
            }
            if(c == 1 && h == 1 && e == 1 && f == 1)
                flag ++;
        }

        if(flag == 0) cout <<"normal"<<endl;
        else cout << "lovely " << flag << endl;
    }
    return 0;
}
