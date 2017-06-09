

int test_input()
{
    int j;
    char temp_Names[20];
    char name_s[5][20] = {"西施","杨玉环","貂蝉","赵飞燕","苏妲己"};
    int count2;
    printf("输入嫔妃\n");
    scanf("%s",temp_Names);
    for(j=0;j<count2;j++)
                {
                    if(strcmp(temp_Names,name_s[j]) == 1 || strcmp(temp_Names,name_s[j] == -1))
                        {
                            printf("陛下，您后宫中没有这位娘娘！请您重新翻。");
                            continue;

                        }
                }
                return 0;
}
