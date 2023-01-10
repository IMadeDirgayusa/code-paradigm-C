#include <stdio.h>

int main(){
	
	int tinggi,spasi , baris ;
	printf("Masukan tinggi segitiga : ");
	scanf ("%d", &tinggi);
	
	
	for(spasi = 1; spasi <= tinggi ; spasi++){
		for (int j =spasi; j<=tinggi; j++){
			printf(" ");
			
		}
		for(baris = spasi; baris>= 1; baris--){
				
					printf("*");
					
			
		}
		for(baris = spasi-1; baris>= 1; baris--){
				
					printf("*");
		}
	printf ("\n");	

	}
	return 0;	
}