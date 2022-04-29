class Solution {
public:
    //1 -> red, -1 -> blue, 0 -> no color
    bool bipartiteBFS(int src, vector<vector<int>> &graph, vector<int> &color){
        queue<int> q;
        q.push(src);
        
        color[src] = 1;
        
        while(!q.empty()){
            auto node = q.front();
            q.pop();
            
            for(auto it : graph[node]){
                if(color[it] == 0){
                    color[it] = -color[node];
                    q.push(it);
                } else if(color[it] == color[node]){
                    return false;
                }
            }
        }
        return true;
    }
    
    
    bool isBipartite(vector<vector<int>>& graph) {
        int n = graph.size();
        vector<int> color(n, 0);
        
        for(int i = 0; i < n; i++){
            if(color[i] == 0){
                if(!bipartiteBFS(i, graph, color)){
                    return false;
                }
            }
        }
      return true;  
    }
};