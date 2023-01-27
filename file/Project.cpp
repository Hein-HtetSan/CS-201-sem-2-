#include "stdio.h"
#include "string.h"

int main()
{
    const int MAXSIZE = 1000;
    const int size = 1000000;
    char fname[MAXSIZE], mode[10];
    char opt, ch;
    char texts[size];
    int isFileEmpty = 0;
    FILE *filename;

    // creating file
    printf("Creating File\n");
    printf("File Name : ");
    scanf("%s", &fname);
    printf("Mode : ", mode);
    scanf("%s", &mode);
    filename = fopen(fname, mode);
    if(filename != NULL)
    {
        printf("File created sucessfully\n");
    }else{
        printf("Error\n");
    }
    fclose(filename);

    // // working with file
    // printf("\n1]-Read\n2]-Write (overLoading)\n3]-Append\n4]-Delete\n");
    // scanf("%c\n", &opt);
    //
    // //options
    // switch (opt) {
    //   case 1:
    //   // reading from file
    //   FILE *fptr;
    //   filename = fopen(fname, "r");
    //         printf("READING FILE\n");
    //         if(filename != NULL)
    //         {
    //           while(feof(filename))
    //           {
    //             fscanf(filename, "%c", &ch);
    //             printf("%c\n", ch);
    //             if(ch != NULL)
    //             {
    //               isFileEmpty++;
    //             }
    //           }
    //           if(isFileEmpty == 0)
    //           {
    //             printf("No Data inside the file\n");
    //           }
    //         }else{
    //           printf("FILE Doesn't Exist!\n");
    //         }
    //     fclose(fptr);
    //         break;
    //   case 2:
    //   // writing to the file (over writing)
    //   filename = fopen(fname, "w");
    //   case 3:
    //   // appending to the file
    //   filename = fopen(fname, "a");
    //
    //   case 4:
    //   // delete the file
    //   default: printf("Done\n"); break;
    // }

    return 0;
}
