#ifndef CFILEOPERATE_H
#define CFILEOPERATE_H
#include <iostream>
#include <fstream>
#include <dirent.h>
typedef unsigned char byte;

class CFileOperate
{
public:
    CFileOperate();

    bool writeFileText(std::string src, std::string path);
    bool writeFileText(const char* pSrc, size_t len, const char* path);
    bool writeFileBinary(byte* src, size_t len, const char* path);

    std::string readFileText(std::string path);
    size_t readFileBinary(const char* path, char* outStr);//outStr==nullptr : get binary file size
};

#endif // CFILEOPERATE_H
