#include <stdio.h>
#include <string.h>
#include <errno.h>

/*int main()
{
    int a=10000;
    FILE *pf = fopen("test.txt","wb");//w写b二进制
    //打开失败返回空指针
    //..表示上一级路径
    //.表示当前路径
    //FILE * fopen(const char* filename,const char* mode);
    fwrite(&a,4,1,pf);//4个字节，1个数据，放到pf中
    fclose(pf);
    //int fclose (File * strenm)
    pf=NULL;
    return 0;
}*/

/*int main()  //写入到当前路径
{
    FILE* pfWrite = fopen("TEST.txt","w");
    if(pfWrite==NULL)
    {
        printf("%s\n",strerror(errno));
        return 0;
    }
    fputc('b',pfWrite);
    fputc('b',pfWrite);
    fputc('b',pfWrite);

    fclose(pfWrite);
    pfWrite=NULL;

    return 0;
}*/


/*int main()  //在终端读取
{
    FILE* pfRead = fopen("TEST.txt","r");
    if(pfRead==NULL)
    {
        printf("%s\n",strerror(errno));
        return 0;
    }
    printf("%c",fgetc(pfRead));
    printf("%c",fgetc(pfRead));
    printf("%c",fgetc(pfRead));

    fclose(pfRead);
    pfRead=NULL;
    
    return 0;
}*/

/*int main()
{
    int ch = fgetc(stdin); //stdin标准输入流
    fputc(ch,stdout);//stdout标准输出流
    return 0;
}*/

/*int main()
{
    char buf[1024] = {0};
    FILE* pf = fopen("test.txt","r");
    if(pf == NULL)
    {
        return 0;
    }
    //fgets(buf,1024,pf);//将读取的信息放到buf中
    //一次只能读一行
    //printf("%s",buf);//自带一个换行
    //puts(buf);//打印完会自动换行
                     //原因是读取时会将\n一起读取过去
    fputs("hello",pf);//需要自己加换行  写一行
    fclose(pf);
    pf=NULL;
    char auf[1024] = {0};
    fgets(auf,1024,stdin);//从标准输入流读取
    fputs(auf,stdout);
    //等价于
    gets(auf);
    puts(auf);
    return 0;
}*/

/*struct S
{
    int n;
    float score;
    char arr[10];
};

int main()
{
    char buf[1024] = {0};
    struct S s ={100,3.14f,"bit"};
    FILE* pf = fopen("test.txt","w");
    if(pf == NULL)
    {
        return 0;
    }
    //格式化形式写文件
    fprintf(pf,"%d %f %s",s.n,s.score,s.arr);
    fclose(pf);
    pf = NULL;
    return 0;
}*/

/*int main()
{
    char buf[1024] = {0};
    struct S s ={100,3.14f,"bit"};
    FILE* pf = fopen("test.txt","r");
    if(pf == NULL)
    {
        return 0;
    }
    //格式化读取文件
    fscanf(pf,"%d %f %s",&(s.n),&(s.score),s.arr);
    //printf("%d %f %s",s.n,s.score,s.arr);
    fclose(pf);
    pf = NULL;
    return 0;
}*/

/*int main()
{
    char buf[1024] = {0};
    struct S s ={100,3.14f,"bit"};
    struct S tmp = {0};
    sprintf(buf,"%d %f %s",s.n,s.score,s.arr);
    //把格式化数据输出成字符串
    //转换成字符串存入buf中
    sscanf(buf,"%d %f %s",&(tmp.n),&(tmp.score),&(tmp.arr));
    //把从字符串中读取格式化数据
    printf(buf,"%d %f %s",tmp.n,tmp.score,tmp.arr);
    return 0;
}*/
//二进制写入与读取
/*struct S s = {"张三",20,55.6};"rb"二进制读取
struct S tmp={0};
fwrite(&s,sizeof(struct S),1,pf);
fread(&tmp,sizeof(struct S),1,pf);
fread(  一样的   )*/

/**/




