class Solution {
public:
    int firstUniqChar(string s) {
        for( int i = 0 ; i < s.length() ; i++ )
	    {
    		char c1 =  s.at(i);

		    for( int j=0 ; j < s.length() ; j++ )
		    {
    			char c2 = s.at(j);

			    if( c1 == c2 && j != i)
    				break;
			    else if( j == s.length() -1 )
    				return i;
		    }
	    }

	    return -1;
    }
};