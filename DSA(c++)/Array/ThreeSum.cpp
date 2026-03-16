#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
using namespace std;

void threeSumBetter(vector<int> arr) {
    int n = arr.size();
    int tar = 0;
    set<vector<int>> uniqueTriplets;

    for (int i = 0; i < n; i++) {
        set<int> s;

        for (int j = i + 1; j < n; j++) {
            int third = tar - arr[i] - arr[j];

            if (s.find(third) != s.end()) {
                vector<int> triplet = {arr[i], arr[j], third};
                sort(triplet.begin(), triplet.end());
                uniqueTriplets.insert(triplet);
            }
            s.insert(arr[j]);
        }
    }

    cout << "Unique Triplets:\n";
    for (vector<int> v : uniqueTriplets) {
        cout << "[ ";
        for (int k = 0; k < v.size(); k++)
            cout << v[k] << " ";
        cout << "]\n";
    }
}

int main() {
    vector<int> arr = {-1, 0, 1, 2, -1, -4};
    threeSumBetter(arr);
    return 0;
}
