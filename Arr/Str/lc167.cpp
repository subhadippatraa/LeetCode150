class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        vector<int> result;
        int n = numbers.size();
        int start = 0;
        int end = n - 1;
        while (start < end) {

            if (numbers[start] + numbers[end] == target) {
                result.push_back(start+1);
                result.push_back(end+1);
                break;
            }

            else if (numbers[start] + numbers[end] < target)
                start++;

            else end--;
        }
        return result;
    }
};