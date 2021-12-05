#include<iostream>
#include<vector>
using namespace std;

void add_edge(vector<int>adj[],int u,int v)
{
    adj[u].push_back(v);
    adj[v].push_back(u);
}

void print_graph(vector<int>adj[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<i;
        for(int x:adj[i])
        {
            cout<<" "<<x<<" ";
        }
        cout<<endl;
    }
}

int main()
{
    int n;
    cout<<"enter the no of vertices "<<endl;
    cin>>n;
    vector<int>adj[n];
    cout<<"enter the no of edges "<<endl;
    int e;
    cin>>e;
    for(int i=0;i<e;i++)
    {
        int u,v;
        cin>>u>>v;
        add_edge(adj,u,v);
    }
    print_graph(adj,n);


}