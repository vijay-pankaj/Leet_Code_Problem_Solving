class Solution {
public:
    int maxArea(vector<int>& height) {
        int s = 0;
        int e = height.size() - 1;
        int maxWater = 0;

        while (s < e) {
            int width = e - s;
            int h = min(height[s], height[e]);
            int area = width * h;
            maxWater = max(maxWater, area);

            if (height[s] < height[e])
                s++;
            else
                e--;
        }

        return maxWater;
    }
};
