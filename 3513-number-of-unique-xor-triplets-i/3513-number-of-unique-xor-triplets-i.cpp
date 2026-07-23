class Solution {
public:
    int uniqueXorTriplets(vector<int>& nums) {
        int n = nums.size();
        
        // For n < 3, the output is directly n
        if (n < 3) {
            return n;
        }
        
        // Find the most significant bit (MSB) position / bit length of n
        int bitLength = 32 - __builtin_clz(n);
        
        // Total possible unique XOR values is 2^(bitLength)
        return 1 << bitLength;
    }
};