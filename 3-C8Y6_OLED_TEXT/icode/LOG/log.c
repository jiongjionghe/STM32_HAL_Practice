#include "../../icode/log/log.h"

const char* EM_LOGLevelGet(const int level)
{
    if (level == LOG_DEBUG)
    {
        return "DEBUG";
    }
    else if (level == LOG_INF0)
    {
        return "INFO";
    }
    else if (level == LOG_WARN)
    {
        return "LOG_WARN";
    }
    else if (level == LOG_ERROR)
    {
        return "LOG_ERROR";
    }
    return "UNKNOW";
}

void EM_LOG(const int level, const char *fun, const int line, const char *fmt, ...)
{
#ifdef OPEN_LOG
	char temp_str[40];
	va_list arg;
	va_start(arg, fmt);
	char buf[1 + vsnprintf(NULL, 0, fmt, arg)];
	vsnprintf(buf, sizeof(buf), fmt, arg);
	va_end(arg);
	if (level >= LOG_LEVEL)
	{
		sprintf(temp_str,"[%s] [%s %d] %s\n", EM_LOGLevelGet(level), fun, line,buf);
		HAL_UART_Transmit(&huart1,(unsigned char *)temp_str, strlen(temp_str), 50);
	}
#endif
}
