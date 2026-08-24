class Solution {
public:
    string convert(string s, int numRows) {
        if (numRows == 1) return s;
    int i=0,h=1;
    vector<string>b(numRows);
    for(auto ch:s){
        b[i]+=ch;
        if(i==0)
        {
            h=1;
        }
        else if(i==numRows-1)
        {
            h=-1;
        }
        i+=h;

    }
    string res;
    for(const string&b:b){
        res+=b;
    }
    return res;
    }
};