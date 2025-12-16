#include <stdio.h>

int main(){
    int timeOfDay;
    int occupancy;
    int temperature;

    printf("SMART HOME CONTROL SYSTEM\n");
    printf("Production Rules with M = {1,2,3}\n");
    printf("=================================================================================================================\n\n");

    printf("1. TIME OF DAY:\n");
    printf("   1 = Morning (6 AM - 12 PM)\n");
    printf("   2 = Afternoon (12 PM - 6 PM)\n");
    printf("   3 = Evening/Night (6 PM - 6 AM)\n");
    printf("   Enter (1-3): ");
    scanf("%d", &timeOfDay);

    printf("\n2. OCCUPANCY:\n");
    printf("   1 = Away\n");
    printf("   2 = Home\n");
    printf("   3 = Sleeping\n");
    printf("   Enter (1-3): ");
    scanf("%d", &occupancy);

    printf("\n3. TEMPERATURE:\n");
    printf("   1 = Cold (Below 18°C)\n");
    printf("   2 = Comfortable (18-24°C)\n");
    printf("   3 = Hot (Above 24°C)\n");
    printf("   Enter (1-3): ");
    scanf("%d", &temperature);

    printf("\n--- PRODUCTION RULES APPLIED ---\n\n");

    if (timeOfDay == 1 && occupancy == 1 && temperature == 1) {
        printf("RULE 1: IF TimeOfDay=Morning AND Occupancy=Away AND Temperature=Cold\n");
        printf("        THEN Action: Heat OFF | Lights OFF | Doors LOCKED | AC STANDBY\n");
    } else if (timeOfDay == 1 && occupancy == 1 && temperature == 2) {
        printf("RULE 2: IF TimeOfDay=Morning AND Occupancy=Away AND Temperature=Comfortable\n");
        printf("        THEN Action: Heat LOW | Lights OFF | Doors LOCKED | Security ARMED\n");
    } else if (timeOfDay == 1 && occupancy == 1 && temperature == 3) {
        printf("RULE 3: IF TimeOfDay=Morning AND Occupancy=Away AND Temperature=Hot\n");
        printf("        THEN Action: Heat OFF | AC ON | Lights OFF | Doors LOCKED\n");
    } else if (timeOfDay == 1 && occupancy == 2 && temperature == 1) {
        printf("RULE 4: IF TimeOfDay=Morning AND Occupancy=Home AND Temperature=Cold\n");
        printf("        THEN Action: Heat HIGH | Lights BRIGHT | Doors UNLOCKED | Coffee Maker ON\n");
    } else if (timeOfDay == 1 && occupancy == 2 && temperature == 2) {
        printf("RULE 5: IF TimeOfDay=Morning AND Occupancy=Home AND Temperature=Comfortable\n");
        printf("        THEN Action: Heat MEDIUM | Lights BRIGHT | Doors UNLOCKED | Kitchen ACTIVE\n");
    } else if (timeOfDay == 1 && occupancy == 2 && temperature == 3) {
        printf("RULE 6: IF TimeOfDay=Morning AND Occupancy=Home AND Temperature=Hot\n");
        printf("        THEN Action: Heat OFF | AC MEDIUM | Lights BRIGHT | Blinds CLOSED\n");
    } else if (timeOfDay == 1 && occupancy == 3 && temperature == 1) {
        printf("RULE 7: IF TimeOfDay=Morning AND Occupancy=Sleeping AND Temperature=Cold\n");
        printf("        THEN Action: Heat MEDIUM | Lights OFF | AC OFF | Background Music SOFT\n");
    } else if (timeOfDay == 1 && occupancy == 3 && temperature == 2) {
        printf("RULE 8: IF TimeOfDay=Morning AND Occupancy=Sleeping AND Temperature=Comfortable\n");
        printf("        THEN Action: Heat LOW | Lights OFF | Doors LOCKED | Alarm DISABLED\n");
    } else if (timeOfDay == 1 && occupancy == 3 && temperature == 3) {
        printf("RULE 9: IF TimeOfDay=Morning AND Occupancy=Sleeping AND Temperature=Hot\n");
        printf("        THEN Action: Heat OFF | AC LOW | Lights OFF | Blinds OPEN\n");
    } else if (timeOfDay == 2 && occupancy == 1 && temperature == 1) {
        printf("RULE 10: IF TimeOfDay=Afternoon AND Occupancy=Away AND Temperature=Cold\n");
        printf("         THEN Action: Heat MINIMAL | Lights OFF | AC OFF | Security FULL\n");
    } else if (timeOfDay == 2 && occupancy == 1 && temperature == 2) {
        printf("RULE 11: IF TimeOfDay=Afternoon AND Occupancy=Away AND Temperature=Comfortable\n");
        printf("         THEN Action: Heat OFF | Lights OFF | AC STANDBY | Doors LOCKED\n");
    } else if (timeOfDay == 2 && occupancy == 1 && temperature == 3) {
        printf("RULE 12: IF TimeOfDay=Afternoon AND Occupancy=Away AND Temperature=Hot\n");
        printf("         THEN Action: Heat OFF | AC MEDIUM | Lights OFF | Blinds CLOSED\n");
    } else if (timeOfDay == 2 && occupancy == 2 && temperature == 1) {
        printf("RULE 13: IF TimeOfDay=Afternoon AND Occupancy=Home AND Temperature=Cold\n");
        printf("         THEN Action: Heat MEDIUM | Lights BRIGHT | Doors UNLOCKED | Heater ON\n");
    } else if (timeOfDay == 2 && occupancy == 2 && temperature == 2) {
        printf("RULE 14: IF TimeOfDay=Afternoon AND Occupancy=Home AND Temperature=Comfortable\n");
        printf("         THEN Action: Heat LOW | Lights BRIGHT | Doors UNLOCKED | TV READY\n");
    } else if (timeOfDay == 2 && occupancy == 2 && temperature == 3) {
        printf("RULE 15: IF TimeOfDay=Afternoon AND Occupancy=Home AND Temperature=Hot\n");
        printf("         THEN Action: Heat OFF | AC HIGH | Lights DIMMED | Blinds CLOSED\n");
    } else if (timeOfDay == 2 && occupancy == 3 && temperature == 1) {
        printf("RULE 16: IF TimeOfDay=Afternoon AND Occupancy=Sleeping AND Temperature=Cold\n");
        printf("         THEN Action: Heat MEDIUM | Lights OFF | Doors LOCKED | White Noise ON\n");
    } else if (timeOfDay == 2 && occupancy == 3 && temperature == 2) {
        printf("RULE 17: IF TimeOfDay=Afternoon AND Occupancy=Sleeping AND Temperature=Comfortable\n");
        printf("         THEN Action: Heat LOW | Lights OFF | Shutters CLOSED | Noise Cancel ON\n");
    } else if (timeOfDay == 2 && occupancy == 3 && temperature == 3) {
        printf("RULE 18: IF TimeOfDay=Afternoon AND Occupancy=Sleeping AND Temperature=Hot\n");
        printf("         THEN Action: Heat OFF | AC MEDIUM | Lights OFF | Fan ON\n");
    } else if (timeOfDay == 3 && occupancy == 1 && temperature == 1) {
        printf("RULE 19: IF TimeOfDay=Evening/Night AND Occupancy=Away AND Temperature=Cold\n");
        printf("         THEN Action: Heat OFF | Lights SECURITY MODE | AC OFF | Doors DOUBLE LOCKED\n");
    } else if (timeOfDay == 3 && occupancy == 1 && temperature == 2) {
        printf("RULE 20: IF TimeOfDay=Evening/Night AND Occupancy=Away AND Temperature=Comfortable\n");
        printf("         THEN Action: Heat LOW | Lights SECURITY MODE | AC STANDBY | Security ARMED\n");
    } else if (timeOfDay == 3 && occupancy == 1 && temperature == 3) {
        printf("RULE 21: IF TimeOfDay=Evening/Night AND Occupancy=Away AND Temperature=Hot\n");
        printf("         THEN Action: Heat OFF | AC LOW | Lights SECURITY MODE | Doors LOCKED\n");
    } else if (timeOfDay == 3 && occupancy == 2 && temperature == 1) {
        printf("RULE 22: IF TimeOfDay=Evening/Night AND Occupancy=Home AND Temperature=Cold\n");
        printf("         THEN Action: Heat HIGH | Lights WARM | Doors LOCKED | Entertainment ON\n");
    } else if (timeOfDay == 3 && occupancy == 2 && temperature == 2) {
        printf("RULE 23: IF TimeOfDay=Evening/Night AND Occupancy=Home AND Temperature=Comfortable\n");
        printf("         THEN Action: Heat MEDIUM | Lights WARM DIMMED | Doors LOCKED | TV/Music ON\n");
    } else if (timeOfDay == 3 && occupancy == 2 && temperature == 3) {
        printf("RULE 24: IF TimeOfDay=Evening/Night AND Occupancy=Home AND Temperature=Hot\n");
        printf("         THEN Action: Heat OFF | AC MEDIUM | Lights DIM | Blinds OPEN\n");
    } else if (timeOfDay == 3 && occupancy == 3 && temperature == 1) {
        printf("RULE 25: IF TimeOfDay=Evening/Night AND Occupancy=Sleeping AND Temperature=Cold\n");
        printf("         THEN Action: Heat MEDIUM | Lights NIGHT MODE | Doors LOCKED | AC OFF\n");
    } else if (timeOfDay == 3 && occupancy == 3 && temperature == 2) {
        printf("RULE 26: IF TimeOfDay=Evening/Night AND Occupancy=Sleeping AND Temperature=Comfortable\n");
        printf("         THEN Action: Heat LOW | Lights OFF | Doors LOCKED | Bedroom Isolated\n");
    } else if (timeOfDay == 3 && occupancy == 3 && temperature == 3) {
        printf("RULE 27: IF TimeOfDay=Evening/Night AND Occupancy=Sleeping AND Temperature=Hot\n");
        printf("         THEN Action: Heat OFF | AC LOW | Lights OFF | Window OPEN\n");
    } else {
        printf("Invalid input. Please enter values between 1 and 3.\n");
    }

    return 0;
}
