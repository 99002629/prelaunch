#ifndef __HEAD_H__
#define __HEAD_H__

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>
#define bool    _Bool
#define true    1
#define false   0

void login();
void mainMenu();
void checkBalance(float balance);
float moneyDeposit(float balance);
float moneyWithdraw(float balance);
void menuExit();
void errorMessage();

#endif /* #ifndef __HEAD_H_H__ */


