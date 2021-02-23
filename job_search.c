#include<conio.h>

#include<math.h>

#include<windows.h>

#include<string.h>

#include<stdio.h>

#include<accctrl.h>

#include<stdlib.h>

struct Node {

char code[99];

struct Node *next;

};

typedef struct Node node;

void display()

{

int i;

printf("\t\t\t\tWELCOME TO PROJECT SMART ONLINE JOB'S SECTOR\n");

printf("\t\t\t\t\tby BLACK DIAMOND\n\n\n\n");

for (i = 0; i < 500000000; i++ );

printf("\t\t\t\tPLEASE WAIT A MOMENT...........!!!!\n\n\n\n");

for (i = 0; i < 1000000000; i++);

display1();

}

void display1()

{

printf("\t\t\t\t ONLINE JOB'S SECTOR\n");

printf("\t\t\t\t ONLINE REGISTRATION\n");

printf("\t\t\t\t JOB'S REGISTRATION FROM\n");

char id[99];

char pass[88];

printf("\n Enter your mobile number    : ");

gets(id);

printf("\n Enter the verification code : ");

gets(pass);

printf(" \n SELECT JOB'S CATEGORY\n\n");

printf("   1. Accounts & Finance\n");

printf("   2. Bank/Insurance/Leasing\n");

printf("   3. Garments/Textile\n");

printf("   4. Electrician/Construction\n");

printf("   5. Agriculture/Fisheries\n");

printf("   6. Driving/Motor technician\n");

printf("   7. Architectures & Engineers\n");

printf("   8. Call center/Customer care\n");

printf("   9. It and Telecommunication\n");

printf("   10. Sales and Marketing \n");

printf("   11. Travel/Tourism/Hotel\n");

printf("   12. Others\n");

int n;

scanf("%d",&n);

category(n);

}

void category(int a)

