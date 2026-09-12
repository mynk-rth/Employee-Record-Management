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
            int code,f;
            p=fopen("emp.db","r");
            if(p==NULL)
            {
                printf("File not found.....");
			}
			else
			{ t=fopen("temp.db","w");
			  printf("Enter Employee code U want to Update:");
			  scanf("%d",&code);
				
				 while(!feof(p))
				 {
				 	fread(&E,sizeof(E),1,p);
				 	if(feof(p)) break;
				 	if(code==E.code) 
				 	{printf("Employee Record:\n");
				 	 printf("Code:%d\n",E.code);
				 	 printf("1]Name:%s\n",E.name);
				 	 printf("2]Salary:%.2f\n",E.salary);
				 	 printf("3]Exit\n");
				 	 printf("Enter Choice:");
				 	 fflush(stdin);
				 	 scanf("%d",&f);
				 	 switch(f)
				 	 {
				 	 	case 1:
				 	 		printf("Enter New Name:");
				 	 		fflush(stdin);
				 	 		gets(E.name);
				 	 		break;
				 	 	case 2:
				 	 		printf("Enter New Salary:");
				 	 		fflush(stdin);
				 	 		scanf("%f",&E.salary);
				 	 		break;	
				 	 	case 3:
						    printf("Exit");
						    break;
						default:
						    printf("Wrong Option");    
				 	 		
					  }
				 	 printf("Record updated Successfully....");
				    }
				     
				     
				     	fwrite(&E,sizeof(E),1,t);
				     	
					
				     }
				 	
				 }
			  	
				fclose(p);
				fclose(t);
				remove("emp.db");
				rename("temp.db","emp.db");
				
				
				
			}
