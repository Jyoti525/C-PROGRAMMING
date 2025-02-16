// 1 & 2..print hello world and your name.
# include<stdio.h>
int main(){
    printf("HELLO WORLD");
    printf("\nJYOTI PRIYADARSHANI SWAIN");

    // 3..print an integer given by user..
    int a=5;
    printf("\nThe value of integer a=%d",a);

    // 4..sum  of two digits..
    int x=5;
    int y=10;
    int sum=x+y;
    printf("\nThe sum of a & b is=%d",sum);

    // 5..check a number is prime or not.
    int num=29;
    int count=0;
    if(num<2){
        printf("\nnot a prime number.");
    }
    else{
        for(int i=1;i<=num;i++){
            if (num%i==0)
            count++;
        }
        if(num>2)
        printf("\nnumber is a prime.");
        else
        printf("\nnot a prime number.");
        
    }
    return 0;
}




