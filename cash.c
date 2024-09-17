#include <stdio.h>

int get_int() {
    int number;
    printf("Change owed: ");
    scanf("%d", &number);
    return number;
}

int main()
{
    //declare each coin with respective value
    const int quarter = 25;
    const int dime = 10;
    const int nickel = 5;
    const int penny = 1;
    
    //declare change variable
    int change;
    
    //ask user for input of how much change is needed
    do{
        change = get_int();
    }
    while(change <= 0);
    
    int numCoins = 0;
    
    //while loop to figure out how many coins are needed to pay back an outstanding change amount
    while(change > 0){
        if (change >= quarter){
            numCoins++;
            change = change - quarter;
            
        }
        else if(change >= dime){
            numCoins++;
            change = change - dime;
            
        }
        else if(change >= nickel){
            numCoins++;
            change = change - nickel;
            
        }
        else if(change >= penny){
            numCoins++;
            change = change - penny;
            
        }
        
    }
    
    //print the number of coins used to give back the change amount
    printf("%d\n", numCoins);
    
    
}
