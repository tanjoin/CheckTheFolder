#ifndef CHECK_THE_FOLDER_H_
#define CHECK_THE_FOLDER_H_

#include <string>
#include <direct.h>

class CheckTheFolder
{
public:

  // フォルダが存在する場合falseを返す．
  static bool checkExistenceOfFolder(const std::string folder_name) {
    if( _mkdir( folder_name.c_str() ) == 0 ){
      return true;
    } else {
      return false;
    }
  }
 
};

#endif // CHECK_THE_FOLDER_H_