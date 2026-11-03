void changeAmount(float final_bill);

void changeAmount(float final_bill)

{
float amount=0;
printf("Enter Amount pay by customer : ");
scanf("%f", &amount);
float change = amount - final_bill ;
printf("\nChange= %.2f\n", change );
}
