#include<stdio.h>
#include<math.h>

int main() {
  ////////////////////QUESTION 1///////////////////////////////////////////////////////////////////////////
  /*int a, b, c;
  printf("enter three numbers : ");
  scanf("%d, %d, %d", &a, &b, &c);

  if(a>=c && a>=b){
     printf("a is greatest.");
  } else if (b>=c && b>=a) {
    printf("b is greatest.");
  } else {
    printf("c is greatest.");
  }*/
  //////////////////////QUESTION 2////////////////////////////////////////////////////////////////////
  /*float a, b;
  char operation;
  printf("enter two numbers : ");
  scanf("%f, %f", &a, &b);

  printf("1-sum, 2-difference, 3-product, 4-remainder, 5-quotient");
  printf("enter operation :");
  scanf(" %c", &operation);

  int q = a/b;
  float rem = a - q*b;

  switch(operation) {
    case '+': printf("sum is : %.3f", a+b);
            break;
    case '-': printf("difference is %.3f", a-b);
            break;
    case '*': printf("product is %.3f", a*b);
            break;
    case '%': printf("remainder is %f",rem);
            break;
    case '/': printf("quotient is %d", q);
  }*/
  ////////////////////////QUESTION 3///////////////////////////////////////////////////////////////////
  /*int month;
  printf("enter month(1-12) : ");
  scanf("%d", &month);
  switch(month) {
    case 1: printf("january");
          break;
    case 2: printf("februry");
          break;
    case 3: printf("march");
          break;
    case 4: printf("april");
          break;
    case 5: printf("may");
          break;
    case 6: printf("june");
          break;
    case 7: printf("july");
          break;
    case 8: printf("august");
          break;
    case 9: printf("september");
          break;
    case 10: printf("october");
          break;
    case 11: printf("november");
          break;
    case 12: printf("december");
          break; 
    default : printf("invalid!!");     
  }*/
 ////////////////////////QUESTION 4//////////////////////////////////////////////////////////////////
  /*int n;
  printf("enter number : ");
  scanf("%d", &n);

  if(n%2==0) {
    printf("EVEN\n");
  } else{
    printf("ODD\n");
  }

  if(n<0){
      printf("NEGATIVE\n");
  } else if(n>0){
      printf("POSTIVE\n");
  } else {
      printf("ZERO\n");
  }*/
///////////////QUESTION 6////////////////////////////////////////////////////////////////////////////
 /*int d;
 printf("enter no of days u are late : ");
 scanf("%d", &d);

 if(d<=5) {
    printf("your fine is 50 paisa");
 } else if(d>=6 && d<=10) {
    printf("your fine is 1 ruppee");
 } else if(d>10 && d<=30) {
    printf("your fine is 5 rupees");
 } else{
    printf("YOUR MEMBERSHIP IS CANCELLED.");
 }*/

 //////////////QUESTION 5////////////////////////////////////////////////////////////////////////////
 /*int n;
 printf("enter number : ");
  scanf("%d", &n);

  if(n%5==0 && n%8==0){
    printf("number is divisible by both 5 and 8.");
  } else if(n%5==0) {
    printf("number is divisible by 5.");
  } else if(n%8==0) {
    printf("number is divisible by 8.");
  } else{
    printf("number is neither divisible b5 nor by 8.");
  }*/

  //////////////////QUESTION 7///////////////////////////////////////////////////////////////////////
  /*int a, b, c, d, e;
  printf("enter numbers : ");
  scanf("%d, %d, %d, %d, %d", &a, &b, &c, &d, &e);

  float avg;
  avg =(a+b+c+d+e)/5;
  printf("avg is %f", avg);*/
  ///////////////////QUESTION 8/////////////////////////////////////////////////////////////////////
  /*int n;
  printf("ENTER NUMBER:");
  scanf("%d", &n);
  int fact = 1;
  for(int i=1;i<=n;i++){
      fact = fact*i;
  }
  printf("factorial of number is : %d", fact);*/
  /////////////////////////////////////////////////
  /*int n, i, rem;
  printf("ENTER YOUR NUMBER:");
  scanf("%d", &n);
  for(int i=2;i<n/2+1;i++) {
    rem = n%i;
    if(rem==0){
      break;
    } 
  }
   if(rem==0){
      printf("NOT A PRIME NUMBER!!");
    } else {
      printf("PRIME NUMBER!!");
    }*/
 //////////////////////////////////////////////////
  /*int x, n;
  printf("ENTER NUMBER and POWER:");
  scanf(" %d, %d", &x, &n);
  int r = pow(x,n);
  printf("%d RAISED TO POWER %d is: %d", x, n, r);*/
  /////////////////////////////////////////////////
  /*int i, r, temp;
  int sum = 0;
  for(int i=100;i<=500;i++){
    temp = i;
    while(temp!=0){
      r = temp%10;
      sum += r*r*r;
      temp = temp/10;
      r = 0;
    }
    if(sum==i) {
      printf("%d\t", i);
    }
    sum=0;
  }*/
 ////////////////////////////////////////////////// 
 //////////////////////////////////////////////////
 /*int n;
 printf("ENTER NUMBER:");
 scanf("%d", &n);
 printf("MULTIPLICATION TABLE:-\n");
 for(int i=1;i<=10;i++) {
  printf("%d into %d = %d\n", n, i, n*i);
 }*/
 //////////////////////////////////////////////////
 /*int a, b, hcf, temp;
 printf("enter both numbers:");
 scanf(" %d, %d", &a, &b);
 hcf = (a>b)?b:a;
 temp = hcf;
 for(int i=1; i<=temp;i++) {
  if(a%i==0 && b%i==0) {
    hcf = i;
  }
 }
 printf("HCF OF THE NUMBERS IS: %d", hcf);*/
 //////////////////////////////////////////////////
 /*int a, b, lcm, temp;
 printf("enter both numbers:");
 scanf(" %d, %d", &a, &b);
 lcm = a*b;
 temp = lcm;
 for(int i = temp; i>=1; i--){
  if(i%a==0 && i%b==0) {
    lcm = i;
  }
 }
 printf("LCM OF THE NUMBERS IS: %d", lcm);*/
 //////////////////////////////////////////////////
 /*int a = 0;
 int b = 1;
 int n;
 printf("enter number of terms:");
 scanf(" %d", &n);
 printf(" %d\n", a);
 printf(" %d\n", b);
 for(int i=1; i<=n-2;i++) {
  int x = a + b;
  printf("%d\n", x);
  a = b;
  b = x;
 }*/
 //////////////QUESTION 9///////////////////////////////////////////////////////////////////////////////////////
 /*int a;
 int sum = 0;
 while(a!=-999) {
  printf("enter number:");
  scanf("%d", &a);
  sum += a;
 }
 printf("sum is %d", sum+999);*/
 ///////////////QUESTION 10/////////////////////////////////////////////////////////////////////////////////////////
 /*int a;
 do{
  printf("enter number:");
  scanf("%d", &a);
 } while(a<=100);*/
 ///////////////QUESTION 11////////////////////////////////////////////////////////////////////////////////////
 /*int a;
 int count = 0;
 for(int i=1;i<=20;i++) {
  printf("ENTER NUMBER %d:", i);
  scanf(" %d", &a);
  if(a%2==0){
    count++;
  }
 }
 printf("NUMBER OF EVEN INTEGERS ARE %d", count);*/
 /////////////////////////////////////////////////END OF ASSIGNMENT////////////////////////////////////////////
  return 0;
}
