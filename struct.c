#include <stdio.h>
#include <string.h>

typedef struct Books {
  char name[20];
  char author[20];
  int pages; 
} Book;

int main() {
  Book book;

  printf("\nNaam van boek? ");
  scanf("%s", book.name); 

  printf("\nAuteur van boek? ");
  scanf("%s", book.author);

  printf("\nAantal bladzijdes? ");
  scanf("%d", &book.pages);

  printf("\n\n\n");

  printf("Naam van het boek: %s\n", book.name);
  printf("Auteur van het boek: %s\n", book.author);
  printf("Aantal pagina's: %d\n", book.pages);
}
