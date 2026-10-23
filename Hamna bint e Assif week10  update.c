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

void calculateandprintquantites(int rate){
    int total ;
    int quantity;
    
    printf("Enter the amount of item :");
    scanf("%d", &quantity);
    
    total = rate*quantity;
    printf("The total amount of the item is %d\n", total);
    
}
