class Solution {
public:
void Sort(string &word){
sort(word.begin(), word.end());
}
int minDistance(string word1, string word2) {
int c = 0;
Sort(word1);
Sort(word2);
int i = 0;
int n = word1.length();
int m = word2.length();
if(n != m){
c = n > m ? n - m : m - n;
return c;
}
// string mini = "";
// string maxi = "";
// mini = n < m ? word1 : word2;
// maxi = n > m ? word1 : word2;
for(auto itr : word1){
if(itr != word2[i]){
c++;
}
i++;
}
return 2 * c;
}
};