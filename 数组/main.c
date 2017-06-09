#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>
#include <mmsystem.h>
#pragma comment(lib,"Winmm.lib")
#define MAX 6


/*
1.找到要删除的数的下标
2.从该下标开始，后一个的值赋给前一个
3.数组总数减一
*/
int del_add_arr()
{
    int count = 5;
    int i,deleIndex = -1;//通过给一个不可能的初值来判断是否找到数组中的值
    double deleNum;
    double insertNum;
    double power[] = {3423,4452,2551,9342,12323};
    printf("输入要删除的数字\n");
    scanf("%lf",&deleNum);
    for(i=0;i<count;i++)
    {
        if(deleNum == power[i])
        {
            printf("找到了，恭喜。\n");
            //记录当前的下标
            deleIndex = i;
            break;
        }
    }
    if(deleIndex == -1)
    {
        printf("未找到这个数\n");
    }
    else{
        //从下标开始，后一个覆盖前一个
        for(i=deleIndex;i<count-1;i++){
            power[i] = power[i+1];
        }

    }
    //删除完毕后，总数减一
    count--;
    printf("删除一个元素后数组为：\n");
    for(i=0;i<count;i++)
    {

        printf("%.2lf, ",power[i]);
    }

    //输入新的插入值
    printf("\n输入插入值:\n");
    scanf("%lf",&insertNum);
    power[count]= insertNum;
    //插入完毕后数组长度加一
    count++;
    //插入后的值为
    printf("插入后的数组为：\n");
    for(i=0;i<count;i++)
    {
        printf("%.2lf, ",power[i]);
    }

}





//使用二维数组表示学生的成绩
int two_dimension()
{
	int i,j;
	double score[4][3] = {
	{93,82,73},
	{81,64,59},
	{78,77,45},
	{59,92,87}
};

//使用循环打印数组

for(i=0;i<4;i++)
{
	for(j=0;j<3;j++)
	{
		printf("%.2lf, ",score[i][j]);
	}
	printf("\n");
}

}


