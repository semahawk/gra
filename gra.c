/*
 * gra - Bardzo fajna gra.
 *
 *
 * Copyright: (c) by Szymon Urbaś <szymon.urbas@aol.com>
 *
 * License: the MIT license
 *
 * Date started: Mon 22 Oct, 2012, 19:05:21
 *
 */

#include <stdio.h>

#define o(x) printf(x)
#define i()  scanf("%d", &in);

int main(void)
{
  int in;

  o("Witamy w Grze. Twoim celem jest przejście Gry.\n");
  o("Życzymy połamania nóg.\n\n");

  o("Zacząłeś grać w Grę.\n\n");
  o("[1] Wygrywasz Grę.\n");
  o("[2] Przegrywasz Grę.\n");
  o("[3] Bierzesz czerwoną pigułkę.\n\n");

  o("Co robisz? ");
  i();

  switch (in){
    case 1: o("\nWygrałeś Grę! Gratulacje!\n");
            return 0;
    case 2: o("\nJesteś frajerem.\n");
            return 1;
    case 3: o("\nPostanawiasz wziąć czerwoną pigułkę. Czujesz się źle.\n\n");
            o("[1] Idziesz rzygać do kibla.\n");
            o("[2] Umierasz.\n");
            o("[3] Zaczynasz czuć się dobrze.\n\n");

            o("Co robisz? ");
            i();

            switch (in){
              case 1: o("Rzygasz do kibla i wyrzygujesz płuca. Przegrałeś!\n");
                      return 0;
              case 2: o("Umierasz. Przegrałeś!\n");
                      return 0;
              case 3: o("Zaczynasz czuć się dobrze. Wygrałeś!\n");
                      return 1;
            }
  }

  return 0;
}

