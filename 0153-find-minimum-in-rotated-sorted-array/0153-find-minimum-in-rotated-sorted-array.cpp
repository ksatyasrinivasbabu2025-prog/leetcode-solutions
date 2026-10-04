class Solution {
public:
    int findMin(vector<int>& arr) {
        int n=arr.size();
        if(arr[0]<arr[n-1]) return arr[0];

        int s=0,e=n-1;
        while(s<=e)
        {
            int mid=s+(e-s)/2;
            if(arr[0]<=arr[mid]) s=mid+1;
            else e=mid-1;
        }
        return arr[s % n];
    }
};