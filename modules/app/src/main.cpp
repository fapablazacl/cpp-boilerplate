
#include <iostream>
#include <boost/filesystem.hpp>
#include <fruit/fruit.h>

int main() {
    std::cout << "Hello, World!" << std::endl;
    std::cout << boost::filesystem::current_path() << std::endl;

    return 0;
}
