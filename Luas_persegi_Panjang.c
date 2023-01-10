#include <stdio.h>
//fungsi menghitung luas persegi panjang
int luas(int p, int l){
	int luas = p*l;
	return luas;
}
//fungsi menghitung keliling persegi
int keliling(int p, int l){
	int keliling = 2 * (p + l);
	return keliling;
}
void tampilkan_luas( int p, int l){
	int hasil;
	hasil = luas (p,l);
	printf(" dengan menggunakan void\n");
	printf(" luas : %d \n", hasil ) ;
}
void tampilkan_keliling( int p, int l){
	int hasil;
	hasil = keliling (p,l);
	printf (" dengan menggunakan void\n");
	printf (" keliling : %d \n", hasil);
}
 
int main(){
	int panjang , lebar;
	printf ( "masukan panjang : " );
	scanf("%d",&panjang);
	printf("masukan lebar : ");
	scanf ("%d", &lebar);
	
	
		
	tampilkan_keliling(panjang, lebar);
	tampilkan_luas(panjang, lebar);
	
	
	return 0;
	
}