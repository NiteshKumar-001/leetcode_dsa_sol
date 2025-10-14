class Solution {
public:
    int maxArea(vector<int>& height) {
        int left = 0;
        int right = height.size() - 1;
        int max_area = 0;

        while (left < right) {
            // Calculate the current area
            int current_height = std::min(height[left], height[right]);
            int width = right - left;
            int current_area = current_height * width;

            // Update the maximum area found so far
            max_area = std::max(max_area, current_area);

            // Move the pointer pointing to the shorter line inward
            // This is because moving the shorter line has the potential to increase the height
            // and thus the area, while moving the taller line would only decrease the width
            // without a guaranteed increase in height.
            if (height[left] < height[right]) {
                left++;
            } else {
                right--;
            }
        }

        return max_area;
    }
};