#include<stdio.h>
#include<stdlib.h>
void main()
{
	int n,i,j,k;
	int ref[3][3],res[10][10],p[10][10];
	int x[10],y[10],xnew[10];
	printf("Enter number of vertices::");
	scanf("%d",&n);
	printf("\nEnter value for:\n");
	for(i=0;i<n;i++)
	{
		printf("x%d::",i+1);
		scanf("%d",&x[i]);
		printf("y%d::",i+1);
		scanf("%d",&y[i]);
	}
	printf("Points are:");
	for(i=0;i<n;i++)
	{
		printf("\n(x,y)::(%d,%d)",x[i],y[i]);
	}
	ref[0][0]=-1;
	ref[0][1]=0;
	ref[0][2]=0;
	ref[1][0]=0;
	ref[1][1]=1;
	ref[1][2]=0;
	ref[2][0]=0;
	ref[2][1]=0;
	ref[2][2]=1;
	for (i=0;i<n; i++)  
    {  
        p[0][i]=x[i];  
        p[1][i]=y[i];  
        p[2][i]=1;  
    }  
    for (i=0;i<3;i++)  
    {  
        for (j=0;j<n;j++)  
        {  
            res[i][j]=0;  
            for (k=0;k<3;k++) 
			{
			 
       			res[i][j]+=ref[i][k]*p[k][j];  
    	
			}
		}
	}
	for (i=0;i<n;i++)  
    {  
    	xnew[i]=res[0][i];  
    
    }  
    printf("\nAfter reflection along y axis,new points are::\n");
    for(i=0;i<n;i++)
	printf("\n(x,y)::(%d,%d)",xnew[i],y[i]);
}

