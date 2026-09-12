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
	FILE *p;
	float da,hra,pf,ns;
	p = fopen("emp.db","r");
	if(p==NULL)
	{
		printf("File not found...");
	}else
	{
		printf("\t\t\t\tEmployee's List\n");
		printf("\t\t\t-----------------------------\n");
		printf("\tCODE\tNAME\tSALARY\t\tDA\tHRA\tPF\tNS\n");
		printf("\t-------------------------------------------------------------------\n\n");
		 while(!feof(p))
		 {
		 	 fread(&E,sizeof(E),1,p);
		 	 if(feof(p))break;
		 	 da = E.salary*60/100;
		 	 hra = E.salary*16/100;
		 	 pf = E.salary*12/100;
		 	 ns = E.salary+da+hra-pf;

		 	 printf("\t%d\t%s\t%.2f\t%.0f\t%.0f\t%.0f\t%.2f\n",E.code,E.name,E.salary,da,hra,pf,ns);
		 }
	}
	fclose(p);
	
	
	
	
	
	
	
	
	
	
}			   
			   
			   
			   
			   
			   
			   
			   
			   
			   
			   
			   
			   
			   
			   
			   
			   
			   
			   
			   
			   
			   
			   
			   
			   
			   
			   
			   
			   
			   
			   
			   
			   
			   
			   
			   
			   
			   
			   
			   
			   
			   
