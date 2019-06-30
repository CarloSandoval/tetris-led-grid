#include <FastLED.h>
#define LED_PIN     5
#define NUM_LEDS    128
int ip =0, width = 8, height = 16, H = 15;
CRGB leds[NUM_LEDS];

class LED_GRID 
{
  public:
  int numOfCells;
  CRGB leds[];

  TETRIS_GAME (int, int);
  
  void display();
  void setCell(int x, int y, CRGB color);//default to portrait config
  void clear();//not really needed?
};

TETRIS_GAME::TETRIS_GAME(int numCells, int ledPin)
{
  numOfCells = numCells;
  leds[numCells];
  //singleton class
  FastLED.addLeds<WS2812, ledPin, GRB>(leds, numCells);
}

void TETRIS_GAME::setCell(int x, int y, CRGB color)
{
  //portrait config
  int ip = ( ((i % width)+((i % width)%2)) * H ) + (i % width)   +   ((i / width) * (int)pow(-1, (i % width)%2));
  leds[ip] = color;
}


void TETRIS_GAME::display()
{
  FastLED.show();
}


void setup() {
  // put your setup code here, to run once:
}

void loop() {
  // put your main code here, to run repeatedly:

  for(int i=0; i<NUM_LEDS; i++)
  {
    ip = ( ((i % width)+((i % width)%2)) * H ) + (i % width)   +   ((i / width) * (int)pow(-1, (i % width)%2));

    ip = ip % NUM_LEDS;
    leds[ip] = CRGB {0, 0, 255};
    FastLED.show();
    delay(40);
  }
  
    for(int i=0; i<NUM_LEDS; i++)
  {
    leds[i] = CRGB {0, 255, 0};
    FastLED.show();
    delay(40);
  }
}
