class Solution {
public:
    double maxAverageRatio(vector<vector<int>>& classes, int extraStudents) {
        auto gainA = [&](int pass, int total) {
            return (double)(pass + 1) / (total + 1) - (double)pass / total;
        };

        // Max-heap based on gain
        priority_queue<pair<double, pair<int,int>>> pq;

        for (auto& c : classes) {
            int pass = c[0], total = c[1];
            double gain = gainA(pass, total);
            pq.push({gain, {pass, total}});
        }

        for (int s = 0; s < extraStudents; s++) {
            auto top = pq.top();
            pq.pop();

            int pass = top.second.first + 1;
            int total = top.second.second + 1;
            double gain = gainA(pass, total);

            pq.push({gain, {pass, total}});
        }

        double result = 0.0;
        while (!pq.empty()) {
            auto top = pq.top();
            pq.pop();
            result += (double)top.second.first / top.second.second;
        }

        return result / classes.size();
    }
};