#include <math.h>
#include <stdio.h>

int 
main()
{
    int runCode = 1;
    do{
        askAndSetValueInt("O que deseja calcular:\n0-Sair do programa\n1- Produto Escalar\n2- Produto vetorial\n",&runCode);
        switch(runCode){
            case 1:
                dotProduct();
                break;
            case 2:
                break;
            case 0:
                runCode = 0;
                break;
            default:
                printf("Escolha uma opção válida.");
                break;
        }
    }while(runCode != 0);

    return 0;
}

void
dotProduct(){
    int dimensions;
    askAndSetValueInt("\nInsert the number of dimensions for the vectors:", &dimensions);
    double uVector[dimensions], vVector[dimensions];
    populateVector(dimensions, uVector);
    populateVector(dimensions, vVector);

    showVectorUserFriendly(dimensions, uVector, 'U');
    showVectorUserFriendly(dimensions, vVector, 'V');
    
    double denominator = getDenominator();
}

void
populateVector(int dimensions, double vector[]){
    printf("\nPopulate the vector:\n");
    for(int i = 0; i < dimensions; i++){
        askAndSetValueDouble("\nInsira um valor para o array:",&vector[i]);
    }   
}

double
modulo(double vector[]){
    double squares = 0;
    size_t length = sizeof(vector) / sizeof(double);
    for (int i = 0; i < length; i++)
    {
        /* code */
    }
    
}

void
showVectorUserFriendly(int dimensions, double vector[], char vectorLetter){
    printf("\nVector %c = <",vectorLetter);
    for (int i = 0; i < dimensions; i++)
    {
        if((dimensions - i) == 1){
            printf("%.2lf>\n", vector[i]);
        }else{
            printf("%.2lf,", vector[i]);
        }
    }   
}

void
askAndSetValueInt (char *label, int *variable)
{
  printf (label);
  scanf ("%d", variable);
}

void
askAndSetValueDouble (char *label, double *variable)
{
  printf (label);
  scanf ("%lf", variable);
}