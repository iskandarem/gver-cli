#include <iostream>
#include <string>
#include "Gver.h"



int main(int argc, char* argv[]) {
    if(argc != 2)
    {
        Gver::print_usage();
    }
    else 
    {
        std::string argument = std::string(argv[1]);
        if(argument == "--help" || argument == "-h") Gver::print_usage();
        else if(argument == "--tag") 
        {
            std::cout << "taging will be implemented.\n";
        }
        else if(argument == "--init")
        {
            std::cout << "Gver intialized. Intial version - 0.0.1\n";
        }
        else if(argument == "--next")
        {
            Gver gver;
            gver.calNext();
        }
        else
        {
            std::cout << "Invalid argument " << argv[1] << std::endl << std::endl;
            Gver::print_usage();
            return 1;
        }
    }
    return 0;
}
