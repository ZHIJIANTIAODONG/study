//自定义类型，结构体类型，枚举类型，联合
#include <stdio.h>
#include <stddef.h>
/*1.结构体的简单声明*/
/*struct tag
{
    member-list;//成员列表
}variable-list;//变量列表*/
//结构体关键字，结构体标签
/*struct Stu
{
    char name[20];//成员变量
    char tele[12];
    char sex[10];
    int age;
}s4,s5,s6;//全局变量

struct Stu s3;//全局变量

int main()
{
    struct Stu s1;//局部变量
    struct Stu s2;//结构体变量
}
//匿名结构体变量
struct 
{
    int a;
    char b;
    float c;
}x;//必须在此创建名字

struct 
{
    int a;
    char b;
    float c;
}* psa;//与上述匿名结构指针类型不一样
//匿名结构体指针*/

/*2.结构的自引用*/
/*struct Node
{
    int data;
    //struct Noda n;  错误
    struct Node * next;//存放下一个节点的地址没有问题
    //存放数据为数据域
    //存放指针为指针域
};

int main()
{
    return 0;
}*/

/*3.结构体重命名*/
/*typedef struct Node
{
    int data;
    struct Node * next;//存放下一个节点的地址没有问题
}Node;

int main()
{
    struct Node n1;
    Node n2;
    return 0;
}*/

/*4.结构体初始化*/
/*struct T
{
    double weight;
    short age;
};
struct S
{
    char C;
    struct T st;
    int a;
    double d;
    char arr[20];
};
int main()
{
    struct S s ={'c',100,3.14,"hello bit"};
    struct S s ={'c',{55.6,30},100,3.14,"hello bit"};
    printf("%c %d %lf %s\n",s.C,s.a,s.d,s.arr);
    printf("%lf\n",s.st.weight);
    return 0;
}*/

/*5.结构体内存对齐*/
/*struct S1
{
    char c1;
    int a;
    char c2;
};//12

struct S2
{
    char c1;
    char c2;
    int a;
};//8

struct S3
{
    double a;
    char c;
    int i;
};//16
//双精度浮点数占8个字节，char对齐一个字节，int对齐4个字节，此时char与int空出来3个字节，和为16个字节

struct S4
{
    cahr c1;
    struct S3 s3;//16
    double d;
};//32
//char占一个字节，struct对齐数最小为8，此时char与struct空出7个位置，double占8个字节，直接对齐，8+8+16=32，32为8的整数倍
//对齐的本质，用空间换时间
//1.平台原因  2.性能原因
//设计结构体时，既要满足对齐，又要节省空间
//小技巧，  让空间小的成员尽量集中在一起

int main()
{
    struct S1 s1 = {0};
    printf("%d\n",sizeof(s1));
    struct S1 s2 = {0};
    printf("%d\n",sizeof(s2));
}*/

/*6.offsetof*/
//结构体成员相对于结构体起始位置的偏移量是多少
//size_t offsetof(strucName,memberName)
/*struct S
{
    char c;
    int i;
    double d;
};

int main()
{
    printf("%d\n",offsetof(struct S,c));
    printf("%d\n",offsetof(struct S,i));
    printf("%d\n",offsetof(struct S,d));
    //0   4    8
    return 0;
}*/

/*7.结构体传参*/
/*struct S
{
    int a;
    char c;
    double d;
};

void Init(struct S tmp)
{
    tmp.a =100;
    tmp.c='W';
    tmp.d=3.14;
}  //此时为值传递，src未改变

void Init2(struct S* ps)//此时为地址传参
{
    ps->a = 200;
    ps->c = 'm';
    ps->d = 3.78;
}

//传值
//转递量过大时，系统开销过大，传址更优
//函数传参时，参数需要压栈，会有时间和空间上的系统开销
//如果传递一个结构体对象的时候，结构体过大，参数压栈的系统开销就比较大，所以会导致性能的下降
void print1(struct S tmp)
{
    printf("%d %c %lf\n",tmp.a,tmp.c,tmp.d);
}

//传址
//第一个优一点，因为本质不会拷贝
//防止改变，用const修饰
void print2(const struct S* tmp)
{
    printf("%d %c %lf\n",tmp->a,tmp->c,tmp->d);
}

int main()
{
    struct S s ={0};
    //Init(s);
    Init2(&s);
    print1(s);
    print2(&s);
    return 0;
}*/

