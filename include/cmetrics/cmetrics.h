/* -*- Mode: C; tab-width: 4; indent-tabs-mode: nil; c-basic-offset: 4 -*- */

/*  CMetrics
 *  ========
 *  Copyright 2021 Eduardo Silva <eduardo@calyptia.com>
 *
 *  Licensed under the Apache License, Version 2.0 (the "License");
 *  you may not use this file except in compliance with the License.
 *  You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 *  Unless required by applicable law or agreed to in writing, software
 *  distributed under the License is distributed on an "AS IS" BASIS,
 *  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 *  See the License for the specific language governing permissions and
 *  limitations under the License.
 */

#ifndef CMT_H
#define CMT_H

#define CMT_COUNTER   0
#define CMT_GAUGE     1
#define CMT_HISTOGRAM 2

#include <stdlib.h>
#include <inttypes.h>
#include <monkey/mk_core/mk_list.h>

#include <cmetrics/cmt_math.h>
#include <cmetrics/cmt_sds.h>

struct cmt {
    /* logging */
    int log_level;
    void (*log_cb)(void *, int, const char *, int, const char *);

    /* Metrics list */
    struct mk_list counters;
    struct mk_list gauges;
    struct mk_list histograms;
};

struct cmt *cmt_create();
void cmt_destroy(struct cmt *cmt);

#endif