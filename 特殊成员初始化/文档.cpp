/*
   特殊对象数据成员初始化
    1. const 数据成员
	2  引用数据成员
	3  对象数据成员
     1 2  必须放在初始化列表里面
	 
	 3 推荐放在初始化列表里
	 line(int x1,int y1,int x2,int y2)
	 :_pt1()
	 ,_pt2()  也可以这样


	 static 数据成员必须放在类之外 
	 int Computer :: totalprice = 0;

	 特殊成员函数

	   static 成员函数  
	         不包含隐含this指针
			 不能访问非static 数据成员 及其成员函数
			 可以直接通过类名进行调用 

			 print() 要放在 public 
			 Computer :: print();
	 



	 */