/*This Calculator is Developed by Shounak Sobahani*/


#include <bits/stdc++.h>
using namespace std;

void calculateGPA();
void calculateCGPA();

int main()
{
    int menuInput;
    cout<<"GPA & CGPA Calculator"<<endl;
    cout<<"MENU:"<<endl;
    cout<<"1. Calculate GPA (Grade Point Average)"<<endl;
    cout<<"2. Calculate CGPA (Cummulative Grade Point Average)"<<endl;
    cout<<"3. Exit Application"<<endl;

sub:
    cout<<"Enter your choice: ";
    cin>>menuInput;
    switch(menuInput)
    {
    case 1:
        calculateGPA();
        break;

    case 2:
        calculateCGPA();
        break;
    case 3:
        exit(EXIT_SUCCESS);
        break;
    default:
        cout<<"You have entered wrong input.Try again!\n"<<endl;
        goto sub;
        break;
    }
}
void calculateGPA()
{
    int subjectNumbers;
    cout<<" GPA Calculating "<<endl;
    cout<<" How many subject's points do you want to calculate? : ";
    cin>>subjectNumbers;

    float credit [subjectNumbers];
    float point [subjectNumbers];

    cout<<endl;
    for(int i=0; i<subjectNumbers; i++)
    {
        cout<<"Enter the credit for the subject "<<i+1<<": ";
        cin>>credit[i];
        cout<<endl;
        cout<<"Enter the point of the subject "<<i+1<<": ";
        cin>>point[i];
        cout<<endl;
    }

    float sum=0;
    float total;
    for(int j=0; j<subjectNumbers; j++)
    {
        total=credit[j]*point[j];
        sum=sum+total;
    }

    float totalCredit=0;
    for(int k=0; k<subjectNumbers; k++)
    {
        totalCredit=totalCredit+credit[k];
    }

    cout<<"\n\n\nTotal Points: "<<sum<<" . Total Credits: "<<totalCredit<<" .Total GPA: "<<sum/totalCredit<<" ."<<endl;


sub:
    int inmenu;
    cout<<"\n\n\n1. Calculate Again"<<endl;
    cout<<"2. Go Back to Main Menu"<<endl;
    cout<<"3. Exit This App \n\n"<<endl;
    cout<<"Your Input: "<<endl;
    cin>>inmenu;

    switch(inmenu)
    {
    case 1:
        calculateGPA();
        break;
    case 2:
        main();
        break;
    case 3:
        exit(EXIT_SUCCESS);

    default:
        cout<<"\n\nYou have Entered Wrong Input!Please Choose Again!"<<endl;
        goto sub;
    }
}

void calculateCGPA()
{
    int semesterCount;
    cout<<" CGPA Calculating "<<endl;
    cout<<"How many semester results do you want input? :";
    cin>>semesterCount;
    cout<<"\n\n"<<endl;
    float semesterResult[semesterCount];
    int i;

    for(i=0; i<semesterCount; i++)
    {
        cout<<" Enter Semester "<<i+1<<" Result(GPA): ";
        cin>>semesterResult[i];
        cout<<"\n"<<endl;
    }

    float semesterTotal=0;
    for(int j=0; j<semesterCount; j++)
    {
        semesterTotal=semesterTotal+semesterResult[j];
    }

    cout<<"******** Your CGPA is "<<semesterTotal/semesterCount<<" **********"<<endl;


sub:
    int inmenu;
    cout<<"\n\n\n1. Calculate Again"<<endl;
    cout<<"2. Go Back to Main Menu"<<endl;
    cout<<"3. Exit This App \n\n"<<endl;
    cout<<"Your Input: "<<endl;
    cin>>inmenu;

    switch(inmenu)
    {
    case 1:
        calculateCGPA();
        break;
    case 2:
        main();
        break;
    case 3:
        exit(EXIT_SUCCESS);

    default:
        cout<<"\n\nYou have Entered Wrong Input!Please Choose Again!"<<endl;
        goto sub;
    }

}
