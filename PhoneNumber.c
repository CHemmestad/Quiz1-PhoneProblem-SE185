#include <stdio.h>
#include <string.h>

int main(void) {

    char phoneNumber[11];
    char areaCode[4];
    char exchangeCode[4];
    char userNumber[5];

    printf("Please enter the 10 digit phone number: ");
    scanf("%s" , phoneNumber);
    
    int indexStart = 0;

    for(int x = 0 ; x < 3 ; x++) {
        areaCode[x] = phoneNumber[indexStart];
        indexStart++;
    };
    areaCode[3] = '\0';
    for(int x = 0 ; x < 3 ; x++) {
        exchangeCode[x] = phoneNumber[indexStart];
        indexStart++;
    };
    exchangeCode[3] = '\0';
    for(int x = 0 ; x < 4 ; x++) {
        userNumber[x] = phoneNumber[indexStart];
        indexStart++;
    };
    userNumber[4] = '\0';

    printf("\nThe area code is: %s\n" , areaCode);
    printf("The exchange code is: %s\n" , exchangeCode);
    printf("The user number is: %s\n" , userNumber);
    
    return 0;
}
