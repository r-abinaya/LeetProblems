//{ Driver Code Starts

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution{
	public:
   	vector<int>  common_digits(vector<int>nums){
   	    // Code here
   	    map<int,int> mp;
   	    vector<int> ans;
   	    for(int i=0;i<nums.size();i++){
   	        while(nums[i])
   	        {
   	            int r=nums[i]%10;
   	            nums[i]=nums[i]/10;
   	            mp[r]++;
   	        }
   	    }
   	    for(auto& i:mp){
   	        ans.push_back(i.first);
   	    }
   	    return ans;
   	}    
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		cin >> n;
		vector<int>nums(n);
		for(int i = 0; i < nums.size(); i++)cin >> nums[i];
		Solution ob;
		vector<int> ans = ob.common_digits(nums);
		for(auto i: ans)
			cout << i << " ";
		cout << "\n";
	}  
	return 0;
}
// } Driver Code Ends