class Solution {
public:
    string largestTimeFromDigits(vector<int>& A) {
        sort(A.begin(), A.end());
        string ans = "";
        do {
            string h = to_string(A[0])+to_string(A[1]), m = to_string(A[2])+to_string(A[3]);
            ans = (stoi(h) <= 23 && stoi(m) <= 59) ? (h + ":" + m) : ans;
        } while(next_permutation(A.begin(), A.end()));
        return ans;
    }
};