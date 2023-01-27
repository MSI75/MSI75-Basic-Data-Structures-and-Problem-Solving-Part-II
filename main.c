// #include <stdio.h>

// int main()
// {

   // int n1, n2;
   // char opt;
   // printf("Choos an operator (+,-,*,/) to perform an operation in C calculator \n");
   // scanf("%c", &opt);
   // printf("Enter the number of n1 and n2 : ");
   // scanf("%d%d", &n1, &n2);

   // switch (opt)
   // {
   // case '+':
   //    printf("Addition = %d\n", n1 + n2);
   //    break;
   // case '-':
   //    printf("Subtraction = %d\n", n1 - n2);
   //    break;
   // case '*':
   //    printf("Multiplication = %d\n", n1 * n2);
   //    break;
   // case '/':
   //    printf("division = %d\n", n1 / n2);
   //    break;
   // default:
   //    printf("Nothin\n");
   //    break;
   // }

   // int n = 45;
   // for(int i = 1; i<=n; i++){
   //    if(n%i==0){
   //       continue;      
   //    }else{
   //       printf("%d\n", i);
   //    }
   // }
  
   // do{ 
   // int n1, n2;
   // char opt;
   // printf("Choos an operator (+,-,*,/) to perform an operation in C calculator \n");
   // scanf("%c", &opt);
   // printf("Enter the number of n1 and n2 : ");
   // scanf("%d%d", &n1, &n2);
   //   switch (opt)
   // {
   // case '+':
   //    printf("Addition = %d\n", n1 + n2);
   //    break;
   // case '-':
   //    printf("Subtraction = %d\n", n1 - n2);
   //    break;
   // case '*':
   //    printf("Multiplication = %d\n", n1 * n2);
   //    break;
   // case '/':
   //    printf("division = %d\n", n1 / n2);
   //    break;
   // default:
   //    printf("Nothin\n");
   //    break;
   // }
   // }while(1);

   // Nested loop 
   // int n = 5;
   // for(int i = 1; i<=n; i++){
   //    for(int j = 1; j<=10; j++){
   //       printf("%d x %d = %d\n", j, i, i*j);
   //    }
   //    printf("\n\n");
   // }


// }


// #include<stdio.h>
// #include<stdlib.h>
// #include<math.h>

// struct Student
// {
//    int roll;
//    char name[30];
//    int age;
//    float weight;
// };


// int main(){
//    struct Student s;
//    s.name[30] = "MSI";
//    printf("%c\n",s.name);


//    // float a = sqrt(49);
//    // printf("%.2f\n",a);

//    // float b = ceil(2.3);
//    // float c = floor(2.99);

//    // float d = round(7.500);
//    // int x = pow(4,3);
//    // printf("%d\n", x);

//    // int x ;
//    // for(int i = 1; i<=4; i++){
//    //    for(int j = 1; j<=4; j++){
//    //       for(int k = 1; k<=4; k++){
//    //          x = i*k*j;
//    //       }
//    //    }
//    // }
//    // printf("%d\n",x);

//    int x = abs(-45);
//    printf("%d\n", x);
//    return 0;
// }

// #include <stdio.h>

// struct Student
// {
//     int roll;
//     char name[100];
//     int age;
//     float weight;
// };

// int main()
// {
//    struct Student s;
//   char S[30] = "MSI";
  


//     // struct Student s = {22, "SAIF", 2056, 75.6};
//     // s.age = 22;
//     // s.roll = 2056;
//     // s.weight = 75.2;
//     // printf("Roll = %d\nName = %s\nAge = %d\nWeight = %.2f", s.roll, s.name, s.age, s.weight);
//     // struct Student s1 = {22, "SAIF", 2056, 75.6};

//    //  struct Student s1 = {2056, "SAIF", 22, 75.6};

//     // scanf("%d %s %d %f", &s1.roll, &s1.name, &s1.age, &s1.weight);
//     // struct Student s2 = {16, "MSI", 05, 53.6};
//    //  struct Student s2 = {.weight = 75.6, .age = 22, .name = "MSI", .roll = 2056}; // designated initialization
//    //  printf("Student 1 Inf : \n");
//    //  printf("Roll = %d\nName = %s\nAge = %d\nWeight = %.2f\n\n", s1.roll, s1.name, s1.age, s1.weight);
//    //  printf("Student 2 Inf : \n");
//    //  printf("Roll = %d\nName = %s\nAge = %d\nWeight = %.2f", s2.roll, s2.name, s2.age, s2.weight);

//     return 0;
// }

#include<stdio.h>
#include<string.h>

struct myStructure {
  int myNum;
  char myLetter;
  char myString[30];  // String
};

int main() {
  struct myStructure s1;

  // Trying to assign a value to the string
  strcpy( s1.myString, "MSI");

  // Trying to print the value
  printf("My string: %s\n", s1.myString);

  return 0;
}