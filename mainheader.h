#ifndef MAINHEADER_H
#define MAINHEADER_H

void askAndSetValueInt(char *label, int *variable);
void askAndSetValueDouble(char *label, double *variable);
// gala methods
void dotProduct();
double getDenominator(double uVector[], double vVector[], int dimensions);

// vector methods
void populateVector(int isToTest, int length, double vector[], double allVectorValuesShouldBe);
void showVectorUserFriendly(int length, double vector[], char vectorLetter);
double getVectorSize(double vector[], int dimensions);
double multiplyVectors(double uVector[], double vVector[], int length);
double getAngleBetweenVectors(double numerator, double denominator);

// test methods
void GiveAEmptyVectorAndItsLengthWhenIwantToPopulateItThenShouldPopulateWithTheGivenvalues();
void GivenTwoVectorsAndItsLengthWhenIWantTheDotProductThenSouldBeACorrectScalar();
char *showResult(char *testName, int result, double expectedValue, double recievedValue);

#endif