/*8.位段*/
//结构体实现位段的能力
//位段的声明
//1.位段的成员必须是int.unsigned int 或signed int   只要是整型就行
//2.位段的成员名后边有一个冒号和一个数字
//位段---二进制位
/*truct S  //位段式结构体
{
    int _a:2; //2个bit
    int _b:5; //5个bit
    int _c:10;
    int _d:30;//字节数不能大于32
};
//47---bit----
//位段的内存分配
//1.位段成员可以是int unsigned int signed int或者char类型
//2.位段的空间是按照需要以4个字节(int)或者一个字节(char)的方式来开辟的
//3.位段涉及很多不确定的因素，位段是不跨平台的，注重可移植的程序应该避免使用位段
//例如，分配空间要不要浪费，分配空间的顺序是从左向右还是从右向左，c语言没有规定
//因此不同编译器有不同的理解，因此不支持跨平台
//位段为了节省空间
int main()
{
    struct S s;
    printf("%d\n",sizeof(s));//8
    //每一次开辟4个字节，32个Bit，a+b+c=等于17，第四个需要30个字节，此时放不下，重新开辟一个int，因此开辟俩个int，占据8个字节
}*/
//位段的跨平台问题
//1.int 位段被当成有符号数还是无符号数不确定
//2.位段中最大位的数目不能确定
//3.位段中成员内存从左向右分配还是从右向左分配不确定
//(16位机器最大为16，32位机器最大位32，写成27，在16位机器会出问题)
//4.当一个结构体包含两个位段，第二个位段成员较大，无法容纳第一个位段剩余的位时，是利用还是舍弃不确定
/*struct S
{
    char a:3;
    char b:4;
    char c:5;
    char d:4;
};

int main()
{
    struct S s ={0};

    s.a=10;//因为a分配了三个字节，最大存放为7，溢出存放010
    s.b=20;//因为b分配了四个字节，最大存放为15，溢出存放0100
    s.c=3;//可以完全存放
    s.d=4;//可以完全存放
    //鹏哥的案例为从右向左存放
    return 0;
}*/

/*9.枚举*/
//一一列举   性别，一周
/*enum Day
{
    Mon,
    Tues,
    Wed,
    Thur,
    Fri,
    Sat,
    Sum 
};
//枚举类型
enum Sex
{
    //枚举可能的取值-枚举常量
    MALE,// 0
    FEMALE,// 1
    SECRET// 2
};
enum Sex
{
    MALE =2,//自己设置对应枚举常量的数值   赋值一个初始值
    FEMALE =4,//直接赋值初始值最标准
    SECRT =8
}

enum Color
{
    RED,//0
    GREEN,//1
    BLUE //2
};
int main()
{
    enum Sex s=MALE;
    enum Color c = BLUE;
    printf("%d %d %d\n",RED,GREEN,BLUE);//0  1  2分别对应枚举类型的1，2，3个常量
}
//枚举的优点
//1.增加代码的可读性
//2.和#define定义的标识符比较枚举有类型检查，更加严谨
//3.防止了命名污染(封装)
//4.便于调试
//5.使用方便，依次可以定义多个常量
*/

/*10.联合(共用体)*/
/*union Un//此时c与i公用这一块空间

//联合变量的大小，至少是最大成员的大小
//同一时刻不能同时使用两个成员变量
{
    char c;
    int i;
};

int main()
{
    union Un u;
    printf("%d\n",sizeof(u));
    printf("%p\n",&(u.c));
    printf("%p\n",&(u.i));
    printf("%p\n",&u);
    //4
//0xffffcbfc
//0xffffcbfc
//0xffffcbfc
}*/
 //太巧妙了！！！
 /*int check_sys()
 {
    union UN //也可以省略标签，仅仅使用一次
    {
        char c;
        int i;
    }u;
    u.i=1;
    return u.c;
 }
 
 int main()
 {
    int a=1;
    int ret = check_sys();
    if(1 == ret)
    {
        printf("小端\n");
    }
    else
    {
        printf("大端\n");
    }
    return 0;
 }
 //枚举的大小为整型的大小*/
/*union Un
{
    int a;4/8   4
    char arr[5];5  1/8  1
    //当最大成员大小不是最大对齐数的整数倍时，就要对齐到最大对齐数的整数倍
};

 int main()
 {
    union Un u;
    printf("%d\n",sizeof(u));
 }*/

















