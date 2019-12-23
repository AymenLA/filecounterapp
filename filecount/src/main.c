/******************************************************************************
* \brief  : ORAGANISME=ANTHEA-TS.COM
* \brief : PROJET=COMPTEUR DE FICHIER
* \brief : AUTEUR=$USER
* \brief : DATE=$DATE
* \brief :
/******************************************************************************/

/************************* GENERAL INCLUDES ***********************************/
#include <stdio.h>
#include <inttypes.h>
/******************************************************************************/

/************************* SPECIFIC INCLUDES **********************************/

/******************************************************************************/

/************************* LOCAL DEFINES **************************************/
#define DEF_START_MESSAGE(m) \
{\
  printf("MAIN> START %s \n",m);\
}

#define DEF_STOP_MESSAGE(m) \
{\
  printf("MAIN> STOP %s\n",m);\
}

/******************************************************************************/

/************************* GLOBAL VARIABLES ***********************************/

/******************************************************************************/

/************************* PRIVATE FUNCTIONS **********************************/

/******************************************************************************/

/************************** PUBLIC FUNCTION ***********************************/
/*******************************************************************************
* \func: int32_t main(void)
* \brief : starting and entry point for the execusion
* \brief : the main gol of this app is to keep track of some files and log
* \brief : the information into a file
*******************************************************************************/
int32_t main(void)
{
  /* print start message */
  DEF_START_MESSAGE("RUN COUNTER");

  /* print stop message */
  DEF_STOP_MESSAGE("RUN COUNTER")
  /* end execusion : always return 0 */
  return 0;
}
