//
// Created by David Hernandez on 3/8/20.
//

// pre-processor directives to determine Operating System
#include <cstdlib>
#include <iostream>
#include "magicEightBallFunctions.hpp"

// pre-processor directives determines the OS the program is running on.
#if defined _WIN32
    #define _clear "cls"
#else
    #define _clear "clear"
#endif

namespace Hernandez {
    void clearConsole() {
        system(_clear);
    }

    void clearInputStream() {
        std::cin.ignore(10000, '\n');
        std::cin.clear();
    }

    void pauseConsole() {
        std::cout << "Press <ENTER> to continue ...";
        clearInputStream();
    }
}
