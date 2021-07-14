#include <iostream>
using namespace std;

int main(){
    
    int qtdProdutos;
    std::cin >> qtdProdutos;
    
    double precosProdutos[qtdProdutos];
    
    for(int i=0;i<qtdProdutos;i++){
        
        std::cin >> precosProdutos[i];
        
    }
    
    float chutesp1[qtdProdutos];
    char chutesp2[qtdProdutos];
    
    for(int i=0;i<qtdProdutos;i++){
     
     std::cin >> chutesp1[i];
        
    }
    
    for(int i=0;i<qtdProdutos;i++){
     
     std::cin >> chutesp2[i];
        
    }
    
    //Comparar
    
    int cont1=0;
    int cont2=0;
    
    for(int i=0;i<qtdProdutos;i++){
        
        if(chutesp1[i]==precosProdutos[i])
            cont1+=1;
        else if(chutesp2[i]=='m' && precosProdutos[i]<chutesp1[i])
            cont2+=1;
        else if(chutesp2[i]=='M' && precosProdutos[i]>chutesp1[i])
            cont2+=1;
        else 
            cont1+=1;
    }
    
       if(cont1>cont2) 
            std::cout << "primeiro" << std::endl;
       if(cont2>cont1)
            std::cout << "segundo" << std::endl;
       if(cont1==cont2)
            std::cout << "empate" << std::endl;
    
    return 0;
}