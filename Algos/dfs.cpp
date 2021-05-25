#include <bits/stdc++.h>

using namespace std;


vector <int> color(10000);
vector <int> start(10000);
vector <int> finish(10000);

int t = 0;

void dfs(int j){
    color[j] = 1;
    t ++;
    start[j] = t;
    for(int i = 0; i < v[j].size(); i ++){
        if(color[v[j][i]] == 0){
            dfs(v[j][i]);
        }
    }
    color[j] = 2;
    t ++;
    finish[j] = t;
}
int main(){
    int e, v, x, y, c = 0;
    cin >> v >> e;
    for(int i = 0; i < 2000; i ++){
        v[i].clear();
    }
    for(int i = 0; i < e; i ++){
        cin >> x >> y;
        v[x].push_back(y);
        v[y].push_back(x);
    }
    for(int i = 1; i <= v; i ++){
        if(color[i] == 0){
            dfs(i);
            c ++;
        }
    }
    cout << c;

    return 0;
}
