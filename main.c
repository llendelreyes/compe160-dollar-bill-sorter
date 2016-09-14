//
//  main.c
//  Lab #4 Loops
//
//  Created by Llendel Reyes on 2/11/16.
//  Copyright © 2016 Llendel Reyes. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int one = 0;
    int five = 0;
    int ten = 0;
    int twenty = 0;
    int total;
    
    printf("Enter the total:");
    scanf("%d", &total);
    
    while ((total - 20) > 0) {
        twenty++;
        total -= 20;
    }
    
    while ((total - 10) > 0) {
        ten++;
        total -= 10;
    }
    
    while ((total - 5) > 0) {
        five++;
        total -= 5;
    }
    
    while ((total - 1 + 1) > 0) {
        one++;
        total -= 1;
    }
    
    printf("$20 bills: %d\n", twenty);
    printf("$10 bills: %d\n", ten);
    printf("$5 bills: %d\n", five);
    printf("$1 bills: %d\n", one);
    return 0;
}






