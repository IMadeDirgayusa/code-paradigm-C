#include <stdio.h>
#include <math.h>

float a , b;

void pangkat (){
		printf ("masukan angka : ");
		scanf ("%f", &a);
		printf ("masukan pangkat : ");
		scanf ("%f", &b);
		printf ("\n");
		printf ("%f" , a);
		printf (" pangkat %f : " , b);
		printf ("%f\n" , pow(a,b));
		
	}

int main  (){
pangkat ();
return 0;
}