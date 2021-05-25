#include <bits/stdc++.h>

using namespace std;

int parent[10000], rnk[10000];
set <int> s;

int no_of_set(int n){
    for(int i = 1; i <= n; i ++){
        s.insert(parent[i]);
        cout << parent[i] << " ";
    }
    cout << endl;
    return s.size();
}
void print_component(int n){
     int x = no_of_set(n);
     set <int> ::iterator it;
     for(it = s.begin(); it != s.end(); it ++){
        for(int i = 1; i <= n; i ++){
            if(parent[i] == *it){
                cout << i << " ";
            }
        }
        cout << endl;
     }
}

int find_set(int x){
    if(x != parent[x]){
            return parent[x] = find_set(parent[x]);
    }
    return parent[x];
}
void Union(int x, int y){
    x = find_set(x);
    y = find_set(y);
    if(x == y){
        return ;
    }
    if(rnk[x] > rnk[y]){
        parent[y] = x;
    }
    else if(rnk[x] < rnk[y]){
        parent[x] = y;
    }
    else{
        parent[y] = x;
        rnk[x] ++;
    }
}
void make_set(int n){
    for(int i = 1; i <= n; i ++){
        parent[i] = i;
        rnk[i] = 0;
    }
}
int main(){
    int n;
    cin >> n;
    make_set(n);
    int e;
    cin >> e;
    int x, y;
    for(int i = 0; i < e; i ++){
        cin >> x >> y;
        Union(x, y);
    }
   // cout << no_of_set(n);
    print_component(n);
    return 0;
}
