#include <stdio.h>
#include <string.h>

int main() {
  char name[20];
  char author[20];
  int pages;
		
  printf("\nNaam van boek? ");
  scanf("%s", name); 

  printf("\nAuteur van boek? ");
  scanf("%s", author);

  printf("\nAantal bladzijdes? ");
  scanf("%d", &pages);

  printf("\n\n\n");

  printf("Naam van het boek: %s\n", name);
  printf("Auteur van het boek: %s\n", author);
  printf("Aantal pagina's: %d\n", pages);
}
