//45. Jump Game II
class Solution {
    public int jump(int[] nums) {
        int begin=0,end=0,ans=0,jump=0;
        for(int i=0;i<nums.length-1;i++){
            ans=Math.max(ans,i+nums[i]);
            if(i==end){
                jump++;
                end=ans;
            }
        }
        return jump;
    }
}

//134. Gas Station
class Solution {
    public int canCompleteCircuit(int[] gas, int[] cost) {
        int diff=0,res=0,ans=0;
        for(int i=0;i<gas.length;i++){
            diff+=(gas[i]-cost[i]);
            res+=(gas[i]-cost[i]);
            if(res<0){
                res=0;
                ans=i+1;
            }
        }
        if(diff<0 || ans>=gas.length)return -1;
        return ans;
    }
}