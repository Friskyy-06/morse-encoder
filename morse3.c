#include <stdio.h>
#include <stdlib.h>
#include <string.h>


#define TOKEN_BUFFER 64
#define DELIMITER " "

int main(){

    char morse[1024];

    int size = TOKEN_BUFFER;

    int position = 0;

    char **tokens = malloc(size * sizeof(char*));

    if(!tokens){
        
        printf("Memory error: program crashed!");
        
        exit(EXIT_FAILURE);
    }

    
    char *token;

    printf("Enter your morse code: ");

    fgets(morse, sizeof(morse), stdin);

    morse[strlen(morse) - 1] = '\0';


    token = strtok(morse, DELIMITER);

    
    while(token != NULL){


        tokens[position] = token;

        position++;

        token = strtok(NULL, DELIMITER);

    }

    for(int x = 0; x < position; x++){
        
        if(strcmp(tokens[x], ".-") == 0){
            
            printf("a");

        }

        else if(strcmp(tokens[x], "-...") == 0){
            
            printf("b");

        }

        else if(strcmp(tokens[x], "-.-.") == 0){
            
            printf("c");

        }
        else if(strcmp(tokens[x], "-..") == 0){
            
            printf("d");

        }
        else if(strcmp(tokens[x], ".") == 0){
            
            printf("e");

        }
        else if(strcmp(tokens[x], "..-.") == 0){
            
            printf("f");

        }
        else if(strcmp(tokens[x], "--.") == 0){
            
            printf("g");

        }
        else if(strcmp(tokens[x], "....") == 0){
            
            printf("h");

        }
            
        else if(strcmp(tokens[x], "..") == 0){
            
            printf("i");

        }
        else if(strcmp(tokens[x], ".---") == 0){
            
            printf("j");

        }
        else if(strcmp(tokens[x], "-.-") == 0){
            
            printf("k");

        }
        else if(strcmp(tokens[x], ".-..") == 0){
            
            printf("l");

        }
        
       
        else if(strcmp(tokens[x], "--") == 0){
            
            printf("m");

        }
        else if(strcmp(tokens[x], "-.") == 0){
            
            printf("n");

        }
        else if(strcmp(tokens[x], "---") == 0){
            
            printf("o");

        }

        else if(strcmp(tokens[x], ".--.") == 0){
            
            printf("p");

        }
        else if(strcmp(tokens[x], "--.-") == 0){
            
            printf("q");

        }

        else if(strcmp(tokens[x], ".-.") == 0){
            
            printf("r");

        }
        

        else if(strcmp(tokens[x], "...") == 0){
            
            printf("s");

        }
        
        

        else if(strcmp(tokens[x], "-") == 0){
            
            printf("t");

        }
        

        else if(strcmp(tokens[x], "..-") == 0){
            
            printf("u");

        }

        else if(strcmp(tokens[x], "...-") == 0){
            
            printf("v");

        }

        else if(strcmp(tokens[x], ".--") == 0){
            
            printf("w");

        }

        else if(strcmp(tokens[x], "-..-") == 0){
            
            printf("x");

        }

        else if(strcmp(tokens[x], "-.--") == 0){
            
            printf("y");

        }

        else if(strcmp(tokens[x], "--..") == 0){
            
            printf("z");

        }

        else if(strcmp(tokens[x], "/") == 0){
            
            printf(" ");

        }


        else{
            break;
        }

    }



    printf("\n");

    free(tokens);
    free(token);

    return 0;

}
