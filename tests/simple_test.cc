#include <iostream>
#include <fstream>

#include <string>

static void printname(char *name)
{
    std::cout << name;
}

int main()
{
    char *name;
    for (int i = 0; i < 6; ++i)
    {
        name[i] = 'r';
        if (i == 5)
            name[i] = '\n';
    }
    printname(name);
}
