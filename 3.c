#include <stdio.h>
struct employee
{
    char name[50];
    int id;
    float bs;
    int age;
    float gross;
};

int main(){
    printf("\nEnter number of employee : ");
    int n;
    scanf("%d",&n);
    struct employee S[n];
    for (int i = 0; i < n; i++)
    {
        printf("\nEnter the details of employee");
        printf("\nEnter name : ");
        scanf("%s",S[i].name);
        printf("\nEnter id : ");
        scanf("%d",&S[i].id);
        printf("\nEnter Base Salary : ");
        scanf("%f",&S[i].bs);
        printf("\nEnter age : ");
        scanf("%d",&S[i].age);    
    }
    for (int i = 0; i <n; i++)
    {
        S[i].gross=S[i].bs + S[i].bs*0.8 + S[i].bs*0.1;
    }
    
    
    for (int i = 0; i < n; i++)
    {
        printf("\nDisplaying information");
        printf("\nName:%s",S[i].name);
        printf("\n ID: %d",S[i].id);
        printf("\n Age: %d",S[i].age);
        printf("\n Base Salary: %f",S[i].bs);
        printf("\n Gross Salary: %f",S[i].gross);
    }
}

