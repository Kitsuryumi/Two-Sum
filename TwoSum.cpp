class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int tam = nums.size();
        int i = 0;
        bool done = false;
        vector<int> result;
        do {
            int j = i + 1;
            do {
                if (nums[i] + nums[j] == target) {
                    done = true;
                    result.push_back(i);
                    result.push_back(j);
                } else {
                    j++;
                }
            } while (!done && j < tam);
            i++;
        } while (i < tam - 1 && !done);
        return result;
    }
};