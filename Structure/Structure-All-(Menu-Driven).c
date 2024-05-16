/*
  	Date--- 15/03/2024
  	Q.10) Create a structure called Employee to hold empid, empname , empemail and empsalry.
			write a menu driven program in c that implements the working of a Employee Using create a all function and implements the logic of a function.
				The menu options should be: 
					1.  Add Employee Details.
					2.  Display All Employee Details.
					3.  Search Employee Using:
							-id.
							-name.
							-email.
							-salary.
							-address.
					4.  Delete Employee Details Using:
							-id.
							-name.
							-email.
							-salary. 
							-address.
					5.  Update Employee Details Using:
							-id.
							-name.
							-email.
							-salary.
							-address.
					6.  Display Details count of the Employee in Company.
					7.  Display Details the employee in the ascending order of employee salary.
							-id.
							-name.
							-email.
							-salary.
							-address.
					8.  Display the employee details in highest salary.
					9.  Display the employee details in minimum salary and display records between salary 10000 to 30000.
					10. Add new employee record.
					11. Exit.
*/

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
struct emp
{
	int id, salary;
	char name[10], address[10]; 
};

// Display
void display(struct emp*);

// Search
void Sid(struct emp*);
void Sname(struct emp*);
void Ssalary(struct emp*);
void Saddress(struct emp*);

// Delete
void Did(struct emp*);
void Dname(struct emp*);
void Dsalary(struct emp*);
void Daddress(struct emp*);

// Update
void Uid(struct emp*);
void Uname(struct emp*);
void Usalary(struct emp*);
void Uaddress(struct emp*);

// Count record
void CountEmp(struct emp*);

// Accending order
void AccendingSalary(struct emp*);
void AccendingId(struct emp*);

// Highest salary
void HighestSalary(struct emp*);

// Minimum salary
void MinimumSalary(struct emp*);
void BetweenSalary(struct emp*);

// Add Employee record
void add(struct emp*);

