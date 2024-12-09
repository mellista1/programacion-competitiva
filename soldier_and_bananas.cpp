#include <iostream>

using namespace std;

int main(){
    // cin.tie(0);
    // cin.sync_with_stdio(0);

    long long k, n, w;

    cin >> k >> n >> w;

    long long costo = k*w*(w+1)/2;

    if (costo <= n){cout << 0;} else {cout << costo - n;}

    return 0;
}