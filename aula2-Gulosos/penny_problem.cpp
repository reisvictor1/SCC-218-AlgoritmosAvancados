#include <bits/stdc++.h>
#define value 74

using namespace std;

int main(){

    int valor = value;
    vector<int> pennies = {25,10,5,1};

    int i = 0, d;

    while(valor > 0.0){

        d = (int) (valor/pennies[i]);
        cout << pennies[i] << " : " << d << endl;
        valor %= pennies[i];
        i++;
    }


    return 0;
}