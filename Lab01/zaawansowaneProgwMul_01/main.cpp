#include <Windows.h>
#include <stdio.h>
int WINAPI WinMain(HINSTANCE hinstance, HINSTANCE hPrevistance, PSTR szCmdLine, int iCmdShow)
{
  MessageBox(0, "Wybierz liczbê z zakresu 1 - 40", "Aplikacja", MB_OK);

  int numbS = 20;
  int up = 40;
  int down = 0;
  char tab[200];
  while (true) {
    sprintf_s(tab, "Czy jest wiêksza od %d?", numbS);
    int iRetKey = MessageBox(0, tab, "Aplikacja", MB_YESNO);
    if (iRetKey == IDYES) {
      down = numbS + 1;
      numbS = (up + down) / 2;
      if (numbS == up)break;
      else continue;
    }
    else {
      up = numbS;
      numbS = (up + down) / 2;
      if (numbS == up)break;
      else continue;
    }
  }
  sprintf_s(tab, "Liczba to %d", numbS);
  MessageBox(0, tab, "Aplikacja", MB_OK);

  return 0;
}