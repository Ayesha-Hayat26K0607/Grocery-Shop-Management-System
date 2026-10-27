int i ;
	printf("----Final Bill---\n");
	for(i = 0 ; i<count ; i++){
		printf("Item Name : %s Item Quantity : %d\n Sub Total : %-6d\n",item_name[i],quantities[i],subtotal[i]);
	}
    
	printf("The grand total is Rs %d\n",grand_total);   
	printf("=====THANK YOU FOR SHOPPING AT FAST TUCK SHOP=====\n");   
