class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int n = numbers.size();
        int j = n - 1;
        int i = 0;
        
        while(i < j){
            if(numbers[i] + numbers[j] == target){
                return {i + 1, j + 1};
            }
            else if(numbers[i] + numbers[j] > target){
                // Sum is too big, only move j
                j--;
            }
            else {
                // Sum is too small, only move i
                i++;
            }
        }  
        
        // This satisfies the compiler's rule that every path must return a value
        return {}; 
    }
};