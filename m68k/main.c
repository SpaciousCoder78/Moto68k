
#include <stdio.h>
#include <stdint.h>
#include "flags/flags.h"
#include "registers/registers.h"
#include "instruction-set/IA.c"
#include "instruction-set/IA.h"

int main() {
    uint16_t memory[256] = {0x00,0x02, 0x04 };
    struct datareg dregs = {0};
    struct cpu_flags flags = {0};
    struct programcounter pc = {0};

    // Example loop
    while (pc.pc < 256) {
        uint16_t opcode = memory[pc.pc++];
        uint32_t dest = 10, src = 5; // Simplified
        decode_and_execute(opcode, &dest, &src, &flags, &pc);
        if (pc.pc >= 256) {
            break;
        }
    }
    return 0;
}
