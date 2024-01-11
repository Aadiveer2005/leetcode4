class Solution {
public:
    int singleNumber(vector<int>& nums) { 
       unordered_map<int,int> a;
	   for(auto x: nums)
		   a[x]++;
	   for(auto it:a)
		   if(it.second==1)
			   return it.first;
	   return -1;
    }
};