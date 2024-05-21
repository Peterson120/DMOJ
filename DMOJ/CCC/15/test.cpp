#include <bits/stdc++.h>

using namespace std;

struct dsu
{
    int parent[100001];
    dsu()
    {
        for(int i=0; i<100001; i++)
            parent[i]=i;
    }
    int find(int u)
    {
        if(parent[u]!=u)
            parent[u]=find(parent[u]);
        return parent[u];
    }
    void merge(int u, int v)
    {
        parent[find(u)]=find(v);
        printf("%d %d %d %d\n", u, v, find(u), find(v));
    }
} ds;

int N, M;

int main()
{
    scanf("%d%d", &N, &M);
    int a;
    for(int i=0; i<M; i++)
    {
        scanf("%d", &a);
        int x=ds.find(a);
        printf("%d\n", x);
        if(x==0)
        {
            printf("%d\n", i);
            return 0;
        }
        ds.merge(x, x-1);
    }
    printf("%d\n", M);
    return 0;
}
