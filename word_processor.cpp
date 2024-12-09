// https://usaco.org/index.php?page=viewproblem2&cpid=567
#include <iostream>
#include <cstdio>
#include <string>
#include <vector>

using namespace std;

int main(){
    cin.tie(0);
    cin.sync_with_stdio(0);

    freopen("word.in", "r", stdin);
    freopen("word.out", "w", stdout);    

    int N, K;

    cin >> N >> K;

    vector<string> words(N);

    for(int i = 0; i < N; i++){
        cin >> words[i];
    }

    int counter = 0;
    int i = 0;

    while(i < N){

        if (counter + words[i].size() > K){
            cout << "\n";
            counter = 0;
        }

        if (counter != 0){cout << " ";}

        cout << words[i];
        
        counter += words[i].size();
        i += 1;
    }

    return 0;
}