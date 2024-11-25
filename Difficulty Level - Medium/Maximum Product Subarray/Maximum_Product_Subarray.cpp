#include <bits/stdc++.h>
using namespace std;
class Solution {
  public:
    int maxProduct(vector<int>& a) {
    int n = a.size();
    if (n == 0) return 0;

    int maxi = 1;         // Maximum product of subarray ending at the current position
    int mini = 1;         
    int mx = a[0];        // Initialize with the first element to handle edge cases like single-element arrays

    for (int i = 0; i < n; i++) {
        if (a[i] < 0) {
           
            swap(maxi, mini);
        }

        // Update maxi and mini with the current element
        maxi = max(a[i], maxi * a[i]);
        mini = min(a[i], mini * a[i]);

        // Update the global maximum
        mx = max(mx, maxi);
    }

    return mx;
}
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        // int n, i;
        // cin >> n;
        // vector<int> arr(n);
        // for (i = 0; i < n; i++) {
        //     cin >> arr[i];
        // }

        vector<int> arr;
        string input;

        // Read array
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        Solution ob;
        auto ans = ob.maxProduct(arr);
        cout << ans << "\n";

        cout << "~"
             << "\n";
    }
    return 0;
}
// } Driver Code Ends