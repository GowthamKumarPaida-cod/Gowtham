#include<stdio.h>
		int main() {
		int en;
		int n = 1;

			printf("Enter a generic number for mathametical table\n");
			scanf("%d",&en);

			/*while(n <= 10){
					printf("\n %d * %d = %d", en,n, en*n);
					n++;
				}
					return 0;
				}*/
			for (n = 1;n <= 10;n++){
				printf("\n %d * %d = %d", en,n, en*n);
			}
				return 0;
			}