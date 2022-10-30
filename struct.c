#include <stdio.h>


struct struktur {
	char *nama;
	int umur;
}; 

int main(){
struct struktur dirga;
struct struktur ultraman;

dirga.nama = "Dirgaaja";
dirga.umur = 19;

ultraman.nama = "cecep";
ultraman.umur = 24;

printf ("nama\t : %s\n ", dirga.nama);
printf ("umur\t : %d\n\n" , dirga.umur);

printf ("nama\t : %s\n ", ultraman.nama);
printf ("umur\t : %d\n\n" , ultraman.umur);



return 0;
}