#include <stdio.h>
//function parameter
void nama (char name[]){
printf ("what's up %s !\n", name);
}
//function parameter
void karakter (char name[],int power, int health){
	printf("name\t : %s\n ", name);
	printf("power\t : %d\n ", power);
	printf("health\t : %d\n", health);
}

int main(){
//call function nama	
nama("dirga");
nama("andika");

printf ("\n\n");
//call function karakter
karakter ("Batman", 124 , 200);

return 0;

}