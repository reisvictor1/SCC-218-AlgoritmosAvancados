#include <bits/stdc++.h>


using namespace std;


int main(){

    vector<int> caixas;

    int num_caixas;
    int total_doces = 0;
    int caixa_doces;

    cout << "Quantas caixas existem?" << endl;
    cin >> num_caixas;

    for(int i = 0; i < num_caixas; i++){
        cout << "Quantas doces existem na caixa " << i+1 << "?" << endl;
        cin >> caixa_doces;
        caixas.push_back(caixa_doces);
        total_doces += caixa_doces;
    }


    if(total_doces%num_caixas != 0){
        cout << "Solução nao eh possivel!!" << endl;
        return 1;
    }


    int numero_ideal = total_doces/num_caixas;


    int qtd_mov = 0;

    for(int i = 0; i < caixas.size(); i++){
        if(caixas[i] > numero_ideal)
            qtd_mov+= (caixas[i] - numero_ideal);
    }

    cout << "Para redistribuir igualmente o número de doces em cada caixa, precisa de " <<  qtd_mov << " movimentos." << endl;

    return 0;
}