#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>


char *verschluesseln(char *s, int n);
char *entschluesseln(char *s, int n);

int main()
{
#define STR "LieberInsertMoinFan,dubisteinLevelweiter.Schreibeeinemailanphilipp.schwarberg@outlook.deBetreff#lewichtel"

  char str[] = STR;
  char *ver;
  char *ent;

  printf("unverschluesselt: %s\n", str);

  ver = verschluesseln(str, 3);
  printf("verschluesselt:   %s\n", ver);

  ent = entschluesseln(ver, 3);
  printf("entschluesselt:   %s\n", ent);

  assert(strcmp(ent, STR) == 0);

  return 0;
}

char *verschluesseln(char *s, int n)
{
  int i, x = strlen(s) / n + ((strlen(s) % n) > 0);
  char *b = malloc(strlen(s));
  for (i = 0; s[i] != '\0'; i++)
  {
    b[x*(i%n) + i / n] = s[i];
  }
  for (i = 0; s[i] != '\0'; i++)
  {
    s[i] = b[i];
  }
  free(b);
  return s;
}

char *entschluesseln(char *s, int n)
{
  int i, x = strlen(s) / n + ((strlen(s) % n) > 0);
  char *b = malloc(strlen(s));
  for (i = 0; s[i] != '\0'; i++)
  {
    b[i] = s[x*(i%n) + i / n];
  }
  for (i = 0; s[i] != '\0'; i++)
  {
    s[i] = b[i];
  }
  free(b);
  return s;
}
