#include <bits/stdc++.h>


using namespace std;


int main(){

    queue<float> numbers;

    numbers.push(0.7);
    numbers.push(1.0);
    numbers.push(1.5);
    numbers.push(2.0);
    numbers.push(2.3);
    numbers.push(2.6);
    numbers.push(3.1);
    numbers.push(3.6);
    numbers.push(3.9);
    numbers.push(4.2);
    numbers.push(4.7);
    numbers.push(5.2);
    numbers.push(5.5);
  

    vector<vector<float>> conjuntos;

    while(!numbers.empty()){

        float pivo = numbers.front();

        vector<float> temp;
        float numb = numbers.front();
        cout << "Pivo: " << pivo << ", numb: " << numb << endl;

        while(numb <= pivo + 1.0 && !numbers.empty()){

            numb = numbers.front();
            temp.push_back(numb);
            numbers.pop();
        }

        conjuntos.push_back(temp);
        
    }

   
    int menor = 0;
    for(int i = 1; i < conjuntos.size(); i++){
        if(conjuntos[i].size() < menor)
            menor = i;
    }

    /* Mostrando números */

    cout << "O menor conjunto eh: " << menor << endl;    
     

    return 0;

}