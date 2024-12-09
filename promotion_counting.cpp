#include <iostream>
#include <vector>
#include <cstdio>

using namespace std;

void driver(vector<vector<int>> &matrix){
    int ascendidos = 0;
    
    vector<int> res(3,0);
    
    for(int i = 3; i>0; i--){
        ascendidos = ascendidos + matrix[i][1] - matrix[i][0];
        res[i-1] = ascendidos;
    }

    for(int i = 0; i < 3; i++){
        cout << res[i] << "\n";
    }

}

int main(){

    freopen("promote.in", "r", stdin);
    freopen("promote.out", "w", stdout);    

    vector<vector<int>> matrix(4, vector<int>(2, 0)); 

    for(int i = 0; i < 4; i++){
        cin >> matrix[i][0] >> matrix[i][1];    
    }

    driver(matrix);

    return 0;
}