#include <stdio.h>
#include <math.h>
#include "../mainheader.h"
#include <assert.h>

void GiveAEmptyVectorAndItsLengthWhenIwantToPopulateItThenShouldPopulateWithTheGivenvalues()
{
    printf("\n-----------------------\n");
    int length = 3;
    double allVectorValues[] = {0.0, 1.0, 2.0};
    double vectors[3][3];

    char *result = "Ok";
    int failed = 0;
    for (int i = 0; i < length; i++)
    {
        populateVector(1, length, vectors[i], allVectorValues[i]);
        for (int j = 0; j < length; j++)
        {
            if(failed == 1){
                break;
            }
            if(vectors[i][j] != allVectorValues[i]){
                printf("Test Name: GiveAEmptyVectorAndItsLengthWhenIwantToPopulateItThenShouldPopulateWithSucess\nTest result: Failed - Vector values is diff from expected value\nVector: %lf != Value That is Expect To Be:%lf", vectors[i][j], allVectorValues[j]);
                failed = 1;
            }
        }
    }
    if(failed == 0){
        printf("Test Name: GiveAEmptyVectorAndItsLengthWhenIwantToPopulateItThenShouldPopulateWithSucess\nTest Result: %s", result);
    }
    printf("\n-----------------------\n");
}

// void test_GiveAEmptyVectorAndItsLengthWhenIwantToPopulateItThenShouldPopulateWithSucess()
// {
//     int length = 3;
//     double allVectorValues[] = {0.0, 1.0, 2.0};
//     double vectors[3][3];

//     for (int i = 0; i < length; i++)
//     {
//         populateVector(1, length, vectors[i], allVectorValues[i]);
//         for (int j = 0; j < length; j++)
//         {
//             assert(vectors[i][j] != 0 && "Failed: vector is not populated with the correct values");
//         }
//     }
// }
// void GivenAEmptyVectorAndItsHigherLengthWhenIWantToPopualteIt
// void showVectorUserFriendly(int length, double vector[], char vectorLetter)
// {
//     printf("\nVector %c = <", vectorLetter);
//     for (int i = 0; i < length; i++)
//     {
//         if ((length - i) == 1)
//         {
//             printf("%.2lf>\n", vector[i]);
//         }
//         else
//         {
//             printf("%.2lf,", vector[i]);
//         }
//     }
// }

// double
// getVectorSize(double vector[], int dimensions)
// {
//     double squares = 0;
//     for (int i = 0; i < dimensions; i++)
//     {
//         squares += pow(vector[i], 2);
//     }
//     return sqrtl(squares);
// }

// double
// multiplyVectors(double uVector[], double vVector[], int length)
// {
//     double total = 0.0;
//     for (int i = 0; i < length; i++)
//     {
//         total += uVector[i] * vVector[i];
//     }
//     return total;
// }
