#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<time.h>

struct {
	char first_name[20];
	char middle_name[20];
	char last_name[20];
	long long int number;

	}m,f,o;
	

int main()
{
	FILE *fp;
	fp=fopen("D:\\bank.txt","a+");
	if(fp==NULL)
	{
		printf("File cannot be created\n");
		exit(0);
	}
	int s1;
	printf("\n\n\t\t\tWELCOME");
	printf("\n\t\t\tTO");
	printf("\n\t\t\tAMBITION BANK");
	printf("\n\t\t\tBank");
	printf("\n\n");
	menu:
	printf("\n\tMain Menu");
	printf("\n\t1. Creating New Account");
	printf("\n\t2. Modifying the Account");
	printf("\n\t3. Deleting the Account");
	printf("\n\t4. Transaction");
	printf("\n\t5. Viewing the Account");
	printf("\n\t6. Exit");
        printf("\n\n");
	printf("\nChoose between [1-6] for further process\n");
	scanf("%d",&s1);
	if(s1==1)
	{
		int a,c,yea,mon,da;
		printf("\nEnter todays date in A.D\n");
		printf("\nEnter the year:");
		scanf("%d",&yea);
		printf("\nEnter the month:");
		scanf("%d",&mon);
		printf("\nEnter the day:");
		scanf("%d",&da);
		printf("\nDo you have an existing account\n");
		printf("\n\t1. yes");
		printf("\n\t2. No");
		printf("\nEnter 1 for yes and 2 for No\n");
		scanf("%d",&a);
		if(a==1||a==2)
		{
			int ww;
			printf("\nDo you want to create accouunt?\n");
			printf("\nEnter any key to continue\n");
			getch();
			int m;
			printf("Are you Nepalese?\n");
			printf("\n\t1. yes");
			printf("\n\t2. No");
			printf("\nEnter 1 for yes and 2 for No\n");
			scanf("%d",&m);
			switch(m)
			{
				case 1:
				fprintf(fp,"\n\nNepalese\nYes");
					break;
					case 2:
					fprintf(fp,"\n\nNepalese\nNo");
					printf("Sorry! not available for foreigneers\n");
					break;
					default:
					printf("error!!!");
			}
	if(m==1)
	{
	int n;
	fprintf(fp,"\n\nGender\n");
	printf("\nChoose the Gender\n");
	printf("\n\t1. Male");
	printf("\n\t2. Female");
	printf("\n\t3. Other");
	printf("\n\n");
	printf("Enter the number\n");
	scanf("%d",&n);
	switch(n)
	{
		case 1:
			fprintf(fp,"Male");
			break;
			case 2:
				fprintf(fp,"Female");
				break;
				case 3:
					fprintf(fp,"Other");
					break;
					default:
						printf("error!!!");
	}
	fflush(stdin);
	printf("Enter Your first name\n");
    gets(o.first_name);
    printf("Enter your middle name\n");
    gets(o.middle_name);
    printf("Enter your last name\n");
    gets(o.last_name);
    printf("\nEnter the phone number\n");
    scanf("%lld",&o.number);
    printf("\n\n");
   fflush(stdin);
    
    printf("\nEnter your father name\n");
    printf("Enter first name\n");
    gets(o.f.first_name);
    printf("Enter middle name\n");
    gets(o.f.middle_name);
    printf("Enter last name\n");
    gets(o.f.last_name);
     printf("\nEnter the phone number\n");
     scanf("%lld",&o.f.number);
    printf("\n\n");
   fflush(stdin);
    char first_name2[30],middle_name2[30],last_name2[30];
    printf("Enter your mother name\n");
	printf("Enter first name\n");
    gets(o.f.m.first_name);
    printf("Enter middle name\n");
    gets(o.f.m.middle_name);
    printf("Enter last name\n");
    gets(o.f.m.last_name);
     printf("\nEnter the phone number\n");
     scanf("%lld",&o.f.m.number);
    printf("\n\n");
    fflush(stdin);
    char current_address[50],permanent_address[50];
	   printf("\nEnter your current address\n");
    gets(current_address);
    printf("\nEnter your permanent address\n");
    gets(permanent_address);
    printf("\n");
    printf("\n\n");
    fflush(stdin);
    int q;
        fprintf(fp,"\n\nMarital status\n");
    printf("Marital status\n");
    printf("\n\t1. unmarried\n");
    printf("\n\t2. married\n");
    printf("\nchoose\n");
    scanf("%d",&q);
    switch(q)
    {
    	case 1:
    	fprintf(fp,"\nunmarried");
    		break;
    		case 2:
    			
    			fprintf(fp,"\nmarried");
    			printf("\nHow many children do you have?\n");
    			scanf("%d",&c);
    			fprintf(fp,"\nNumber of children =%d",c);
    			break;
    			deafult:
    				printf("wrong entered");
    }
    printf("\n\n");
    fflush(stdin);
    char email[50];
    printf("Enter your email\n");
    gets(email);
   printf("\n\n");
   fflush(stdin);
   int year,month,day;
   printf("\nEnter your date of birth(in A.D)");
   printf("\nEnter the year\n");
   scanf("%d",&year);
   printf("Enter the month\n");
   scanf("%d",&month);
   printf("Enter the day\n");
   scanf("%d",&day);
   printf("\n\n");
   fflush(stdin);
   long long int k;
   printf("Enter your citizenship number\n");
   scanf("%lld",&k);
   printf("\n\n");
   fflush(stdin);
   
   	int p;
	again:
	printf("\nEnter 1 to continue\n");
	scanf("%d",&p);
	if(p==1)
	{
	printf("\nTypes of account available\n");
	printf("\n\t1. Current deposit account");
	printf("\n\t2. Saving deposit account");
	printf("\n\t3. Fixed deposit account(for 1 year)");
	printf("\n\t4. Fixed deposit account(for 2 year)");
	printf("\n\t5. Fixed deposit account(for 3 year)");
	printf("\n\t6. Fixed deposit account(for 4 year)");
	printf("\n\n");
	int ch;
	fprintf(fp,"\n\nTypes of account");
	printf("\nChoose the type of account between [1-6] you want save your amount\n");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1:
			fprintf(fp,"\nCurrent Deposit account");
			printf("\nSuccessful!!! your money has been deposited as current  deposit account\n");
			break;
			case 2:
				fprintf(fp,"\nSaving account");
							printf("\nSuccessful!!! your money has been deposited as saving deposit account\n");
				break;
				case 3:
					fprintf(fp,"\nfixed deposit account(1 year)");
								printf("\nSuccessful!!! your money has been deposited as fixed deposit account(1 year)\n");

					break;
					case 4:
					fprintf(fp,"\nfixed deposit account(2 years)");
								printf("\nSuccessful!!! your money has been deposited as fixed deposit account(2 years)\n");

					break;
					case 5:
					fprintf(fp,"\nfixed deposit account(3 years)");
								printf("\nSuccessful!!! your money has been deposited as fixed deposit account(3 years)\n");

					break;
					case 6:
					fprintf(fp,"\nfixed deposit account(4 years)");
								printf("\nSuccessful!!! your money has been deposited as fixed deposit account(4 years)\n");

					break;
					default:
					 printf("\n\t\t\t\t\t\tWrong choose\t\t\t\t\t\a\a\a\a\a");
					goto again;
	}

	printf("\n\t\t\t\t\t\t\tt\t!!!Congratulations!!!\t\t\t\t\t\a");
	 printf("\nYour account has been created successfully");
	 fprintf(fp,"\nDate of account creation :%d\%d\%d",yea,mon,da);


 fprintf(fp,"\n\nFull name\n%s %s %s",o.first_name,o.middle_name,o.last_name);
    fprintf(fp,"\nphone number=%lld",o.number);
     fprintf(fp,"\n\nFather's name\n%s %s %s",o.f.first_name,o.f.middle_name,o.f.last_name);
    fprintf(fp,"\nphone number=%lld",o.f.number);
     fprintf(fp,"\n\nMother's name\n%s %s %s",o.f.m.first_name,o.f.m.middle_name,o.f.m.last_name);
 fprintf(fp,"\nphone number=%lld",o.f.m.number);
  fprintf(fp,"\n\nCurrent address\n%s",current_address);
   fprintf(fp,"\nPermanent address\n%s",permanent_address);
   fprintf(fp,"\n\nEmail\n%s",email);
   fprintf(fp,"\n\nDate of birth\n %d/%d/%d",year,month,day);
   fprintf(fp,"\n\nCitizenship Number\n%lld",k);
	 
	 fclose(fp);   
    int jk;  
	 printf("\n\nEnter 1 to go to the main menu and 0 to exit:\t");
        scanf("%d",&jk);
        if (jk==1)
            goto menu;
        else
            exit(0);
}
}
}
}

	else if(s1==2)
	{
long long int bank_account;
char pass[20],password[20]="SAUGAT";
printf("\nEnter the bank account\n");
scanf("%lld",&bank_account);
yy:
printf("Enter the password\n");
scanf("%s",pass);
if(strcmp(pass,password)!=0)
{
	goto yy;
}
else
{
	printf("\n\n\n\n\n\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2Password Match! \xB2\xB2\xB2\xB2\xB2\xB2\xB2\n\n\n\n\n\n\t\nLOADING");
	printf("\npress any key to continue\n");
	getch();
	FILE *fp;
	fp=fopen("D:\\bank.txt","r+");
	if(fp==NULL)
	{
		printf("File cannot be created\n");
		exit(0);
	}
	int a,c;
	fprintf(fp,"\n\nExisting account");
	printf("\nDo you have an existing account\n");
	printf("\n\t1. yes");
	printf("\n\t2. No");
	printf("\nEnter 1 for yes and 2 for No\n");
	scanf("%d",&a);
	if(a==1||a==2)
	{
	int m,jk;
	fprintf(fp,"\n\nExisting account");
	printf("Are you Nepalese?\n");
	printf("\n\t1. yes");
	printf("\n\t2. No");
	printf("\nEnter 1 for yes and 2 for No\n");
	scanf("%d",&m);
	switch(m)
	{
		case 1:
		fprintf(fp,"\n\nNepalese\nYes");
			break;
			case 2:
				
				fprintf(fp,"\n\nNepalese\nNo");
			printf("Sorry! not available for foreigneers\n");
	
    
		break;
			default:
					printf("error!!!");
	}
	if(m==1||m==2)
	{
	int n;
	fprintf(fp,"\n\nGender\n");
	printf("\nChoose the Gender\n");
	printf("\n\t1. Male");
	printf("\n\t2. Female");
	printf("\n\t3. Other");
	printf("\n\n");
	printf("Enter the number\n");
	scanf("%d",&n);
	switch(n)
	{
		case 1:
			fprintf(fp,"Male");
			break;
			case 2:
				fprintf(fp,"Female");
				break;
				case 3:
					fprintf(fp,"Other");
					break;
					default:
						printf("error!!!");
	}
	fflush(stdin);
	printf("Enter Your first name\n");
    gets(o.first_name);
    printf("Enter your middle name\n");
    gets(o.middle_name);
    printf("Enter your last name\n");
    gets(o.last_name);
    printf("\nEnter the phone number\n");
    scanf("%lld",&o.number);
    fprintf(fp,"\n\nFull name\n%s %s %s",o.first_name,o.middle_name,o.last_name);
    fprintf(fp,"\nphone number=%lld",o.number);
    printf("\n\n");
   fflush(stdin);
    
    printf("\nEnter your father name\n");
	printf("Enter first name\n");
    gets(o.f.first_name);
    printf("Enter middle name\n");
    gets(o.f.middle_name);
    printf("Enter last name\n");
    gets(o.f.last_name);
     printf("\nEnter the phone number\n");
     scanf("%lld",&o.f.number);
   fprintf(fp,"\n\nFather's name\n%s %s %s",o.f.first_name,o.f.middle_name,o.f.last_name);
    fprintf(fp,"\nphone number=%lld",o.f.number);
    printf("\n\n");
   fflush(stdin);
    char first_name2[30],middle_name2[30],last_name2[30];
    printf("Enter your mother name\n");
	printf("Enter first name\n");
    gets(o.f.m.first_name);
    printf("Enter middle name\n");
    gets(o.f.m.middle_name);
    printf("Enter last name\n");
    gets(o.f.m.last_name);
     printf("\nEnter the phone number\n");
     scanf("%lld",&o.f.m.number);
    fprintf(fp,"\n\nMother's name\n%s %s %s",o.f.m.first_name,o.f.m.middle_name,o.f.m.last_name);
 fprintf(fp,"\nphone number=%lld",o.f.m.number);
    printf("\n\n");
    fflush(stdin);
    char current_address[50],permanent_address[50];
	   printf("\nEnter your current address\n");
    gets(current_address);
    printf("\nEnter your permanent address\n");
    gets(permanent_address);
    printf("\n");
   fprintf(fp,"\n\nCurrent address\n%s",current_address);
   fprintf(fp,"\nPermanent address\n%s",permanent_address);
    printf("\n\n");
    fflush(stdin);
    int q;
        fprintf(fp,"\n\nMarital status\n");
    printf("Marital status\n");
    printf("\n\t1. unmarried\n");
    printf("\n\t2. married\n");
    printf("\nchoose\n");
    scanf("%d",&q);
    switch(q)
    {
    	case 1:
    	fprintf(fp,"\nunmarried");
    		break;
    		case 2:
    			
    			fprintf(fp,"\nmarried");
    			printf("\nHow many children do you have?\n");
    			scanf("%d",&c);
    			fprintf(fp,"\nNumber of children =%d",c);
    			break;
    			default:
    				printf("wrong entered");
    }
    printf("\n\n");
    fflush(stdin);
    char email[50];
    printf("Enter your email\n");
    gets(email);
    fprintf(fp,"\n\nEmail\n%s",email);
   printf("\n\n");
   fflush(stdin);
   int year,month,day;
   printf("\nEnter your date of birth(in A.D)");
   printf("\nEnter the year\n");
   scanf("%d",&year);
   printf("Enter the month\n");
   scanf("%d",&month);
   printf("Enter the day\n");
   scanf("%d",&day);
   fprintf(fp,"\n\nDate of birth\n %d/%d/%d",year,month,day);
   printf("\n\n");
   fflush(stdin);
   long long int k;
   printf("Enter your citizenship number\n");
   scanf("%lld",&k);
   fprintf(fp,"\n\nCitizenship Number\n%lld",k);
   printf("\n\n");
   fflush(stdin);
   
   	int p;
	again1:
	printf("\nEnter 1 to continue\n");
	scanf("%d",&p);
	if(p==1)
	{
	printf("\nTypes of account available\n");
	printf("\n\t1. Current deposit account");
	printf("\n\t2. Saving deposit account");
	printf("\n\t3. Fixed deposit account(for 1 year)");
		printf("\n\t4. Fixed deposit account(for 2 year)");
	printf("\n\t5. Fixed deposit account(for 3 year)");
	printf("\n\t6. Fixed deposit account(for 4 year)");
	printf("\n\n");
	int ch;
	fprintf(fp,"\n\nTypes of account");
	printf("\nChoose the type of account between [1-6] you want save your amount\n");
	scanf("%d",&ch);
switch(ch)
	{
		case 1:
			fprintf(fp,"\nCurrent Deposit account");
			printf("\nSuccessful!!! your money has been deposited as current  deposit account\n");
			break;
			case 2:
				fprintf(fp,"\nSaving account");
							printf("\nSuccessful!!! your money has been deposited as saving deposit account\n");
				break;
				case 3:
					fprintf(fp,"\nfixed deposit account(1 year)");
								printf("\nSuccessful!!! your money has been deposited as fixed deposit account(1 year)\n");

					break;
					case 4:
					fprintf(fp,"\nfixed deposit account(2 years)");
								printf("\nSuccessful!!! your money has been deposited as fixed deposit account(2 years)\n");

					break;
					case 5:
					fprintf(fp,"\nfixed deposit account(3 years)");
								printf("\nSuccessful!!! your money has been deposited as fixed deposit account(3 years)\n");

					break;
					case 6:
					fprintf(fp,"\nfixed deposit account(4 years)");
								printf("\nSuccessful!!! your money has been deposited as fixed deposit account(4 years)\n");

					break;
					default:
					 printf("\n\t\t\t\t\t\tWrong choose\t\t\t\t\t\a\a\a\a\a");
					goto again1;
	}

	//printf("\n\t\t\t\t\t\t\tt\t!!!Congratulations!!!\t\t\t\t\t\a");
	 printf("\nYour account has been created successfully");
	 
	 
	 fclose(fp);   
    int jk;  
	 printf("\n\nEnter 1 to go to the main menu and 0 to exit:\t");
        scanf("%d",&jk);
        if (jk==1)
            goto menu;
        else
            exit(0);
}
}
}
}
}


	else if(s1==3)
	{
		long long int bank_account;
char pass[20],password[20]="SAUGAT";
printf("\nenter the bank account\n");
scanf("%lld",&bank_account);
yy2:
printf("\nEnter the password\n");
scanf("%s",pass);
if(strcmp(pass,password)!=0)
{
	printf("\n!!!ERROR!!!");
	printf("\n\t\t\tWRONG PASSWORD!!!\a\a\a\a\a");
	goto yy2;
}
else
{
	int del;
	printf("\n\n\n\n\n\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2Password Match! \xB2\xB2\xB2\xB2\xB2\xB2\xB2\n\n\n\n\n\n\t\nLOADING");
	printf("\npress any key to continue\n");
	getch();
	printf("\nAre you sure to delete your account permanently?\n");
	printf("\n\t1. yes");
	printf("\n\t2. No");
	printf("\nChoose 1 for yes and 2 for no\n");
	scanf("%d",&del);
	if(del==1)
	{
	FILE *fp;
	fp=fopen("D:\\saugat\\bank.txt","w");
	if(fp==NULL)
	{
		printf("File cannot be created\n");
		exit(0);
	}
	printf("\n\nThe account is deleted.\a");
	
}
else
{
	printf("\nThe account is not deleted");
	
}
}	
int jk;  
	 printf("\n\nEnter 1 to go to the main menu and 0 to exit:\t");
        scanf("%d",&jk);
        if (jk==1)
            goto menu;
        else
            exit(0);
	}
	
	
	
	else if(s1==4)
	{
			FILE *fp;
	fp=fopen("D:\\bank.txt","r+");
	if(fp==NULL)
	{
		printf("File cannot be created\n");
		exit(0);
	}
	
		int yea,mon,da;
		printf("\nEnter todays date in A.D\n");
		printf("\nEnter the year:");
		scanf("%d",&yea);
		printf("\nEnter the month:");
			scanf("%d",&mon);
				printf("\nEnter the day:");
			scanf("%d",&da);
	int trans,press;
	double bank_account,deposit_amount,balance,withdraw_amount;
char pass[20],password[20]="SAUGAT";
printf("\nenter the bank account\n");
scanf("%lf",&bank_account);
yy3:
printf("\nEnter the password\n");
scanf("%s",pass);
if(strcmp(pass,password)!=0)
{
	printf("\n!!!ERROR!!!");
	printf("\n\t\t\tWRONG PASSWORD!!!\a\a\a\a\a");
	goto yy3;
}
	else
	{
			printf("\n\n\n\n\n\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2Password Match! \xB2\xB2\xB2\xB2\xB2\xB2\xB2\n\n\n\n\n\n\t\nLOADING......");
	printf("\npress any key to continue\n");
	getch();
	}
	transaction_again:
printf("\nWhat do you want to do ?\n");
printf("\n\t1. Deposit");
printf("\n\t2. Withddraw");
printf("\n\t3. View the amount\n");
scanf("%d",&trans);
if(trans==1)
{
	printf("\n\t\tDeposit");
	printf("\nEnter the amount you want to deposit:\t");
	scanf("%lf",&deposit_amount);
	balance+=deposit_amount;
	printf("\n\t\tDate:%d/%d/%d",yea,mon,da);
	printf("\nAmount deposited= %lf",balance);
	printf("\n press 1 for transaction again or any key to exit\n");
	scanf("%d",&press);
	if(press==1)
	{
		goto transaction_again;
	}
	else
	{
		exit(0);
	}
}
else if(trans==2)
{
	printf("\n\t\tWithdraw");
	printf("\nEnter the amount you want:\t");
	scanf("%lf",&withdraw_amount);
	if(balance>withdraw_amount)
	{
		balance-=withdraw_amount;
			printf("\n\t\tDate:%d/%d/%d",yea,mon,da);
		printf("\n%lf is withdrawal",withdraw_amount);
			printf("\n press 1 for transaction again or any key to exit\n");
	scanf("%d",&press);
	if(press==1)
	{
		goto transaction_again;
	}
	else
	{
		exit(0);
	}
	}
else
{
printf("\nInsufficient balance\n");	
		printf("\n press 1 for transaction again or any key to exit\n");
	scanf("%d",&press);
	if(press==1)
	{
		goto transaction_again;
	}
	else
	{
		exit(0);
	}
}
}

else if(trans==3)
{
	printf("\nYour total balance is %lf",balance);
	
}	
fprintf(fp,"Total balance:%lf",balance);	
		printf("\n press 1 for transaction again or any key to main menu\n");
	scanf("%d",&press);
	if(press==1)
	{
		goto transaction_again;
	}
	else
	{
		goto menu;
	}
		fclose(fp);
	}
	
	
	
	else if(s1==5)
	{  
		long long int bank_account;
char pass[20],password[20]="SAUGAT";
char ch;
printf("\nEnter the bank account\n");
scanf("%lld",&bank_account);
yy1:
printf("Enter the password\n");
scanf("%s",pass);
if(strcmp(pass,password)!=0)
{
	goto yy1;
}
else
{
	printf("\n\n\n\n\n\t\t\xB2\xB2\xB2\xB2\xB2\xB2\xB2Password Match! \xB2\xB2\xB2\xB2\xB2\xB2\xB2\n\n\n\n\n\n\t\nLOADING");
		FILE *fp;
	fp=fopen("D:\\bank.txt","r");
	if(fp==NULL)
	{
		printf("File cannot be created\n");
		exit(0);
	}
	printf("\nThe details of bank account holder is\n");
     while ( (ch = fgetc(fp)) != EOF )
     {
     	printf("%c",ch);
     }
     int jk;  
	 printf("\n\nEnter 1 to go to the main menu and 0 to exit:\t");
        scanf("%d",&jk);
        if (jk==1)
            goto menu;
        else
            exit(0);
	getch();
}
fclose(fp);
	}

	else if(s1==6)
	{
		printf("This mini c project was developed by Saugat from Ambition college.");
		printf("\nEnter any key to exit\n");
		getch();
		exit(0);
	}

}
