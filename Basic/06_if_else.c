#include <stdio.h>

int main()
{
    int age;
    printf("Enter Your Age : ");
    scanf("%d",&age);
    if(age < 0){
        printf("Age must be an positive integer.");
    }
    else if(age > 140){
        printf("please Enter correct age.");
    }else if(age>18){
        printf("You can vote");
    }
    else{
        printf("You can't vote");
    }

    return 0;
}