#include "../include/printer.hh"

inline void line()
{
    std::cout << "\n";
}

printer::Printer::Printer()
{
    std::cout << "CLASS STARTED OK...";
    line();
    char user_name[] = "Basavyr";
    std::cout << user_name;
    line();
}

printer::Printer::~Printer()
{
    std::cout << "CLASS STOPPED!";
    line();
}