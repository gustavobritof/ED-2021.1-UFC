#include <iostream>

/*
Neste exemplo vamos considerar o segundo caso (passar resultados por referência).
Implemente a função 'converte_tempo', que recebe o tempo em segundos e retorna em 3 variáveis passadas por referência este tempo convertido em horas, minutos e segundos.
O arquivo de envio já terá parte do código preenchido. Você deverá:
Implementar a função 'converte_tempo'.
Chamar a função 'converte_tempo' dentro da função 'main'.
*/


// Recebe tempo em 'segundos', converte para horas, minutos e seguntos, e 
// retorna o resultado através dos parâmetros 'hor', 'min' e 'seg'.

void converte_tempo(int segundos, int *hor, int *min, int *seg)
{
    *seg=0;
    *min=0;
    *hor=0;
    
    
    for(int i=0;i<segundos;i++){
        
        *seg+=1;
        if(*seg==60){
            *seg=0;
            *min+=1;
        }
        if(*min==60){
            *min=0;
            *hor+=1;
        }
        
    }
    
    
       
}

int main()
{
   int tempo, h, m, s;
   std::cin >> tempo;
   // Chame a função 'converte_tempo' para converter o valor de 'tempo' em horas
   // minutos e segundos, gravando o resultado nas variáveis 'h', 'm' e 's'.
    converte_tempo(tempo, &h, &m, &s);
   
   std::cout << h << ":" << m << ":" << s;
   
   return 0;
}