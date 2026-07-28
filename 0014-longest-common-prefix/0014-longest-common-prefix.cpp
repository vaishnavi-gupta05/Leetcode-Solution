class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        // if array is empty i.e no prefix
        if(strs.empty()) {
            return "";
        }
        // strating with whole strs[0] as prefix
        string prefix= strs[0];

        for(int i=1; i<strs.size(); i++){
            // if strs [i] doesnt have prefix then will reduse prefix by removing last character
            while(strs[i].find(prefix)!=0){
                prefix= prefix.substr(0, prefix.size()-1);
                // if prefix is empty i.e no prefix
                if(prefix.empty()){return "";}

            }

        }
        
        return prefix;
               
    }
};