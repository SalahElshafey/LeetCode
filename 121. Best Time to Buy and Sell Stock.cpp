class Solution {
public:
    int maxProfit(vector<int>& arr) {
        //there were 3 approaches to this problem
        // 1) Brute Force.
        // 2) Using extra space like auxiliary array
        // 3) in linear time 
        int minSofar = arr[0], maxProfit = 0;
        for(int i = 0; i < arr.size(); i++) {
            if(arr[i] < minSofar)
                minSofar = arr[i];
            maxProfit = max(maxProfit, (arr[i] - minSofar));
        }
        return maxProfit;
    }
};
