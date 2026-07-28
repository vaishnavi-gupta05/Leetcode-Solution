class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {

        int l=0;
        int h= arr.size()-1;


        
        while(h-l>=k){
            if(abs(x-arr[l])>abs(x-arr[h])){
                l++;
            }
            else if(abs(x-arr[l])<abs(x-arr[h])){
                h--;
            }
            else{
                h--;
            }
        }

        vector<int> ans;

        for(int i=l;i<=h;i++)
            ans.push_back(arr[i]);

        return ans;


        


        
    }
};