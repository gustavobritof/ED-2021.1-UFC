#include <iostream> // std::cout, std::cin, std::fixed
#include <iomanip> // std::setprecision

/*
Implemente a função 'calcula_media_turma' que recebe um vetor de alunos e preenche o campo 'media' de cada aluno com a média das 3 notas do aluno.

Esta função deve chamar a função 'calcula_media', pedida na questão anterior.

O arquivo de envio já terá parte do código preenchido.


Você deverá:


- Implementar a função 'calcula_media' (mesmo código pedido na questão anterior).


- Implementar a função 'calcula_media_turma', que deverá chamar a função 'calcula_media' para cada aluno da turma.


- Chamar a função 'calcula_media_turma' dentro da função 'main'.
*/


struct aluno {
   float nota[3];
   float media;
};

// Recebe um aluno passado por referência, e preenche o campo 'media' com a
// média das 3 notas do aluno.
void calcula_media(aluno *a)
{
   a->media=(a->nota[0]+a->nota[1]+a->nota[2])/3;
}

// Recebe vetor de alunos ('turma') e número de alunos ('n'), e chama a função
// 'calcula_media' (da questão anterior) para cada aluno do vetor.
// Ou seja, preenche o campo 'media' de cada aluno com a média das 3 notas do aluno.
void calcula_media_turma(aluno turma[], int n)
{
    
for (int i = 0; i < n; i++) {
    calcula_media(&turma[i]);
}
    
}

int main()
{
   int n, i, j;
   
   std::cin >> n;
   aluno turma[n];
   
   for (j = 0; j < n; j++)
      for (i = 0; i < 3; i++)
         std::cin >> turma[j].nota[i];
   
   // Chame a função 'calcula_media_turma' passando o vetor de alunos 'turma'.
   calcula_media_turma(turma, n);
   
   for (j = 0; j < n; j++) {
      std::cout << std::fixed;
      std::cout << std::setprecision(1) << turma[j].media << " ";
   }
   
   return 0;
}