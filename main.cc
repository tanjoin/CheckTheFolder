//
//  main.cc
//  CheckTheFolder
//

#include <iostream>
#include <cstdlib>
#include "check_the_folder.h"

int main(int argc, const char * argv[])
{
  std::cout <<
    CheckTheFolder::checkExistenceOfFolder(
        "/Users/default/project/CheckTheFolder")
    << std::endl;
  std::cout << "Hello, World!" << std::endl;
  return EXIT_SUCCESS;
}

