/*  
    Title: Machine Project (Shirt Entrepreneur Game)
    Author: Priscilla Mariah C. Licup
    Last Updated: September 13, 2021
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// ==================================== INTRODUCTORY DISPLAY ====================================


/* 
    Function Name: void displayIntro()
    Description: 
        This void function displays the introduction and mechanics of the game.
    Parameters: 
        N/A
    Return value: 
        N/A
*/
void displayIntro () {
    char anyLetter;
    printf ("-------------------- Shirt Entrepreneur Game --------------------\n");
    printf ("Welcome! You are an up-and-coming t-shirt entrepreneur, wishing to \n");
    printf ("climb up the shirt selling industry and be financially stable.\n\n");
    printf ("You took an initial loan with a daily interest rate.\n");
    printf ("You have to pay back your debts after 30 days.\n\n");
    printf ("The game starts at Day 0, wherein you can place an order on\n");
    printf ("what kind and how many shirts you are going to manufacture.\n\n");
    printf ("Keep track of your money well and enjoy the game!\n\n");
    
    printf ("Press any letter and hit enter to proceed to the mechanics of the game   ");
    scanf (" %c", &anyLetter);
    printf ("-----------------------------------------------------------------\n\n");
    
    printf ("MECHANICS:\n\n");
    printf ("From Day 1 and onwards, you can either: \n");
    printf ("Sell, Manufacture shirts, Take a Loan, Pay debt, or Skip the day.\n");
    printf ("Each of these activities take an entire day to perform, which means that only one activity can be done for the day.\n\n");
    
    printf ("How to Choose an Activity for the Day:\n");
    printf ("1. Input the number corresponding to the activity you wish to select.\n");
    printf ("2. You will not be able to choose certain activities if you have insufficient balance or empty inventories.\n");
    printf ("3. Remember that you may only do one activity for each day.\n");
    printf ("4. Doing your selected activity will take an entire day.\n\n");
    
    printf ("How to Manufacture Shirts:\n");
    printf ("1. The cost to manufacture each shirt type will change each day.\n");
    printf ("2. Choose what to order among the choices listed.\n");
    printf ("3. Input the number corresponding to the shirt type you wish to order.\n");
    printf ("4. Then place how many shirts you'd like to manufacture.\n");
    printf ("5. Confirm your order and order more shirts if you want with a Y (Yes) or an N (No).\n");
    printf ("6. You will not be able to manufacture any more shirts if you have insufficient balance.\n\n");
    
    printf ("How to Sell Shirts:\n");
    printf ("1. You will not know how many customers you will have for the day.\n");
    printf ("2. You will not know the type of customer that enters your store as well.\n");
    printf ("3. There are three types of customers and each will only accept a certain type of shirt.\n");
    printf ("4. An average customer has a 60 percent chance of appearing and will only accept a regular or cheap shirt.\n");
    printf ("5. A thrifty customer has a 30 percent chance of appearing and will only accept a cheap shirt.\n");
    printf ("6. A rich customer has a 10 percent chance of appearing and will accept any type of shirt.\n");
    printf ("7. You will not be able to sell any more shirts if your inventories are empty.\n\n");
    
    printf ("How to Take a Loan:\n");
    printf ("1. You may place any amount and hit enter to complete your transaction.\n\n");
    
    printf ("How to Pay Debts:\n");
    printf ("1. You may place any amount as long as it is within your balance.\n");
    printf ("2. You will not be able to place an amount greater than your balance.\n\n");
    
    printf ("How to Skip the Day:\n");
    printf ("1. The day will automatically skip as you choose the activity.\n\n");
    
    printf ("-----------------------------------------------------------------\n");
    
    printf ("Press any letter and hit enter to proceed to Day 0   ");
    scanf (" %c", &anyLetter);
    printf ("=================================================================\n\n");
    printf ("=================================================================\n");
}


