/*
* File Name: registers.h
* Author: Aryan Karamtoth
* Date Created: 05 Mar 2025
* Last Modified: 05 Mar 2025
* License: MIT
*/

#ifndef REGISTERS_H
#define REGISTERS_H

//Definining data registers of 68k
struct datareg{
  unsigned char d0;
  unsigned char d1;
  unsigned char d2;
  unsigned char d3;
  unsigned char d4;
  unsigned char d5;
  unsigned char d6;
  unsigned char d7;
}datareg;

//address registers
struct addreg{
  unsigned char a0;
  unsigned char a1;
  unsigned char a2;
  unsigned char a3;
  unsigned char a4;
  unsigned char a5;
  unsigned char a6;
}

//stack pointers
struct stackpointers{
  unsigned char a7u; //user stack pointer
  unsigned char a7s; //supervisor stack pointer
}

//program counter
struct programcounter{
  unsigned char pc;
}
#endif
