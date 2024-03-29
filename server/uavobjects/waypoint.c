/**
 ******************************************************************************
 * @addtogroup UAVObjects OpenPilot UAVObjects
 * @{ 
 * @addtogroup Waypoint Waypoint
 * @brief A waypoint the aircraft can try and hit.  Used by the @ref PathPlanner module
 *
 * Autogenerated files and functions for Waypoint Object
 * @{ 
 *
 * @file       waypoint.c
 * @author     The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010.
 * @brief      Implementation of the Waypoint object. This file has been 
 *             automatically generated by the UAVObjectGenerator.
 * 
 * @note       Object definition file: waypoint.xml. 
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
#include "waypoint.h"

// Private variables
static UAVObjHandle handle = NULL;

/**
 * Initialize object.
 * \return 0 Success
 * \return -1 Failure to initialize or -2 for already initialized
 */
int32_t WaypointInitialize(void)
{
	// Don't set the handle to null if already registered
	if(UAVObjGetByID(WAYPOINT_OBJID) != NULL)
		return -2;
	
	// Register object with the object manager
	handle = UAVObjRegister(WAYPOINT_OBJID,
			WAYPOINT_ISSINGLEINST, WAYPOINT_ISSETTINGS, WAYPOINT_NUMBYTES, &WaypointSetDefaults);

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
void WaypointSetDefaults(UAVObjHandle obj, uint16_t instId)
{
	WaypointData data;
	UAVObjMetadata metadata;

	// Initialize object fields to their default values
	UAVObjGetInstanceData(obj, instId, &data);
	memset(&data, 0, sizeof(WaypointData));

	UAVObjSetInstanceData(obj, instId, &data);

	// Initialize object metadata to their default values
	metadata.flags =
		ACCESS_READWRITE << UAVOBJ_ACCESS_SHIFT |
		ACCESS_READWRITE << UAVOBJ_GCS_ACCESS_SHIFT |
		0 << UAVOBJ_TELEMETRY_ACKED_SHIFT |
		0 << UAVOBJ_GCS_TELEMETRY_ACKED_SHIFT |
		UPDATEMODE_PERIODIC << UAVOBJ_TELEMETRY_UPDATE_MODE_SHIFT |
		UPDATEMODE_MANUAL << UAVOBJ_GCS_TELEMETRY_UPDATE_MODE_SHIFT;
	metadata.telemetryUpdatePeriod = 4000;
	metadata.gcsTelemetryUpdatePeriod = 0;
	metadata.loggingUpdatePeriod = 1000;
	UAVObjSetMetadata(obj, &metadata);
}

/**
 * Get object handle
 */
UAVObjHandle WaypointHandle()
{
	return handle;
}

/**
 * Get/Set object Functions
 */
void WaypointPositionSet( float *NewPosition )
{
	UAVObjSetDataField(WaypointHandle(), (void*)NewPosition, offsetof( WaypointData, Position), 3*sizeof(float));
}
void WaypointPositionGet( float *NewPosition )
{
	UAVObjGetDataField(WaypointHandle(), (void*)NewPosition, offsetof( WaypointData, Position), 3*sizeof(float));
}
void WaypointVelocitySet( float *NewVelocity )
{
	UAVObjSetDataField(WaypointHandle(), (void*)NewVelocity, offsetof( WaypointData, Velocity), 3*sizeof(float));
}
void WaypointVelocityGet( float *NewVelocity )
{
	UAVObjGetDataField(WaypointHandle(), (void*)NewVelocity, offsetof( WaypointData, Velocity), 3*sizeof(float));
}
void WaypointYawDesiredSet( float *NewYawDesired )
{
	UAVObjSetDataField(WaypointHandle(), (void*)NewYawDesired, offsetof( WaypointData, YawDesired), sizeof(float));
}
void WaypointYawDesiredGet( float *NewYawDesired )
{
	UAVObjGetDataField(WaypointHandle(), (void*)NewYawDesired, offsetof( WaypointData, YawDesired), sizeof(float));
}
void WaypointActionSet( uint8_t *NewAction )
{
	UAVObjSetDataField(WaypointHandle(), (void*)NewAction, offsetof( WaypointData, Action), sizeof(uint8_t));
}
void WaypointActionGet( uint8_t *NewAction )
{
	UAVObjGetDataField(WaypointHandle(), (void*)NewAction, offsetof( WaypointData, Action), sizeof(uint8_t));
}


/**
 * @}
 */