{

if (a==1)

{

printf("\n\t\t\t1. Manager (Accounts)\n\t\t\t\t-Barsha Textile\t\t\t\t\n");

printf("\n\t\t\t2. Assistant General Manager / Deputy General Manager- Finance\n\t\t\t\t-Sajeeb Corporation\t\t\t\t\n");

printf("\n\t\t\t3. Executive (Accounts & Admin)\n\t\t\t\t-A N BD LTD\t\t\t\t\n");

printf("\n\t\t\t4. Accounting Officer\n\t\t\t\t-HTMS Limited\t\t\t\t\n");

}

else if (a==2)

{

printf("\n\t\t\t\t1. Officer - Deputy Principal Officer (Sales)\n\t\t\t\t\t-United Finance Ltd.\t\t\t\t\n");

printf("\n\t\t\t\t2. Service Executive\n\t\t\t\t\t-United Finance Ltd.\t\t\t\t\n");

printf("\n\t\t\t\t3. Executive Officer/ Senior Executive Officer\n\t\t\t\t\t-FBL Securities Limited.\t\t\t\t\n");

printf("\n\t\t\t\t4. Chief Financial Officer (CFO)\n\t\t\t\t\t-United Insurance Company Limited\t\t\t\t\n");

}

else if (a==3)

{

printf("\n\t\t\t\t1. Merchandiser - Sweater Division\n\t\t\t\t\t-Crony Group.\t\t\t\t\n");

printf("\n\t\t\t\t2. Asst. Manager/ Manager - (SCM)\n\t\t\t\t\t-Keya Knit Composite Ltd.\t\t\t\t\n");

printf("\n\t\t\t\t3. Executive II, Merchandising (EU)\n\t\t\t\t\t-M & J Group\t\t\t\t\n");

printf("\n\t\t\t\t4. Coordinator/ Senior Coordinator - Coordination\n\t\t\t\t\t-Intertek Bangladesh\t\t\t\t\n");

printf("\n\t\t\t\t5. Sample Executive - Washing Plant\n\t\t\t\t\t-Reputed Multinational Company\t\t\t\t\n");

}

else if (a==4)

{

printf("\n\t\t\t\t1. Mechanic\n\t\t\t\t\t-Tongwei Feed Mill Bangladesh Ltd.\t\t\t\t\n");

printf("\n\t\t\t\t2. Sr. Electrician/ Electrician (Maintenance)\n\t\t\t\t\t-Fakir Fashion Ltd.\t\t\t\t\n");

printf("\n\t\t\t\t3. Assistant Manager/ Manager\n\t\t\t\t\t-Genuine Auto Bricks Ltd.\t\t\t\t\n");

printf("\n\t\t\t\t4. RMA Technician\n\t\t\t\t\t-DIGI-MARK SOLUTION\t\t\t\t\n");

}

else if (a==5)

{

printf("\n\t\t\t\t1. Field Manager (FM)\n\t\t\t\t\t-Bridge Pharmaceuticals Ltd.\t\t\t\t\n");

printf("\n\t\t\t\t2. Farm Operator\n\t\t\t\t\t-Tamishna Group\t\t\t\t\n");

printf("\n\t\t\t\t3. Farm Manager\n\t\t\t\t\t-Anhad Agro\t\t\t\t\n");

printf("\n\t\t\t\t4. Regional Sales Manager - (Poultry, Cattle & Fish Feed)\n\t\t\t\t\t-Lucky Feed Ltd.\t\t\t\t\n");

printf("\n\t\t\t\t5. Store Officer (Agro)\n\t\t\t\t\t-Keya Agro Process Ltd\t\t\t\t\n");

}

else if (a==6)

{

printf("\n\t\t\t\t1. Transport Officer\n\t\t\t\t\t-ACS Textiles (Bangladesh) Ltd.\t\t\t\t\n");

printf("\n\t\t\t\t2. Driver\n\t\t\t\t\t-Success Accessories Ltd.\t\t\t\t\n");

printf("\n\t\t\t\t3. Driver (Factory)\n\t\t\t\t\t-EURO STAR Home Appliance Industries Ltd.\t\t\t\t\n");

}

else if (a==7)

{

printf("\n\t\t\t\t1. Trainee Engineer\n\t\t\t\t\t-PRAN-RFL Group\t\t\t\t\n");

printf("\n\t\t\t\t2. Service Engineer\n\t\t\t\t\t-Promixco Limited\t\t\t\t\n");

printf("\n\t\t\t\t3. Dredger Engineer\n\t\t\t\t\t-MIR AKHTER HOSSAIN LTD.\t\t\t\t\n");

printf("\n\t\t\t\t4. Site Engineer\n\t\t\t\t\t-Biswas Group Ltd.\t\t\t\t\n");

printf("\n\t\t\t\t5. Industrial Engineer\n\t\t\t\t\t-Tamishna Group\t\t\t\t\n");

}

else if (a==8)

{

printf("\n\t\t\t\t1. Customer Service Executive\n\t\t\t\t\t-Bilcl Company Limited.\t\t\t\t\n");

printf("\n\t\t\t\t2. Customer Service Representative\n\t\t\t\t\t-Digicon Technologies Ltd.\t\t\t\t\n");

printf("\n\t\t\t\t3. Executive, Customer Service\n\t\t\t\t\t-Expo Group, Bangladesh\t\t\t\t\n");

printf("\n\t\t\t\t4. Student Counselor\n\t\t\t\t\t-Maliha Group\t\t\t\t\n");

printf("\n\t\t\t\t5. International Call Center Executive\n\t\t\t\t\t-Tele Musketeers\t\t\t\t\n");

}

else if (a==9)

{

printf("\n\t\t\t\t1. Apps Developer\n\t\t\t\t\t-M & J Group\t\t\t\t\n");

printf("\n\t\t\t\t2. Data Center Technician\n\t\t\t\t\t-TigerIT Bangladesh Limited\t\t\t\t\n");

printf("\n\t\t\t\t3. Web Developer (PHP) Full Stack\n\t\t\t\t\t-Asian Global Ventures (Bangladesh) Company Ltd.\t\t\t\t\n");

printf("\n\t\t\t\t4. 3D Visualizer, Modeler & Animator\n\t\t\t\t\t-DOT 5 Private Limited\t\t\t\t\n");

printf("\n\t\t\t\t5. SOFTWARE MARKETING & SALES EXECUTIVE\n\t\t\t\t\t-JBRSOFT\t\t\t\t\n");

printf("\n\t\t\t\t6. Software Engineer, Java\n\t\t\t\t\t-Pridesys IT Limited\t\t\t\t\n");

printf("\n\t\t\t\t7. JS Stack Architect\n\t\t\t\t\t-BJIT Ltd\t\t\t\t\n");

}

else if (a==10)

{

printf("\n\t\t\t\t1. Sales Executive\n\t\t\t\t\t-Vital Security Services\t\t\t\t\n");

printf("\n\t\t\t\t2. Digital Marketing Executive\n\t\t\t\t\t-Western Electronics Industries\t\t\t\t\n");

printf("\n\t\t\t\t3. Head of NQA/ QMP (AGM level)-Levi's\n\t\t\t\t\t-Palmal Group of Industries\t\t\t\t\n");

printf("\n\t\t\t\t4. Fabric Tech and Marketing Manager\n\t\t\t\t\t-Huaren Linen Group\t\t\t\t\n");

printf("\n\t\t\t\t5. Area Sales Manager\n\t\t\t\t\t-German Cosmetics Ltd.\t\t\t\t\n");

}

else if (a==11)

{

printf("\n\t\t\t\t1. Visa Consultant\n\t\t\t\t\t-Dawat Holidays Ltd.\t\t\t\t\n");

printf("\n\t\t\t\t2. Ticketing Officer\n\t\t\t\t\t-Dawat Holidays Ltd.\t\t\t\t\n");

}

else if (a==12)

{

printf("\n\t\t\t\t1. Floor Manager\n\t\t\t\t\t-Dhali Super Shop ltd\t\t\t\t\n");

printf("\n\t\t\t\t2. Asst. Manager & SR/SO\n\t\t\t\t\t-Race Food Ltd\t\t\t\t\n");

printf("\n\t\t\t\t3. Teacher (English/Math/Music)\n\t\t\t\t\t-GENESIS School\t\t\t\t\n");

}

else

{

printf("\n \t\t Enter a valid number!\n");

}

operation(a);

}

