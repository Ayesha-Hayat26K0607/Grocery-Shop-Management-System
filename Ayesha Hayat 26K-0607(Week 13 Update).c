#include <stdio.h>
#include <string.h>

void calculateandprintquantites(int rate, char name[], int stock_index);
float discount(int grandtotal, float *discount_rate_percent);
void changeAmount(float final_bill, float *amount_paid, float *change_due);
void showRemainingStock();
void saveReceipt(float discount_percent, float final_bill, float amount_paid, float change_due);
void appendSalesLog(float discount_percent, float final_bill);
void saveStockStatus();

// Global variables for items, quantities, subtotal, and stock
char item_name[100][50];
int quantities[100];
int subtotal[100];
int count = 0;
int grand_total = 0;

// Stock array initialized to 10 units for each of the 30 products
int stock[30] = {
    10, 10, 10, // Cold Drinks (Coke, Sprite, Monster)
    10, 10, 10, // Juices (Mango, Orange, Apple)
    10, 10, 10, // Waters (Mineral, Sparkling, Detox)
    10, 10, 10, // Ramen (Buldak, Indomie, Knorr)
    10, 10, 10, // Crisps (Wavy, Lays, Kurkure)
    10, 10, 10, // Sandwiches (Egg, Fajita, Veg)
    10, 10, 10, // Biscuits (Day Dream, Sooper, Zeera Plus)
    10, 10, 10, // Chocolates (Dairy Milk, Bounty, Kitkat)
    10, 10, 10, // Pancakes (Classic, Nutella, Oreo)
    10, 10, 10  // Brownies (Nutella, Double Choco, Fudge)
};

// Master list of all product names corresponding to the stock array indices
const char *all_product_names[30] = {
    "Coke", "Sprite", "Monster",
    "Mango Juice", "Orange Juice", "Apple Juice",
    "Mineral Water", "Sparkling Water", "Detox Water",
    "Buldak Ramen", "Indomie Ramen", "Knorr Ramen",
    "Wavy", "Lays", "Kurkure",
    "Egg Sandwiches", "Fajita Sandwiches", "Vegetable Sandwiches",
    "Day Dream", "Sooper", "Zeera plus",
    "Dairy Milk", "Bounty", "Kitkat",
    "Classic Pancake", "Nutella Pancake", "Oreo Pancake",
    "Nutella Brownie", "Double Chocolate Brownie", "Fudge Brownie"
};

