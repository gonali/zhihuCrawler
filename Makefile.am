

AUTOMAKE_OPTIONS = foreign


SUBDIRS = src tests


PACKAGE_DIR=./binZhihuCrawler

MKDIR=mkdir
CP=cp -r
RMDIR=rm -rf

.PHONY: package
package:
		$(RMDIR) $(PACKAGE_DIR) 
		$(MKDIR) $(PACKAGE_DIR)
		$(CP) src/zhihuCrawler $(PACKAGE_DIR)
		$(CP) startfile  $(PACKAGE_DIR)

		
		