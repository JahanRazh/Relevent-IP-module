#include <stdio.h>
#include <stdlib.h>

#define MAX_ITEMS 100

struct item {
    char itemID[10];
    char name[20];
    int quantity;
    int unitPrice;
};

int main() {
    struct item items[MAX_ITEMS];
    int numItems = 0;
    int totalBill = 0;

    // Input purchase details from the keyboard
    printf("Enter the number of items: ");
    scanf("%d", &numItems);

    for (int i = 0; i < numItems; i++) {
        printf("Enter item ID: ");
        scanf("%s", items[i].itemID);
        printf("Enter item name: ");
        scanf("%s", items[i].name);
        printf("Enter quantity (kg): ");
        scanf("%d", &items[i].quantity);
        printf("Enter unit price: ");
        scanf("%d", &items[i].unitPrice);
    }

    // Write the details to the text file
    FILE *file = fopen("purchase.txt", "w");
    for (int i = 0; i < numItems; i++) {
        fprintf(file, "%s\t%s\t%d\t%d\n", items[i].itemID, items[i].name, items[i].quantity, items[i].unitPrice);
        totalBill += items[i].quantity * items[i].unitPrice;
    }
    fclose(file);

    // Read the purchase.txt file
    file = fopen("purchase.txt", "r");
    if (file == NULL) {
        printf("Unable to open file.\n");
        exit(1);
    }

    // Calculate and display the total bill payment
    printf("Item\t\tQuantity\tUnitPrice\tPrice(Rs.)\n");
    while (fscanf(file, "%s\t%s\t%d\t%d", items[numItems].itemID, items[numItems].name, &items[numItems].quantity, &items[numItems].unitPrice) != EOF) {
        int price = items[numItems].quantity * items[numItems].unitPrice;
        printf("%s\t\t%d\t\t%d\t\t%d\n", items[numItems].name, items[numItems].quantity, items[numItems].unitPrice, price);
        numItems++;
    }
    fclose(file);

    printf("Total\t\t\t\t\t\t%d\n", totalBill);

    return 0;
}

