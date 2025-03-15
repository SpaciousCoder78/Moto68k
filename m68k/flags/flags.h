/*
* File Name: IA.h
* Author: Aryan Karamtoth
* Date Created: 10 Mar 2025
* Last Modified: 10 Mar 2025
* License: MIT
*/

#include <stdint.h>

#ifndef FLAGS_H
#define FLAGS_H

struct cpu_flags {
    uint8_t carry;
    uint8_t zero;
    uint8_t negative;
    uint8_t overflow;
};

void update_flags_add(struct cpu_flags* flags, uint32_t result) {
    flags->zero = (result == 0);
    flags->negative = (result & 0x80000000) ? 1 : 0;

}

#endif