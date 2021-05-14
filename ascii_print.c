#include    <stdio.h>
#include    <stdlib.h>  //para o system cls

void asciitable(){
    /* to generate the ascii table we use a short int
    variable and run it from 0 to 255, the ammount of
    ascii char availables. we only need one variable
    because the position == asciii char */
    for (short int i = 0; i <= 255; i++){
        printf  ("%i:  %c\t\t",i,i);
        if  ((i % 4) == 0){
            printf ("\n");
        }
    }
}

int main(){

    system("cls");
    printf  ("Welcome to the ASCII table generator\n");
    printf  ("------------------------------------\n\n");
    printf  ("Ascii Table:   \n");

    asciitable();

    printf  ("\n\n-------------------------------------\n");
    printf  ("Thank you for using my program.\n");
    printf  ("Author:\t\tAna Atala \nDate:\t\tmay 20, 2021  \nCollege:\tUnemat\n\n");

    system  ("pause");
    return  0;
}