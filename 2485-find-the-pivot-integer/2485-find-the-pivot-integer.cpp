class Solution {
public:
    int pivotInteger(int num) {
        int n=num;
        int sum=0;
        for(int i=1;i<=n;i++) 
            sum+=i;
        int mid=sum/2;
        while(sum>mid){
            sum-=n;
            n--;
        }
        int sum1=0;
        for(int i=1;i<=n+1;i++){
            sum1+=i;
        }
        for(int i=n+1;i<=num;i++){
            sum1-=i;
        }
        if(sum1==0) return n+1;
        return -1;
    }
};
