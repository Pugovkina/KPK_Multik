# include "Pugovkina_Lib.h"
# include "TXLib.h"
# include <stdlib.h>

int main()
    {
    txCreateWindow (1100, 800);
    Fon_Rectangle (RGB (151, 255, 255), TX_LIGHTGREEN);

    for (int kolichestvo = 0; kolichestvo <= 50; kolichestvo ++)
		Flowers (rand() % 1100, 260 + rand() % 800,
		RGB ( 60 + rand() % 80, 190 + rand() % 30, 200 + rand() %  40),
		RGB (210 + rand() % 11, 210 + rand() % 11,   0 + rand() % 166));

    txSelectFont ("Arial", 50);
    txTextOut (150, 100, "��������� ������ � ������� �����������");

    KacheliDraw (150, 250, 1, 1, 0, TX_DARKGRAY);
    txSelectFont ("Arial", 20);
    txTextOut (30, 280, "������: ��������� ������� x = 1, y = 1, ������ �� ���������");

    KacheliDraw (650, 250, 1.5, 1.5, 0, TX_DARKGRAY);
    txTextOut (530, 290, "������: ��������� ������� x = 1.5, y = 1.5, ������ �� ���������");

    int t = 0;
    while (t <= 30)
        {
        KacheliDraw (400, 420, 1, 1, 2 - t%2 - 1, TX_DARKGRAY);

        txSleep(150);

        t++;
        }
    txTextOut (290, 455, "������ ������ ���������, �� ���-�� ����� �� ��� :(");

    return 0;
    }


