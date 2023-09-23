#include <stdio.h>
/*1.一个简单的字符串指针定义*/
/*int main()
{
    char arr[] = "abcedf";
    char* pc = arr;
    printf("%s\n",arr);
    printf("%s\n",pc);
}*/

/*2.常量指针*/
/*int main()
{
    char *p ="abcdef";//"abcdef"是一个常量字符串
    //把a的地址给p，写法正确 
    const char*p ="abcdef"
    //这种写法更严谨
    return 0;
}*/

/*3.指针数组*/
/*int main()
{
    int arr[10] = {0};//整型数组
    char ch[5] = {0};//字符数组
    int * parr[4];//存放整型指针的数组-指针数组
    char* pch[5];//存放字符指针的数组-指针数组 
    return 0;
}*/

/*int main()//能用，但是没什么用
{
    int a=10;
    int b=20;
    int c=30;
    int d=40;
    int*arr[4] = {&a,&b,&c,&d};
    int i=0;
    for(i=0;i<4;i++)
    {
        printf("%d",*(arr[i]));
    }
    return 0;
}*/

/*int arr1[] = {1,2,3,4,5};
int arr2[] = {2,3,4,5,6};
int arr3[] = {3,4,5,6,7};
int* parr[] ={arr1,arr2,arr3};
*(parr[i]+j)的方式取得所有值*/
 
/*4.数组指针*/
/*int main()
{
    int *p = NULL;//整形指针，指向整形的指针
    //存放整形的地址
    int (*p) [] = NULL;
    int arr[10] ={0};
    int arr[10] = {1,2,3,8,4,5,6};
    int (*p)[10] = &arr;//啰嗦
    //上面的p就数组指针
    char * arr[5]
    char*(*pa)[5] = &arr;
    int arr2[10] = {0};
    int (*pa2)[10] = &arr2;

    int arr[10] = {1,2,3,4,8,7,5,6,9};
    int *p=arr;
    int (*p)[10] = &arr;
}*/

/*inr arr[10] = {1,5,7,9,5,4,6,7};
int *p=arr;
arr[i] == *(arr+i) == *(p+i) ==p[i]*/

//二级指针传参
//也可以接受指针数组
/*void test(int **ptr)
{
    printf("");
}
int main()
{
    int n=10;
    int*p=&n;
    int **pp=&p;
    test(pp);
    test(&p);
}*/

/*5.函数指针*/
//存放函数地址的指针
//函数中取地址等同于函数
//ADD 与 &ADD传参一致，都是函数的地址 
/*int ADD(int x,int y)
{
    int z=0;
    z=x+y;
    return z;
}
int main()
{
    int (*p)(int,int) = ADD  //为函数指针
    (*p)(2,3);//函数指针的使用方式
}*/
/*void Print(char*str)
{
    printf("%s\n",str);
}
int main()
{
    void (*p)(char*) = Print;
    (*p)("hello bit");//也是使用方式
    return 0;
}*/
/*int ADD(int x,int y)
{
    int z=0;
    z=x+y;
    return z;
}
int main()
{
    int a=10;
    int b=20;
    int(*pa)(int,int) =ADD;
    printf("%d\n",(pa)(2,3));
    printf("%d\n",(*pa)(2,3));
    //printf("%d\n",(**pa)(2,3));//没必要了
    //printf("%d\n",(***pa)(2,3));//没必要了
    //神奇！！！！！！！！以上写法都是一样的
}*/

/*6.函数指针数组*/
/*int ADD(int x,int y)
{
    int z=0;
    z=x+y;
    return z;
}
int Sub(int x,int y)
{
    int z=0;
    z=x-y;
    return z;
}
int Mul(int x,int y)
{
    int z=0;
    z=x*y;
    return z;
}
int Dul(int x,int y)
{
    int z=0;
    z=x/y;
    return z;
}
int main()
{
    //指针数组
    int *arr[5];
    //函数指针
    int(*p)(int,int) = ADD;//Dul,Mul,Sub都可以存储
    //此时需要一个数组，可以存放四个函数的地址
    //函数指针的数组
    int(*parr[4])(int,int) ={ADD,Sub,Dul,Mul};
     //这个就是函数指针的数组
    int i=0;
    for(i=0;i<4;i++)
    {
        printf("%d\n",parr[i](2,3));//5 -1 6 0
        //可以依次进行4个函数的调用
    }
    return 0;
}*/

//小练习
/*char* my_strcpy(char* dest,const char*src);
//一个指向my_strcpy的函数指针
//写一个函数指针数组，能够存放四个my_strcpy
char* (*p)(char*,const char*);
//定义函数指针
char* (*p[4])(char*,const char*);
//定义函数指针数组*/

//计算器
/*7.回调函数*/
//通过函数指针调用函数


/*8.指向函数指针数组的指针*/
/*int ADD(int x,int y)
{
    return x+y;
} 
int main()
{
    int arr[10] ={0};
    int (*p)[10] =&arr;
    int(*pc)(int,int);//函数指针 
    int (*pa[4])(int,int);
     //pa是一个函数指针数组
    int (*(*pb)[4])(int,int) = &pa;
    //pa是一个数组指针，指向的元素有4个
    //指向的数组的每个元素的类型是一个函数指针int(*)(int,int)
}*/
//void *p,可以接受任意类型的地址
//不能进行任意的解引用，不能进行加减整数的操作

   








