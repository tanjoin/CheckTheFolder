CheckTheFolder
==============

パスを与えるとフォルダを作成する  
  
正体は_mkdirだけどstd::stringでも使えるようにした  


    #include "check_the_folder.h"
    
    int main(){
    
      CheckTheFolder::checkExistenceOfFolder("C:\\てすと\\test");
      return 0;
    }