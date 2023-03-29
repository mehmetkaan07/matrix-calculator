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
	int k;
	int l;
	for(int i =0;i<row;i++){
		for (int j=0;j<col;j++){
			k=(array1[i][j] +array2[i][j] );
			printf("%d ",k);
			
		}
		printf("\n");
	}
	
	return;
}
void scalarmultiply(int array[10][10],int scalar,int row, int column){
	
	for (int i =0;i<row;i++){
		
		for (int j =0;j<column;j++){
			
			printf("%d ",scalar*(array[i][j]));
			
		}
		printf("\n");
	}
	
	
	return;
}

void abbsmatrix(int array1[10][10],int array2[10][10],int array3[10][10],int row, int col){
	int k;
	int l;
	for(int i =0;i<row;i++){
		for (int j=0;j<col;j++){
			k=(array1[i][j] -array2[i][j] );
			printf("%d ",k);
			
		}
		printf("\n");
		
	}
	return;
}
	
	


void matrixbymatrix(int array1[10][10],int array2[10][10],int rowa, int cola ,int colb){
	
	
	for(int l =0;l<rowa;l++){
	for (int i =0;i<colb;i++){
		int sum =0;
		for(int j=0;j<cola;j++){
			sum = sum +(array1[l][j]*array2[j][i]);
			
		}
		printf("%d ",sum);
		
	}
	printf("\n");
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
	int scalarNum = 0;
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
			readmatrix(matrixB,rowB,colB);
			addmatrix(matrixA,matrixB,resultMatrix,rowA,colA);
			
			
			break;
		case 2:
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
			readmatrix(matrixB,rowB,colB);
			abbsmatrix(matrixA,matrixB,resultMatrix,rowA,colA);
			break;
			
		case 3: 
			printf("Enter the row and column of first matrix\n");
			scanf("%d%d",&rowA,&colA);
			readmatrix(matrixA,rowA,colA);
			printf("Enter the scalar number\n");
			scanf("%d",&scalarNum);
			scalarmultiply(matrixA,scalarNum,rowA,colA);
			break;
			
			
		case 4:
			printf("Enter the row and column of first matrix\n");
			scanf("%d%d",&rowA,&colA);
			printf("Enter the row and column of second matrix\n");
			scanf("%d%d",&rowB,&colB);
			while((colA !=rowB) ){
				printf("inner matrices must be equal!\n");
				printf("Enter the row and column of first matrix\n");
				scanf("%d%d",&rowA,colA);
				printf("Enter the row and column of second matrix\n");
				scanf("%d%d",&rowB,colB);	}			
		
		
			readmatrix(matrixA,rowA,colA);
			readmatrix(matrixB,rowB,colB);
			matrixbymatrix(matrixA,matrixB,rowA,colA ,colB);
			break;
			
			
	}
	
	
	
	return 0;
}
