 ///
 /// @file    Computer.cc
 /// @author  Chenmo(mars_chenmo@sina.com)
 /// @date    2016-07-22 21:17:34
 ///
 
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


//深浅拷贝 
//对于数据来说 包括数组 效果是一样的
//对于指针  浅拷贝是拷贝地址的值 
//          深拷贝是拷贝地址的内容 
// 对于共同只向同一内存后释放 则出现异常

struct str 
{
    char *p;
    int num;
};

int  main1()
{
    //浅拷贝
    struct str mystr1;
    mystr1.num = 30;
    mystr1.p = (char*) malloc(30);
    strcpy(mystr1.p,"hello");    
    struct str mystr2 = mystr1;
   //当释放时 都挂了
    free(mystr1.p); 


    printf("str1 = %s,str2 = %s\n",mystr1.p,mystr2.p);
    
 return 0;
}


int  main()
{
    //深拷贝
    struct str mystr1;
    mystr1.num = 30;
    mystr1.p = (char*) malloc(30);
    strcpy(mystr1.p,"hello");    
    struct str mystr2 = mystr1;
    //拷贝指针指向的内容
    //重新分配内存  把内容拷贝里去
    mystr2.p =(char*) malloc(30);
    strcpy(mystr2.p,mystr1.p);
    free(mystr1.p); 

    printf("str1 = %s,str2 = %s\n",mystr1.p,mystr2.p);
    
 return 0;
}











