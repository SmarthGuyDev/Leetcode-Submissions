class Solution {
public:
    
    bool bipartiteBFS(int src, vector<vector<int>> &graph, vector<int> &colour){
    
        queue<int> q;
        q.push(src);
        
        colour[src] = 1;
        
        while(!q.empty()){
            int node = q.front();
            q.pop();
            
            for(auto it : graph[node]){
                if(colour[it] == -1){
                    colour[it] = 1 - colour[node];
                    q.push(it);
                } else if(colour[it] == colour[node]){
                    return false;
                }
            }
        }
        return true;
    }
    
    bool isBipartite(vector<vector<int>>& graph) {
        int n = graph.size();
        vector<int> colour(n, -1);
        
        for(int i = 0; i < n; i++){
            if(colour[i] == -1){
                if(!bipartiteBFS(i, graph, colour)){
                    return false;
                }
            }
        }
        return true;
    }
};