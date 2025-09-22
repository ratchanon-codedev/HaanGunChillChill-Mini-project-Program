#include <stdio.h>
#include <string.h>
#include <stdlib.h>

//fuction to set my number output of person
void oringinal_number(int number,char* og_number_string){
    switch (number){
        case 1 : strcpy(og_number_string,"st"); break;
        case 2 : strcpy(og_number_string,"nd"); break;
        case 3 : strcpy(og_number_string,"rd"); break;
        default: strcpy(og_number_string,"th"); break;
    }
}

int main() {
    //Write C code here
    int Num_person;
    int i;
    char og_number_string[3],condition;
    int discount,sum_price = 0;
    
    do {
        //enter number
        printf("Enter number of person: ");
        scanf("%d",&Num_person);
            
        float price_person[Num_person];
            
        for(i=1;i<=Num_person;i++){
            oringinal_number(i,og_number_string);
            printf("Enter %d%s person (bath): ",i,og_number_string);
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
            oringinal_number(i,og_number_string);
            printf("%d%s person real price %.2f(bath)\n",i,og_number_string,price_person[i-1]);
        }
        printf("-----------------------------------------------------------------\n");
        
        printf("Do you want to try again?(enter y): \n");
        scanf("%*c%c",&condition);
    }while(condition == 'y');
    
    return 0;
}
