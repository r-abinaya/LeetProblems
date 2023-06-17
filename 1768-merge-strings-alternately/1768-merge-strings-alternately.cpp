class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        if(word1=="")
            return word2;
        if(word2=="")
            return word1;
        int i=-1,j=-1;
        string alter="";
        while(word1[++i]!='\0'&&word2[++j]!='\0')
        {
            alter+=word1[i];
            alter+=word2[j];
        }
        if(word1[i]=='\0')
            alter+=word2.substr(i,word2.length());
        else if (word2[i]=='\0')
            alter+=word1.substr(i,word1.length());
        return alter;
         
    }
};