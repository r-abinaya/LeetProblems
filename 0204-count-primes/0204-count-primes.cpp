class Solution {
public:
    int countPrimes(int n) {
          vector<bool> seen(n,false);
          int ans=0;
          for(int i=2;i<n;i++)
          {
              if(seen[i]) continue;
              ans++;
              for(int mul=i;mul<n;mul=mul+i)
                  seen[mul]=true;
          }
        
        return ans;
    }
};

     
//             for (long mult = (long)num * num; mult < n; mult += num)
    