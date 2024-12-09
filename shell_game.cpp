// https://usaco.org/index.php?page=viewproblem2&cpid=567
#include <iostream>
#include <cstdio>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

void swap(vector<int> &vec, int a, int b){
    int tmp = vec[a];
    vec[a] = vec[b];
    vec[b] = tmp;
    return;
}

int main(){
    cin.tie(0);
    cin.sync_with_stdio(0);

    freopen("shell.in", "r", stdin);
    freopen("shell.out", "w", stdout);    

    int N, a, b, g;

    cin >> N;

    vector<int> status_1 = {1,0,0};
    vector<int> status_2 = {0,1,0};
    vector<int> status_3 = {0,0,1};

    int res_1 = 0;
    int res_2 = 0;
    int res_3 = 0;

    for(int i = 0; i < N; i++){
        cin >> a >> b >> g;
        swap(status_1, a-1, b-1);
        swap(status_2, a-1, b-1);
        swap(status_3, a-1, b-1);

        res_1 += status_1[g-1];
        res_2 += status_2[g-1];
        res_3 += status_3[g-1];
    }

    cout << max(max(res_1,res_2),res_3);

    return 0;
}