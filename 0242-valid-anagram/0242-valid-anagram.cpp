class Solution {
public:
    bool isAnagram(string s, string t) {

        if(s.size()!=t.size()){
            return false;
        }
        int n= s.size();
        vector<int> freq1(256,0);
        vector<int> freq2(256,0);

        for(int i=0; i<n; i++){
            freq1[s[i]]+=1;
            freq2[t[i]]+=1;
        }
        
        return freq1==freq2;
       
    }
};