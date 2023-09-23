#include  <stdio.h>
#include <string.h>
#include <windows.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>


/*1.第一个打印相关知识
//std-标准 standard  i-input  o-output
//标准输入输出

int main()//主函数 程序的入口 且仅有一个
//main前面的int的意思表示main函数调用返回的是一个整型值
{
    printf("hehe\n");//\n表示换行
//函数print打印  f-function
//printf是库函数-c语言本身提供的函数
//#是指令形式include包含stdio.h的文件
    return 0;  //返回整数0
}
*/

/*2.不同类型数
 int main()
 {
    //short int 短整型
    //char ch = 'a';
    //printf("%c\n",ch);
    //int age = 20;
    //printf("%d\n",age);//%d 打印整型10进制数
    //long长整形
   // long num = 100;
   // printf("%d\n",num);
    //return 0;
    //%d 打印整型 %c 打印字符 
    //%f 打印浮点型 %p 以地址的形式打印
    //%x 打印16进制
    //float f = 5.0;
    //printf("%f\n",f)  ;
    //return 0;  打印出来可以包含五个小数位
   // double d  = 3.14;
   // printf("%lf\n",d);  
   //%lf表示打印双精度浮点数
    return 0;
 }
 */

/*3.不同类型数所占空间字节
int main()
{
    printf("%d\n",sizeof(char));
    printf("%d\n",sizeof(short));
    printf("%d\n",sizeof(int));
    printf("%d\n",sizeof(long));
    printf("%d\n",sizeof(long long));
    printf("%d\n",sizeof(float));
    printf("%d\n",sizeof(double));
    return 0;
    //1   2   4    4/8    8    4    8
    //字节  c语言规定sizeof(long)>=sizeof(int)

      计算机中的单位-计算机是硬件

      bit-比特位  只能存一个二进制位1或者0
      byte-字节  是8个比特位10100110
      kb  1024个字节
      mb  1024kb
      gb 
      tb 
      pb 

}*/

/*4.向内存申请过程
int main()
{
    //年龄 20
    short age = 20; 
    //向内存申请两个字节 16bit
    float weight = 95.6f;
    //向内存申请4个字节存放小数
    //明确指定体重是单精度浮点型
    return 0;
}*/

/*5.局部变量与全局变量
int num2 = 20;
//全局变量-定义在代码块之外的变量

int main()
{
    int num1 = 10;
    //局部变量-定义在代码块内部的变量
    //局部变量和全局变量的名字建议不要相同
    //容易误会产生bug
    //若同时存在局部变量优先
    return 0;
}*/

/*6.变量的简单用法
int main()
{
    int num2 = 0;
    int num1 = 0;
    scanf("%d%d",&num1,&num2);//&取地址符号
    //输入数据-使用输入函数scanf
    int sum = 0;
    //c语言语法规定，变量要定义在当前代码块的最前面
    sum = num1 + num2;
    printf("sum = %d\n",sum);
    return 0;
}*/

/*7.作用域的概念与生命周期的概念
int main()
{ 
    {
    int num = 0;
    printf("num= %d\n",num); 
    //大括号内就是num的作用域
    //局部变量的作用域
    //全局变量的作用域是整个工程
    //声明外部符号extern
    return 0;
    }
}*/


/*8.常量*/
//1.字面常量
//2.const修饰的常变量
//3.#define定义的标识符常量
//4.enum枚举常量

//#define 定义的标识符常量
//#define MAX 10
// enum{
//     MALE ,
//     FEMALE ,
//     SECRET 
// };
// {
 
    //int arr[MAX] = {0};
    //printf("%d\n",MAX);
   //字面常量
   // const int num = 4;
    //const修饰的常变量，不能改变
   //num是变量，但是有常属性
    //例如：const int num = 4;
    //      int car[num]={;}此代码错误
    //       int car[10]={};则没问题

    //printf("%d\n",num);
    //num = 8;
    //printf("%d\n",num);
    /*65151
    6516156
    61651
    6516516*/

    /*9.字符串*/
    //a-97
    //A-65
    //strlen计算字符串长度
    //\n转义字符，改变原来的意思
    //\t---水平制表符
    //??+)   ->三字字母  \?防止被解析成三字母组
    // \\防止斜杠被解释为转义字符
    // \ddd表示1-3个八进制数字，如 \130x
    // \xdd表示两个十六进制数字。如：\x30 0
    //并表示其10位数字所代表的ascall码值
   /* int main()
    {
        char arr1[]="abc";
        //”abc“----'a''b''c''\0'字符串的结束标志
        char arr2[]={'a','b','c',0};
        printf("%s\n",arr1);
        printf("%s\n",arr2);
        return 0;
    }*/

