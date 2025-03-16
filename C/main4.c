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
        printf("Enter the Delivery ID:\n", i+1);
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

void show(int index){
    printf("\n Delivery Details\n");
    printf("Delivery ID:%d\n", delivery[index].deliveryID);
    printf("Customer Name:%s\n", delivery[index].customerName);
    printf("Contact Number:%s\n", delivery[index].contactNo);
    printf("Delivery Address:%s\n", delivery[index].deliveryAddress);
    printf("Delivery Status:%s\n", delivery[index].deliveryStatus);
    printf("Delivery Date:%s\n", delivery[index].deliveryDate);
}

void update(int index){
    printf("\n Update Existing  %d Delivery Details\n", index+1);
    printf("Enter the Delivery ID:\n");
    scanf("%d", &delivery[index].deliveryID); 
    printf("Enter the Customer Name:\n");
    scanf("%s", &delivery[index].customerName);
    printf("Enter the Contact Number:\n");
    scanf("%s", &delivery[index].contactNo);
    printf("Enter the Delivery Address:\n");
    scanf("%s", &delivery[index].deliveryAddress);
    printf("Enter the Delivery Status:\n");
    scanf("%s", &delivery[index].deliveryStatus);
    printf("Enter the Date of Delivery:\n");
    scanf("%s", &delivery[index].deliveryDate);
}

void generate_report(int index){
    printf("Delivery Status:%s\n", delivery[index].deliveryStatus);
    printf("Delivery Date:%s\n", delivery[index].deliveryDate);
}

int main(){
    struct Delivery del1;
    int id=765;
    int *ptrId=&id;
    printf("Value of id: %d\n", id);
    printf("Value of *ptrId: %d\n", *ptrId);

    printf("Value of ptrId: %d\n", ptrId);
    printf("Address of id: %p\n", &id);

    char ch='C';

    char *ptrCh=&ch;
    printf("Value of ch: %c\n", ch);
    printf("Value of *ptrCh: %c\n", *ptrCh);
    printf("Value of ptrCh: %d\n", ptrCh);

    void * ptr=NULL;
    ptr=&id;  //implicit typcasting
    printf("\n Value of *ptr: %d\n", *(int *)ptr);

    ptr=&ch;  //implicit typcasting
    printf("\n Value of *ptr: %c\n", *(char *)ptr);

    int * ptrNewPointer=(int *)ptr;
    printf("\n Value of *ptrNewPointer: %c\n", *ptrNewPointer);

    //dynamic memory allocation
    int * ptrStockAvailable=NULL;
    ptrStockAvailable=(int *)malloc(sizeof(int));
    *ptrStockAvailable=200;

    int byteInt=sizeof(int);
    int byteFloat=sizeof(float);
    int byteChar=sizeof(char);
    int byteDeliveryStruct=sizeof(del1);

    printf("Size of int: %d\n", byteInt);
    printf("Size of float: %d\n", byteFloat);
    printf("Size of char: %d\n", byteChar);
    printf("Size of Struct Student del1: %d\n", byteDeliveryStruct);

    del1.deliveryID=111;
    strcpy(del1.customerName,"Reena");
    strcpy(del1.contactNo,"987657675");
    strcpy(del1.deliveryAddress,"Mumbai, Maharashtra, India");
    strcpy(del1.deliveryStatus,"UnDelivered");
    strcpy(del1.deliveryDate,"14-3-2025");

    struct Delivery * ptrDelivery=NULL;
    ptrDelivery=(struct Delivery *)malloc(sizeof(struct Delivery));
    ptrDelivery->deliveryID=112;
    strcpy(ptrDelivery->customerName,"Vedant");
    strcpy(ptrDelivery->contactNo,"11223344");
    strcpy(ptrDelivery->deliveryAddress,"Navi Mumbai, Maharashtra, India");
    strcpy(ptrDelivery->deliveryStatus,"Delivered");
    strcpy(ptrDelivery->deliveryDate,"15-3-2025");

    return 0;

}