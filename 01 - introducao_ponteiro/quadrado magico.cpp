#include <iostream>
using namespace std;

    int main(){
    int i, j;
    int mat[3][3];
    int somaDP = 0, somaDS = 0;

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            cin >> mat[i][j];
        }
    }

    for (i = 0; i < 3; i++) {
        somaDP += mat[i][i];
    }

    for (i = 0; i < 3; i++) {
        somaDS += mat[i][3-i-1];
    }



    int vetor_Linhas[3];
    for (i = 0; i < 3; i++) {
        vetor_Linhas[i] = 0;
        for (j = 0; j < 3; j++) {
            vetor_Linhas[i] += mat[i][j];
        }
    }


    int vetor_Colunas[3];
    for (j = 0; j < 3; j++) {
        vetor_Colunas[j] = 0;
        for (i = 0; i < 3; i++) {
            vetor_Colunas[j] += mat[i][j];
        }
    }

    int tL = 1, tC = 1;
    for (i = 1; i <  3; i++) {
        if (vetor_Linhas[i] != vetor_Linhas[i-1]) {
            tL = 0;
            break;
        } else if (vetor_Colunas[i] != vetor_Colunas[i-1]) {
            tC = 0;
            break;
        }
    }
    if (tL && tC && somaDP == somaDS && somaDP == vetor_Linhas[0]) {
        printf("sim");
    } else {
        printf("nao");
    }
 
    return 0;
}