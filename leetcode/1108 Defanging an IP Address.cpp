class Solution {
public:
    string defangIPaddr(string address) {
        string x = address;
        string y = "";
        for(int i=0;i<x.length();i++)
        {
            if(x[i] == '.'){
                y = y + "[.]";
            }
            else
            {
                y = y + x[i];
            }
        }
        return y;
    }
};