int main()
{
    printf("===Welcome to FAST Tuck Shop===\n");
    int product, beverage_type, cold, juice, water, snack_type, ramen, crisps, sandwitches, biscuits, dessert_type, choco, cake, brownie;
    char choice;

    do {
        int rate = 0;
        printf("\nEnter the desired product : \n");
        printf("1-Beverages\n");
        printf("2-Snacks\n");
        printf("3-Dessert\n");
        scanf("%d", &product);

        switch (product)
        {
            case 1: // Beverages
                printf("Select the type of beverage : \n");
                printf("1-Cold Drink\n");
                printf("2-Juice\n");
                printf("3-Water\n");
                printf("Beverage type : ");
                scanf("%d", &beverage_type);

                switch (beverage_type)
                {
                    case 1: // Cold Drink
                        printf("Enter the type of Cold Drink : \n");
                        printf("1-Coke \n");
                        printf("2-Sprite \n");
                        printf("3-Monster\n");
                        printf("Cold Drink type : ");
                        scanf("%d", &cold);
                        switch (cold)
                        {
                            case 1:
                                rate = 100;
                                printf("The price is Rs %d\n", rate);
                                calculateandprintquantites(rate, "Coke", 0);
                                break;
                            case 2:
                                rate = 120;
                                printf("The price is Rs %d\n", rate);
                                calculateandprintquantites(rate, "Sprite", 1);
                                break;
                            case 3:
                                rate = 250;
                                printf("The price is Rs %d\n", rate);
                                calculateandprintquantites(rate, "Monster", 2);
                                break;
                            default:
                                printf("Invalid Input\n");
                                break;
                        }
                        break;

                    case 2: // Juice
                        printf("Enter the type of Juice : \n");
                        printf("1-Mango Juice \n");
                        printf("2-Orange Juice \n");
                        printf("3-Apple Juice\n");
                        printf("Juice type : ");
                        scanf("%d", &juice);
                        switch (juice)
                        {
                            case 1:
                                rate = 200;
                                printf("The price is Rs %d\n", rate);
                                calculateandprintquantites(rate, "Mango Juice", 3);
                                break;
                            case 2:
                                rate = 250;
                                printf("The price is Rs %d\n", rate);
                                calculateandprintquantites(rate, "Orange Juice", 4);
                                break;
                            case 3:
                                rate = 250;
                                printf("The price is Rs %d\n", rate);
                                calculateandprintquantites(rate, "Apple Juice", 5);
                                break;
                            default:
                                printf("Invalid Input\n");
                                break;
                        }
                        break;

                    case 3: // Water
                        printf("Enter the type of Water : \n");
                        printf("1-Mineral Water \n");
                        printf("2-Sparkling Water \n");
                        printf("3-Detox Water \n");
                        printf("Water type : ");
                        scanf("%d", &water);
                        switch (water)
                        {
                            case 1:
                                rate = 100;
                                printf("The price is Rs %d\n", rate);
                                calculateandprintquantites(rate, "Mineral Water", 6);
                                break;
                            case 2:
                                rate = 300;
                                printf("The price is Rs %d\n", rate);
                                calculateandprintquantites(rate, "Sparkling Water", 7);
                                break;
                            case 3:
                                rate = 200;
                                printf("The price is Rs %d\n", rate);
                                calculateandprintquantites(rate, "Detox Water", 8);
                                break;
                            default:
                                printf("Invalid Input\n");
                                break;
                        }
                        break;
                    default:
                        printf("Invalid Input\n");
                        break;
                }
                break;

            case 2: // Snacks
                printf("Select the type of snack : \n");
                printf("1-Ramen\n");
                printf("2-Crisps\n");
                printf("3-Sandwiches\n");
                printf("4-Biscuits\n");
                printf("Snacks type : ");
                scanf("%d", &snack_type);

                switch (snack_type)
                {
                    case 1: // Ramen
                        printf("Enter the type of Ramen : \n");
                        printf("1-Buldak Ramen \n");
                        printf("2-Indomie Noodles \n");
                        printf("3-Knorr \n");
                        printf("Ramen type : ");
                        scanf("%d", &ramen);
                        switch (ramen)
                        {
                            case 1:
                                rate = 500;
                                printf("The price is Rs %d\n", rate);
                                calculateandprintquantites(rate, "Buldak Ramen", 9);
                                break;
                            case 2:
                                rate = 120;
                                printf("The price is Rs %d\n", rate);
                                calculateandprintquantites(rate, "Indomie Ramen", 10);
                                break;
                            case 3:
                                rate = 100;
                                printf("The price is Rs %d\n", rate);
                                calculateandprintquantites(rate, "Knorr Ramen", 11);
                                break;
                            default:
                                printf("Invalid Input\n");
                                break;
                        }
                        break;

                    case 2: // Crisps
                        printf("Enter the type of Crisps : \n");
                        printf("1-Wavy \n");
                        printf("2-Lays \n");
                        printf("3-Kurkure\n");
                        printf("Crisps type : ");
                        scanf("%d", &crisps);
                        switch (crisps)
                        {
                            case 1:
                                rate = 100;
                                printf("The price is Rs %d\n", rate);
                                calculateandprintquantites(rate, "Wavy", 12);
                                break;
                            case 2:
                                rate = 100;
                                printf("The price is Rs %d\n", rate);
                                calculateandprintquantites(rate, "Lays", 13);
                                break;
                            case 3:
                                rate = 100;
                                printf("The price is Rs %d\n", rate);
                                calculateandprintquantites(rate, "Kurkure", 14);
                                break;
                            default:
                                printf("Invalid Input\n");
                                break;
                        }
                        break;

                    case 3: // Sandwiches
                        printf("Enter the type of sandwiches: \n");
                        printf("1-Egg sandwiches \n");
                        printf("2-Fajita sandwiches \n");
                        printf("3-Vegetable sandwiches \n");
                        printf("Sandwiches type : ");
                        scanf("%d", &sandwitches);
                        switch (sandwitches)
                        {
                            case 1:
                                rate = 150;
                                printf("The price is Rs %d\n", rate);
                                calculateandprintquantites(rate, "Egg Sandwiches", 15);
                                break;
                            case 2:
                                rate = 200;
                                printf("The price is Rs %d\n", rate);
                                calculateandprintquantites(rate, "Fajita Sandwiches", 16);
                                break;
                            case 3:
                                rate = 150;
                                printf("The price is Rs %d\n", rate);
                                calculateandprintquantites(rate, "Vegetable Sandwiches", 17);
                                break;
                            default:
                                printf("Invalid Input\n");
                                break;
                        }
                        break;

                    case 4: // Biscuits
                        printf("Enter the type of biscuits: \n");
                        printf("1-Daydream\n");
                        printf("2-Sooper \n");
                        printf("3-Zeera plus \n");
                        printf("Biscuits type : ");
                        scanf("%d", &biscuits);
                        switch (biscuits)
                        {
                            case 1:
                                rate = 50;
                                printf("The price is Rs %d\n", rate);
                                calculateandprintquantites(rate, "Day Dream", 18);
                                break;
                            case 2:
                                rate = 50;
                                printf("The price is Rs %d\n", rate);
                                calculateandprintquantites(rate, "Sooper", 19);
                                break;
                            case 3:
                                rate = 50;
                                printf("The price is Rs %d\n", rate);
                                calculateandprintquantites(rate, "Zeera plus", 20);
                                break;
                            default:
                                printf("Invalid Input\n");
                                break;
                        }
                        break;
                    default:
                        printf("Invalid Input\n");
                        break;
                }
                break;

            case 3: // Desserts
                printf("Select the type of desserts : \n");
                printf("1-Chocolates\n");
                printf("2-Pancakes\n");
                printf("3-Brownies\n");
                printf("Desserts type : ");
                scanf("%d", &dessert_type);

                switch (dessert_type)
                {
                    case 1: // Chocolates
                        printf("Enter the type of Chocolates : \n");
                        printf("1-Dairy milk \n");
                        printf("2-Bounty \n");
                        printf("3-Kitkat\n");
                        printf("Chocolates type : ");
                        scanf("%d", &choco);
                        switch (choco)
                        {
                            case 1:
                                rate = 100;
                                printf("The price is Rs %d\n", rate);
                                calculateandprintquantites(rate, "Dairy Milk", 21);
                                break;
                            case 2:
                                rate = 200;
                                printf("The price is Rs %d\n", rate);
                                calculateandprintquantites(rate, "Bounty", 22);
                                break;
                            case 3:
                                rate = 200;
                                printf("The price is Rs %d\n", rate);
                                calculateandprintquantites(rate, "Kitkat", 23);
                                break;
                            default:
                                printf("Invalid Input\n");
                                break;
                        }
                        break;

                    case 2: // Pancakes
                        printf("Enter the type of pancakes : \n");
                        printf("1-Classic \n");
                        printf("2-Nutella \n");
                        printf("3-Oreo\n");
                        printf("Pancakes type : ");
                        scanf("%d", &cake);
                        switch (cake)
                        {
                            case 1:
                                rate = 200;
                                printf("The price is Rs %d\n", rate);
                                calculateandprintquantites(rate, "Classic Pancake", 24);
                                break;
                            case 2:
                                rate = 350;
                                printf("The price is Rs %d\n", rate);
                                calculateandprintquantites(rate, "Nutella Pancake", 25);
                                break;
                            case 3:
                                rate = 300;
                                printf("The price is Rs %d\n", rate);
                                calculateandprintquantites(rate, "Oreo Pancake", 26);
                                break;
                            default:
                                printf("Invalid Input\n");
                                break;
                        }
                        break;

                    case 3: // Brownies
                        printf("Enter the type of Brownies : \n");
                        printf("1-Nutella \n");
                        printf("2-Double chocolate \n");
                        printf("3-Fudge \n");
                        printf("Brownie type : ");
                        scanf("%d", &brownie);
                        switch (brownie)
                        {
                            case 1:
                                rate = 150;
                                printf("The price is Rs %d\n", rate);
                                calculateandprintquantites(rate, "Nutella Brownie", 27);
                                break;
                            case 2:
                                rate = 200;
                                printf("The price is Rs %d\n", rate);
                                calculateandprintquantites(rate, "Double Chocolate Brownie", 28);
                                break;
                            case 3:
                                rate = 200;
                                printf("The price is Rs %d\n", rate);
                                calculateandprintquantites(rate, "Fudge Brownie", 29);
                                break;
                            default:
                                printf("Invalid Input\n");
                                break;
                        }
                        break;
                    default:
                        printf("Invalid Input\n");
                        break;
                }
                break;
            default:
                printf("Invalid Input\n");
                break;
        }

        printf("Ask customer if he want any other item :\n");
        printf("If yes select (Y) , if no select (N): ");
        scanf(" %c", &choice);

    } while (choice != 'n' && choice != 'N');

    int i;
    printf("\n----Final Bill---\n");
    for (i = 0; i < count; i++) {
        printf("Item Name : %s | Item Quantity : %d\n Sub Total : %-6d\n", item_name[i], quantities[i], subtotal[i]);
    }

    printf("The grand total is Rs %d\n", grand_total);

    float discount_percent = 0.0;
    float final = discount(grand_total, &discount_percent);

    float amount_paid = 0.0;
    float change_due = 0.0;
    changeAmount(final, &amount_paid, &change_due);

    saveReceipt(discount_percent, final, amount_paid, change_due);
    appendSalesLog(discount_percent, final);

    // Show and save remaining inventory status at the end
    showRemainingStock();
    saveStockStatus();

    printf("=====THANK YOU FOR SHOPPING AT FAST TUCK SHOP=====\n");
    return 0;
}

