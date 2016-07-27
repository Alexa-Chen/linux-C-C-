 ///
 /// @file    Layoutexam.cc
 /// @author  Chenmo(mars_chenmo@sina.com)
 /// @date    2016-07-26 18:41:57
 /// log4cpp ----> layout 使用 
 
#include <iostream>
#include <log4cpp/Category.hh>
#include <log4cpp/OstreamAppender.hh>
#include <log4cpp/Priority.hh>
#include <log4cpp/PatternLayout.hh>

using namespace std;

int main()
{
    log4cpp::OstreamAppender* OsAppender = 
        new log4cpp::OstreamAppender("OsAppender",&cout);

    log4cpp::PatternLayout* pLayout = new log4cpp:: PatternLayout();
    pLayout->setConversionPattern("%d: %p %c %x: %m%n");
    OsAppender ->setLayout(pLayout);

    log4cpp::Category & root = log4cpp::Category::getRoot();
    log4cpp::Category & infoCategory = root.getInstance("infoCategory");
    infoCategory.addAppender(OsAppender);
    infoCategory.setPriority(log4cpp::Priority ::INFO);
    
    infoCategory.info("system is running");
    infoCategory.warn("system has a warning");
    infoCategory.error("system has a error, cant't find a file");
    infoCategory.fatal("system has a fatal error,must be shutdown ");
    infoCategory.info("system shutdown, you can find some information in system log");

    log4cpp::Category::shutdown();
    return 0;

}




