/* Copyright (c) 2019-2021, The Tor Project, Inc. */
/* See LICENSE for licensing information */

/**
 * \file congestion_control_vegas.h
 * \brief Private-ish APIs for the TOR_VEGAS congestion control algorithm
 **/

#ifndef TOR_CONGESTION_CONTROL_VEGAS_H
#define TOR_CONGESTION_CONTROL_VEGAS_H

#include "core/or/crypt_path_st.h"
#include "core/or/circuit_st.h"

extern double cc_stats_vegas_exit_ss_cwnd_ma;

/* Processing SENDME cell. */
int congestion_control_vegas_process_sendme(struct congestion_control_t *cc,
                                            const circuit_t *circ,
                                            const crypt_path_t *layer_hint);
void congestion_control_vegas_set_params(struct congestion_control_t *cc,
                                         cc_path_t path);

/* Private section starts. */
#ifdef TOR_CONGESTION_CONTROL_VEGAS_PRIVATE

/*
 * Unit tests declaractions.
 */
#ifdef TOR_UNIT_TESTS

#endif /* defined(TOR_UNIT_TESTS) */

#endif /* defined(TOR_CONGESTION_CONTROL_VEGAS_PRIVATE) */

#endif /* !defined(TOR_CONGESTION_CONTROL_VEGAS_H) */
