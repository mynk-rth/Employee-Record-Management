#include<stdio.h>
typedef struct Employee
               {
               	int code;
               	char name[30];
               	float salary;	
			   }EMP;

void main()
{
	EMP E;                         
//	printf("%d, ",sizeof(E1));
    
    char ch;
    FILE *p;
    p = fopen("emp.db","r");       // Null
    if(p==NULL)
    {
    	p = fopen("emp.db","w");      // create new file and overwrite 
	}else
	{
		p = fopen("emp.db","a");
	}
    
    do
    {
	printf("Enter Code : ");
	scanf("%d",&E.code);
	
	printf("Enter Name : ");
	fflush(stdin);
	gets(E.name);
	
	printf("Enter Salary : ");
	scanf("%f",&E.salary);
	
	fwrite(&E,sizeof(E),1,p);                 // transfer E in file or p
	
	printf("\n\nAdd more Employee y/n ?\n>>>");       // next time overwrite in E 
	fflush(stdin);
	scanf("%c",&ch);
	
    }while(ch=='y' || ch=='Y');
    
    fclose(p);
    
    
    
    
    
    
    
    
    
    
    
}
