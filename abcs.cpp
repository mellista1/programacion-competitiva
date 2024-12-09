#include <iostream>
#include <cstdio>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

int main(){
    cin.tie(0);
    cin.sync_with_stdio(0);

    // freopen("paint.in", "r", stdin);
    // freopen("paint.out", "w", stdout);    
    
    vector<long int> nums(7);
    
    for(int i = 0; i < 7; i++){
        cin >> nums[i];
    }

	sort(nums.begin(), nums.end());

    long int A = nums[0];
    long int B = nums[1];
    long int C = nums[nums.size()-1] - A - B;

    cout << A << " " << B << " " << C << "\n";

    return 0;
}