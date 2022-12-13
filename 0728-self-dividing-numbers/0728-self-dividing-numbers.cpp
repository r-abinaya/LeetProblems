class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int> ans;
         for (int i = left, n = 0; i <= right; i++) {
            for (n = i; n > 0; n /= 10)
                if (!(n % 10) || i % (n % 10)) break;
            if (!n) ans.push_back(i);
         }
        return ans;
    }
};


      