#include <iostream>

void moveDisks(int n, const char* pegA, const char* pegB, const char* pegC);

int main(int argc, const char * argv[]) {
    if (argc != 2) {
        std::cout << "Usage: " << argv[0] << " number_of_disks" << std::endl;
        return -1; }
    moveDisks( atoi(argv[1]), "peg A", "peg B", "peg C" );
    return 0; }

void moveDisks(int n, const char* pegA, const char* pegB, const char* pegC){

     if (n == 1){
     std::cout << "Move disk from " << pegA << " to " << pegC << std::endl;
     }
     else{
        moveDisks(n-1, pegA, pegC, pegB);
        std::cout << "Move disk from " << pegA << " to " << pegC << std::endl;
        moveDisks(n-1, pegB, pegA, pegC);

     }
}
