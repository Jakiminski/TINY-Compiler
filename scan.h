/****************************************************/
/* File: scan.h                                     */
/* The scanner interface for the TINY compiler      */
/* Compiler Construction: Principles and Practice   */
/* Kenneth C. Louden                                */
/****************************************************/

#ifndef _SCAN_H_
#define _SCAN_H_

/* MAXTOKENLEN is the maximum size of a token */
#define MAXTOKENLEN 40
#define ALLOCSIZE 1024

/* tokenString array stores the lexeme of each token */
extern char tokenString[MAXTOKENLEN+1];
//extern char *allocp = tokenString;

/* function getToken returns the 
 * next token in source file
 */
TokenType getToken(void);
#endif
