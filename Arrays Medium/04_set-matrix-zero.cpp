#include<bits/stdc++.h>
using namespace std;
class Solution{
public:
    vector<vector<int>> setMZ(vector<vector<int>>& matrix,int n,int m){
        int col[m] = {0};
        int row[n] = {0};
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                if(matrix[i][j]==0){
                    row[i] = 1;
                    col[j] = 1;
                }
            }
        }

        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                if(row[i] || row[j]){
                    matrix[i][j] = 0;
                }
            }
        }
        return matrix;
    }
};
int main(){
    vector<vector<int>> matrix = {{1,1,1},{1,0,1},{1,1,1}};;
    int n = matrix.size();
    int m = matrix[0].size();
    Solution obj;
    obj.setMZ(matrix,n,m);
    for (auto row : matrix) {
        for (auto val : row) {
            cout << val << " ";
        }
        cout << endl;
    }
    return 0;

}