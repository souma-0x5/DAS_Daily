class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int read = 0, write = 0;

        for(read = 0; read < nums.size(); read++)
        {
            if(nums[read] != 0)
            {
                nums[write] = nums[read];
                write++;
            }
        } 

        for(int i = write; i < nums.size(); i++)
        {
            nums[i] = 0;
        }
    }
};