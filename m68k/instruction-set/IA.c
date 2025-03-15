/*
* File Name: IA.c
* Author: Aryan Karamtoth
* Date Created: 11 Mar 2025
* Last Modified: 11 Mar 2025
* License: MIT
*/

#include "IA.h"
#include <stdint.h>
#include <stdio.h>
#include "../flags/flags.h"
#include "../registers/registers.h"

//Data movement operations
void MOVE(uint32_t *dest, uint32_t *src){
  *dest = *src;
}
void MOVA(uint32_t *dest, uint32_t *src){
  *dest = *src;
}
void MOVEM(uint32_t *dest, uint32_t *src){
  *dest = *src;
}
void MOVEP(uint32_t *dest, uint32_t *src){
  *dest = *src;
}
void MOVEQ(uint32_t *dest, uint32_t *src){
  *dest = *src;
}
void MOVEUSP(uint32_t *dest, uint32_t *src){
  *dest = *src;
}

//ADD operations
void ADD(uint32_t *dest, uint32_t *src, struct cpu_flags *flags){
  uint64_t temp = (uint64_t)(*dest) + (uint64_t)(*src);
    *dest = (uint32_t)temp;
    flags->zero = (*dest == 0);
    flags->negative = ((*dest & 0x80000000) != 0);
    flags->carry = (temp > 0xFFFFFFFF);
    // Overflow detection (signed addition):
    uint32_t sign_dest = (*dest ^ *src) & 0x80000000;
    uint32_t sign_res = (*dest ^ (uint32_t)temp) & 0x80000000;
    flags->overflow = (sign_dest && !sign_res);
}
void ADDA(uint32_t *dest, uint32_t *src){
  *dest = *dest + *src;
}
void ADDI(uint32_t *dest, uint32_t *src){
  *dest = *dest + *src;
}
void ADDQ(uint32_t *dest, uint32_t *src){
  *dest = *dest + *src;
}
void ADDX(uint32_t *dest, uint32_t *src){
  *dest = *dest + *src;
}

//SUB operations
void SUB(uint32_t *dest, uint32_t *src, struct cpu_flags *flags){
    uint64_t temp = (uint64_t)(*dest) - (uint64_t)(*src);
    *dest = (uint32_t)temp;
    flags->zero = (*dest == 0);
    flags->negative = ((*dest & 0x80000000) != 0);
    flags->carry = (temp > 0xFFFFFFFF);
    // Overflow detection for signed subtraction
    uint32_t sign_dest = (*dest ^ *src) & 0x80000000;
    uint32_t sign_res = (*dest ^ (uint32_t)temp) & 0x80000000;
    flags->overflow = (!sign_dest && sign_res);
}
void SUBA(uint32_t *dest, uint32_t *src){
  *dest = *dest - *src;
}
void SUBI(uint32_t *dest, uint32_t *src){
  *dest = *dest - *src;
}
void SUBQ(uint32_t *dest, uint32_t *src){
  *dest = *dest - *src;
}
void SUBX(uint32_t *dest, uint32_t *src){
  *dest = *dest - *src;
}

//CMP operations
void CMP(uint32_t *dest, uint32_t *src){
  if(*dest == *src){
    printf("Equal\n");
  }
  else if(*dest > *src){
    printf("Greater\n");
  }
  else{
    printf("Lesser\n");
  }

}

void CMPA(uint32_t *dest, uint32_t *src){
  if(*dest == *src){
    printf("Equal\n");
  }
  else if(*dest > *src){
    printf("Greater\n");
  }
  else{
    printf("Lesser\n");
  }
}

void CMPI(uint32_t *dest, uint32_t *src){
  if(*dest == *src){
    printf("Equal\n");
  }
  else if(*dest > *src){
    printf("Greater\n");
  }
  else{
    printf("Lesser\n");
  }
}

void CMPM(uint32_t *dest, uint32_t *src){
  if(*dest == *src){
    printf("Equal\n");
  }
  else if(*dest > *src){
    printf("Greater\n");
  }
  else{
    printf("Lesser\n");
  }
}

void CMP2(uint32_t *dest, uint32_t *src){
  if(*dest == *src){
    printf("Equal\n");
  }
  else if(*dest > *src){
    printf("Greater\n");
  }
  else{
    printf("Lesser\n");
  }
}

//MUL operations
void MULS(uint32_t *dest, uint32_t *src){
  *dest = *dest * *src;
}
void MULU(uint32_t *dest, uint32_t *src){
  *dest = *dest * *src;
}

//DIV operations
void DIVS(uint32_t *dest, uint32_t *src){
  *dest = *dest / *src;
}
void DIVU(uint32_t *dest, uint32_t *src){
  *dest = *dest / *src;
}

// branching instructions

void BRA(struct programcounter *pc, int16_t offset) {
    // Unconditional branch
    pc->pc += offset;
}

void BCC(struct programcounter *pc, struct cpu_flags *flags, int16_t offset) {
    // Branch if carry is clear
    if (!flags->carry) {
        pc->pc += offset;
    }
}

void BNE(struct programcounter *pc, struct cpu_flags *flags, int16_t offset) {
    if (!flags->zero) {
        pc->pc += offset;
    }
}

void decode_and_execute(uint16_t opcode,
                        uint32_t *dest,
                        uint32_t *src,
                        struct cpu_flags *flags,
                        struct programcounter *pc) {
    switch(opcode) {
        case 0x00: // ADD
            ADD(dest, src, flags);
            break;
        case 0x01: // SUB
            SUB(dest, src, flags);
            break;
        case 0x02: // BCC
            BCC(pc, flags, (int16_t)*src);
            break;
        case 0x03: // BNE
            BNE(pc, flags, (int16_t)*src);
            break;
        case 0x04: // BRA
            BRA(pc, (int16_t)*src);
            break;
        // ...other opcodes...
        default:
            // Handle unknown opcode
            break;
    }
}
