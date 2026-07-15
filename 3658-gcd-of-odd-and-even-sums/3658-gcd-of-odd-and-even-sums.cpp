class Solution {
public:
    int oddSum(int n){
        int sum = 0;
        for( int i =1 ;i<=n+n;i++){
           if( i%2 == 1)
           sum += i;
        }
        return sum;
    }
    int evenSum(int n){
        int sum = 0;
        for( int i =1 ;i<=n+n;i++){
           if( i%2 == 0)
           sum += i;
        }
        return sum;
    }
    int gcdOfOddEvenSums(int n) {
        
        int odd = oddSum(n) ;
        int even = evenSum(n);
        int k = max(odd,even);
        int m = INT_MIN;
        for(int i =1;i<=k;i++ ){
            if(odd%i == 0 && even%i == 0){
             m = max(i,m);
            }
        }
            
        return m;
    }
};