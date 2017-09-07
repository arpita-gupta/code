#include<stdio.h> //Header Files.
#include<conio.h>
#include<stdlib.h>
#include<stddef.h>
void main()
{
int count=0;  //declared this variable to count the number of zeroes.
int i,j,m,n;  //declared i and j for loop working ,m and n for the rows and columns of the loop.
int**arr;                                                                      //declared this array  through dynamic memory allocation.
printf("Enter the rows and columns of the matrix");        
scanf("%d %d",&m,&n);                                                       
   arr=(int**)malloc(sizeof(int*)*n);                                    
arr[0]=(int*)malloc(sizeof(int)*m*n);                                  
    printf("Enter the co-efficients of the matix \n");
    for (i = 0; i < m;i++)       //two for loops will go 
    {                                            here for entering
        for (j = 0; j < n;j++)           the coefficients.
             {
                     scanf("%d", &array[i][j]);
                       if (array[i][j] == 0) 
               {
                       ++count;
               } 
     }  // inner for loop ends here.
} // outer for loop ends here.
    if (counter > ((m * n) / 2)) //if the condition is true it will give a yes else no.
   {
          printf("The given matrix is sparse matrix \n");
    }

    else
{
        printf("The given matrix is not a sparse matrix \n");

    printf("There are %d number of zeros", counter);

}  // else ends here.
free(arr);  // here the memory is set free which was allocated through dynamic memory allocation.
getch();
}  //main ends here.





 

