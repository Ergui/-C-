#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>
#include <mmsystem.h>
#pragma comment(lib,"Winmm.lib")
#define MAX 6


/*
1.�ҵ�Ҫɾ���������±�
2.�Ӹ��±꿪ʼ����һ����ֵ����ǰһ��
3.����������һ
*/
int del_add_arr()
{
    int count = 5;
    int i,deleIndex = -1;//ͨ����һ�������ܵĳ�ֵ���ж��Ƿ��ҵ������е�ֵ
    double deleNum;
    double insertNum;
    double power[] = {3423,4452,2551,9342,12323};
    printf("����Ҫɾ��������\n");
    scanf("%lf",&deleNum);
    for(i=0;i<count;i++)
    {
        if(deleNum == power[i])
        {
            printf("�ҵ��ˣ���ϲ��\n");
            //��¼��ǰ���±�
            deleIndex = i;
            break;
        }
    }
    if(deleIndex == -1)
    {
        printf("δ�ҵ������\n");
    }
    else{
        //���±꿪ʼ����һ������ǰһ��
        for(i=deleIndex;i<count-1;i++){
            power[i] = power[i+1];
        }

    }
    //ɾ����Ϻ�������һ
    count--;
    printf("ɾ��һ��Ԫ�غ�����Ϊ��\n");
    for(i=0;i<count;i++)
    {

        printf("%.2lf, ",power[i]);
    }

    //�����µĲ���ֵ
    printf("\n�������ֵ:\n");
    scanf("%lf",&insertNum);
    power[count]= insertNum;
    //������Ϻ����鳤�ȼ�һ
    count++;
    //������ֵΪ
    printf("����������Ϊ��\n");
    for(i=0;i<count;i++)
    {
        printf("%.2lf, ",power[i]);
    }

}





//ʹ�ö�ά�����ʾѧ���ĳɼ�
int two_dimension()
{
	int i,j;
	double score[4][3] = {
	{93,82,73},
	{81,64,59},
	{78,77,45},
	{59,92,87}
};

//ʹ��ѭ����ӡ����

for(i=0;i<4;i++)
{
	for(j=0;j<3;j++)
	{
		printf("%.2lf, ",score[i][j]);
	}
	printf("\n");
}

}


