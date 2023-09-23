#include <string.h>
#include <stdio.h>
#include <assert.h>
/*1.strlen*/
//size_t strlen(sonst char* string);
//size_t == unsigned int
/*
自己实现有三种方法，1.计数器的方法 2.递归  3.指针-指针
int main()
{
    if(strlen("abc") - strlen("advwwea") > 0 )
    {
        printf("hehe\n");
    }
    else
    {
        printf("haha\n");
    }
    return 0；
}
//上述程序输出的为hehe
//因为strlen返回的数位无符号整数，把负数的补码当作无符号整数返回，此时很大，大于0
*/

/*2.strcpy*/
// char* strcpy(char * destination,const char* source)
/*
源字符串必须以\0结束
会将源字符串中的\0拷贝到目标空间
目标空间必须足够大，以确保能存放源字符串
目标空间可变
char* my_strcpy(char* dest,const char *src)
{
    assert(dest != NULL);
    assert(src != NULL);
    char * ret = dest; //起始位置发生改变，因此找回起始位置
    while(*dest++ = *src++)   //非常巧妙的写法
    {
        ;
    }
    return ret;
}
int main()
{
    char arr1[] = "adwoidjea";
    char arr2[] = "adw";

    my_strcpy(arr1,arr2);
    printf("%s\n",arr1)
}
*/

/*3.strcat*/
//char* strcat(char* strDestination,const char*strSource);
/*
目标空间足够大
源字符串与目标空间字符串都以\0结尾
目标空间可修改
自己追加自己程序会崩溃
char* my_strcat(char* dest,const char* src)
{
    char* ret = dest;
    assert(dest && src);  //m满足()内就不会有问题
    //找到目的字符串的\0位置，找到之后再追加
    while(*dest != '\0')
    {
        dest++;
    }
    //2.追加
    while(*dest++ = *src++)
    {
        ;
    }
    return ret;
}
int main()
{
    char arr1[30] = "hello";
    char arr2[] = "world";
    my_strcat(arr1,arr2);
    peintf("%s\n",arr1);
    return 0;
}
*/

/*4.strcmp*/
//int strcmp(const char*string1,const char* string2)
/*//比较字符串的ascall值，一对一对相比较
//VS2013
//> 1
//== 0
//< -1
//linux-gcc
//> 返回的为大于0的数
//== 返回0
//<  返回小于0的数，不同编译器返回不同
my_strcmp(const char* p1,const char* p2)
{
    assert(p1 && p2);
    //比较
    while(*p1 == *p2)
    {
        if(*p == '\0')
        {
            return 0;
        }
        p1++;
        p2++;
    }
    //if(*p1 > *p2)
    //  return 1;  //大于
    //else(*p1 < p*2)
    //  return -1; //小于
    return (*p1 - *p2);
}
int main()
{
    char* p1 ="abcdef";
    char* p2 ="daldw";
    my_strcmp()
}
*/

/*5.strncpy*/
/*char* my_strncpy(char* dest,const char* src,size_t n)
{
    char* start = dest;
    while(n && (*dest++ = *src++) )
           n--;
    if(n)  //源数组长度小于n
       while(--n) //在目标元素数组后补\0
             *dest++ = '\0';

    return(start);
}
int main()
{
    int n=3;
    char arr1[10] = "abcdef"; 
    char arr2[4] = "bit";
    my_strncpy(arr1,arr2,1);
    printf("%s\n",arr1);
}*/

/*6.strncat*/
//char* my_strncat(char* dest,const char* src,size_t count)
//追加函数时会主动放一个\0
//库函数太强辣
/*char* my_strncat(char* a1,const char* a2,size_t n)
{
    char *start = a1;
    while(*a1++)
    ;
    a1--;
    while(n--)
        if(!(*a1++ = *a2++))
              return start;
    *a1='\0';
    return start;
}
int main()
{
    int n=2;
    char arr1[6] = "hello";
    char arr2[6] = "world";
    my_strncat(arr1,arr2,3);
    printf("%s\n",arr1);
}*/

/*7.strncmp*/
//char* my_strncmp(char* string1,const char* string2,size_t count)
/*int main()
{
    const char* p1="abcdef";
    const char* p2="abcqwer";
    //int ret = strcmp(p1,p2);
    int ret = strncmp(p1,p2,3);//比较前n个字符
    printf("%d\n",ret);
}*/

/*8.strstr*/
//char *strstr(const char*,const char*);
//KMP算法
//查找字符串
//strstr返回的是地址
//第一次出现的位置
/*char* my_strstr(const char* a1,const char* a2)
{
    assert(a1 && a2);
    char *s1 =NULL;//=a1;  //a1,复位指针，对比指针，记录指针
    char *s2 =NULL;//=a2;  //对比指针，复位指针
    char *cur =(char*)a1;
    if(*a2 == '\0')
    {
        return (char*)a1;
    }
    while(*cur)
    {
        s1 =cur;      //复位
        s2 =(char*)a2;//复位
        while(*s1 && *s2 &&(*s1 == *s2))
        {
            s1++;
            s2++;
        }
        if(*s2 == '\0')
        {
            return cur;     //找到
        }
        cur++;
    }
    return NULL;//找不到
}

int main()
{
    char *p1="abbbcdef";
    char *p2="bbc";
    char *ret=my_strstr(p1,p2);
    if(ret == NULL)
    {
        printf("子串不存在\n");
    }
    else
    {
        printf("%s\n",ret);
    }
    return 0;
}*/

/*9.strtok*/
//调用的时候他会记住上一次分割的地址
//函数内部会创建静态变量
//char *strtok(char* str,const char* sep)
//192.188.1561     .
//1651@biyb.awd    @
//妙啊啊啊啊啊啊啊啊
//点分十进制的表示方式192.168.31.121
/*int main()
{
    char arr[] = "dadwde@da.sad";
    char *p = "@.";
    char buf[1024] = {0};
    strcpy(buf,arr);
    //char *ret = strtok(arr,p);
    //printf("%s\n",ret);
    //ret = strtok(NULL,p);
    //printf("%s\n",ret);
    //ret = strtok(NULL,p);
    //printf("%s\n",ret);
    char *ret = NULL;
    for(ret = strtok(arr,p);ret !=NULL;ret = strtok(NULL,p))
    {
        printf("%s\n",ret);
    }
}*/

/*10.strerror*/
//将错误码翻译为对应的错误信息
//char * strerror (int errnum)
/*#include <errno.h>
int main()
{
    //C语言的库函数执行的时候创建的
    //错误码 对应  错误信息
    //0--No error
    //1--Operation not permitted
    //2--No such file or directory
    //errno 是一个全局的错误吗的变量
    //当C语言的库函数在执行的过程中，发生了错误，就会把对应的错误码，赋值到errno中
    //char *str = strerror(errno);
    //printf("%s\n",str);

    //打开文件
    FILE* pf = fopen("text.txt","r");
    if(pf == NULL)
    {
        printf("%s\n",strerror(errno));
    }
    else
    {
        printf("open file success\n");
    }
    return 0;
}*/








