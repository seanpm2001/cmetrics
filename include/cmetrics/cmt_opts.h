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

#ifndef CMT_OPTS_H
#define CMT_OPTS_H

#include <cmetrics/cmetrics.h>

struct cmt_opts {
    cmt_sds_t namespace;
    cmt_sds_t subsystem;
    cmt_sds_t name;

    /* Help string: what's the metric about */
    cmt_sds_t help;

    /* Formatted full qualified name: namespace_subsystem_name */
    cmt_sds_t fqname;
};

int cmt_opts_init(struct cmt_opts *opts,
                  char *namespace, char *subsystem, char *name, char *help);
void cmt_opts_exit(struct cmt_opts *opts);

#endif