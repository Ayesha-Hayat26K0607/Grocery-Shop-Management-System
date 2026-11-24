void changeAmount(float final_bill) {
    float amount = 0;
    printf("Enter Amount pay by customer : ");
    scanf("%f", &amount);
    float change = amount - final_bill;
    printf("\nChange = %.2f\n", change);
}


void showRemainingStock() {
    printf("\n---- Remaining Stock Status ----\n");
    for (int i = 0; i < 30; i++) {
        printf("%-30s : %d units remaining\n", all_product_names[i], stock[i]);
    }
    printf("--------------------------------\n");
}
