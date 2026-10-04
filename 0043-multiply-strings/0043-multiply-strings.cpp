class Solution {
public:
    string multiply(string num1, string num2) {
        int n = num1.size();
        int m = num2.size();

        if (num1 == "0" || num2 == "0") {
            return "0";
        }

        vector<int> result(n+m,0);

        for (int i=n-1;i>=0;i--) {
            for (int j = m - 1; j >= 0; j--) {
                int digit1 = num1[i] - '0';
                int digit2 = num2[j] - '0';

                int product = digit1 * digit2;
                int sum = product + result[i + j +1];

                result[i + j + 1] = sum % 10;
                result[i + j] += sum / 10;
            }
        }

        // Conversion result to string is required 
        string answer = "";
        int index=0;
        while (index<result.size()&&result[index]==0) {
            index++;
        }

        while (index<result.size()) {
            answer+=(result[index]+'0');
            index++;
        }

        return answer;
    }
};