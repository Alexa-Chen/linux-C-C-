 ///
 /// @file    log4cppfengzhaung.cc
 /// @author  Chenmo(mars_chenmo@sina.com)
 /// @date    2016-07-26 23:52:41
 ///
 
#ifnedf LOG4CPP_H_

#define LOG4CPP_H_ 

#include <iostream>
#include <string>
#include <log4cpp/Category.hh>
#include <log4cpp/FileAppender.hh>
#include <log4cpp/Priority.hh>
#include <log4cpp/PatternLayout.hh>

namespace Log

{
    // 初始化 输出文件路径  r 保留参数
    bool init(const wchar_t* wszLogFilePath,int r);
    //打印日志 INFO
    bool Info(const wchar_t*wszIn);
    bool Info(const std::wstring &wstrIn);
    
    bool Error(const wchar_t* wszIn);
    bool Error(const std::wstring &wstrIn);
    
    bool Debug(const wchar_t* wszIn);
    bool Debug(const std:: wstring &wszIn);
   
    //日志释放
    
    bool uninit();

}

#endif


