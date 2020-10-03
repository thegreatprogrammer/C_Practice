// Input / output library
# include <stdio.h>

int main(){

    int user1, user2, play = 0;

    printf("¿Desea iniciar una partida? cualquier tecla para sí, 0 para no: ");
    scanf("%i", &play);

    while(play != 0){

        printf("\nOpciones:");
        printf("\n1. Piedra\n 2. Papel\n 3. Tijera\n");

        // User 1

        printf("\nUsuario 1, escoja una opción: ");
        scanf("%i", &user1);

        // Validación
        while(user1 != 1 && user1 != 2 && user1 != 3){
            printf("\nIngrese una opción válida: ");
            scanf("%i", &user1);
        }

        // User 2

        printf("\nUsuario 2, escoja una opción: ");
        scanf("%i", &user2);

        // Validación
        while(user2 != 1 && user2 != 2 && user2 != 3){
            printf("\nIngrese una opción válida: ");
            scanf("%i", &user1);
        }

        // Game

        // El condicional se realiza con respecto a la opción escogida por usuario 1
        switch(user1){

            // Piedra
            case 1:
                switch(user2){
                    case 1:
                        printf("Empate!");
                        break;

                    case 2:
                        printf("Gana usuario 2");
                        break;

                    case 3:
                        printf("Gana usuario 1");
                        break;

                }

                break;

            // Papel
            case 2:
                switch(user2){
                    case 1:
                        printf("Gana usuario 1");
                        break;

                    case 2:
                        printf("Empate!");
                        break;

                    case 3:
                        printf("Gana usuario 2");
                        break;
                }

                break;
                
            // Tijera
            case 3:
                switch(user2){
                    case 1:
                        printf("Gana usuario 2");
                        break;

                    case 2:
                        printf("Gana usuario 1");
                        break;

                    case 3:
                        printf("Empate!");
                        break;
                }

                break;
        }

        printf("\n¿Desea seguir jugando? cualquier tecla para sí, 0 para no: ");
        scanf("%i", &play);
    }

    printf("Gracias por jugar :)");
    
}