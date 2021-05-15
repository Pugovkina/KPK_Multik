//{===========================================================================
//! @brief	         Function library
//!
//! @author	        Tatiana Pugovkina, sity Omsk, 2021
//!
//! @mainpage  �������:
//!				- @ref Titles ()
//!				- @ref Flowers ()
//!				- @ref DomDraw ()
//!             - @ref ElkaDraw ()
//!				- @ref CloudDraw ()
//!				- @ref SolnceDraw ()
//!             - @ref KacheliDraw ()
//!				- @ref Fon_Rectangle ()
//!
//! <br>
//! <table border = 0 align = "center">
//!  <tr>
//!    <td> @image html MEM.jpg </td>
//!    <td>
//!      @note <i>� ���� ��� ������ ����� � �������� ������; ��������� �� ����� ������ -
//!            �� �����, ��� ������ ��� ���������� �����</i> &nbsp;&nbsp; /�������/
//!    </td>
//! </table>
//}===========================================================================

#include "TXLib.h"

void Fon_Rectangle (COLORREF nebo_Color, COLORREF zemlia_Color);

void Flowers (int flower_centerX, int flower_centerY, COLORREF flower_center_Color, COLORREF lepestok_Color);

void Titles (COLORREF fon_Color, COLORREF text_Color, char text_first_string[], char text_second_string[]);

void SolnceDraw (double x, double y, double sizeX, double sizeY, double eyes, double lenghLuch, double smile, COLORREF sunColor);

void CloudDraw (double x, double y, double sizeX, double sizeY, COLORREF cloudColor);

void DomDraw (int x, double y, double sizeX, double sizeY, double opendverX, double opendverY, COLORREF domColor, COLORREF krischaColor, COLORREF oknoColor, COLORREF trubaColor, COLORREF dverColor);

void ElkaDraw (double x, double y, double sizeX, double sizeY, double veterX, double veterY, COLORREF hvoiaColor, COLORREF stvolColor);

void KacheliDraw (int x, int y, double sizeX, double sizeY, double height_kacheli, COLORREF kacheliColor);

//{-------------------------------------------------------------------------------------------------------------
//! ��������� ����� �� ��� �����: 1�-����� - ���� � 2�-����� - "�����"<br>
//! ���������� ���������� �� ����� � ������������ (0, 250, 1100, 250)
//!
//! @param nebo_Color    nebo_Color   - ���� ����
//! @param zemlia_Color  zemlia_Color - ���� "�����"
//!
//! @note                ���� ���� � "�����" ������� �� ������. ��� ��������� ������ - ������� ����,
//!						 ��� ��������� - ����� ����� ����
//!
//! @par				 ������ �������������:
//! @code
//!						 Fon_Rectangle (RGB (151, 255, 255), TX_LIGHTGREEN);
//! @endcode
//}-------------------------------------------------------------------------------------------------------------

void Fon_Rectangle (COLORREF nebo_Color, COLORREF zemlia_Color)
	{
    txSetColor     (nebo_Color);
    txSetFillColor (nebo_Color);

    txRectangle (0, 0, 1100, 250);

    txSetColor     (zemlia_Color);
    txSetFillColor (zemlia_Color);

    txRectangle (0, 250, 1100, 800);
	}

//{-------------------------------------------------------------------------------------------------------------
//! ������ ������
//! <br>��������� ������: 5 ��������� � ���������
//!
//! <table border = 0>
//!  <tr>
//!   <td> @image html flower.jpg </td>
//!   <td>
//!     @param flower_centerX       flower_centerX      - ���������� X ������ �������� ������ </td>
//!     @param flower_centerY       flower_centerY      - ���������� Y ������ �������� ������ </td>
//!     @param flower_center_Color  flower_center_Color - ���� ��������� ������ </td>
//!     @param lepestok_Color       lepestok_Color      - ���� ��������� ������
//!   </td>
//!  </tr>
//! </table>
//!
//! @note                       ������� �������� ��������, ������� � �������� ������, ����� �������� ���������.<br>
//!                             ���� ��������� ���������� ��������� ������� � ��������� �� ������-������ �� ����-������;<br>
//!								���� ��������� - � ��������� �� ������-�������� �� ����-��������
//!
//! @par			            ������ �������������:
//! @code
//! 							Flowers (300, 260, RGB ( 60 + rand() % 80, 190 + rand() % 30, 200 + rand() %  40),
//! 											   RGB (210 + rand() % 11, 210 + rand() % 11,   0 + rand() % 166));
//! @endcode
//}-------------------------------------------------------------------------------------------------------------

