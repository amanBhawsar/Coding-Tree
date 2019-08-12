void solve(double meal_cost, int tip_percent, int tax_percent) {
    meal_cost=(double)(meal_cost*(100+tip_percent+tax_percent))/100;
    printf("The total meal cost is %d dollars.",(int)round(meal_cost));
}