/* 
Problem: 
A bus company organizes a tour. The tour is open for 4 
days and participants can register for the number of days they would 
like to participate in the tour. Each participant would pay K300 for 
the tour per day, a family of 3 would pay K800 per day, and a family 
of 5 would pay K1000 per day. Write a program that calculates the 
cost of participating in the tour. The program reads the number of 
participants input by the user, and the number of days of participation. 
Based on these variables and the prices outlined for the tour, the program 
should then calculate the total cost of participating in the tour. 
If a participant(s) registers for more than 2 days of the tour, the 
first 2 days will be at full price while the days after will be at 
half-price. Include the program algorithm in your design.  

Algorithm:
1. Start
2. Ask user to enter number of participants
3. Ask user to enter number of days
4. Determine daily price
        - If participants = 1 → price = 300
        - If participants = 3 → price = 800
        - If participants = 5 → price = 1000

5. Check number of days
    - If days ≤ 2
        total = days × price

    - If days > 2
        first 2 days = 2 × price
        remaining days = (days − 2) × (price ÷ 2)
        total = first 2 days + remaining days

6. Display total cost
7. End

Author: Nathaniel POSANAI 
Date: 10/03/2026
*/

#include <stdio.h>

int main() {
    
    int participants, days;
    float price = 0;
    float totalCost;

    printf("Enter number of participants: ");
    scanf("%d", &participants);

    printf("Enter number of days: ");
    scanf("%d", &days);

    // Determine price
    if (participants == 1) {
        price = 300;
    }
    else if (participants == 3) {
        price = 800;
    }
    else if (participants == 5) {
        price = 1000;
    }
    else {
        printf("Invalid number of participants.\n");
        return 0;
    }

    // Calculate cost
    if (days <= 2) {
        totalCost = days * price;
    }
    else {
        totalCost = (2 * price) + ((days - 2) * (price / 2));
    }

    printf("Total cost of the tour: K%.2f\n", totalCost);

    return 0;
}