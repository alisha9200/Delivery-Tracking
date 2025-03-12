#include <stdio.h> //Header files including

struct Delivery{  //Type Declaration
    int deliveryID;
    char customerName[100];
    char contactNo[15];
    char deliveryAddress[100];
    char deliveryStatus[50];
    char deliveryDate[20];
};

struct Delivery d1; //Global Variable

void acceptInput()
{
    printf("Enter the Delivery ID:\n");
    scanf("%d", &d1.deliveryID); 
    printf("Enter the Customer Name:\n");
    scanf("%s", &d1.customerName);
    printf("Enter the Contact Number:\n");
    scanf("%s", &d1.contactNo);
    printf("Enter the Delivery Address:\n");
    scanf("%s", &d1.deliveryAddress);
    printf("Enter the Delivery Status:\n");
    scanf("%s", &d1.deliveryStatus);
    printf("Enter the Date of Delivery:\n");
    scanf("%s", &d1.deliveryDate);
}

void DisplayOutput(){
    printf("Delivery ID:%d\n", d1.deliveryID);
    printf("Customer Name:%s\n", d1.customerName);
    printf("Contact Number:%s\n", d1.contactNo);
    printf("Delivery Address:%s\n", d1.deliveryAddress);
    printf("Delivery Status:%s\n", d1.deliveryStatus);
    printf("Delivery Date:%s\n", d1.deliveryDate);
}

int main(){
    acceptInput();
    DisplayOutput();
    return 0;

}