/*9.一个简单循环
    int main()
    {
        int line = 0;
        while(line < 20000 )
        {
            printf("敲一行代码\n");
            line ++;
        }
        printf("好offer\n");
        return 0;
    }*/

    /*10.一个简单的自定义函数
    int ADD(int x,int y)
    {
        int z=x+y;
        return z;
    }
    int main()
    {
        int a = 1;
        int b = 2;
        int c = 3;
        int d = 2;
        int sum =0;
       // sum = a + b;
       // sum = b + c;
       //sum = ADD(a,b);
       sum = ADD(c,d);
        printf("sum=%d\n",sum);
        return 0;

    }*/

    /*11.数组的简单使用
    int main()
    {
        int i=0;
        int arr[10] = {1,2,3,4,5};
        while(i<10)
        {
            printf("%d\n",arr[i]);
            i++;
        }
        //printf("%d",arr[2]);
        return 0;
    }*/

    /*12.操作符符的简单应用
    int main()
    {
        int a =1;
        int arr[10]={0};
        int es = 0;
        es = sizeof(arr)/sizeof(arr[0]);
        printf("%d\n",es);
        //数组的大小需要用常量来确定
        //整型占4个字节，32个bit位
        //00000000000000000000000000000001
        //a<<1
        //00000000000000000000000000000010
        //向右移补0，只有负数右移补0
        //&按位与 需要同时为真
        //101 001 按位与之后为 001
        //按位或之后111
        //|按位或 一个为真即可
        //^按位异或 对应的二进制位相同为0 相异为1
        //即110 101 异或后为010
        return 0;
    }*/

    /*13.原码 反码 补码
    int main()
    {
        //int a = (int)3.14;//强制类型转换
        // 后置++，先使用，再++
        //原码 反码 补码
        //正数三个都一样
        //负数 原码符号位不变其他取反为反码
        //反码+1 为补码
        //反过来 补码-1为反码
        //反码 符号位不变，其他取反为原码
        //例如：0的反码为0111111111111
        //补码为100000000000
        //printf("%d\n",a);
        //只要是整数，内存中存储的都是二进制的补码
        //正数 三码相同
        //负数存的是补码

        int a =1;
        int b =20;
        int max = 0;
        max =(a>b?a:b);
        printf("%d\n",max);

        return 0;
    }*/

    /*14.静态局部变量
    void test()
    {
        static int a =1;//静态局部变量
        //static修饰局部变量，
        //延长局部变量生命周期
        //static修饰全局变量
        //改变了变量的作用域-说法不准确
        //改变了函数的链接属性
        //外部连接属性->内部连接属性
        //让其只能在自己的头文件中使用
        //
        a++;
        printf("%d\n",a);
    }
    int main()
    {
        int i = 0;
        while(i<5)
        {
            test();
            i++;
        }
        return 0;
    }*/

    /*15.简单宏
    #define MAX(x,y) (x>y?x:y)
    int main()
    {
        int a = 10;
        int b = 20;
        int max = 0;
        max = MAX(a,b);
        printf("%d\n",max);

        return 0;
    }*/

    /*16. 指针简单应用
    int main()
    {
        int a = 10;
        int* p = &a;
        printf("%p\n",&a);
        return 0;
    }*/

    /*17.静态局部变量的实例
    int sum(int a)
    {
        static int b = 3;//仅仅能作用与此源文件
        int c = 2;
        b += 1;
        c += 2;
        return (b);
    }
    int main()
    {
        int a=0;
        int i;
        for(i = 0;i < 5;i++)
        {
            printf("%d\n",sum(a));
           
        }
    
        return 0;
    }*/


    /*18.用结构体描述复杂对象*/
    //有点小问题后续再看
    /*
    struct Book
    {
        char name[20];//c语言程序设计
        short price;//55
    };
    int main()
    {
        struct BooK b1  = {"C语言程序设计",55};
        printf("书名：%s\n",b1.name);
        printf("价格:%d\n",b1.price);
        return 0;
    }*/
