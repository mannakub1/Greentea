//
//  main.c
//  P1_GreenTea
//
//  Created by SunDay on 9/29/2559 BE.
//  Copyright © 2559 Silpakorn. All rights reserved.
//

#include <stdio.h>

int main() {
    
    int order, income = 0, paid = 0, money;
    int count_income = 0, count_paid = 0 ;
    
    while(1) {
        scanf("%d", &order);
        if( isBreak(order)) {
            break;
        }
        
        scanf("%d", &money);
        if( isIncome(order) ) {
            income += money;
            count_income++;
        }else {
            paid += money;
            count_paid++;
        }
        
    }
    
    printf("%d %d\n", count_income, count_paid);
    printf("%d %d %d\n", income, paid, income - paid);
    return 0;
}

int isIncome(int order) {
    if( order == 1) {
        return 1;
    }
    
    return 0;
}

int isBreak(int order) {
    if( order == 0){
        return 1;
    }
    
    return 0;
}