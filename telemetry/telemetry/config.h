/*
 * Copyright (C) 2016 Kubos Corporation
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */
#ifndef TELEMETRY_CONFIG_H
#define TELEMETRY_CONFIG_H

/* Address used for the current CSP instance */
#ifndef YOTTA_CFG_TELEMETRY_CSP_ADDRESS
#define TELEMETRY_CSP_ADDRESS 1
#else
#define TELEMETRY_CSP_ADDRESS YOTTA_CFG_TELEMETRY_CSP_ADDRESS
#endif

#define NUM_MESSAGE_QUEUE 10

/* Port number used for the telemetry server's CSP socket */
#ifndef YOTTA_CFG_TELEMETRY_CSP_PORT
#define TELEMETRY_CSP_PORT 20
#else
#define TELEMETRY_CSP_PORT YOTTA_CFG_TELEMETRY_CSP_PORT
#endif

/* Number of telemetry subscribers */
#ifndef YOTTA_CFG_TELEMETRY_SUBSCRIBERS_NUM
#define TELEMETRY_NUM_SUBSCRIBERS 10
#else
#define TELEMETRY_NUM_SUBSCRIBERS YOTTA_CFG_TELEMETRY_SUBSCRIBERS_NUM
#endif

/* Number of subscriber read attempts */
#ifndef YOTTA_CFG_TELEMETERY_SUBSCRIBERS_READ_ATTEPMTS
#define TELEMETRY_SUBSCRIBER_READ_ATTEMPTS 10
#else
#define TELEMETRY_SUBSCRIBER_READ_ATTEMPTS YOTTA_CFG_TELEMETRY_SUBSCRIBERS_READ_ATTEMPTS
#endif

#endif