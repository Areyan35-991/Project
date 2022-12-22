#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
int itemCount = -1, i;
int elementPosition;
float totalPrice = 0;
struct pcBuild{
    char itemName[500];
    float price;
};
struct cInfo{
    char customerName[20];
    struct pcBuild project[50];
}customer;

// Functions


// Monitor Function
void chooseMonitor(void){

    system("cls");
    printf("\n\t\t\t===================== ** TechMaster PC Building Solution ** =====================");
    printf("\n\t\t\t===================== ** User Name : %s",customer.customerName);
    printf("\n");
    choiceMonitor:
        printf("\n Choose a Monitor From Here: [1/2/3/4]");
        printf("\n\t\t[1]\t--\tAcer EB192Q 18.5 Inch HD Monitor\t\t-----\t Price:\t\t9000  tk");
        printf("\n\t\t[2]\t--\tHP V19125QR 18.5 Inch HD Monitor\t\t-----\t Price:\t\t10400 tk");
        printf("\n\t\t[3]\t--\tDell E2016HVNV 19.5' LED Monitor\t\t-----\t Price:\t\t12000 tk");
        printf("\n\t\t[4]\t--\tPHILIPS 241V8 24'IPS FHD Monitor\t\t-----\t Price:\t\t19700 tk");
        int chooseMonitor;
        printf("\n Your Choose is: ");
        scanf("%d", &chooseMonitor);
        if(chooseMonitor == 1){
            itemCount++;
            strcpy(customer.project[itemCount].itemName, "Acer EB192Q 18.5 Inch HD Monitor");
            customer.project[itemCount].price = 9000;
            printf("\n Successfully Added! [1] Product Full Name - Acer EB192Q 18.5 Inch HD Monitor - Price:  9000 tk");
            productListing();
        }else if(chooseMonitor == 2){
            itemCount++;
            strcpy(customer.project[itemCount].itemName, "HP V19125QR 18.5 Inch HD Monitor");
            customer.project[itemCount].price = 10400;
            printf("\n Successfully Added! [2] Product Name - HP V19125QR 18.5 Inch HD Monitor - Price:  10400 tk");
            productListing();
        }else if(chooseMonitor == 3){
            itemCount++;
            strcpy(customer.project[itemCount].itemName, "Dell E2016HVNV 19.5' LED Monitor");
            customer.project[itemCount].price = 12000;
            printf("\n Successfully Added! [3] Product Full Name - Dell E2016HV 19.5' LED Monitor:  12000 tk");
            productListing();
        }else if(chooseMonitor == 4){
            itemCount++;
            strcpy(customer.project[itemCount].itemName, "PHILIPS 241V8 24'IPS FHD Monitor");
            customer.project[itemCount].price = 19700;
            printf("\n Successfully Added! [4] Product Full Name - PHILIPS 241V8 24' IPS FHD Monitor - Price:  19700 tk");
            productListing();
        }else{
            printf("\n\t You Press Wrong Key. ");
            printf("\n\t Try Again\n");
            goto choiceMonitor;
         }


}
// Mother Board  Function
void chooseMotherBoard(void){

    system("cls");
    printf("\n\t\t\t===================== ** TechMaster PC Building Solution ** =====================");
    printf("\n\t\t\t===================== ** Customer Name : %s",customer.customerName);
    printf("\n");
    choiceMotherBoard:
        printf("\n Choose a Mother Board From Here: [1/2/3/4]");
        printf("\n\t\t[1]\t--\tMSI A320M-A Pro AMD Motherboard\t\t-----\tPrice:\t\t6200  tk");
        printf("\n\t\t[2]\t--\tGigabyte GA-H81M-S2 Motherboard\t\t-----\tPrice:\t\t7900  tk");
        printf("\n\t\t[3]\t--\tGigabyte B6 12thGen Motherboard\t\t-----\tPrice:\t\t20500 tk");
        printf("\n\t\t[4]\t--\tASUS ROG42 12th Gen Motherboard\t\t-----\tPrice:\t\t29000 tk");
        int chooseMotherBoard;
        printf("\n Your Choose is: ");
        scanf("%d", &chooseMotherBoard);
        if(chooseMotherBoard == 1){
            itemCount++;
            strcpy(customer.project[itemCount].itemName, "MSI A320M-A Pro AMD Motherboard");
            customer.project[itemCount].price = 6200;
            printf("\n Successfully Added! [1] Product Full Name - MSI A320M-A Pro AMD Micro-ATX Motherboard:  6200 tk");
            productListing();
        }else if(chooseMotherBoard == 2){
            itemCount++;
            strcpy(customer.project[itemCount].itemName, "Gigabyte GA-H81M-S2  Motherboard");
            customer.project[itemCount].price = 7900;
            printf("\n Successfully Added! [2] Product Full Name - Gigabyte GA-H81M-S2PH Micro ATX Motherboard - Price:  7900 tk");
            productListing();
        }else if(chooseMotherBoard == 3){
            itemCount++;
            strcpy(customer.project[itemCount].itemName, "Gigabyte B6 12thGen Motherboard");
            customer.project[itemCount].price = 20500;
            printf("\n Successfully Added! [3] Product Full Name - Gigabyte B660 GAMING 12th Gen ATX Motherboard:  20500 tk");
            productListing();
        }else if(chooseMotherBoard == 4){
            itemCount++;
            strcpy(customer.project[itemCount].itemName, "ASUS ROG42 12th Gen Motherboard");
            customer.project[itemCount].price = 29000;
            printf("\n Successfully Added! [4] Product Full Name:  - ASUS ROG STRIX B660-F WIFI 12th Gen ATX Motherboard - Price:  29000 tk");
            productListing();
        }else{
            printf("\n\t You Press Wrong Key. ");
            printf("\n\t Try Again\n");
            goto choiceMotherBoard;
         }


}