/*结构体*/
/*struct Books
{
    char title[50];
    char author[50];
}book = {"C语言","runm"};

    int main()
    {
        printf("title: %s\nauthor: %s\n",book.title,book.author);
    }*/

    /*19.输出1-100的奇数*/
   /* int main()
    {
        int i = 0;
        while(i <= 100)
        {
            if(i%2 == 1)
              printf("%d\n",i);
            i++;
        }
        return 0;
    }*/

    /*20.简单的switch分支语句*/
    //switch表达式为整型
    /*int main()
    {
        int day = 0;
        scanf("%d",&day);
        switch(day)
        {
            case 1:
              printf("星期一\n");
              break;
            case 2:
              printf("星期二\n");
              break;
        }
    }*/

    /*21.字符的输入与输出*/
    /*int main()
    {
        int ch = 0;
        while((ch=getchar()) != EOF)
        {
            putchar(ch);
        }
        return 0;

    }*/

    /*22.简单的输入输出*/
   /*int main()
    {
        int ret = 0;
        char ch = 0;
        char password[20] = {0};
        printf("请输入密码:");
        scanf("%s",password);
        while((ch = getchar()) != '\n')
        {
            ;
        }
        printf("请确认密码:");
        ret = getchar();
        if(ret == 'Y')
        {
            printf("确认成功\n");
        }
        else
        {
            printf("确认失败\n");
        }*/

        /*23.for循环的简单特点*/

        /*int main()
        {
            int i = 0;
            int j = 0;
            for(;i < 10;i++)
            {
                for( ;j < 10;j++)
                {
                    printf("hehe\n");
                }
            }

        }*/

        /*24.简单的do while案例*/

        /*int main()
        {
            int i = 1;
            do
            {
                
                printf("%d\n",i);
                i++;
            } while (i<=10);
        }*/

        /*25.for循环求阶乘及其和*/
        /*int main()
        {
            int i =1;
            printf("请输入n:");
            int n = 0;
            scanf("%d",&n);
            int sum =1;
            int j=1;
            int ret = 0;
                for(i=1;i<=n;i++)
                {
                sum = sum *i;    
                ret = ret + sum;
                printf("%d\n",sum);
                printf("%d\n",ret);
                }
            printf("%d\n",sum);
            printf("%d",ret);
        }*/

        /*26.遍历寻找数组中的数效率很低*/
        /*int main()
        {
            int arr[10] = {1,2,3,4,5,6,7,8,9,10};
            printf("请输入要找的数字:");
            int k = 0; 
            int i = 0;
            scanf("%d",&k);
            
    
            int es=sizeof(arr)/sizeof(arr[0]);

            for(i=0;i<es;i++)
            {
                if(arr[i] == k)
                printf("找到了数字,其下标为%d",i);
                break;
            }
            if(arr[i] != k)
            printf("未找到");
        }*/
        
        /*27.很好用/利用二分法查找，空间复杂度为log2^n*/
        /*int main()
        {
            int k=0;
            int arr[7] = {1,2,3,44,55,66,77};
            printf("请输入查找数");
            scanf("%d",&k);
            int es = 0;
            es=sizeof(arr)/sizeof(arr[0]);
            int life=0;
            int right = es-1;
            while(life <= right)
            {
                 int mid=(right + life)/2;
                if(arr[mid] == k)
                {
                    printf("找到了，下标为%d",mid);
                    break;
                }
                else if(arr[mid] < k)
                {
                    life = mid+1;
                }
                else if(arr[mid] > k)
                {
                    right = mid-1;
                }
                if(life > right)
                {
                    printf("找不到");
                    break;
                }
            }

        }*/

        /*28.演示多个字符从两端移动，向中间汇报*/
        /*int main()
        {
            char arr1[] = "welcome to guangzhong !!!!@!!!!";
            char arr2[] = "###############################";
            int lift = 0;
            int right = strlen(arr1)-1;
            while(lift <= right)
            {
                arr2[lift]=arr1[lift];
                arr2[right] = arr1[right];
                lift++;
                right--;
                printf("%s\n",arr2);
                Sleep(1000);
                system("clear");
                //清屏
            }
                 printf("%s\n",arr2);
                 return 0;

         
        }*/

        /*28.模拟用户三次登录情景*/
        /*int main()
        {
            int i = 0;
            char k[] = {0};
            for(i=0;i<3;i++)
            {
                printf("请输入密码：");
                scanf("%s",k);
                if(strcmp(k , "123") == 0)
                //==不能用来比较字符串相等
                //应该使用一个库函数
                {
                    printf("登录成功\n");
                    break;
                }
                else
                {
                    printf("密码错误\n");
                }
            }
            if(i == 3)
            printf("登录失败");
            return 0;
        }*/

        /*29.输入三个数字，从大到小输出*/
        /*int main()
        {
            int a=0,b=0,c=0;
            printf("请输入三个数字:");
            scanf("%d %d %d",&a,&b,&c);
            printf("%d\n%d\n%d\n",a,b,c);
            
            if( a<b ){
                int tmp=a;
                a = b;
                b = tmp;
            }
            if(a < c){
                    int tmp=a;
                    a = c;
                    c = tmp;
                }
            if(b < c){
                int tmp = b;
                b = c;
                c = tmp;
            }
            printf("%d\n%d\n%d\n",a,b,c);
        }*/

        /*30.打印3的倍数*/
        /*int main()
        {
            int i=1;
            for(i=1;i<=100;i++){
                if((i%3) == 0)
                printf("%d\n",i);
            }
        }
    */
   /*31.两个数最大公约数的输出*/
   /*1.遍历算法*/
   /*int main()
   {
    int a=0;
    int b=0;
    printf("输入两个数字：");
    scanf("%d %d",&a,&b);
    int i =0;
    int c = 0;
    if(a >= b)
    c = b;
    if(b>a)
    c = a;
    //if(a = b)
    //printf("最大公约数为%d",a);
    for(i=c;i>0;i--){
        if(a%i==0 && b%i == 0){
            printf("最大公约数为%d",i);
            break;
        } 
   }
   }*/
   /*2.辗转相除法*/
   //原理两个数的最大公约数等于其中较小的数字和两者之间余数的最大公约数
   //计算原理（12921，4234）=（4234，219）
   //（4234，219）=（219，73）
   //（73，0）
   /*int main()
   {
    printf("输入两个数字；");
    int a=0,b=0;
    scanf("%d %d",&a,&b);
    int c=0;
    int d=0;
    int e=0;
    if(a<b){
      c = a;
      d = b;
    }
    if(b<a){
    c = b;
    d = b;
    }
    while(d%c){
        e = d%c;

        d = c;

        c = e;
    }
    printf("最大公约数为%d\n",c);
    return 0;
   }*/

   /*32.闰年的判断*/
   //闰年，1.能被4整除不能被100整除
   //2.能被400年整除
   /*int main()
   {
    int a;
    printf("输入一个年份：");
    scanf("%d",&a);
    if((a%4==0 && a%100 != 0) ){
        printf("此数字为闰年");
    }
    else if((a%400 == 0))
    printf("此数字为闰年");
    else 
    printf("不为闰年");
   }*/

   /*33.打印1-200的素数*/
   /*素数求解的n种境界*/
   //1.遍历算1-200的素数
   /*int main()
   {
    int i=1;
    int j=1;
    for(i=1;i<=200;i++)
    {
        for (j = 2; j < i; j++)
        {
            if (i%j==0)
            {
               break;
            }
        }
           if( j == i)
           {
            printf("%d\n",i);
           }
    }
   }*/

   //2.优化遍历打印素数，利用i=a*b
   //则至少有一个字母小于开平方i
   /*int main()
   {
    int i=1,j=1;
    int count = 0;
    for(i=2;i<=200;i++)
    {
        for(j=2;j<=sqrt(i);j++)
        {
            if(i%j == 0)
            break;
        }
        if(j>sqrt(i))
        {
            printf("%d\n",i);
            count++;
        }
    }
    printf("count=%d\n",count);
    return 0;
   }*/

