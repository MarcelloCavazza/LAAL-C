#include <math.h>
#include <stdio.h>
double getConstante(double uVector[], double vVector[], int length);
void populateVector(int length, double vector[]);
void askAndSetValueInt (char *label, int *variable);
void askAndSetValueDouble (char *label, double *variable);
void showVectorUserFriendly(int length, double vector[], char vectorLetter);
double getDenominator(double uVector[],double vVector[], int dimensions);
double magnitude(double vector[], int dimensions);
void dotProduct();


int 
main()
{
    int runCode = 1;
    do{
        askAndSetValueInt("Choose one option:\n666- Leave Program\n1- Dot Product\n2- Vector Product\n",&runCode);
        switch(runCode){
            case 1:
                dotProduct();
                break;
            case 2:
                break;
            case 666:
                runCode = 666;
                break;
            default:
                printf("Choose a valid option.");
                break;
        }
    }while(runCode != 666);

    return 0;
}

void
dotProduct(){
    int dimensions = 1;
    askAndSetValueInt("\nInsert the number of dimensions for the vectors:", &dimensions);
    double uVector[dimensions], vVector[dimensions];
    populateVector(dimensions, uVector);
    populateVector(dimensions, vVector);

    showVectorUserFriendly(dimensions, uVector, 'U');
    showVectorUserFriendly(dimensions, vVector, 'V');

    const double constant = getConstante(uVector, vVector, dimensions);
    printf("The Dot Product of those two vectors is %.2lf\n",constant);
    int getTheAngle = -1, askForAngle = 0;
    do{
        askAndSetValueInt("Do you want to know the angle between those two vectors?\n1-Yes\n0-No\n", &getTheAngle);
        if(getTheAngle == 1){
            askForAngle = 1;
        }
    }while(askForAngle == 0);
    if(askForAngle == 1){
        double denominator = getDenominator(uVector, vVector, dimensions);
        if(denominator == 0){
            printf("Does not exists an angle for this two vectors.");
        }
        //falta se numerador é igual a 0 e caso nao for //https://www.programiz.com/c-programming/library-function/math.h/acos#:~:text=C%20atan()-,C%20acos(),function%20is%20included%20in%20%3Cmath.
    }
}

void
populateVector(int length, double vector[]){
    printf("\nPopulate the vector:\n");
    for(int i = 0; i < length; i++){
        askAndSetValueDouble("\nInsira um valor para o array:",&vector[i]);
    }   
}
double
getConstante(double uVector[],double vVector[], int length)
{
    double total = 0.0;
    for (int i = 0; i < length; i++)
    {
        total += uVector[i] * vVector[i];
    }
    return total;
}
double
getDenominator(double uVector[],double vVector[], int dimensions){
    const double uVectormagnitude = magnitude(uVector, dimensions);
    const double vVectormagnitude = magnitude(vVector, dimensions);
    return uVectormagnitude * vVectormagnitude;
}
double
magnitude(double vector[], int dimensions){
    double squares = 0;
    for (int i = 0; i < dimensions; i++)
    {
        squares += pow(vector[i], 2);
    }
    printf("squares %.2lf\n", squares);
    return sqrtl(squares);
}
void
showVectorUserFriendly(int length, double vector[], char vectorLetter){
    printf("\nVector %c = <",vectorLetter);
    for (int i = 0; i < length; i++)
    {
        if((length - i) == 1){
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