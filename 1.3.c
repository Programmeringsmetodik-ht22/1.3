/*******************************************************************************
* 1.3.c: Rättning av felkod. I programmet skall två variabler tilldelas var
*        sitt heltal, vilket sedan skall skrivas ut i terminalen. Programmet
*        kompilerar dock inte och måste därför korrigeras.
*******************************************************************************/
#include <stdio.h>

/*******************************************************************************
* assign: Tilldelar heltal 5 och 3 till två variabler.
*******************************************************************************/
static inline void assign(int x, int y)
{
   x = 5;
   y = 3;
   return;
}

/*******************************************************************************
* print: Skriver ut innehållet lagrat av två konstanter.
*******************************************************************************/
static inline void print(const int x, const int y)
{
   printf("x = %d\n", x);
   printf("y = %d\n", y);
   return;
}

/*******************************************************************************
* main: Deklarerar två lokala variabler och tilldelar två heltal till dessa.
*       Variablernas innehåll skrivs sedan ut i terminalen.
*******************************************************************************/
int main(void)
{
   int x = 0, y = 0;
   assign(x, y);
   print(x, y);
   return 0;
}