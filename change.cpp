#include <windows.h>
#include <iostream>
#include<stdlib.h>
#include <time.h>
using namespace std;

void setWall(int i)
{
    WCHAR wc1[100] = L"C:\\Users\\Celeglow Zhou\\Desktop\\wallpaper\\MCwallpaper";
    WCHAR wc2[12][100] = { L"0.png",L"1.png", L"2.png",L"3.png",L"4.png",L"5.png",L"6.png",L"7.png",L"8.png",L"9.png",L"10.png",L"11.png" }; //sunrise ...
    if (i >= 0 && i <= 11) {
        wcscat_s(wc1, wc2[i]);
    }
    else {
        exit(1);
    }
    

    LPWSTR filepath = wc1;
    int result;
    result = SystemParametersInfo(SPI_SETDESKWALLPAPER, 0, filepath, SPIF_UPDATEINIFILE);

    if (result)
    {
        cout << "Wallpaper set";
    }
    else
    {
        cout << "Wallpaper not set";
        cout << "SPI returned" << result;
    }
}

int main() {
    SYSTEMTIME sys;
    GetLocalTime(&sys);
    int whichone = (int)sys.wHour;
    //cout << whichone;;
    setWall(whichone/2);
}