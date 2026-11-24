void appendSalesLog(float discount_percent, float final_bill);

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
