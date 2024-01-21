class Solution {
public:
    int maxArea(vector<int>& height) {
        int result = 0;
        int left = 0;
        int right = height.size() - 1;

        while (left < right) {
            int minHeight = std::min(height[left], height[right]);
            int currentArea = minHeight * (right - left);
            result = std::max(result, currentArea);

            // Move the pointers based on the smaller height
            if (height[left] < height[right]) {
                left++;
            } else {
                right--;
            }
        }

        return result;
        
    }
};