int i, j, size; 
int main()
{
	struct emp* e;
	int choice, i;
	char ch;
	do
	{
		printf("\nCase 1- Add Employee Details");
		printf("\nCase 2- Display All Employee Details");
		printf("\nCase 3- Search Employee Using");
		printf("\nCase 4- Delete Employee Details Using");
		printf("\nCase 5- Update Employee Details Using");
		printf("\nCase 6- Display Details count of the Employee in Company");
		printf("\nCase 7- Display Details the employee in the ascending order Using");
		printf("\nCase 8- Display the employee details in highest salary");
		printf("\nCase 9- Display the employee details in minimum salary is 10000 to maximum salary is 60000");
		printf("\nCase 10- Add employee record");
		printf("\nCase 11- Exit");
		printf("\n\nEnter Choice: ");
		scanf("%d",&choice);	
			
		switch(choice)
		{
			case 1:
				printf("Enter the Size of record: ");
				scanf("%d",&size);
				e= (struct emp*)malloc(sizeof(struct emp)*size);
				for(i=0;i<size;i++)
				{
					printf("Enter the Id name and salary of %d employee\n",i+1);
					printf("Id: ");
					scanf("%d",&e[i].id);
					printf("Name: ");
					_flushall();
					gets(e[i].name);
					printf("Salary: ");
					scanf("%d",&e[i].salary);
					printf("Address: ");
					_flushall();
					gets(e[i].address);
				}
				break;	
				
			case 2:
				//Display All Employee Details.
				system("CLS");
				display(e);
				printf("\n");
				break;
				
			case 3:
				system("CLS");
				//Search Employee Using: 1)id 2)name 3)salary 4)address.
				do
				{
					printf("\nCase -1 Search Employee by id");
					printf("\nCase -2 Search Employee by name");
					printf("\nCase -3 Search Employee by salary");
					printf("\nCase -4 Search Employee by address");
					printf("\nEnter the Choice: ");
					scanf("%d",&choice);
					switch(choice)
					{
						case 1:
							//id
							display(e);
							Sid(e);
							break;
							
						case 2:
							display(e);
							Sname(e);
							//name
							break;
							
						case 3:
							display(e);
							Ssalary(e);
							//salary
							break;
							
						case 4:
							display(e);
							Saddress(e);
							//address
							break;
						default :
							printf("Enter the valid case:");
							break;
					}
					printf("If you want to continue say Y otherwise N: ");
					_flushall();
					scanf("%c",&ch);
				}
				while(ch=='y' || ch=='Y');
				break;
			
			case 4:
				system("CLS");
				//Delete Employee Using: 1)id 2)name 3)salary 4)address. 
				do
				{
					printf("\nCase -1 Delete Employee by id");
					printf("\nCase -2 Delete Employee by name");
					printf("\nCase -3 Delete Employee by salary");
					printf("\nCase -4 Delete Employee by address");
					printf("\nEnter the Choice: ");
					scanf("%d",&choice);
					switch(choice)
					{
						case 1:
							//id
							display(e);
							Did(e);
							break;
							
						case 2:
							//name
							display(e);
							Dname(e);
							break;
							
						case 3:
							display(e);
							Dsalary(e);
							break;
							
						case 4:
							//address
							display(e);
							Daddress(e);
							break;
						default :
							printf("Enter Valid Case");
							break;
					}
					printf("Do you want to continue enter Y otherwise enter N: ");
					_flushall();
					scanf("%c",&ch);
				}
				while(ch=='Y' || ch=='y');
				break;
			
			case 5:
				system("CLS");
				//UpadteEmployee Using: 1)id 2)name 3)salary 4)address. 
				do
				{
					printf("\nCase -1 Update Employee by id");
					printf("\nCase -2 Update Employee by name");
					printf("\nCase -3 Update Employee by salary");
					printf("\nCase -4 Update Employee by address");
					printf("\nEnter the Choice: ");
					scanf("%d",&choice);
					switch(choice)
					{
						case 1:
							//id
							display(e);
							Uid(e);
							break;
							
						case 2:
							//name
							display(e);
							Uname(e);
							break;
							
						case 3:
							//salary
							display(e);
							Usalary(e);
							break;
							
						case 4:
							//address
							display(e);
							Uaddress(e);
							break;
						default :
							printf("Enter Valid Case");
							break;
					}
					printf("Do you want to continue enter Y otherwise enter N: ");
					_flushall();
					scanf("%c",&ch);
				}
				while(ch=='Y' || ch=='y');
				break;
				break;
			
			case 6:
				// count employee
				system("CLS");
				display(e);
				CountEmp(e);
				break;
			
			case 7:
				system("CLS");
				// Accending order by salary-- 1)id 2)name 3)salary 4)address.
				do
				{
					printf("\nCase -1 Accending order by id");
					printf("\nCase -2 Accending order by name");
					printf("\nCase -3 UAccending order by salary");
					printf("\nCase -4 Accending order by address");
					printf("\nEnter the Choice: ");
					scanf("%d",&choice);
					switch(choice)
					{
						case 1:
							//id
							display(e);
							AccendingId(e);
							break;
							
						/*
						case 2:
							//name
							display(e);
							Uname(e);
							break;
						*/
							
						case 3:
							//salary
							display(e);
							AccendingSalary(e);
							break;
							
						/*
						case 4:
							//address
							display(e);
							Uaddress(e);
							break;
						*/
						default :
							printf("Enter Valid Case");
							break;
					}
					printf("Do you want to continue enter Y otherwise enter N: ");
					_flushall();
					scanf("%c",&ch);
				}
				while(ch=='Y' || ch=='y');
				break;
				break;
			
			case 8:
				// Maximum Salary record
				system("CLS");
				display(e);
				HighestSalary(e);
				break;
				
			case 9:
				// Minimum Salary record
				system("CLS");
				display(e);
				MinimumSalary(e);
				BetweenSalary(e);
				break;
				
			case 10:
				// Add New Employee
				system("CLS");
				display(e);
				add(e);
				break;
				
			case 11:
				// Exit and final display
				system("CLS");
				display(e);
				break;
				
			default:
				printf("Enter the Valid operation");
				break;		
		}
		printf("If you want to continue say Y otherwise N: ");
		_flushall();
		scanf("%c",&ch);
	}
	while(ch=='Y' || ch=='y');
 	return 0;
}

//Display record--
void display(struct emp *e)
{
	printf("\nDisplay all employee data\n");
	printf("\nID\t\tNAME\t\tSALARY\t\tADDRESS\n");
	for(i=0;i<size;i++)
	{
		printf("%d\t\t%s\t\t%d\t\t%s\n",e[i].id ,e[i].name ,e[i].salary,e[i].address);	
	}	
}

