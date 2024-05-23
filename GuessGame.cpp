#include <iostream>
#include <unistd.h>
main()
{
int max = 0;
int whilecounter = 0;
int answer = 0;
int counter = 0;
printf("Welcome to Guess The Number game. Give me a maximum number:");
scanf("%d",&max);
printf("\nNow think of a number lower than %d and i will try to find it!!\n", max);
    int guess = max/2;
    int a = 0;
int b = max;
    sleep(4);
while (whilecounter == 0){
printf("\nIs this your number? (1:Higher 2:Lower 3:Yes, it is!) %d\n", guess);
        counter++;
scanf("%d",&answer);
            if (answer == 1){
                a=guess;
                guess = (b+guess)/2;
            }
            if (answer == 2){
                b=guess;
                guess = (a+guess)/2;
            }
            if (answer == 3){
                whilecounter = 1;
            }
}
printf("YAY!! I found it in %d moves!! Thanks For Playing!", counter);
return 0;
}