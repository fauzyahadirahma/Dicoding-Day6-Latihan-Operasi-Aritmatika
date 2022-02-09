/* File         : latihanOa.c */
/* Penulis      : Fauzyah Hadirahma, email faubelajar@gmail.com */
/* Deskripsi    : Latihan Operasi Aritmatika dengan tanda kurung 
                  dan tanpa tanda kurung */

#include <stdio.h>
int main () {
    /* KAMUS */
    int a = 9;
    int b = 2;
    int c = 7;
    
    /* PROGRAM */
    printf ("Ini nilai a + b + c : %d \n", a+b+c );
    printf ("Ini nilai a + a * b + c : %d \n", a+a*b+c );
    printf ("Ini nilai a + (a * b) + c : %d \n", a+(a*b)+c );
    
    return 0;
}
