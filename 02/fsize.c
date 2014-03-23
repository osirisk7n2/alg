#include <stdio.h>

int main (int argc, char **argv) {
  FILE *fp = NULL;
  fpos_t dlugosc;
  if (argc != 2) {
    printf ("usage: %s <file name>\n", argv[0]);
    return 1;
  }
  if ((fp=fopen(argv[1], "rb"))==NULL) {
    printf ("error opening the file:: %s!\n", argv[1]);
    return 1;
  }
  fseek (fp, 0, SEEK_END);
  fgetpos (fp, &dlugosc);
  printf ("%d\n", dlugosc);
  fclose (fp);
  return 0;
}