/* 
    Function Name: void displayStartDay (int *day, float *balance, float *debt)
    Description: 
        This void function displays the day number, current balance, and remaining debt of the player.
    Parameters: 
        *day            This is a pointer variable with an integer value of the current day number.
        *balance        This is a pointer variable with a float value of the current balance of the player.
        *debt           This is a pointer variable with a float value of the remaining debt of the player.
    Return value: 
        N/A
*/
void displayStartDay (int *day, float *balance, float *debt) {
    printf ("Day %d\n", *day);
    printf ("Balance: %.2f\n", *balance);
    printf ("Remaining Debt: %.2f\n", *debt);
    printf ("-----------------------------\n");
}


/* 
    Function Name: void displayInventory (int *regIn, int *premIn, int *chpIn)
    Description: 
        This void function displays the inventory of the player.
    Parameters: 
        *regularIn      This is a pointer variable with a integer value of the current regular shirt inventory of the player.
        *premiumIn      This is a pointer variable with a integer value of the current premium shirt inventory of the player.
        *cheapIn        This is a pointer variable with a integer value of the current cheap shirt inventory of the player.
    Return value: 
        N/A
*/
void displayInventory (int *regIn, int *premIn, int *chpIn) {
    printf ("Inventory:\n");
    printf ("%dx Regular Shirts\n", *regIn);
    printf ("%dx Premium Shirts\n", *premIn);
    printf ("%dx Cheap Shirts\n", *chpIn);
    printf ("-----------------------------\n");
}


/* 
    Function Name: void displayChoices ()
    Description: 
        This void function displays the choices of activities for the day.
    Parameters: 
        N/A
    Return value: 
        N/A
*/
void displayChoices () {
    printf ("What do you wish to do? (1-5)\n");
    printf ("1. Sell Shirts\n");
    printf ("2. Manufacture Shirts\n");
    printf ("3. Take a Loan\n");
    printf ("4. Pay a Debt\n");
    printf ("5. Skip the day\n");
}


/* 
    Function Name: void displayEndDay (float *balance, float *debt, int *regIn, int *premIn, int *chpIn, int *day)
    Description: 
        This void function displays the end of the day.
    Parameters:
        *balance        This is a pointer variable with a float value of the current balance of the player.
        *debt           This is a pointer variable with a float value of the remaining debt of the player.
        *regIn          This is a pointer variable with a integer value of the current regular shirt inventory of the player.
        *premIn         This is a pointer variable with a integer value of the current premium shirt inventory of the player.
        *chpIn          This is a pointer variable with a integer value of the current cheap shirt inventory of the player.
        *day            This is a pointer variable with an integer value of the current day number.
    Return value: 
        N/A
*/
void displayEndDay (float *balance, float *debt, int *regIn, int *premIn, int *chpIn, int *day) {
    char anyLetter;
    printf ("-----------------------------------------------------------------\n");
    printf ("Updated Balance: %.2f\n", *balance);
    printf ("Remaining Debt: %.2f", *debt);
    printf ("\n------------------------------\n");
    printf ("Updated Inventory:\n");
    printf ("%dx Regular Shirts\n", *regIn);
    printf ("%dx Premium Shirts\n", *premIn);
    printf ("%dx Cheap Shirts\n", *chpIn);
    
    printf ("------------------------- End of Day %d -------------------------", *day);
    *day = *day + 1;
    printf ("\nPress any letter and hit enter to proceed to the next day.  ");
    scanf (" %c", &anyLetter);
    printf ("=================================================================\n\n");
    printf ("=================================================================\n");
}


// ==================================== MANUFACTURE SHIRT FUNCTIONS ====================================


/*
    Function Name: void printOrderQuantityQuestion (int shirtType)
    Description: 
        This function prints the question of how many shirts the player 
        wishes to order based on their selected shirt type.
    Parameters: 
        shirtType   This is an integer value inputted by the player that corresponds to a shirt type.
    Return value: 
        N/A
*/
void printOrderQuantityQuestion (int shirtType) {
    switch (shirtType) {
        case 1: 
            printf ("How many regular shirts do you wish to order? ");
            break;
                        
        case 2: 
            printf ("How many premium shirts do you wish to order? ");
            break;
                        
        case 3: 
            printf ("How many cheap shirts do you wish to order? ");
            break;
                    
        default:
            printf ("Invalid Input\n");
            break;
    }
}


