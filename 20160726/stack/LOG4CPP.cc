 ///
 /// @file    LOG4CPP.cc
 /// @author  Chenmo(mars_chenmo@sina.com)
 /// @date    2016-07-27 00:10:06
 ///
 
#include "log4cpp.h"

log4cpp ::PatternLayout*layout1;
log4cpp ::Appender* fileappender;
log4cpp ::Category & rootLog = log4cpp::Category::getRoot().getInstance("TCALog");

bool wchar2char(const wchar_t* wstr,std::string &outstr)
{
    if(wstr == NULL)
        return false;
    int wstrlen = wcslen(wstr);
    int templen = WidecharToMultiByte(CP_ACP,0,wstr,-1,NULL,0,NULL,NULL);
    char *tempstr = new char[templen+1];
    memset(tempstr,0,templen+1);
    WidecharToMultiByte(CP_ACP,0,wstr,-1,
            tempstr,templen,NULL,NULL);

    outstr = tempstr;
    delete tempstr();
}

bool Log::init(const wchar_t * wszLogFilePath,int r)
{
    if((layout1 = new log4cpp::PatternLayout()) ==NULL)
         return false;
    layout1->setConversionPattern("%d %p %c ?? %m %n");
    std::string tempFilePath;
    wchar2char(wszLogFilePath,tempFilePath);
    if((fileappender = new log4cpp::FileAppender("fileappender",tempFilePath.c_str)) == NULL)
         return false;
    fileappender->setLayout(layout1);
    rootLog.addAppender(fileappender);
    return true;

}

bool Log::Info(const wchar_t *wszIn)
{
    size_t wszInlen = wcslen(wszIn);
    size_t conver = 0;
    char * tempInfo = (char*)malloc(wszInlen + 1 )
    wcstomb_s = (&conver,temInfo,wszInlen,wszIn,_TRUNCATE);
    rootLog.setPriority(log4cpp::Priority::INFO);
    rootLog.info(tempInfo);
    free(tempInfo);
    return true;
} 


bool Log::Info(const std::wstring &wstrIn)
{
    if(wstrIn.length()==0)
        return false;
    std::string tempInfo;
    wchar2char(wstrIn.c_str(),tempInfo);
    rootLog.setPriority(log4cpp::Priority::INFO);
    rootLog.info(tempInfo.c_str());
    return true;
}

bool Log :: Error(const wchar_t*wszIn)
{
   if(wszIn == NULL)
       return false;
   std::string tempError;
   wchar2char(wszIn,tempError);
   rootLog.setPriority(log4cpp::Priority::ERROR);
   rootLog.error(tempError.c_str());
   return true;   
}

bool Log :: Error(const std:: wstring &wstrIn)
{
    if(wstrIn.length()== 0)
        return false;
    std::string tempError;
    wchar2char(wstrIn.c_str(),tempError);
    rootLog.setPriority(log4cpp::Priority::ERROR);
    rootLog.error(tempError.c_str());
    return true;

}

bool Log::Debug(const wchar_t*wstrIn)
{
    if(wstrIn == NULL)
        return false;
    std::string tempDebug;
    wchar2char(wstrIn,tempDebug);
    rootLog.setPriority(log4cpp::Priority::DEBUG);
    rootLog.debug(tempDebug.c_str());
    return true;

}

bool Log::Debug(const std::wstring &wstrIn)
{
    if(wstrIn.length()==0)
        return false;
    std::string tempDebug;
    wchar2char(wstrIn.c_str(),tempDebug);
    rootLog.setPriority(log4cpp::Priority::DEBUG);
    rootLog.debug(tempDebug.c_str());
    return true;
}

bool Log :: uninit()
{
    log4cpp::Category::shutdown();
    return true;

}













