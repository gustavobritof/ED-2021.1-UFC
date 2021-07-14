#include <iostream>
using namespace std;


    int main(){
    
        int nlinhas = 3, ncolunas= 3;
        int anterior=0;
        int contador=0;
        int matriz[3][3];

        for(int i= 0; i< nlinhas; i++){
            for(int j= 0;j<ncolunas; j++){
                cin>>matriz[i][j];
            }
        }
        for(int j=0;j<ncolunas; j++){
            for(int i=0;i<nlinhas;i++){
                if(matriz[i][j] <anterior){
                    contador++;
                }
                anterior = matriz[i][j];
            }
            anterior=0;
        }
       cout << contador<< endl;

}