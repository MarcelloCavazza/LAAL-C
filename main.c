#include <stdio.h>
#include <math.h>
#include "mainheader.h"

// clear && gcc main.c input.c dotProduct.c vectors.c ./tests/vectors.test.c ./tests/testsMethods.c -o main -lm && ./main

int main()
{
    int runProgram = -1;
    do
    {
        askAndSetValueInt("Do you want to test(0) or execute(1) the application?", &runProgram);
    } while (runProgram != 0 && runProgram != 1);
    if (runProgram == 0)
    {
        printf("Running vectors tests...\n");
        GiveAEmptyVectorAndItsLengthWhenIwantToPopulateItThenShouldPopulateWithTheGivenvalues();
        GivenTwoVectorsAndItsLengthWhenIWantTheDotProductThenSouldBeACorrectScalar();
        GivenADenominatorAndANumeratorWhenIWantTheAngleBetweenVectorsThenSouldBeACorrectAngle();
    }
    else
    {
        int runCode = -1;
        do
        {
            askAndSetValueInt("Choose one option:\n666- Leave Program\n1- Dot Product\n2- Vector Product\n", &runCode);
            switch (runCode)
            {
            case 1:
                dotProduct();
                break;
            case 2:
                break;
            case 0:
                runCode = 0;
                break;
            default:
                printf("Choose a valid option.");
                break;
            }
        } while (runCode != 0);
    }

    return 0;
}