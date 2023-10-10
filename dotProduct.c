#include <stdio.h>
#include <math.h>
#include "mainheader.h"
void dotProduct()
{
    int dimensions = 1;
    askAndSetValueInt("\nInsert the number of dimensions for the vectors:", &dimensions);
    double uVector[dimensions], vVector[dimensions];
    populateVector(0, dimensions, uVector, 0);
    populateVector(0, dimensions, vVector, 0);

    showVectorUserFriendly(dimensions, uVector, 'U');
    showVectorUserFriendly(dimensions, vVector, 'V');

    const double constant = multiplyVectors(uVector, vVector, dimensions);
    printf("The Dot Product of those two vectors is %.2lf\n", constant);
    int getTheAngle = -1, askForAngle = -1;
    do
    {
        askAndSetValueInt("Do you want to know the angle between those two vectors?\n1-Yes\n0-No\n", &getTheAngle);
        if (getTheAngle == 1)
        {
            askForAngle = 1;
        }
    } while (askForAngle == -1);
    if (askForAngle == 1)
    {
        double denominator = getDenominator(uVector, vVector, dimensions);
        if (denominator == 0)
        {
            printf("Does not exists an angle for this two vectors.");
        }
        else
        {
            double resultAngle = getAngleBetweenVectors(constant, denominator);
            printf("The angle between those two vectors is %.2lf\n degress", resultAngle);
        }
    }
}
double
getDenominator(double uVector[], double vVector[], int dimensions)
{
    const double uVectorgetVectorSize = getVectorSize(uVector, dimensions);
    const double vVectorgetVectorSize = getVectorSize(vVector, dimensions);
    return uVectorgetVectorSize * vVectorgetVectorSize;
}
