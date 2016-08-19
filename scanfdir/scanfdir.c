 ///
 /// @file    scanfdir.c
 /// @author  Chenmo(mars_chenmo@sina.com)
 /// @date    2016-08-17 20:56:02
 ///
 #include <stdio.h>
 #include <dirent.h>
 #include <sys/types.h>
 #include <string.h>
// 深度优先遍历  
 void printdir(char* pathname,int width)
{
    //本身要打开的目录不打印   
    DIR* dir; 
    dir = opendir(pathname);
    if(NULL == dir)
    {
        perror("opendir");
        return ;
    }
    //指向目录里面的每一个结点的指针 
    struct dirent* p;
    char buf[512] = {0};
    while((p = readdir(dir))!=NULL)
    {      //  注意 . 和 ..  目录   
        if(!strcmp(p->d_name,".")||!strcmp(p->d_name,".."))
        {
            // 什么都不做
        } else{
               printf("%*s%s\n",width,"",p->d_name);
               if(p->d_type == 8)  // 普通文件
               {

               }else{
                   // 路径拼接
                   sprintf(buf,"%s%s%s",pathname,"/",p->d_name);
                   printdir(buf,width+4);                 
               }
        }       
    }
} 

int main(int argc,char** argv)
{
    if(argc != 2)
    {
        printf("error args2\n");
        return -1;
    }
    printf("%s\n",argv[1]);
    printdir(argv[1],0);

    return 0;
}





