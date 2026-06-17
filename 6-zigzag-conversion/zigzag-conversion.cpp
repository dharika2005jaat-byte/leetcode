class Solution {
public:
    string convert(string s, int numRows) {
        // Guard clause: If numRows is 1 or string length is less than rows,
        // no zigzagging is needed. Returning 's' prevents the underflow.
        if (numRows <= 1 || s.size() <= numRows) {
            return s;
        }

        string ans;
        vector <string> tmp(numRows);                                    
        
        for(int i=0, n=s.size(); i<n;){                                      
            for(int j=0; j<numRows && i<n;  j++, i++) tmp[j] += s[i];    
            for(int j=numRows - 2; j && i<n; j--, i++) tmp[j] += s[i];    
        }
        for(int j=0; j<numRows; j++) ans += tmp[j];                       
        return ans;
    }
};