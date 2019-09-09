#include <iostream>
#include <string.h>
#include <CFileOperate.h>
#include <dirent.h>
using namespace std;

int main(int argc, char *argv[])
{
    CFileOperate fopr;
    fopr.writeFileText("","./test.txt");

    std::string text = "hello file!";

    fopr.writeFileText(text,"./test.txt",OptType::AppendEnd);
    text = "end  hello file!";
    fopr.writeFileText(text,"./test.txt",OptType::AppendEnd);

    std::cout<<fopr.readFileText("./test.txt")<<std::endl;

    char sz[1024] = {0};
    memset(sz,200,1024);
    for(int i = 0; i< 10; i++)
    {
        fopr.writeFileBinary(sz,1024,"./test.binary",OptType::AppendEnd);
    }
    size_t len = fopr.readFileBinary("./test.binary",nullptr);
    std::cout<<len<<std::endl;
    return 0;
}
