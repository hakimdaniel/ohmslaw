/*
 Author : Daniel Hakim
 Ipt    : UiTM Cpp
 Degree : Engineering
*/
// nothing suspicious here
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

#define version "1.0.2"

void banner(){
	printf("Coded by : KFXGC5TSPEQFK3TYOZ5A==== (r13)&(b32)\n");
  printf("Version  : %s\n\n",version);
	printf(":'#######::'##::::'##:'##::::'##:'####::'######:::::'##::::::::::'###::::'##:::::'##:\n");
	printf("'##.... ##: ##:::: ##: ###::'###: ####:'##... ##:::: ##:::::::::'## ##::: ##:'##: ##:\n");
	printf(" ##:::: ##: ##:::: ##: ####'####:. ##:: ##:::..::::: ##::::::::'##:. ##:: ##: ##: ##:\n");
	printf(" ##:::: ##: #########: ## ### ##:'##:::. ######::::: ##:::::::'##:::. ##: ##: ##: ##:\n");
	printf(" ##:::: ##: ##.... ##: ##. #: ##:..:::::..... ##:::: ##::::::: #########: ##: ##: ##:\n");
	printf(" ##:::: ##: ##:::: ##: ##:.:: ##:::::::'##::: ##:::: ##::::::: ##.... ##: ##: ##: ##:\n");
	printf(". #######:: ##:::: ##: ##:::: ##:::::::. ######::::: ########: ##:::: ##:. ###. ###::\n");
	printf(":.......:::..:::::..::..:::::..:::::::::......::::::........::..:::::..:::...::...:::\n");
	printf("                               [Coded in UiTM Penang]                                \n\n");
}

int start(){
	char pilihan;
    float V, I, R;

    printf("\nOhm's Law Calculator\n");
    printf("--------------------\n");
    printf("Choose value to start calculating:\n");
    printf("1. Voltage (V)\n");
    printf("2. Current (I)\n");
    printf("3. Resistance (R)\n");
    printf("4. Exit\n");
    printf("r. Restart\n");
    printf("\nEnter your choice (1/2/3): ");
    scanf(" %c", &pilihan);

    switch(pilihan) {
        case '1': // Kira Voltan
            printf("Current(I) Ampere: ");
            scanf("%f", &I);
            printf("Resistance(R) Ohm: ");
            scanf("%f", &R);
            V = I * R;
            printf("Volt(V) is: %.2f Volt\n", V);
            break;
        
        case '2': // Kira Arus
            printf("Volt(V) Volt: ");
            scanf("%f", &V);
            printf("Resistance(R) Ohm: ");
            scanf("%f", &R);
            I = V / R;
            printf("Current(I) is: %.2f Ampere\n", I);
            break;
        
        case '3': // Kira Rintangan
            printf("Volt(V) Volt: ");
            scanf("%f", &V);
            printf("Current(I) Ampere: ");
            scanf("%f", &I);
            R = V / I;
            printf("Resistance(R) is: %.2f Ohm\n", R);
            break;
        
        case '4': // Exit program
        	printf("Press any key to exit the program...\n");
			getch();
            return 1;
        
        case 'r':
        	printf("\033[H\033[J");
        	banner();
        	break;
        
        default:
            printf("Invalid opiton!\n");
            printf("Press any key to exit the program...\n");
			getch();
            return 1;
    }
    printf("\nPress any key to continue the program...");
	getch();
    return 0;
}

int main(){
	banner();
	while (1){
		if(start()){
			break;
		}
	}
	return 0;
}
