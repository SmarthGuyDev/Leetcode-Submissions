class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& mat) {
    vector<vector<int>> nmat(mat[0].size(),vector<int>(mat.size(),0));
    for(int i=0;i<mat.size();i++){
        for(int j=0;j<mat[0].size();j++){
            nmat[j][i]=mat[i][j];
        }    
    }
    return nmat;
    }
};