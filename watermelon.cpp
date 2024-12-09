#include <iostream>

using namespace std;

int main(){
    cin.tie(0);
    cin.sync_with_stdio(0);

    int peso;
    cin >> peso;

    if (peso%2 == 0 && peso != 2){
        cout << "YES";
    } else {
        cout << "NO";
    }

    return 0;
}