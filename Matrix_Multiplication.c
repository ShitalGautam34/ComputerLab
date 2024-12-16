#include<stdio.h>
#include<conio.h>

void main(){
	int i, j, k, rowA, columnA, rowB, columnB;
	printf("Enter the row and column of matrix A: ");
	scanf("%d%d", &rowA, &columnA);
	printf("Enter the row and column of matrix B: ");
	scanf("%d%d", &rowB, &columnB);
	
	if(columnA == rowB){
		int A[rowA][columnA], B[rowB][columnB], AB[rowA][columnB];
		//initialization of the matrices
		printf("Entering elements of matrix A\n");
		for(i=0; i<rowA; i++){
			for(j=0; j<columnA; j++){
				printf("Enter matrix A[%d][%d]: ", i,j);
				scanf("%d", &A[i][j]);
			}
		}
		printf("Entering elements of matrix B\n");
		for(i=0; i<rowB; i++){
			for(j=0; j<columnB; j++){
				printf("Enter matrix B[%d][%d]: ", i,j);
				scanf("%d", &B[i][j]);
			}
		}
		
		//processing
		for(i=0; i<rowA; i++){
			for(j=0; j<columnB; j++){
			AB[i][j] = 0; //arrays have some random value after declaring 
				for(k=0; k<columnA; k++){
					AB[i][j] += A[i][k] * B[k][j];
				}
			}
		}
		
		//displaying
		printf("Displaying the product\n");
		for(i=0; i<rowA; i++){
			for(j=0; j<columnB; j++){
				printf("%d\t", AB[i][j]);
			}
			printf("\n");
		}
	}
	else{
		printf("Invalid order of the matrices :(\nNo. of column of A should be equal to No. of row of B")	;
	}
	
	getch();
}
