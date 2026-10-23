#include<stdio.h>
void calculateandprintquantites(int rate);

int main()
{
    printf("===Welcome to FAST Tuck Shop===\n");
    char choice;
    do{
    int product,beverage_type,cold,juice,water,snack_type,ramen,crisps,sandwitches,biscuits,dessert_type,choco,cake,brownie;
    int rate=0;
    
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
                    switch(cold)
                    {
                        case 1:
                            rate=100;
                            printf("The price is Rs %d\n",rate);
                            calculateandprintquantites(rate);
                            break;
                        case 2:
                            rate=120;
                            printf("The price is Rs %d\n",rate);
                            calculateandprintquantites(rate);
                            break;
                        case 3:
                            rate=250;
                            printf("The price is Rs %d\n",rate);
                            calculateandprintquantites(rate);
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
                    switch(juice)
                    {
                        case 1:
                            rate=200;
                            printf("The price is Rs %d\n",rate);
                            calculateandprintquantites(rate);
                            break;
                        case 2:
                            rate=250;
                            printf("The price is Rs %d\n",rate);
                            calculateandprintquantites(rate);
                            break;
                        case 3:
                            rate=250;
                            printf("The price is Rs %d\n",rate);
                            calculateandprintquantites(rate);
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
                    switch(water)
                    {
                        case 1:
                            rate=100;
                            printf("The price is Rs %d\n",rate);
                            calculateandprintquantites(rate);
                            break;
                        case 2:
                            rate=300;
                            printf("The price is Rs %d\n",rate);
                            calculateandprintquantites(rate);
                            break;
                        case 3:
                            rate=200;
                            printf("The price is Rs %d\n",rate);
                            calculateandprintquantites(rate);
                            break;
                    }
                    break;
            }
            break;
            
        case 2: //Snacks
            printf("Select the type of snack : \n");
            printf("1-Ramen\n");
            printf("2-Crisps\n");
            printf("3-Sandwitches\n");
            printf("4-Biscuits\n");
            printf("Snacks type : ");
            scanf("%d", &snack_type);
            
            switch(snack_type)
            {
                case 1: //Ramen
                    printf("Enter the type of Ramen : \n");
                    printf("1-Buldak Ramen \n");
                    printf("2-Indomie Noodles \n");
                    printf("3-Knorr \n");
                    printf("Ramen type : ");
                    scanf("%d", &ramen);
                    switch(ramen)
                    {
                        case 1:
                            rate=500;
                            printf("The price is Rs %d\n",rate);
                            calculateandprintquantites(rate);
                            break;
                        case 2:
                            rate=120;
                            printf("The price is Rs %d\n",rate);
                            calculateandprintquantites(rate);
                            break;
                        case 3:
                            rate=100;
                            printf("The price is Rs %d\n",rate);
                            calculateandprintquantites(rate);
                            break;
                    }
                    break;
                    
                case 2: //crisps
                    printf("Enter the type of Crisps : \n");
                    printf("1-Wavy \n");
                    printf("2-Lays \n");
                    printf("3-Kurkure\n");
                    printf("Crisps type : ");
                    scanf("%d", &crisps);
                    switch(crisps)
                    {
                        case 1:
                            rate=100;
                            printf("The price is Rs %d\n",rate);
                            calculateandprintquantites(rate);
                            break;
                        case 2:
                            rate=100;
                            printf("The price is Rs %d\n",rate);
                            calculateandprintquantites(rate);
                            break;
                        case 3:
                            rate=100;
                            printf("The price is Rs %d\n",rate);
                            calculateandprintquantites(rate);
                            break;
                    }
                    break;
                    
                case 3: //sandwitches
                    printf("Enter the type of sandwitches: \n");
                    printf("1-Egg sandwitches \n");
                    printf("2-Fajita sandwitches \n");
                    printf("3-Vegetable sandwitches \n");
                    printf("Sandwitches type : ");
                    scanf("%d", &sandwitches);
                    switch(sandwitches)
                    {
                        case 1:
                            rate=150;
                            printf("The price is Rs %d\n",rate);
                            calculateandprintquantites(rate);
                            break;
                        case 2:
                            rate=200;
                            printf("The price is Rs %d\n",rate);
                            calculateandprintquantites(rate);
                            break;
                        case 3:
                            rate=150;
                            printf("The price is Rs %d\n",rate);
                            calculateandprintquantites(rate);
                            break;
                    }
                    break;
                    
                case 4: //biscuits
                    printf("Enter the type of biscuits: \n");
                    printf("1-Daydream\n");
                    printf("2-Sooper \n");
                    printf("3-Zeera plus \n");
                    printf("Biscuits type : ");
                    scanf("%d", &biscuits);
                    switch(biscuits)
                    {
                        case 1:
                            rate=50;
                            printf("The price is Rs %d\n",rate);
                            calculateandprintquantites(rate);
                            break;
                            
                        case 2:
                            rate=50;
                            printf("The price is Rs %d\n",rate);
                            calculateandprintquantites(rate);
                            break;
                        case 3:
                            rate=50;
                            printf("The price is Rs %d\n",rate);
                            calculateandprintquantites(rate);
                            break;
                    }
                    break;
            }
            break;
            
        case 3: // desserts
            printf("Select the type of desserts : \n");
            printf("1-Chocolates\n");
            printf("2-Pancakes\n");
            printf("3-Brownies\n");
            printf("Desserts type : ");
            scanf("%d", &dessert_type);
            
            switch(dessert_type)
            {
                case 1: //chocolate
                    printf("Enter the type of Chocolates : \n");
                    printf("1-Dairy milk \n");
                    printf("2-Bounty \n");
                    printf("3-Kitkat\n");
                    printf("Chocolates type : ");
                    scanf("%d", &choco);
                    switch(choco)
                    {
                        case 1:
                            rate=100;
                            printf("The price is Rs %d\n",rate);
                            calculateandprintquantites(rate);
                            break;
                        case 2:
                            rate=200;
                            printf("The price is Rs %d\n",rate);
                            calculateandprintquantites(rate);
                            break;
                        case 3:
                            rate=200;
                            printf("The price is Rs %d\n",rate);
                            calculateandprintquantites(rate);
                            break;
                    }
                    break;
                    
                case 2: //pancakes
                    printf("Enter the type of pancakes : \n");
                    printf("1-Classic \n");
                    printf("2-Nutella \n");
                    printf("3-Oreo\n");
                    printf("Pancakes type : ");
                    scanf("%d", &cake);
                    switch(cake)
                    {
                        case 1:
                            rate=200;
                            printf("The price is Rs %d\n",rate);
                            calculateandprintquantites(rate);
                            break;
                        case 2:
                            rate=350;
                            printf("The price is Rs %d\n",rate);
                            calculateandprintquantites(rate);
                            break;
                        case 3:
                            rate=300;
                            printf("The price is Rs %d\n",rate);
                            calculateandprintquantites(rate);
                            break;
                            
                    }
                    break;
                    
                case 3: //brownies
                    printf("Enter the type of Brownies : \n");
                    printf("1-Nutella \n");
                    printf("2-Double chocolate \n");
                    printf("3-Fudge \n");
                    printf("Brownie type : ");
                    scanf("%d", &brownie);
                    switch(brownie)
                    {
                        case 1:
                            rate=150;
                            printf("The price is Rs %d\n",rate);
                            calculateandprintquantites(rate);
                            break;
                            
                        case 2:
                            rate=200;
                            printf("The price is Rs %d\n",rate);
                            calculateandprintquantites(rate);
                            break;
                        case 3:
                            rate=200;
                            printf("The price is Rs %d\n",rate);
                            calculateandprintquantites(rate);
                            break;
                    }
                    break;
            }
            break;
    }
    printf("Ask customer if he want any other item :\n");
    printf("If yes select (Y) , if no select (N):");
    scanf(" %c", &choice);
    

}
while(choice != 'n' && choice != 'N');
           
    return 0;
}

