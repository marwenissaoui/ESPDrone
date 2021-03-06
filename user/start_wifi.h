#include "ets_sys.h"
#include "os_type.h"
#include "osapi.h"
#include "mem.h"
#include "user_interface.h"
#include "espconn.h"
#include "driver/parse.h"

#define SSID "ardrone2_194455"
#define PASSWORD ""


LOCAL void ICACHE_FLASH_ATTR user_udp_recv_cb(void *arg, char *pusrdata, unsigned short length);
LOCAL void ICACHE_FLASH_ATTR user_udp_send(void);
LOCAL void ICACHE_FLASH_ATTR user_udp_sent_cb(void *arg);
void ICACHE_FLASH_ATTR user_check_ip(void);
void ICACHE_FLASH_ATTR user_set_station_config(void);




