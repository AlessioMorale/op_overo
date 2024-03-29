/**
 ******************************************************************************
 * @addtogroup UAVObjects OpenPilot UAVObjects
 * @{ 
 * @addtogroup ActuatorDesired ActuatorDesired 
 * @brief Desired raw, pitch and yaw actuator settings.  Comes from either @ref StabilizationModule or @ref ManualControlModule depending on FlightMode.
 *
 * Autogenerated files and functions for ActuatorDesired Object
 
 * @{ 
 *
 * @file       actuatordesired.h
 * @author     The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010.
 * @brief      Implementation of the ActuatorDesired object. This file has been 
 *             automatically generated by the UAVObjectGenerator.
 * 
 * @note       Object definition file: actuatordesired.xml. 
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

#ifndef ACTUATORDESIRED_H
#define ACTUATORDESIRED_H

// Object constants
#define ACTUATORDESIRED_OBJID 0xCA4BC4A4
#define ACTUATORDESIRED_ISSINGLEINST 1
#define ACTUATORDESIRED_ISSETTINGS 0
#define ACTUATORDESIRED_NUMBYTES sizeof(ActuatorDesiredData)

// Object access macros
/**
 * @function ActuatorDesiredGet(dataOut)
 * @brief Populate a ActuatorDesiredData object
 * @param[out] dataOut 
 */
#define ActuatorDesiredGet(dataOut) UAVObjGetData(ActuatorDesiredHandle(), dataOut)
#define ActuatorDesiredSet(dataIn) UAVObjSetData(ActuatorDesiredHandle(), dataIn)
#define ActuatorDesiredInstGet(instId, dataOut) UAVObjGetInstanceData(ActuatorDesiredHandle(), instId, dataOut)
#define ActuatorDesiredInstSet(instId, dataIn) UAVObjSetInstanceData(ActuatorDesiredHandle(), instId, dataIn)
#define ActuatorDesiredConnectQueue(queue) UAVObjConnectQueue(ActuatorDesiredHandle(), queue, EV_MASK_ALL_UPDATES)
#define ActuatorDesiredConnectCallback(cb) UAVObjConnectCallback(ActuatorDesiredHandle(), cb, EV_MASK_ALL_UPDATES)
#define ActuatorDesiredCreateInstance() UAVObjCreateInstance(ActuatorDesiredHandle(),&ActuatorDesiredSetDefaults)
#define ActuatorDesiredRequestUpdate() UAVObjRequestUpdate(ActuatorDesiredHandle())
#define ActuatorDesiredRequestInstUpdate(instId) UAVObjRequestInstanceUpdate(ActuatorDesiredHandle(), instId)
#define ActuatorDesiredUpdated() UAVObjUpdated(ActuatorDesiredHandle())
#define ActuatorDesiredInstUpdated(instId) UAVObjUpdated(ActuatorDesiredHandle(), instId)
#define ActuatorDesiredGetMetadata(dataOut) UAVObjGetMetadata(ActuatorDesiredHandle(), dataOut)
#define ActuatorDesiredSetMetadata(dataIn) UAVObjSetMetadata(ActuatorDesiredHandle(), dataIn)
#define ActuatorDesiredReadOnly() UAVObjReadOnly(ActuatorDesiredHandle())

// Object data
typedef struct {
    float Roll;
    float Pitch;
    float Yaw;
    float Throttle;
    float UpdateTime;
    float NumLongUpdates;

} __attribute__((packed)) ActuatorDesiredData;

// Field information
// Field Roll information
// Field Pitch information
// Field Yaw information
// Field Throttle information
// Field UpdateTime information
// Field NumLongUpdates information


// Generic interface functions
int32_t ActuatorDesiredInitialize();
UAVObjHandle ActuatorDesiredHandle();
void ActuatorDesiredSetDefaults(UAVObjHandle obj, uint16_t instId);

// set/Get functions
extern void ActuatorDesiredRollSet( float *NewRoll );
extern void ActuatorDesiredRollGet( float *NewRoll );
extern void ActuatorDesiredPitchSet( float *NewPitch );
extern void ActuatorDesiredPitchGet( float *NewPitch );
extern void ActuatorDesiredYawSet( float *NewYaw );
extern void ActuatorDesiredYawGet( float *NewYaw );
extern void ActuatorDesiredThrottleSet( float *NewThrottle );
extern void ActuatorDesiredThrottleGet( float *NewThrottle );
extern void ActuatorDesiredUpdateTimeSet( float *NewUpdateTime );
extern void ActuatorDesiredUpdateTimeGet( float *NewUpdateTime );
extern void ActuatorDesiredNumLongUpdatesSet( float *NewNumLongUpdates );
extern void ActuatorDesiredNumLongUpdatesGet( float *NewNumLongUpdates );


#endif // ACTUATORDESIRED_H

/**
 * @}
 * @}
 */
