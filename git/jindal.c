#include<stdio.h>
#include<stdlib.h>
int smallest_max_no(int abc[],int k,int *p,int *q);
int check_equal(int abc[],int k);
int check_number_times(int arr[],int a);
int fact(int a,int*ff);
void star();
void sine();
void xyz();
int array_transpose();
int lcm_hcf(int a, int b);
void rakjindal();
int even_odd_positive_negative_counts(int abc[],int a);
int area_triangle();
int main()
{
	int arr[20],i,a,k,rra[20],smn,z,zz,f,factorial;
	system("clear");
	printf("Enter the number to calculate factorial value :");
	scanf("%d",&f);
	fact(f,&factorial);
	printf("\nFactorial of %d = %d",f,factorial);
    sine();
    rakjindal();
    array_transpose();
	printf("\nEnter the no of element [MAX=20]:");
	scanf("%d",&a);
	for(i=0;i<a;i++)
	{
        printf("%d. Enter the number:",i+1);
        scanf("%d",&arr[i]);
	}
	check_equal(arr,a);
	check_number_times(arr,a);
	smallest_max_no(arr,a,&z,&zz);
	even_odd_positive_negative_counts(arr,a);
	k=1;
	for(i=0;i<a;i++)
	{
        
		rra[a-k]=arr[i];
		k++;
	}
	printf("\n\nInterchange odd and even element.\n");
	for(i=0;i<a;i++)
	{
		if(i+1<a)
		{

			k=arr[i];
			arr[i]=arr[i+1];
			arr[i+1]=k;
			printf("\n%d",arr[i]);
			printf("\n%d",arr[i+1]);
			i=i+1;
	    }
	    else
	    {
             printf("\n%d",arr[i]);
	    }
	}
	printf("\n\ncopy array in reverse order.\n");
	
	for(i=0;i<a;i++)
	{
		printf("\n%d",rra[i]);
	}
	printf("\nSmallest Number: %d\n",z);
	printf("Maximum Number: %d\n",zz);
	star();
	xyz();
    area_triangle();
}