// Casing Function
void chooseCasing(void){

    system("cls");
    printf("\n\t\t\t===================== ** TechMaster PC Building Solution ** =====================");
    printf("\n\t\t\t===================== ** User Name : %s",customer.customerName);
    printf("\n");
    choiceCasing:
        printf("\n Choose a Casing From Here: [1/2/3/4]");
        printf("\n\t\t[1]\t--\tMaxGreen A363BK ATSX 5S04 Casing\t\t-----\tPrice:\t\t5450  tk");
        printf("\n\t\t[2]\t--\tMaxGreen G563BL Window AX Casing\t\t-----\tPrice:\t\t4050  tk");
        printf("\n\t\t[3]\t--\tCorsair 60X RGB ATX Smart Casing\t\t-----\tPrice:\t\t24500 tk");
        printf("\n\t\t[4]\t--\tAMD Ryzen 3 Pro 4350 Star Casing\t\t-----\tPrice:\t\t34200 tk");
        int chooseCasing;
        printf("\n Your Choose is: ");
        scanf("%d", &chooseCasing);
        if(chooseCasing == 1){
            itemCount++;
            strcpy(customer.project[itemCount].itemName, "MaxGreen A363BK ATX Casing");
            customer.project[itemCount].price = 5450;
            printf("\n Successfully Added! [1] Product Full Name - MaxGreen A363BK ATSX 5S04 Casing - Price:  5450 tk");
            productListing();
        }else if(chooseCasing == 2){
            itemCount++;
            strcpy(customer.project[itemCount].itemName, "MaxGreen G563BL Window AX Casing ");
            customer.project[itemCount].price = 4050;
            printf("\n Successfully Added! [2] Product Full Name - MaxGreen G563BL Window ATX Casing - Price:  4050 tk");
            productListing();
        }else if(chooseCasing == 3){
            itemCount++;
            strcpy(customer.project[itemCount].itemName, "Corsair 60X RGB ATX Smart Casing");
            customer.project[itemCount].price = 24500;
            printf("\n Successfully Added! [3] Product Full Name - Corsair 680X RGB ATX High Smart Case:  24500 tk");
            productListing();
        }else if(chooseCasing == 4){
            itemCount++;
            strcpy(customer.project[itemCount].itemName, "AMD Ryzen 3 Pro 4350 Star Casing");
            customer.project[itemCount].price = 34200;
            printf("\n Successfully Added! [4] Product Full Name - AMD Ryzen 3 Pro 4350 Star Casing - Price:  34200 tk");
            productListing();
        }else{
            printf("\n\t You Press Wrong Key. ");
            printf("\n\t Try Again\n");
            goto choiceCasing;
         }


}

