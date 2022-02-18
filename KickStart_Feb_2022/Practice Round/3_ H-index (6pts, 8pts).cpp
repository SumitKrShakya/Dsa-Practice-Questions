#include <bits/stdc++.h>
using namespace std;

vector<int> GetHIndexScore(vector<int> cite) {
    vector<int> h_index;
    h_index.push_back(1);
    // TODO: Calculate and return h-index score for each paper.
    for (int i = 1; i < cite.size(); i++) {
        
        int curr = h_index[h_index.size() - 1];
        int next = curr + 1;
        int currf = 0, nextf = 0;

        for (int j = 0; j <= i; j++) {
            if (next <= cite[j]) {
                nextf++;
            }
        }

        if (nextf == next) {
            h_index.push_back(next);
        }
        else {
            h_index.push_back(curr);
        }
    }

    return h_index;
}

int main() {
    int tests;
    cin >> tests;
    for (int test_case = 1; test_case <= tests; test_case++) {
        // Get number of papers for this test case
        int paper_count;
        cin >> paper_count;
        // Get number of citations for each paper
        vector<int> citations(paper_count);
        for (int i = 0; i < paper_count; i++) {
            cin >> citations[i];
        }
        vector<int> answer = GetHIndexScore(citations);
        cout << "Case #" << test_case << ": ";
        for (int i = 0; i < answer.size(); i++) {
            cout << answer[i] << " ";
        }
        cout << endl;
    }
    return 0;
}
