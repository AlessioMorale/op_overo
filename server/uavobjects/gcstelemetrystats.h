/**
 ******************************************************************************
 * @addtogroup UAVObjects OpenPilot UAVObjects
 * @{ 
 * @addtogroup GCSTelemetryStats GCSTelemetryStats 
 * @brief The telemetry statistics from the ground computer
 *
 * Autogenerated files and functions for GCSTelemetryStats Object
 
 * @{ 
 *
 * @file       gcstelemetrystats.h
 * @author     The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010.
 * @brief      Implementation of the GCSTelemetryStats object. This file has been 
 *             automatically generated by the UAVObjectGenerator.
 * 
 * @note       Object definition file: gcstelemetrystats.xml. 
 *             This is an automatically generated file.
 *             DO NOT modify manually.
 *
 * @see        The GNU Public License (GPL) Version 3
 *
 *****************************************************************************/
/*
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY
 * or FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License
 * for more details.
 *
 * You should have received a copy of the GNU General Public License along
 * with this program; if not, write to the Free Software Foundation, Inc.,
 * 59 Temple Place, Suite 330, Boston, MA 02111-1307 USA
 */

#ifndef GCSTELEMETRYSTATS_H
#define GCSTELEMETRYSTATS_H

// Object constants
#define GCSTELEMETRYSTATS_OBJID 0xABC72744
#define GCSTELEMETRYSTATS_ISSINGLEINST 1
#define GCSTELEMETRYSTATS_ISSETTINGS 0
#define GCSTELEMETRYSTATS_NUMBYTES sizeof(GCSTelemetryStatsData)

// Object access macros
/**
 * @function GCSTelemetryStatsGet(dataOut)
 * @brief Populate a GCSTelemetryStatsData object
 * @param[out] dataOut 
 */
#define GCSTelemetryStatsGet(dataOut) UAVObjGetData(GCSTelemetryStatsHandle(), dataOut)
#define GCSTelemetryStatsSet(dataIn) UAVObjSetData(GCSTelemetryStatsHandle(), dataIn)
#define GCSTelemetryStatsInstGet(instId, dataOut) UAVObjGetInstanceData(GCSTelemetryStatsHandle(), instId, dataOut)
#define GCSTelemetryStatsInstSet(instId, dataIn) UAVObjSetInstanceData(GCSTelemetryStatsHandle(), instId, dataIn)
#define GCSTelemetryStatsConnectQueue(queue) UAVObjConnectQueue(GCSTelemetryStatsHandle(), queue, EV_MASK_ALL_UPDATES)
#define GCSTelemetryStatsConnectCallback(cb) UAVObjConnectCallback(GCSTelemetryStatsHandle(), cb, EV_MASK_ALL_UPDATES)
#define GCSTelemetryStatsCreateInstance() UAVObjCreateInstance(GCSTelemetryStatsHandle(),&GCSTelemetryStatsSetDefaults)
#define GCSTelemetryStatsRequestUpdate() UAVObjRequestUpdate(GCSTelemetryStatsHandle())
#define GCSTelemetryStatsRequestInstUpdate(instId) UAVObjRequestInstanceUpdate(GCSTelemetryStatsHandle(), instId)
#define GCSTelemetryStatsUpdated() UAVObjUpdated(GCSTelemetryStatsHandle())
#define GCSTelemetryStatsInstUpdated(instId) UAVObjUpdated(GCSTelemetryStatsHandle(), instId)
#define GCSTelemetryStatsGetMetadata(dataOut) UAVObjGetMetadata(GCSTelemetryStatsHandle(), dataOut)
#define GCSTelemetryStatsSetMetadata(dataIn) UAVObjSetMetadata(GCSTelemetryStatsHandle(), dataIn)
#define GCSTelemetryStatsReadOnly() UAVObjReadOnly(GCSTelemetryStatsHandle())

// Object data
typedef struct {
    float TxDataRate;
    float RxDataRate;
    uint32_t TxFailures;
    uint32_t RxFailures;
    uint32_t TxRetries;
    uint8_t Status;

} __attribute__((packed)) GCSTelemetryStatsData;

// Field information
// Field TxDataRate information
// Field RxDataRate information
// Field TxFailures information
// Field RxFailures information
// Field TxRetries information
// Field Status information
/* Enumeration options for field Status */
typedef enum { GCSTELEMETRYSTATS_STATUS_DISCONNECTED=0, GCSTELEMETRYSTATS_STATUS_HANDSHAKEREQ=1, GCSTELEMETRYSTATS_STATUS_HANDSHAKEACK=2, GCSTELEMETRYSTATS_STATUS_CONNECTED=3 } GCSTelemetryStatsStatusOptions;


// Generic interface functions
int32_t GCSTelemetryStatsInitialize();
UAVObjHandle GCSTelemetryStatsHandle();
void GCSTelemetryStatsSetDefaults(UAVObjHandle obj, uint16_t instId);

// set/Get functions
extern void GCSTelemetryStatsTxDataRateSet( float *NewTxDataRate );
extern void GCSTelemetryStatsTxDataRateGet( float *NewTxDataRate );
extern void GCSTelemetryStatsRxDataRateSet( float *NewRxDataRate );
extern void GCSTelemetryStatsRxDataRateGet( float *NewRxDataRate );
extern void GCSTelemetryStatsTxFailuresSet( uint32_t *NewTxFailures );
extern void GCSTelemetryStatsTxFailuresGet( uint32_t *NewTxFailures );
extern void GCSTelemetryStatsRxFailuresSet( uint32_t *NewRxFailures );
extern void GCSTelemetryStatsRxFailuresGet( uint32_t *NewRxFailures );
extern void GCSTelemetryStatsTxRetriesSet( uint32_t *NewTxRetries );
extern void GCSTelemetryStatsTxRetriesGet( uint32_t *NewTxRetries );
extern void GCSTelemetryStatsStatusSet( uint8_t *NewStatus );
extern void GCSTelemetryStatsStatusGet( uint8_t *NewStatus );


#endif // GCSTELEMETRYSTATS_H

/**
 * @}
 * @}
 */
