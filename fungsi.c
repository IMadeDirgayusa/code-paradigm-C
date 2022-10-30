
//program menjumlahkan
#include <stdio.h>
// Function declaration
int fungsi(int);

// The main method
int main() {
 fungsi(5);
  return 0;
}
// Function definition
int fungsi(int x){
	  int a[20];

    for ( int i = 0 ; i < 20; i++){
    	a[i] = x + i ;
	}
	for (int i = 0; i<20; i++){
		printf("a[%d",i,"] = %d",a[i] );
	}

		return 0;
}
 
