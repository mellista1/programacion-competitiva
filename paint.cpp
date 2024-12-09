// https://usaco.org/index.php?page=viewproblem2&cpid=567

#include <iostream>
#include <cstdio>

using namespace std;

int largo_pintado(int a, int b, int c, int d){

    // no se solapan
    if(min(b,d) <= max(a,c)){
        return((b-a) + (d-c));
    }

    // uno esta adentro del otro
    if (a >= c && b <= d){
        return(d-c);
    } else if (c >= a && d <= b){
        return(b-a);
    }

    //se solapan parcialmente
    return(max(b,d) - min(a,c));
}

int main(){
    cin.tie(0);
    cin.sync_with_stdio(0);

    freopen("paint.in", "r", stdin);
    freopen("paint.out", "w", stdout);    
    
    int a, b, c, d;
    cin >> a >> b >> c >> d;

    cout << largo_pintado(a,b,c,d);

    return 0;
}