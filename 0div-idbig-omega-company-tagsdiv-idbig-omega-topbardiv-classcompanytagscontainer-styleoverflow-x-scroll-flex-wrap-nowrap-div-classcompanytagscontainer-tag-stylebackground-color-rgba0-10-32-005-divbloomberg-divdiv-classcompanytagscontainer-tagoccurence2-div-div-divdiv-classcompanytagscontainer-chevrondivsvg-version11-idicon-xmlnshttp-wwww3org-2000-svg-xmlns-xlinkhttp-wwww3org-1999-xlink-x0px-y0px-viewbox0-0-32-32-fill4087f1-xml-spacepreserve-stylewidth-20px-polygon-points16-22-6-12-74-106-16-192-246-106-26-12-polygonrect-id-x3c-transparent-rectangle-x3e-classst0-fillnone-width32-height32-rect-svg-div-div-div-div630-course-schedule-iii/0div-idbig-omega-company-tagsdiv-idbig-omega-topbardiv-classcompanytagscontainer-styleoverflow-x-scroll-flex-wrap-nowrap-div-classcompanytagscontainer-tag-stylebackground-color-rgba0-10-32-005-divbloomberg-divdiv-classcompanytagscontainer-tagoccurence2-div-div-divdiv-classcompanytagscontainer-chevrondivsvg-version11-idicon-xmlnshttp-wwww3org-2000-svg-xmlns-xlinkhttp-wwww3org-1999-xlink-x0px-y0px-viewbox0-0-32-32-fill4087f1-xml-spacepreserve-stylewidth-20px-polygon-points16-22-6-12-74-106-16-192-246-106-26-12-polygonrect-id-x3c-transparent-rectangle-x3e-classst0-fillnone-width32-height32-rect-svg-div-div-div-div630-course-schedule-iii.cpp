class Solution {
public:
    int scheduleCourse(vector<vector<int>>& courses) {
        sort(courses.begin(), courses.end(), [](auto& a, auto& b){return a[1]< b[1];});
        priority_queue<int> maxheap;
        int cur_time{0};
        for (auto& course: courses) {
            maxheap.push(course[0]);
            cur_time = cur_time+course[0];
            if (cur_time > course[1]) {
                cur_time -= maxheap.top();
                maxheap.pop();
            }
        }
        return maxheap.size();
    }
};