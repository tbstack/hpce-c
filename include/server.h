/**
 * @file server.h
 * @brief  
 * @author tenfy
 * @email tenfy@tenfy.cn
 * @created 2017-10-12 17:56:54
 */

#ifndef __HPCE_C_SERVER_H__
#define __HPCE_C_SERVER_H__
#ifdef __cplusplus
extern "C" {
#endif

#include <stdint.h>

enum 
{
    HPCE_ERROR_PORT_IS_ILLEGAL = -1,
};

/**
 * @brief serve serve on port
 *
 * @param port the port to listen to
 *
 * @return 0: success
 */
int serve(uint16_t port);

#ifdef __cplusplus
}
#endif
#endif
