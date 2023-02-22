#include <stdio.h>

/*funzione che determina se un intero e' un quadrato oppure no,
  restituendo 1 oppure 0 rispettivamente */

int isQuadrato(int intero) {
     // pre: intero e' un intero >=0
     int risultato;                  // il risultato
     int radice;                       // la possibile radice di intero

     /* inizialmente non ha trovato un numero che e' la radice di intero */
     risultato = 0;

     /* verifica tutti gli interi fino a che non eccedi il valore di intero */
     radice = 1;
     while(radice*radice<=intero && !risultato)
           if(radice*radice==intero)          // trovato!
                 risultato = 1;
           else                 //guarda il prossimo
                 radice++;
     /* restituisci il risultato */
     return risultato;
}

/* applicazione per la verifica se un numero letto da tastiera e' un quadrato */
int main() {
      int numero;                  //intero da leggere
      printf("Caro utente, introduci un intero\n");
      scanf("%d", &numero);
      if(isQuadrato(numero))
           printf("Quadrato perfetto!\n");
      else
           printf("Non %c un quadrato perfetto!\n", 138);
      system("PAUSE");
}