//������Ϸ
int emperor()
{
    char emperorName[50]; //��������û�����Ļʵ�����
    int choice;
    int i,j;
    char tempName[20];//���Ƶ���ʱ����
    int count=5;//��ǰδ�����乬��������
    int deleNameIndex = -1;//�����乬���������������
    int temp;//��ʱ����

    //�������飬������������ַ���ÿ���ַ����ĳ���Ϊ8���ַ���Ӣ�ģ�
    char names[MAX][20] = {"��ʩ","����","���Ѿ�","����","�Է���"};
    //�������飬�������5���ַ���ÿ���ַ�������󳤶�Ϊ8���ַ���Ӣ�ģ�
    char levelNames[5][10] = {"����","����","����","�ʹ���","�ʺ�"};
    //�������ÿ�����ӵĵȼ�����levelName���ã�-1��ʾδ����
    int levels[MAX] = {0,2,0,1,2,-1};
    //�������ÿ�����ӵĺøж�,-1��ʾδ����
    int loves[MAX] = {100,100,100,100,100,-1};

    //���Դ��룺�鿴��ǰ����״̬
    printf("\n");
    printf(" ����\t����\t�øж�\n");
    printf("***************************\n");
    for(i=0;i<count;i++)
    {
        printf("%s\t%s\t%d\n",names[i],levelNames[levels[i]],loves[i]);
    }
    printf("***************************\n");
    printf("����ǻ��ʵ����ţ�");
    scanf("%s",emperorName);//�����ַ���������Ҫ&����
    printf("***************************\n");
    printf("�ʵۡ�%s���ݵ�,�������࣬�����˳���\n",emperorName);
    printf("1.�ʵ���ּѡ����\t���������ܣ�\n");
    printf("2.���Ƴ��ң�\t\t���޸�״̬���ܣ�\n");
    printf("3.�����乬��\t\t��ɾ�����ܣ�\n");
    printf("4.�����ټ�ȥС���֣�\n");
    printf("***************************\n");
    printf("������ѡ��:");
    scanf("%d",&choice);
    printf("***************************\n");
    switch(choice)
    {
    case 1://�ʵ���ּѡ����\t���������ܣ�
        //1.��������Ԫ�أ�names,loves,levels)
        //2.�ж��Ƿ��пռ���������Ԫ��
        if(count<MAX)//�����ǰ��������ϵͳ���
        {
            //ִ�в���
            printf("��������������䣺\n");
            scanf("%s",names[count]);
            //��count��Ԫ�س�ʼ��
            levels[count]=0;//����Ϊ0
            loves[count]=0;//�øж�Ϊ0
            count++;//�������������������1



        }else{

            printf("���£�Ҫע�����壬���Ѿ�����Ϊ����\n���ʧ��\n");
        }

        break;

    case 2://���Ƴ��ң�\t\t���޸�״̬���ܣ�
            //1.�ҵ�����
            //2.�޸�״̬���øж�+10������+1����������Ѿ���ߣ��򱣳ֲ���
            //3.�����˵ĺøж�-10


            PF:printf("�����뷭�ƣ�");
            scanf("%s",tempName);

            for(i=0;i<count;i++)
                {
                    //������������������
                    if(strcmp(tempName,names[i]) == 0)
                        {
                          break;
                        }else
                        {
                          goto PF;
                        }
                }


           for(i=0;i<count;i++){
                    //�ж�����������Ƿ�ʹ��ڵ���һ��
                    if(strcmp(tempName,names[i]) == 0)
                        {
                            printf("ʥ����ּگ%s�������\n",tempName);
                            loves[i] += 10;
                            //�����ǰ�����Ѿ���ߣ��Ǿͱ��ֲ��䣬���򼶱�+1
                            levels[i] = levels[i] > 4 ? 4 : levels[i] + 1;
                        }
                        else{
                                //�����˵ĺøжȶ� -10
                                loves[i] -= 10;
                       }
                }

            break;
    case 3://�����乬��\t\t��ɾ�����ܣ�
            //1.��������
            //2.����һ����ֵ��ǰһ��
            //3.����������һ
            //4,�������Ӻøж�+10
            printf("������Ҫ�����乬�����������:\n");
            scanf("%s",tempName);

            for(i=0;i<count;i++)
            {
                //�ȼ��ַ����Ƿ����
                if(strcmp(tempName,names[i]) == 0)
                {
                    deleNameIndex = i;
                    break;
                }
            }

            if(deleNameIndex == -1)
            {
                printf("���£�����û����λ���\n");
            }else
            {
                for(i=deleNameIndex;i<count-1;i++)
                {
                    //�ַ�����c�����в���ֱ�Ӹ�ֵ
                    //������Ҫʹ���ַ�����strcpy
                    strcpy(names[i],names[i+1]);
                    loves[i] = loves[i+1];
                    levels[i] = levels[i+1];
                }
                count--;
            }

            //ʣ�����ӵĺøж���ֵ
            for(i=0;i<count;i++)
            {
                loves[i] += 10;
            }

        break;

    case 4://�����ټ�ȥС����
            //1.���ң��ҳ�����
            //2.���Ӻøж�
            //3.���������ʫ�裬����������ʵ��Ĳ�
            printf("����Ҫ��λ��������ɢɢ����");
            scanf("%s",tempName);


            for(i=0;i<count;i++){
                    //�ж�����������Ƿ�ʹ��ڵ���һ��
                    if(strcmp(tempName,names[i]) == 0)
                        {
                            printf("%s�������گ��������԰�ͻ���\n",tempName);
                            loves[i] += 10;
                            //�����ǰ�����Ѿ���ߣ��Ǿͱ��ֲ��䣬���򼶱�+1
                            levels[i] = levels[i] > 4 ? 4 : levels[i] + 1;
                       }

               }
            break;
    default:
        printf("����Ϸ�ԣ�������ٴ�ȷ�ϣ�");
    }


    //����ӡ����״̬ǰ�����ݼ�������

    for(i=0;i<count-1;i++)
    {
        for(j=0;j<count-i-1;j++)
        {
            if(levels[j] < levels[j+1])
            {
                //���������𣬺øж����߶�Ҫ����


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
    printf(" ����\t����\t�øж�\n");
    for(i=0;i<count;i++)
    {
        printf("%s\t%s\t%d\n",names[i],levelNames[levels[i]],loves[i]);
    }


    //��������
//    PlaySound(TEXT("sounds\\ѡ��.wav"),
//              NULL,SND_FILENAME | SND_ASYNC | SND_LOOP);


    return 0;
}

int main()
{
    emperor();

    return 0;
}