/*34.1  - 100中所有整数中出现多少个9*/
//if if与if else if的区别
//当if执行后，else if将不会执行
//而if与if并列
/*int main()
{
    int i=0;
    int count=0;
    for(i=1;i<=100;i++)
    {
        if(i%10 == 9)
        {
            count++;
        }
        else if(i/10 == 9)
        {
            count++;
        }
    }
    printf("%d\n",count);

}*/

/*35.分数求和，计算1/1-1/2+1/3-1/4*/
/*int main()

{
    float i=0;
    float sum=0;
    int flag = 1;
    for(i=1;i<=100;i++)
    {
        sum+=flag * 1/i;
        flag=-flag;
    }
    printf("%f\n",sum);
}*/
   
/*36.求10个整数中的最大值*/
/*int main()
{
    int str[10]={1,2,3,4,5,6,7,8,9,10};
    int max = str[0];
    int i=0;
    for(i=0;i<10;i++)
    {
        if(max < str[i])
        {
            max = str[i];
        }
    }
    printf("最大值；%d\n",max);

}*/

/*37.9*9乘法口诀表*/
/*int main()
{
    int i =0;
    for(i=1;i<=9;i++)
    {
        int j;
        for(j=1;j<=i;j++)
        {
            printf("%d * %d = %-2d ",i,j,i*j);
            //%2d表示打印两位d，右对齐
            //%-2d表示左对齐 
        }
        printf("\n");
    }
}*/

