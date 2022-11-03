#include <iostream>
#include <windows.h>
#include <conio.h>
#include <string>
#define UP 72
#define DOWN 80
#define ESC 27
#define ENTER 13
#define Left 75
#define Right 77


using namespace std;


HWND console = GetConsoleWindow();
HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE); // Получаем дескриптор консоли 
HANDLE hin = GetStdHandle(STD_INPUT_HANDLE); // дескриптор окна для работы с мышкой
const int events_count = 512;
INPUT_RECORD all_events[events_count]; // массив событий, произошедших в консоли
DWORD read_event; // переменная, в которую запишется количество произошедших событий
COORD c; // переменная, отвечающая за координаты в консоли
// Текстовый курсор в точку x,y


int main();
void NewGame();
void Level1();
void Level2();
void Level3();



void GoToXY(short x, short y)
{
    SetConsoleCursorPosition(hStdOut, { x, y });
}


void ConsoleCursorVisible(bool show, short size)
{
    CONSOLE_CURSOR_INFO structCursorInfo;
    GetConsoleCursorInfo(hStdOut, &structCursorInfo);
    structCursorInfo.bVisible = show; // изменяем видимость курсора
    structCursorInfo.dwSize = size; // изменяем размер курсора
    SetConsoleCursorInfo(hStdOut, &structCursorInfo);
}


/*
cout <<" ********** \n";
cout <<" *   *    * \n";
cout <<" * * *    * \n";
cout <<" *   *    * \n";
cout <<" *   *    * \n";
cout <<" *   *    * \n";
cout <<" ********** \n";


cout <<" ********** \n";
cout <<" *   ***  * \n";
cout <<" *  *   * * \n";
cout <<" *     *  * \n";
cout <<" *    *   * \n";
cout <<" *   **** * \n";
cout <<" ********** \n";


cout <<" ********** \n";
cout <<" *  ***   * \n";
cout <<" * *   *  * \n";
cout <<" *    *   * \n";
cout <<" *     *  * \n";
cout <<" *  ***   * \n";
cout <<" ********** \n";


cout <<" ********** \n";
cout <<" *  *  *  * \n";
cout <<" *  *  *  * \n";
cout <<" *  ****  * \n";
cout <<" *     *  * \n";
cout <<" *     *  * \n";
cout <<" ********** \n";


cout <<" ********** \n";
cout <<" *  ***** * \n";
cout <<" *  *     * \n";
cout <<" *  ****  * \n";
cout <<" *      * * \n";
cout <<" *  ****  * \n";
cout <<" ********** \n";




cout <<" ********** \n";
cout <<" *   ***  * \n";
cout <<" *  *     * \n";
cout <<" *  ***** * \n";
cout <<" *  *   * * \n";
cout <<" *   ***  * \n";
cout <<" ********** \n";




cout <<" ********** \n";
cout <<" * ****** * \n";
cout <<" *     *  * \n";
cout <<" *   ***  * \n";
cout <<" *   *    * \n";
cout <<" *  *     * \n";
cout <<" ********** \n";


cout <<" ********** \n";
cout <<" *   ***  * \n";
cout <<" *  *   * * \n";
cout <<" *  ***** * \n";
cout <<" *  *   * * \n";
cout <<" *   ***  * \n";
cout <<" ********** \n";


cout <<" ********** \n";
cout <<" *   ***  * \n";
cout <<" *  *   * * \n";
cout <<" *  ***** * \n";
cout <<" *      * * \n";
cout <<" *   ***  * \n";
cout <<" ********** \n";


cout <<" ********** \n";
cout <<" *   ***  * \n";
cout <<" *  *   * * \n";
cout <<" *  *   * * \n";
cout <<" *  *   * * \n";
cout <<" *   ***  * \n";
cout <<" ********** \n";


cout << " ********** \n";
cout << " *        * \n";
cout << " *        * \n";
cout << " *        * \n";
cout << " *        * \n";
cout << " *        * \n";
cout << " ********** \n";
*/


