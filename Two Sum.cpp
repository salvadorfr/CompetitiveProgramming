class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> res;
        int xInd = 0;

        for(int x : nums)
        {
            int yInd = 0;

            for(int y : nums)
            {
                if(xInd == yInd)
                    break;

                int rem = target - x;
                
                if(y == rem){
                    res.push_back(xInd);
                    res.push_back(yInd);
                    return res;
                }
                yInd++;
            }
            xInd++;
        }

        return res;
    }
};