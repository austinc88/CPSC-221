
#include <iostream>
#include <string>
#include <fstream>

int main(void) {
    std::ifstream in("infile.txt");
    std::ofstream out("outfile.txt");
    std::string ss;
    // getline() puts next line in ss and discards any newline characters
    while (getline(in, ss))
        out << ss << std::endl;
    std::cout << "End of program" << std::endl;
    return 0;
}