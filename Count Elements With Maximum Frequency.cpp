class Solution {
public:
    int howManyTimes(vector<int> vec, int n)
    {
        int count = 0;
        
        for( int i=0 ; i < vec.size() ; i++ )
            if(vec.at(i) == n)
                count++;
        
        return count;
    }

    int maxFrequencyElements(vector<int>& nums) {
        int maxFre = 0, res = 0;

        for( int i=0 ; i < nums.size(); i++ )
            if( howManyTimes(nums, nums.at(i)) > maxFre)
                maxFre = howManyTimes(nums, nums.at(i));

        for( int i=0 ; i < nums.size() ; i++ )
        {
            if( howManyTimes(nums, nums.at(i)) == maxFre)
                res++;
        }

        return res;
    }
};