
int main() {
 
  int m, n, q, r, a, b, ap, bp, c, d, t;
  m = 23; n = 34;
 
 E1: // inicjowanie
  ap = 1; b = 1; a = 0; bp = 0; c = m; d = n;
  printf("E1: %i %i %i %i %i %i", c, d, a, bp, ap, b); printf("\n");

 E2: // dzielenie 
  r = c%d;
  q = c/d;
 printf("E2: %i %i %i %i", a*m+b*n, ap*m+bp*n, q*d+r, r); printf("\n");
 
 E3: // czy reszta zero?
  if (r == 0){
    printf("E31: %i", a*m+b*n); printf("\n");
    printf("E32: %i = %i*%i + %i*%i\n", d, a, m, b, n); printf("\n");
    return 0;
  };
 printf("E33: %i %i %i %i", a*m+b*n, ap*m+bp*n, q*d+r, r); printf("\n");
 
 E4: // ponowienie
  c = d; d = r; t = ap; ap = a; a = t-q*a; t = bp; bp = b; b = t-q*b;
  printf("E4: %i %i %i", a*m+b*n, ap*m+bp*n, d); printf("\n"); 
  goto E2;
}
