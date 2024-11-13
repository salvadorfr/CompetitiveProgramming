class Solution {
public:
    vector<int> decode(vector<int>& encoded, int first) {
        vector<int> res;
        res.push_back( first );
    
        for( int i=0 ; i < encoded.size() ; i++ )
        {
            first = encoded.at(i) ^ first;
            res.push_back( first );
        }

        return res;
    }
};