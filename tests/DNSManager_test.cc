#include <string>
#include <iostream>

#include "DNSManager.h"
using namespace std;

int main() {
    DNSManager dns;

    string result;
  /*  result = dns.getIP("www.baidu.com");
    result = dns.getIP("www.zhihu.com");
    result = dns.getIP("www.sina.com");
    result = dns.getIP("www.qq.com");

    cout << "result = " << result << endl;

    result = dns.getIP("www.qq.com");
    cout << "result = " << result << endl;*/

    while (true) {
    	cout<< "Please input a hostname: (quit to exit)"<<endl<<endl<<"\t";
    	cin>>result;
    	if (result == "quit"){
    		cout<<"Exiting ..."<<endl;
    		break;
    	}
    	cout<<endl;
    	result = dns.getIP(result);

    	cout << "getIP result = " << result << endl;

    }

    return 0;
}
