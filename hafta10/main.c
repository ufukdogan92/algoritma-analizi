#include<stdio.h>
#include<stdlib.h> 
 
#define M 3
int main()
{
  int i,j;
  float a[M][M]; 
  float b[3]={1,2,3}; 
  float x[3]={1,2,3};
   for(i=0;i<M;i++) 
   {  
    for(j=0;j<M;j++) 
    {             
    printf("a[%d][%d]=", i+1,j+1);
     scanf("%f",&a[i][j]); 
    }
   }
  printf("\n\n"); 
   for(i=0;i<M;i++)
   {
    for(j=0;j<M;j++)
    { 
    if(j>=i)        
      printf("%f\t",a[i][j]);  
    else printf("\t%d\t",0); 
    }

    printf("|\tx%f\t|\t%f\n",x[i],b[i]); 
   }  
   printf("\n");
   x[2] = b[2]/a[2][2];
   x[1] = (b[1]/-a[1][2]*x[2])/a[1][1];
   x[0] = (b[1]/-a[0][2]*x[2]-a[0][1]*x[1])/a[1][1];

   printf("x1=%f \n",x[0]);
   printf("x2=%f \n",x[1]);
   printf("x3=%f \n",x[2]);
    

   
  return 0; 
}