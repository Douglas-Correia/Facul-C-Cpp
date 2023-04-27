#include <stdio.h> 
#include <string.h>

int main() { 
//criação de variavel de estudante 

//tipo de dado definido pelo usuario
struct estudante{
    int nMatricula;
    char nome[80];
    float vMensalidade; 
    char dataBacharelado[30];
};
//sempre que tem * no comço ponteiro de endereço de uma variavel do tipo struct estudante
//declara variavel do tipo struct estudante e
//declara variavel do tipo ponteiro de struct estudante
struct estudante stud1, *ptr_stud1; 


//leitura de dados do usuaria
ptr_stud1=&stud1; //endereço da variavel stud1]
printf("\n Entre com numero de matricula: ");
scanf("%d", &ptr_stud1->nMatricula); // a seta serve para seguir e ler o endereço da variavel
printf("\n Entre com nome: ");
scanf("%s", &ptr_stud1->nome);
printf("\n Entre com valor da mensalidade: ");
scanf("%f", &ptr_stud1->vMensalidade);
printf("\n Entre com data do bacharelado: ");
scanf("%s", &ptr_stud1->dataBacharelado);
//exibir dados coletados
//ponteiro da variavel e seta para seguir a variavel
printf("\n ********CADASTRO DO ESTUDANTE********");
printf("\n Numero da Matricula: = %d", ptr_stud1->nMatricula); 
printf("\n Nome: = %s", ptr_stud1->nome);
printf("\n Valor da Mensalidade: = %9.2f", ptr_stud1->vMensalidade);
printf("\n Data do Bacharelado: = %s", ptr_stud1->dataBacharelado);

return 0;
}
