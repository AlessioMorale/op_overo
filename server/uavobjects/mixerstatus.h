/**
 ******************************************************************************
 * @addtogroup UAVObjects OpenPilot UAVObjects
 * @{ 
 * @addtogroup MixerStatus MixerStatus 
 * @brief Status for the matrix mixer showing the output of each mixer after all scaling
 *
 * Autogenerated files and functions for MixerStatus Object
 
 * @{ 
 *
 * @file       mixerstatus.h
 * @author     The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010.
 * @brief      Implementation of the MixerStatus object. This file has been 
 *             automatically generated by the UAVObjectGenerator.
 * 
 * @note       Object definition file: mixerstatus.xml. 
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

#ifndef MIXERSTATUS_H
#define MIXERSTATUS_H

// Object constants
#define MIXERSTATUS_OBJID 0x124E28A
#define MIXERSTATUS_ISSINGLEINST 1
#define MIXERSTATUS_ISSETTINGS 0
#define MIXERSTATUS_NUMBYTES sizeof(MixerStatusData)

// Object access macros
/**
 * @function MixerStatusGet(dataOut)
 * @brief Populate a MixerStatusData object
 * @param[out] dataOut 
 */
#define MixerStatusGet(dataOut) UAVObjGetData(MixerStatusHandle(), dataOut)
#define MixerStatusSet(dataIn) UAVObjSetData(MixerStatusHandle(), dataIn)
#define MixerStatusInstGet(instId, dataOut) UAVObjGetInstanceData(MixerStatusHandle(), instId, dataOut)
#define MixerStatusInstSet(instId, dataIn) UAVObjSetInstanceData(MixerStatusHandle(), instId, dataIn)
#define MixerStatusConnectQueue(queue) UAVObjConnectQueue(MixerStatusHandle(), queue, EV_MASK_ALL_UPDATES)
#define MixerStatusConnectCallback(cb) UAVObjConnectCallback(MixerStatusHandle(), cb, EV_MASK_ALL_UPDATES)
#define MixerStatusCreateInstance() UAVObjCreateInstance(MixerStatusHandle(),&MixerStatusSetDefaults)
#define MixerStatusRequestUpdate() UAVObjRequestUpdate(MixerStatusHandle())
#define MixerStatusRequestInstUpdate(instId) UAVObjRequestInstanceUpdate(MixerStatusHandle(), instId)
#define MixerStatusUpdated() UAVObjUpdated(MixerStatusHandle())
#define MixerStatusInstUpdated(instId) UAVObjUpdated(MixerStatusHandle(), instId)
#define MixerStatusGetMetadata(dataOut) UAVObjGetMetadata(MixerStatusHandle(), dataOut)
#define MixerStatusSetMetadata(dataIn) UAVObjSetMetadata(MixerStatusHandle(), dataIn)
#define MixerStatusReadOnly() UAVObjReadOnly(MixerStatusHandle())

// Object data
typedef struct {
    float Mixer1;
    float Mixer2;
    float Mixer3;
    float Mixer4;
    float Mixer5;
    float Mixer6;
    float Mixer7;
    float Mixer8;
    float Mixer9;
    float Mixer10;

} __attribute__((packed)) MixerStatusData;

// Field information
// Field Mixer1 information
// Field Mixer2 information
// Field Mixer3 information
// Field Mixer4 information
// Field Mixer5 information
// Field Mixer6 information
// Field Mixer7 information
// Field Mixer8 information
// Field Mixer9 information
// Field Mixer10 information


// Generic interface functions
int32_t MixerStatusInitialize();
UAVObjHandle MixerStatusHandle();
void MixerStatusSetDefaults(UAVObjHandle obj, uint16_t instId);

// set/Get functions
extern void MixerStatusMixer1Set( float *NewMixer1 );
extern void MixerStatusMixer1Get( float *NewMixer1 );
extern void MixerStatusMixer2Set( float *NewMixer2 );
extern void MixerStatusMixer2Get( float *NewMixer2 );
extern void MixerStatusMixer3Set( float *NewMixer3 );
extern void MixerStatusMixer3Get( float *NewMixer3 );
extern void MixerStatusMixer4Set( float *NewMixer4 );
extern void MixerStatusMixer4Get( float *NewMixer4 );
extern void MixerStatusMixer5Set( float *NewMixer5 );
extern void MixerStatusMixer5Get( float *NewMixer5 );
extern void MixerStatusMixer6Set( float *NewMixer6 );
extern void MixerStatusMixer6Get( float *NewMixer6 );
extern void MixerStatusMixer7Set( float *NewMixer7 );
extern void MixerStatusMixer7Get( float *NewMixer7 );
extern void MixerStatusMixer8Set( float *NewMixer8 );
extern void MixerStatusMixer8Get( float *NewMixer8 );
extern void MixerStatusMixer9Set( float *NewMixer9 );
extern void MixerStatusMixer9Get( float *NewMixer9 );
extern void MixerStatusMixer10Set( float *NewMixer10 );
extern void MixerStatusMixer10Get( float *NewMixer10 );


#endif // MIXERSTATUS_H

/**
 * @}
 * @}
 */