void calculateandprintquantites(int rate, char name[], int stock_index) {
    int total;
    int quantity;

    printf("-> Available Stock for %s: %d\n", name, stock[stock_index]);

    if (stock[stock_index] <= 0) {
        printf("Sorry! This item is currently out of stock.\n");
        return;
    }

    printf("Enter the amount of item : ");
    scanf("%d", &quantity);

    if (quantity > stock[stock_index]) {
        printf("Error: Only %d units available in stock! Order cannot be completed.\n", stock[stock_index]);
        return;
    }

    if (quantity <= 0) {
        printf("Invalid quantity entered.\n");
        return;
    }

    total = rate * quantity;
    printf("The total amount of the item is %d\n", total);

    strcpy(item_name[count], name);
    quantities[count] = quantity;
    subtotal[count] = total;
    count++;

    grand_total += total;
    stock[stock_index] -= quantity; // Deduct purchased items from stock
}

float discount(int grandtotal, float *discount_rate_percent) {
    float final_bill = 0;
    if (grandtotal <= 1000) {
        *discount_rate_percent = 5.0;
        final_bill = grandtotal * 0.95;
        printf("Discount 5 %% \n");
        printf("Total Bill is %.2f\n", final_bill);
    } else if (grandtotal <= 2000) {
        *discount_rate_percent = 10.0;
        final_bill = grandtotal * 0.90;
        printf("Discount 10 %% \n");
        printf("Total Bill is %.2f\n", final_bill);
    } else if (grandtotal <= 5000) {
        *discount_rate_percent = 15.0;
        final_bill = grandtotal * 0.85;
        printf("Discount 15 %% \n");
        printf("Total Bill is %.2f\n", final_bill);
    } else {
        *discount_rate_percent = 20.0;
        final_bill = grandtotal * 0.80;
        printf("Discount 20 %% \n");
        printf("Total Bill is %.2f\n", final_bill);
    }
    return final_bill;
}

