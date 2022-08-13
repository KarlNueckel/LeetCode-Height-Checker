class Solution {
public:
    int heightChecker(vector<int>& heights) {//pass by reference
        vector<int> expected = heights;
        int output = 0;
        
        sort(expected.begin(), expected.end());
        
        for(int i = 0; i < heights.size(); i++){
            if(heights[i] != expected[i]){
                output++;
            }
        }
        return output;
    }
};