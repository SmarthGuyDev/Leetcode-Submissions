class Solution {
public:
    int furthestBuilding(vector<int>& h, int bricks, int ladders) {
         priority_queue<int> mh;
        int i = 0;
        for(i = 0; i < h.size() - 1; i++){
            int diff = h[i + 1] - h[i];
            
            if(diff <= 0){
                continue;
            }
            
        
                bricks -= diff;
                mh.push(diff);
            
            if(bricks < 0){
                bricks += mh.top();
                mh.pop();
                ladders--;
            }
            
            if(ladders < 0){
                break;
            }
        }
        return i; 
    }
};