/*38.猜数字游戏*/
//分析需求根据需求写程序
//分为两块，先进入游戏，然后系统生成随机数，输入猜的数字，然后判读是否正确
//此程序分为了三个板块，主程序，菜单，游戏内容
/*int menu()

{
    printf("####### 菜单 #######\n");
    printf("####### 1.进入游戏 #######\n");
    printf("####### 2.退出游戏 #######\n");
}
void game()
{
    int ret =0;
    int guess = 0;
    ret = rand()%100+1;
    //printf("%d\n",ret);
    while(1)
    {
        printf("请猜数字:");
        scanf("%d",&guess);
        if(guess > ret)
        {
            printf("猜大了\n");
        }
        else if(guess < ret)
        {
            printf("猜小了\n");
        }
        else if(guess == ret)
        {
            printf("猜对了\n");
            break;
        }
    }
}
int main()
{
   int input =0;  
   srand((unsigned int)time(NULL));
   do
   {
    menu();
    printf("请选择：");
    scanf("%d",&input);
    switch(input)
    {
    case 1:
        game();
        break;
    case 2:
        printf("退出游戏");
        break;
    default:
        printf("选择错误");
        break;
    }
   }while(input);
   return 0;
}*/

/*39.goto语句*/
/*int main()
{
    again;
    printf("hello bit\n");
    goto again;
    return 0;
}*/

//mamset设置
/*40.memset的使用*/
/*应当学会看文档使用函数*/
/*int main()
{
    char str[] = "hello world";
    memset(str,'#',5);
    printf("%s",str);
}*/

/*41.函数的组成*/
/*函数应当由以下组成
1.返回类型 
2.函数名
3.函数参数  实参与形参
当实参转递给形参时，其实是形参在空间中拷贝一份数据，因此形参与实参数值相同但是地址不同
之所以取地址方式可以改变，原因为在形参中可以提供地址找到该实参并进行修改
形参相当于实参的一份临时拷贝
（1）传值调用
（2）传址调用
4.函数主体，为了实现函数功能*/
/*
int返回类型   get_max函数名  (int x,int y)函数参数
{
    if(x>y)
      return x;
    else
      return y;
      函数主体
}
int main()
{
    int a = 10;
    int b = 20;
    int max = get_max(a,b); //函数的封装
}
*/

/*42.调用函数实现素数的判断*/
/*int ma_th (int x)
{
    int i=0;
    for(i=2;i<sqrt(x);i++)//优化算法
    {
        if(x%i == 0)
        return 0;
    }
        if(i = x)
    {
        return 1;
    }
}
int main()
{
    int j = 0;
    for(j=3;j<=200;j++)
    {
        if(ma_th(j) == 1)
        printf("%d\n",j);
    }
}*/

/*43.调用函数判断是否为闰年*/
/*int ru_n(int x)
{
    //闰年的判断有两种情况，能被400整除
    //2.不能被100 但是 能被4整除
    if(x%400 == 0)
    {
        return 1;
    }
    else if ((x%4 ==0) && (x%100 != 0))
    {
        return 1;
    }
    else
        return 0;
}
int main()
{
    int n;
    printf("输入一个年份：");
    scanf("%d",&n);
    if(ru_n(n) == 1 )

    {
        printf("为闰年");
    }
    else if(ru_n(n) ==0)
    {
        printf("不为闰年");
    }
}*/

/*44.调用函数实现二分查找*/
//非常重要
/*int ma_x (int str[] , int z ,int es)
            //这个str是首元素地址
            //本质是一个指针
{
    int left = 0;
    //int es = strlen(str);
    int right =es-1;
    int i;
    int mid;
    for(i=0;i<es;i++)
    {
        int mid=(left+right)/2; //必须在循环里面
        if(z > str[mid])
        {
            left = mid+1;
        }
        else if(z < str[mid])
        {
            right = mid-1;
        }
        else if(z = str[mid])
        {
            return mid;
        }
    }
}
int main()
{
    int x ;
    int str[] = {1,2,3,4,5};
    int es = sizeof(str)/sizeof(str[0]);
    x = ma_x(str,4,es);
    printf("%d\n",x);
    return 0;
}*/


/*45.每调用一次函数，函数+1*/
//使用传地址的方法
/*int add (int *y)
{
    (*y)++;
}
int main()
{
    int num = 0;
    add(&num);
    printf("%d\n",num);
    add(&num);
    printf("%d\n",num);
}*/

/*46.嵌套调用函数的简单应用*/
/*int nrw_line()
{
    printf("hhe\n");
}
int three_line()
{
    int i=0;
    for(i=0;i<3;i++)
    {
        nrw_line();
    }
}
int main()
{
    three_line();
    return 0;
}*/

/*47，简单的链式访问*/
/*int main()
{
    int len =0;
    //len = strlen("abc");
    //printf("%d\n",len);
    //1.
    printf("%d\n",strlen("abc"));
    //2.这种情况下就叫做链式反应

}*/

/*int main()
{
    printf("%d",printf("%d",printf("%d",printf("%d",43))));
}
*/