void Flowers (int flower_centerX, int flower_centerY, COLORREF flower_center_Color, COLORREF lepestok_Color)
	{
    txSetColor     (lepestok_Color);
    txSetFillColor (lepestok_Color);

    txCircle (flower_centerX + 3, flower_centerY - 5, 5);
    txCircle (flower_centerX + 5, flower_centerY + 2, 5);
    txCircle (flower_centerX,     flower_centerY + 5, 5);
    txCircle (flower_centerX - 5, flower_centerY + 2, 5);
    txCircle (flower_centerX - 3, flower_centerY - 5, 5);

    txSetColor     (flower_center_Color);
    txSetFillColor (flower_center_Color);

    txCircle (flower_centerX, flower_centerY, 3);
	}

//{-------------------------------------------------------------------------------------------------------------
//! ������� ������� �� �����.  <br>
//! ������� ��������� ����� �����, ������� �� 2-� �������. <br>
//! ����� ���� Arial, ������ ������ - 100
//!
//! @param fon_Color             fon_Color            - ����� ���� ����
//! @param text_Color            text_Color           - ����� ���� ������
//! @param text_first_string[]   text_first_string[]  - ������� ����� �� ������ �������
//! @param text_second_string[]  text_second_string[] - ������� ����� �� ������ �������
//!
//! @note                        ����� ��������� �� ������ ������������ ���������� � = 550.<br>
//!                              ����� ���������� ����� ������, ������� � ���������� �� Y  <br>
//!                              ��� ������ ������: Y = 700,<br>
//!                              ��� ������ ������: Y = 800 <br>
//!                              � �������� ����� �� ���������� Y, �� Y = 350 (������ �������)
//!
//! @see                         <a href="http://storage.ded32.net.ru/Lib/TX/TXUpdate/Doc/HTML.ru/a00082.htm#ga09938df8859ae8b62638a3af76ee6735">txSetTextAlign ()</a>
//!
//! @par			             ������ �������������:
//! @code
//!                              Titles (RGB (89, 184, 33), TX_WHITE, "����������", "�������� c ����������");
//! @endcode
//}-------------------------------------------------------------------------------------------------------------

void Titles (COLORREF fon_Color, COLORREF text_Color, char text_first_string[], char text_second_string[])
    {
    int t = 0;
    while (t <= 35)
        {
     	txClear ();
     	txSetColor (text_Color);
        txSetFillColor (fon_Color);

        txSetTextAlign (TA_CENTER);

		txSelectFont ("Arial", 100);
        txTextOut (550, 700 - t*10, text_first_string);
        txTextOut (550, 800 - t*10, text_second_string);

        txSetTextAlign ();

        txSleep (90);

        t++;
        }
    }

//{-------------------------------------------------------------------------------------------------------------
//! ������ ������ � ��������
//!
//! @param x          x         - �-���������� ������ ������
//! @param y          y         - Y-���������� ������ ������
//! @param sizeX      sizeX     - ��������� ������� �� ���������� �
//! @param sizeY      sizeY     - ��������� ������� �� ���������� Y
//! @param eyes       eyes      - ��������� ������� ����
//! @param lenghLuch  lenghLuch - ����� ����
//! @param smile      smile     - ������ ������
//! @param sunColor   sunColor  - ���� ������
//!
//! @note                        ������ �������� � ������� �������. ������ ������ - 30 ��������. � ������ - 8 �������.<br>
//!                              ��� ��������� ���� ������������ �������.    <br>
//!                              ��� ��������� ��� � ���� ������������ ������. <br>
//!                              ��� ��������� �������� ��������� smile (-3 �� 1) ����� �������, ����� ������ - "�������������"<br>
//!                              ��� ��������� �������� ��������� eyes (-2.5 �� 2.5) ����� �������, ����� ������ - "������"
//!
//! @see                         <a href="http://storage.ded32.net.ru/Lib/TX/TXUpdate/Doc/HTML.ru/a00082.htm#gaaf82e7c5a0fd06548f42c757f73d3dae">txEllipse ()</a> &nbsp;&nbsp;&nbsp;
//!                              <a href="http://storage.ded32.net.ru/Lib/TX/TXUpdate/Doc/HTML.ru/a00082.htm#gacbbb638439ad7ba88804178516019fb1">txPolygon ()</a>
//!
//! @par			             ������ �������������:
//! @code
//!                              SolnceDraw (150, 100, 1, 1, -2, 1, 0.1, TX_YELLOW);
//! @endcode
//!
//! @section           Screenshots                  ���������
//! <table border = 0>
//!  <tr> <td> @image html solnca.jpg </td> </tr>
//!
//! </table>
//}-------------------------------------------------------------------------------------------------------------

