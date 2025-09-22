class Solution {
public:
    string convert(string s, int numRows) {
        if(numRows==1 || s.size()<=numRows) return s;
        vector<string> rows(s.size());
        int curr=0;
        bool dir=true;
        for(char ch:s){
            rows[curr]+=ch;
            if(curr==0 || curr==numRows-1) dir=!dir;
            curr+= dir?-1:1;
        }
        string res="";
        for(string ch:rows){
            res+=ch;
        }
        return res;
    }
};