/*48.函数的声明与定义*/
//函数一般放在其他源文件中，声明即可用
//声明为.h定义为.c，两个一起构成加法文件
/*int add(int x,int y);//函数的声明
int main()
{
    int a=0;
    int b=1;
    int sum=0;
    sum = add(a,b);
    printf("%d\n",sum);
}
int add(int x,int y) //函数定义
{
    int z=x+y;
    return z;
}*/

/*49.史上最简单递归*/
//栈溢出
//任何一次函数调用都会申请内存空间，不断的调取栈空间，就会导致栈溢出
//一般分为三个区栈，堆，静态区
//栈一般存放局部变量，函数形参
//堆     动态开辟的内存，malloc，calloc
//静态区   全局变量，static修饰的变量
/*nt main()
{
    main();
    return 0;
}*/

/*50.接受一个整型值，按顺序打印他的每一位*/
/*void print(int n)
{
    if(n>9)
    {
        print(n/10);
    }
    printf("%d\n",n%10);
}
int main()
{
    unsigned int num = 0;
    printf("请输入四位数字:");
    scanf("%d",&num);
    print(num);
}*/
//嵌套循环nb

/*51.求字符串长度*/
/*int lon_g(char* str1)
{
    int count = 0;
    while(*str1 != '\0')
    {
        count++;
        str1++;
    }
    return count;
}
int main()
{
    char str[] = "hhhiuhll";
    int len = lon_g(str);
    printf("%d\n",len);
    //printf("%d\n",lon_g(str));
}*/

/*52.求字符串长度，不适用计数器count*/
//不用计数器count，方法为嵌套循环不错不错
/*int lon_g(char* str1)
{
    if(*str1 != '\0')
    {
        return 1+lon_g(str1+1);
    }
    else 
        return 0;
}
int main()
{
    char str[] = "hhhiuhll";
    int len = lon_g(str);
    printf("%d\n",len);
    //printf("%d\n",lon_g(str));
}*/

/*53.利用迭代求n的阶乘*/
/*int feel(int n)//for循环的方法迭代
{
    int i=0;
    int ret = 1;
    for(i=1;i<=n;i++)
    {
        ret *=i;
    }
    return ret;
}
int feel2(int n)//递归的方法
{
    if(n<=1)
        return 1;//中断条件
    else
    return n*feel2(n-1);
}
int feel3(int n)
{

}
int main()
{
    int n=0;
    scanf("%d",&n);
    printf("%d\n",feel2(n));
    return 0;
}*/

/*54.斐波那契数列*/
//斐波那契数列前两个数相加等于第三个
/*int count =0;
int fib(int n)//利用递归的方法求得
{
    
    if(n==3)
      count++;
    if(n<=2)
       return 1;
    if(n>2)
       return fib(n-1)+fib(n-2);
}
int fib2(int n)//迭代的方法
{
    int i=0;
    int a=1;
    int b=1;
    int c=0;
    for(i=0;i<n-2;i++)//利用while条件语句更好
    //while（n >2） .......N--
    {
        c=a+b;
        a=b;
        b=c;
    }
    return c;
}
int main()
{
    int ret = 0;
    int n = 0;
    scanf("%d",&n);
    ret = fib2(n);
    printf("%d\n",ret);
    printf("%d\n",count);
    return 0;
}*/

/*55.数组的定义*/
/*int main()
{
    //int c=10;
    //int arr[c];
    //char arr[5] ="abdcd";
    //sizeof(arr) //7
    //strlen(arr) //6
    char arr[]={'1','a','d','1'};
    printf("%d\n",sizeof(arr));
    printf("%d\n",strlen(arr));
}
*/

/*56.一维数组*/
//strlen与sizeof的区别
//strlen计算字符串长度时，遇到\0便结束
//sizeof遇到\0标记一个字节
/*int main()
{
    char arr[] = "abdjashda";
    //strlen()返回的是无符号值
    int a=1;
    int b=1;
    a+=1;//a++;
    //a++;
    b=+1;//++b
    //++b;
    printf("%d\n",a);
    printf("%d\n",b);
}*/

/*57.二维数组*/
/*int main()
{
    int arr[][5] = {{1,2,3},{4,5}};
    //二维数组可以省略行，但是不能省略列
    //二维数组行和列不能同时为0
    //int arr[[]] = {1,2,3,4,5,6,}
    //这样定义是错误的

}*/

/*58.二位元素的地址*/
//在内存中也是连续存储的
//理解为二维ie，本质上依然是一维
//一维数组与二维数组在空间中存储的区别为
//一维数组没有行指针
//二维数组有行指针

