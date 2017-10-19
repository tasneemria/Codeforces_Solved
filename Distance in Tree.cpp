#include<iostream>
//#include<bits/stdc++.h>
#include<list>
using namespace std;
int cnt=0;
class Graph
{

    int V;
    list<int> *arr;
    int *dTime;
    int *fTime;
    int *visited;
public:
    int time;
    Graph(int v);
    void AddEdge(int v,int w);
    void dfsVisit(int v,int k);
    void dfs(int k);
    void ShowTime();
};

Graph::Graph(int v)
{
    time = 0;
    dTime = new int[v+1];
    fTime = new int[v+1];
    visited = new int[v+1];
    V = v;
    arr = new list<int>[v+1];
}

void Graph::AddEdge(int v,int w)
{
    arr[v].push_back(w);
}

void Graph::dfsVisit(int v,int k)
{
    time = time+1;
    visited[v] = 1;
    dTime[v] = time;
    if(dTime[v]==k)
    {
        cnt++;
        return;
    }

    list<int>::iterator i;
    for(i=arr[v].begin(); i!=arr[v].end(); i++)
    {
        if(!visited[*i])
        {
            cout<<*i<<" ";
            dfsVisit(*i);
        }
    }
    time = time+1;
    fTime[v] = time;
}

void Graph::dfs(int k)
{
    for(int j=1; j<=V; j++)
    {
        for(int i=1; i<=V; i++)
        {
            visited[i] = 0;
            dTime[i] = 0;
            fTime[i] = 0;
        }
        time = 0;
        dfsVisit(j,k);
    }
}

void Graph::ShowTime()
{
    cout<<"Showing Discovery time : ";
    for(int i=1; i<=V; i++)
    {
        cout<<dTime[i]<<" ";
    }
    cout<<endl;
    cout<<"Showing Finishing time : ";
    for(int i=1; i<=V; i++)
    {
        cout<<fTime[i]<<" ";
    }
}

int main()
{
    int n,k;
    cin>>n>>k;
    int edge,v,w;
    Graph g(n);
    edge = n-1;
    for(int i=0; i<edge; i++)
    {
        cin>>v>>w;
        g.AddEdge(v,w);
    }
    g.dfs();
    //g.ShowTime();
    cout<<cnt<<endl;

    return 0;
}

