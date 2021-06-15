#include <stdio.h>
#include <stdlib.h>


                           //Alunos: Esmeraldo Euclide Carneiro Junior - R.A 2760482021037
                                   //Ramses Neris Godoy - R.A 2760482021039


             /*Considere um vetor alocado dinamicamente dentro de uma função, em que cada elemento seja um
               valor não inteiro. Nesse vetor, devem ser armazenados os valores diferentes de zero contidos
               em vetor de 100 posições passando como parâmetro da função. Assim, a função deve alocar
               dinamicamente um vetor e preenche-lo com os valores diferentes de zero do vetor passado como
               parâmetro e retornar o endereço para esse vetor alocado dinamicamente. float * novo_vetor(float v[]);*/



float * novo_vetor(float v[]);
int main()
{
    float *p;
    float vetor1;
    int i,tam;
    vetor1=*p;

    printf("Digite a quantidade de elementos do vetor(maximo de 100): ");
    scanf("%d",&tam);

    // receber os numeros dentro do primeiro vetor
    for(i=0; i<tam; i++)
    {
        printf("\nDigite o numero no indice[%d]: ", i);
        scanf ("%f", &p[i]);
    }
    //mostrar os valores armazenados
    for(i=0; i<tam; i++)
    {
        printf("\nO valor no indice [%d]= %.2f\n", i,p[i]);
    }
    p=(malloc(tam*sizeof(float)));
    //mostrar o novo vetor sem os 0
    novo_vetor(&vetor1);
    for(i=0; i<tam; i++)
    {
        printf("\nO valor no indice [%d]= %.2f\n", &vetor1);

    }
}
float * novo_vetor(float v[])
{
    int i;
    float vetor[sizeof(v)];
    for(i=0; i<sizeof(v); i++)
    {
        if(v[i]!=0)
        {
            vetor[i]=v[i];
        }
        else if(v[i]=0)
        {
            printf("*");
        }
        return vetor;
    }
}
