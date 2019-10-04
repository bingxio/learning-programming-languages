/**
 * This is note for my learning C Programming Language.
 * The C language is built after 50 years ago and it very classic.
 * If you want to study computer programming language that I suggest you study C language first.
 * Because it is minish, strong performance, first high level language and most widely used.
 * Such as Linux OS and Python compiler all built on C.
 * 
 * Let's check it out !!
 */
// If you see the `#` character on start that explain it is macro use.
// The `include` can quote other source and stdlib library.
// This line is Import Input and Output with std library.
#include <stdio.h>
// Or we also can use double quotation marks to import.
// Usually `.h` file extension is header source file and I can import it.
#include "stdio.h"
// This line is import string library it have many method to handle string.
#include <string.h>
// This is a function in C.
// The name is `main` and the program will start on this function.
// It is must be define in each source program.
int main() {
  // After left brace this block is function body.
  // We can write statements here.
  // The `printf` function can output to screen.
  // It is native function.
  printf("Hello World\n");
  // This is variable define statement.
  // <Type> <Name> = <Expr>;
  // The C have many variable type with std and there only use integer type.
  int number = 20;
  // At 40 years ago.
  // The C not have string literal but it have char type.
  // We can use pointer type for char to define a string literal.
  // So `str` is a pointer and it is a char array.
  char* str = "This is a string literal chars.";
  // The string literal have `\0` char end of literal.
  // If use array to define string we must add a `\0` in the end to explain use memory end.
  char str2[] = { 'H', 'e', 'l', 'l', 'o', '\0' };
  // This is define a integer array.
  // We can explain the size of array and we can not define it.
  // Must is same type in array values.
  int arr[5] = { 1, 2, 3, 4, 5 };
  // Change the third value to eight in array.
  arr[3] = 8;
  // The `printf` function can have format to output many variable.
  // Use `\n` char to enter a new line.
  // And have '\t' and '\r' more.
  // The `arr[2]` is get the second value in array.
  printf("%d %s %s, %d\n", number, str, str2, arr[2]);
  // Define two integer variable only line.
  int a = 20, b = 21;
  // `if` Control Flow Statement.
  // if (<Expr>) {}
  // If the expression value is true or greater and equal 1,
  // Execute the body.
  if (a > b) {
    // This is a block.
    // We can write more statement here.
    printf("A is greater than B.");
    printf("The block was executed.");
    // Else if control expression.
  } else if (a == b)
    // This not is a block and just only one statement write here.
    printf("A equal B");
  else
    // Else branch explain the end of control expression.
    printf("A is less than B\n");
  // We can import std libray any where.
  // After this line the program can use boolean value.
  #include <stdbool.h>
  // This is `while` statement that can start a dead loop.
  // while (<Expr>) {}
  while (true) {
    // If the number value is zero to stop loop.
    if (number == 0)
      break;
    // If the number value is eight,
    // The loop will continue next loop on here.
    // Explain after there statements is not executed.
    if (number == 8) {
      printf("Start the next loop.\n");
      // Be careful the control expression,
      // Must not become to dead cycle.
      number --;
      continue;
    }
    // Output the number value on every loop.
    printf("%d\t", number);
    // The number subtract one on every loop.
    number --;
  }
  // The `for` statement is a cycle expression.
  // It have three expression and very easy to use it.
  // for (<Init Expr>; <Control Expr>; <Update Expr>) {}
  for (int i = 0; i < 5; i ++) {
    // This will output the even number in array.
    // Also we can use `continue` and `break` keyword here to control loop.
    if (arr[i] % 2 == 0) printf("%d\t", arr[i]);
    // Will enter a new line at last loop.
    if (i + 1 == 5) printf("\n");
  }
  // This is a important concept: `Pointer`.
  // This variable is allocate in stack on memory.
  int value = 23, haha = 45;
  // This variable is allocate in heap on memory.
  // The `*` char explain it is a pointer variable.
  // It value is a address for variable on memory !!
  int *ptr = &value;
  // Also I can use `*` operator to change value with not use address.
  *ptr = 103;
  // Change the address value for pointer.
  ptr = &haha;
  // This line will change the value for `haha`.
  // And the `ptr` pointer value was changed !!
  // Because the address of memory is changed that pointer value is changed.
  haha = 48;
  // Output the value of variable.
  printf("%d %d", value, *ptr);
  // Use some method to manage memory pointer.
  #include <stdlib.h>
  // The `free` method can clear the pointer value memory.
  // The `ptr` value will be NULL.
  free(ptr);
  // This is `switch` statement it can judge more expression than `if` statement.
  // switch (<expr>) {}
  // The conditional of switch statement is only integer and char value !!
  switch (value) {
    case 1:
    case 2:
      // When expr value is 1 or 2 will execute here.
      printf("The value is 1 or 2.");
      // Usually use `break` statement to go out `switch` statement.
      // If have not then execute next `case` body.
      break;
    // I can judge a char value because it can judge ascii code.
    case 'g':
      printf("The value ascii char is 'g' and integer is 103");
      break;
    // At end if no `case` statement was called.
    // There is a block statement in body.
    default: {
      printf("Unknown value !!");
      printf("The switch statement will drop.");
    }
  }
  // At main function usually returned a integer value.
  // Returned a zero value.
  return 0;
}