void SolnceDraw (double x, double y, double sizeX, double sizeY, double eyes, double lenghLuch, double smile, COLORREF sunColor)
    {
    txSetColor     (sunColor, 3);
    txSetFillColor (sunColor);

    txEllipse (x - 30*sizeX, y - 30*sizeY, x + 30*sizeX, y + 30*sizeY);

    txLine (x + 20*sizeX, y,            x + 60*sizeX * lenghLuch, y);
    txLine (x - 20*sizeX, y,            x - 60*sizeX * lenghLuch, y);
    txLine (x,            y + 20*sizeY, x,                        y + 60*sizeY * lenghLuch);
    txLine (x,            y - 20*sizeY, x,                        y - 60*sizeY * lenghLuch);
    txLine (x + 20*sizeX, y + 20*sizeY, x + 50*sizeX * lenghLuch, y + 50*sizeY * lenghLuch);
    txLine (x + 20*sizeX, y - 20*sizeY, x + 50*sizeX * lenghLuch, y - 50*sizeY * lenghLuch);
    txLine (x - 20*sizeX, y + 20*sizeY, x - 50*sizeX * lenghLuch, y + 50*sizeY * lenghLuch);
    txLine (x - 20*sizeX, y - 20*sizeY, x - 50*sizeX * lenghLuch, y - 50*sizeY * lenghLuch);

    txSetFillColor (RGB (119, 187, 255));
    txEllipse (x - 15*sizeX, y - 5*sizeY + eyes, x -  5*sizeX, y - 15*sizeY - eyes);
    txEllipse (x +  5*sizeX, y - 5*sizeY + eyes, x + 15*sizeX, y - 15*sizeY - eyes);

    txSetFillColor (TX_BROWN);
    POINT Nos[] = {{x - 8*sizeX, y - 1*sizeY},
                   {x + 8*sizeX, y - 1*sizeY},
                   {x + 1*sizeX, y + 8*sizeY}};
    txPolygon (Nos, 3);

    txSetFillColor (TX_RED);
    txEllipse (x - 22*sizeX - smile, y + 13*sizeY + smile, x + 18*sizeX - smile + 5, y + 20*sizeY - smile);
    }

//{-------------------------------------------------------------------------------------------------------------
//! ������ ������
//!
//! <table border = 0>
//!  <tr>
//!   <td> @image html Cloud.jpg </td>
//!   <td>
//!    @param x           x          - �-���������� ������ ������
//!    @param y           y          - Y-���������� ������ ������
//!    @param sizeX       sizeX      - ��������� ������� �� ���������� �
//!    @param sizeY       sizeY      - ��������� ������� �� ���������� Y
//!    @param cloudColor  cloudColor - ���� ������
//!   </td>
//!  </tr>
//! </table>
//!
//! @note                        ������ �������� � ������� 3-� ��������.
//!
//! @par			             ������ �������������:
//! @code
//!                              CloudDraw (200, 230, 1, 1.2, RGB (160, 217, 250));
//! @endcode
//}-------------------------------------------------------------------------------------------------------------

void CloudDraw (double x, double y, double sizeX, double sizeY, COLORREF cloudColor)
    {
    txSetColor     (cloudColor);
    txSetFillColor (cloudColor);

	txEllipse (x - 60*sizeX, y - 20*sizeY, x - 20*sizeX, y + 20*sizeY);
    txEllipse (x - 30*sizeX, y - 30*sizeY, x + 30*sizeX, y + 30*sizeY);
    txEllipse (x + 20*sizeX, y - 20*sizeY, x + 65*sizeX, y + 30*sizeY);
    }

