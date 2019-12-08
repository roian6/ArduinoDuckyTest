#include <stdio.h>
#include <conio.h>
#include <windows.h>
#include <strsafe.h>

#define SELF_REMOVE_STRING  TEXT("cmd.exe /C ping 1.1.1.1 -n 1 -w 3000 > Nul & Del /f /q \"%s\"")

CONSOLE_SCREEN_BUFFER_INFO csbi;
int i, j;

void centerPrint(char *text) {
	int fieldWidth = csbi.srWindow.Right - csbi.srWindow.Left + 1;
    int padlen = (fieldWidth - strlen(text)) / 2;
    printf("%*s%s%*s\n", padlen, "", text, padlen, "");
}

void DelMe()
{
    TCHAR szModuleName[MAX_PATH];
    TCHAR szCmd[2 * MAX_PATH];
    STARTUPINFO si = {0};
    PROCESS_INFORMATION pi = {0};

    GetModuleFileName(NULL, szModuleName, MAX_PATH);

    StringCbPrintf(szCmd, 2 * MAX_PATH, SELF_REMOVE_STRING, szModuleName);

    CreateProcess(NULL, szCmd, NULL, NULL, FALSE, CREATE_NO_WINDOW, NULL, NULL, &si, &pi);

    CloseHandle(pi.hThread);
    CloseHandle(pi.hProcess);
}

void clear(){
	system("cls");
	system("color 07");
}

void printBlue(){
	system("color 17");
	for(i=0;i<3;i++){
		printf("\n\n\nA problem has been detected and Windows has been shut down to prevent damage to your computer.\n\nIf this is the first time you've seen this stop error screen, restart your computer. if this screen appears again, follow these steps:\n\nCheck to make sure any new hardware or software is properly installed. I this is a new installation, ask your hardware or software manufacturer for and Windows updates you might need.\n\nIf problems continue, disable or remove any newly installed hardware or software. Disable BIOS memory options such as caching or shadowing. If you need to use Safe Mode to remove or disable components, restart your computer, press F8 to select Advanced Startup Options, and then select Safe Mode.\n\nTechnical information:\n\n*** STOP: 0x000000FE (0x00000008, 0x000000006, 0x00000009, 0x847075cc)");	
	}
}

void printSombra(){
	system("color d");	
	printf("\n");
	printf("　　　　　　　　　　　:PB@Bk:\n");
	printf("　　　　　　　　　,jB@@B@B@B@BBL.\n");
	printf("　　　　　　　 7G@B@B@BMMMMMB@B@B@Nr\n");
	printf("　　　　　 :kB@B@@@MMOMOMOMOMMMM@B@B@B1,\n");
	printf("　　　 :5@B@B@B@BBMMOMOMOMOMOMOMM@@@B@B@BBu.\n");
	printf("　　70@@@B@B@B@BXBBOMOMOMOMOMOMMBMPB@B@B@B@B@Nr\n");
	printf("　G@@@BJ iB@B@@　OBMOMOMOMOMOMOM@2　B@B@B. EB@B@S\n");
	printf("　@@BM@GJBU.　iSuB@OMOMOMOMOMOMM@OU1:　.kBLM@M@B@\n");
	printf("　B@MMB@B　　　 7@BBMMOMOMOMOMOBB@:　　　 B@BMM@B\n");
	printf("　@@@B@B　　　　 7@@@MMOMOMOMM@B@:　　　　 @@B@B@\n");
	printf("　@@OLB.　　　　　BNB@MMOMOMM@BEB　　　　　rBjM@B\n");
	printf("　@@　@　　　　　 M　OBOMOMM@q　M　　　　　.@　@@\n");
	printf("　@@OvB　　　　　 B:u@MMOMOMMBJiB　　　　　.BvM@B\n");
	printf("　@B@B@J　　　　 0@B@MMOMOMOMB@B@u　　　　 q@@@B@\n");
	printf("　B@MBB@v　　　 G@@BMMMMMMMMMMMBB@5　　　 F@BMM@B\n");
	printf("　@BBM@BPNi　 LMEB@OMMMM@B@MMOMM@BZM7　 rEqB@MBB@\n");
	printf("　B@@@BM　B@B@B　qBMOMB@B@B@BMOMBL　B@B@B　@B@B@M\n");
	printf("　 J@@@@PB@B@B@B7G@OMBB.　 ,@MMM@qLB@B@@@BqB@BBv\n");
	printf("　　　iGB@,i0@M@B@MMO@E　:　M@OMM@@@B@Pii@@N:\n");
	printf("　　　　 .　 B@M@B@MMM@B@B@B@MMM@@@M@B\n");
	printf("　　　　　　 @B@B.i@MBB@B@B@@BM@::B@B@\n");
	printf("　　　　　　 B@@@ .B@B.:@B@ :B@B　@B@O\n");
	printf("　　　　　　　 :0 r@B@　B@@ .@B@: P:\n");
	printf("　　　　　　　　　 vMB :@B@ :BO7\n");
	printf("　　　　　　　　　　　 ,B@B\n\n");

	printf("                 HACKED BY ARDUINO\n\n\n\n\n\n");
	centerPrint("[Arduino Rubber Ducky Test by 정찬효]\n");
	centerPrint("당신의 컴퓨터는 방금 이 .exe 파일을 온라인에서 내려받아 실행했습니다.\n");
	centerPrint("하지만 다행이게도, 이 프로그램은 단순 테스트용 파일이며 아무런 기능이 없습니다!\n");
	centerPrint("프로그램에 대해 더 알고 싶다면, 아래 링크를 참조하세요.\n"); 
	centerPrint("https://github.com/roian6/ArduinoDuckyTest\n\n\n\n\n");
	centerPrint("*이 프로그램은 컴퓨터에 어떠한 영향도 미치지 않으며, 실행이 끝나면 자동으로 삭제됩니다.*\n");	
	centerPrint("종료하려면 아무 키나 누르세요...");
}

int main()
{
	system("mode con COLS=700");
	ShowWindow(GetConsoleWindow(),SW_MAXIMIZE);
	SendMessage(GetConsoleWindow(),WM_SYSKEYDOWN,VK_RETURN,0x20000000);
	
	HANDLE hstdout = GetStdHandle(STD_OUTPUT_HANDLE);
    GetConsoleScreenBufferInfo(hstdout, &csbi);

    csbi.dwSize.X = csbi.dwMaximumWindowSize.X;
    csbi.dwSize.Y = csbi.dwMaximumWindowSize.Y;
    SetConsoleScreenBufferSize(hstdout, csbi.dwSize);

    HWND x = GetConsoleWindow();
    ShowScrollBar(x, SB_BOTH, FALSE);
    
    //dirrrrrrrrrrty code
    
    printBlue();
    Sleep(1000);
	clear();
    Sleep(100);
    printBlue();
    Sleep(300);
    for(j=0;j<4;j++){
    	clear();
    	Sleep(30);
    	printBlue();
    	Sleep(30);
	}
    system("cls");
    Sleep(100);
    printSombra();
	//while(1){
		getch();
	//}
	
	
	DelMe();
	
}
