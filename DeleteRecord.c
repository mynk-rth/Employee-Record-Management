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
            FILE *p,*t;
            int code;
            p=fopen("emp.db","r");
            if(p==NULL)
            {
                printf("File not found.....");
			}
			else
			{ t=fopen("temp.db","w");
			  printf("Enter Employee Id U ewant to Delete:");
			  scanf("%d",&code);
				
				 while(!feof(p))
				 {
				 	fread(&E,sizeof(E),1,p);
				 	if(feof(p)) break;
				 	if(code==E.code) 
				 	{
					  printf("Employee Record:\n");
				 	  printf("Id:%d\n",E.code);
				 	  printf("Name:%s\n",E.name);
				 	  printf("Salary:%.2f\n",E.salary);
				 	  printf("Record Deleted Successfully....");
				     }
				     else
				     {
				     	fwrite(&E,sizeof(E),1,t);
				     	
					 }
				     }
				 	
				 }
			  	
				fclose(p);
				fclose(t);
				remove("emp.db");
				rename("temp.db","emp.db");
				
				
				
			}
        
            

