/**
 ******************************************************************************
 * @addtogroup UAVObjects OpenPilot UAVObjects
 * @{ 
 * @addtogroup FlightPlanControl FlightPlanControl 
 * @brief Control the flight plan script
 *
 * Autogenerated files and functions for FlightPlanControl Object
 
 * @{ 
 *
 * @file       flightplancontrol.h
 * @author     The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010.
 * @brief      Implementation of the FlightPlanControl object. This file has been 
 *             automatically generated by the UAVObjectGenerator.
 * 
 * @note       Object definition file: flightplancontrol.xml. 
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

#ifndef FLIGHTPLANCONTROL_H
#define FLIGHTPLANCONTROL_H

// Object constants
#define FLIGHTPLANCONTROL_OBJID 0x53E3F180
#define FLIGHTPLANCONTROL_ISSINGLEINST 1
#define FLIGHTPLANCONTROL_ISSETTINGS 0
#define FLIGHTPLANCONTROL_NUMBYTES sizeof(FlightPlanControlData)

// Object access macros
/**
 * @function FlightPlanControlGet(dataOut)
 * @brief Populate a FlightPlanControlData object
 * @param[out] dataOut 
 */
#define FlightPlanControlGet(dataOut) UAVObjGetData(FlightPlanControlHandle(), dataOut)
#define FlightPlanControlSet(dataIn) UAVObjSetData(FlightPlanControlHandle(), dataIn)
#define FlightPlanControlInstGet(instId, dataOut) UAVObjGetInstanceData(FlightPlanControlHandle(), instId, dataOut)
#define FlightPlanControlInstSet(instId, dataIn) UAVObjSetInstanceData(FlightPlanControlHandle(), instId, dataIn)
#define FlightPlanControlConnectQueue(queue) UAVObjConnectQueue(FlightPlanControlHandle(), queue, EV_MASK_ALL_UPDATES)
#define FlightPlanControlConnectCallback(cb) UAVObjConnectCallback(FlightPlanControlHandle(), cb, EV_MASK_ALL_UPDATES)
#define FlightPlanControlCreateInstance() UAVObjCreateInstance(FlightPlanControlHandle(),&FlightPlanControlSetDefaults)
#define FlightPlanControlRequestUpdate() UAVObjRequestUpdate(FlightPlanControlHandle())
#define FlightPlanControlRequestInstUpdate(instId) UAVObjRequestInstanceUpdate(FlightPlanControlHandle(), instId)
#define FlightPlanControlUpdated() UAVObjUpdated(FlightPlanControlHandle())
#define FlightPlanControlInstUpdated(instId) UAVObjUpdated(FlightPlanControlHandle(), instId)
#define FlightPlanControlGetMetadata(dataOut) UAVObjGetMetadata(FlightPlanControlHandle(), dataOut)
#define FlightPlanControlSetMetadata(dataIn) UAVObjSetMetadata(FlightPlanControlHandle(), dataIn)
#define FlightPlanControlReadOnly() UAVObjReadOnly(FlightPlanControlHandle())

// Object data
typedef struct {
    uint8_t Command;

} __attribute__((packed)) FlightPlanControlData;

// Field information
// Field Command information
/* Enumeration options for field Command */
typedef enum { FLIGHTPLANCONTROL_COMMAND_START=0, FLIGHTPLANCONTROL_COMMAND_STOP=1, FLIGHTPLANCONTROL_COMMAND_KILL=2 } FlightPlanControlCommandOptions;


// Generic interface functions
int32_t FlightPlanControlInitialize();
UAVObjHandle FlightPlanControlHandle();
void FlightPlanControlSetDefaults(UAVObjHandle obj, uint16_t instId);

// set/Get functions
extern void FlightPlanControlCommandSet( uint8_t *NewCommand );
extern void FlightPlanControlCommandGet( uint8_t *NewCommand );


#endif // FLIGHTPLANCONTROL_H

/**
 * @}
 * @}
 */
