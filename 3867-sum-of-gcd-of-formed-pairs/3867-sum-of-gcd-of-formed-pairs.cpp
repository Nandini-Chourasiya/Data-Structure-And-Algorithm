class Solution {
public:
    void mxx(vector<int>& nums, vector<int> &mx){
       mx.push_back(nums[0]);
       for(int i=1;i<nums.size();i++){
        if(mx[i-1] > nums[i]){
            mx.push_back(mx[i-1]);
        }else{
            mx.push_back(nums[i]);
        }
       }
    }

    void prefixGcdd(vector<int>& nums, vector<int> mx,vector<int> &prefixGcd){
      
      for( int i=0;i<nums.size();i++){
        int a = nums[i] ;
        int b = mx[i] ;
        prefixGcd.push_back(gcd(a, b));
      }
    }

    long long findSum( vector<int> &prefixGcd){
        int m = prefixGcd.size();
        int start = 0;
        int end = m-1;
        long long sum = 0;
        while(start < end){
          int a = prefixGcd[start];
          int b = prefixGcd[end];
          int c = gcd(a,b);
          sum += c;
          start++;
          end--;
        }
        return sum;
    }

    long long gcdSum(vector<int>& nums) {
        vector<int> mx;
        vector<int> prefixGcd;
        mxx(nums,mx);
        prefixGcdd(nums,mx,prefixGcd);
        sort(prefixGcd.begin(),prefixGcd.end());
        
        return findSum(prefixGcd);
    }
};