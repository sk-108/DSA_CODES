#include<iostream>
#include<queue>
#include<vector>
using namespace std;

// bfs means printing the immediate friends
void add_edge(vector<int>adj[],int u,int v)
{
    adj[u].push_back(v);
    adj[v].push_back(u);
}

void bfs(vector<int>adj[],vector<bool>&vis,int src,queue<int>q)
{
    vis[src] = true;
    q.push(src);
    while(q.empty()==false)
    {
        int node = q.front();
        q.pop();
        cout<<node<<" ";
        for(int x:adj[node]){
            if(vis[node]==false){
            q.push(x);
            vis[node]=true;
            }
        }
    }

}   

void bfs_traversal(vector<int>adj[],int n)
{
    queue<int>q;
    vector<bool>vis(n,false);
    for(int i=0;i<n;i++)
    {
        if(vis[i]==false)
        {
            bfs(adj,vis,i,q);
        }
    }

}

int main()
{
    cout<<"enter the no of vertices "<<endl;
    int n;
    cin>>n;
    cout<<"enter the no of edges "<<endl;
    int e;
    cin>>e;
    vector<int>adj[n];
    for(int i=0;i<e;i++)
    {
        int u,v;
        cin>>u>>v;
        add_edge(adj,u,v);
    }
    bfs_traversal(adj,n);
}