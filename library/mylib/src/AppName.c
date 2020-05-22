#include <AppName.h>

#ifndef APP_NAME
#error APP_NAME must be defined
#define APP_NAME Unkown
#endif

const char* AppName = TEXTIFY(APP_NAME);
