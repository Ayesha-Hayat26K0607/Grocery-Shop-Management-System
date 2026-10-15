#include<stdio.h>
int main()
{
	int product,beverage_type,cold,juice,water,snack_type,ramen,crisps,sandwitches,biscuits,dessert_type,choco,cake,brownie;
	int rate=0;
	printf("===Welcome to FAST Tuck Shop===\n");
	printf("Enter the desired product : \n");
	printf("1-Beverages\n");
	printf("2-Snacks\n");
	printf("3-Dessert\n");
	scanf("%d", &product);    
	
	switch(product)
	{
		case 1: //Beverages
			printf("Select the type of beverage : \n");
			printf("1-Cold Drink\n");
			printf("2-Juice\n");
			printf("3-Water\n");
			printf("Beverage type : ");
			scanf("%d", &beverage_type);
				switch(beverage_type)
				{
					case 1: //Cold Drink
					printf("Enter the type of Cold Drink : \n");
					printf("1-Coke \n");
					printf("2-Sprite \n");
					printf("3-Monster\n");
					printf("Cold Drink type : ");
					scanf("%d", &cold);
					switch(rate)
					{
						case 1:
							rate=100;
							printf("The price is Rs %d",rate);
							break;
						case 2:
							rate=120;
							printf("The price is Rs %d",rate);
							break;
						case 3:
							rate=250;
							printf("The price is Rs %d",rate);
							break;
					}
					break;
					
					case 2: //Juice
					printf("Enter the type of Juice : \n");
					printf("1-Mango Juice \n");
					printf("2-Orange Juice \n");
					printf("3-Apple Juice\n");
					printf("Juice type : ");
					scanf("%d", &juice);
					switch(rate)
					{
						case 1:
							rate=200;
							printf("The price is Rs %d",rate);
							break;
						case 2:
							rate=250;
							printf("The price is Rs %d",rate);
							break;
						case 3:
							rate=250;
							printf("The price is Rs %d",rate);
							break;
					}
				  	break;
					
					case 3: //Water
					printf("Enter the type of Water : \n");
					printf("1-Mineral Water \n");
					printf("2-Sparkling Water \n");
					printf("3-Detox Water \n");
					printf("Water type : ");
					scanf("%d", &water);
					switch(rate)
					{
						case 1:
							rate=100;
							printf("The price is Rs %d",rate);
							break;
						case 2:
							rate=300;
							printf("The price is Rs %d",rate);
							break;
						case 3:
							rate=200;
							printf("The price is Rs %d",rate);
							break;
					}
					break;
			    }
		break;
