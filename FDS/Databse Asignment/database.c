
#include<stdio.h>
#include<stdlib.h>
struct employe
{
    char empname[20];
    int empid;
    int empsal;
};

void insertdata(struct employe [],int );
void displaydata(struct employe [],int);
void searchdata(struct employe [],int);
void modifydata(struct employe [],int);
int main()
{
    int i,c;
    printf("\nEnter no of employee database you want to create\n");
    scanf("%d",&i);
    struct employe e[i];
    do{
        printf("Choose you want to \n1.insertdata\n2.displaydata\n3.searchdata\n4.Modifydata\n5.Deletedata\n6.Exit\n");
        scanf("%d",&c);
        switch(c)
    {
        case 1: insertdata(e,i);
                break;
        case 2: displaydata(e,i);
                break;
        case 3:    searchdata(e,i);
                break;
        case 4: modifydata(e,i);
                break;
        case 5: deletedata(e,i);
                break;
        case 6: exit(0);
    }
    }while("");
    return 0;
}
void insertdata (struct employe e[],int i)
{
    int j,k,flag;
    for(j=0;j<i;j++)
    {
        printf("\nEnter employ name,id,salary\n");
        scanf("%s",e[j].empname);
        up: scanf("%d",&e[j].empid);
        if(j>0)
        {
        for(k=(j-1);k>=0;k--)
        {
            if(e[j].empid==e[k].empid)
            {
                flag=1;

            }
            else
                flag=0;
        }
        if(flag==1)
            printf("Employ id already exist\n");
        goto up;
        }
        scanf("%d",&e[j].empsal);
    }
}
void displaydata (struct employe e[],int i)
{
    int j;
    for(j=0;j<i;j++)
    {
        printf("\nEmploy name,id,salary is\n");
        printf("%s\t",e[j].empname);
        printf("%d\t",e[j].empid);
        printf("%d\n",e[j].empsal);
    }
}
void searchdata(struct employe e[],int i)
{
    int j,search;
    printf("Enter id you want to search with\n");
    scanf("%d",&search);
        for(j=0;j<i;j++)
        {
            if(e[j].empid==search)
            {
                printf("Successfully found\n");
                printf("\nEmploy name   id    salary is\n");
                        printf("%s\t\t",e[j].empname);
                        printf("%d   ",e[j].empid);
                        printf("%d\n",e[j].empsal);
            }
        }
}
void modifydata(struct employe e[],int i)
{
    int j,search;
    printf("Enter id you want to modify with\n");
    scanf("%d",&search);
        for(j=0;j<i;j++)
        {
            if(e[j].empid==search)
            {
                        printf("\nEmploy name   id    salary is\n");
                        printf("%s\t\t",e[j].empname);
                        printf("%d   ",e[j].empid);
                        printf("%d\n",e[j].empsal);
                        printf("Enter new name,id , salary\n");
                        scanf("%s",e[j].empname);
                        scanf("%d",&e[j].empid);
                        scanf("%d",&e[j].empsal);
                        printf("Modified Employ name   id    salary is \n");
                        printf("%s\t\t",e[j].empname);
                        printf("%d   ",e[j].empid);
                        printf("%d\n\n\n",e[j].empsal);
            }
        }
}
void deletedata(struct employe e[],int i)
{
    int j,delete1;
    printf("Enter id you want to delete with\n");
    scanf("%d",&delete1);
        for(j=0;j<i;j++)
        {
            if(e[j].empid==delete1)
            {
                        printf("\nEmploy name   id    salary is\n");
                        printf("%s\t\t",e[j].empname);
                        printf("%d   ",e[j].empid);
                        printf("%d\n",e[j].empsal);
                        e[j].empname[0]='\0';
                        e[j].empid=0;
                        e[j].empsal=0;

                        printf("Succesfully deleted\n");
            }

        }
}