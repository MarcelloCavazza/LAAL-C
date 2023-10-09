#include <stdio.h>
#include "mainheader.h"

void askAndSetValueInt(char *label, int *variable)
{
  printf("%s", label);
  scanf("%d", variable);
}

void askAndSetValueDouble(char *label, double *variable)
{
  printf("%s", label);
  scanf("%lf", variable);
}