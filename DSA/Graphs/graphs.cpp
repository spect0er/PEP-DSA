/*  A graph G = (V,E) consist of: 
    V -> Set of vertices(nodes) -> An indivudual object in graph
    E -> Set of edged connecting paors of vertices
    Diercted Graphs: edges have direction
    Undirected: edges have no direction
    Weighted: edges have values (weight / cost/ distance)
    Unweighted

    Path: a sequence of vertices connected edges

    Cycle: a path that start and end at the same vertex

    Degeree: in undirected graphs-> number of edges connected to a vertex in directed graphs->
                in degree: incoming edges
                out degeree: outgoing edges
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;  // number of vertices
    int m; // number of edges

    cout << "enter number of vertices: ";
    cin >> n;
    cout << "enter number of edges: ";
    cin >> m;

    map<int, list<pair<int,int>>>adjList;
    for(int i = 0 ; i < m ; i++){
        int u,v,w;
        cin >> u >> v >> w;
        adjList[u].push_back({v,w});
        adjList[v].push_back({u,w});
    }
    cout << "Adjacency List: " << endl;
    for(auto i: adjList){
        cout << i.first << ": ";
        for(auto j: i.second){
            cout << j.first << " " << j.second << " ";
        }
        cout << endl;
    }
    return 0;
}