/* 
    Function Name: float randomizeFloat (int LB, int UB)
    Description: 
        This function randomizes a float number between the given range for 
        the cost of manufacture in the manufactureShirts function.
    Parameters: 
        LB      This is an integer value that corresponds to the lower boundary 
                    of the range of the cost to manufacture depending on the shirt type.
        UB      This is an integer value that corresponds to the upper boundary 
                    of the range of the cost to manufacture depending on the shirt type.
    Return value: 
        randomCost  This is a float value of the cost to manufacture a specific shirt type. 
*/
float randomizeFloat (int LB, int UB) {
    float randomCost;
    
    srand(time(0));
    randomCost = (float) rand() / (float) RAND_MAX * (UB - LB) + LB;
    
    return randomCost;
}


/* 
    Function Name: void manufactureShirts (float *balance, int *regularIn, int *premiumIn, int *cheapIn)
    Description: 
        This void function displays the process of choosing the manufacture shirts activity.
        It also contains the following processes:
            - Error handling for invalid input of shirt type
            - Calculates the total cost to manufacture based on the quantity ordered and shirt type selected
            - Error handling for insufficient balance for the player's order
            - Confirms or cancels the order of the player
            - Adds the confirmed order quantity to the respective shirt inventory
            - Subtracts the confirmed total cost to manufacture from the balance
    Parameters: 
        *balance        This is a pointer variable with a float value of the current balance of the player.
        *regularIn      This is a pointer variable with a integer value of the current regular shirt inventory of the player.
        *premiumIn      This is a pointer variable with a integer value of the current premium shirt inventory of the player.
        *cheapIn        This is a pointer variable with a integer value of the current cheap shirt inventory of the player.
    Return value: 
        N/A
*/
void manufactureShirts (float *balance, int *regularIn, int *premiumIn, int *cheapIn) {
    int shirtType, quantity;
    float totalCost;
    char confirm, orderMore;
    
    // Storing the pointer variables in temporary variables in the function
    float tempBalance = *balance;
    int regIn = *regularIn;
    int premIn = *premiumIn;
    int chpIn = *cheapIn;
    
    // Range of costs to manufacture for the different shirt types
    int costRegularLB = 90, costRegularUB= 110;
    int costPremiumLB = 290, costPremiumUB= 330;
    int costCheapLB = 40, costCheapUB= 60;
    
    // Assigning the randomized costs to manufacture to designated shirt types
    float costRegular = randomizeFloat(costRegularLB, costRegularUB);
    float costPremium = randomizeFloat(costPremiumLB, costPremiumUB);
    float costCheap = randomizeFloat(costCheapLB, costCheapUB);
    
    printf ("Manufacture Order\n");
    printf ("Shirt types and prices for the day:\n");
    printf ("1. Regular (%.2f)\n", costRegular);
    printf ("2. Premium (%.2f)\n", costPremium);
    printf ("3. Cheap (%.2f)\n", costCheap);
    printf ("------------------------------\n");
    
    // Do-while loop for confirming more orders from the player
    do {
        // Do-while loop for if player has insufficient balance for their order
        do {
            // Do-while loop for error handling of invalid input of shirt type
            do {
                printf ("\nChoose what to order: ");
                scanf ("%d", &shirtType);
                
                // Utilizing printOrderQuantityQuestion function
                printOrderQuantityQuestion (shirtType);
                
            } while (shirtType != 1 && shirtType != 2 && shirtType != 3);
        
            scanf ("%d", &quantity);
            
            // Switch case that calculates the total cost to manufacture based on the quantity ordered and shirt type selected
            switch (shirtType) {
                case 1: 
                    totalCost = quantity * costRegular;
                    break;
                        
                case 2: 
                    totalCost = quantity * costPremium;
                    break;
                        
                case 3: 
                    totalCost = quantity * costCheap;
                    break;
                    
                default:
                    printf ("Invalid Input\n");
                    break;
                }
            
            // Displays error message if player has insufficient balance for their order
            if (totalCost > tempBalance) {
                printf ("You have insufficient balance. Please place a different order.\n");
            }
        } while (totalCost > tempBalance);
    
        printf ("That will cost you %.2f, which will leave you with a balance of %.2f. Confirm Order? (Y/N) ", totalCost, tempBalance-totalCost);
        scanf (" %c", &confirm);
        
        // If-else statement for confirming or cancelling the order of the player
        if (confirm == 'Y' || confirm == 'y') {
            
            // Switch case that adds the confirmed order quantity to the respective shirt inventory
            switch (shirtType) {
                case 1: 
                    regIn += quantity;
                    break;
                        
                case 2: 
                    premIn += quantity;
                    break;
                        
                case 3: 
                    chpIn += quantity;
                    break;
                    
                default:
                    printf ("Invalid Input\n");
                    break;
            }
            
            // Subtracts the confirmed total cost from the balance
            tempBalance -= totalCost;
            printf ("Order Confirmed. ");
            
        } else if (confirm == 'N' || confirm == 'n') {
            printf ("Order Cancelled. ");
        }
        
        printf ("Do you wish to order more shirts? (Y/N) ");
        scanf (" %c", &orderMore);
        printf ("\n------------------------------\n");
        
    } while ((orderMore == 'Y' || orderMore == 'y') && (tempBalance > costCheap));
    
    printf ("\n----- End of Manufacturing Activity -----\n");
    
    // Displays inability to order more shirts if insufficient balance 
    if ((orderMore == 'Y' || orderMore == 'y') && (tempBalance < costCheap)) {
        printf ("You cannot order any more shirts. You have insufficient balance.\n");
    }
    
    printf ("\n");
    
    // Reassigning pointer variables with the values of the temporary variables
    *balance = tempBalance;
    *regularIn = regIn;
    *premiumIn = premIn;
    *cheapIn = chpIn;
}


