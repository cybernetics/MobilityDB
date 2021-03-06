/*****************************************************************************
 *
 * tpoint_in.h
 *    Input of temporal points in WKT, EWKT and MF-JSON format
 *
 * Portions Copyright (c) 2020, Esteban Zimanyi, Arthur Lesuisse, 
 *     Universite Libre de Bruxelles
 * Portions Copyright (c) 1996-2020, PostgreSQL Global Development Group
 * Portions Copyright (c) 1994, Regents of the University of California
 *
 *****************************************************************************/

#ifndef __TPOINT_IN_H__
#define __TPOINT_IN_H__

#include <postgres.h>
#include <fmgr.h>

/*****************************************************************************/

extern Datum tpoint_from_mfjson(PG_FUNCTION_ARGS);
extern Datum tpoint_from_ewkb(PG_FUNCTION_ARGS);

/*****************************************************************************/

#endif
