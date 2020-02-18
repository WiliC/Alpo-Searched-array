#include<stdio.h>
int main () {
	int A[100], B[100], x, y, all, search, flag;
	
	printf(" Masukkan Angka : ");
	scanf("%d", &all);
	printf(" Data : ");
	for (x = 0; x < all; x++) {
		scanf("%d", & A[x]);
	}
	
	printf(" Masukkan Angka : ");
	scanf("%d", &search);
	printf(" Data : ");
	for (y = 0; y < search; y++) {
		scanf("%d", & B[y]);
	}
	
	y = 0; 
	do {
		for (x = 0; x < all; x++) {
			if (B[y] == A[x]) {
				flag = 1;
				
				break;
			} else {
				flag = 0;
			}
		}
		
		if (flag == 1) {
			printf("Ditemukan\n");
		} else {
			printf("Tidak Ditemukan\n");
		}
		y++;
	} while (y <= search);

	return 0;
}
