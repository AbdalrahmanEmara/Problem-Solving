#include<bits/stdc++.h>
using namespace std;
#define  ll  long long
void fastIO()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

int main()
{
    fastIO();

    int nodes,edges;
    cin >> nodes >> edges;
    int adj_mat[nodes][nodes] = {}; // to set zero in all elements
    // set edges betweet nodes
    while(edges--)
    {
        int u,v;
        cin >> u >> v;
        adj_mat[u][v] = 1;
        adj_mat[v][u] = 1;
    }
    // check edges
    for(int i=0 ; i<nodes ; i++)
    {
        if(adj_mat[0][i])
            cout << i << " ";
    }
    cout << endl;

    return 0;
}