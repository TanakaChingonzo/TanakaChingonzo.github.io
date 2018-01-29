#include <stdio.h>
#include <stdbool.h>

int main(){
    int x;
    printf("Enter x: ");
    scanf("%i", &x);

if(x>0){
    printf("x is greater than 0\n");
}
//You can have 0 or more else if blocks following an if block
else if(x<0){
    printf("x is less than 0\n");
}   
//You can have 0 or 1 else blocks after an if or else if block
else{
    printf("x is equal to 0\n");
}

if(5){
    printf("yep 5\n");
}

// Boolean variables

// The code below would accomplish the same thing as the assignment
//in the line above but with more work for the computer.

// bool is_greater_than_0= x>0;

// if(x > 0 ){
//     is_greater_than_0 = true;
// }

// else {
//     is_greater_than_0 = false;
// }

return 0;
}