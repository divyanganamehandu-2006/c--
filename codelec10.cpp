#include <iostream>
#include <vector>
using namespace std;

vector<int> pairSum(vector<int> nums, int target) {
    vector<int> ans;
    int n = nums.size();
    for(int i=0; i<n; i++) {
        for(int j=i+1; j<n; j++) {
            if(nums[i] + nums[j] == target) {
                ans.push_back(i);
                ans.push_back(j);
                return ans;
            }
        }
    }
    return ans;
}

int main() {
    vector<int> nums = {2, 7, 11, 15};
    int target = 9;
    vector<int> ans = pairSum(nums, target);
    cout<< ans[0] << " " << ans[1] << endl;
    return 0;
}

// int arr[5] = {1, 2, 3, 4, 5};

//     for(int st=0; st<n; st++) {
//         for(int end=st; end<n; end++) {
//             for(int i=st; i<=end; i++) {
//                 cout << arr[i] ;
//             }
//             cout << " ";
//         }
//         cout << endl;
//     }
//     return 0;
// }nt main() {
//     int n =5;
//     i