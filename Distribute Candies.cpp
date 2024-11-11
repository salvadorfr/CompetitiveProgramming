class Solution {
public:
    int distributeCandies(vector<int>& candyType) {
        unordered_set<int> types;
        int maxC = candyType.size() / 2;

        for( int x : candyType)
        {
            if( types.size() < maxC )
                types.insert(x);
        }


        return types.size();
    }
};