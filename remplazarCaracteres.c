/*Lista Rodrigo
k2050
24\04\2015
Este programa recibe una cadena de caracteres y la imprime por pantalla, remplazando
las tabulaciones por \t, los retrocesos por \b y las barras invertida por \\
*/



#include <stdio.h>


int main(void) {
      int c;



      while((c=getchar())!= EOF){

             if(c=='\t'){
                putchar('\\');
                putchar('t');
                }
             else
                {if(c=='\b')
                      {putchar('\\');
                       putchar('b');

                      }
                  else
                     {if (c=='\\')
                            {putchar('\\');
                              putchar('\\');

                            }
                        else
                            {putchar(c);}
                }
                }
                }



}