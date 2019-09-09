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

    bool writeFileText(const std::string src, const std::string path);
    bool writeFileText(const char* pSrc, size_t len, const char* path);
    bool writeFileBinary(const byte* src, size_t len, const char* path);

    std::string readFileText(const std::string path);
    size_t readFileBinary(const char* path, char* outStr);//outStr==nullptr : get binary file size
};

#endif // CFILEOPERATE_H
