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
  o("[2] Przegrywasz Grę.\n\n");

  o("Co robisz? ");
  i();

  switch (in){
    case 1: o("\nWygrałeś Grę! Gratulacje!\n");
            break;
    case 2: o("\nJesteś frajerem.\n");
            break;
  }

  return 0;
}

