#include <stdio.h>

//预定义符号
/*int main()
{
    //printf("%s\n",__FILE__);
    //printf("%d\n",__LINE__);
    //printf("%s\n",__DATE__);
    //printf("%s\n",__TIME__);
    //写日志文件
    int i=0;
    int arr[10] = {0};
    FILE* pf = fopen("log.txt","w");
    for(i=0;i<10;i++)
    {
        arr[i] = i;
        fprintf(pf,"file:%s line:%d date:%s time:%s i=%d\n",
        __FILE__,__LINE__,__DATE__,__TIME__,i);
        printf("%s\n",__FUNCTION__);//打印的函数名称
        //__STDC__如果编译器遵循ANSI C，其值为1，否则未定义
    }
    fclose(pf);
    pf = NULL;
    for(i=0;i<10;i++)
    {
        printf("%d",arr[i]);
    }
    return 0;
}*/

//预处理指令
//#define
//#开头的都是预处理指令
/*
#pragma
*/

