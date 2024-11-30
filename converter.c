#include<stdio.h>


void main_menu();
int binaryToDecimal();
int decimalToBinary(int);
int decimalToHexa(int);
int decimalToOctal(int);

int choice;
char select;
int main(){

int  bintodic;
double result;

while (1){

  main_menu();
    if (choice == 0){
    break;
    }
    if (choice < 0 || choice > 7){
        fprintf(stderr , "\n--> INVALID MENU CHOICE. \n\n");
        continue;
    }
    if (choice == 1){
      printf("\n Enter a Binary Number : ");
      scanf("%d",&bintodic);
    }else if(choice == 2){
      printf("\nEnter a Decimal Number : ");
      scanf("%d",&bintodic);
    }else if(choice == 3){
      printf("\nEnter a Decimal Number : ");
      scanf("%d",&bintodic);
    }else if (choice == 4){
      printf("\nEnter a decimal for Conversion Of Octal : ");
      scanf("%d",&bintodic);
    }
    

  switch (choice){
      case 1: // binary to decimal
        result = binaryToDecimal(bintodic);
        break;
      case 2:
        result = decimalToBinary(bintodic);
        break;
      case 3:
        result = decimalToHexa(bintodic);

        break;
      case 4:
        result = decimalToOctal(bintodic);
        break;
  }  
  
}
return 0;
}

void main_menu(){
    printf("\n\n======================================( WELCOME TO CONVERTOR )=====================================\n\n");
    printf("\nSelect Any Operation \n");
    printf("\n1. Binary To Decimal ");
    printf("\n2. Decimal To Binary ");
    printf("\n3. Decimal To HexaDecimal ");
    printf("\n4. Decimal To OctalDecimal ");
    printf("\n0. EXIT ");
    printf("\n\nEnter Your Choice : ");
    scanf("%d",&choice);
    }
// CONVERSION OF BINARY TO DECIMAL-----------------------
int binaryToDecimal(int a){ 
	int dec_value = 0;
	int base = 1;
	int temp = a;
	while (temp){ 
		int last_digit = temp % 10; 
		temp = temp / 10; 
		dec_value += last_digit * base;
		base = base * 2; 
	}
  printf("\n (CONVERSION OF BINARY TO DECIMAL IS)--> ");
	printf("%d",dec_value);
} 
// CONVERSION OF DECIMAL TO BINARY------------------------
int decimalToBinary(int n){

int a[10], i;        
for(i=0; n>0; i++)    
{    
a[i]=n%2;    
n= n/2;  
}    
printf("\n(CONVERSION OF DECIMAL TO BINARY  IS)--> ");    
for(i=i-1 ;i>=0 ;i--)    
  {    
  printf("%d",a[i]); 
    
  }    
}
// DECIMAL TO HEXA-DECIMAL-------------------
int decimalToHexa(int decimal_Number){


    int i = 1, j, temp; 
    char hexa_Number[100]; 

    while (decimal_Number != 0) { 
        temp = decimal_Number % 16; 
   
        if (temp < 10) 
            temp = temp + 48; 
        else
            temp = temp + 55; 
        hexa_Number[i++] = temp; 
        decimal_Number = decimal_Number / 16; 
    } 
    printf("\n(CONVERSION OF DECIMAL TO HEXADECIMAL IS)--> "); 
    for (j = i - 1; j > 0; j--){
        printf("%c", hexa_Number[j]); 
       }
}
// CONVERSION OF DECIMAL TO OCTAL-------------------------

 int decimalToOctal(int deciNum){

  int octalNum = 0, countval = 1; 
    int dNo = deciNum; 
  
    while (deciNum != 0) { 
        int remainder = deciNum % 8; 

        octalNum += remainder * countval; 
  
        countval = countval * 10; 
        deciNum /= 8; 
    } 
    printf("\n(CONVERSION OF DECIMAL TO OCTALDECIMAL IS)--> "); 
    printf("%d", octalNum); 
 }