// Graphics Card  Function
void chooseGraphicsCard(void){

    system("cls");
    printf("\n\t\t\t===================== ** TechMaster PC Building Solution ** =====================");
    printf("\n\t\t\t===================== ** User Name : %s",customer.customerName);
    printf("\n");
    choiceGraphicsCard:
        printf("\n Choose a Graphics Card From Here: [1/2/3/4]");
        printf("\n\t\t[1]\t--\tGForce G730K  2GB Graphics Card\t\t-----\tPrice:\t\t7050  tk");
        printf("\n\t\t[2]\t--\tGeForce 1050T 4GB Graphics Card\t\t-----\tPrice:\t\t22500 tk");
        printf("\n\t\t[3]\t--\tPaGeForce RTX 8GB Graphics Card\t\t-----\tPrice:\t\t41900 tk");
        printf("\n\t\t[4]\t--\tGigabyte RTX 12 GBGraphics Card\t\t-----\tPrice:\t\t58000 tk");
        int chooseGraphicsCard;
        printf("\n Your Choose is: ");
        scanf("%d", &chooseGraphicsCard);
        if(chooseGraphicsCard == 1){
            itemCount++;
            strcpy(customer.project[itemCount].itemName, "GForce G730K  2GB Graphics Card");
            customer.project[itemCount].price = 7050;
            printf("\n Successfully Added! [1] Product Full Name - Colorful GeForce GT730K 2GD3-V 2GB Graphics Card - Price:  7050 tk");
            productListing();
        }else if(chooseGraphicsCard == 2){
            itemCount++;
            strcpy(customer.project[itemCount].itemName, "GeForce 1050T 4GB Graphics Card");
            customer.project[itemCount].price = 22500;
            printf("\n Successfully Added! [2] Product Full Name - Asus Phoenix GeForce GTX 1050Ti 4GB GDDR5 Graphics Card - Price:  22500 tk");
            productListing();
        }else if(chooseGraphicsCard == 3){
            itemCount++;
            strcpy(customer.project[itemCount].itemName, "PaGeForce RTX 8GB Graphics Card");
            customer.project[itemCount].price = 41900;
            printf("\n Successfully Added! [3] Product Full Name - Palit GeForce RTX 3050 Dual 8GB GDDR6 Graphics Card:  41900 tk");
            productListing();
        }else if(chooseGraphicsCard == 4){
            itemCount++;
            strcpy(customer.project[itemCount].itemName, "Gigabyte RTX  12 GBGraphics Card");
            customer.project[itemCount].price = 58000;
            printf("\n Successfully Added! [4] Product Full Name - Gigabyte GeForce RTX 2060 D6 12GB GDDR6 Graphics Card - Price:  58000 tk");
            productListing();
        }else{
            printf("\n\t You Press Wrong Key. ");
            printf("\n\t Try Again\n");
            goto choiceGraphicsCard;
         }

}