void operation(int n)

{

int a;

if(n==1)

{

a =4;

}

else if(n==2)

{

a =6;

}

else if(n==3)

{

a =6;

}

else if(n==4)

{

a =6;

}

else if(n==5)

{

a =5;

}

else if(n==6)

{

a =5;

}

else if(n==7)

{

a =5;

}

else if(n==8)

{

a =5;

}

else if(n==9)

{

a =5;

}

else if(n==10)

{

a =6;

}

else if(n==11)

{

a =5;

}

else

{

a= 3;

}

node * head;

head = (node*)malloc(sizeof(node));

printf("\n  Enter the serial number: \n");

int i=0;

node *temp;

temp =head;

while(temp->next!=NULL)

{

if(i==a)

{

temp->next=NULL;

}

else

{

scanf("      %s",temp->code);

temp->next = (node*)malloc(sizeof(node));

temp = temp-> next;

i++;

}

}

free(temp);

registration(n);

}

void registration(int a)

{

   char name[20];

   char father_name[20];

   char address[30];

   int phone_number;

   char email[100];

   printf("\n       Name          : ");

   scanf("%s", &name);

   printf("\n       Father Name   : ");

   scanf("%s", &father_name);

   printf("\n       Address       : ");

   scanf("%s", &address);

   printf("\n       Phone Number  : ");

   scanf("%d", &phone_number);

   printf("\n       Email         : ");

   scanf("%s", &email);

}

int main()

{

    char ch;

int l,i;

display();

printf("\n\t\t\t\t\t\t Press Enter for Submit\n\n\n");

    ch = getch();

    if(ch=='Enter' ||ch=='Enter')

    {

        printf("\n\n\t\t\t\tYour Application is Completed\n");

printf("\t\t\t\tThank You\t\t\t\t\n");

    }

    printf("\n\n\t\t\t\tYour Application is Completed\n");

printf("\t\t\t\t\tThank You\t\t\t\t\n");

return 0;

}