/*59.数组作为函数参数*/
//冒泡排序的思想 相邻元素进行比较交换
/*int buttle(int arr[],int es) 
{
    int i=0,j=0;
    for(i=0;i<es-1;i++)
    {
        int flag = 1;//表示有序,flag进行优化
        for(j=0;j<es-i-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
               int tmp =arr[j];
               arr[j] = arr[j+1];
               arr[j+1] = tmp;
               flag = 0;  //表示本次数据不完全有序
            }
        }
        if(flag == 1)
        {
            break;
        }
    }
}
int main()
{
    int str[10] ={4,2,3,1,5,7,9,0,8,6};
    int es=sizeof(str)/sizeof(str[0]);
    buttle(str,es);
    int i=0;
    for(i=0;i<es;i++)
    {
        printf("%d\n",str[i]);
    }
}*/
//数组作为函数参数时，系统传输的为首元素的地址

/*60.不适用临时变量取交换两个数字*/
//按位异或
/*int mian()
{
    int a =3;
    int b =5;
    //a = a + b; 加减法交换临时变量
    //b = a - b;//缺点只能整数切容易溢出
    //a = a - b;  

    a = a^b; //优点不会产生溢出
    b = a^b;
    a = a^b;
}*/

/*61.求一个整数中1的个数*/
//3种算法，依次变优
/*int main()
{ 
    int a=0;
    int count = 0;
    printf("输入一个整数：");
    scanf("%d",&a);
    //while(a)
    //{
    //    if(a%2 == 1)
    //       count++;
    //    a = a/2;
    //}  只能计算整数
    //int i =0 ;
    //for(i=0;i<32;i++)
    //{
    //    if(1 == ((a>>i)&1))//利用运算符按位与计算二进制1的个数
    //       count++;
    //}
    while(a) //利用公式n=n&(n-1),每次消掉一个1
    //方法最优
    {
        a=a&(a-1);
        count++;
    }
    printf("%d",count);
}*/

/*62.复合操作符*/
//单目与双目操作符
//+为双目操作符
//！，-，&，sizeof为单目操作符
//sizeof与strlen的区别
//在计算char数组字符串长度时
//char arr[] = "abcd"
//char arr[] ={'a','b','c'}
//两者的区别为strlen前一个为4，后一个为随机值
//sizeof前一个为5，后一个为4
//空间大小即可以通过变量名来确定也可以通过类型来确定
/*
int main()
{
    ina a=20;
    a = a+2;
    //a += 2;
    a = a>>1;
    //a>>=1
    a=a&1
    //a&=1
}*/

/*63.取反操作符的原理*/
/*int main()
{
    //int a=0;
    //000000000000000000000000000000
    //111111111111111111111111111111 - - -为补码
    //111111111111111111111111111110------为反码
    //100000000000000000000000000001 -----为原码
    //printf("%d\n",~a);
    int a = 11;
    a = a | (1<<2);  //15
    a = a & (~(1<<2));//不变
}*/

/*64.逻辑操作符*/
//值得一看
/*int main()
{
    int i=0,a=0,b=2,c=3,d=4;
    i = a++ && ++b && d++;
    //i = a++ || ++b || d++;
    //因为计算时a++先赋值操作为0，此时&&为0，不进行计算
    //左边为0，右边不进行计算
    printf("a= %d\n,b= d%d\n,c= %d\n,d= %d\n",a,b,c,d);
}*/

/*65.三目操作符*/
/*int main()
{
    int a=0;
    int b=0;
    if(a>5)
      b=3;
    else
      b=-3;

    //b=(a>5?3 : -3);与上述等价
}*/

/*66.逗号表达式*/
//int a=1;
//int b=2;
//int c = (a>b,a=b+10,a,b=a+1)
//逗号表达式只表示最后一个即c=（b=a+1）
//但是会从左向右依次计算
//结果为13；

/*67.函数调用操作符*/
//调用时的（）为函数调用操作符
//例如get_max(x,y)，这个（）就是
//操作数为三个，至少为一个
//运算时就会进行整型提升

/*68.结构体类型*/
//结构体可以包含其他结构体
/*struct Stu//结构体标签
{
    char name[20];
    int age;
    char id[20];
}s1,s2,s3;//三个结构体的全局变量
//这三个s为变量
typedef struct Stu//结构体标签
{
    char name[20];
    int age;
    char id[20];
}Stu;将其重新起名为Stu,此时可以直接使用Stu.
//Stu为类型
int main()
{
    int a=10;
    //使用struct Stu这个类型创建了一个学生对象s1
    //局部变量
    struct Stu s1 = {"张三",20,"2015413"};
    struct Stu * ps = &s1; 
    printf("%s\n",ps->name);
    //printf("%s\n",(*ps).name);
    //printf("%s\n",s1.name);
    //printf("%d\n",s1.age);
    //printf("%s\n",s1.id);
    //结构体变量.成员名
    return 0;
}*/

