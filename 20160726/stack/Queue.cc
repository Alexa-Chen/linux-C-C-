 ///
 /// @file    Queue.cc
 /// @author  Chenmo(mars_chenmo@sina.com)
 /// @date    2016-07-26 22:27:08
 ///
 
#include <iostream>
#include <string>
using namespace std;

#define QUEUELEN 10

struct DATA
{
    string name;
    int age;
};

struct SQType
{
   DATA data[QUEUElEN]; // 队列数组
   int head;
   int tail;
};

SQType *SQTypeInit()
{
    SQType *q;
    if(q = new SQType)
    {
        q->head = 0;
        q->tail = 0;
        return q;
    }
    else
    {
        return NULL;
    }
}

int SQTypeIsEmpty(SQType *q)
{
    return (q->head == q->tail);
}

int SQTypeIsFull(SQType *q)
{
    return (q->tail == QUEUElEN);
}

void SQTypeClear(SQType *q)
{
    q->head = 0;
    q->tail = 0;
}

void SQTypeFree(SQType *q)
{
    if(q! = NULL)
        delete q;
}

int InSQType(SQType *q, DATA data)
{
    if(q->tail == QUEUElEN)
    {
       cout << "队列满 操作失败" << endl;
       return  0;
    }
    else
    {
        q->data[q->tail++] = data;
        return 1;
    }
}

DATA * OUTSQType(SQType *q)
{
    if(q->tail == q->head)
    {
        return NULL;
    }
    else
    {
        return &(q->data[q->head++]);
    }
}

DATA *PeekSQType(SQType *q)
{
    if(SQTypeIsEmpty(q))
    {
        cout << "空队列" << endl;
        return NULL;
    }
    else
    {
        return &(q->data[q->head]);
    }
}

int SQTypeLen(SQType *q)
{
    return(q->tail - q-head);
}


int main()
{
    SQType *stack;
    DATA data,*p;
    stack = SQTypeInit();
    cout << "执行队列操作"<< endl;
  
    cout << "输出姓名年龄"<< endl;
   
    while(1)
    {
     cin >> data.name >> data.age;
     if(data.age == 0)
     {
        break;
     }

     else
     {
       InSQType(stack,data); 
     }
    
    }
   
    cout << "chuzhan" << endl;
    p = OUTSQType(stack);
    cout << p->name << "," << p->age << endl;
    cout << "duqu shujv" << endl;
    p = PeekSQType(stack);
    cout << p->name << "," << p->age << endl;
    cout << "zhixing chuzhan "<<endl;
    while(1)
    {
        if(SQTypeIsEmpty(stack))
            cout << "chuzhan weikong" << endl;
            break;
    
         else
         {
            p = OUTSQType(stack);
            cout << p->name << "," << p->age << endl;
         }
   }

    SQTypeFree(stack);

    return 0;
}







