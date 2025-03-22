class Solution {
public:
    string multiply(string num1, string num2) {
        if (num1 == "0" || num2 == "0") return "0"; // Handle zero case
        
        int n = num1.size(), m = num2.size();
        vector<int> result(n + m, 0); // Result can have at most n+m digits
        
        // Perform multiplication
        for (int i = n - 1; i >= 0; i--) {
            for (int j = m - 1; j >= 0; j--) {
                int mul = (num1[i] - '0') * (num2[j] - '0'); // Multiply digits
                int sum = mul + result[i + j + 1]; // Add to previous result
                
                result[i + j + 1] = sum % 10; // Store ones place
                result[i + j] += sum / 10;    // Carry forward
            }
        }
        
        // Convert result vector to string
        string res = "";
        for (int num : result) {
            if (!(res.empty() && num == 0)) { // Skip leading zeros
                res.push_back(num + '0');
            }
        }
        
        return res.empty() ? "0" : res;
    }
};