void Level1()
{
    system("cls");
    SetConsoleMode(hin, ENABLE_MOUSE_INPUT | ENABLE_EXTENDED_FLAGS); // установка режима использования мышки

    int numbers[] = {0, 0, 0, 0};

    SetConsoleTextAttribute(hStdOut, 10);
    c.X = 20;
    c.Y = 8;
    SetConsoleCursorPosition(hStdOut, c);

    cout << " **********     ********** \n";
    c.X = 20;
    c.Y = 9;
    SetConsoleCursorPosition(hStdOut, c);
    cout << " *        *     *        * \n";
    c.X = 20;
    c.Y = 10;
    SetConsoleCursorPosition(hStdOut, c);
    cout << " *        *     *        * \n";
    c.X = 20;
    c.Y = 11;
    SetConsoleCursorPosition(hStdOut, c);
    cout << " *        *     *        * \n";
    c.X = 20;
    c.Y = 12;
    SetConsoleCursorPosition(hStdOut, c);
    cout << " *        *     *        *\n";
    c.X = 20;
    c.Y = 13;
    SetConsoleCursorPosition(hStdOut, c);
    cout << " *        *     *        *\n";
    c.X = 20;
    c.Y = 14;
    SetConsoleCursorPosition(hStdOut, c);
    cout << " **********     **********\n";


    c.X = 20;
    c.Y = 19;
    SetConsoleCursorPosition(hStdOut, c);

    cout << " **********     ********** \n";
    c.X = 20;
    c.Y = 20;
    SetConsoleCursorPosition(hStdOut, c);
    cout << " *        *     *        * \n";
    c.X = 20;
    c.Y = 21;
    SetConsoleCursorPosition(hStdOut, c);
    cout << " *        *     *        * \n";
    c.X = 20;
    c.Y = 22;
    SetConsoleCursorPosition(hStdOut, c);
    cout << " *        *     *        * \n";
    c.X = 20;
    c.Y = 23;
    SetConsoleCursorPosition(hStdOut, c);
    cout << " *        *     *        *\n";
    c.X = 20;
    c.Y = 24;
    SetConsoleCursorPosition(hStdOut, c);
    cout << " *        *     *        *\n";
    c.X = 20;
    c.Y = 25;
    SetConsoleCursorPosition(hStdOut, c);
    cout << " **********     **********\n";


    while (true)
    {
        ReadConsoleInput(hin, all_events, events_count, &read_event); // получить все события, произошедшие в консоли
        for (int i = 0; i < read_event; i++)
        { // пройтись по всем событиям
            c.X = all_events[i].Event.MouseEvent.dwMousePosition.X; // запомнить координаты мышки
            c.Y = all_events[i].Event.MouseEvent.dwMousePosition.Y;


            if (c.X >= 20 && c.X <= 32 && c.Y >= 9 && c.Y <= 14 && all_events[i].Event.MouseEvent.dwButtonState == FROM_LEFT_1ST_BUTTON_PRESSED)
            {
                SetConsoleTextAttribute(hStdOut, 10);
                c.X = 20;
                c.Y = 8;
                SetConsoleCursorPosition(hStdOut, c);

                cout << " ********** ";
                c.X = 20;
                c.Y = 9;
                SetConsoleCursorPosition(hStdOut, c);
                cout << " *   ***  * ";
                c.X = 20;
                c.Y = 10;
                SetConsoleCursorPosition(hStdOut, c); 
                cout << " *  *   * * ";
                c.X = 20;
                c.Y = 11;
                SetConsoleCursorPosition(hStdOut, c);
                cout << " *     *  * ";
                c.X = 20;
                c.Y = 12;
                SetConsoleCursorPosition(hStdOut, c);
                cout << " *    *   * ";
                c.X = 20;
                c.Y = 13;
                SetConsoleCursorPosition(hStdOut, c);
                cout << " *   **** * ";
                c.X = 20;
                c.Y = 14;
                SetConsoleCursorPosition(hStdOut, c);
                cout << " ********** ";
                numbers[0] = 2;
            }
            else if (c.X >= 36 && c.X <= 48 && c.Y >= 19 && c.Y <= 25 && all_events[i].Event.MouseEvent.dwButtonState == FROM_LEFT_1ST_BUTTON_PRESSED)
            {
                SetConsoleTextAttribute(hStdOut, 10);
                c.X = 35;
                c.Y = 19;
                SetConsoleCursorPosition(hStdOut, c);

                cout << " ********** ";
                c.X = 35;
                c.Y = 20;
                SetConsoleCursorPosition(hStdOut, c);
                cout << " *   ***  * ";
                c.X = 35;
                c.Y = 21;
                SetConsoleCursorPosition(hStdOut, c);
                cout << " *  *   * * ";
                c.X = 35;
                c.Y = 22;
                SetConsoleCursorPosition(hStdOut, c);
                cout << " *     *  * ";
                c.X = 35;
                c.Y = 23;
                SetConsoleCursorPosition(hStdOut, c);
                cout << " *    *   * ";
                c.X = 35;
                c.Y = 24;
                SetConsoleCursorPosition(hStdOut, c);
                cout << " *   **** * ";
                c.X = 35;
                c.Y = 25;
                SetConsoleCursorPosition(hStdOut, c);
                cout << " ********** ";
                numbers[3] = 2;
            }
        }
    }
}


