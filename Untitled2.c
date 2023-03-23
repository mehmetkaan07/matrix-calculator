#include <stdio.h>
#include <string.h>

void readmatrix(int array[10][10],int row, int column){
	for (int i=0;i<row;i++){
		for(int j =0;j<column;j++){
			printf("Enter row %d column %d:\n",i+1,j+1);
			scanf("%d",&(array[i][j]));
			
			
		}
	}
	return;

}

void printmatrix(int array[10][10],int row,int column){
	
	for (int i=0;i<row;i++){
		for(int j =0;j<column;j++){
			printf("%d ",array[i][j]);
			
			
			
			
		}
		printf("\n");
		
	}
	
	return;
}
void addmatrix(int array1[10][10],int array2[10][10],int array3[10][10],int row, int col){
	for(int i =0;i<row;i++){
		for (int j=0;j<col;j++){
			(array3[i][j])=(array1[i][j] +array2[i][j]);
			
		}
	}
	
	return;
}




















int main(){
	printf("MENU:\n");
	printf("1: add\n2:abstract\n3:scalar multiply\n4:multiply two matrices\n");
	int chose;
	scanf("%d",&chose);
	int rowA,rowB,colA,colB =0;
	int matrixA[10][10]={0};
	int matrixB[10][10]={0};
	int resultMatrix[10][10]={0};
	switch(chose){
		
		case 1:
		
			
			printf("Enter the row and column of first matrix\n");
			scanf("%d%d",&rowA,&colA);
			printf("Enter the row and column of second matrix\n");
			scanf("%d%d",&rowB,&colB);
			while((rowA !=rowB) || (colB!=colA)){
				printf("Rows and columns must be equal!\n");
				printf("Enter the row and column of first matrix\n");
				scanf("%d%d",&rowA,colA);
				printf("Enter the row and column of second matrix\n");
				scanf("%d%d",&rowB,colB);	}			
		
		
			readmatrix(matrixA,rowA,colA);
			readmatrix(matrixA,rowB,colB);
			addmatrix(matrixA,matrixB,resultMatrix,rowA,rowB);
			printmatrix(resultMatrix,rowA,colB);
			
			break;
		case 2:
			break;
			
		case 3: 
			break;
			
		case 4:
			break;
			
			
	}
	
	
	
	return 0;
}
