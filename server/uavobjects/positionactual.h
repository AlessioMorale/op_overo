/**
 ******************************************************************************
 * @addtogroup UAVObjects OpenPilot UAVObjects
 * @{ 
 * @addtogroup PositionActual PositionActual 
 * @brief Contains the current position relative to @ref HomeLocation
 *
 * Autogenerated files and functions for PositionActual Object
 
 * @{ 
 *
 * @file       positionactual.h
 * @author     The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010.
 * @brief      Implementation of the PositionActual object. This file has been 
 *             automatically generated by the UAVObjectGenerator.
 * 
 * @note       Object definition file: positionactual.xml. 
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

#ifndef POSITIONACTUAL_H
#define POSITIONACTUAL_H

// Object constants
#define POSITIONACTUAL_OBJID 0xFA9E2D42
#define POSITIONACTUAL_ISSINGLEINST 1
#define POSITIONACTUAL_ISSETTINGS 0
#define POSITIONACTUAL_NUMBYTES sizeof(PositionActualData)

// Object access macros
/**
 * @function PositionActualGet(dataOut)
 * @brief Populate a PositionActualData object
 * @param[out] dataOut 
 */
#define PositionActualGet(dataOut) UAVObjGetData(PositionActualHandle(), dataOut)
#define PositionActualSet(dataIn) UAVObjSetData(PositionActualHandle(), dataIn)
#define PositionActualInstGet(instId, dataOut) UAVObjGetInstanceData(PositionActualHandle(), instId, dataOut)
#define PositionActualInstSet(instId, dataIn) UAVObjSetInstanceData(PositionActualHandle(), instId, dataIn)
#define PositionActualConnectQueue(queue) UAVObjConnectQueue(PositionActualHandle(), queue, EV_MASK_ALL_UPDATES)
#define PositionActualConnectCallback(cb) UAVObjConnectCallback(PositionActualHandle(), cb, EV_MASK_ALL_UPDATES)
#define PositionActualCreateInstance() UAVObjCreateInstance(PositionActualHandle(),&PositionActualSetDefaults)
#define PositionActualRequestUpdate() UAVObjRequestUpdate(PositionActualHandle())
#define PositionActualRequestInstUpdate(instId) UAVObjRequestInstanceUpdate(PositionActualHandle(), instId)
#define PositionActualUpdated() UAVObjUpdated(PositionActualHandle())
#define PositionActualInstUpdated(instId) UAVObjUpdated(PositionActualHandle(), instId)
#define PositionActualGetMetadata(dataOut) UAVObjGetMetadata(PositionActualHandle(), dataOut)
#define PositionActualSetMetadata(dataIn) UAVObjSetMetadata(PositionActualHandle(), dataIn)
#define PositionActualReadOnly() UAVObjReadOnly(PositionActualHandle())

// Object data
typedef struct {
    float North;
    float East;
    float Down;

} __attribute__((packed)) PositionActualData;

// Field information
// Field North information
// Field East information
// Field Down information


// Generic interface functions
int32_t PositionActualInitialize();
UAVObjHandle PositionActualHandle();
void PositionActualSetDefaults(UAVObjHandle obj, uint16_t instId);

// set/Get functions
extern void PositionActualNorthSet( float *NewNorth );
extern void PositionActualNorthGet( float *NewNorth );
extern void PositionActualEastSet( float *NewEast );
extern void PositionActualEastGet( float *NewEast );
extern void PositionActualDownSet( float *NewDown );
extern void PositionActualDownGet( float *NewDown );


#endif // POSITIONACTUAL_H

/**
 * @}
 * @}
 */
