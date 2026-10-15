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
                    switch(rate)
                    {
                        case 1:
                            rate=500;
                            printf("The price is Rs %d",rate);
                            break;
                        case 2:
                            rate=120;
                            printf("The price is Rs %d",rate);
                            break;
                        case 3:
                            rate=100;
                            printf("The price is Rs %d",rate);
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
                    switch(rate)
                    {
                        case 1:
                            rate=100;
                            printf("The price is Rs %d",rate);
                            break;
                        case 2:
                            rate=100;
                            printf("The price is Rs %d",rate);
                            break;
                        case 3:
                            rate=100;
                            printf("The price is Rs %d",rate);
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
                    switch(rate)
                    {
                        case 1:
                            rate=150;
                            printf("The price is Rs %d",rate);
                            break;
                        case 2:
                            rate=200;
                            printf("The price is Rs %d",rate);
                            break;
                        case 3:
                            rate=150;
                            printf("The price is Rs %d",rate);
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
                    switch(rate)
                    {
                        case 1:
                            rate=50;
                            printf("The price is Rs %d",rate);
                            break;
                        case 2:
                            rate=50;
                            printf("The price is Rs %d",rate);
                            break;
                        case 3:
                            rate=50;
                            printf("The price is Rs %d",rate);
                            break;
                    }
                    break;
                }