//Search employee-- 1)id 2)name 3)salary 4)address.
void Sid(struct emp *e)
{
	int SId, flag=0;
	printf("Enter the id to search: ");
	scanf("%d",&SId);
	printf("\nID\t\tNAME\t\tSALARY\t\tADDRESS\n");
	for(i=0;i<size;i++)
	{
		if(e[i].id==SId)
		{
			flag=1;
			printf("%d\t\t%s\t\t%d\t\t%s\n",e[i].id ,e[i].name ,e[i].salary,e[i].address);
		}
	}
	if(flag==0)
	{
		printf("Id not Found");
	}
	printf("\n");
}

void Sname(struct emp *e)
{
	char SName[10];
	int flag=0;
	printf("Enter the Name to Search: ");
	_flushall();
	gets(SName);
	printf("\nID\t\tNAME\t\tSALARY\t\tADDRESS\n");
	for(i=0;i<size;i++)
	{
		if(strcmp(e[i].name,SName)==0)	
		{
			flag=1;
			printf("%d\t\t%s\t\t%d\t\t%s\n",e[i].id ,e[i].name ,e[i].salary,e[i].address);
		}	
	}
	if(flag==0)
	{
		printf("Name Not Found");	
	}	
	printf("\n");
}

void Ssalary(struct emp *e)
{
	int SSalary, flag=0;
	printf("Enter the Salary to Search: ");
	scanf("%d",&SSalary);
	printf("\nID\t\tNAME\t\tSALARY\t\tADDRESS\n");
	for(i=0;i<size;i++)
	{
		if(e[i].salary==SSalary)
		{
			flag=1;
			printf("%d\t\t%s\t\t%d\t\t%s\n",e[i].id ,e[i].name ,e[i].salary,e[i].address);
		}
	}
	if(flag==0)
	{
		printf("Salary is Not Found");
	}
	printf("\n");		
}

void Saddress(struct emp *e)
{
	int flag=0;
	char SAddress[10];
	printf("Enter the Adress: ");
	_flushall();
	gets(SAddress);
	printf("\nID\t\tNAME\t\tSALARY\t\tADDRESS\n");
	for(i=0;i<size;i++)
	{
		if(strcmp(e[i].address,SAddress)==0)
		{
			flag=1;
			printf("%d\t\t%s\t\t%d\t\t%s\n",e[i].id ,e[i].name ,e[i].salary,e[i].address);
		}
	}
	if(flag==0)
	{
		printf("Address Not Found");
	}
	printf("\n");
}

// Delete Employee Using: 1)id 2)name 3)salary 4)address.
void Did(struct emp *e)
{
	int DId, flag=0, count=0; 
	printf("Enter the id to delete record: ");
	scanf("%d",&DId);
	for(i=0;i<size;i++)
	{
		if(e[i].id==DId)
		{
			flag=1;
			count++;
			for(j=i;j<size;j++)
			{
				e[j]=e[j+1];
			}
			--i;
		}
	}
	if(flag==1)
	{
		size=size-count;
		printf("\n\nAfter delete Record is");
		printf("\nID\t\tNAME\t\tSALARY\t\tADDRESS\n");
		for(i=0;i<size;i++)
		{
			printf("%d\t\t%s\t\t%d\t\t%s\n",e[i].id ,e[i].name ,e[i].salary,e[i].address);
		}
	}
	else
	{
		printf("Id Not Found");
	}
	printf("\n");
}

void Dname(struct emp *e)
{
	char DName[10];
	int flag=0, count=0;
	printf("Enter the Name to delete record: ");
	_flushall();
	gets(DName);
	for(i=0;i<size;i++)
	{
		if(strcmp(e[i].name,DName)==0)
		{
			flag=1;
			count++;
			for(j=i;j<size;j++)
			{
				e[j]=e[j+1];
			}
			i--;
		}
	}
	if(flag==1)
	{
		size=size-count;
		printf("\n\nAfter delete Record is");
		printf("\nID\t\tNAME\t\tSALARY\t\tADDRESS\n");
		for(i=0;i<size;i++)
		{
			printf("%d\t\t%s\t\t%d\t\t%s\n",e[i].id ,e[i].name ,e[i].salary,e[i].address);
		}
	}
	else
	{
		printf("Id Not Found");
	}
	printf("\n");	
}

