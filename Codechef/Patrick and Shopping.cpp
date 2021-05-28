#include <bits/stdc++.h>

using namespace std;
int main()
{
    long d1, d2, d3, s1, s2, s3, s4;
    cin >> d1 >> d2 >> d3;
    s1 = (d1 * 2) + (d2 * 2);
    s2 = d1 + d3 + d2;
    s3 = (d1 * 2) + (d3 * 2);
    s4 = (d2 * 2) + (d3 * 2);
    cout << min((min(s1,s2)),(min(s3,s4)));
    return 0;
}
