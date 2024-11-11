class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        /*
            Key = Difference
            Value = Actual Number

            Did it this way so the map gets sorted by the difrerence
            and this way we could tell wich has the largest one
        */
    
        multimap<int, int> close;

        for( int a : arr )
        {
            /* 
                Keep inserting elements difference and pop out the remaining
                , this beign the one with the largest difference
            */
            close.insert({abs(a-x), a});

            if(close.size() > static_cast<size_t>(k))
                close.erase(--close.end());
        }

        vector<int> res;

        for( auto it : close)
        {
            res.insert(res.end(), it.second);
        }

        sort(res.begin(), res.end());

        return res;
    }
};