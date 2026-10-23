#include<stdio.h>

int main(void){
    int record = 0;
    int ID = 0;
    int quantity = 0;
    int id = 0;
    char name[50];
    double price = 0;
    
    printf("Enter the desired Record that you want to apply:\n");
    printf("1: Add items:\n");
    printf("2: Search Item By ID:\n");
    printf("3: Search Item By Name:\n");
    printf("4: Update Prices:\n");
    printf("5: Update Stock Quantity:\n");
    printf("6: Delete items:\n");
    scanf("%d", &record);
    
    switch(record){
        case 1:
            printf("Enter the name of the item is :");
            fgets(name,50,stdin);
            printf("The name of the item is :");
            puts(name);
            
            printf("Enter the ID number:");
            scanf("%d", &ID);
            
            printf("Enter the Unit price of the Item:");
            scanf("%lf", &price);
            
            printf("Enter the Quantity of the item:");
            scanf("%d", &quantity);
            
            break;
            
        case 2:
            printf("To look up the product , Enter ID:\n");
            scanf("%d", &id);
            
            if(ID == id){
                printf("Item Found\n");
                printf("The name of the product is %s\n", name);
                printf("The ID number is %d\n", id);
                printf("The Unit price of the item is %.2lf\n", price);
                printf("The quantity of item available is %d\n", quantity);
            }
            else{
                printf("Item not Found\n");
            }
            
            break;
            
    }
    return 0;
}
