
#include <SPFD5408_Adafruit_GFX.h>    // Core graphics library
#include <SPFD5408_Adafruit_TFTLCD.h> // Hardware-specific library

// LCD Pin

#define LCD_CS A3 // CS
#define LCD_CD A2 // RS
#define LCD_WR A1 // WR
#define LCD_RD A0 // RD
#define LCD_RESET A4 // Optional : otherwise connect to Arduino's reset pin

// Assign human-readable names to some common 16-bit color values:
#define BLACK   0x0000
#define RED    0x001F
#define BLUE     0xF800
#define GREEN   0x07E0
#define CYAN    0x07FF
#define MAGENTA 0xF81F
#define YELLOW  0xFFE0
#define WHITE   0xFFFF

// Init LCD

Adafruit_TFTLCD tft(LCD_CS, LCD_CD, LCD_WR, LCD_RD, LCD_RESET);

//-- Setup

void setup(void) {

  // Inicialize the controller

  tft.reset();

  tft.begin(0x9341);

  tft.setRotation(0); // Need for the Mega, please changed for your choice or rotation initial

  // Screen white

  tft.fillScreen(WHITE);

    tft.fillRect(70, 130, 30,30,RED);
    tft.fillRect(135, 130, 30,30,RED);
    tft.fillRect(70, 190, 95,20,RED);
    delay(1000);
    
    tft.fillRect(70, 130, 30,30,BLUE);
    tft.fillRect(135, 130, 30,30,BLUE);
    tft.fillRect(70, 190, 95,20,BLUE);
    delay(1000);
    
    tft.fillRect(70, 130, 30,30,GREEN);
    tft.fillRect(135, 130, 30,30,GREEN);
    tft.fillRect(70, 190, 95,20,GREEN);

    tft.setTextSize (2);
    tft.setTextColor(BLACK);
    tft.setCursor (55, 280);
    tft.println("Welcome Sir");

    delay(500);
    
    tft.fillRect(135, 130, 30,30,WHITE);
    tft.fillRect(70, 130, 30,30,GREEN);
    tft.fillRect(135, 145, 30,15,GREEN);
    tft.fillRect(70, 190, 95,20,GREEN);

    delay(500);
    
    tft.fillRect(70, 130, 30,30,GREEN);
    tft.fillRect(135, 130, 30,30,GREEN);
    tft.fillRect(70, 190, 95,20,GREEN);
    
  }

 


void loop()
{
  tft.setCursor (20, 20);
  tft.fillScreen(WHITE);
  tft.print("MY ");
  delay(200);
  tft.print("Job ");
  delay(200);
  tft.print("Is ");
  delay(200);
  tft.print("To ");
  delay(200);
  tft.println("Help");
  delay(200);
  tft.setCursor (100, 50);
  tft.print("You");
  delay(200);
  tft.setCursor (110, 70);
  tft.print("..");
  tft.setCursor (110, 78);
  tft.print("__");
  tft.setCursor (40, 250);
  tft.println("@elhamoudrayan");
  delay(5000);
  tft.fillScreen(WHITE);
  
}
