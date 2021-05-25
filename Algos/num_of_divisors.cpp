#include <bits/stdc++.h>

using namespace std;
int main()
{
    int n, i, j, c = 0;
    cin >> n;
    for(int i = 1; i <= n / i; i ++){
        if(n%i == 0 ){
            if((n/i) == i){
               c ++;
            }
            else{
               c += 2;
            }

        }

    }
    cout << c;
    return 0;
}

