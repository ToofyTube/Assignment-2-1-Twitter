#include <stdio.h>

int main() {
    char x[] = "Lorem ipsum dolor sit amet, consectetur adipiscing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua.";
    char y[] = "Lorem ipsum dolor sit amet, consectetur adipiscing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua. Id semper risus in hendrerit. Viverra mauris in aliquam sem. Arcu felis bibendum ut tristique et egestas quis. Pretium fusce id velit ut tortor pretium viverra suspendisse. Arcu cursus vitae congue mauris rhoncus aenean vel elit. In nisl nisi scelerisque eu ultrices. Mattis enim ut tellus elementum sagittis vitae et leo duis. In massa tempor nec feugiat. Feugiat nibh sed pulvinar proin. Elit ullamcorper dignissim cras tincidunt lobortis feugiat vivamus at. Scelerisque eu ultrices vitae auctor eu augue ut. Ac turpis egestas integer eget aliquet nibh praesent tristique. Viverra suspendisse potenti nullam ac tortor. Tortor id aliquet lectus proin. Dictum non consectetur a erat nam at lectus urna duis. Dui vivamus arcu felis bibendum ut tristique et egestas.";
    char z[] = "Massa vitae tortor condimentum lacinia quis vel eros donec ac.";
    char j[] = "Platea dictumst quisque sagittis purus sit amet volutpat consequat mauris.";

  char input[9999];

  printf("Enter the string:\n");
  fgets(input, sizeof(input), stdin);
  input[strcspn(input, "\n")] = 0; 

    // Comparisons
  if (strcmp(input, x) == 0) {
      printf("Posted\n");
  } else if (strcmp(input, y) == 0) {
      printf("Rejected\n");
  } else if (strcmp(input, z) == 0) {
      printf("Posted\n");
  } else if (strcmp(input, j) == 0) {
      printf("Posted\n");
  } else {
      printf("Nothing Was Found\n");
  }
    return 0;
}
