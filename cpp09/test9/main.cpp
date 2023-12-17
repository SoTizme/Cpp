// #include <iostream>
// #include <sstream>  
 
// void split(std::string line){
//     for (size_t i = 0; i < line.size(); i++){
//         size_t j = line.find('|');
//         line.erase(j, 1);
//         std::cout << line << std::endl;
//     }
// }
 

// // #include "date/date.h"
// #include <iostream>

// date::year_month_day
// lastDay(date::year_month_day ymd)
// {
//     return ymd.year()/ymd.month()/date::last;
// }

// int main()
// {
//     using namespace date;
//     std::cout << lastDay(2018_y/12/01) << '\n';  // 2018-12-31
// }
 
// // int main () {

// //   std::stringstream ss;

// //   ss << "100-200";

// //   int foo,bar;
// //   ss >> foo >> bar;

// //   std::cout << "foo: " << foo << '\n';
// //   std::cout << "bar: " << (bar*-1) << '\n';

// //   return 0;
// // }


#include<stdio.h>

// #include<conio.h>

int getFirstDay(int year,int month);

int getDayCode(int year);

void printCar(int year,int month);

//Declaration of Various Functions used

int main(){

    int i, year;
    char ch='y';

    while(ch=='y'){
        printf("Enter year of the calendar:"); //year input
        scanf("%d",&year);
        //print calendar for the input year

        for(i=1;i<=12;i++)
            printCar(year,i);

        printf("Continue? press y:");
        scanf("%s",&ch);
    }

//getch();

return 0;

}

//calculate the first day of week for current month

int getFirstDay(int year,int month)
{

    int fday=getDayCode(year);

    int num_days=0; //number of days of the year before the current month

    int dCode=getDayCode(year);

    switch(month){
        case 12: num_days+=30;
        case 11: num_days+=31;
        case 10: num_days+=30;
        case 9: num_days+=31;
        case 8: num_days+=31;
        case 7: num_days+=30;
        case 6: num_days+=31;
        case 5: num_days+=30;
        case 4: num_days+=31;
        case 3: num_days+=28;
        case 2: num_days+=31;
    }

    if(month==1)
        return(fday);

    else if((year%4==0) ||( (year%400==0) && month>2))
        return (num_days+1+dCode)%7 ; //adds one day to every leap year detected

    else
        return (num_days+dCode)%7; //any other year (non leap year)

}

//calculate the first day of the year

int getDayCode(int year)

{

int fday;

fday=(((year-1)*365+(year-1)/4-(year-1)/100+(year-1)/400)+1)%7;

return fday;

}

void printCar(int year, int month)

{

int fday_month=getFirstDay(year,month);

int code[7]={0,1,2,3,4,5,6};

char *Day[7]={"Sun","Mon","Tues","Wed","Thu","Fri","Sat"};

char

*Month[12]={"January","February","March","April","May","June","Junly","August","September","October","November","December"};

int num_days,i; //num_days contains no of days in a month i will control the indent before any month starts

if(month==1||month==3||month==5||month==7|| month==8|| month==10|| month==12)
    num_days=31;
else if(month==2)
{
    if((year%4==0) || (year%400==0))
        num_days=29;
    else
        num_days=28;
}
else
    num_days=30;

printf("%s\n..............\n",Month[month-1]);


printf("%s\t%s\t%s\t%s\t%s\t%s\t%s\n","Sun","Mon","Tues","Wed","Thu","Fri","Sat");

//output for arranging the Days row accordingly

for(i=1;i<=fday_month;i++){
    printf("\t","");

}

int d=1;

int con=0;

while(d<=num_days)
{
    printf("%d\t",d);

    if(fday_month>0){
        if(d==7-fday_month)
            printf("\n");con=d;
        if(d%(con+7)==0)
            printf("\n");con=d;

    }
    else if(d%7==0)
        printf("\n");
    d++;
}
printf("\n");
}