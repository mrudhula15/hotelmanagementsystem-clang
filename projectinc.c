#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void get_availability();
void Features_of_room();
void Room_allocation();
void Show_customer_details();
void Room_deallocation();
void Restaurant();
void Billing();
struct hotel
{
int roomnumber;
char name[200];
int phonenumber[20];
char nationality[15];
int yearin;
int monthin;
int datein;
int outyear;
int outmonth;
int outdate;
int rent;
}*a;
int main()
{
int ch;
while(1)
{
printf("1. Get availability\n");
printf("2. Features of room\n");
printf("3. Room allocation\n");
printf("4. Show customer details\n");
printf("5. Room deallocation\n");
printf("6. Restaurant\n");
printf("7. Billing\n");
printf("8. exit\n");
printf("choose any number from above\n");
scanf("%d",&ch);
switch(ch)
{
case 1:get_availability();
break;
case 2:Features_of_room();
break;
case 3:Room_allocation();
break;
case 4:Show_customer_details();
break;
case 5:Room_deallocation();
break;
case 6:Restaurant();
break;
case 7:Billing();
break;
default:exit(0);
}
}
}
void get_availability()
{
printf("room\troomtype\tavailability\n");
printf("101\tdelux\tavailable\n");
printf("102\tA/Croom\tavailable\n");
printf("103\tnonA/C\tavailable\n");
printf("104\tgeneral\tavailable\n");
}
void Features_of_room()
{
int m;
printf("1.sp.delux\n");
printf("2.delux\n");
printf("3.general\n");
printf("4.couple\n");
printf("enter u r choice");
scanf("%d",&m);
switch(m)
{
case 1:printf("Features of sp.delux\n");
printf("a/c\n");
printf("t.v\n");
printf("cost:1000per/day\n");
break;
case 2:printf("Features of delux\n");
printf("a/c\n");
printf("no t.v\n");
printf("cost:5000per/day\n");
break;
case 3:printf("Features of general\n");
printf("non a/c\n");
printf("no t.v\n");
printf("cost:2000per/day\n");
break;
case 4:printf("Features of couple\n");
printf("a/c\n");
printf("t.v\n");
printf("extra beds\n");
printf("cost:20000\nper/day\n");
break;
default:exit(0);
}
}
void Room_allocation()
{
a=(struct hotel*)malloc(sizeof(struct hotel));
printf("enter the room number\n");
scanf("%d",&a->roomnumber);
printf("enter the name\n");
scanf("%s",&a->name);
printf("enter the phone number\n");
scanf("%d",&a->phonenumber);
printf("enter the nationality\n");
scanf("%s",&a->nationality);
printf("enter the year which u have entered\n");
scanf("%d",&a->yearin);
printf("enter the date which u have entered \n");
scanf("%d",&a->datein);
printf("enter the month which u have entered \n");
scanf("%d",&a->monthin);
printf("the room number:%d\n",a->roomnumber);
printf("name of customer:%s\n",a->name);
printf("phone number is:%d\n",a->phonenumber);
printf("nationality:%s\n",a->nationality);
printf("year:%d\n",a->yearin);
printf("date:%d\n",a->datein);
printf("month:%d\n",a->monthin);
}
void Show_customer_details()
{
printf("name:%s\n",a->name);
printf("room number:%d\n",a->roomnumber);
printf("nationality:%s\n",a->nationality);
printf("year:%d\n",a->yearin);
printf("date:%d\n",a->datein);
printf("month:%d\n",a->monthin);
}
void Room_deallocation()
{
printf("ROOM DEALLOCATION\n");
printf("enter the date which u want to leave\n");
scanf("%d",&a->outdate);
printf("enter the month which u want to leave\n");
scanf("%d",&a->outmonth);
printf("enter the year which u want to leave\n");
scanf("%d",&a->outyear);
printf("date:%d\tyear:%d\tmonth:%d\n",a->outdate,a->outyear,a->outmonth);
printf("the roomnumber:%d is deallocated and available to book for others\n",a->roomnumber);
}
void Restaurant()
{ int n;
printf("1.blackforest\n2.vanilla\n3.chocolate\n4.butterscotch\n5.richcoffee\n");
printf("select what u want");
scanf("%d",&n);
printf("sl.no\titeam name\t cost\n");
switch(n)
{
case 1:
printf("1\tblackforest\t395\n");
break;
case 2:
printf("2\tvanilla\t30\n");
break;
case 3:
printf("3\tchocolate\t50\n");
break;
case 4:
printf("4\tbutterscotch\t50\n");
break;
case 5:
printf("5\trichcoffee\t50\n");
break;
default:exit(0);
}
}
void Billing()
{
printf("enter the rent");
scanf("%d",&a->rent);
printf("the rent of the room is:%d\n",a->rent);
printf("THANKS FOR CHOOSING OUR HOTEL :) \n");
}


