#include<stdio.h>
#include<stdlib.h>

void main()
{
	int ch;                               //choice
	char fake;
	do
	{
	system("cls");
	printf("Main menu \n");
	printf("1. New Employee\n2. Employee List\n3. Search Employee\n4. Edit Employee \n5. Delete Employee\n6. Exit");
    printf("\nEnter Your Choice : ");
    scanf("%d",&ch);
    system("cls");
    switch(ch)
    {
    	case 1:
    		system("InsertRecord.exe");
    		break;
    		
    	case 2:
    		system("DisplayRecord.exe");
    		break;
    		
    	case 3:
    		system("SearchRecord.exe");
    		break;
    		
    	case 4:
    		system("EditRecord.exe");
    		break;
    		
    	case 5:
    		system("DeleteRecord.exe");
    		break;
    		
    	case 6:
    		printf("Goodbye...");
    		break;
    		
    	default:
		    printf("Wrong option");	
	}
	printf("\n\n\t\tPress any key to continue...\n\t\t>>>");
	fflush(stdin);
	scanf("%c",&fake);
    }while(ch!=6);
}
















