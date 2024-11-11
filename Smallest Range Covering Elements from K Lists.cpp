class Solution {
public:
    vector<int> smallestRange(vector<vector<int>>& nums) {
        int maxVal    = INT_MIN;
        int k       = nums.size();
        priority_queue <vector<int>, vector<vector<int>>, greater<vector<int>>> minHeap;

        for( int i=0 ; i < k ; i++ )
        {
            maxVal = max(maxVal, nums[i][0]);
            minHeap.push( {nums[i][0], i, 0} );
        }

        int minR = 0;
        int maxR = INT_MAX;

        while(1)
        {
            auto curr = minHeap.top();
            minHeap.pop();

            int auxVal  = curr[0];
            int r    = curr[1];
            int c    = curr[2];

            if( maxR - minR > maxVal - auxVal )
            {
                minR = auxVal;
                maxR = maxVal;
            }

            if( c < nums[r].size()-1 )
            {
                minHeap.push( {nums[r][c+1], r, c+1} );
                maxVal = max( maxVal, nums[r][c+1] );
            }else
                break;
        }

        return {minR, maxR};
    }
};