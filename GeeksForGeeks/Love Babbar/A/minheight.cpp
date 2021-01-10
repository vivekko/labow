

#include <bits/stdc++.h>
using namespace std;

class Solution{   
public:
    int getMinDiff(int arr[], int n, int k) {
        sort(arr,arr+n);
        int mn = min(arr[n - 1] + k -(arr[0]-k),arr[n-1] - k - (arr[0] + k));
        return mn;
    }
};

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> k;
        
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.getMinDiff(arr, n, k);
        cout << ans << "\n";
    }
    return 0;
}  // } Driver Code Ends