#pragma once

#include "lib.h"

namespace tool
{
    bool IsExist(std::string path);

    std::vector<std::string> GetDirectoryFileName(std::string path, std::string Extension = "");

    std::string ReadFile(std::string path);

    std::vector<std::string> ReadFileEx(std::string path, char flag);

    bool WriteFile(std::string path, std::string text, bool append = false);

    bool WriteFileEx(std::string& path, std::vector<std::string> textList, char flag);

    bool DeleteFile(std::string path);
}