#include "stdio.h"
#include "stdlib.h"

int main()
{
  FILE *fptr;
  fptr = fopen("./textFile/mult.txt", "w");
  if(fptr != NULL)
  {
    for(int i=1; i<=16; i++)
    {
      for(int j=1; j<=12; j++)
      {
        fprintf(fptr, "%d * %d = %d\n", i, j, i*j);
        printf("%d * %d = %d\n", i, j, i*j);
      }
    }
  }else
  {
    printf("File doesn't exist!\n");
  }
  fclose(fptr);
  return 0;
}
