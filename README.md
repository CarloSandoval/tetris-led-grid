# tetris-led-grid
include all c/c++ files to implement a Old Classic version of the tetris game on a ESP32 board, using arduino IDE.


/*
  Snake config vs jumpy config

  Jumpy config is the default config for displaying 
  in a virtual array

  Snake is the defaul config (optimal) when wiring
  the led strips

  the objective of this code is to transalte between
  these 2 config.

//display grid from jumpy config to snake config

  for(int y=0, y<width; y++)
  {
      for(int x=0, x<width; x++)
      {

        if(y%2)//is odd
        {
          i = ((y+1)*width) - (x-1);
        }
        else
        {
          i = (y * width) + x;
        }
        
      }
  }

*/

