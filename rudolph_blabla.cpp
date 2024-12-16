#include <iostream>
#include <cstdio>
#include <string>
#include <vector>
#include <algorithm>
#include <math.h>
#include <iomanip>

using namespace std;

double calculador_de_area(vector<long int> &branches, long int n, double d, double h){

    double res = 0;

    double area_total_triangulo = d*h/2;

    double tg_angulo = 2*h/d;

    for(int i = 0; i < n; i++){
        if(i == n-1 || branches[i] + h <= branches[i+1]){ //no se solapa
            res += d*h/2;
        } else { //si se solapa
            long int inf = branches[i]; 
            long int sup = branches[i+1];
            
            double base_tmp = (sup-inf) / tg_angulo; 
            double base_posta = (d/2 - base_tmp) * 2;
            double area_excluida = base_posta * (inf+h-sup) / 2; 
            res += area_total_triangulo - area_excluida;
        }
    }

    return res;

}

int main(){
    
    cout << std::setprecision(20);

    long int t, n;
    double d, h;

    cin >> t;
    
    vector<double> res(t,0);

    for(int i = 0; i < t; i++){
        cin >> n >> d >> h;
    
        vector<long int> branches(n,0);

        for(int j = 0; j < n; j++){
            cin >> branches[j];
        }

        res[i] = calculador_de_area(branches, n, d, h);

    }

    for(int i = 0; i < t; i++){
        cout << res[i] << "\n";
    }

    return 0;
}