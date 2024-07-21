// 443 string compression
class Solution {
public:
    int compress(vector<char>& chars) {
        int size = chars.size();
        string s = "";
        chars.push_back('*');

        int count = 1;

        for (int i = 0; i < size; i++) {
            char c = chars[i];
            if (chars[i + 1] == c) {
                count++;
            } else {
                s += c;
                if (count > 1) {
                    s += to_string(count);
                    count = 1;
                }
            }
        }
        for(int i=0;i<s.length();i++){
            chars[i]=s[i];
        }
        return s.length();
    }
};

//283 Move zeroes
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int i=0,j=0;
        while(j<nums.size()){
            if(nums[j]!=0){
                swap(nums[i],nums[j]);
                i++;
            }
            j++;
        }
    }
};