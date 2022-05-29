#include <string>
#include <fstream>
#include <filesystem>
#include <iostream>
#include <vector>
#include "Folder.h" 

void MakeFolder(){
    std::string Foldermakes;
    std::ofstream Foldermake;
    if(!Foldermake)
    {
        std::string Foldername;
        std::cin >> Foldername;
        std::cout << "Makeking succeeded." << "name::" << Foldername << std::endl;
        std::filesystem::create_directory(Foldername);
    }
        else{
            std::cout << "Making was failed." << std::endl;
            std::exit (0);
        }
}




