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


int main(){
    int choice;
    while (1) {
        printf("\nDelivery Tracking System\n");
        printf("=======================================\n");
        printf("1.Add New Delivery\n");
        printf("2. View All Deliveries\n");
        printf("3. Search Delivery by ID or Customer Name\n");
        printf("4.Update Delivery Status");
        //printf("5. Delete Student\n");
        printf("6. Exit\n");
        printf("Enter your choice (1-5): ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: acceptInput(); break;
            case 2: DisplayOutput(); break;
            case 3: show(2); break;
            case 4: update(1); break;
            //case 5: delete(1); break;
            case 6: return 0;
            default: printf("Invalid choice. Try again.\n");

        }
    }
    // acceptInput();
    // DisplayOutput();

    // int index;
    // printf("Enter index to show details: ");
    // scanf("%d", &index);
   
    // show(index);
    // update(index);

    // DisplayOutput();
    //return 0;

}
