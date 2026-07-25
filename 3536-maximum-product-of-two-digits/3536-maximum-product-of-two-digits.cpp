class Solution {
public:
 
    void number(int n ,  vector<int> &ans){
        int m = 0;
        while( n>0 ){
          m = n%10;
          ans.push_back(m);
          n = n/10;
        }
    }
    int maxProduct(int n) {
      vector<int> ans; 
      number(n,ans);
      sort(ans.begin(),ans.end());
      int m = ans.size();

      return ans[m-1]*ans[m-2];
    }
};