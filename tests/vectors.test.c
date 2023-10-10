#include <stdio.h>
#include <math.h>
#include "../mainheader.h"

void GiveAEmptyVectorAndItsLengthWhenIwantToPopulateItThenShouldPopulateWithTheGivenvalues()
{
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
            if (failed == 1)
            {
                break;
            }
            if (vectors[i][j] != allVectorValues[i])
            {
                showResult("GiveAEmptyVectorAndItsLengthWhenIwantToPopulateItThenShouldPopulateWithSucess", 0, allVectorValues[i], vectors[i][j]);
                failed = 1;
            }
        }
    }
    if (failed == 0)
    {
        showResult("GiveAEmptyVectorAndItsLengthWhenIwantToPopulateItThenShouldPopulateWithSucess", 1, 0, 0);
    }
}

void GivenTwoVectorsAndItsLengthWhenIWantTheDotProductThenSouldBeACorrectScalar()
{
    double vectorsToMultiply[4][2][3] = {
        {{1.0, 2.0, 3.0}, {1.0, 2.0, 3.0}},
        {{86.0, 2.0, 3.0}, {3.0, 2.0, 1.0}},
        {{10, -22.0, 4.0}, {7.2, -2.0, 14.0}},
        {{3.0, 2.0, 7.0}, {-1.0, -2.0, -3.0}}};
    double expectedResults[] = {14.0, 265.0, 172.0, -28.0};
    int failed = 0;
    for (int i = 0; i < 4; i++)
    {
        if (failed == 1)
        {
            break;
        }
        double *uVector;
        double *vVector;
        for (int j = 0; j < 2; j++)
        {
            if (j == 0)
            {
                uVector = &vectorsToMultiply[i][j];
            }
            else
            {
                vVector = &vectorsToMultiply[i][j];
            }
        }
        double result = multiplyVectors(uVector, vVector, 3);
        if (result != expectedResults[i])
        {
            failed = 1;
            showResult("GivenTwoVectorsAndItsLengthWhenIWantTheDotProductThenSouldBeACorrectScalar", 0, expectedResults[i], result);
        }
    }
    if (failed == 0)
    {
        showResult("GivenTwoVectorsAndItsLengthWhenIWantTheDotProductThenSouldBeACorrectScalar", 1, 0, 0);
    }
}