#include <stdio.h>

#define MAX 6


using namespace std;



void palavras(char p[],int i){

    char ltr;

    if(i == MAX){
        printf("%s\n", p);
        return;
    }

    for(ltr = 'a'; ltr <= 'z'; ltr++){
        p[i] = ltr;
        palavras(p, i+1);
    }

}

int main(){

    char p[MAX +  1];
    p[MAX] = '\0';

    palavras(p, 0);
    return 0;
}