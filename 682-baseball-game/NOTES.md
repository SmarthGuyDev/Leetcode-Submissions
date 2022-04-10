class Solution {
public:
int calPoints(vector<string>& ops) {
vector<int> ans;
int size = 0;
for(auto i : ops){
if(i == "+"){
ans.push_back(ops[size - 1] + ops[size - 2]);
size++;
} else if(i == "D"){
ans.push_back(2 * ops[size - 1]);
size++;
} else if(i == "C"){
ans.pop_back(ops[size - 1]);
} else {
size++;
ans.push_back(stoi(i));
}
}
int sum = 0;
for(auto i : ans){
sum += ans[i];
}
return sum;
}
};