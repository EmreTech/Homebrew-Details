#include <filesystem>
#include <switch.h>

#define PATH_1 "/switch/homebrew_details.nro"
#define PATH_2 "/switch/Homebrew-Details/homebrew_details.nro"

int main(int argc, char **argv)
{
    if (std::filesystem::exists(PATH_1) && std::filesystem::exists(PATH_2))
    {
        if (std::filesystem::exists(PATH_1))
            envSetNextLoad(PATH_1, PATH_1);
        if (std::filesystem::exists(PATH_2))
            envSetNextLoad(PATH_2, PATH_2);
    }

    return 0;
}