// ==================================== SELLING SHIRTS FUNCTIONS ====================================


/* 
    Function Name: int randomizeCustomerType ()
    Description: 
        This function randomizes the customer type with different  
        probabilities of appearing for the sellingShirts function.
    Parameters: 
        N/A
    Return value: 
        customerType    This is an integer variable that represents a random customer type.
*/
int randomizeCustomerType () {
    srand(time(0));
    int nProb = rand() % (100 - 1 + 1) + 1;
    int customerType;
        
    if (nProb >= 1 && nProb <= 60) {
        customerType = 1; // Average customer with 60% chance of appearing
    } else if (nProb  >= 61 && nProb <= 70) {
        customerType = 2; // Rich customer with 10% chance of appearing
    } else if (nProb >= 71 && nProb <= 100) {
        customerType = 3; // Thrifty customer with 30% chance of appearing
    }
    return customerType;    
}


/* 
    Function Name: float retailPrice (int shirtType)
    Description: This function assigns the retail price of the corresponding  
                    shirt type for the sellingShirts function.
    Parameters: 
        shirtType   This is an integer value as a corresponding shirt type inputted by the player.
    Return value: 
        fPrice    This is a float value of the retail price of the shirt type.
*/
float retailPrice (int shirtType) {
    float fPrice;
    switch (shirtType) {
        case 1:                 // Regular Shirt Type
            fPrice = 140.00;
            break;
         
        case 2:                 // Premium Shirt Type
            fPrice = 450.00;
            break;
        
        case 3:                 // Cheap Shirt Type 
            fPrice = 70.00;
            break;
        default:
            break;
    }
    return fPrice;
}


