#include <stdio.h>
#include <stdlib.h>

/********

有1、2、3、4个数字，能组成多少个互不相同且无重复数字的三位数？都是多少？

程序分析：可填在百位、十位、个位的数字都是1、2、3、4。组成所有的排列后再去 掉不满足条件的排列。

程序源代码：

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



/**题目：企业发放的奖金根据利润提成。
    利润(I)低于或等于10万元时，奖金可提10%；
    利润高于10万元，低于20万元时，低于10万元的部分按10%提成，高于10万元的部分，可提成7.5%；
    20万到40万之间时，高于20万元的部分，可提成5%；
    40万到60万之间时高于40万元的部分，可提成3%；
    60万到100万之间时，高于60万元的部分，可提成1.5%；
    高于100万元时，超过100万元的部分按1%提成。

从键盘输入当月利润I，求应发放奖金总数？

程序分析：请利用数轴来分界，定位。注意定义时需把奖金定义成长整型。**/

int func2(){

    double salary;
    double bonus,bonus1,bonus2,bonus4,bonus6,bonus10; //奖金

    printf("input salary!\n");
    scanf("%lf",&salary);  //输入的是lf,不能写成d

    bonus1 = 100000 * 0.1; //低于10万
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
输入三个整数x,y,z，请把这三个数由小到大输出。

**/
int func5()
{
    int x, y, z, temp=0;
    printf("依次输入三个数\n");
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


/****用*号输出字母C的图案。******/

int func6()
{
    printf("\n* * * *\n");
    printf("\n*\n");
    printf("\n*\n");
    printf("\n* * * *\n");
}



/****输出乱码*****/

int func7(){
 char a=176,b=219;
    printf("%c%c%c%c%c\n",b,a,a,a,b);
    printf("%c%c%c%c%c\n",a,b,a,b,a);
    printf("%c%c%c%c%c\n",a,a,b,a,a);
    printf("%c%c%c%c%c\n",a,b,a,b,a);
    printf("%c%c%c%c%c\n",b,a,a,a,b);
}


/****乘法口诀表****/
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


/****打印图形*****/

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
