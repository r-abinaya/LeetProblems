class Solution {
public:
    int hammingWeight(uint32_t n) {
        int count=0;
        while(n){
             n&=n-1;          //n-1 makes the bits 1 after the first bit 1 from right
            count++;
        }
        return count;
    }
};