/* 
    Function Name: void sellingShirts (float *balance, int *regularIn, int *premiumIn, int *cheapIn)
    Description: 
        This void function displays the process of the selling shirts activity.
        It also contains the following processes:
            - Randomizing the number of customers for the day
            - Looping for each customer
            - Error handling for not enough shirts in inventory and invalid input
            - Determines acceptance or refusal of the customer with the player's offer
            - Decrementing of Inventory and Incrementing of Balance in accordance to customer's acceptance of player's offer
    Parameters: 
        *balance        This is a pointer variable with a float value of the current balance of the game.
        *regularIn      This is a pointer variable with a integer value of the current regular shirt inventory of the game.
        *premiumIn      This is a pointer variable with a integer value of the current premium shirt inventory of the game.
        *cheapIn        This is a pointer variable with a integer value of the current cheap shirt inventory of the game.
    Return value: 
        N/A
*/
void sellingShirts (float *balance, int *regularIn, int *premiumIn, int *cheapIn) {
    int shirtType, tempIn;
    
    // Storing the pointer variables in temporary variables in the function
    float tempBalance = *balance;
    int regIn = *regularIn;
    int premIn = *premiumIn;
    int chpIn = *cheapIn;
    
    // Randomize number of customers for the day
    srand(time(0));
    int numberCustomers = rand() % (5 - 1 + 1) + 1;
    
    
    // Do-while loop for the number of customers for the day
    // Error handling for no shirts left in the inventory to sell
    do {
        // Customer Type: 1 (Average), 2 (Rich), 3 (Thrifty)
        int customerType = randomizeCustomerType();  
        
        // Do-while loop for error handling of insufficient shirts in chosen inventory and invalid input of shirt type
        do {
            printf ("\nA customer visits your store... Which shirt would you offer the customer?\n");
            printf ("   1 – Regular, 2 – Premium, 3 – Cheap\n");
            scanf ("%d", &shirtType);
            
            // Switch case for storing Shirt Type Inventory in a temporary variable
            // Shirt Type: 1 (Regular), 2 (Premium), 3 (Cheap)
            switch (shirtType) {    
                case 1: 
                    tempIn = regIn;
                    break;
                        
                case 2: 
                    tempIn = premIn;
                    break;
                        
                case 3: 
                    tempIn = chpIn;
                    break;
                    
                default:
                    printf ("Invalid Input\n");
                    break;
                }
            
            // Display for not enough shirts
            if (tempIn == 0) {
                printf ("You do not have enough shirts in inventory. Please choose a different shirt type.\n");
            }
        } while (tempIn == 0 || (shirtType != 1 && shirtType != 2 && shirtType != 3));
        
        // Utilizing retailPrice function
        float retail = retailPrice (shirtType);     
        
        // Switch Case for determining acceptance or refusal of customer
        // contains the decrement of inventory and increment of balance as well
        switch (customerType) {
            
            // for the Average customer
            case 1: 
                if (shirtType == 1 || shirtType == 3) {
                    printf ("The customer accepts your offer and pays you %.2f.\n", retail);
                    
                    if (shirtType == 1) {
                        regIn--;
                    } else if (shirtType == 3) {
                        chpIn--;}
                        
                    tempBalance += retail;
                } else if (shirtType == 2) {
                    printf ("The customer refuses your offer and leaves the store.\n");}
                break;
            
            // for the Rich customer    
            case 2: 
                printf ("The customer accepts your offer and pays you %.2f.\n", retail);
                
                if (shirtType == 1) {  
                        regIn--;
                    } else if (shirtType == 2) {
                        premIn--;
                    } else if (shirtType == 3) {
                        chpIn--;}
                        
                    tempBalance += retail;
                break;
            
            // for the Thrifty customer    
            case 3: 
                if (shirtType == 3) {
                    printf ("The customer accepts your offer and pays you %.2f.\n", retail);
                    chpIn--;        
                    tempBalance += retail; 
                } else if (shirtType == 1 || shirtType == 2) {
                    printf ("The customer refuses your offer and leaves the store.\n");}
                break;
                
            default:
                break;
        }
        
        // Decrements number of customers after each one
        numberCustomers--;
        printf ("\n------------------------------------\n");
    }
    while (numberCustomers != 0 && (regIn != 0 || premIn != 0 || chpIn != 0));
    
    printf ("\n----- End of Selling Activity -----");
   
   // If-else statement displays insufficient shirts or no customers left 
    if (numberCustomers != 0 && (regIn == 0 && premIn == 0 && chpIn == 0)) {
        printf ("\nYou do not have enough shirts in your inventory to sell.\n\n");
    } else {
        printf ("\nNo more customers for today.\n\n");
    }
    
    
    // Reassigning pointer variables with the values of the temporary variables
    *balance = tempBalance;
    *regularIn = regIn;
    *premiumIn = premIn;
    *cheapIn = chpIn;
}


// ==================================== TAKING A LOAN FUNCTIONS ====================================


