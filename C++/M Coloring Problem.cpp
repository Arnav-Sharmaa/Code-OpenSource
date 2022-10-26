// M coloring problem - (can be through 2 ways backtracking going through every path or by simple bfs )

#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    ll t;
    cin>>t;
    while(t--)
    {
    	ll n,m,e;
    	cin>>n>>m>>e;
    	vector<int> adj[n];
    	for(int i=0;i<e;i++){
    		int a,b;
    		cin>>a>>b;
    		adj[a-1].push_back(b-1);
    		adj[b-1].push_back(a-1);
    	}		
    	vector<int> vis(n,0);
    vector<int> color(n,1);
    int maxicolor=1;
    for(int i=0;i<n;i++){
        if(!vis[i]){
            vis[i]=1;
            queue<int> q;
            q.push(i);
            while(!q.empty()){
                int front=q.front();
                q.pop();
                for(auto it:adj[front]){
                    if(color[it]==color[front]){
                        color[it]++;
                        maxicolor=max(maxicolor,color[it]);
                    }
                    if(!vis[it]){
                        q.push(it);
                        vis[it]=1;
                    }
                }
            }
        }
    }
    if(maxicolor<=m)
    cout<<1<<"\n";
    else cout<<0<<"\n";
    }
}