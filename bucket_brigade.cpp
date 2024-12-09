// https://usaco.org/index.php?page=viewproblem2&cpid=567
#include <iostream>
#include <cstdio>
#include <string>
#include <vector>

using namespace std;

int main(){
    cin.tie(0);
    cin.sync_with_stdio(0);

    freopen("buckets.in", "r", stdin);
    freopen("buckets.out", "w", stdout);    

    vector<vector<char>> farm(10, vector<char>(10));

    pair<int, int> barn, lake, rock;
    char c;

    for(int i = 0; i < 10; i++){
        for(int j = 0; j < 10; j++){
            cin >> c;
            farm[i][j] = c;

            if(c == 'B'){
                barn = pair(i,j);
            } 

            if(c == 'L'){
                lake = pair(i,j);
            } 

            if(c == 'R'){
                rock = pair(i,j);
            } 
        }
    }

    int res;

    if(barn.first == lake.first && lake.first == rock.first){   // todos en la misma fila
        if (barn.second < rock.second && rock.second < lake.second){    // roca en el medio
            res = lake.second - barn.second + 1;
        } else if (lake.second < rock.second && rock.second < barn.second){ // roca en el medio
            res = barn.second - lake.second + 1;
        } else {
            res = abs(barn.second - lake.second) - 1;
        }
    } else if(barn.second == lake.second && lake.second == rock.second){   // todos en la misma columna
        if (barn.first < rock.first && rock.first < lake.first){    // roca en el medio
            res = lake.first - barn.first + 1;
        } else if (lake.first < rock.first && rock.first < barn.first){ // roca en el medio
            res = barn.first - lake.first + 1;
        } else {
            res = abs(barn.first - lake.first) - 1;
        }
    } else {
        res = abs(barn.first - lake.first) + abs(barn.second - lake.second) - 1;
    }

    cout << res;
    
    return 0;
}