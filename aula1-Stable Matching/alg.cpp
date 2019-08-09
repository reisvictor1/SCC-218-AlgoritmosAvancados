#include <bits/stdc++.h>

#define casais 5;

using namespace std;
int main(int argc, char* argv[]){

    int num_pessoas = casais;

    queue<int> men;

    vector<int> women;
    map<int, vector<int>> prio_men;
    map<int, vector<int>> prio_women;
    

    // Criando cada lista de homens/mulheres
    for(int i = 0; i < num_pessoas; i++){

        men.push(i);
        women.push_back(i);

    }

    // Lista de prioridade para os homens
    for(int i = 0; i < men.size();i++){

        for(int j = 0; j < women.size(); j++){
            prio_men;
        }

    }

    return 0;
}