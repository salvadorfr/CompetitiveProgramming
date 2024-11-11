class Solution {
public:
    int maximumScore(int a, int b, int c) {
        vector <int> v = { a, b, c };

        sort (v.begin(), v.end());

        int res = 0;

        while( v.at(1) ) // 0 = false
        {
            v.at(1)--;
            v.at(2)--;

            res++;

            sort (v.begin(), v.end());
        }

        return res;
    }
};