int smallest_max_no(int abc[],int k,int *p,int *q)
{
	int i,l=abc[0],j=abc[0];
	for(i=1;i<k;i++)
	{
         if(l>abc[i])
         {
              l=abc[i];
         } 
         if(j<abc[i])
         {
         	j=abc[i];
         }
	}
	*p=l;
	*q=j;
}
int check_equal(int abc[],int k)
{
	printf("\n\n");
    int i,j;
    if(k%2==0)
    {
    	j=(k/2)-1;
    }
    else
    {
    	j=k/2;
    }
    for(i=0;i<=j;i++)
    {
    	if(abc[i]==abc[k-i-1])
    	{
    		printf("\narr[%d]=arr[%d]",i+1,k-i);
    	}
    	else
    	{
    		printf("\narr[%d]≠arr[%d]",i+1,k-i);
    	}
    }
}
int check_number_times(int arr[],int a)
{
     int i,k,p=0;
     printf("\nEnter the number for searching:");
     scanf("%d",&k);
     for(i=0;i<a;i++)
     {
     	if(k==arr[i])
     	{
            p++;
     	}
     }
     printf("\n%d occurs %d times.",k,p);
}
void star()
{
	int a,i,j,h;
    printf("\n\nEnter the number of rows for star pattern :");
    scanf("%d",&a);
    printf("\n");
    printf("Right Triangle Star pattern\n");
    for(i=0;i<a;i++)
    {
    	for(j=0;j<=i;j++)
    	{
    		printf(" ✪ ");
    	}
    	printf("\n");
    }
    printf("\n");
    printf("Mirrored Right Triangle Star Pattern\n");
    for(i=1;i<=a;i++)
    {
    	for(j=1;j<=(a-i)*3;j++)
    	{
    		printf(" ");
    	}
    	for(j=1;j<=i;j++)
    	{
    		printf(" ✪ ");
    	}
    	printf("\n");
    }
    printf("\n");
    printf("Inverted Right Triangle Star Pattern\n");
    for(i=1;i<=a;i++)
    {
    	for(j=1;j<=a-i+1;j++)
    	{
             printf(" ✪ ");
    	}
    	printf("\n");
    }
    printf("\n");
    printf("Inverted Mirrored Right Triangle Star Pattern\n");
    for(i=1;i<=a;i++)
    {
    	for(j=1;j<3*i;j++)
    	{
    		printf(" ");
    	}
    	for (j=1;j<=a-i+1;j++)
    	{
    	    printf(" ✪ ");
    	}
    	printf("\n");
    }
    printf("\n");
    printf("Square Star Pattern\n");
    for(i=1;i<=a;i++)
    {
        for(j=1;j<=a;j++)
        {
        	printf(" ✪ ");
        }
        printf("\n");
    }
    printf("\n");
    printf("Mirrored Rhombus Star Pattern\n");
    for(i=1;i<=a;i++)
    {
    	for(j=1;j<=a;j++)
    	{
    		printf(" ✪ ");
    	}
    	printf("\n");
    	for(j=1;j<=i;j++)
    	{
    		printf(" ");
    	}
    }
    printf("\n");
    printf("Hollow Right Triangle Star Pattern\n");
    for (i=1;i<=a;i++)
    {
    	if(i==a)
    	{
    		for(j=1;j<=i;j++)
    		{
    			printf(" ✪ ");
    		}
    	}
    	else
    	{
	    	for(j=1;j<=i;j++)
	    	{
	    		if(j==1||j==i)
	    		{
	                printf(" ✪ ");
	    		}
	    		else
	    		{
	    			printf("   ");
	    		}
	    	}
	    }
    	printf("\n");
    }
    printf("\n");
    printf("Hollow Mirrored Right Triangle Star Pattern\n");
    for(i=1;i<=a;i++)
    {
    	for(j=1;j<=a-i;j++)
    	{
    		printf("   ");
    	}
    	for(j=a-i+1;j<=a;j++)
    	{
    		if(j==a-i+1||j==a||i==a)
    		{
    			printf(" ✪ ");
    		}
    		else
    		{
    			printf("   ");
    		}
    	}
    	printf("\n");
    }
    printf("\n");
    printf("Pyramid Star Pattern\n");
    for(i=1;i<=a;i++)
    {
    	for(j=1;j<=a-i;j++)
    	{
    		printf("   ");
    	}
    	for(j=a-i+1;j<a+i;j++)
    	{
    		printf(" ✪ ");
    	}
    	printf("\n");
    }
    printf("\n");
    printf("Inverted Pyramid Star Pattern\n");
    for(i=1;i<=a;i++)
    {
    	for(j=1;j<i;j++)
    	{
           printf("   ");
    	}
    	for(j=1;j<=a-i+1;j++)
    	{
    		printf(" ✪ ");
    	}
    	for(j=1;j<=a-i;j++)
    	{
    		printf(" ✪ ");
    	}
    	printf("\n");
    }
    printf("\n");
    printf("Hosoya’s Triangle or  Fibonnaci triangle\n");
    

}
int fact(int a,int *ff)
{
	int i=1,k=1;
	for(i=1;i<=a;i++)
	{
		k=k*i;
	}
	*ff=k;
}
void sine()
{
	int x,y,a,i,b=1,l=1,j=1,count=1;
	float k,final=0;
	printf("\nEnter the value of x [sin(x)=x-(x^3/3!)+(x^5/5!)-(x^7/7!)+...] :");
	scanf("%d",&x);
	printf("Enter the terms in sin(x):");
	scanf("%d",&y);
	for(a=1;a<=y;a++)
	{
       for(i=1;i<=b;i++)
       {
           l=l*x;//x^b
           j=j*i;//b!
           k=(float)l/j;
       }
       b=b+2;l=1;j=1;
       if(count%2==1)
       {
            final=final+k;
       }
       else
       {
            final=final-k;
       }
       count++;
	}
	printf("\nsin(x)=%f\n",final);
}
int even_odd_positive_negative_counts(int abc[],int a)
{
	int b,e=0,o=0,p=0,n=0,zero=0;
	for(b=0;b<a;b++)
	{
		if(abc[b]%2==0)
		{
			e++;
		}
		else
		{
            o++;
		}
		if(abc[b]>0)
		{
			p++;
		}
		else if(abc[b]<0)
		{
			n++;
		}
		else
		{
			zero++;
		}
	}
	printf("\n\nIn array there are %d even numbers, %d odd numbers, %d positive numbers, %d negative numbers, %d zero.",e,o,p,n,zero);
}

