#include<stdio.h>

main()
{
	int x, h, i, k;
	printf("nhap do dai canh: ");
	scanf("%d", &x);
//----------------------------------------------------------		
    printf("\nhinh a:\n");
	for(h=1; h<=x; h++)
	{
		for(i=1; i<=h; i++) printf("* ");
		printf("\n");
	}
//----------------------------------------------------------	
	printf("\nhinh b\n");
	for(h=x; h>=1; h--)
	{
		for(i=h; i>=1; i--) printf("* ");
		printf("\n");
	}
//----------------------------------------------------------
	printf("\nhinh c\n");
	for(h=1; h<=x; h++)
	{
		for(i=1; i<=x; i++)
		{
			if(i>=h) printf("* ");
			else printf("  ");
		}
		printf("\n");
	}
//----------------------------------------------------------
	printf("\nhinh d\n");
	for(h=1; h<=x; h++)
	{
		for(i=1; i<=x; i++)
		{
			if(i+h>=x+1) printf("* ");
			else printf("  ");
		}
		printf("\n");
	}
//----------------------------------------------------------	
	printf("\nhinh e\n");
	for(h=1; h<=x; h++)
	{
		for(i=1; i<=x; i++)
		{
			if(h==1 || i==1 || h==x || i==x) printf("* ");
			else printf("  ");
		}
		printf("\n");
	}
//----------------------------------------------------------	
	printf("\nhinh f\n");
	for(h=x; h>=1; h--)
	{
		if(h==x || h==1)
		{
			for(i=1; i<=x; i++) printf("* ");
			printf("\n");
		}
		else
		{
			for(k=x-h; k>=1; k--) printf("  ");
		    for(i=1; i<=h; i++)
		    {
			   if(i==1) printf("* ");
			   else printf("  ");
		    }
		    printf("\n");
		}
	}
//----------------------------------------------------------	
	printf("\nhinh g\n");
	for(h=1; h<=x; h++)
	{
		if(h==x || h==1)
		{
			for(i=1; i<=x; i++) printf("* ");
			printf("\n");
		}
		else
		{
			for(k=x-h; k>=1; k--) printf("  ");
		    for(i=1; i<=h; i++)
		    {
			    if(i==1 ) printf("* ");
			    else printf("  ");
		    }
		    printf("\n");
		}
	}
//---------------------------------------------------------	
	printf("\nhinh h\n");
	int x2,h2;
	if(x%2==0) x2=x/2;
	else x2=x/2+1;
	for(h=x2; h>=1; h--)
	{
		for(k=x2-h; k>=1; k--) printf("  ");
		if(x%2==0) h2=h*2;
	    else h2=h*2-1;
		for(i=1; i<=h2; i++)
		{
			if(h==x2 || i==1 ||i==h2) printf("* ");
			else printf("  ");
		}
		printf("\n");
	}
	for(h=2; h<=x2; h++)
	{
		for(k=x2-h; k>=1; k--) printf("  ");
		if(x%2==0) h2=h*2;
	    else h2=h*2-1;
		for(i=1; i<=h2; i++)
		{
			if(h==x2 || i==1 ||i==h2) printf("* ");
			else printf("  ");
		}
		printf("\n");
	}
//----------------------------------------------------------	
	printf("\nhinh i\n");
	for(h=1; h<=x; h++)
	{
		for(i=1; i<=x; i++)
		{
			if(h==1 || h==x || i==1 || i==x || i+h==x+1 || i==h) printf("* ");
			else printf("  ");
		}
		printf("\n");
	}
//----------------------------------------------------------	
	printf("\nhinh j\n");
	for(h=x; h>=1; h--)
	{
		for(k=x-h; k>=1; k--) printf("  ");
		for(i=1; i<=h+h-1; i++) printf("* ");
		printf("\n");
	}
//----------------------------------------------------------	
	printf("\nhinh k\n");
	for(h=1; h<=x; h++)
	{
		for(k=x-h; k>=1; k--) printf("  ");
		for(i=1; i<=h+h-1; i++) printf("* ");
		printf("\n");
	}
//----------------------------------------------------------	
	printf("\nhinh l\n");
	for(h=1; h<=x; h++)
	{
		for(k=x-h; k>=1; k--) printf("  ");
		for(i=1; i<=h+h-1; i++) printf("* ");
		printf("\n");
	}
	for(h=x-1; h>=1; h--)
	{
		for(k=x-h; k>=1; k--) printf("  ");
		for(i=1; i<=h+h-1; i++) printf("* ");
		printf("\n");
	}
//----------------------------------------------------------
    printf("\nhinh m\n");
	for(h=1; h<=x; h++)
	{
		for(i=1; i<=h; i++) printf("%d ", i);
		printf("\n");
	}
//----------------------------------------------------------
    printf("\nhinh n\n");
    for(h=1; h<=x; h++)
	{
		for(i=1; i<=x; i++)
		{
			if(i>=h) printf("%d ", i-h+1);
			else printf("  ");
		}
		printf("\n");
	}
//----------------------------------------------------------
    printf("\nhinh o\n");
	for(h=1; h<=x; h++)
	{
		for(i=1; i<=x; i++)
		{
			if(i+h>=x+1) printf("%d ", x-i+1);
			else printf("  ");
		}
		printf("\n");
	}
//----------------------------------------------------------
    printf("\nhinh p\n");
	for(h=x; h>=1; h--)
	{
		for(i=h; i>=1; i--) printf("%d ", i);
		printf("\n");
	}
//----------------------------------------------------------
    printf("\nhinh q\n");
    int var;
	for(h=1; h<=x; h++)
	{
		for(k=x-h; k>=1; k--) printf("  ");
		for(i=1; i<=h+h-1; i++) 
		{
			if(i<=h)
			{
				var = i;
				printf("%2d", var);
			}
			else 
			{
				var--;
				printf("%2d", var);
			}
			
		}
		printf("\n");
	}
//----------------------------------------------------------
    printf("\nhinh r\n");
    for(h=x; h>=1; h--)
	{
		for(k=x-h; k>=1; k--) printf("  ");
		for(i=1; i<=h+h-1; i++) 
		{
			if(i<=h)
			{
				var = i;
				printf("%2d", var);
			}
			else 
			{
				var--;
				printf("%2d", var);
			}
		}
		printf("\n");
	}
//----------------------------------------------------------
    printf("\nhinh s\n");
    for(h=1; h<=x; h++)
	{
		for(i=1; i<=x*2; i++)
		{
			if(i>=h+1 && i<=x*2-h-1 || i==x*2) printf("  ");
			else 
			{
				if(i<=h) printf("%d ", i);
				else printf("%d ", x*2-i);
			}
		}
		printf("\n");
	}
//----------------------------------------------------------
    printf("\nhinh t\n");
    for(h=x; h>=1; h--)
	{
		for(i=1; i<=x*2; i++)
		{
			if(i>=h+1 && i<=x*2-h-1 || i==x*2) printf("  ");
			else 
			{
				if(i<=h) printf("%d ", i);
				else printf("%d ", x*2-i);
			}
		}
		printf("\n");
	}
//---------------------------------------------------------
    printf("\nhinh u\n");	
	for(h=1; h<=x; h++)
	{
		var=h-1;
		for(k=x-h; k>=1; k--) printf("  ");
		for(i=1; i<=h+h-1; i++) 
		{
			if(i<=h)
			{
				var++;
				if(var>=10) var=var-10;
				printf("%2d", var);
			}
			else
			{
				var--;
				if(var<=-1) var=var+10;
				printf("%2d", var);
			}
		}
		printf("\n");
	}
}
