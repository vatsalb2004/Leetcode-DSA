class Solution {
public:
    int maxArea(vector<int>& height) {
        int left = 0;
        int right = height.size() - 1;
        int maxSum = 0;

        while(left<right){
            int currSum = min(height[left],height[right]) * (right-left);
            maxSum = max(maxSum , currSum);

            if(height[left] < height[right]){
                left++;
            }

            else{
                right --;
            }
        }

        return maxSum;
    }
};