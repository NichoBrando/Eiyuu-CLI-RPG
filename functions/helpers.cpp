#include <cstdlib>
#include <ctime>

bool isCritical(){
    srand(time(0));

    return rand() % 10 == 0; 
}