void Level2()
{
    system("cls");
    SetConsoleMode(hin, ENABLE_MOUSE_INPUT | ENABLE_EXTENDED_FLAGS); // установка режима использования мышки

}


void Level3()
{
    system("cls");
    SetConsoleMode(hin, ENABLE_MOUSE_INPUT | ENABLE_EXTENDED_FLAGS); // установка режима использования мышки

}


void Menu()
{
    string Menu[] = { "New game", "Download",  "Settings", "Exit" };
    int  active_menu = 0;
    char ch;

    int x = 53, y = 12;
    GoToXY(x, y);

    for (int i = 0; i < size(Menu); i++)
    {
        if (i == active_menu)
            SetConsoleTextAttribute(hStdOut, FOREGROUND_GREEN );
        else
            SetConsoleTextAttribute(hStdOut, FOREGROUND_GREEN );
        GoToXY(x, y++);
        cout << Menu[i] << endl;
    }
}


void NewGame()
{
    system("cls");
    SetConsoleMode(hin, ENABLE_MOUSE_INPUT | ENABLE_EXTENDED_FLAGS); // установка режима использования мышки
    string desk2[] = {"Level 1", "Level 2", "Level 3"};


    int active_menu = 0;
    int x = 53, y = 12;
    GoToXY(x, y);

    for (int i = 0; i < size(desk2); i++)
    {
        if (i == active_menu)
            SetConsoleTextAttribute(hStdOut, FOREGROUND_GREEN );

        else SetConsoleTextAttribute(hStdOut, FOREGROUND_GREEN);
        GoToXY(x, y++);
        cout << desk2[i] << endl;
    }


    while (true)
    {
        ReadConsoleInput(hin, all_events, events_count, &read_event); // получить все события, произошедшие в консоли
        for (int i = 0; i < read_event; i++)
        { // пройтись по всем событиям
            c.X = all_events[i].Event.MouseEvent.dwMousePosition.X; // запомнить координаты мышки
            c.Y = all_events[i].Event.MouseEvent.dwMousePosition.Y;


            if (c.X >= 53 && c.X <= 60 && c.Y == 12 && all_events[i].Event.MouseEvent.dwButtonState == FROM_LEFT_1ST_BUTTON_PRESSED)
            { // если нажата ЛЕВАЯ КНОПКА МЫШКИ
                Level1();
            }
            else if (c.X >= 53 && c.X <= 60 && c.Y == 13 && all_events[i].Event.MouseEvent.dwButtonState == FROM_LEFT_1ST_BUTTON_PRESSED)
            { // если нажата ЛЕВАЯ КНОПКА МЫШКИ
                Level2();
            }
            else if (c.X >= 53 && c.X <= 60 && c.Y == 14 && all_events[i].Event.MouseEvent.dwButtonState == FROM_LEFT_1ST_BUTTON_PRESSED)
            { // если нажата ЛЕВАЯ КНОПКА МЫШКИ
                Level3();
            }
            else if (c.X >= 53 && c.X <= 60 && c.Y == 12)
            {
                SetConsoleTextAttribute(hStdOut, 10);
                c.X = 53;
                c.Y = 12;
                SetConsoleCursorPosition(hStdOut, c);
                std::cout << "Level 1";
            }
            else if (c.X >= 53 && c.X <= 60 && c.Y == 13)
            {
                SetConsoleTextAttribute(hStdOut, 10);
                c.X = 53;
                c.Y = 13;
                SetConsoleCursorPosition(hStdOut, c);
                std::cout << "Level 2";
            }
            else if (c.X >= 53 && c.X <= 60 && c.Y == 14)
            {
                SetConsoleTextAttribute(hStdOut, 10);
                c.X = 53;
                c.Y = 14;
                SetConsoleCursorPosition(hStdOut, c);
                std::cout << "Level 3";
            }
            else
            {
                int x = 53, y = 12;
                GoToXY(x, y);

                for (int i = 0; i < size(desk2); i++)
                {
                    if (i == active_menu)
                        SetConsoleTextAttribute(hStdOut, FOREGROUND_GREEN);

                    else SetConsoleTextAttribute(hStdOut, FOREGROUND_GREEN);
                    GoToXY(x, y++);
                    cout << desk2[i] << endl;
                }
            }
        }
    }
}