void Dsalary(struct emp *e)
{
	int DSalary, flag=0, count=0;
	printf("Enter the Salary to delete record: ");
	scanf("%d",&DSalary);
	for(i=0;i<size;i++)
	{
		if(e[i].salary==DSalary)
		{
			flag=1;
			count++;
			for(j=i;j<size;j++)
			{
				e[j]=e[j+1];
			}
			--i;
		}
	}
	if(flag==1)
	{
		size=size-count;
		printf("\n\nAfter delete Record is");
		printf("\nID\t\tNAME\t\tSALARY\t\tADDRESS\n");
		for(i=0;i<size;i++)
		{
			printf("%d\t\t%s\t\t%d\t\t%s\n",e[i].id ,e[i].name ,e[i].salary,e[i].address);
		}
	}
	else
	{
		printf("Id Not Found");
	}
	printf("\n");
}

void Daddress(struct emp *e)
{
	int flag=0, count=0;
	char DAddress[10];
	printf("Enter the Address to delete the record: ");
	_flushall();
	gets(DAddress);
	for(i=0;i<size;i++)
	{
		if(strcmp(e[i].address,DAddress)==0)
		{
			flag=1;
			count++;
			for(j=i;j<size;j++)
			{
				e[j]=e[j+1];
			}
			i--;
		}
	}
	if(flag==1)
	{
		size=size-count;
		printf("\n\nAfter delete Record is");
		printf("\nID\t\tNAME\t\tSALARY\t\tADDRESS\n");
		for(i=0;i<size;i++)
		{
			printf("%d\t\t%s\t\t%d\t\t%s\n",e[i].id ,e[i].name ,e[i].salary,e[i].address);
		}
	}
	else
	{
		printf("Id Not Found");
	}
	printf("\n");	
}

//Update Employee Using: 1)id 2)name 3)salary 4)address.
void Uid(struct emp *e)
{
	int SID, UId, flag=0;
	printf("Enter the id to Search from record: ");
	scanf("%d",&SID);
	printf("Enter the id to replae: ");
	scanf("%d",&UId);
	for(i=0;i<size;i++)
	{
		if(e[i].id==SID)
		{
			flag=1;
			e[i].id=UId;
		}
	}
	if(flag==1)
	{
		printf("\n\nUpdated Record is");
		printf("\nID\t\tNAME\t\tSALARY\t\tADDRESS\n");
		for(i=0;i<size;i++)
		{
			printf("%d\t\t%s\t\t%d\t\t%s\n",e[i].id ,e[i].name ,e[i].salary,e[i].address);
		}	
	}
	else
	{
		printf("Id not found");
	}
	printf("\n");
}

void Uname(struct emp *e)
{
	char SNAME[10], UName[10];
	int flag=0;
	printf("Enter the Name to Search the: ");
	_flushall();
	gets(SNAME);
	printf("Enter the Name to Update: ");
	gets(UName);
	for(i=0;i<size;i++)
	{
		if(strcmp(e[i].name,SNAME)==0)
		{
			flag=1;
			strcpy(e[i].name,UName);	
		}	
	}
	if(flag==1)
	{
		printf("\n\nUpdated Record is");
		printf("\nID\t\tNAME\t\tSALARY\t\tADDRESS\n");
		for(i=0;i<size;i++)
		{
			printf("%d\t\t%s\t\t%d\t\t%s\n",e[i].id ,e[i].name ,e[i].salary,e[i].address);
		}	
	}
	else
	{
		printf("Name not found");
	}
	printf("\n");		
}

void Usalary(struct emp *e)
{
	int SSALARY, USalary, flag=0;
	printf("Enter the Salary to Search from record: ");
	scanf("%d",&SSALARY);
	printf("Enter the salary to replae: ");
	scanf("%d",&USalary);
	for(i=0;i<size;i++)
	{
		if(e[i].salary==SSALARY)
		{
			flag=1;
			e[i].salary=USalary;
		}
	}
	if(flag==1)
	{
		printf("\n\nUpdated Record is");
		printf("\nID\t\tNAME\t\tSALARY\t\tADDRESS\n");
		for(i=0;i<size;i++)
		{
			printf("%d\t\t%s\t\t%d\t\t%s\n",e[i].id ,e[i].name ,e[i].salary,e[i].address);
		}	
	}
	else
	{
		printf("Salary not found");
	}
	printf("\n");	
}

