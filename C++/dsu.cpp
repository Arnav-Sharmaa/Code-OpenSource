#include<bits/stdc++.h>
using namespace std;

class DSU {
public:
    int v;
    vector<int> parent, rank;
    DSU(int v) {
        this->v = v;
        parent.resize(v);
        rank.resize(v, 1);
        iota(parent.begin(), parent.end(), 0);
    }
    int findSet(int u) {
        if (parent[u] == u) return u;
        return parent[u] = findSet(parent[u]);
    }
    void unionSet(int u, int v) {
        int s1 = findSet(u);
        int s2 = findSet(v);
        if (s1 == s2) return;
        if (rank[s1] < rank[s2]) {
            parent[s1] = s2;
            rank[s2] += rank[s1];
        } else {
            parent[s2] = s1;
            rank[s1] += rank[s2];
        }
    }
};

int main() {
    
}
