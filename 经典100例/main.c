#include <stdio.h>
#include <stdlib.h>

/********

��1��2��3��4�����֣�����ɶ��ٸ�������ͬ�����ظ����ֵ���λ�������Ƕ��٣�

��������������ڰ�λ��ʮλ����λ�����ֶ���1��2��3��4��������е����к���ȥ �����������������С�

����Դ���룺

*********/
int func1()
{
    int i, j, k;
    for(i=1;i<5;i++){
        for(j=1;j<5;j++){
            for(k=1;k<5;k++){
                if(i!=j && i!=k && j!=k){
                    printf("%d%d%d\n",i,j,k);
                    return 0;
                }

            }
        }

    }
}



/**��Ŀ����ҵ���ŵĽ������������ɡ�
    ����(I)���ڻ����10��Ԫʱ���������10%��
    �������10��Ԫ������20��Ԫʱ������10��Ԫ�Ĳ��ְ�10%��ɣ�����10��Ԫ�Ĳ��֣������7.5%��
    20��40��֮��ʱ������20��Ԫ�Ĳ��֣������5%��
    40��60��֮��ʱ����40��Ԫ�Ĳ��֣������3%��
    60��100��֮��ʱ������60��Ԫ�Ĳ��֣������1.5%��
    ����100��Ԫʱ������100��Ԫ�Ĳ��ְ�1%��ɡ�

�Ӽ������뵱������I����Ӧ���Ž���������

����������������������ֽ磬��λ��ע�ⶨ��ʱ��ѽ�����ɳ����͡�**/

int func2(){

    double salary;
    double bonus,bonus1,bonus2,bonus4,bonus6,bonus10; //����

    printf("input salary!\n");
    scanf("%lf",&salary);  //�������lf,����д��d

    bonus1 = 100000 * 0.1; //����10��
    bonus2 = bonus1 + 100000 * 0.075;//10~20
    bonus4 = bonus2 + 200000 * 0.05; //20~40
    bonus6 = bonus4 + 200000 * 0.03; //40~60
    bonus10 = bonus6 + 400000 * 0.015;//60~100


    if(salary<=100000){
        bonus = bonus1*0.1;
    }else if(salary<=200000){
        bonus = bonus1+(salary-100000)*0.075;
    }else if(salary<=400000){
        bonus = bonus2+(salary-200000)*0.05;
    }else if(salary<=600000){
        bonus = bonus4+(salary-200000)*0.03;
    }else if(salary<=1000000){
        bonus = bonus6+(salary-400000)*0.015;
    }else if(salary>1000000){
        bonus = bonus10+(salary-1000000)*0.01;
    }

    printf("bonus is %lf",bonus);

}


/**
������������x,y,z���������������С���������

**/
int func5()
{
    int x, y, z, temp=0;
    printf("��������������\n");
    scanf("%d,%d,%d",&x,&y,&z);

    if(x>y){
        temp = x;
        x = y;
        y = temp;
    }if(x>z){
        temp = z;
        z = x;
        x = temp;

    }if(y>z){
        temp = y;
        y = z;
        z = temp;
    }

    printf("%d,%d,%d",x,y,z);

}


/****��*�������ĸC��ͼ����******/

int func6()
{
    printf("\n* * * *\n");
    printf("\n*\n");
    printf("\n*\n");
    printf("\n* * * *\n");
}



/****�������*****/

int func7(){
 char a=176,b=219;
    printf("%c%c%c%c%c\n",b,a,a,a,b);
    printf("%c%c%c%c%c\n",a,b,a,b,a);
    printf("%c%c%c%c%c\n",a,a,b,a,a);
    printf("%c%c%c%c%c\n",a,b,a,b,a);
    printf("%c%c%c%c%c\n",b,a,a,a,b);
}


/****�˷��ھ���****/
int func8()
{
    int i, j;
    for(i=1;i<10;i++){
        for(j=1;j<=i;j++){
           printf("%d * %d = %d ",j,i,i*j);

        }
        printf("\n");

    }
}


/****��ӡͼ��*****/

int printStart(int n)
{
int i, j;
  for(i=1;i<=n;i++){
        for(j=1;j<=n-i;j++){
            printf(" ");
            }
        for(j=1;j<=2*i-1;j++){
            if(i==1 || i==n+1 || j==1 || j== 2*i-1){
             printf("*");
                    }
            else{
                    printf(" ");
            }
      }
    printf("\n");
}

    for(i=1;i<n;i++){
        for(j=1;j<=i;j++){
            printf(" ");
}
        for(j=1;j<=2*(n-i)-1;j++){
            if(j==1 || j==2*(n-i)-1){
                printf("*");
            }else{
                printf(" ");
            }

      }
    printf("\n");
}

}












int main(){

    printf("input a number:");
    int n;
    scanf("%d",&n);
    printStart(n);
   return 0;
}
