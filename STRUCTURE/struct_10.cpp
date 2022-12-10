#include<stdio.h>
struct Bank{
    char name[20];
    int acc_no;
    int balance;
}c[100];
int less(struct Bank c[100],int n){
    int i;
    for(i=0;i<n;i++){
        if(c[i].balance<200){
            printf("name is %s,acc no %d,balance %d",c[i].name,c[i].acc_no,c[i].balance);
        }printf("\n");
    }
}
int increment(struct Bank c[100],int n){
    int i;
    for(i=0;i<n;i++){
        if(c[i].balance>1000){
            printf("name is %s,acc no %d,balance %d",c[i].name,c[i].acc_no,(c[i].balance+100));            
        }printf("\n");
    }
}

int main(){
    int i,n;
    printf("Enter the no. of customers");
    scanf("%d",&n);
    for(i=0;i<n;i++){
    printf("enter details");
    scanf("%s %d %d",c[i].name,&c[i].acc_no,&c[i].balance);
    }
    printf("details if the money is less than 200\n");
    less(c,n);
    printf("If balance more than 1000 balance incremented by 100");
    increment(c,n);
}