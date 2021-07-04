string restoreString(string s, vector<int>& indices) {
        string str=s;
        int i=0;
        for( auto x:indices){
            str[x]=s[i];
            i++;
        }
        return str;
    }
