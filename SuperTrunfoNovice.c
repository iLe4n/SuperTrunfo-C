#include <stdio.h>
#include <string.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.

int main() {
     double Population, Populations2;
    double Area, Area2;
    double Pib, Pib2;
    int TouristAttractions, Number1, Number2, TouristAttractions2;
    char Country[30], Country2[30], Country3[30], Country4[30], State[30], State1[30], State2[30];
    char Citys[30], Citys2[30], Citys3[30], NumberCard[30], NumberCard2[30];
    int Letter, c;

    printf("Hello! Please write the name of State:\n");
    fgets(State, 30, stdin);         // Fgets better scanf!!
    State[strcspn(State, "\n")] = 0; // Clear \n, thanksss!!
    printf("Nice, so right now write the card number and the letter of state %s:\n", State);
    fgets(NumberCard, 30, stdin);
    NumberCard[strcspn(NumberCard, "\n")] = 0;
    printf("Ok! Now, please, write the name of City:\n");
    fgets(Citys, 30, stdin);
    Citys[strcspn(Citys, "\n")] = 0;
    printf("So, now, write the number of populations the city of %s:\n", Citys);
    scanf("%lf", &Population);
    printf("Now, please, write the value of Area the %s:\n", Citys);
    scanf("%lf", &Area);
    printf("Nice! So, write the number of PIB the %s:\n", Citys);
    scanf("%lf", &Pib);
    printf("Ok, last but no least, write the number of Tourist Attractions of %s:\n", Citys);
    scanf("%d", &TouristAttractions); // INT IS THE %D, jesus crist, dude!!

    printf("\n");

    printf("First Card is %s. \n", NumberCard);
    printf("Name of state the card %s is %s. \n", NumberCard, State);
    printf("The name of city is %s. \n", Citys);
    printf("The number of population the city %s is %.3lf. \n", Citys, Population);
    printf("The number of Area the city %s is %.3lf. \n", Citys, Area);
    printf("The number of PIB the city %s is %.3lf. \n", Citys, Pib);
    printf("The number of Tourist Attractions is %d. \n", TouristAttractions);

    printf("\n");

    while ((c = getchar()) != '\n' && c != EOF)
        ;
    /* clean buffer! We can use (while (getchar() != '\n' && getchar() != EOF), but there’s a subtle error: getchar() is called twice per iteration,
    meaning it reads one character to compare with \n and another to compare with EOF.
    This can skip characters and lead to unexpected behavior, so, we create a int c*/

    // Second Part of the code//
    printf("Hello! Please, write the second name of State:\n");
    fgets(State2, 30, stdin);
    State2[strcspn(State2, "\n")] = 0; 
    printf("Nice, so right now write the second card number and the letter of State %s:\n", State2);
    fgets(NumberCard2, 30, stdin);
    NumberCard2[strcspn(NumberCard2, "\n")] = 0;
    printf("Ok! Now, please, write the name of City:\n");
    fgets(Citys2, 30, stdin);
    Citys2[strcspn(Citys2, "\n")] = 0;
    printf("So, now, write the number of population the city of %s:\n", Citys2);
    scanf("%lf", &Populations2);
    printf("Nice! Please, write the value of Area the %s:\n", Citys2);
    scanf("%lf", &Area2);
    printf("Nice, so write the number of PIB the %s:\n", Citys2);
    scanf("%lf", &Pib2);
    printf("Ok, last but no least, write the number of Tourist Attractions of %s:\n", Citys2);
    scanf("%d", &TouristAttractions2);

    printf("\n");

    printf("First Card is %s. \n", NumberCard2);
    printf("Name of state the card %s is %s. \n", NumberCard2, State2);
    printf("The name of city is %s. \n", Citys2);
    printf("The number of population the city %s is %.3lf. \n", Citys2, Populations2);
    printf("The number of Area the city %s is %.3lf. \n", Citys, Area2);
    printf("The number of PIB the city %s is %.3lf. \n", Citys2, Pib2);
    printf("The number of Tourist Attractions is %d. \n", TouristAttractions2);

    return 0;
}
