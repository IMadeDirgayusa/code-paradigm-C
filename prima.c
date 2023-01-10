#include <stdio.h>
 
 
 int main(){
	 
 int awal, akhir , f;
 printf ("mencari bilangan prima dalam satu rentang bilangan \n\n");
 printf ("masukan bilangan awal : ");
 scanf("%d",&awal);
 printf (" masukan bilangan akhir : ");
 scanf("%d",&akhir);
 printf ("\n\n bilangan prima yang terdapat dalam rentang tersebut : ");

 for (int j = awal; j <= akhir ; j++ ){
 
 f = 0;
 for ( int i = 1 ; i <= j; i++ ){
	if (j%i == 0) {
		f++;
		
	}

 }
 if ( f == 2){
	 
	 printf("%d", j , "\n\n");
	 
 }
 }
 return 0; 
 }
 