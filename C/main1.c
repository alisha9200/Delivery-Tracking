#include <stdio.h> //Header files including

#define MAX 100  //MACRO
#define SIZE 10

struct Delivery{  //Type Declaration
    int deliveryID;
    char customerName[MAX];
    char contactNo[15];
    char deliveryAddress[MAX];
    char deliveryStatus[50];
    char deliveryDate[20];
};

//Global Variable
struct Delivery delivery[SIZE];


void acceptInput()
{
    for(int i = 0; i < SIZE-1; i++){
        printf("Enter the Delivery ID:\n");
        scanf("%d", &delivery[i].deliveryID); 
        printf("Enter the Customer Name:\n");
        scanf("%s", &delivery[i].customerName);
        printf("Enter the Contact Number:\n");
        scanf("%s", &delivery[i].contactNo);
        printf("Enter the Delivery Address:\n");
        scanf("%s", &delivery[i].deliveryAddress);
        printf("Enter the Delivery Status:\n");
        scanf("%s", &delivery[i].deliveryStatus);
        printf("Enter the Date of Delivery:\n");
        scanf("%s", &delivery[i].deliveryDate);
    }
}

void DisplayOutput(){
    for(int i = 0; i <SIZE-1; i++){
        printf("Delivery ID:%d\n", delivery[i].deliveryID);
        printf("Customer Name:%s\n", delivery[i].customerName);
        printf("Contact Number:%s\n", delivery[i].contactNo);
        printf("Delivery Address:%s\n", delivery[i].deliveryAddress);
        printf("Delivery Status:%s\n", delivery[i].deliveryStatus);
        printf("Delivery Date:%s\n", delivery[i].deliveryDate);
    }
}

int main(){
    acceptInput();
    DisplayOutput();
    return 0;

}