void Download()
{
    system("cls");
    SetConsoleMode(hin, ENABLE_MOUSE_INPUT | ENABLE_EXTENDED_FLAGS); // установка режима использования мышки


    while (true)
    {

    }
}


void Settings()
{
    system("cls");
    SetConsoleMode(hin, ENABLE_MOUSE_INPUT | ENABLE_EXTENDED_FLAGS); // установка режима использования мышки


    while (true)
    {

    }
}


void Exit()
{
    system("cls");
    exit(0);
}


int main()
{
    SetConsoleMode(hin, ENABLE_MOUSE_INPUT | ENABLE_EXTENDED_FLAGS); // установка режима использования мышки
    SetConsoleTitle(L"Заголовок консольного окна");
    setlocale(0, "RUS");
    ConsoleCursorVisible(false, 100);


    while (true)
    {
        ReadConsoleInput(hin, all_events, events_count, &read_event); // получить все события, произошедшие в консоли
        for (int i = 0; i < read_event; i++)
        { // пройтись по всем событиям
            Menu();
            c.X = all_events[i].Event.MouseEvent.dwMousePosition.X; // запомнить координаты мышки
            c.Y = all_events[i].Event.MouseEvent.dwMousePosition.Y;


            if (c.X >= 53 && c.X <= 60 && c.Y == 12 && all_events[i].Event.MouseEvent.dwButtonState == FROM_LEFT_1ST_BUTTON_PRESSED)
            { // если нажата ЛЕВАЯ КНОПКА МЫШКИ
                NewGame();
            }
            else if (c.X >= 53 && c.X <= 60 && c.Y == 13 && all_events[i].Event.MouseEvent.dwButtonState == FROM_LEFT_1ST_BUTTON_PRESSED)
            { // если нажата ЛЕВАЯ КНОПКА МЫШКИ
                Download();
            }
            else if (c.X >= 53 && c.X <= 60 && c.Y == 14 && all_events[i].Event.MouseEvent.dwButtonState == FROM_LEFT_1ST_BUTTON_PRESSED)
            { // если нажата ЛЕВАЯ КНОПКА МЫШКИ
                Settings();
            }
            else if (c.X >= 53 && c.X <= 60 && c.Y == 15 && all_events[i].Event.MouseEvent.dwButtonState == FROM_LEFT_1ST_BUTTON_PRESSED)
            { // если нажата ЛЕВАЯ КНОПКА МЫШКИ
                Exit();
            }
            else if (c.X >= 53 && c.X <= 60 && c.Y == 12)
            { 
                SetConsoleTextAttribute(hStdOut, 10);
                c.X = 53;
                c.Y = 12;
                SetConsoleCursorPosition(hStdOut, c);
                std::cout << "New game";
            }
            else if (c.X >= 53 && c.X <= 60 && c.Y == 13)
            {
                SetConsoleTextAttribute(hStdOut, 10);
                c.X = 53;
                c.Y = 13;
                SetConsoleCursorPosition(hStdOut, c);
                std::cout << "Download";
            }
            else if (c.X >= 53 && c.X <= 60 && c.Y == 14)
            {
                SetConsoleTextAttribute(hStdOut, 10);
                c.X = 53;
                c.Y = 14;
                SetConsoleCursorPosition(hStdOut, c);
                std::cout << "Settings";
            }
            else if (c.X >= 53 && c.X <= 60 && c.Y == 15)
            {
                SetConsoleTextAttribute(hStdOut, 10);
                c.X = 53;
                c.Y = 15;
                SetConsoleCursorPosition(hStdOut, c);
                std::cout << "Exit";
            }
        }
    }
}