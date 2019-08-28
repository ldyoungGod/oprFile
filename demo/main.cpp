#include <iostream>
#include <string.h>
#include <CFileOperate.h>
#include <dirent.h>
using namespace std;

int main(int argc, char *argv[])
{
    CFileOperate fopr;
    std::string text = "hello file!";

    size_t len = fopr.readFileBinary("./hello.txt",nullptr);
    char* sz = new char [len + 1];
    memset(sz,0,len+1);
    fopr.readFileBinary("./hello.txt",sz);
    std::cout<<sz<<std::endl;
    delete[] sz;
    return 0;
}
