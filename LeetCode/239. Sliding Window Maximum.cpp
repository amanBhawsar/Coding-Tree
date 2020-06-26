class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& arr, int k) {
        vector<int> ans;
        int i,n= arr.size();
        ans.reserve(n-k+1);
        deque<int> dq;
        for (i = 0; i < k; i++) {
            while (!dq.empty() && arr[i] > arr[dq.back()])
                dq.pop_back();
            dq.push_back(i);
        }
        for (; i < n; i++) {
            ans.push_back(arr[dq.front()]);
            while (!dq.empty() && i - k >= dq.front())
                dq.pop_front();
            while (!dq.empty() && arr[i] > arr[dq.back()])
                dq.pop_back();
            dq.push_back(i);
        }
        ans.push_back(arr[dq.front()]);
        return ans;
    }
};