#ifndef BEACON_H
#define BEACON_H

#include <stdint.h>
#include <csp/arch/csp_thread.h>

#include <telemetry/sources.h>

static telem_data telem_beacon[TELEMETRY_NUM_BEACON];

CSP_DEFINE_TASK(beacon_thread);
CSP_DEFINE_TASK(beacon_rx_thread);

#ifdef YOTTA_CFG_TELEMETRY
#define BEACON_THREAD   csp_thread_handle_t beacon_handle; \
                        csp_thread_handle_t beacon_rx_handle; \
                        csp_thread_create(beacon_thread, "BEACON", 50, NULL, 0, &beacon_handle); \
                        csp_thread_create(beacon_rx_thread, "BEACON_RX", 50, NULL, 0, &beacon_rx_handle);
#else
#define BEACON_THREAD
#endif


#endif