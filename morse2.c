#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(){
    
    // Variables

    char word[1024];

    int position = 0;


    // Main loop

    while(1){


        printf("Enter your text: ");
        fgets(word, sizeof(word), stdin);


        // Morse algorithm

        for(int x = 0; x < sizeof(word); x++){

            switch (word[x]) {

                case 'a':
                    printf(".- ");
                    break;

                case 'b':
                    printf("-... ");
                    break;

                case 'c':
                    printf("-.-. ");
                    break;

                case 'd':
                    printf("-.. ");
                    break;

                case 'e':
                    printf(". ");
                    break;

                case 'f':
                    printf("..-. ");
                    break;

                case 'g':
                    printf("--. ");
                    break;

                case 'h':
                    printf(".... ");
                    break;

                case 'i':
                    printf(".. ");
                    break;

                case 'j':
                    printf(".---");
                    break;

                case 'k':
                    printf("-.- ");
                    break;

                case 'l':
                    printf(".-.. ");
                    break;

                case 'm':
                    printf("-- ");
                    break;

                case 'n':
                    printf("-. ");
                    break;

                case 'o':
                    printf("--- ");
                    break;

                case 'p':
                    printf(".--. ");
                    break;

                case 'q':
                    printf("--.- ");
                    break;

                case 'r':
                    printf(".-. ");
                    break;

                case 's':
                    printf("... ");
                    break;

                case 't':
                    printf("- ");
                    break;

                case 'u':
                    printf("..- ");
                    break;

                case 'v':
                    printf("...- ");
                    break;

                case 'w':
                    printf(".-- ");
                    break;

                case 'x':
                    printf("-..- ");
                    break;

                case 'y':
                    printf("-.-- ");
                    break;

                case 'z':
                    printf("--.. ");
                    break;

                case ' ':
                    printf("/ ");
                    break;


            }

            if(word[x] == '\0'){
                printf("\n");
                break;
            }

        }


    }

    return 0;

}
