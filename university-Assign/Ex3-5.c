#include <stdio.h>
#include <stdlib.h>

//Parent Function
void init();

//Global Variables
char name[20];
float capital;
float interest;
int number_of_day;


//Manager Function
float balanceAmount(float capital, float interest_rate);
void accountManager();
float showBalance();

//Capital Function
int capitalInput();
int interestInput();
float calculatePerYear();

//output function
void outputFunction();

int main()
{
    init();
    return 0;
}

void init()
{
    accountManager();
    outputFunction();
}

//////// INPUT FUNCTION
void accountManager()
{ 
    //NAME
    printf("Enter your account name : ");
    scanf("%s", name);

    //CAPITAL
    printf("Enter your capital : ");
    scanf("%f", &capital);

    //RATE
    printf("Enter yearly interest rate : ");
    scanf("%f", &interest);

    //DAY
    printf("Enter the number of days : ");
    scanf("%d", &number_of_day);

}

/////// OUTPUT FUNCTION
void outputFunction()
{
    float balance = showBalance();
    float per_year_interest = calculatePerYear();

    printf("Account name : %s\n", name);
    printf("Balance amount : %.2f\n", balance);
    printf("Your interest per year is %.2f Baht\n", per_year_interest);

}

////////////CALCULATE INTEREST

float calculatePerYear()
{
    return capital * (interest / 100.0f) * number_of_day / 365.0f;
}


////////////////BALANCE FUNCTION

float balanceAmount(float capital, float interest_rate)
{
    return capital + calculatePerYear();
}

float showBalance()
{
    float balance = balanceAmount(capital, interest);

    return balance;
}