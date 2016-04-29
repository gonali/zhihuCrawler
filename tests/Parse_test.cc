#include <iostream>
#include <string>
#include "Parse.h"

using namespace std;

int main() {

    cout << Parse::RemoveEscape("http::\\/\\/www.zhihu.com");

    return 0;
}
