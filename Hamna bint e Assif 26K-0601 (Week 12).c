float discount(int grandtotal)
{
float final_bill=0;
if(grandtotal<=1000 )
{
final_bill = grandtotal*0.95;
printf("Discount 5 %% \n");
printf("Total Bill is %.2f\n", final_bill);
}
else if(grandtotal <=2000)
{
    final_bill = grandtotal*0.90;
printf("Discount 10 %% \n");
printf("Total Bill is %.2f\n", final_bill);
}
else if(grandtotal <=5000)
{
final_bill = grandtotal*0.85;
printf("Discount 15 %% \n");
printf("Total Bill is %.2f\n", final_bill);
}
else{
   final_bill = grandtotal*0.80;
printf("Discount 20 %% \n");
printf("Total Bill is %.2f\n", final_bill);
}
    return final_bill;
}
