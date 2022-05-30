// C Programme to check username and password

#include<stdio.h>

int main(){
    
    int password;
    char username;
    printf("Enter the Username: ");
    scanf("%c",&username);
    printf("Enter the Password: ");
    scanf("%d", &password);

    if(username=='a'){
        if(password==12345)
            printf("Login Successful.");
        else
            printf("Incorrect Password, Try Again.");
    }
    else
        printf("Incorrect Username, Try Again.");
    return 0;
}