//{-------------------------------------------------------------------------------------------------------------
//! ������ ��� � ����������� ������ � ������
//!
//! <table border = 0>
//!  <tr>
//!   <td> @image html Dom.jpg </td>
//!   <td>
//!     @param x             x            - �-��������� ���������� ��������� ����
//!     @param y             y            - Y-��������� ���������� ��������� ����
//!     @param sizeX         sizeX        - ��������� ������� ���� �� ���������� �
//!     @param sizeY         sizeY        - ��������� ������� ���� �� ���������� Y
//!     @param opendverX     opendverX    - ���������� X - "��������" �����
//!     @param opendverY     opendverY    - ���������� Y - "��������" �����
//!     @param domColor      domColor     - ���� ����
//!     @param krischaColor  krischaColor - ���� �����
//!     @param oknoColor     oknoColor    - ���� ����
//!     @param trubaColor    trubaColor   - ���� �����
//!     @param dverColor     dverColor    - ���� �����
//!   </td>
//!  </tr>
//! </table>
//!
//! @note   � ���� ���� �����, �����, � ���� ����� ������ ����, ���� ���� ���� ����� ��������. �����, ��� ��������
//!         ��������� = 0, ����� �����������. �������� �������� ��� �� �����.
//!
//! @par			             ������ �������������:
//! @code
//!       DomDraw (100, 650, 1,3, 1,3, 1.5, 1.5, TX_BROWN, TX_BLUE, RGB (134, 134, 134), TX_DARKGRAY, TX_YELLOW);
//! @endcode
//}-------------------------------------------------------------------------------------------------------------

void DomDraw (int x, double y, double sizeX, double sizeY, double opendverX, double opendverY, COLORREF domColor, COLORREF krischaColor, COLORREF oknoColor, COLORREF trubaColor, COLORREF dverColor)
	{
	txSetColor (TX_BLACK, 3);

	txSetFillColor (domColor);
	txRectangle (x,            y,            x + 80*sizeX, y + 80*sizeY);
	txRectangle (x + 60*sizeX, y + 40*sizeY, x + 80*sizeX, y + 80*sizeY);

	txSetFillColor (krischaColor);
	txLine      (x + 40*sizeX, y - 40*sizeY, x - 10*sizeX, y + 10*sizeY);
	txLine      (x + 40*sizeX, y - 40*sizeY, x + 90*sizeX, y + 10*sizeY);
	txFloodFill (x + 40*sizeX, y - 10*sizeY);

	txSetFillColor (trubaColor);
	POINT Tryba[] = {{x + 60*sizeX, y - 20*sizeY},
	                 {x + 60*sizeX, y - 50*sizeY},
					 {x + 80*sizeX, y - 50*sizeY},
					 {x + 80*sizeX, y +  1*sizeY}};
	txPolygon (Tryba, 4);

	txSetFillColor (oknoColor);
	txRectangle (x + 20*sizeX, y + 20*sizeY, x + 50*sizeX, y + 40*sizeY);

	txSetFillColor (dverColor);
	POINT Dver[] = {{x + 60*sizeX,             y + 40*sizeY},
	                {x + 60*sizeX,             y + 80*sizeY},
					{x + 80*sizeX - opendverX, y + 80*sizeY + opendverY},
					{x + 80*sizeX - opendverX, y + 40*sizeY + opendverY}};
	txPolygon (Dver, 4);

	txSetFillColor (TX_BLACK);
	txEllipse (x + 70*sizeX - opendverX/2, y + 55*sizeY + opendverY/2,
			   x + 75*sizeX - opendverX/2, y + 65*sizeY + opendverY/2);
	}

