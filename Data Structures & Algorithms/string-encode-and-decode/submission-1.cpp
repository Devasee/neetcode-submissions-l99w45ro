class Solution {
public:

    string encode(vector<string>& strs) {
        string s = "";

        for(string str: strs)
        {
            s += str + "=";
        }

        return s;
    }

    vector<string> decode(string s) {
        vector<string> v;
        string str = "";

        for(int i=0; i<s.size(); i++)
        {
            if(s[i] == '=')
            {
                v.push_back(str);
                str = "";
            }

            else{
                str += s[i];
            }
        }
        return v;
    }
};
