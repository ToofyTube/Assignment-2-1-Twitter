#include <stdio.h>
#include <string.h>

int main() {
  char input[300]; 
  const int charLimit = 150;

  printf("Enter tweet: ");
  fgets(input, sizeof(input), stdin);

  input[strcspn(input, "\n")] = '\0';

  if (strlen(input) > charLimit) {
      printf("Rejected\n");
  } else {
      printf("Posted\n", input);
  }

  return 0;
}