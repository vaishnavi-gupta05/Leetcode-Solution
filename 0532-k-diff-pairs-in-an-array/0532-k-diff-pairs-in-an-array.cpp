class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
        int i=0;
        int j=1;
        int count=0;

        sort(nums.begin(), nums.end());

        while(j<nums.size()){

            if(i==j){
                j++;
                continue;
            }

            int diff= nums[j]-nums[i];

            
            if(diff<k){
                j++;
            }
            else if(diff>k){
                i++;
            }
            else{
                count++;
                i++;
                j++;

                while (i < nums.size() && nums[i] == nums[i - 1]) {
                    i++;  //removing duplicate pairs 
                }
                
                while (j < nums.size() && nums[j] == nums[j-1]){
                    j++;  //removing duplicate pairs
                }
            }
        }
        return count;
        
    }
};