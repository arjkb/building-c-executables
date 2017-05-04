#include <stdio.h>  // <1>
#include "greeting.h" // <2>

int main(int argc, char** argv, char** env) {
    printf( "%s\n", greeting);
    return 0;
}