void xyz()
{
	int a,b,c=0,d=1,x,z,y,temp,abc;
	printf("\nEnter the number for Fibonacci numbers:");
	scanf("%d",&a);
	printf("0");
	for(b=1;b<=a;b++)
	{
        x=c+d;
        c=d;
        d=x;
        printf(" %d ",x);
	}
	printf("\n");
	for(y=1;y<=3;y++)
	{   
		printf("Enter the number [to check given no is Fibonacci number or not] :");
		c=0;d=1;x=0;temp=0;
		scanf("%d",&z);
		for(b=1;x<=z;b++)
		{
	        x=c+d;
	        c=d;
	        d=x;
	        if(x==z)
	        {
	        	printf("Yes\n");
	        	temp++;
	        	break;
	        }
	    }
	    if(temp==0)
	    {
	            printf("No\n");
	    }
    }
    printf("Enter the rows for Fibonacci Triangle:");
    scanf("%d",&a);
    c=0;d=1;x=0;
    for(abc=1;abc<=a;abc++)
    {
    	for(b=1;b<=abc;b++)
	   {
	        x=c+d;
	        c=d;
	        d=x;
	        printf(" %d ",x);
	   }
	   printf("\n");
    }
}

void rakjindal()
{
   	int hcf,lcm,a,b;
    printf("Calculation of HCF :\n");
	printf("Enter the number :");
	scanf("%d",&a);
	printf("Enter the number:");
    scanf("%d",&b); 
    hcf=lcm_hcf(a,b);
    lcm=(a*b)/hcf;
    printf("\nHCF =%d\n",hcf);
    printf("LCM = %d\n",lcm);
}
int lcm_hcf(int a, int b)
	{
		int c;
	    if(a==b)
		{
			c=a;
		}
		else if(a>b){
			return lcm_hcf(a-b,b);
		}
	    else{
	        return lcm_hcf(a,b-a);
	    }
	    return c;
	}

int area_triangle()
{
	int a,b,c,s,area,k;
	printf("Enter the length of side(a) of triangle");
	scanf("%d",&a);
	printf("Enter the length of side(b) of triangle");
	scanf("%d",&b);
	printf("Enter the length of side(c) of triangle");
	scanf("%d",&c);
    s=(a+b+c)/2;
    k=s*(s-a)*(s-b)*(s-c);
    
}

int array_transpose()
{
    int arr[10][10],i,j,k=0,column,row,raa[10][10];
    printf("\nEnter the Number of rows in Matrix:");
    scanf("%d",&row);
    printf("\nEnter the Number of columns in Matrix:");
    scanf("%d",&column);
    printf("Enter the values of [%d×%d] Matrix:",row,column);
    for(i=0;i<row;i++)
    {
        printf("\nEnter the values for %dst row:\n",i+1);
        for(j=0;j<column;j++)
        {
            printf("\nEnter the value of %dst column :",j+1);
            scanf("%d",&arr[i][j]);
        }
    }
    printf("\n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<column;j++)
        {
            if(arr[i][j]>k)
            {
                k=arr[i][j];
            }
            printf(" ");
            printf("%2d",arr[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    printf("Maximum in [%d,%d] Matrix : %d",row,column,k);
    printf("\nTranpose of Matrix \n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<column;j++)
        {
            raa[j][i]=arr[i][j];
        }
        printf("\n");
    }
    for(i=0;i<column;i++)
    {
        for(j=0;j<row;j++)
        {
            printf(" ");
            printf("%d",raa[i][j]);
        }
        printf("\n");
    }
    if(row==1)
    {
        printf("\nIt is a Row Matrix.");
    }
    if(column==1)
    {
        printf("\nIt is a Column Matrix.");
    }
    if(row!=column)
    {
        printf("\nIt is a Rectangular Matrix.");
    }
    if(row==column)
    {
        printf("\nIt is a Square Matrix.");
    }
}