/* 
    Function Name: void takeLoan (float *balance, float *debt)
    Description: 
        This void function displays the process of the taking a loan activity.
        It also contains the following processes:
            - Adding the taken loan to the balance and debt of the player
    Parameters: 
        *balance    This is a pointer variable with a float value of the current balance of the game.
        *debt       This is a pointer variable with a float value of the current remaining debt of the game.
    Return value: 
        N/A
*/
void takeLoan (float *balance, float *debt) {
    float fLoan;
    
    // Storing the pointer variables in temporary variables in the function
    float tempBalance = *balance;
    float tempDebt = *debt;
    
    printf ("\nHow much do you want to loan? ");
    scanf ("%f", &fLoan);
    printf ("\nTransaction Complete.\n\n");
    
    // Adding the taken loan to the temporary variables of the balance and remaining debt
    tempBalance += fLoan;
    tempDebt += fLoan;
    
    // Reassigning pointer variables with the values of the temporary variables
    *balance = tempBalance;
    *debt = tempDebt;

}


// ==================================== PAYING DEBT FUNCTIONS ====================================


/* 
    Function Name: void payDebt (float *balance, float *debt)
    Description: 
        This void function displays the process of the paying debt activity.
        It also contains the following processes:
            - Error handling for insufficient balance for paying back debt
            - Subtracting the paid amount from the balance and debt of the player
    Parameters: 
        *balance    This is a pointer variable with a float value of the current balance of the game.
        *debt       This is a pointer variable with a float value of the current remaining debt of the game.
    Return value: 
        N/A
*/
void payDebt (float *balance, float *debt) {
    float fPay;
    
    // Storing the pointer variables in temporary variables in the function
    float tempBalance = *balance;
    float tempDebt = *debt;
    
    // Do-while loop for checking or error handling of insufficient balance for paying back debt
    do {
        printf ("\nHow much do you want to pay back? ");
        scanf ("%f", &fPay);
        
        if (fPay > tempBalance) {
            printf ("You have insufficient balance. Please place a lesser amount.\n");
        }
    } while (fPay > tempBalance);
    
    printf ("\nTransaction Complete.\n\n");
    
    // Subtracts the paid amount from the balance and remaining debt    
    tempBalance -= fPay;
    tempDebt -= fPay;
    
    // Reassigning pointer variables with the values of the temporary variables
    *balance = tempBalance;
    *debt = tempDebt;

}


// ==================================== SKIPPING THE DAY FUNCTIONS ====================================


/* 
    Function Name: void skipDay ()
    Description: 
        This void function displays the process of the skipping the day activity.
        It also contains the following processes:
            - Displays a message for skipping the day
    Parameters: 
        N/A
    Return value: 
        N/A
*/
void skipDay () {
    printf ("\nYou skipped the day.\n\n");
}


// ==================================== MAIN FUNCTION ====================================


