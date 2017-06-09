#include <stdio.h>
#include <stdlib.h>

#define N 5

int main()
{
    //int array[N] = {15,20,26,40,85};
    int i,j;
    double score[5][3] = {
        {59,48,97},
        {28,108,72},
        {6,4,9},
        {19,23,7},
        {89,33,11},
    };
    double *ptr_score = score;
    for(i=0;i<5;i++)
        {
            for(j=0;j<3;j++)
                {
                    //printf("%.2lf\t",score[i][j]);
                    //指针写法
                    //printf("%.2lf\t",*(score[i]+j));
                    //升级
                    printf("%.2lf\t",*(*(score + i)+j));
                }
        printf("\n");
    }
    //遍历第一行




    /*int i;
    int *ptr_array = array;
    int * ptr_array_start;
          ptr_array_start = array;
    int * ptr_array_end = array + N - 1;
    int temp;
    /*for(i=0;i<5;i++)
    {
        printf("第%d个元素的值为%d\t地址为%p\n",i+1,*ptr_array,ptr_array);
        ptr_array++;
    }*/
    //常用方法逆序
    /*
    for(i=0;i<N/2;i++)
    {
        temp = array[i];
        array[i] = array[N-i-1];
        array[N-i-1] = temp;
   }*/

   //指针逆序
   /* while(ptr_array_start != ptr_array_end)
        {
            temp = *ptr_array_start;
            *ptr_array_start = *ptr_array_end;
            *ptr_array_end = temp;
            ptr_array_start++;
            ptr_array_end--;
        }

    for(i=0;i<N;i++)
    {
        printf("%d\t",*(ptr_array+i));
    }
    */

    //指针访问二维数组


}
