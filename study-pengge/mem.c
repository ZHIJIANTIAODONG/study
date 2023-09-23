#include <stdio.h>
#include <string.h>
#include <assert.h>
//void* 通用类型指针 -无类型指针
//void* memcpy(void* destination,const void* source,size_t num); 代表多少个字节
//内存拷贝

/*1.memcpy*/
//代码运行有问题，希望以后可以解决,18,19行有问题，不知道什么情况，不能当作左值
/*void* my_memcpy(void* dest,const void* src,size_t num)
{
    void* ret = dest;
    assert(dest != NULL);
    assert(src != NULL);
    while(num--)
    {
       *(char*)dest = *(char*)src;
       ++(char*)dest ;
       ++(char*)src  ;
    }
    return ret;
} 

struct s
{
    char name[20];
    int age;
};

//C语言标准
//memcpy 只要处理 不重叠的内存拷贝就可以了
//memmove 处理重叠内存的拷贝

void* my_memmove(void*)

int main()
{
    int arr1[] = {1,2,3,4,5};
    int arr2[5] = {0};
    struct s arr3[] ={{"张三",20},{"李四",30}};
    struct s arr4[3]={0};
    my_memcpy(arr4,arr3,sizeof(arr3));
    //memcpy(arr2,arr1,sizeof(arr1));
    memmove负责重叠拷贝
    void* memmove(void* dest,const void* src,size_t count)
}*/

/*2.memmove*/
/*void* my_memmove(void* dest,const void* src,size_t count)
{
    void* ret = dest;
    assert(dest != NULL);
    assert(src != NULL);
    if(dest<src)//从前向后
    {
        while(count--)
        {
            *(char*)dest = *(char*)src;
            ++(char*)dest;
            ++(char*)src;
        }
    }
        else
        {
            while(count--)
            {
                *((char*)dest+count) = *((char*)src+count);

            }
        
        }
        return ret;
}
int main()
{
    int arr3[] ={1,2,3,4,5,6,7,8,9,10};

    my_memmove(arr3+2,arr3,20);
}*/

/*3.memcmp*/
/*int main()
{
    int arr1[] ={1,2,3,4,5};
    int arr2[] ={1,2,5,4,3};
    int ret = memcmp(arr1,arr2,9);
    //返回0表示相同
    //第一个大，返回大于0的数
    //第二个大，返回小于0的数
    printf("%d\n",ret);
    return 0;
}*/

/*4.mamset*/

int main()
{
    char arr[10] = "";
    memset(arr,'3',10);//10为10个字节
    return 0 ;
}





