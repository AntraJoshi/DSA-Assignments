 string longestCommonPrefix(vector<string>& strs) {
        string res="";
        int i=0,l=strs.size();
        sort(strs.begin(),strs.end());
        string str1=strs[0],str2=strs[l-1];
        while(i<str1.size() && str1[i]==str2[i]){
            res+=str1[i];
            i++;
        }
        return res;
    }
