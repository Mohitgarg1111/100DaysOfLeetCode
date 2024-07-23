//1679. Max Number of K-Sum Pairs
class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int i=0;
        int j=nums.size()-1;
        int count=0;

        while(i<j){
            if((nums[i]+nums[j])==k){
                i++;
                j--;
                count++;
            }
            else if((nums[i]+nums[j])<k){
                i++;
            }
            else if((nums[i]+nums[j])>k){
                j--;
            }
        }
        return count;
    }
};

//643. Maximum Average Subarray I
class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int currsum=0;

        for(int i=0;i<k;i++){
            currsum+=nums[i];
        }
        int maxx=currsum;

        for(int i=k;i<nums.size();i++){
            currsum+=(nums[i]-nums[i-k]);
            maxx=max(maxx,currsum);
        }

        return (double)maxx/k;
    }
};