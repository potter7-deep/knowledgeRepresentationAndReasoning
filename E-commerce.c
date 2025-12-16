#include <stdio.h>

int main(){
    int purchaseHistory;
    int browsingBehavior;
    int preferences;

    printf("E-COMMERCE RECOMMENDATION SYSTEM\n");
    printf("Production Rules with M = {1,2,3}\n");
    printf("======================================================================================================================\n\n");

    printf("1. PURCHASE HISTORY:\n");
    printf("   1 = Electronics\n");
    printf("   2 = Accessories\n");
    printf("   3 = Multiple categories\n");
    printf("   Enter (1-3): ");
    scanf("%d", &purchaseHistory);

    printf("\n2. BROWSING BEHAVIOR:\n");
    printf("   1 = Budget-conscious\n");
    printf("   2 = Feature-focused\n");
    printf("   3 = Performance-oriented\n");
    printf("   Enter (1-3): ");
    scanf("%d", &browsingBehavior);

    printf("\n3. PREFERENCES:\n");
    printf("   1 = Battery life\n");
    printf("   2 = Durability\n");
    printf("   3 = Latest technology\n");
    printf("   Enter (1-3): ");
    scanf("%d", &preferences);

    printf("\n--- PRODUCTION RULES APPLIED ---\n\n");

    if (purchaseHistory == 1 && browsingBehavior == 1 && preferences == 1) {
        printf("RULE 1: IF PurchaseHistory=Electronics AND BrowsingBehavior=BudgetConscious AND Preferences=BatteryLife\n");
        printf("        THEN Recommend: Motorola Edge 40\n");
    } else if (purchaseHistory == 1 && browsingBehavior == 1 && preferences == 2) {
        printf("RULE 2: IF PurchaseHistory=Electronics AND BrowsingBehavior=BudgetConscious AND Preferences=Durability\n");
        printf("        THEN Recommend: Xiaomi Redmi Note 12\n");
    } else if (purchaseHistory == 1 && browsingBehavior == 1 && preferences == 3) {
        printf("RULE 3: IF PurchaseHistory=Electronics AND BrowsingBehavior=BudgetConscious AND Preferences=LatestTech\n");
        printf("        THEN Recommend: OnePlus 11\n");
    } else if (purchaseHistory == 1 && browsingBehavior == 2 && preferences == 1) {
        printf("RULE 4: IF PurchaseHistory=Electronics AND BrowsingBehavior=FeatureFocused AND Preferences=BatteryLife\n");
        printf("        THEN Recommend: iPhone 14 Pro\n");
    } else if (purchaseHistory == 1 && browsingBehavior == 2 && preferences == 2) {
        printf("RULE 5: IF PurchaseHistory=Electronics AND BrowsingBehavior=FeatureFocused AND Preferences=Durability\n");
        printf("        THEN Recommend: Samsung Galaxy S23\n");
    } else if (purchaseHistory == 1 && browsingBehavior == 2 && preferences == 3) {
        printf("RULE 6: IF PurchaseHistory=Electronics AND BrowsingBehavior=FeatureFocused AND Preferences=LatestTech\n");
        printf("        THEN Recommend: Google Pixel 8 Pro\n");
    } else if (purchaseHistory == 1 && browsingBehavior == 3 && preferences == 1) {
        printf("RULE 7: IF PurchaseHistory=Electronics AND BrowsingBehavior=PerformanceOriented AND Preferences=BatteryLife\n");
        printf("        THEN Recommend: Samsung Galaxy A54\n");
    } else if (purchaseHistory == 1 && browsingBehavior == 3 && preferences == 2) {
        printf("RULE 8: IF PurchaseHistory=Electronics AND BrowsingBehavior=PerformanceOriented AND Preferences=Durability\n");
        printf("        THEN Recommend: iPhone 15\n");
    } else if (purchaseHistory == 1 && browsingBehavior == 3 && preferences == 3) {
        printf("RULE 9: IF PurchaseHistory=Electronics AND BrowsingBehavior=PerformanceOriented AND Preferences=LatestTech\n");
        printf("        THEN Recommend: Samsung Galaxy S23 Ultra\n");
    } else if (purchaseHistory == 2 && browsingBehavior == 1 && preferences == 1) {
        printf("RULE 10: IF PurchaseHistory=Accessories AND BrowsingBehavior=BudgetConscious AND Preferences=BatteryLife\n");
        printf("         THEN Recommend: Budget Phone Case + Basic Charger\n");
    } else if (purchaseHistory == 2 && browsingBehavior == 1 && preferences == 2) {
        printf("RULE 11: IF PurchaseHistory=Accessories AND BrowsingBehavior=BudgetConscious AND Preferences=Durability\n");
        printf("         THEN Recommend: Protective Case + Screen Protector Bundle\n");
    } else if (purchaseHistory == 2 && browsingBehavior == 1 && preferences == 3) {
        printf("RULE 12: IF PurchaseHistory=Accessories AND BrowsingBehavior=BudgetConscious AND Preferences=LatestTech\n");
        printf("         THEN Recommend: USB-C Hub + Fast Charger\n");
    } else if (purchaseHistory == 2 && browsingBehavior == 2 && preferences == 1) {
        printf("RULE 13: IF PurchaseHistory=Accessories AND BrowsingBehavior=FeatureFocused AND Preferences=BatteryLife\n");
        printf("         THEN Recommend: Wireless Charging Pad + Power Bank\n");
    } else if (purchaseHistory == 2 && browsingBehavior == 2 && preferences == 2) {
        printf("RULE 14: IF PurchaseHistory=Accessories AND BrowsingBehavior=FeatureFocused AND Preferences=Durability\n");
        printf("         THEN Recommend: Premium Leather Case + Glass Screen Protector\n");
    } else if (purchaseHistory == 2 && browsingBehavior == 2 && preferences == 3) {
        printf("RULE 15: IF PurchaseHistory=Accessories AND BrowsingBehavior=FeatureFocused AND Preferences=LatestTech\n");
        printf("         THEN Recommend: MagSafe Accessories Bundle\n");
    } else if (purchaseHistory == 2 && browsingBehavior == 3 && preferences == 1) {
        printf("RULE 16: IF PurchaseHistory=Accessories AND BrowsingBehavior=PerformanceOriented AND Preferences=BatteryLife\n");
        printf("         THEN Recommend: High-Capacity Power Bank + Fast Charger\n");
    } else if (purchaseHistory == 2 && browsingBehavior == 3 && preferences == 2) {
        printf("RULE 17: IF PurchaseHistory=Accessories AND BrowsingBehavior=PerformanceOriented AND Preferences=Durability\n");
        printf("         THEN Recommend: Military-Grade Protective Case + Tempered Glass\n");
    } else if (purchaseHistory == 2 && browsingBehavior == 3 && preferences == 3) {
        printf("RULE 18: IF PurchaseHistory=Accessories AND BrowsingBehavior=PerformanceOriented AND Preferences=LatestTech\n");
        printf("         THEN Recommend: Smart Watch Charger + USB 4.0 Cable\n");
    } else if (purchaseHistory == 3 && browsingBehavior == 1 && preferences == 1) {
        printf("RULE 19: IF PurchaseHistory=MultipleCategories AND BrowsingBehavior=BudgetConscious AND Preferences=BatteryLife\n");
        printf("         THEN Recommend: iPad + Battery Case Bundle\n");
    } else if (purchaseHistory == 3 && browsingBehavior == 1 && preferences == 2) {
        printf("RULE 20: IF PurchaseHistory=MultipleCategories AND BrowsingBehavior=BudgetConscious AND Preferences=Durability\n");
        printf("         THEN Recommend: Budget Laptop + Protective Accessories\n");
    } else if (purchaseHistory == 3 && browsingBehavior == 1 && preferences == 3) {
        printf("RULE 21: IF PurchaseHistory=MultipleCategories AND BrowsingBehavior=BudgetConscious AND Preferences=LatestTech\n");
        printf("         THEN Recommend: Mid-range Laptop + Tablet Combo\n");
    } else if (purchaseHistory == 3 && browsingBehavior == 2 && preferences == 1) {
        printf("RULE 22: IF PurchaseHistory=MultipleCategories AND BrowsingBehavior=FeatureFocused AND Preferences=BatteryLife\n");
        printf("         THEN Recommend: MacBook Air + iPad Air Bundle\n");
    } else if (purchaseHistory == 3 && browsingBehavior == 2 && preferences == 2) {
        printf("RULE 23: IF PurchaseHistory=MultipleCategories AND BrowsingBehavior=FeatureFocused AND Preferences=Durability\n");
        printf("         THEN Recommend: Dell XPS 13 + Premium Tablet\n");
    } else if (purchaseHistory == 3 && browsingBehavior == 2 && preferences == 3) {
        printf("RULE 24: IF PurchaseHistory=MultipleCategories AND BrowsingBehavior=FeatureFocused AND Preferences=LatestTech\n");
        printf("         THEN Recommend: Latest MacBook Pro + iPad Pro Bundle\n");
    } else if (purchaseHistory == 3 && browsingBehavior == 3 && preferences == 1) {
        printf("RULE 25: IF PurchaseHistory=MultipleCategories AND BrowsingBehavior=PerformanceOriented AND Preferences=BatteryLife\n");
        printf("         THEN Recommend: Gaming Laptop + Extended Battery Accessories\n");
    } else if (purchaseHistory == 3 && browsingBehavior == 3 && preferences == 2) {
        printf("RULE 26: IF PurchaseHistory=MultipleCategories AND BrowsingBehavior=PerformanceOriented AND Preferences=Durability\n");
        printf("         THEN Recommend: XMG OASIS Gaming Laptop + Premium Case\n");
    } else if (purchaseHistory == 3 && browsingBehavior == 3 && preferences == 3) {
        printf("RULE 27: IF PurchaseHistory=MultipleCategories AND BrowsingBehavior=PerformanceOriented AND Preferences=LatestTech\n");
        printf("         THEN Recommend: XMG OASIS Mk2 + Latest iPad Pro Bundle\n");
    } else {
        printf("Invalid input. Please enter values between 1 and 3.\n");
    }

    return 0;
}
