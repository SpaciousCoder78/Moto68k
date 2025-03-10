/*
* File Name: IA.h
* Author: Aryan Karamtoth
* Date Created: 10 Mar 2025
* Last Modified: 10 Mar 2025
* License: MIT
*/

#include <stdint.h>
#ifndef IA_H
#define IA_H

//Creating the instruction set for 68k

//Data movement instructions
//MOVE
void MOVE(uint32_t *dest, uint32_t *src);
void MOVEA(uint32_t *dest, uint32_t *src);
void MOVEM(uint32_t *dest, uint32_t *src);
void MOVEP(uint32_t *dest, uint32_t *src);
void MOVEQ(uint32_t *dest, uint32_t *src);
void MOVEUSP(uint32_t *dest, uint32_t *src);

//Arithmetic instructions
//ADD
void ADD(uint32_t *dest, uint32_t *src);
void ADDA(uint32_t *dest, uint32_t *src);
void ADDI(uint32_t *dest, uint32_t *src);
void ADDQ(uint32_t *dest, uint32_t *src);
void ADDX(uint32_t *dest, uint32_t *src);
//Subtraction
void SUB(uint32_t *dest, uint32_t *src);
void SUBA(uint32_t *dest, uint32_t *src);
void SUBI(uint32_t *dest, uint32_t *src);
void SUBQ(uint32_t *dest, uint32_t *src);
void SUBX(uint32_t *dest, uint32_t *src);
//Compare
void CMP(uint32_t *dest, uint32_t *src);
void CMPA(uint32_t *dest, uint32_t *src);
void CMPI(uint32_t *dest, uint32_t *src);
void CMPM(uint32_t *dest, uint32_t *src);
void CMP2(uint32_t *dest, uint32_t *src);
