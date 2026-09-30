struct Compare {
    bool operator()(string a, string b) {
        if (a.length() != b.length()) {
            return a.length() < b.length();
        }
        return a < b;
    }
};
class Solution {
public:
    string kthLargestNumber(vector<string>& nums, int k) {
        priority_queue<string, vector<string>, Compare> maxHeap;
        for (int i = 0; i < nums.size(); i++) {
            maxHeap.push(nums[i]);
        }
        for (int i = 0; i < k - 1; i++) {
            maxHeap.pop();
        }
        return maxHeap.top();
    }
};