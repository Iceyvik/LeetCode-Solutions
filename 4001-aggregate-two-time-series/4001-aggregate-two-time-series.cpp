class Solution {
public:
    vector<vector<int>> aggregateTimeSeries(vector<vector<int>>& series1,
                                            vector<vector<int>>& series2) {
        int n1 = series1.size();
        int n2 = series2.size();
        int p1 = 0;
        int p2 = 0;
        vector<vector<int>> ans;
        while (p1 < n1 && p2 < n2) {
            if (series1[p1][0] < series2[p2][0]) {
                series1[p1][1] += series2[p2][1];
                ans.push_back(series1[p1]);
                p1++;
            } else if (series1[p1][0] > series2[p2][0]) {
                series2[p2][1] += series1[p1][1];
                ans.push_back(series2[p2]);
                p2++;
            } else {
                series1[p1][1] += series2[p2][1];
                ans.push_back(series1[p1]);
                p1++;
                p2++;
            }
        }
        while (p1 < n1) {
            ans.push_back(series1[p1]);
            p1++;
        }
        while (p2 < n2) {
            ans.push_back(series2[p2]);
            p2++;
        }
        return ans;
    }
};