void Uaddress(struct emp *e)
{
	char SADDRESS[10], UAddress[10];
	int flag=0;
	printf("Enter the Address to Search the: ");
	_flushall();
	gets(SADDRESS);
	printf("Enter the Name to Update: ");
	gets(UAddress);
	for(i=0;i<size;i++)
	{
		if(strcmp(e[i].address,SADDRESS)==0)
		{
			flag=1;
			strcpy(e[i].address,UAddress);	
		}	
	}
	if(flag==1)
	{
		printf("\n\nUpdated Record is");
		printf("\nID\t\tNAME\t\tSALARY\t\tADDRESS\n");
		for(i=0;i<size;i++)
		{
			printf("%d\t\t%s\t\t%d\t\t%s\n",e[i].id ,e[i].name ,e[i].salary,e[i].address);
		}	
	}
	else
	{
		printf("Address not found");
	}
	printf("\n");
}

// Count Employee
void CountEmp(struct emp *e)
{
	int count=0;
	for(i=0;i<size;i++)
	{
		count++;
	}
	if(count>0)
	{
		printf("\nNumber of Employee: %d",count);
	}
	else
	{
		printf("\nNo data found");
	}
	printf("\n");
}

// Accending Order-- 1)id 2)name 3)salary 4)address 
void AccendingSalary(struct emp *e)
{
	struct emp temp;
	for(i=0;i<size;i++)
	{
		for(j=i+1;j<size;j++)
		{
			if(e[i].salary>e[j].salary)
			{
				temp=e[i];
				e[i]=e[j];
				e[j]=temp;
			}
		}
	}
	printf("\n\nSorted Record is");
	printf("\nID\t\tNAME\t\tSALARY\t\tADDRESS\n");
	for(i=0;i<size;i++)
	{
		printf("%d\t\t%s\t\t%d\t\t%s\n",e[i].id ,e[i].name ,e[i].salary,e[i].address);
	}
	printf("\n");
}

void AccendingId(struct emp *e)
{
	struct emp temp;
	for(i=0;i<size;i++)
	{
		for(j=i+1;j<size;j++)
		{
			if(e[i].id>e[j].id)	
			{
				temp=e[i];
				e[i]=e[j];
				e[j]=temp;
			}
		}	
	}
	printf("\n\nSorted Record is");
	printf("\nID\t\tNAME\t\tSALARY\t\tADDRESS\n");
	for(i=0;i<size;i++)
	{
		printf("%d\t\t%s\t\t%d\t\t%s\n",e[i].id ,e[i].name ,e[i].salary,e[i].address);
	}
	printf("\n");	
}

// Maximum Salary
void HighestSalary(struct emp *e)
{
	int max=1;
	for(i=0;i<size;i++)
	{
		if(e[i].salary>max)
		{
			max=e[i].salary;
		}
	}
	printf("\nMaximum salary is %d",max);
	printf("\n");
}

// Minimum Salary
void MinimumSalary(struct emp *e)
{
	int min=e[0].salary;
	for(i=0;i<size;i++)
	{
		if(e[i].salary<min)
		{
			min=e[i].salary;	
		}
	}
	printf("\nMinimum Salary is %d",min);
	printf("\n");
}

// Betwwen salary
void BetweenSalary(struct emp *e)
{
	int flag=0;
	printf("\nRecords of employee having salary between 10000 to 30000\n");
	printf("\nID\t\tNAME\t\tSALARY\t\tADDRESS\n");
	
	for(i=0;i<size;i++)
	{
		if(e[i].salary>=10000 && e[i].salary<=30000)
		{
			flag=1;
			printf("%d\t\t%s\t\t%d\t\t%s\n",e[i].id ,e[i].name ,e[i].salary,e[i].address);
		}
	}
	if(flag==0)
	{
		printf("No salary between 10000 to 30000");
	}
	printf("\n");
}

// Add employee detials
void add(struct emp *e)
{
	int Nsize;
	printf("Enter the size of employee to add: ");
	scanf("%d",&Nsize);
	Nsize=size+Nsize;
	printf("Now total number of employes are: %d\n",Nsize);
	e=(struct emp*)realloc(e,Nsize*sizeof(struct emp));
	for(i=size;i<Nsize;i++)
	{
		printf("Enter the Id name and salary of %d employee\n",i+1);
		printf("Id: ");
		scanf("%d",&e[i].id);
		printf("Name: ");
		_flushall();
		gets(e[i].name);
		printf("Salary: ");
		scanf("%d",&e[i].salary);
		printf("Address: ");
		_flushall();
		gets(e[i].address);
	}
	size=Nsize;
	printf("\n");
}
