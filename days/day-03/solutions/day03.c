#include <stdio.h>
#include <string.h>

const int MAX_LINE = 100;

const char TREE = '#';

int main() {
  // Start line
  char line[MAX_LINE];
  fgets(line, MAX_LINE, stdin);

  int number_of_trees = 0;
  int x = 0;

  // Move 3 to the right, and 1 down
  while (fgets(line, MAX_LINE, stdin)) {
    x += 3;
    const int i = x % 32;

    const char maybe_tree = line[i];
    number_of_trees += maybe_tree == TREE;
    printf("%s", line);
    printf("%d %d %c\n", number_of_trees, i, maybe_tree);
  }

  printf("%d\n", number_of_trees);
//  printf("%d\n", valid_passwords_part2);

  return 0;
}
