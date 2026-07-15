#include <stdio.h>
#include <stdlib.h>

//Global Variables
char First_Name[67];
char Last_Name[67];
float GPA;

//credit
struct credit
{
    int Math_credits;
    int Eng_credits;
} credit;

//Grade
struct subjectGrade
{
    float Math_grade;
    float Eng_grade;
} grade;

//Funtion
void Init();

//child function
void accountManager();
void outputFunction();
float GpaCal();

int main()
{
    Init();
    return 0;
}

//-----------------------INIT FUNCTION------------------------
void Init()
{
    accountManager();
    outputFunction();
    
}

//------------------------INPUT FUNCTION-----------------------
void accountManager()
{
    printf("Enter first name : ");
    scanf("%s", First_Name);
    
    printf("Enter last name : ");
    scanf("%s", Last_Name);
    
    //Math
    printf("Mathematic : #credit #grade(0-4) : ");
    scanf("%d %f", &credit.Math_credits, &grade.Math_grade);
    
    //Eng
    printf("English : #credit #grade(0-4)   : ");
    scanf("%d %f", &credit.Eng_credits, &grade.Eng_grade);
    
}

//------------------------OUTPUT FUNCTION-----------------------
void outputFunction()
{
    GpaCal();
    printf("GPA of %s %s is %.2f", First_Name, Last_Name, GPA);
}

//------------------------GPA CAL FUNCTION-----------------------
float GpaCal()
{
    float Math_result = (credit.Math_credits * grade.Math_grade);
    float Eng_result = (credit.Eng_credits * grade.Eng_grade);
    
    int total_credit = (credit.Eng_credits + credit.Math_credits);

    GPA = (Math_result + Eng_result) / total_credit;

}