
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


void setup() {
  // put your setup code here, to run once:

}
        
void loop() {
  // put your main code here, to run repeatedly:

}