// Processor Function
void chooseProcessor(void){

    system("cls");
    printf("\n\t\t\t===================== ** TechMaster PC Building Solution ** =====================");
    printf("\n\t\t\t===================== ** User Name : %s",customer.customerName);
    printf("\n");
    choiceProcessor:
        printf("\n Choose a Processor From Here: [1/2/3/4]");
        printf("\n\t\t[1]\t--\tIntel 12th Gen Core i9 Processor\t\t-----\tPrice:\t\t67000 tk");
        printf("\n\t\t[2]\t--\tIntel 10th Gen Core i3 Processor\t\t-----\tPrice:\t\t11500 tk");
        printf("\n\t\t[3]\t--\tAMD Ryzen 3Processor with Radeon\t\t-----\tPrice:\t\t16800 tk");
        printf("\n\t\t[4]\t--\tAMD Ryzen 3 Pro RX4100 Processor\t\t-----\tPrice:\t\t10700 tk");
        int chooseProcessor;
        printf("\n Your Choose is: ");
        scanf("%d", &chooseProcessor);
        if(chooseProcessor == 1){
            itemCount++;
            strcpy(customer.project[itemCount].itemName, "Intel 12th Gen Core i9 Processor");
            customer.project[itemCount].price = 67000;
            printf("\n Successfully Added! [1] Product Full Name - Intel 12th Gen Core i9-12900K Alder Lake Processor - Price:  67000 tk");
            productListing();
        }else if(chooseProcessor == 2){
            itemCount++;
            strcpy(customer.project[itemCount].itemName, "Intel 10th Gen Core i3 Processor");
            customer.project[itemCount].price = 11500;
            printf("\n Successfully Added! [2] Product Full Name - Intel 10th Gen Core i3 10100 Processor - Price:  11500 tk");
            productListing();
        }else if(chooseProcessor == 3){
            itemCount++;
            strcpy(customer.project[itemCount].itemName, "AMD Ryzen 3Processor with Radeon");
            customer.project[itemCount].price = 16800;
            printf("\n Successfully Added! [3] Product Full Name - AMD Ryzen 3 3200G Processor with Radeon RX Vega 8 Graphics:  16800 tk");
            productListing();
        }else if(chooseProcessor == 4){
            itemCount++;
            strcpy(customer.project[itemCount].itemName, "AMD Ryzen 3 Pro RX4100 Processor");
            customer.project[itemCount].price = 10700;
            printf("\n Successfully Added! [4] Product Full Name - AMD Ryzen 3 Pro RX4100 Processor - Price:  10700 tk");
            productListing();
        }else{
            printf("\n\t You Press Wrong Key. ");
            printf("\n\t Try Again\n");
            goto choiceProcessor;
         }

}

// Power Supply  Function
void choosePowerSupply (void){

    system("cls");
    printf("\n\t\t\t===================== ** TechMaster PC Building Solution ** =====================");
    printf("\n\t\t\t===================== ** User Name : %s",customer.customerName);
    printf("\n");
    choicePowerSupply:
        printf("\n Choose a Power Supply  From Here: [1/2/3/4]");
        printf("\n\t\t[1]\t--\tAntec HCG1000  Watt Power Supply\t\t-----\tPrice:\t\t18300 tk");
        printf("\n\t\t[2]\t--\tCooler Master E400w Power Supply\t\t-----\tPrice:\t\t3500  tk");
        printf("\n\t\t[3]\t--\tGam Kratos E600W RG Power Supply\t\t-----\tPrice:\t\t4400  tk");
        printf("\n\t\t[4]\t--\tASUS ROG THOR 85P 80Power Supply\t\t-----\tPrice:\t\t24500 tk");
        int choosePowerSupply;
        printf("\n Your Choose is: ");
        scanf("%d", &choosePowerSupply);
        if(choosePowerSupply == 1){
            itemCount++;
            strcpy(customer.project[itemCount].itemName, "Antec HCG1000  Watt Power Supply");
            customer.project[itemCount].price = 18300;
            printf("\n Successfully Added! [1] Product Full Name - Antec HCG1000 Extreme 1000 Watt Power Supply - Price:  18300 tk");
            productListing();
        }else if(choosePowerSupply == 2){
            itemCount++;
            strcpy(customer.project[itemCount].itemName, "Cooler Master E400w Power Supply");
            customer.project[itemCount].price = 3500;
            printf("\n Successfully Added! [2] Product Full Name - Cooler Master Elite V3 400w Power Supply - Price:  3500 tk");
            productListing();
        }else if(choosePowerSupply == 3){
            itemCount++;
            strcpy(customer.project[itemCount].itemName, "Gam Kratos E600W RG Power Supply");
            customer.project[itemCount].price = 4400;
            printf("\n Successfully Added! [3] Product Full Name - Gamdias Kratos E1-600W RGB Power Supply:  4400 tk");
            productListing();
        }else if(choosePowerSupply == 4){
            itemCount++;
            strcpy(customer.project[itemCount].itemName, "ASUS ROG THOR 85P 80Power Supply");
            customer.project[itemCount].price = 24500;
            printf("\n Successfully Added! [4] Product Full Name - ASUS ROG THOR 850P 80+ Platinum Power Supply - Price:  24500 tk");
            productListing();
        }else{
            printf("\n\t You Press Wrong Key. ");
            printf("\n\t Try Again\n");
            goto choicePowerSupply;
         }

}

