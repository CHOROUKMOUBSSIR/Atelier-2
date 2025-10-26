
#include <stdio.h>
#include <stdlib.h>
#if def_WIN32
#include<Windows.h>
#else
#include<Unistd.h>
#endif
int carre(int X);
static int var_globale = 32;
int main(int argc,char**argv){
int i=2;
printf("test\n");
sleep(2);
printf("le carre de %d est %d \n",i,carre(i));
printf("le carre de %d est %d \n",var_globale,carre(i));
return EXIT_SUCCESS;
}
int carre(int X)
{return X*X;
}
