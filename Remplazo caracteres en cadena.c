/*TP2
Lista Rodrigo
K2051
20/04/2015
Este programa recibe cadenas de caracteres y devuelve la misma cadena rempalzando las tabulaciones por "\t", retrocesos por "\b" y la diagonal invertida por "\\"
*/





#include <stdio.h>
#include <string.h>


int main(void) {

	
	int c ;

	/*int tabulacion="\t";
	int retroceso="\b";
	char diagonal []="\\";*/
	while((c=getchar())!= EOF){
	    if(c=='\t')
	       {c="\t";}
	    if(c=='\b')
	       {c="\b";}
	    if(c=="")
	       { c="\\";}
	}
	printf(c);

}