void changeAmount(float final_bill, float *amount_paid, float *change_due) {
    float amount = 0;
    printf("Enter Amount pay by customer : ");
    scanf("%f", &amount);
    float change = amount - final_bill;
    printf("\nChange = %.2f\n", change);

    *amount_paid = amount;
    *change_due = change;
}

void saveReceipt(float discount_percent, float final_bill, float amount_paid, float change_due) {
    FILE *fp = fopen("receipt.txt", "w");
    if (fp == NULL) {
        printf("Error: Could not open receipt.txt for writing.\n");
        return;
    }

    fprintf(fp, "=== FAST TUCK SHOP - RECEIPT ===\n");
    int i;
    for (i = 0; i < count; i++) {
        fprintf(fp, "%d. %-28s x%-3d  Subtotal: Rs %d\n",
                i + 1, item_name[i], quantities[i], subtotal[i]);
    }
    fprintf(fp, "------------------------------------------\n");
    fprintf(fp, "Grand Total:   Rs %d\n", grand_total);
    fprintf(fp, "Discount:      %.0f%%\n", discount_percent);
    fprintf(fp, "Final Bill:    Rs %.2f\n", final_bill);
    fprintf(fp, "Amount Paid:   Rs %.2f\n", amount_paid);
    fprintf(fp, "Change:        Rs %.2f\n", change_due);
    fprintf(fp, "==========================================\n");

    fclose(fp);
    printf("Receipt saved to receipt.txt\n");
}

void appendSalesLog(float discount_percent, float final_bill) {
    FILE *fp = fopen("sales_log.txt", "a");
    if (fp == NULL) {
        printf("Error: Could not open sales_log.txt for appending.\n");
        return;
    }

    fprintf(fp, "Items: %d | Grand Total: Rs %d | Discount: %.0f%% | Final Bill: Rs %.2f\n",
            count, grand_total, discount_percent, final_bill);

    fclose(fp);
    printf("Transaction logged to sales_log.txt\n");
}

void showRemainingStock() {
    printf("\n---- Remaining Stock Status ----\n");
    int i;
    for (i = 0; i < 30; i++) {
        printf("%-30s : %d units remaining\n", all_product_names[i], stock[i]);
    }
    printf("--------------------------------\n");
}

void saveStockStatus() {
    FILE *fp = fopen("remaining_stock.txt", "w");
    if (fp == NULL) {
        printf("Error: Could not open remaining_stock.txt for writing.\n");
        return;
    }

    fprintf(fp, "---- Remaining Stock Status ----\n");
    int i;
    for (i = 0; i < 30; i++) {
        fprintf(fp, "%-30s : %d units remaining\n", all_product_names[i], stock[i]);
    }
    fprintf(fp, "--------------------------------\n");

    fclose(fp);
    printf("Remaining stock saved to remaining_stock.txt\n");
}
