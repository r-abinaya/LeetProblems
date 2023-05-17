class Solution {
public:
    long long interchangeableRectangles(vector<vector<int>>& rectangles) {
        // map<pair<int,int>,int> mp;
        // long long result =0;
        // for(auto& rect:rectangles)
        // {
        //     int gcd=__gcd(rect[0],rect[1]);
        //     pair<int,int> key={rect[0]/gcd,rect[0]/gcd};
        //     if(mp.find(key)!=mp.end())
        //         result+=mp[key];
        //     mp[key]++;
        // }
        // return result;
        long long result = 0;
	map<pair<int, int>, int> mp;

	for (auto& rect : rectangles)
	{
		int gcd = __gcd(rect[0], rect[1]);
		pair<int, int> key = {rect[0]/gcd, rect[1]/gcd};
		if(mp.find(key) != mp.end()) result += mp[key];
		mp[key]++;
	}

	return result;
    }
};



	

