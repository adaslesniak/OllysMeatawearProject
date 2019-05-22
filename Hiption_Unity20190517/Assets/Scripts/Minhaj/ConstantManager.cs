using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace Constants  
{
//	public static int totalplayers = 0;

	struct CalibratedData
	{
		public float accel_x;
		public float accel_y;
		public float accel_z;
	}
	///  OW Change 20 Jan 18
	struct CalibratedData2
	{
		public float accel_x;
		public float accel_y;
		public float accel_z;
	}
	///  OW Change 20 Jan 18

	enum HipHit
	{
		HIT12,
		HIT3,
		HIT6,
		HIT9,
		HITDOWN,
		HITUP,

		CONT12,
		CONT3,
		CONT6,
		CONT9,
		CONTUP,
		CONTDOWN,

		CIRCLE_12_3,
		CIRCLE_3_6,
		CIRCLE_6_9,
		CIRCLE_9_12,

		CIRCLE_12_9,
		CIRCLE_9_6,
		CIRCLE_6_3,
		CIRCLE_3_12,

		STILL,

		INVALID,
	} 

//	enum Orientation
//	{
//		ORIENT_12,
//		ORIENT_1_5,
//		ORIENT_3,
//		ORIENT_4_5,
//		ORIENT_6,
//		ORIENT_7_5,
//		ORIENT_9,
//		ORIENT_10_5,
//	}
}
