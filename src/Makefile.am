#
#

noinst_LIBRARIES = libzhihuCrawler.a

bin_PROGRAMS = zhihuCrawler

AM_CPPFLAGS = -g -Wall -Wextra

LIBS = -lpthread


#zhihuCrawler_LDADD = libzhihuCrawler.a

zhihuCrawler_LDADD = libzhihuCrawler.a

zhihuCrawler_SOURCES = zhihuCrawler.cpp 



libzhihuCrawler_a_SOURCES = config.cc DNSManager.cc Parse.cc \
                       webserver.cc Url.cc XCrawler.cc 


noinst_HEADERS = config.h dbg.h DNSManager.h MutexLock.h \
                 Parse.h Url.h webserver.h XCrawler.h 
                 
                 
                 
                 
                 