void deleteSelectedItem(void){
    if(itemCount>=0){
        printf("Enter the element position to delete : ");
        scanf("%d", &elementPosition);
        /* Invalid delete position */
        if(elementPosition <-1){
            printf("Invalid position! Please enter position between 1 to %d", itemCount);
        }
        else if(elementPosition<=itemCount+1){
            /* Copy next element value to current element */
            for(i=elementPosition-1; i<itemCount; i++){
                customer.project[i] = customer.project[i+1];
            }

            /* Decrement array size by 1 */
            printf("Deleted Successfully!\t Product Serial No ----\t>%d",elementPosition);
            itemCount--;

        }else{
            printf("Invalid Option. Choose the right option\n");
            deleteSelectedItem();
        }
    }else{
        printf("You Have Nothing to Delete. Select Your Product");
        productListing();
    }
}

void productListing (void){

            int chooseProduct;
            printf("\n\n Choose Your Option From Here: [1/2/3/4/5/6/7/8/9]");
            printf("\n  [1]  -- Monitor");
            printf("\n  [2]  -- Mother Board");
            printf("\n  [3]  -- Casing");
            printf("\n  [4]  -- Graphics Card");
            printf("\n  [5]  -- Processor");
            printf("\n  [6]  -- Power Supply");
            printf("\n  [7]  -- Delete selected item");
            printf("\n  [8]  -- View Your Build With Price");
            printf("\n  [9]  -- Exit the Program");
            printf("\n Your Choose is: ");
            scanf("%d", &chooseProduct);
            switch(chooseProduct){
                case 1:{
                    printf("\n Select Case 1");
                    chooseMonitor();
                    break;
                }
                case 2:{
                    printf("\n Select Case 2");
                    chooseMotherBoard();
                    break;
                }
                case 3:{
                    printf("\n Select Case 3");
                    chooseCasing();
                    break;
                }
                case 4:{
                    printf("\nSelect Case 4");
                    chooseGraphicsCard();
                    break;
                }
                case 5:{
                    printf("\nSelect Case 5");
                    chooseProcessor();
                    break;
                }
                case 6:{
                    printf("Select Case 6");
                    choosePowerSupply();
                    break;
                }
                case 7: {
                    deleteSelectedItem();
                    productListing();
                    break;
                }
                case 8:{
                    totalPrice = 0;
                    if(itemCount>=0){
                        printf("\nSelect Case 8\n\n");
                        printf("It's Your Build: \n");
                        for(int i=0; i<=itemCount; i++){
                            totalPrice = totalPrice + customer.project[i].price;
                            printf("\n\t%d -->  Product Name: %s\t\t\tPrice: %.2f",i+1,customer.project[i].itemName,customer.project[i].price);
                        }
                        printf("\n  =============================================================================================== ");
                        printf("\n\tTotal Product: %d", itemCount+1);
                        printf("\t\t\t\t\t\t  Total Price: %.2f", totalPrice);
                        productListing();
                    }else{
                        printf("\n No Product Selected Yet to View your Build. Please Select Product\n");
                        productListing();
                    }

                    break;
                }

                case 9:{
                    printf("Ending the Program. Thanks for choosing Tech Master PC Building Solution.  ");
                    exit(0);
                }
                default : {
                            printf("\nInvalid Choice. Select From the option\n");
                            productListing();
                    }
                }
            }



int main(){

    printf("\n\t\t\t===================== ** TechMaster PC Building Solution ** =====================");
    printf ("\n\n\n\t\t\t Enter Your Name: ");
    gets(customer.customerName);
    productListing();
    printf("\n\n\n\n");
    return 0;

}
