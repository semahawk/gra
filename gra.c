/*
 * gra - Bardzo fajna gra.
 *
 *
 * Copyright: (c) by Szymon Urbas <szymon.urbas@aol.com>
 *
 * License: the MIT license
 *
 * Date started: Mon 22 Oct, 2012, 19:05:21
 *
 */

#include <stdio.h>

#define o(x) printf(x)
#define i()  scanf("%d", &in)

int main(void)
{
  int in;

  o("Witamy w Grze. Twoim celem jest przejscie Gry.\n");
  o("Zyczymy polamania nog.\n\n");

  o("Zaczales grac w Gre.\n\n");
  o("[1] Wygrywasz Gre.\n");
  o("[2] Przegrywasz Gre.\n");
  o("[3] Bierzesz czerwona pigułke.\n\n");

  o("Co robisz? ");
  i();

  switch (in){
    case 1: o("\nWygrales Gre! Gratulacje!\n");
            return 0;
    case 2: o("\nJestes frajerem.\n");
            return 1;
    case 3: o("\nPostanawiasz wziac czerwona pigułke. Czujesz sie zle.\n\n");
            o("[1] Idziesz rzygac do kibla.\n");
            o("[2] Umierasz.\n");
            o("[3] Zaczynasz czuc się dobrze.\n\n");

            o("Co robisz? ");
            i();

            switch (in){
              case 1: o("Rzygasz do kibla i wyrzygujesz pluca. Przegrales!\n");
                      return 0;
              case 2: o("Umierasz. Przegrales!\n");
                      return 0;
              case 3: o("Zaczynasz czuc sie dobrze. Wygrales!\n");
                      return 1;
            }
  }

  return 0;
}

