#include <stdio.h>
//4.9
/*
int main(){
    int counter=1,x,sum=0,num;
    float z;

    printf("Enter number of integers: ");
    scanf("%d", &x);

    for(counter; counter<=x; ++counter){
        printf("Enter an integer: ");
        scanf("%d", &num);
        sum+=num;
    }
    printf("Average is %.2f: ", z=(float) sum/x);
}*/

//4.10
/*
int main(){
    int celsi=30;
    float farenheit;

    printf("%4s%21s\n","Celsius","Fahrenheit");

    for(celsi; celsi<=50; ++celsi){
        farenheit=(float) (9.0/5.0)*celsi+32;
        printf("%4d%21.2f\n", celsi, farenheit);
    }
}*/

//4.11
/*
int main(){
    int start=0,sum=0;

    for(start; start<=100;start=start+7){
        sum+=start;
    }
    printf("sum is %d", sum);
}*/

//4.12
/*
#include <math.h>
int main() {
    int i, j, isPrime;

    for (i = 2; i <= 100; i++) {
        isPrime = 1;  // assume number is prime

        for (j = 2; j <= sqrt(i); j++) {
            if (i % j == 0) {  // found a divisor
                isPrime = 0;
                break;  // no need to check further
            }
        }

        if (isPrime) {
            printf("%d is prime\n", i);
        }
    }

    return 0;
}*/

//4.13
/*
int main(){
    int x=1, enter, sum=0, sum_2=0, sum_3=0;

    printf("Enter an integer: ");
    scanf("%d",&enter);

    for (x; x<=enter; x++){
        sum+=x;
        sum_2 += x*x;
        sum_3 += x*x*x;
}
printf("The sum of natural numbers is %d\n", sum);
printf("The sum of squares of natural numbers is %d\n", sum_2);
printf("The sum of cubes of natural numbers is %d", sum_3);

}*/

//4.14
/*
int main(){
    int n=1,factorial=1;
    printf("%4s%10s\n","n!","Answer");

    for (n; n<=5; n++){
        factorial*=n;
        printf("%4d%10d\n",n,factorial);
    }  
}*/

//4.15
/*
#include <math.h>
int main(void) {
    double principal = 1000.0; // starting principal
    double rate;

    for (rate = 0.05; rate <= 0.10; rate += 0.01) {
        printf("\nRate = %.2f%%\n", rate * 100); 
        printf("%4s%21s\n", "Year", "Amount on deposit");

        for (unsigned int year = 1; year <= 10; ++year) {
            double amount = principal * pow(1.0 + rate, year);
            printf("%4u%21.2f\n", year, amount);
        }
    }

    return 0;
}*/

//4.16
/*
int main(){
    for (int i=1; i<=10; i++){
        
        for(int j=1;j<=i;j++){
            printf("%s", "*");
            
        }
      printf("\n");  
}
printf("\n"); 
for (int i=1; i<=10; i++){
        
        for(int j=10;j>=i;j--){
            printf("%s", "*");
            
        }
      printf("\n");  
}
printf("\n"); 
for (int i = 1; i <= 10; i++) {
     for (int j = 1; j < i; j++) {
        printf(" "); 
    }
    for (int j = 10; j >= i; j--) {
        printf("%s", "*");
    }
   
    printf("\n");
}
printf("\n"); 
for (int i = 1; i <= 10; i++) {
    for (int j = 1; j <= 10 - i; j++) {
        printf(" "); 
    }
    for (int j = 1; j <= i; j++) {
        printf("%s", "*");
    }
    printf("\n");
}
return 0;
}*/

//4.18
/*
int main(){
    int number[5];
    
    for (int count=0; count<5; count++){
        printf("Enter an integer (1-30): ");
        scanf("%d", &number[count]);
    }

    for(int i=0; i<5; i++){
        for(int j=1; j<=number[i]; j++){
            printf("%s", "*"); 
        }
     printf("\n");
    }
    return 0;
}*/

//4.17
int main(){
    int acc[3], old[3], current[3], new[3];

    for (int count=0; count<3; count++){
        printf("Enter account number: ");
        scanf("%d", &acc[count]);
        printf("Enter old credit limit: ");
        scanf("%d", &old[count]);
        printf("Enter current balance: ");
        scanf("%d", &current[count]);
        new[count] = old[count] / 2;
        printf("New limit: %d\n", new[count]);
        if (current[count] > new[count]) {
            printf("Balance exceeds new credit limit.\n");
        } else {
            printf("Balance does not exceed new credit limit.\n");
        }
    }

    return 0; 
    }
   


