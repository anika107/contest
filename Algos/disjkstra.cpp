#include <bits/stdc++.h>
#define MAX 502
#define MEM(p, v) memset(p, v, sizeof(p))
using namespace std;
struct Node {
int node, cost, par;
Node() { node = 0; cost = 0; par = 0; }
Node(int _a, int _b, int _c) : node(_a), cost(_b), par(_c) {}
bool operator< (const Node &A) const {
return cost > A.cost;
}
};
int dist[MAX], visited[MAX], inf;
vector<Node> G[MAX];
vector<int> P[MAX];
vector<pair<int, int> > spedges; //shortest path edges
void btrack(int n) {
if (P[n].size() == 0 || visited[n]) return;
visited[n] = 1;
for (int i = 0; i<P[n].size(); i++) {
int pr = P[n][i];
spedges.push_back(make_pair(n, pr));
btrack(pr);
}
}
void dijkstra(int s, int d) {
MEM(visited, 0);
MEM(dist, 127);
dist[s] = 0;
Node nd(s, 0, -1);
priority_queue<Node> Q;
Q.push(nd);
while (!Q.empty()) {
int cn = Q.top().node;
int dst = dist[cn];
Node tp = Q.top(); Q.pop();
if (dst == tp.cost && cn != s) {
P[cn].push_back(tp.par);
}
if (visited[cn])continue;
for (int i = 0; i < G[cn].size(); i++) {
int n = G[cn][i].node;
int c = G[cn][i].cost;
if (dst + c <= dist[n]) {
dist[n] = dst + c;
Q.push(Node(n, dist[n], cn));
}
}
visited[cn] = 1;
}
}
int main() {
ios_base::sync_with_stdio(0);
cin.tie(0);
//freopen("input.txt", "r", stdin);
//cin >> r;
int n, e, a, b, c, s, d;
cin >> n >> e;
for (int i = 0; i<e; i++) {
cin >> a >> b >> c;
G[a].push_back(Node(b, c, -1));
G[b].push_back(Node(a, c, -1));
}
cin>> s >> d;
dijkstra(s, d);
memset(visited, 0, sizeof(visited));
btrack(d);
for (int i = 0; i<spedges.size(); i++)
cout << spedges[i].first << " " << spedges[i].second <<endl;
}
