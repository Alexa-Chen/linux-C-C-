 ///
 /// @file    Queue1.cc
 /// @author  Chenmo(mars_chenmo@sina.com)
 /// @date    2016-07-26 23:31:33
 ///
 
#include <iostream>

typedef int Queue_entry;
const int maxqueue = 10;
enum Error_code(success,underflow,overflow);

class Queue
{
   public:
   
   Queue();
   bool empty() const;
   Error_code serve();
   Error_code append(const Queue_entry &item);
   Error_code retrieve(Queue_entry &item) const;
       
   private:
       int count;
       int front, rear;
       Queue_entry entry[maxqueue];
};


Queue :: Queue()
{
    count = 0;
    rear = maxqueue-1;
    front = 0;
}

bool Queue :: empty() const
{
    return count == 0;
}

Error_code Queue::append(const Queue &item)
{
    if(count >= maxqueue)
        return overflow;
    count++;
    rear = ((rear + 1) == maxqueue) ? 0:(rear + 1);
    entry[rear] = item;
    return success;
}

Error_code Queue::serve()
{
    if(count <= 0) 
        return underflow;
    count--;
    front = ((front + 1) == maxqueue) ? 0:(front+1);
    return success;
}
Error_code Queue ::retrieve(Queue_entry & item) const
{
    if(count <= 0) 
        return underflow;
    item = entry[front];
    return success;
}




