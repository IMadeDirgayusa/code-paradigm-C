#include <stdio.h>

int faktorial(int n);
int main (){
int hasil, angka;

printf ("masukan angka faktorial : ");
scanf("%d",&angka);
hasil= faktorial (angka);
printf ("\n\nhasil faktorial : %d \n\n",hasil, "\n");
return 0;
}

int faktorial( int n){
	
	if ( n <= 1){
		return n;
	}else {
	printf ("%d", n);
	printf ("*");
	
	return n * faktorial ( n- 1);
	}
}