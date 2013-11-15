#ifndef CHECK_THE_FOLDER_H_
#define CHECK_THE_FOLDER_H_

#include <string>

#if defined(_WIN64) || defined(_WIN32)
#include <direct.h>
#elif defined(__APPLE__)
#include <sys/stat.h>
#endif

class CheckTheFolder
{
public:

  // フォルダが存在する場合falseを返す．
  static bool checkExistenceOfFolder(const std::string folder_name) {
#if defined(_WIN64) || defined(_WIN32)
    if( _mkdir( folder_name.c_str() ) == 0 ){
#elif __APPLE__
    struct stat st;
    int ret = stat(folder_name.c_str(), &st);
    if (ret == 0) {
#endif
      return true;
    } else {
      return false;
    }
  }
 
};

#endif // CHECK_THE_FOLDER_H_