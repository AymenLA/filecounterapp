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
#define MAIN_WARN_MESSAGE(m) \
{\
  printf("MAIN> [WARN] %s \n",m);\
}

#define DMAIN_ERR_MESSAGE(m) \
{\
  printf("MAIN> [ERR] %s\n",m);\
}

#define MAIN_DBG_MESSAGE(m) \
{\
  printf("MAIN> [DBG] %s\n",m);\
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
  MAIN_DBG_MESSAGE("START MAIN");

  /* print stop message */
  MAIN_DBG_MESSAGE("STOP MAIN")
  /* end execusion : always return 0 */
  return 0;
}
