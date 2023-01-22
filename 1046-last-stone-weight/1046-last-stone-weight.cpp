class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        int n=stones.size();
        if(n==1)
            return stones[0];
        priority_queue<int> pq;
        for(int i: stones){
            pq.push(i);
            
        }
        int z;
        while(pq.size()!=1){
            int x=pq.top();
            pq.pop();
            int y=pq.top();
            pq.pop();
            if(x<y){
              z=y-x;  
            }
            else
              z=x-y;
            pq.push(z);
        }
        return pq.top();
    }
};