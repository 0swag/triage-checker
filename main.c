#include <windows.h>
#include <stdio.h>
#include <strings.h>

int main()
{
  char wpPath[MAX_PATH];
  char* triagePath = "C:\\Users\\Admin\\Pictures\\My Wallpaper.jpg";
  SystemParametersInfo(SPI_GETDESKWALLPAPER, MAX_PATH, wpPath, 0);
  printf("[+] Wallpaper path: %s\n", wpPath);
  if(strcmp(wpPath, triagePath) == 0)
  {
    printf("[+] Triage wallpaper detected, exiting");
    ExitProcess(0);
  }
}
