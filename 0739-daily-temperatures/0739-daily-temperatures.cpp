class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        int n = temperatures.size();
        vector<int> ans(n, 0);
        vector<int> st;

        for (int i = 0; i < n; i++) {

            while (!st.empty() && temperatures[i] > temperatures[st.back()]) {
                // Current Element --> temperatures[i] can be NGE for st.peak()
                ans[st.back()] = i - st.back(); // Answer Array Update (days = current_element_index - st_top) 
                st.pop_back();
            }
          // Push the current elements temperatures[i] into stack 
            st.push_back(i);
        }

        return ans;
    }
};