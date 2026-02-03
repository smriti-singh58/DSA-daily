#include <bits/stdc++.h>
using namespace std;

class Solution{
public:
    vector<int> rearrangeBySign(vector<int>& arr){
        int n = arr.size();
        vector<int> ans(n, 0);
        int posIndex = 0, negIndex = 1;

        for(int i = 0; i < n; i++){
            if(arr[i] < 0){
                ans[negIndex] = arr[i];
                negIndex += 2;
            } else{
                ans[posIndex] = arr[i];
                posIndex += 2;
            }
        }
        return ans;
    }
};

int main(){
    vector<int> arr = {1, 2, -4, -5};
    Solution s;
    vector<int> result = s.rearrangeBySign(arr);
    for (int num : result) {
        cout<<num<<" ";
    }
    return 0;
}
