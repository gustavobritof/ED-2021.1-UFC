#include <iostream>
using namespace std;


/*
Implemente a função 'troca', que recebe como parâmetro duas variáveis inteiras passadas por referência, e troca os valores destas variáveis.

O arquivo de envio já terá parte do código preenchido.
Você deverá:
- Implementar a função 'troca'.
- Chamar a função 'troca' dentro da função 'main'.
*/


void troca(int *a, int *b)
{
    int n;      //Variavel auxiliar para criar um ponteiro auxiliar
    int *aux;   //Ponteiro auxiliar
    aux=&n;     //Ponteiro auxiliar recebe o endereço de n
    *aux=*a;    //O valor do endereço de a vai para dentro do endereço do auxiliar
    *a=*b;      //O valor do endereço de b vai para dentro do endereço de a
    *b=*aux;    //O valor do endereço de aux(o valor original de a) vai para dentro do endereço de b
}

int main()
{
   int x, y;
   std::cin >> x;
   std::cin >> y;
   // Chame a função 'troca' para trocar os valores de x e y.
    
    troca(&x,&y);
   
   std::cout << x << " " << y << std::endl;
   return 0;
}