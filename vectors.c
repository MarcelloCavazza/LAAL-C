#include <stdio.h>
#include <math.h>
#include "mainheader.h"

void populateVector( int isToTest, int length, double vector[], double allVectorValuesShouldBe)
{
    if(isToTest == 1){
        for (int i = 0; i < length; i++)
        {
            vector[i] = allVectorValuesShouldBe;
        }
    }else{
        printf("\nPopulate the vector:\n");
        for (int i = 0; i < length; i++)
        {
            askAndSetValueDouble("\nInsira um valor para o array:", &vector[i]);
        }
    }
    
}

void showVectorUserFriendly(int length, double vector[], char vectorLetter)
{
    printf("\nVector %c = <", vectorLetter);
    for (int i = 0; i < length; i++)
    {
        if ((length - i) == 1)
        {
            printf("%.2lf>\n", vector[i]);
        }
        else
        {
            printf("%.2lf,", vector[i]);
        }
    }
}

double
getVectorSize(double vector[], int dimensions)
{
    double squares = 0;
    for (int i = 0; i < dimensions; i++)
    {
        squares += pow(vector[i], 2);
    }
    return sqrtl(squares);
}

double
multiplyVectors(double uVector[], double vVector[], int length)
{
    double total = 0.0;
    for (int i = 0; i < length; i++)
    {
        total += uVector[i] * vVector[i];
    }
    return total;
}


double getAngleBetweenVectors(double numerator, double denominator)
{
    return acos(numerator / denominator)*180/PI;
}