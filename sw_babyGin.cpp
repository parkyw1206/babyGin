/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <iostream>

using namespace std;

int main()
{
    int test_case = 3;
    int input[] = {667767,000000,101123};
    int cardList[] = {0,0,0,0,0,0,0,0,0,0,0};
    int answer = 0;
    
    for(int i = 0 ; i < test_case; i++){
        answer = 0;
        for(int j = 0 ; j < 10 ; j++)
            cardList[j] = 0;
        for(int j = 0 ; j < 6 ; j++){
            cardList[(input[i]%10)]++;
            input[i] /= 10;
        }
        for(int j = 0 ; j < 10 ; j++){
            if(cardList[j] >= 3){
                cardList[j] -= 3;
                answer ++;
                j--;
            }
            if((cardList[j] >= 1) && (cardList[j+1] >= 1) && 
                (cardList[j+2]>= 1)){
                cardList[j] --;
                cardList[j+1] --;
                cardList[j+2] --;
                answer ++;
                j--;
            }
        }
        if(answer == 2)
            cout << "Baby Gin" << endl;
        else
            cout << "Lose" << endl;
    }
    return 0;
}
