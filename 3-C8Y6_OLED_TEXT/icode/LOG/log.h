#ifndef _LOG_H_
#define _LOG_H_


#include <stdio.h>
#include <stdarg.h>
#include <string.h>
#include "usart.h"


#define OPEN_LOG 1
#define LOG_LEVEL LOG_DEBUG
#define LOG_SAVE 1

typedef enum
{
    /* data */
    LOG_DEBUG = 1,
    LOG_INF0,
    LOG_WARN,
    LOG_ERROR
} E_LOGLEVEL;

void EM_LOG(const int level, const char *fun, const int line, const char *fmt, ...);

#define EMLog(level, fmt...) EM_LOG(level, __FUNCTION__, __LINE__, fmt)
#endif
