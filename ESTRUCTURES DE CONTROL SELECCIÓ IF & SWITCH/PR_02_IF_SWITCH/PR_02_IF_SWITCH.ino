/**********************************************************************************
**                                                                               **
**                          Control Structures                                   **
**                                                                               **
** MOURAD EL FILALI                                                   29/01/2018 **
**********************************************************************************/

//********** Includes *************************************************************

//********** Variables ************************************************************
int tempAigua = 101;

//********** Setup ****************************************************************
void setup()              // run once, when the sketch starts
{
  Serial.begin(9600);     // set up Serial library at 9600 bps

  if (tempAigua < 100)
  {
    Serial.print("Aigua encara no bull!");
  } 

  else if (tempAigua >= 100)
  
  {
    Serial.print("Aigua bullint!");
  }

  else
  {

  }

  
}


//********** Loop *****************************************************************
void loop()   // we need this to be here even though its empty
{
}

//********** Funcions *************************************************************