//{-------------------------------------------------------------------------------------------------------------
//! ������ ����
//!
//! <table border = 0>
//!  <tr>
//!   <td> @image html Elka.jpg </td>
//!   <td>
//!     @param x           x          - �-��������� ���������� ��������� ����
//!     @param y           y          - Y-��������� ���������� ��������� ����
//!     @param sizeX       sizeX      - ��������� ������� ���� �� ���������� �
//!     @param sizeY       sizeY      - ��������� ������� ���� �� ���������� Y
//!     @param veterX      veterX     - ���������� X - "������������" ����
//!     @param veterY      veterY     - ���������� Y - "������������" ����
//!     @param hvoiaColor  hvoiaColor - ���� ����
//!     @param stvolColor  stvolColor - ���� ������
//!   </td>
//!  </tr>
//! </table>
//!
//! @note    ���� �������� 2-�� ��������������. ����� �������� ����� �������������. ���� ���������, ����������
//!          �� ������ "������� �������", �� �� ��������� ��� �� ������ ���� �����. ����� �������� ���� ���� �
//!          ���� ������ ����
//!
//! @par			  ������ �������������:
//! @code
//!       ElkaDraw (250, 560, 1, 1, 0, 0, TX_GREEN, TX_BROWN);
//! @endcode
//}-------------------------------------------------------------------------------------------------------------

void ElkaDraw (double x, double y, double sizeX, double sizeY, double veterX, double veterY, COLORREF hvoiaColor, COLORREF stvolColor)
    {
    txSetColor (hvoiaColor, 3);
    txSetFillColor (hvoiaColor);

    POINT elka_verh[] = {{x + veterX,   y - veterY},
                         {x + 20*sizeX, y + 40*sizeY},
                         {x - 20*sizeX, y + 40*sizeY}};
    txPolygon (elka_verh, 3);

    POINT elka_niz[] = {{x,            y + 30*sizeY},
                        {x + 40*sizeX, y + 70*sizeY},
                        {x - 40*sizeX, y + 70*sizeY}};
    txPolygon (elka_niz, 3);

    txSetColor (stvolColor, 3);
    txSetFillColor (stvolColor);

    txRectangle (x - 10*sizeX, y + 73*sizeY, x + 10*sizeX, y + 95*sizeY);
    }

//{-------------------------------------------------------------------------------------------------------------
//! ������ ������
//!
//! <table border = 0>
//!  <tr>
//!   <td> @image html Kacheli.jpg </td>
//!   <td>
//!     @param x               x              - �-��������� ���������� ��������� ������
//!     @param y               y              - Y-��������� ���������� ��������� ������
//!     @param sizeX           sizeX          - ��������� ������� ������ �� ���������� �
//!     @param sizeY           sizeY          - ��������� ������� ������ �� ���������� Y
//!     @param height_kacheli  height_kacheli - ��������, �������� �� "��������" ������
//!                                             ("0" - ������ �� ���������, "1" - �������� ��������)
//!     @param kacheliColor    kacheliColor   - ���� ������
//!   </td>
//!  </tr>
//! </table>
//!
//! @note
//!
//! @par			  ������ �������������:
//! @code
//!       KacheliDraw (400, 400, 1, 1, 0, TX_BROWN);
//! @endcode
//}-------------------------------------------------------------------------------------------------------------

void KacheliDraw (int x, int y, double sizeX, double sizeY, double height_kacheli, COLORREF kacheliColor)
    {
    txSetColor (kacheliColor, 3);
    txSetFillColor (kacheliColor);

    txLine (x + 40*sizeX, y + 20*sizeY, x - 40*sizeX, y + 20*sizeY);
    txLine (x,            y,            x + 40*sizeX, y + 20*sizeY);
    txLine (x - 40*sizeX, y + 20*sizeY, x,            y);

    txFloodFill (x, y + 10*sizeY);

    if (height_kacheli == 1)
        {
        txLine (x - 100*sizeX, y + 20*sizeY, x + 100*sizeX, y - 20*sizeY);
        txLine (x + 100*sizeX, y - 20*sizeY, x +  95*sizeX, y - 35*sizeY);
        txLine (x - 100*sizeX, y + 20*sizeY, x - 107*sizeX, y);
        }
    else
        {
        txLine (x - 100*sizeX, y - 20*sizeY, x + 100*sizeX, y+20);
        txLine (x + 100*sizeX, y + 17*sizeY, x + 105*sizeX, y);
        txLine (x - 100*sizeX, y - 20*sizeY, x - 95*sizeX, y-43);
        }
    }
