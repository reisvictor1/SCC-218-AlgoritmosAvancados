#include <bits/stdc++.h>

using namespace std;
int main(int argc, char* argv[]){

    int num_m, num_w;

    queue<int> men;

    vector<int> women;
    map<int, vector<int>> prio_men;
    map<int, vector<int>> prio_women;
    
    cout << "Há quantos homens no teste?" << endl;
    cin >> num_m;

    cout << "Há quantas mulheres no teste" << endl;
    cin >> num_w;


    // Criando cada lista de homens/mulheres
    for(int i = 0; i < num_m; i++){

        men.push(i);

    }

    for(int i = 0; i < num_w; i++){
        women.push_back(i);
    }


    return 0;
}