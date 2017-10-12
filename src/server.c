/**
 * @file server.c
 * @brief  
 * @author tenfy
 * @email tenfy@tenfy.cn
 * @created 2017-10-12 17:56:27
 */

#include "server.h"
#include <sys/epoll.h>

int serve(uint16_t port)
{
    if (port == 0)
    {
        return HPCE_ERROR_PORT_IS_ILLEGAL;
    }
    return 0;
}
