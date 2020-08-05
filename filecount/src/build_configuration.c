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
#include <sys/stat.h>
/******************************************************************************/

/************************* APPLICATION INCLUDE ********************************/
#include "configuration.h"
#include "build_configuration.h"
/******************************************************************************/

/************************* LOCAL DEFINES **************************************/
#define BUILDCONF_ERROR_MESSAGE(m) \
{\
  printf("BUILDCONF> [ERR] %s \n",m);\
}

#define BUILDCONF_DEBUG_MESSAGE(m) \
{\
  printf("BUILDCONF> [DBG] %s\n",m);\
}

/******************************************************************************/

/************************* GLOBAL VARIABLES ***********************************/

/******************************************************************************/

/************************* PRIVATE FUNCTIONS **********************************/

/******************************************************************************/


/************************** PUBLIC FUNCTION ***********************************/
/*******************************************************************************
* \func: int32_t load_config_file()
* \brief : starting and entry point for the execusion
* \brief : the main gol of this app is to keep track of some files and log
* \brief : the information into a file
*******************************************************************************/
int32_t load_config_file(void)
{
  int32_t ret_val = -1;
  struct stat conf_file;
  /** check if the configapp.txt file exists */
  stat(CONF_FILE, &conf_file);

  if(conf_file.st_size != 0)
  {
    BUILDCONF_DEBUG_MESSAGE("configuration file found");

    ret_val = 0;
  }
  else
  {
    BUILDCONF_ERROR_MESSAGE("no configuration file");
  }
  
  /* return ret_val*/
  return ret_val;
}
