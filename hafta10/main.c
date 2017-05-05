#include<stdio.h>
#include<stdlib.h> 
 
#define M 3
int main()
{
  int i,j;
  int a[M][M];  
 
   for(i=0;i<M;i++) 
   {  
    for(j=0;j<M;j++) 
    {             
    printf("a[%d][%d]=", i+1,j+1);
     scanf("%d",&a[i][j]); 
    }
   }
   printf("\nUst Ucgen Matris\n\n");  
   for(i=0;i<M;i++)
   {
    for(j=0;j<M;j++)
    { 
    if(j>=i)        
      printf("\t%d\t",a[i][j]);  
    else printf("\t%d\t",0); 
    }
    printf("\n"); 
   }  
   printf("\n");
   
  return 0; 
}