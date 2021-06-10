/*
 * Copyright (c) 2021 Swift Labs Inc.
 */

#ifndef MODEM_INT_H
#define MODEM_INT_H

#include <time.h>

/* Default lengths */
#define MODEM_MANUFACTURER_LENGTH   10
#define MODEM_MODEL_LENGTH          16
#define MODEM_REVISION_LENGTH       64
#define MODEM_IMEI_LENGTH           16
#define MODEM_IMSI_LENGTH           16
#define MODEM_ICCID_LENGTH          32

struct modem_info {
    char manufacturer[MODEM_MANUFACTURER_LENGTH];
    char model[MODEM_MODEL_LENGTH];
    char revision[MODEM_REVISION_LENGTH];
    char imei[MODEM_IMEI_LENGTH];
#if defined(CONFIG_MODEM_SIM_NUMBERS)
    char imsi[MODEM_IMSI_LENGTH];
    char iccid[MODEM_ICCID_LENGTH];
#endif /* #if defined(CONFIG_MODEM_SIM_NUMBERS) */
};

int modem_get_date(struct tm *tm);

int modem_get_info(struct modem_info *info);

void modem_reset(void);

void modem_off(void);


#endif /* #ifndef MODEM_INT_H */
