#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;
 
int main() {
    vector<int> gong_u;
    int N, C;
    cin >> N >> C;
 
    for (int n_idx = 0; n_idx < N; n_idx++) {
        int sub;
        scanf("%d", &sub);
        gong_u.push_back(sub);
    }
 
    sort(gong_u.begin(), gong_u.end());
 
    int left = gong_u.front();
    int right = gong_u.back();
    int answer_num = -1;
 
    while (left <= right) {
        int mid = (left + right) / 2;
        int before_set_index = 0;
        int set_num = 1;
 
        for (int n_idx = 1; n_idx < N; n_idx++) {
 
            if (gong_u.at(n_idx) - gong_u.at(before_set_index) >= mid) {
                before_set_index = n_idx;
                set_num++; 
            } 
        }

        if (set_num >= C) 
            left = mid + 1;
        else 
            right = mid - 1;

        if (answer_num < mid && set_num >= C)
            answer_num = mid;
 
    }
 
    cout << answer_num << "\n";
}
