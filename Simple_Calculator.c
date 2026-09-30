#include<stdio.h>
#include<math.h>
void print_Menu();
int main(){
    printf("\nWelcome to Simple Calculator");
    int ch;
    double first , second , result;
    while(1){
        print_Menu();

        printf("\nEnter your choice : ");
        scanf("%d",&ch);
        if(ch==7){
            printf("\nExiting program.....\n");
            break;
        }
        if(ch<1 || ch>7){
            printf("wrong choice ....\n");
            continue;
        }
        printf("\nPlease enter the first number : ");
        scanf("%lf",&first);
        printf("\n Now enter second number : ");
        scanf("%lf",&second);
        switch (ch)
        {
        case 1:   //add
            result=first+second;
            printf("\nResult = %.2lf\n", result);
            break;
        case 2:   //substract
            result=first-second;
            printf("\nResult = %.2lf\n", result);
            break;
        case 3:   //multiply
            result=first*second;
            printf("\nResult = %.2lf\n", result);
            break;
        case 4:   //divide
            if(second==0){
                printf("\n Cant divide by zero (invalid number)");
            }else
                {result=first/second;
                printf("\nResult = %.2lf\n", result);
                 break;}
        case 5:   //remainder
               if((int)second==0){
                printf("Cant perform modulus by zero\n");
               }
               else{
                result = (int)first % (int)second;
                 printf("\nResult = %.2lf\n", result);
               }
           
            break;
        case 6:  //power
            result = pow(first,second);
            printf("\nResult = %.2lf\n", result);
            break;
        case 7: printf("Exit\n");
            break;        
        
        default: printf("wrong choice\n");
            break;
        }

        
        

    }

    return 0;
}

void print_Menu(){
    printf("\n*****Calculator Menu*****\n");
        printf("\nChoose one of the options to perform operation\n");
        printf("\n1. Addition");
        printf("\n2. Substraction");
        printf("\n3. Multiplication");
        printf("\n4. Division");
        printf("\n5. Modulus");
        printf("\n6. Power");
        printf("\n7. Exit");
}