#include <stdio.h>
#include <ctype.h>

//字符分类与字符转换函数
//int tolower(int c)  大写转小写
//int toupper(int c)  小写转大写
int main()
{
    //char ch = '2';
    //int ret = islower(ch);
    //int ret = isdigit(ch);
    //返回整型
    //printf("%d\n",ret);
    //char ch = tolower('Q');
    //putchar(ch);
    char arr[] = "I An A Student";
    int i=0;
    while(arr[i])
    {
        if(isupper(arr[i]))
        {
            arr[i] = tolower(arr[i]);
        }
        i++;
    }
    printf("%s\n",arr);
    return 0;
}