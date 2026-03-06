void dfs(int node,vector<vector<pair<int,int>>>&adj,vector<int>&visited,stack<int>&st){
    visited[node] = 1;
    for(auto &i: adj[node]){
        int neighbour = i.first;
        if(!visited[neighbour]){
            dfs(neighbour,adj,visited,st);
        }
    }
    // after visited all neighbours, push current node into stack (from here i cannot go further to any neighbour)

    st.push(node);
}
vector<int> shortestPathInDAG(int n, int m, vector<vector<int>> &edges)
{
    // Write your code here
    // first we need an integer list to map u,v,w through dfs and also need a topological order of the node by using dfs.
    // the stack will have the distance vector in order of topological sort
    // then we will take the top element of stack and go to it's neiighbours and compare the distance which they currently have and the distance which we calculated from that specific node and upadte it with the smalller one.

    vector<vector<pair<int,int>>>adj(n);
    vector<int>visited(n,0);
    stack<int>st;
    vector<int>dist(n,INT_MAX);
    for(int i = 0 ; i < m ; i++){
        int u = edges[i][0];
        int v = edges[i][1];
        int w = edges[i][2];
        adj[u].push_back({v,w});
    }
    for(int i = 0 ; i < n ; i++){
        if(!visited[i]){
            dfs(i,adj,visited,st);
        }
    }
    dist[0] = 0;
    while(!st.empty()){
        int node = st.top();
        st.pop();
        if(dist[node] != INT_MAX){
            for(auto &edge: adj[node]){
            int neighbour = edge.first;
            int weight = edge.second;
            if(dist[node] + weight < dist[neighbour]){
                dist[neighbour] = dist[node] + weight;
            }

        }
        }
        
    }
    for(int i = 0 ; i < n ; i++){
        if(dist[i] == INT_MAX){
            dist[i] = -1;
        }
    }

    return dist;
    


}
