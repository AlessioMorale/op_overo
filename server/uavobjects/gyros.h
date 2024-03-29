/**
 ******************************************************************************
 * @addtogroup UAVObjects OpenPilot UAVObjects
 * @{ 
 * @addtogroup Gyros Gyros 
 * @brief The gyro data.
 *
 * Autogenerated files and functions for Gyros Object
 
 * @{ 
 *
 * @file       gyros.h
 * @author     The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010.
 * @brief      Implementation of the Gyros object. This file has been 
 *             automatically generated by the UAVObjectGenerator.
 * 
 * @note       Object definition file: gyros.xml. 
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

#ifndef GYROS_H
#define GYROS_H

// Object constants
#define GYROS_OBJID 0x4228AF6
#define GYROS_ISSINGLEINST 1
#define GYROS_ISSETTINGS 0
#define GYROS_NUMBYTES sizeof(GyrosData)

// Object access macros
/**
 * @function GyrosGet(dataOut)
 * @brief Populate a GyrosData object
 * @param[out] dataOut 
 */
#define GyrosGet(dataOut) UAVObjGetData(GyrosHandle(), dataOut)
#define GyrosSet(dataIn) UAVObjSetData(GyrosHandle(), dataIn)
#define GyrosInstGet(instId, dataOut) UAVObjGetInstanceData(GyrosHandle(), instId, dataOut)
#define GyrosInstSet(instId, dataIn) UAVObjSetInstanceData(GyrosHandle(), instId, dataIn)
#define GyrosConnectQueue(queue) UAVObjConnectQueue(GyrosHandle(), queue, EV_MASK_ALL_UPDATES)
#define GyrosConnectCallback(cb) UAVObjConnectCallback(GyrosHandle(), cb, EV_MASK_ALL_UPDATES)
#define GyrosCreateInstance() UAVObjCreateInstance(GyrosHandle(),&GyrosSetDefaults)
#define GyrosRequestUpdate() UAVObjRequestUpdate(GyrosHandle())
#define GyrosRequestInstUpdate(instId) UAVObjRequestInstanceUpdate(GyrosHandle(), instId)
#define GyrosUpdated() UAVObjUpdated(GyrosHandle())
#define GyrosInstUpdated(instId) UAVObjUpdated(GyrosHandle(), instId)
#define GyrosGetMetadata(dataOut) UAVObjGetMetadata(GyrosHandle(), dataOut)
#define GyrosSetMetadata(dataIn) UAVObjSetMetadata(GyrosHandle(), dataIn)
#define GyrosReadOnly() UAVObjReadOnly(GyrosHandle())

// Object data
typedef struct {
    float x;
    float y;
    float z;
    float temperature;

} __attribute__((packed)) GyrosData;

// Field information
// Field x information
// Field y information
// Field z information
// Field temperature information


// Generic interface functions
int32_t GyrosInitialize();
UAVObjHandle GyrosHandle();
void GyrosSetDefaults(UAVObjHandle obj, uint16_t instId);

// set/Get functions
extern void GyrosxSet( float *Newx );
extern void GyrosxGet( float *Newx );
extern void GyrosySet( float *Newy );
extern void GyrosyGet( float *Newy );
extern void GyroszSet( float *Newz );
extern void GyroszGet( float *Newz );
extern void GyrostemperatureSet( float *Newtemperature );
extern void GyrostemperatureGet( float *Newtemperature );


#endif // GYROS_H

/**
 * @}
 * @}
 */
