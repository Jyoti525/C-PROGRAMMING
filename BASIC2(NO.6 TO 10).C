# include<stdio.h>
int main(){
    // 6..multiplication of two floating number.
    float num1=45.12;
    float num2=45.12;
    float product=num1*num2;
    printf("multiplication of %f and %f =%f",num1,num2,product);

    // 7..find ASCII value of a character.
    char value='A';
    printf("\nThe value of %c is %d",value,value);

    // 8..swap two numbers.
    int a1=5;
    int a2=6;
    a1=a1+a2;
    a2=a1-a2;
    a1=a1-a2;
    printf("\nAfter swapping:%d,%d",a1,a2);

    // 9..fahrenaheit to celcius.
    float fahrenaheit=40.0;
    float celcius=(fahrenaheit-32.0)*5.0/9.0;
    printf("\nTemp. in celcius=%f",celcius);

    // 10..find size of int,float,double,char.
    printf("\nThe size of integer=%d bytes",sizeof(int));
    printf("\nThe size of float=%d bytes",sizeof(float));
    printf("\nThe size of double=%d bytes",sizeof(double));
    printf("\nThe size of character=%d bytes",sizeof(char));
    return 0;
}