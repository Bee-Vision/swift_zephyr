/*
 * Copyright (c) 2021 Swift Labs Inc.
 */

#ifndef MODEM_INT_H
#define MODEM_INT_H

#include <time.h>

int modem_get_date(struct tm *tm);

void modem_reset(void);

void modem_off(void);

#endif /* #ifndef MODEM_INT_H */
