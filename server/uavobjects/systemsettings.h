/**
 ******************************************************************************
 * @addtogroup UAVObjects OpenPilot UAVObjects
 * @{ 
 * @addtogroup SystemSettings SystemSettings 
 * @brief Select airframe type.  Currently used by @ref ActuatorModule to choose mixing from @ref ActuatorDesired to @ref ActuatorCommand
 *
 * Autogenerated files and functions for SystemSettings Object
 
 * @{ 
 *
 * @file       systemsettings.h
 * @author     The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010.
 * @brief      Implementation of the SystemSettings object. This file has been 
 *             automatically generated by the UAVObjectGenerator.
 * 
 * @note       Object definition file: systemsettings.xml. 
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

#ifndef SYSTEMSETTINGS_H
#define SYSTEMSETTINGS_H

// Object constants
#define SYSTEMSETTINGS_OBJID 0xC72A326E
#define SYSTEMSETTINGS_ISSINGLEINST 1
#define SYSTEMSETTINGS_ISSETTINGS 1
#define SYSTEMSETTINGS_NUMBYTES sizeof(SystemSettingsData)

// Object access macros
/**
 * @function SystemSettingsGet(dataOut)
 * @brief Populate a SystemSettingsData object
 * @param[out] dataOut 
 */
#define SystemSettingsGet(dataOut) UAVObjGetData(SystemSettingsHandle(), dataOut)
#define SystemSettingsSet(dataIn) UAVObjSetData(SystemSettingsHandle(), dataIn)
#define SystemSettingsInstGet(instId, dataOut) UAVObjGetInstanceData(SystemSettingsHandle(), instId, dataOut)
#define SystemSettingsInstSet(instId, dataIn) UAVObjSetInstanceData(SystemSettingsHandle(), instId, dataIn)
#define SystemSettingsConnectQueue(queue) UAVObjConnectQueue(SystemSettingsHandle(), queue, EV_MASK_ALL_UPDATES)
#define SystemSettingsConnectCallback(cb) UAVObjConnectCallback(SystemSettingsHandle(), cb, EV_MASK_ALL_UPDATES)
#define SystemSettingsCreateInstance() UAVObjCreateInstance(SystemSettingsHandle(),&SystemSettingsSetDefaults)
#define SystemSettingsRequestUpdate() UAVObjRequestUpdate(SystemSettingsHandle())
#define SystemSettingsRequestInstUpdate(instId) UAVObjRequestInstanceUpdate(SystemSettingsHandle(), instId)
#define SystemSettingsUpdated() UAVObjUpdated(SystemSettingsHandle())
#define SystemSettingsInstUpdated(instId) UAVObjUpdated(SystemSettingsHandle(), instId)
#define SystemSettingsGetMetadata(dataOut) UAVObjGetMetadata(SystemSettingsHandle(), dataOut)
#define SystemSettingsSetMetadata(dataIn) UAVObjSetMetadata(SystemSettingsHandle(), dataIn)
#define SystemSettingsReadOnly() UAVObjReadOnly(SystemSettingsHandle())

// Object data
typedef struct {
    uint32_t GUIConfigData[4];
    uint8_t AirframeType;

} __attribute__((packed)) SystemSettingsData;

// Field information
// Field GUIConfigData information
/* Number of elements for field GUIConfigData */
#define SYSTEMSETTINGS_GUICONFIGDATA_NUMELEM 4
// Field AirframeType information
/* Enumeration options for field AirframeType */
typedef enum { SYSTEMSETTINGS_AIRFRAMETYPE_FIXEDWING=0, SYSTEMSETTINGS_AIRFRAMETYPE_FIXEDWINGELEVON=1, SYSTEMSETTINGS_AIRFRAMETYPE_FIXEDWINGVTAIL=2, SYSTEMSETTINGS_AIRFRAMETYPE_VTOL=3, SYSTEMSETTINGS_AIRFRAMETYPE_HELICP=4, SYSTEMSETTINGS_AIRFRAMETYPE_QUADX=5, SYSTEMSETTINGS_AIRFRAMETYPE_QUADP=6, SYSTEMSETTINGS_AIRFRAMETYPE_HEXA=7, SYSTEMSETTINGS_AIRFRAMETYPE_OCTO=8, SYSTEMSETTINGS_AIRFRAMETYPE_CUSTOM=9, SYSTEMSETTINGS_AIRFRAMETYPE_HEXAX=10, SYSTEMSETTINGS_AIRFRAMETYPE_OCTOV=11, SYSTEMSETTINGS_AIRFRAMETYPE_OCTOCOAXP=12, SYSTEMSETTINGS_AIRFRAMETYPE_OCTOCOAXX=13, SYSTEMSETTINGS_AIRFRAMETYPE_HEXACOAX=14, SYSTEMSETTINGS_AIRFRAMETYPE_TRI=15, SYSTEMSETTINGS_AIRFRAMETYPE_GROUNDVEHICLECAR=16, SYSTEMSETTINGS_AIRFRAMETYPE_GROUNDVEHICLEDIFFERENTIAL=17, SYSTEMSETTINGS_AIRFRAMETYPE_GROUNDVEHICLEMOTORCYCLE=18 } SystemSettingsAirframeTypeOptions;


// Generic interface functions
int32_t SystemSettingsInitialize();
UAVObjHandle SystemSettingsHandle();
void SystemSettingsSetDefaults(UAVObjHandle obj, uint16_t instId);

// set/Get functions
extern void SystemSettingsGUIConfigDataSet( uint32_t *NewGUIConfigData );
extern void SystemSettingsGUIConfigDataGet( uint32_t *NewGUIConfigData );
extern void SystemSettingsAirframeTypeSet( uint8_t *NewAirframeType );
extern void SystemSettingsAirframeTypeGet( uint8_t *NewAirframeType );


#endif // SYSTEMSETTINGS_H

/**
 * @}
 * @}
 */
