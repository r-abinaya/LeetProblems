class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> ans;
        //iterating each number
        for(int i=0;i<=n;i++){
            int sum=0;
            int num=i;
            //counting the ones 
            // while(num!=0){
            //    sum+=num%2;
            //     num=num/2;
            // }
            while(num)
            {
               num&=num-1;
                sum++;
            }
            ans.push_back(sum);
        }
        return ans;
    }
};
