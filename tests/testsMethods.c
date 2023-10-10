#include <stdio.h>
#include <math.h>
#include "../mainheader.h"
#include <assert.h>

char* showResult(char *testName, int result, double expectedValue, double recievedValue){
    printf("\n-----------------------\n");
    char *resultString = "Ok";
    if(result == 0){
        resultString = "Failed";
        printf("Test Name: %s\nTest Result: %s\nExpecetedValue: %lf\nRecieved Value: %lf", testName, resultString, expectedValue, recievedValue);
    }else{
        printf("Test Name: %s\nTest Result: %s", testName, resultString);
    }
    printf("\n-----------------------\n");
}