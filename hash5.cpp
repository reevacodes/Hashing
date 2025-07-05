// LUCKY NUMBER (number=frequency + max element)

#include <iostream>
#include <vector>
#include <map>
using namespace std;

class Solution {
public:
    int findLucky(vector<int>& arr) {
        int n = arr.size();
        map<int, int> mpp;

        // Count the frequency of each number
        for (int i = 0; i < n; i++) {
            mpp[arr[i]]++;
        }

        int lucky = -1;

        // Check if any number's value == its frequency
        for (auto it = mpp.begin(); it != mpp.end(); ++it) {
            if (it->first == it->second) {
                lucky = max(lucky, it->first);
            }
        }

        return lucky;
    }
};

// Example usage
int main() {
    Solution sol;
    vector<int> arr = {2, 2, 3, 4};
    cout << "Lucky Number: " << sol.findLucky(arr) << endl;
    return 0;
}
