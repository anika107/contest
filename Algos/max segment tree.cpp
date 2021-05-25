#include <bits/stdc++.h>

using namespace std;
int a[900000], tree[900000];

int query(int node, int s, int e, int qs, int qe){
    if(qs > e || qe < s){
        return INT_MIN;
    }
    if(qs <= s && qe >= e){
        return tree[node];
    }
     int mid = (s+e) / 2;
     return max(query(2*mid, s, mid, qs, qe), query(2*mid+1, mid+1, e, qs, qe));

}
void build_segment_tree(int node, int s, int e){
    if(s > e){
        return;
    }
    if(s == e){
        tree[node] = a[s];
        return;
    }
    int mid = (s+e) / 2;
    build_segment_tree(2*mid, s, mid);
    build_segment_tree(2*mid+1, mid+1, e);

    tree[node] = max(tree[2*mid], tree[2*mid+1]);

}

int main(){
    int n, m, s1, s2;
    cin >> n;
    for(int i = 0; i < n; i ++){
        cin >> a[i];
    }
    build_segment_tree(1, 0, n-1);
    cin >> m;
    while(m --){
        cin >> s1 >> s2;
        cout << query(1, 0, n-1, s1-1, s2-1) << endl;
    }
    return 0;
}

