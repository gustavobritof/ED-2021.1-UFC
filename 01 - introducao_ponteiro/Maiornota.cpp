#include <iostream>
#include <iomanip>
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

int saida(aluno a, aluno b){
    
    if(a.nota>b.nota){
        std::cout <<fixed<<setprecision(1)<< a.nome <<" , "<<a.nota << std::endl;
    }else if(b.nota>a.nota){
        std::cout <<fixed<<setprecision(1)<< b.nome <<" , "<<b.nota << std::endl;
    }else if(a.nota==b.nota){
        cout<<a.nome<<fixed<<setprecision(1)<< " e "<< b.nome<< " , "<<a.nota;
    }
    
    
    return 0;
    
}


int main(){
    struct Aluno a;
    struct Aluno b;
    
    a=leitura(a);
    b=leitura(b);
    
    saida(a,b);
    
    
   
    
    return 0;
}