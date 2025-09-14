// Online C compiler to run C program online
#include <stdio.h>
#include <string.h>

int main() {
    // Write C code here
    int Num_person;
    int i;
    char original_number[3],condition;
    int discount,sum_price = 0;
    
    do {
        //enter number
        printf("Enter number of person: ");
        scanf("%d",&Num_person);
            
        float price_person[Num_person];
            
        for(i=1;i<=Num_person;i++){
            switch (i){
                case 1 : strcpy(original_number,"st"); break;
                case 2 : strcpy(original_number,"nd"); break;
                case 3 : strcpy(original_number,"rd"); break;
                default: strcpy(original_number,"th"); break;
            }
            printf("Enter %d%s person (bath): ",i,original_number);
            scanf("%f",&price_person[i-1]);
        }
            
        printf("Enter discount (bath): ");
        scanf("%d",&discount);
        
        //calculat not finish here
        for(i=0;i<Num_person;i++){
            sum_price += price_person[i];
        }
        
        for(i=0;i<Num_person;i++){
            price_person[i] = discount * price_person[i] / sum_price;
        }
    
        //output price
        printf("-----------------------------------------------------------------\n");
        for(i=1;i<=Num_person;i++){
            switch (i){
                case 1 : strcpy(original_number,"st"); break;
                case 2 : strcpy(original_number,"nd"); break;
                case 3 : strcpy(original_number,"rd"); break;
                default: strcpy(original_number,"th"); break;
            }
            printf("%d%s person real price %.2f(bath)\n",i,original_number,price_person[i-1]);
        }
        printf("-----------------------------------------------------------------\n");
        
        printf("Do you want to try again?(enter y): \n");
        scanf("%*c%c",&condition);
    }while(condition == 'y');
    
    return 0;
}