//翻牌游戏
int emperor()
{
    char emperorName[50]; //用来存放用户输入的皇帝名号
    int choice;
    int i,j;
    char tempName[20];//翻牌的临时变量
    int count=5;//当前未打入冷宫嫔妃人数
    int deleNameIndex = -1;//打入冷宫的娘娘的名讳索引
    int temp;//临时变量

    //姓名数组，最多容纳六个字符，每个字符串的长度为8个字符（英文）
    char names[MAX][20] = {"西施","貂蝉","王昭君","杨玉环","赵飞燕"};
    //级别数组，最多容纳5个字符，每个字符串的最大长度为8个字符（英文）
    char levelNames[5][10] = {"贵人","嫔妃","贵妃","皇贵妃","皇后"};
    //用来存放每个妃子的等级，与levelName联用，-1表示未启用
    int levels[MAX] = {0,2,0,1,2,-1};
    //用来存放每个妃子的好感度,-1表示未启用
    int loves[MAX] = {100,100,100,100,100,-1};

    //测试代码：查看当前嫔妃状态
    printf("\n");
    printf(" 姓名\t级别\t好感度\n");
    printf("***************************\n");
    for(i=0;i<count;i++)
    {
        printf("%s\t%s\t%d\n",names[i],levelNames[levels[i]],loves[i]);
    }
    printf("***************************\n");
    printf("当今登基皇帝名号；");
    scanf("%s",emperorName);//输入字符串，不需要&符号
    printf("***************************\n");
    printf("皇帝《%s》驾到,有事早奏，无事退朝！\n",emperorName);
    printf("1.皇帝下旨选妃；\t（新增功能）\n");
    printf("2.翻牌宠幸；\t\t（修改状态功能）\n");
    printf("3.打入冷宫；\t\t（删除功能）\n");
    printf("4.单独召见去小树林；\n");
    printf("***************************\n");
    printf("陛下请选择:");
    scanf("%d",&choice);
    printf("***************************\n");
    switch(choice)
    {
    case 1://皇帝下旨选妃；\t（新增功能）
        //1.增加数组元素（names,loves,levels)
        //2.判断是否还有空间增加数组元素
        if(count<MAX)//如果当前妃子少于系统最大
        {
            //执行操作
            printf("请输入娘娘的名讳：\n");
            scanf("%s",names[count]);
            //将count个元素初始化
            levels[count]=0;//级别为0
            loves[count]=0;//好感度为0
            count++;//添加人数，计数器增加1



        }else{

            printf("陛下，要注意龙体，后宫已经人满为患！\n添加失败\n");
        }

        break;

    case 2://翻牌宠幸；\t\t（修改状态功能）
            //1.找到索引
            //2.修改状态：好感度+10，级别+1，如果级别已经最高，则保持不变
            //3.其他人的好感度-10


            PF:printf("陛下请翻牌：");
            scanf("%s",tempName);

            for(i=0;i<count;i++)
                {
                    //如果不等于请继续输入
                    if(strcmp(tempName,names[i]) == 0)
                        {
                          break;
                        }else
                        {
                          goto PF;
                        }
                }


           for(i=0;i<count;i++){
                    //判断输入的名字是否和存在的人一样
                    if(strcmp(tempName,names[i]) == 0)
                        {
                            printf("圣上有旨诏%s娘娘进宫\n",tempName);
                            loves[i] += 10;
                            //如果当前级别已经最高，那就保持不变，否则级别+1
                            levels[i] = levels[i] > 4 ? 4 : levels[i] + 1;
                        }
                        else{
                                //其他人的好感度都 -10
                                loves[i] -= 10;
                       }
                }

            break;
    case 3://打入冷宫；\t\t（删除功能）
            //1.查找索引
            //2.后面一个赋值给前一个
            //3.数组总数减一
            //4,其他妃子好感度+10
            printf("请输入要打入冷宫的娘娘的名讳:\n");
            scanf("%s",tempName);

            for(i=0;i<count;i++)
            {
                //比价字符串是否相等
                if(strcmp(tempName,names[i]) == 0)
                {
                    deleNameIndex = i;
                    break;
                }
            }

            if(deleNameIndex == -1)
            {
                printf("陛下，后宫中没有这位娘娘！\n");
            }else
            {
                for(i=deleNameIndex;i<count-1;i++)
                {
                    //字符串在c语言中不能直接赋值
                    //所以需要使用字符串的strcpy
                    strcpy(names[i],names[i+1]);
                    loves[i] = loves[i+1];
                    levels[i] = levels[i+1];
                }
                count--;
            }

            //剩余妃子的好感度升值
            for(i=0;i<count;i++)
            {
                loves[i] += 10;
            }

        break;

    case 4://单独召见去小树林
            //1.查找，找出索引
            //2.增加好感度
            //3.用数组设计诗歌，随机产生表达皇帝文采
            printf("陛下要哪位娘娘陪你散散步：");
            scanf("%s",tempName);


            for(i=0;i<count;i++){
                    //判断输入的名字是否和存在的人一样
                    if(strcmp(tempName,names[i]) == 0)
                        {
                            printf("%s娘娘，陛下诏您到御花园赏花！\n",tempName);
                            loves[i] += 10;
                            //如果当前级别已经最高，那就保持不变，否则级别+1
                            levels[i] = levels[i] > 4 ? 4 : levels[i] + 1;
                       }

               }
            break;
    default:
        printf("君无戏言，请陛下再次确认！");
    }


    //最后打印妃子状态前，根据级别排序

    for(i=0;i<count-1;i++)
    {
        for(j=0;j<count-i-1;j++)
        {
            if(levels[j] < levels[j+1])
            {
                //姓名，级别，好感度三者都要交换


                temp = levels[j];
                levels[j] = levels[j+1];
                levels[j+1] = temp;

                temp = loves[j];
                loves[j] = loves[j+1];
                loves[j+1] = temp;

                strcpy(tempName,names[j]);
                strcpy(names[j],names[j+1]);
                strcpy(names[j+1],tempName);


         }
        }
    }

    printf("******************************\n");
    printf(" 姓名\t级别\t好感度\n");
    for(i=0;i<count;i++)
    {
        printf("%s\t%s\t%d\n",names[i],levelNames[levels[i]],loves[i]);
    }


    //播放音乐
//    PlaySound(TEXT("sounds\\选妃.wav"),
//              NULL,SND_FILENAME | SND_ASYNC | SND_LOOP);


    return 0;
}

int main()
{
    emperor();

    return 0;
}
