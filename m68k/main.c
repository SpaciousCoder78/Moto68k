
#include <stdio.h>
#include <stdint.h>
#include "flags/flags.h"
#include "registers/registers.h"
#include "instruction-set/IA.c"
#include "instruction-set/IA.h"

#include "ghz-sh/shellops.h"
#define EXIT_SUCCESS 0

int main(int argc, char **argv){

    //area for config files

    //call the loop
    ghzsh_loop();

    //space for cleanup

    return EXIT_SUCCESS;

}
