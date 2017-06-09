#include <stdio.h>
#include <stdlib.h>


int main()
{
    FILE *fp;
    fp = fopen("/temp/test.txt","w+");

    fprintf(fp,"this is a testing for fprint...\n");
    fputs("this is testing for fputs...\n",fp);
    fclose(fp);
}
