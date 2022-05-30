// C Programme using structures within structures

#include<stdio.h>

struct address{
    char phone[15];
    char city[25];
    int pin;
};

struct emp{
    char name[25];
    struct address adr;
};
int main(){
    
    struct emp e={"Sahoo","89765432","Hyderabad",500015};
    printf("\nName:%s Phone:%s",e.name,e.adr.phone);
    printf("\nCity:%s Pin:%d",e.adr.city,e.adr.pin);
    return 0;
}