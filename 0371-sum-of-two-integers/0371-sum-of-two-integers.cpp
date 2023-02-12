class Solution {
public:
    int getSum(int a, int b) {
        uint carry = a & b;
        uint add = a ^ b;

        return (carry) ? getSum(add,carry<<1) : add;

    }
};