int main()
{
    char cChoice;
    int nRepeat = 0;
    char anyLetter;
    
    // Main variables
    int nDayNumber = 0;
    float fBalance = 700.00;
    float fDebt = 3000.00;
    float fInterest = 0.0325;
    
    // Inventory variables
    int regularInventory = 0;
    int premiumInventory = 0;
    int cheapInventory = 0;
    
    // Display for the Start of the Game
    displayIntro();
    displayStartDay (&nDayNumber, &fBalance, &fDebt);
    manufactureShirts(&fBalance, &regularInventory, &premiumInventory, &cheapInventory);
    
    // Display for the End of the Day
    displayEndDay (&fBalance, &fDebt, &regularInventory, &premiumInventory, &cheapInventory, &nDayNumber);
    
    // While loop from Day 1 - 30
    while (nDayNumber <= 30) {
        
        // Daily interest rate on debt 
        fDebt = fDebt + (fDebt * fInterest);
        
        // Display for Start of the Day
        displayStartDay (&nDayNumber, &fBalance, &fDebt);
        displayInventory (&regularInventory, &premiumInventory, &cheapInventory);
        
        // Do-while loop for choosing an activity for the day 
        // Comes with error handling for certain situations (insufficient balance and inventory)
        do {
            
            // Do-while loop for error handling of invalid input in choosing an activity
            do {
                displayChoices();
                scanf (" %c", &cChoice);
                
                if (cChoice != '1' && cChoice != '2' && cChoice != '3' && cChoice != '4' && cChoice != '5') {
                    printf ("Invalid input. Please place an appropriate choice.\n\n");
                }
            } while (cChoice != '1' && cChoice != '2' && cChoice != '3' && cChoice != '4' && cChoice != '5');
        
        
            // Switch case for Choosing an Activity at the Start of the Day
            switch (cChoice) {
                case '1':     // Sell Shirts
                    if (regularInventory == 0 && premiumInventory == 0 && cheapInventory == 0) {
                        printf ("\nYou do not have any shirts to sell.\n");
                        nRepeat = 1;
                    } else {
                        nRepeat = 0;
                        printf ("-----------------------------------------------------------------\n");
                        sellingShirts (&fBalance, &regularInventory, &premiumInventory, &cheapInventory);
                    }
                    break;
                    
                case '2':     // Manufacture Shirts
                    if (fBalance < 60) {
                        nRepeat = 1;
                        printf ("\nYou do not have enough in your balance to manufacture shirts.\n");
                    } else {
                        nRepeat = 0;
                        printf ("-----------------------------------------------------------------\n");
                        manufactureShirts (&fBalance, &regularInventory, &premiumInventory, &cheapInventory);
                    }
                    break;
                    
                case '3':     // Take a Loan
                    nRepeat = 0;
                    printf ("-----------------------------------------------------------------\n");
                    takeLoan (&fBalance, &fDebt);
                    
                    break;  
                    
                case '4':     // Pay Debt
                    if (fBalance > 0) {
                        nRepeat = 0;
                        printf ("-----------------------------------------------------------------\n");
                        payDebt (&fBalance, &fDebt);
                    } else {
                        nRepeat = 1;
                        printf ("\nYou do not have enough in your balance to pay your debts.\n");
                    }
                    break;
                    
                case '5':     // Skip the Day
                    nRepeat = 0;
                    printf ("-----------------------------------------------------------------\n");
                    skipDay (&fBalance, &fDebt);
                    break;
                    
                default:
                    break;
            }
            
            if (nRepeat == 1) {
                printf ("Please choose a different activity.\n"); }
                
        } while (nRepeat == 1);
        
        // Display for the End of the Day
        displayEndDay (&fBalance, &fDebt, &regularInventory, &premiumInventory, &cheapInventory, &nDayNumber);
    }
    
    // Computation for Final Remaining Debt
    float finalDebt = fDebt - fBalance;
    float finalBalance = fBalance - fDebt;
    
    // Finale of the Game
    printf ("=================================================================\n\n");
    printf ("You have reached the end of the Shirt Entrepreneur Game.\n");
    printf ("\nPress any letter and hit enter to know how you did.  ");
    scanf (" %c", &anyLetter);
    printf ("\n=================================================================\n\n");
    
    if (finalDebt <= 0) {
        finalDebt = 0;
    }
    if (finalBalance <= 0) {
        finalBalance = 0;
    }
    printf ("Final Balance: %.2f\n", finalBalance);
    printf ("Remaining Debt: %.2f\n", finalDebt);
    printf ("\n-----------------------------------------------------------------\n\n");
    
    // If-else statements for what Kind of Ending 
    if (finalDebt != 0) {
        printf ("BAD ENDING\n\n");
        printf ("You were unable to pay back your debts and failed to start a stable business.\n");
        printf ("Nice try!\n");
    } else if (finalDebt <= 0 && (finalBalance < 40)) {
        printf ("NEUTRAL ENDING\n\n");
        printf ("You were able to successfully pay back your debts. Congratulations!!\n");
        printf ("However, you do not have enough money to continue the business anymore.\n");
    } else if (finalDebt <= 0 && (finalBalance >= 40)) {
        printf ("GOOD ENDING\n\n");
        printf ("You were able to successfully pay back your debts. Congratulations!!\n");
        printf ("You are financially stable through your business too. Well done!\n");
    }
    
    printf ("\n=================================================================\n\n");
    printf ("Thank you for playing the Shirt Entrepreneur Game.\n");
    printf ("Hope you enjoyed!\n");
    
    return 0;
}
