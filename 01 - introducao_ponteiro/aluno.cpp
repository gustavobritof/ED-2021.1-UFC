#include <iostream>
using namespace std;


struct Aluno{
    string nome;
    int matricula;
    string disciplina;
    double nota;
    
}typedef aluno;

aluno leitura(aluno a){
    
    getline(cin,a.nome);
    cin >> a.matricula;
    cin.ignore();
    getline(cin,a.disciplina);
    cin >> a.nota;
    cin.ignore();
    return a;
    
}

int saida(aluno a){
    
    if(a.nota>=7){
        std::cout << a.nome <<" aprovado(a) em "<< a.disciplina << std::endl;
    }else if(a.nota<7){
        std::cout << a.nome <<" reprovado(a) em "<< a.disciplina << std::endl;
    }
    
    
    return 0;
    
}


int main(){
    struct Aluno a;
    
    a=leitura(a);
    
    saida(a);
    
    
   
    
    return 0;
}