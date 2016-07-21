 ///
 /// @file    string1.cc
 /// @author  Chenmo(mars_chenmo@sina.com)
 /// @date    2016-07-21 07:26:25
 ///
#include <string.h> 
#include <iostream>
#include <string>
#include <stdio.h>
using std::cout;
using std::endl;
using std::string;
void test0()
{
    //c++中加const  不会报错
    const char *pstr = "hello world";
    printf("%s\n",pstr);
   
    char arr[128] = "hello ";
    char arr2[128] = "shenzhen";
    strcat(arr,arr2);
        
    //使用堆空间 
    char p1[] = "hello world";
    char p2[] = "shenzhen";
    char *p3 = new char[strlen(p1) + strlen(p2) + 1];
    strcpy(p3,p1);
    strcat(p3,p2);
    printf("%s\n",p3);

    //截取子串 p1 中的str 看是否有 world 
      //strstr(p1,"world");   返回第一次子串的位置
      //strncpy(p,pp,n) //p 存放字符串的空间
      //pp 从pp 里拷贝  n 拷贝字符产的长度
    char *pp = NULL;
    if((pp = strstr(p1,"world")) != NULL)
    {
        char * p4 = new char[strlen("world")+1];
        strncpy(p4,pp,strlen("world"));
        printf("%s\n",p4);
        delete [] p4;
    }
    
    delete [] p3 ;
}


void test1()
{
    string s1 = "hello,world";
    string s2 = "shenzhe";    
 
    cout << s1 <<endl;
    string s3 = s2 + s1;
    cout << "s3 = " << s3 << endl;
    
    string s4 = s3 + 'A';
    cout << "s4" << s4 << endl;
    //截取子串
    string s5 = s4.substr( s4.find("world"),5);
    cout << "s5 =" << s5 << endl;
    cout << "s4 size =" << s4.size() << endl;
    cout << "s4 length = " << s4.length() << endl;


     //转成c风格的字符串
     const char* p = s4.c_str();
     printf("%s\n",p);

}

int main()
{
    test0();
    test1();
   
    return 0;
}

