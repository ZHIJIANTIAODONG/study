#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <errno.h>
//malloc
//free
//calloc
//realloc

/*1.malloc*/
//void* malloc(size_t size);
//动态内存开辟
//开辟失败返回空指针
//不初始化内容，内容为随机数
/*int main()
{
    int* p = (int*)malloc(10*sizeof(int));
    if(p==NULL)
    {
        printf("%s\n",strerror(errno));
    }
    else
    {
        int i=0;
        for(i=0;i<10;i++)
        {
            *(p+i)=i;
        }
        for(i=0;i<10;i++)
        {
            printf("%d",*(p+i));
        }
    }
    //当空间不再使用时
    //void free(void* memblock);
    free(p);
    p = NULL;
    return 0;
}*/

/*2.calloc*/
//void* calloc(size_t num,size_t size);
//初始化内容，为0
/*int main()
{
    int* p = (int*)calloc(10,sizeof(int));
    if(p == NULL)
    {
        printf("%s\n",strerror(errno));
    }
    else
    {
        int i=0;
        for (i=0 ; i < 10; i++)
        {
           printf("%d",*(p+i));
        }
        
    }
    free(p);
    p=NULL;
    return 0;
}*/

/*3.reslloc*/
//调整动态内存开辟的大小
//void *realloc(void* memblock,size_t size)
/*int main()
{
    int* p = (int*)malloc(20);
    if(p ==NULL)
    {
        printf("$s\n",strerror(errno));
    }
    else
    {
        int i=0;
        for(i=0;i<5;i++)
        {
            *(p+i)=i;
        }
    }*/
    //假设这里的20字节不能满足我们的使用了
    //希望我们能够有40个字节的空间
    //这里就可以使用realloc来调节动态开辟的内存
    //realloc使用的注意事项
    //当后面空间不能直接补的时候
    //realloc将会重新开辟一块空间
    //1.如果p指向空间之后有足够的内存空间可以追加，则直接追加后返回p
    //2.如果p指向空间之后没有足够的内存空间可以追加，则realloc会重新找一个新的内存区域
    //开辟一块满足需求的空间，并且把原理内存中的数据拷贝回来，释放旧的内存空间，
    //最后返回新开辟的内存空间地址
    //3.得用一个新的变量接受realloc函数的返回值，因为当realloc开辟失败时，会返回空指针，此时如果直接赋值，将会改变原来指针，就找不到了
    //
    /*int* ptr = realloc(p,40);
    if(ptr != NULL)
    {
        p = ptr;
        int i=0;
        for(i=5;i<10;i++)
        {
            *(p+i)=i;//指针未偏移，*p++有问题，指针偏移了，不能直接free，free只能从起始位置开始释放
        }
        for(i=0;i<10;i++)
    {
        printf("%d",*(p+i));
    }
    }
    //释放内存
    //开辟新空间时，realloc会主动释放久空间，因此不需要重新释放旧空间
    free(p);
    p=NULL;
    return 0;
}*/
//int *p =realloc(NULL,40)此时等价于malloc(40)
///使用前一定要判断是否开辟成功
//不能对动态开辟空间进行越界访问
//不能对非动态开辟空间进行free
//不能使用free释放动态开辟内存的一部分
//不能对同一块动态内存的多次释放
 
/*4.柔性数组*/
//好处，
//1.方便内存释放
//2.有利于访问速度
//结构体的柔性数组成员前面必须至少一个其他成员
//sizeof返回的这种结构体大小不包括柔性数组的内存
//包含柔性数组成员的结构用malloc()函数进行内存的动态分配，并且分配的内存应该大于结构体的大小，以适应柔性数组的预期大小
/*struct S1
{
    int n;
    int arr[];//两种柔性数组-柔性数组成员-数组的大小是可以调整的
};

struct S2
{
    int n;
    int arr[0];
};

int main()
{
    struct S2 s;
    printf("%d\n",sizeof(s));
    struct S2* ps=(struct S2*)malloc(sizeof(struct S2)+5*sizeof(int));
    ps->n = 100;
    int i=0;
    for (size_t i = 0; i < 5; i++)
    {
        ps->arr[i]=i;
    }
    struct S2* ptr = realloc(ps,44);
    if(ptr != NULL)
    {
        ps=ptr;
    }
    for(i=5;i<10;i++)
    {
        ps->arr[i]=i;
    }
    for(i=0;i<10;i++)
    {
        printf("%d",ps->arr[i]);
    }
    free(ps);
    ps=NULL;
    return 0;
}*/

/*struct S  //与上述写法区别不大
{
    int n;
    int *arr;
};

//多次malloc开辟空间会导致内存碎片
//开辟不连续，访问效率低
int main()
{
    struct S*ps=(struct S*)malloc(sizeof(struct S));
    ps->arr = malloc(5*sizeof(int));
    int i =0;
    for(i=0;i<5;i++)
    {
        ps->arr[i]=i;
    }
    for(i=0;i<5;i++)
    {
        printf("%d",ps->arr[i]);
    }
    int *ptr =realloc(ps->arr,10*sizeof(int));
    if(ptr != NULL)
    {
        ps->arr=ptr;
    }
    for(i=5;i<10;i++)
    {
        ps->arr[i]=i;
    }
    for(i=0;i<10;i++)
    {
        printf("%d",ps->arr[i]);
    }
    free(ps->arr);
    ps->arr = NULL;
    free(ps);
    ps=NULL;
    return 0;
}*/

/*5.*/



























