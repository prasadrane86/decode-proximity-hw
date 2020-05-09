/*
 * Copyright (C) 2020 Dyne.org foundation
 *
 * This file is subject to the terms and conditions of the Affero GNU
 * General Public License (AGPL) version 3. See the file LICENSE for
 * more details.
 *
 */
#ifndef DP3T_CONFIG_H
#define DP3T_CONFIG_H
#include <stdint.h>

/* SK / EPHID / SHA base parameters
 */
#define SK_LEN 32
#define SHA256_LEN 32
#define EPHID_LEN 16


/* Use-case DP3-T parameters */
#define TTL (180) // In minutes
#define EPOCHS  (((24 * 60) / TTL) + 1)
#define RETENTION_PERIOD (14) // In days
#define BROADCAST_KEY "Broadcast key"
#define BROADCAST_KEY_LEN 13UL

/* Bluetooth scan/adv timing (in milliseconds) */
#define BLESCAN_INTERVAL 10000
#define BLESCAN_DURATION 2000

#endif
