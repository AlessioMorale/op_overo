/**
 ******************************************************************************
 * @addtogroup UAVObjects OpenPilot UAVObjects
 * @{ 
 * @addtogroup FixedWingPathFollowerStatus FixedWingPathFollowerStatus
 * @brief Object Storing Debugging Information on PID internals
 *
 * Autogenerated files and functions for FixedWingPathFollowerStatus Object
 * @{ 
 *
 * @file       fixedwingpathfollowerstatus.c
 * @author     The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010.
 * @brief      Implementation of the FixedWingPathFollowerStatus object. This file has been 
 *             automatically generated by the UAVObjectGenerator.
 * 
 * @note       Object definition file: fixedwingpathfollowerstatus.xml. 
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

#include "openpilot.h"
#include "fixedwingpathfollowerstatus.h"

// Private variables
static UAVObjHandle handle = NULL;

/**
 * Initialize object.
 * \return 0 Success
 * \return -1 Failure to initialize or -2 for already initialized
 */
int32_t FixedWingPathFollowerStatusInitialize(void)
{
	// Don't set the handle to null if already registered
	if(UAVObjGetByID(FIXEDWINGPATHFOLLOWERSTATUS_OBJID) != NULL)
		return -2;
	
	// Register object with the object manager
	handle = UAVObjRegister(FIXEDWINGPATHFOLLOWERSTATUS_OBJID,
			FIXEDWINGPATHFOLLOWERSTATUS_ISSINGLEINST, FIXEDWINGPATHFOLLOWERSTATUS_ISSETTINGS, FIXEDWINGPATHFOLLOWERSTATUS_NUMBYTES, &FixedWingPathFollowerStatusSetDefaults);

	// Done
	if (handle != 0)
	{
		return 0;
	}
	else
	{
		return -1;
	}
}

/**
 * Initialize object fields and metadata with the default values.
 * If a default value is not specified the object fields
 * will be initialized to zero.
 */
void FixedWingPathFollowerStatusSetDefaults(UAVObjHandle obj, uint16_t instId)
{
	FixedWingPathFollowerStatusData data;
	UAVObjMetadata metadata;

	// Initialize object fields to their default values
	UAVObjGetInstanceData(obj, instId, &data);
	memset(&data, 0, sizeof(FixedWingPathFollowerStatusData));

	UAVObjSetInstanceData(obj, instId, &data);

	// Initialize object metadata to their default values
	metadata.flags =
		ACCESS_READWRITE << UAVOBJ_ACCESS_SHIFT |
		ACCESS_READWRITE << UAVOBJ_GCS_ACCESS_SHIFT |
		0 << UAVOBJ_TELEMETRY_ACKED_SHIFT |
		0 << UAVOBJ_GCS_TELEMETRY_ACKED_SHIFT |
		UPDATEMODE_PERIODIC << UAVOBJ_TELEMETRY_UPDATE_MODE_SHIFT |
		UPDATEMODE_MANUAL << UAVOBJ_GCS_TELEMETRY_UPDATE_MODE_SHIFT;
	metadata.telemetryUpdatePeriod = 500;
	metadata.gcsTelemetryUpdatePeriod = 0;
	metadata.loggingUpdatePeriod = 0;
	UAVObjSetMetadata(obj, &metadata);
}

/**
 * Get object handle
 */
UAVObjHandle FixedWingPathFollowerStatusHandle()
{
	return handle;
}

/**
 * Get/Set object Functions
 */
void FixedWingPathFollowerStatusESet( float *NewE )
{
	UAVObjSetDataField(FixedWingPathFollowerStatusHandle(), (void*)NewE, offsetof( FixedWingPathFollowerStatusData, E), 4*sizeof(float));
}
void FixedWingPathFollowerStatusEGet( float *NewE )
{
	UAVObjGetDataField(FixedWingPathFollowerStatusHandle(), (void*)NewE, offsetof( FixedWingPathFollowerStatusData, E), 4*sizeof(float));
}
void FixedWingPathFollowerStatusASet( float *NewA )
{
	UAVObjSetDataField(FixedWingPathFollowerStatusHandle(), (void*)NewA, offsetof( FixedWingPathFollowerStatusData, A), 4*sizeof(float));
}
void FixedWingPathFollowerStatusAGet( float *NewA )
{
	UAVObjGetDataField(FixedWingPathFollowerStatusHandle(), (void*)NewA, offsetof( FixedWingPathFollowerStatusData, A), 4*sizeof(float));
}
void FixedWingPathFollowerStatusCSet( float *NewC )
{
	UAVObjSetDataField(FixedWingPathFollowerStatusHandle(), (void*)NewC, offsetof( FixedWingPathFollowerStatusData, C), 4*sizeof(float));
}
void FixedWingPathFollowerStatusCGet( float *NewC )
{
	UAVObjGetDataField(FixedWingPathFollowerStatusHandle(), (void*)NewC, offsetof( FixedWingPathFollowerStatusData, C), 4*sizeof(float));
}
void FixedWingPathFollowerStatusErrorsSet( uint8_t *NewErrors )
{
	UAVObjSetDataField(FixedWingPathFollowerStatusHandle(), (void*)NewErrors, offsetof( FixedWingPathFollowerStatusData, Errors), 6*sizeof(uint8_t));
}
void FixedWingPathFollowerStatusErrorsGet( uint8_t *NewErrors )
{
	UAVObjGetDataField(FixedWingPathFollowerStatusHandle(), (void*)NewErrors, offsetof( FixedWingPathFollowerStatusData, Errors), 6*sizeof(uint8_t));
}


/**
 * @}
 */