/*69.指针*/
//指针类型决定了指针进行解引用时能访问的空间大小
//3种野指针情况1.指针未初始化 2.指针越界访问 3.利用静态变量返回地址
/*int* test()
{
    int a=10;
    return &a;
}
int main()
{
    int *p = test();//此时，虽然静态变量原地址已经返回，但由于静态变量用完会地址会返还给系统，可能会导致野指针的情况
    *p = 20;
    return 0;
}*/
//指针减指针得到的是元素个数  

/*70.定义结构体类型*/
/*typedef struct Stu
{
    char name[20];
    short age;
    char tele[12];
    char sex[5];
}Stu;

void Point1(Stu tmp)//两种传参的数据打印方式
{
    printf("name:%s\n",tmp.name);
}

void Point2(Stu* ps)
{
    printf("name:%s\n",ps->name);
    printf("name:%s\n",(*ps).name);
}
int main()
{
    Stu s = {"李四",40,"6161516","男"};
    //打印结构体数据，封装函数进行传参
    //第二个函数好一些，
    //第一个函数会开辟一块空间拷贝结构体数据
    //函数传参时会压栈
    //第二个仅仅传递地址，系统开销小一点
    Point1(s);
    Point2(&s);
}*/

/*71.计算字符串中连续的最大个数*/


/*72.类型*/
//类型决定两个问题
//1.类型决定开辟空间的大小
//2.类型决定如何看待内存空间的视角

/*73.判断当前机器的字节序的小程序*/
// int a = 20;
// 0x 00 00 00 14
// 14 00 00 00 //小端存储
// 00 00 00 14 //大端存储
/*int main()
{
    int a=1;
    char *p=(char*)&a;
    if(*p == 1)
    {
        printf("小端存储！");
    }
    else
        printf("大端存储！");
    //建议进行函数封装
    int check_sys()
    {
        int a=1;
        return *(char*)&a;
    }
    int check_sys()
    {
        int a=1;
        char *p = (char*)&a;
        if(*p ==1) 
            return 1;
        else
            return 0;
    }
    int main()
    {
        int ret = check_sys();
        if(ret == 1)
        {
            printf("小端");
        }
        else
        printf("大端");
        return 0;
    }
}*/

/*74.数据的存储*/
//多想想
/*int main()
{
    char a=-128;
    printf("%d\n",a);
    printf("%u\n",a);
}*/

/*75.主函数传参，错误，自己再学学*/
/*void country(*argc)
{
    int i;
    for(i=argc-1;i>0;i--)
    {
        printf("%s\n",argv[i]);
    }
}
int main(int argc,char const *argv[])
{
    printf("argc == %d\n",argc);
    int i=0;
    for(i=0;i<argc;i++)
    {
        printf("argv[%d] == %s\n",i,argv[i]);
    }
    country(argv);
    return 0;
}*/

/*76.浮点数的存储*/
//9.0
//1001.0
//(-1)^0   * 1.001   * 2^3
//(-1)^s   * M       * 2^E
//三部分组成
//S(1bit)    E(8bit)     M(23bit)
//E中无正负之分
//0.5  ->  0.1 -> （-1）^0 *1.0 *2^-1
//存入内存时，由于指数位为负数，float类型的加126，double加1023这个中间值，正数也会加
//S(1bit)    E(11bit)    M(52bit)
//例如 float = 5.5
//二进制 101.1
//（-1）^0 *1.011 *2^2
//S = 0
//E = 2
//M = 1.011 
// 2 + 127 = 129 
// 0 10000001 01100000000000000000000
//0100 0000 1011 0000 0000 0000 0000 0000 //存在内存中的二进制序列
//   4    0    b    0    0    0    0    0
//小端存储为0x00 00 b0 40
//若E不全为0或全为1，取出该浮点数时，E-127，M前面补1
//若E为全0，E等于1-127或者1-1023即为真实值，M前补1
//若E为全1，表示无穷大，正负取决于s
//1.xxx * 2^128表示正负无穷大的数字

/*77.数组越界的死循环程序*/
//先定义i，i存放在栈的高位
//后定义数组，数组存放在低位
//数组向上生长，越界后访问到i
/*int main()
{
    int i=0;
    int arr[] = {1,2,3,4,5,6,7,8,9,10};
    for(i=0;i<12;i++)
    {
        arr[i]=0;
        printf("hello bit\n");
    }
    return 0;
}*/





















