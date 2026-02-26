#include "tool_file.h"

bool tool::IsExist(std::string path)
{
    std::ifstream file(path);
    return file.good();
}

std::vector<std::string> tool::GetDirectoryFileName(std::string path, std::string Extension)
{
    std::vector<std::string> result;
    std::filesystem::path dir_path(path);

    // 检查路径是否存在且为目录
    if (!std::filesystem::exists(dir_path) || !std::filesystem::is_directory(dir_path))
    {
        return result;  // 无效路径返回空列表
    }

    // 统一扩展名格式：确保以点开头
    if (!Extension.empty() && Extension[0] != '.')
    {
        Extension = "." + Extension;
    }

    try
    {
        for (const auto& entry : std::filesystem::directory_iterator(dir_path))
        {
            // 只处理普通文件
            if (std::filesystem::is_regular_file(entry.status()))
            {
                std::string filename = entry.path().filename().string();
                // 如果扩展名为空，直接添加；否则检查扩展名是否匹配
                if (Extension.empty())
                {
                    result.push_back(filename);
                }
                else if (entry.path().extension() == Extension)
                {
                    result.push_back(filename);
                }
            }
        }
    }
    catch (const std::filesystem::filesystem_error&)
    {
        // 发生错误（如权限问题）时返回空列表
        return {};
    }

    return result;
}

std::string tool::ReadFile(std::string path)
{
    std::string text;
    std::ifstream file(path, std::ios::binary);
    if (file.is_open())
    {
        std::getline(file, text, char(EOF));
    }
    else
    {
        text = "";
    }
    file.close();
    return text;
}

std::vector<std::string> tool::ReadFileEx(std::string path, char flag)
{
    std::string text;
    std::vector<std::string> text_list;
    text = ReadFile(path);
    std::stringstream ss(text);
    std::string temp;
    while (std::getline(ss, temp, flag))
    {
        text_list.push_back(temp);
    }
    return text_list;
}

bool tool::WriteFile(std::string path, std::string text, bool append)
{
    std::ofstream file;
    if (append) file.open(path, std::ios::app | std::ios::binary);
    else file.open(path, std::ios::trunc | std::ios::binary);
    if (!file.is_open()) return false;
    file.write(text.c_str(), text.size());
    file.close();
    return true;
}

bool tool::WriteFileEx(std::string& path, std::vector<std::string> textList, char flag)
{
    std::string text;
    for (size_t i = 0; i < textList.size(); i++)
    {
        text += textList[i];
        if (i != textList.size() - 1)
        {
            text += flag;
        }
    }
    return WriteFile(path, text, false);
}

bool tool::DeleteFile(std::string path)
{
    return (std::remove(path.c_str()) == 0);
}