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
void ADD(uint32_t *dest, uint32_t *src){
  *dest = *dest + *src;
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
void SUB(uint32_t *dest, uint32_t *src){
  *dest = *dest - *src;
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

