class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> res;
		vector<int> prev,next;
		prev.push_back(1);
		res.push_back(prev);
		for(int i=1;i<numRows;i++) {
			next=vector<int>(i+1,1);  //initialize a vector with 1 for n values 
			for(int j=1;j<i;j++) {
				next[j]=prev[j]+prev[j-1];    //update the vactor except first and last with sum values
			}
			res.push_back(next);   //push vector into the result vector
			prev=next;
		}
		return res;
    }
};