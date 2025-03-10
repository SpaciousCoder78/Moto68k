/*
* File Name: registers.h
* Author: Aryan Karamtoth
* Date Created: 05 Mar 2025
* Last Modified: 10 Mar 2025
* License: MIT
*/
#include <stdint.h>
#ifndef REGISTERS_H
#define REGISTERS_H

//Definining data registers of 68k
struct datareg{
  uint32_t d0;
  uint32_t d1;
  uint32_t d2;
  uint32_t d3;
  uint32_t d4;
  uint32_t d5;
  uint32_t d6;
  uint32_t d7;
};

//address registers
struct addreg{
  uint32_t a0;
  uint32_t a1;
  uint32_t a2;
  uint32_t a3;
  uint32_t a4;
  uint32_t a5;
  uint32_t a6;
};

//stack pointers
struct stackpointers{
  uint32_t a7u; //user stack pointer
  uint32_t a7s; //supervisor stack pointer
};

//program counter
struct programcounter{
  uint32_t pc;
};

#endif
