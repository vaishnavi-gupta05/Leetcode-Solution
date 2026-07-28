class Solution {
public:
    int findMinDifference(vector<string>& timePoints) {
        
        vector<int>minutes;
        for(int i=0; i<timePoints.size(); i++){ 
            int hour= stoi(timePoints[i].substr(0,2));
            int min= stoi(timePoints[i].substr(3,2));

            int totalMinutes= 60*hour+min;
            minutes.push_back(totalMinutes);
        }
        sort(minutes.begin(), minutes.end());
        int mini = INT_MAX;
        int n= minutes.size();

        for(int i = 0; i < n-1; i++){
            int diff= minutes[i+1] - minutes[i];
            mini = min(diff,mini);
        }
        int lastdiff= minutes[0] + 1440 - minutes[n-1];
        mini = min(mini, lastdiff);
          
        return mini;            

    }
};