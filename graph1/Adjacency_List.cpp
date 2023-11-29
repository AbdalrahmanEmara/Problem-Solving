#include <bits/stdc++.h>
using namespace std;

int main()
{
    int nodes, edges;
    cin >> nodes >> edges;

    vector<vector<int>> adj_list;
    adj_list.resize(nodes); // make vector with size of nodes
    // create nodes and edges
    while(edges--)
    {
        int u, v;
        cin >> u >> v;
        adj_list[u].push_back(v);
        adj_list[v].push_back(u);
    }
    // print edges for all lists in the vector
    for(int i=0 ; i<nodes ; i++)
    {
        cout << "edges with element " << i << " : ";
        for(auto v : adj_list[i])
            cout << v << " ";
        cout << endl;
    }
}