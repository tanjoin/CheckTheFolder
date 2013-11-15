CheckTheFolder
==============

パスを与えるとフォルダを作成する  
** Windows **
正体は_mkdirだけどstd::stringでも使えるようにした  
フォルダがない場合は勝手に生成される

    #include "check_the_folder.h"
    
    int main(){
    
      CheckTheFolder::checkExistenceOfFolder("C:\\てすと\\test");
      return 0;
    }

** Mac OS **
正体はstatだけどstd::stringでも使えるようにした
ディレクトリがなくても何も起こらない

    #include "check_the_folder.h"
    int main(){
      std::cout << CheckTheFolder::checkExistenceOfFolder("C:\\てすと\\test") << std::endl;
      return 0;
    }
    
結果

    > 1