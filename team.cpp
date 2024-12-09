#include <iostream>
#include <vector>

using namespace std;

int driver(vector<vector<int>> &matrix, int n){
    int result = 0;

    for (int i = 0; i < n; i++){
        if (matrix[i][0] + matrix[i][1] + matrix[i][2] > 1){result++;}
    }

    return result;
}

int main(){
    // cin.tie(0);
    // cin.sync_with_stdio(0);

    int n;
    cin >> n;

    vector<vector<int>> matrix(n, vector<int>(3, 0)); 

    for (int i = 0; i < n; i++){
        for (int j = 0; j < 3; j++){
            cin >> matrix[i][j];
        }
    }
    
    cout << driver(matrix,n);

    return 0;
}
