#include<bits/stdc++.h>
using namespace std;

// Topological Sort: It is the linear order of the vertices of a graph.
// when we write linear order for a graph then for every edge between u->v, u must appear before v in that ordering.
// only valid for directed acyclic graph
// we need a visited vector and a stack and adjacency list for this sort.
// we will call dfs on the graph and then when be backtrack, we keep pushing the nodes in the stack and then pop the elements out which will be a linear order.
class Solution {
  public:
    void dfs(int node,vector<vector<int>>&adj,vector<bool>&visited,stack<int>&st){
        visited[node] = true;
        for(int i: adj[node]){
            if(!visited[i]){
                dfs(i,adj,visited,st);
            }
        }
        st.push(node);
    }
    vector<int> topoSort(int V, vector<vector<int>>& edges) {
        // code here
        vector<vector<int>>adj(V);
        for(auto &i: edges){
            int u = i[0];
            int v = i[1];
            adj[u].push_back(v);
        }
        vector<bool>visited(V,false);
        stack<int>st;
        // call dfs for all unvisited nodes
        for(int i = 0 ; i < V ; i++){
            if(!visited[i]){
                dfs(i,adj,visited,st);
            }
        }
        vector<int>ans;
        while(!st.empty()){
            ans.push_back(st.top());
            st.pop();
        }
        return ans;
    }
};