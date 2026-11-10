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

void showRemainingStock() {
    printf("\n---- Remaining Stock Status ----\n");
    for (int i = 0; i < 30; i++) {
        printf("%-30s : %d units remaining\n", all_product_names[i], stock[i]);
    }
    printf("--------------------------------\n");
}
