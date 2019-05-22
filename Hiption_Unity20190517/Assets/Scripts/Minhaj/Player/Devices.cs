
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class MWData
{
	public float accel_x;
	public float accel_y;
	public float accel_z;

	public float accel_x_15;
	public float accel_y_15;
	public float accel_z_15;


	public double gyro_x;
	public double gyro_y;
	public double gyro_z;

	public double GS_x;
	public double GT_x;
	public double GTotal_x;
	public double GO_x;

	public Orientation current_orient;
	public Orientation last_orient;

	public int still;
	public float stillCalc;



}

public class HipScore{
	public int Score = 0;
}


public class Devices {

	public string deviceSerialNo;
	public NativeCommunication linkManager;

	int hitCounter = 0;
	float lastHitOrient = 0;

	//	Orientation currentHitOrient = ORIENT_12;
	float lastHitGO = 0;

	// sensor calibration 

	public bool shouldLogData = false;

	public int accelDataCounter;
	float accel_last_time;
	Constants.CalibratedData[] calibratedData = new Constants.CalibratedData[100];

	///  OW Change 20 Jan 18
	//Constants.CalibratedData2[] calibratedData2 = new Constants.CalibratedData2[500];
	///  OW Change 20 Jan 18

	List<Constants.CalibratedData2> calibratedList2 = new List<Constants.CalibratedData2>();




	float Accel_x_cal = 0;
	float Accel_y_cal = 0;
	float Accel_z_cal = 0;

	float Accel_x_off_100 = 0;
	float Accel_y_off_100 = 0;
	float Accel_z_off_100 = 0;
	float SumStill_100 = 0;

	float Accel_x_off = 0;
	float Accel_y_off = 0;
	float Accel_z_off = 0;


	//float Accel_x_Sum_15 = 0;
	//float Accel_y_Sum_15 = 0;
	//float Accel_z_Sum_15 = 0;


	//List<Vector3> fifteenList = new List<Vector3> ();

	int SumStill = 0;
	int Still;
	float StillCalc = 0;


	bool hasNotifiedLink = false;
	// // // // // // // // // // /// ////////////////////////////////////////

	//gyro data 

	float gx;
	float gy;
	float gz;

	int gyroDataCounter;

	double lastGO=0;
	double lastGT=0;
	double lastGTotal = 0;

	float last_time_gyro=0;

	// // // // // // // // // // // // // // // // // // // // //
	//	[System.Serializable]

	public List<MWData> AccelHistoricalData = new List<MWData> ();
	public List<MWData> GyroHistoricalData = new List<MWData> ();

	// // // // // // // // // // // // // // // // // // // // 

	// Use this for initialization
	public void Start () 
	{
		Debug.Log ("Devices :: Start");
		accelDataCounter = 0;
		gyroDataCounter = 0;

		//Initializer code -START
		GameObject lmObj = GameObject.Find ("LinkManager");
		if (lmObj == null) 
		{
			lmObj = new GameObject ("LinkManager");
			lmObj.AddComponent<NativeCommunication> ();
		}
		linkManager = lmObj.GetComponent<NativeCommunication> ();

		for (int loop = 0; loop < 500; loop++) {

			Constants.CalibratedData2 newc = new Constants.CalibratedData2();

			newc.accel_x = 0;
			newc.accel_y = 0;
			newc.accel_z = 0;

			calibratedList2.Add (newc);
		
		}
	}
		
	public void AccelSensorData(Vector3 accelData)
	{
		Constants.CalibratedData calibrateData = new Constants.CalibratedData();

		///  OW Change 20 Jan 18
		Constants.CalibratedData2 calibrateData2 = new Constants.CalibratedData2();
		///  OW Change 20 Jan 18

		float scale_val=0;
		float cur_time = Time.time;

		// calibrating the device starts here!!
		if(shouldLogData)
		{
			//Time calculation -START.
			if(accelDataCounter == 0)
			{
				accel_last_time = Time.time;
				scale_val = 0;
			}

			cur_time = Time.time;

			///OW change 20 Jan 18

			//scale_val = (cur_time - accel_last_time) *10.0f;
			scale_val = 1.0f;

			///OW change 20 Jan 18

			accel_last_time = cur_time;
			//Time calculation -END.

			if(accelDataCounter <= 100)
			{
				calibrateData.accel_x = accelData.x;
				calibrateData.accel_y = accelData.y;
				calibrateData.accel_z = accelData.z;

				calibrateData2.accel_x = accelData.x;
				calibrateData2.accel_y = accelData.y;
				calibrateData2.accel_z = accelData.z;


			}
			if(accelDataCounter > 100)
			{
				calibrateData.accel_x = accelData.x * scale_val;// multiply scale value
				calibrateData.accel_y = accelData.y * scale_val;// multiply scale value
				calibrateData.accel_z = accelData.z * scale_val;// multiply scale value

				///OW change 23 Jan 18
				calibrateData2.accel_x = accelData.x * scale_val;// multiply scale value
				calibrateData2.accel_y = accelData.y * scale_val;// multiply scale value
				calibrateData2.accel_z = accelData.z * scale_val;// multiply scale value

				///OW change 23 Jan 18
			}

			/*if (accelDataCounter < 500) {

				calibratedData2 [accelDataCounter] = calibrateData2;

			}*/

			calibratedList2.Add (calibrateData2);
			if (calibratedList2.Count > 500) {
				calibratedList2.RemoveAt (0);
			
			}

			if(accelDataCounter < 100)
			{
				// send log to linkManager-> updateAccLogNotification
				calibratedData [accelDataCounter] = calibrateData;
			}

			if(accelDataCounter == 100)
			{
				Accel_x_off_100 = Accel_y_off_100 = Accel_z_off_100 = 0.0f;

				for(int i = 0; i < 100; i++)
				{
					Accel_x_off_100 += calibratedData [i].accel_x;
					Accel_y_off_100 += calibratedData [i].accel_y;
					Accel_z_off_100 += calibratedData [i].accel_z;
				}

				Accel_x_off_100 /= 100.0f;
				Accel_y_off_100 /= 100.0f;
				Accel_z_off_100 /= 100.0f;

				SumStill_100 = 0;

				for(int i = 0; i < 100; i++) 
				{
					SumStill_100 += 
						(
							Mathf.Pow(calibratedData[i].accel_x - Accel_x_off_100, 2.0f) +
							Mathf.Pow(calibratedData[i].accel_y - Accel_y_off_100, 2.0f) +
							Mathf.Pow(calibratedData[i].accel_z - Accel_z_off_100, 2.0f)
						);
				}

				Accel_x_off = Accel_x_off_100;
				Accel_y_off = Accel_y_off_100;
				Accel_z_off = Accel_z_off_100;

				SumStill_100 = SumStill;

				Still = 0;
			}


			//OW change 23 Jan 18
			if(accelDataCounter > 500)
			{
				Accel_x_off = 0.0f;
				Accel_y_off = 0.0f;
				Accel_z_off = 0.0f;

				//Debug.Log ("Length of Clibrated Data Array : " + calibratedData2.Length);
				//calibratedData2 [accelDataCounter] = calibrateData2;

				int counter = 0;
			
			
				for (int loop = 0; loop < calibratedList2.Count; loop++) {
					Accel_x_off += calibratedList2 [loop].accel_x;
					Accel_y_off += calibratedList2 [loop].accel_y;
					Accel_z_off += calibratedList2 [loop].accel_z;
					counter++;

				}

				Accel_x_off /= (float)counter;
				Accel_y_off /= (float)counter;
				Accel_z_off /= (float)counter;
			}

		}
		// Calibrating data ends here.

		Accel_x_cal = calibrateData.accel_x - Accel_x_off * scale_val;
		Accel_y_cal = calibrateData.accel_y - Accel_y_off * scale_val;
		Accel_z_cal = calibrateData.accel_z - Accel_z_off * scale_val;

		Vector3 calGroup = new Vector3 (Accel_x_cal,Accel_y_cal,Accel_z_cal);

		//fifteenList.Add (calGroup);

		//if (fifteenList.Count > 15) {
		//	fifteenList.RemoveAt (0);
		//}
			
		if(accelDataCounter > 100)
		{
			//Accel_x_Sum_15 = 0 ;
			//Accel_y_Sum_15 = 0 ;
			//Accel_z_Sum_15 = 0 ;

			//for (int loop = 0; loop <15 ; loop++) {

				//Accel_x_Sum_15 += fifteenList[loop].x;
				//Accel_y_Sum_15 += fifteenList[loop].y;
				//Accel_z_Sum_15 += fifteenList[loop].z;
			//}

			StillCalc = 0;

			StillCalc = (Mathf.Pow (Accel_x_cal, 2) + Mathf.Pow (Accel_y_cal, 2) + Mathf.Pow (Accel_z_cal, 2));

			if (StillCalc < 1.0f) {
				Still = 1;
			} else if (StillCalc > 1.0f) {
				Still = 0;
			}

			//Still = (ushort)(StillCalc < 5.0f ? 1 : 0);

			int newSumStill = SumStill + Still;

			SumStill = newSumStill;

			calibrateData.accel_x = Accel_x_cal;
			calibrateData.accel_y = Accel_y_cal;
			calibrateData.accel_z = Accel_z_cal;

		}

		//This will be called first since the check is >= 100
		MWData newData = new MWData();

		if(accelDataCounter >= 100)
		{


			newData.accel_x = calibrateData.accel_x;
			newData.accel_y = calibrateData.accel_y;
			newData.accel_z = calibrateData.accel_z;

			//newData.accel_x_15 = Accel_x_Sum_15;
			//newData.accel_y_15 = Accel_y_Sum_15;
			//newData.accel_z_15 = Accel_z_Sum_15;



			//**********************************
			//When this is executed the 100th Time
			//**********************************
			//For the 100th sample still will be zero
			//This will NOT be zero for 100 onwards data samples since it is being modified in code block above

			//**********************************
			// When it is excuted after 100th time
			//**********************************
			//self.Still will either be 0 or 1 because of the conditional operator which assign it 1 if it is less than 0.015



			newData.still = Still;
			newData.stillCalc = StillCalc;

			//**********************************
			//When this is executed the 100th Time
			//**********************************
			//At this point newdata will contain RAW data sample
			//This will NOT contain RAW values for 100 onwards data samples since it is being modified in code block above
			//And it contains calibrated values based on Accel_x_cal = calibratedData.accel_x_a - Accel_x_off;

			AccelHistoricalData.Add (newData); 


			if(shouldLogData)
			{
				string accelLog = "Unity:: Device Serial : "+ deviceSerialNo +" -- " + accelDataCounter + "," + cur_time + "," + scale_val + "," + accelData.x + "," + accelData.y + "," + accelData.z + "," + Accel_x_cal + "," + Accel_y_cal + "," + Accel_z_cal + "," + Accel_x_off_100 + "," + Accel_y_off_100 + "," + Accel_z_off_100 + "," + Accel_x_off + "," + Accel_y_off + "," + Accel_z_off + "," + Still + "," + SumStill + "," + StillCalc + "," + calibratedList2.Count;

				linkManager.UpdateAccLogNotification (accelLog);
			}
		}

		//Processed one data sample increment counter
		if(shouldLogData)
			accelDataCounter++;

		// send notification after calibrating device
		if(accelDataCounter >= 212 && !hasNotifiedLink) 
		{
			Debug.LogError ("Calibrated Device");
			linkManager.AccelCalibrationCompleteNotification (deviceSerialNo);
			hasNotifiedLink = true;
		}
	}

	//double gyro_x_offset = 0;

	double angle = 0;

	public void GyroSensorDara(Vector3 gyroData)
	{
		float gyro_scale_val = 0;
		float cur_time = Time.time;


		gx = gyroData.x;
		gy = gyroData.y;
		gz = gyroData.z;

		MWData gyroCalibratedData = new MWData();

		if(gyroDataCounter == 0)
		{
			gyro_scale_val = 0;
			cur_time = 0;

			gyroCalibratedData.GS_x = 0;

			gyroCalibratedData.GO_x = 0;
			lastGO = gyroCalibratedData.GO_x;

			gyroCalibratedData.GT_x = 0;
			lastGT =gyroCalibratedData.GT_x;

			last_time_gyro = Time.time;
		}

		if(gyroDataCounter > 0)
		{
			cur_time = Time.time;
			gyro_scale_val = (cur_time - last_time_gyro) *1.0f;
			last_time_gyro=cur_time;

			gyroCalibratedData.GTotal_x = lastGTotal + gyroData.x;
			lastGTotal = gyroCalibratedData.GTotal_x;

			gyroCalibratedData.GS_x = (gyroData.x); //* gyro_scale_val;

			angle = lastGO + 360*gyroCalibratedData.GS_x/35200;

			if(angle>360)
			{
				angle -= 360;
			}

			if(angle<0)
			{
				angle += 360;
			}
			gyroCalibratedData.GO_x = angle;
			lastGO = gyroCalibratedData.GO_x;

			gyroCalibratedData.GT_x = lastGT + gyroCalibratedData.GS_x;
			lastGT = gyroCalibratedData.GT_x;
		}

		//if (gyroDataCounter == 100) {

		//	gyro_x_offset = gyroCalibratedData.GTotal_x / 100;

		//}

		float orientAngle;

		if((gyroCalibratedData.GO_x>335 && gyroCalibratedData.GO_x<361) || (gyroCalibratedData.GO_x>-1 && gyroCalibratedData.GO_x<16))
		{
			orientAngle = 12f;
		}
		else if(gyroCalibratedData.GO_x>15 && gyroCalibratedData.GO_x<61)
		{
			orientAngle = 1.5f;
		}
		else if(gyroCalibratedData.GO_x>60 && gyroCalibratedData.GO_x<104)
		{
			orientAngle = 3f;
		}
		else if(gyroCalibratedData.GO_x>105 && gyroCalibratedData.GO_x<151)
		{
			orientAngle = 4.5f;
		}
		else if(gyroCalibratedData.GO_x>150 && gyroCalibratedData.GO_x<196)
		{
			orientAngle = 6f;
		}
		else if(gyroCalibratedData.GO_x>195 && gyroCalibratedData.GO_x<241)
		{
			orientAngle = 7.5f;
		}
		else if(gyroCalibratedData.GO_x>240 && gyroCalibratedData.GO_x<286)
		{
			orientAngle = 9f;
		}
		else if(gyroCalibratedData.GO_x>285 && gyroCalibratedData.GO_x<336)
		{
			orientAngle = 10.5f;
		}
		else
		{
			orientAngle = 0f;
		}

		if(shouldLogData)
		{
			GyroHistoricalData.Add (gyroCalibratedData);

			string gyroLogData = "Unity:: Device Serial : "+ deviceSerialNo +" -- " + gyroDataCounter + "," + cur_time + "," + gyro_scale_val + "," + gyroData.x + "," + gyroData.y + "," + gyroData.z + "," + gyroCalibratedData.GS_x + "," + gyroCalibratedData.GO_x + "," + gyroCalibratedData.GT_x + "," + orientAngle;

			linkManager.UpdateGyroLogNotification (gyroLogData);
			Debug.Log ("Gyro Data send "); 

			gyroDataCounter++;
		}


	}

	public double gyroGTxLast = 0;

	public float _is_hit(HipHit hitType, uint back, float strength, Orientation currentOrientation, Orientation lastOrientation, float score)
	{
		if(AccelHistoricalData.Count <= 0)
		{
			//Debug.Log("NO HISTORICAL DATA: " + AccelHistoricalData.Count);
			return 0.0f;
		}

		hitCounter++;
		//Debug.Log("HIT COUNTER : "+ hitCounter);

		uint start_i = back;

		bool accTest=false;
		bool hitTestGyroGO=false;
		bool hitTestGyroGT=false;
		string strHitType = null;
		string strHitTypePlus = null;

		//**************************************************************************************
		//HIT CHECKS WITH GYRO DATA.
		float currentOrientAngle= (float)currentOrientation*1.5f;
		currentOrientAngle /= 12;
		currentOrientAngle *=360;

		float lastOrientAngle= (float)lastOrientation*1.5f;
		lastOrientAngle /= 12;
		lastOrientAngle *=360;

		MWData gyroDataTemp = new MWData ();
		gyroDataTemp = GyroHistoricalData[GyroHistoricalData.Count - 1];
		//Debug.Log("DATA COUNTER & GYRO DATA COUNTER 1: "+ accelDataCounter+ ", " + gyroDataCounter);
		double deltaGO = gyroDataTemp.GO_x;

		double a = currentOrientAngle-20;
		double b = currentOrientAngle+20;

		//GO Calculations- START*********************************************
		if(deltaGO>a && deltaGO<b){
			hitTestGyroGO = true;
		}
			


		if(lastOrientation == Orientation.ORIENT_12 && currentOrientation == Orientation.ORIENT_12) // do check if there is orientation or not!!
		{
			hitTestGyroGO = ( (deltaGO>=0&&deltaGO<25) || (deltaGO>335 && deltaGO<=360));
			Debug.Log("Both orients are 12 " + deltaGO+","+hitTestGyroGO);

			lastGO = 0;


			//gyro_x_offset = gyroDataTemp.GTotal_x / gyroDataCounter;

		}
		//GO Calculations-END*********************************************


		//GT Calculations-START *********************************************
		MWData gyroData = new MWData ();
		gyroData = GyroHistoricalData [gyroDataCounter - 1];//([waxDataManager.historicalGyroTRSData objectAtIndex: waxDataManager.gDataCounter-1]);
		//NSLog(@"NEW HIT SOT DATA: SOT %f,%f,%f",gyroData.GS_x, gyroData.GO_x,gyroData.GT_x);

		double gyroGTx = gyroData.GT_x;
		MWData gyroNewData = new MWData ();
		gyroNewData = GyroHistoricalData[GyroHistoricalData.Count -41];//([waxDataManager.historicalGyroTRSData objectAtIndex:([waxDataManager.historicalGyroTRSData count]-41)]);


		double deltaGT = gyroGTx-gyroGTxLast;

		string strGyroData = "" + "" + gx + "" + gy + "" + gz;


		float deltaAngle = currentOrientAngle - lastOrientAngle;

		//if( deltaGT < currentOrientAngle+15 && deltaGT > currentOrientAngle-15)
		if(deltaGT > deltaAngle-20 &&  deltaGT < deltaAngle+20)
		{
			hitTestGyroGT = true;
			Debug.Log("GT Test: "+ hitTestGyroGT);
		}

		gyroGTxLast = gyroNewData.GT_x;


		//GT Calculations-END*********************************************

		//HIT CHECKS WITH ACCELERATION DATA.
		if(hitType == HipHit.CONT12 || hitType == HipHit.CONT3 || hitType == HipHit.CONT6 || hitType == HipHit.CONT9 || hitType == HipHit.CONTDOWN || hitType == HipHit.CONTUP)
		{
			back = (uint)accelDataCounter - start_i + 10;
		}
		else //Safe checking back to keep in some specific limit.
		{
			if(back > 120)
				back = 120;
			else if(back < 1)
				back = 1;
		}

		if(strength > 20)
			strength = 20;
		else if(strength < 0.1f)
			strength = 0.1f;

		switch(hitType) {
		case HipHit.CONT12:
		case HipHit.HIT12:
			{
				float Accel_z_Speed = 0;
				float Accel_z_speed8 = 0;

				for(int i = Mathf.FloorToInt(accelDataCounter - back); i < accelDataCounter; i++) {
					if (AccelHistoricalData[i-101].accel_z_15<Accel_z_Speed) {
						Accel_z_Speed = AccelHistoricalData[i-101].accel_z_15;
					}
				}
					
				if(Accel_z_Speed < 0)
				{
					accTest = true;

					//strHitType = "HIT12 Delayed";
					if(hitTestGyroGO || hitTestGyroGT)
					{
				
						//calculate_data_Log(gyroData, currentOrientation, lastOrientation, strGyroData, accTest, strHitType,hitTestGyroGO,gyroGTx,gyroGTxLast,deltaGT,hitTestGyroGT);
						return Mathf.Round(-Accel_z_Speed * score* 0.2f);
					}
					//calculate_data_Log(gyroData, currentOrientation, lastOrientation, strGyroData, accTest, strHitType,hitTestGyroGO,gyroGTx,gyroGTxLast,deltaGT,hitTestGyroGT);
				}
				break;
			}


		case HipHit.CONT3:
		case HipHit.HIT3: 
			{
				float Accel_y_Speed = 0;
				//float Accel_y_speed8 = 0;


				//Accel_x_DelaySpeed = 0;

				for(int i = Mathf.FloorToInt(accelDataCounter - back); i < accelDataCounter; i++) {
						Accel_y_Speed += AccelHistoricalData[i-101].accel_y;

				}


				if(Accel_y_Speed > 0.0f )

				{
					accTest = true;
					//strHitType = "HIT3 success!!";
					if(hitTestGyroGO || hitTestGyroGT)
					{
						//calculate_data_Log(gyroData, currentOrientation, lastOrientation, strGyroData, accTest, strHitType,hitTestGyroGO,gyroGTx,gyroGTxLast,deltaGT,hitTestGyroGT);
						//return true;
						return Mathf.Round(Accel_y_Speed * score*6.666f);
					}
					//calculate_data_Log(gyroData, currentOrientation, lastOrientation, strGyroData, accTest, strHitType,hitTestGyroGO,gyroGTx,gyroGTxLast,deltaGT,hitTestGyroGT);
				}
				break;
			}

		case HipHit.CONT6:
		case HipHit.HIT6: {
				float Accel_z_Speed = 0;
				//float Accel_z_speed8 = 0;

				//new code 28 Jan 18
				for(int i = Mathf.FloorToInt(accelDataCounter - back); i < accelDataCounter; i++) {
					
					Accel_z_Speed += AccelHistoricalData[i-101].accel_z;
					
				}

				if(Accel_z_Speed > 0.0f)
				{
					accTest = true;
					//strHitType = "HIT6 acc success!!!";
					if(hitTestGyroGO || hitTestGyroGT)
					{
						//calculate_data_Log(gyroData, currentOrientation, lastOrientation, strGyroData, accTest, strHitType,hitTestGyroGO,gyroGTx,gyroGTxLast,deltaGT,hitTestGyroGT);
						//return true;
						return Mathf.Round(Accel_z_Speed * score*1.333f);
					}
					//calculate_data_Log(gyroData, currentOrientation, lastOrientation, strGyroData, accTest, strHitType,hitTestGyroGO,gyroGTx,gyroGTxLast,deltaGT,hitTestGyroGT);
				}
				break;
			}


		
		case HipHit.CONT9:
		case HipHit.HIT9: {

				float Accel_y_Speed = 0;
				//float Accel_y_speed8 = 0;

				//Accel_x_DelaySpeed = 0;

				for(int i = Mathf.FloorToInt(accelDataCounter - back); i < accelDataCounter; i++) {
					//					WAXData* data = [waxDataManager.historicalData objectAtIndex:i-101];
					Accel_y_Speed += AccelHistoricalData[i-101].accel_y;

				}

				//for(int i = Mathf.FloorToInt(accelDataCounter - 0.8f*back); i < accelDataCounter; i++) {
					//					WAXData* data = [waxDataManager.historicalData objectAtIndex:i-101];
				//	Accel_y_speed8 += AccelHistoricalData[i-101].accel_y;
				//
				//}



				if(Accel_y_Speed < 0.0f )
				
				{
					accTest = true;
					//strHitType = "HIT9 Success!!!";
					if(hitTestGyroGO || hitTestGyroGT)
					{
						//calculate_data_Log(gyroData, currentOrientation, lastOrientation, strGyroData, accTest, strHitType,hitTestGyroGO,gyroGTx,gyroGTxLast,deltaGT,hitTestGyroGT);
						//return true;
						return Mathf.Round(-Accel_y_Speed * score*6.666f);
					}
					//calculate_data_Log(gyroData, currentOrientation, lastOrientation, strGyroData, accTest, strHitType,hitTestGyroGO,gyroGTx,gyroGTxLast,deltaGT,hitTestGyroGT);
				}
				break;
			}

		

		case HipHit.CONTDOWN:
		case HipHit.HITDOWN:
			{
				float Accel_x_Speed = 0;
				//float Accel_x_speed8 = 0;

				//Accel_x_DelaySpeed = 0;

				for(int i = Mathf.FloorToInt(accelDataCounter - back); i < accelDataCounter; i++) {
					//					WAXData* data = [waxDataManager.historicalData objectAtIndex:i-101];
						Accel_x_Speed += AccelHistoricalData[i-101].accel_x;
			
				}

				//for(int i = Mathf.FloorToInt(accelDataCounter - 0.8f*back); i < accelDataCounter; i++) {
					//					WAXData* data = [waxDataManager.historicalData objectAtIndex:i-101];
				//	Accel_x_speed8 += AccelHistoricalData[i-101].accel_x;

				//}


				if(Accel_x_Speed < 0)

				{
					accTest = true;
					//strHitType = "HITDOWN";
					if(hitTestGyroGO || hitTestGyroGT)
					{
						//calculate_data_Log(gyroData, currentOrientation, lastOrientation, strGyroData, accTest, strHitType,hitTestGyroGO,gyroGTx,gyroGTxLast,deltaGT,hitTestGyroGT);
						//return true;
						return Mathf.Round(-Accel_x_Speed * score*6.666f);
					}
					//calculate_data_Log(gyroData, currentOrientation, lastOrientation, strGyroData, accTest, strHitType,hitTestGyroGO,gyroGTx,gyroGTxLast,deltaGT,hitTestGyroGT);
				}
				break;
			}

		case HipHit.CONTUP:
		case HipHit.HITUP:
			{
				float Accel_x_Speed = 0;
				//float Accel_x_speed8 = 0;

				//Accel_x_DelaySpeed = 0;

				for(int i = Mathf.FloorToInt(accelDataCounter - back); i < accelDataCounter; i++) {
					//					WAXData* data = [waxDataManager.historicalData objectAtIndex:i-101];
					Accel_x_Speed += AccelHistoricalData[i-101].accel_x;

				}

				//for(int i = Mathf.FloorToInt(accelDataCounter - 0.8f*back); i < accelDataCounter; i++) {
					//					WAXData* data = [waxDataManager.historicalData objectAtIndex:i-101];
				//	Accel_x_speed8 += AccelHistoricalData[i-101].accel_x;
				//
				//}

				if(Accel_x_Speed > 0.0f)

				{
					accTest = true;
					//strHitType = "HITUP success!!!";
					if(hitTestGyroGO || hitTestGyroGT)
					{
						//calculate_data_Log(gyroData, currentOrientation, lastOrientation, strGyroData, accTest, strHitType,hitTestGyroGO,gyroGTx,gyroGTxLast,deltaGT,hitTestGyroGT);
						//return true;
						return Mathf.Round(Accel_x_Speed * score*6.666f);
					}
					//calculate_data_Log(gyroData, currentOrientation, lastOrientation, strGyroData, accTest, strHitType,hitTestGyroGO,gyroGTx,gyroGTxLast,deltaGT,hitTestGyroGT);
				}
				break;
			}
		
		
		
		case HipHit.STILL:
			{
				if(StillCalc <0.01f)
				{
					accTest = true;
					//strHitType = "Still Correct";
					if(hitTestGyroGO || hitTestGyroGT)
					{
						//calculate_data_Log(gyroData, currentOrientation, lastOrientation, strGyroData, accTest, strHitType,hitTestGyroGO,gyroGTx,gyroGTxLast,deltaGT,hitTestGyroGT);
						return 1.0f;
					}
					//calculate_data_Log(gyroData, currentOrientation, lastOrientation, strGyroData, accTest, strHitType,hitTestGyroGO,gyroGTx,gyroGTxLast,deltaGT,hitTestGyroGT);
				}
				break;
			}
		
		case HipHit.CIRCLE_3:
			{
				float Accel_y_Speed20 = 0;

				for(int i = Mathf.FloorToInt(accelDataCounter - 20); i < accelDataCounter; i++) {
					Accel_y_Speed20 += AccelHistoricalData[i-101].accel_y;

				}
					
				if(Accel_y_Speed20 < 0 && StillCalc > 0.00001f)
				{
					accTest = true;
					//strHitType = "Circle_3 success";
					if(hitTestGyroGO || hitTestGyroGT)
					{
						//calculate_data_Log(gyroData, currentOrientation, lastOrientation, strGyroData, accTest, strHitType,hitTestGyroGO,gyroGTx,gyroGTxLast,deltaGT,hitTestGyroGT);
						return 5.0f;
					}
					//calculate_data_Log(gyroData, currentOrientation, lastOrientation, strGyroData, accTest, strHitType,hitTestGyroGO,gyroGTx,gyroGTxLast,deltaGT,hitTestGyroGT);
				}
				break;
			}
		case HipHit.CIRCLE_4_5:
			{
				float Accel_y_Speed20 = 0;

				for(int i = Mathf.FloorToInt(accelDataCounter - 20); i < accelDataCounter; i++) {
					Accel_y_Speed20 += AccelHistoricalData[i-101].accel_y;
				}

				float Accel_z_Speed20 = 0;

				for(int i = Mathf.FloorToInt(accelDataCounter - 20); i < accelDataCounter; i++) {
					Accel_z_Speed20 += AccelHistoricalData[i-101].accel_z;

				}
			
				if(Accel_z_Speed20>0.0f  && Accel_y_Speed20 <0.0f && StillCalc > 0.00001f)
				{
					accTest = true;
					//strHitType = "Circle_4_5 success";
					if(hitTestGyroGO || hitTestGyroGT)
					{
						//calculate_data_Log(gyroData, currentOrientation, lastOrientation, strGyroData, accTest, strHitType,hitTestGyroGO,gyroGTx,gyroGTxLast,deltaGT,hitTestGyroGT);
						return 5.0f;
					}
					//calculate_data_Log(gyroData, currentOrientation, lastOrientation, strGyroData, accTest, strHitType,hitTestGyroGO,gyroGTx,gyroGTxLast,deltaGT,hitTestGyroGT);
				}
				break;
			}
		case HipHit.CIRCLE_6:
			{
				float Accel_z_Speed20 = 0;

				for(int i = Mathf.FloorToInt(accelDataCounter - 20); i < accelDataCounter; i++) {
					Accel_z_Speed20 += AccelHistoricalData[i-101].accel_z;

				}

				if(Accel_z_Speed20>0.0f && StillCalc > 0.00001f)
				{
					accTest = true;
					//strHitType = "Circle_6";
					if(hitTestGyroGO || hitTestGyroGT)
					{
						//calculate_data_Log(gyroData, currentOrientation, lastOrientation, strGyroData, accTest, strHitType,hitTestGyroGO,gyroGTx,gyroGTxLast,deltaGT,hitTestGyroGT);
						return 5.0f;
					}
					//calculate_data_Log(gyroData, currentOrientation, lastOrientation, strGyroData, accTest, strHitType,hitTestGyroGO,gyroGTx,gyroGTxLast,deltaGT,hitTestGyroGT);
				}
				break;


			}
		
		case HipHit.CIRCLE_7_5:
			{
				float Accel_y_Speed20 = 0;

				for(int i = Mathf.FloorToInt(accelDataCounter - 20); i < accelDataCounter; i++) {
					Accel_y_Speed20 += AccelHistoricalData[i-101].accel_y;

				}

				float Accel_z_Speed20 = 0;

				for(int i = Mathf.FloorToInt(accelDataCounter - 20); i < accelDataCounter; i++) {
					Accel_z_Speed20 += AccelHistoricalData[i-101].accel_z;

				}

				if(Accel_z_Speed20>0.0f  && Accel_y_Speed20 >0.0f && StillCalc > 0.00001f)
				{
					accTest = true;
					//strHitType = "Circle_4_5 success";
					if(hitTestGyroGO || hitTestGyroGT)
					{
						//calculate_data_Log(gyroData, currentOrientation, lastOrientation, strGyroData, accTest, strHitType,hitTestGyroGO,gyroGTx,gyroGTxLast,deltaGT,hitTestGyroGT);
						return 5.0f;
					}
					//calculate_data_Log(gyroData, currentOrientation, lastOrientation, strGyroData, accTest, strHitType,hitTestGyroGO,gyroGTx,gyroGTxLast,deltaGT,hitTestGyroGT);
				}
				break;

			}

		case HipHit.CIRCLE_9:
			{
				float Accel_y_Speed20 = 0;

				for(int i = Mathf.FloorToInt(accelDataCounter - 20); i < accelDataCounter; i++) {
					Accel_y_Speed20 += AccelHistoricalData[i-101].accel_y;

				}

				if( Accel_y_Speed20 >0.0f && StillCalc > 0.00001f)
				{
					accTest = true;
					//strHitType = "Circle_9 success";
					if(hitTestGyroGO || hitTestGyroGT)
					{
						//calculate_data_Log(gyroData, currentOrientation, lastOrientation, strGyroData, accTest, strHitType,hitTestGyroGO,gyroGTx,gyroGTxLast,deltaGT,hitTestGyroGT);
						return 5.0f;
					}
					//calculate_data_Log(gyroData, currentOrientation, lastOrientation, strGyroData, accTest, strHitType,hitTestGyroGO,gyroGTx,gyroGTxLast,deltaGT,hitTestGyroGT);
				}
				break;

			}

		case HipHit.CIRCLE_10_5:
			{
				float Accel_y_Speed20 = 0;

				for(int i = Mathf.FloorToInt(accelDataCounter - 20); i < accelDataCounter; i++) {
					Accel_y_Speed20 += AccelHistoricalData[i-101].accel_y;

				}

				float Accel_z_Speed20 = 0;

				for(int i = Mathf.FloorToInt(accelDataCounter - 20); i < accelDataCounter; i++) {
					Accel_z_Speed20 += AccelHistoricalData[i-101].accel_z;

				}

				if(Accel_z_Speed20<0.0f  && Accel_y_Speed20 >0.0f && StillCalc > 0.00001f)
				{
					accTest = true;
					//strHitType = "Circle_10_5 success";
					if(hitTestGyroGO || hitTestGyroGT)
					{
						//calculate_data_Log(gyroData, currentOrientation, lastOrientation, strGyroData, accTest, strHitType,hitTestGyroGO,gyroGTx,gyroGTxLast,deltaGT,hitTestGyroGT);
						return 5.0f;
					}
					//calculate_data_Log(gyroData, currentOrientation, lastOrientation, strGyroData, accTest, strHitType,hitTestGyroGO,gyroGTx,gyroGTxLast,deltaGT,hitTestGyroGT);
				}
				break;

			}
		case HipHit.CIRCLE_12:
			{

				float Accel_z_Speed20 = 0;

				for(int i = Mathf.FloorToInt(accelDataCounter - 20); i < accelDataCounter; i++) {
					Accel_z_Speed20 += AccelHistoricalData[i-101].accel_z;

				}

				if(Accel_z_Speed20<0.0f  && StillCalc > 0.00001f)
				{
					accTest = true;
					//strHitType = "Circle_12 success";
					if(hitTestGyroGO || hitTestGyroGT)
					{
						//calculate_data_Log(gyroData, currentOrientation, lastOrientation, strGyroData, accTest, strHitType,hitTestGyroGO,gyroGTx,gyroGTxLast,deltaGT,hitTestGyroGT);
						return 5.0f;
					}
					//calculate_data_Log(gyroData, currentOrientation, lastOrientation, strGyroData, accTest, strHitType,hitTestGyroGO,gyroGTx,gyroGTxLast,deltaGT,hitTestGyroGT);
				}
				break;

			}
		case HipHit.CIRCLE_1_5:
			{
				float Accel_y_Speed20 = 0;

				for(int i = Mathf.FloorToInt(accelDataCounter - 20); i < accelDataCounter; i++) {
					Accel_y_Speed20 += AccelHistoricalData[i-101].accel_y;

				}

				float Accel_z_Speed20 = 0;

				for(int i = Mathf.FloorToInt(accelDataCounter - 20); i < accelDataCounter; i++) {
					Accel_z_Speed20 += AccelHistoricalData[i-101].accel_z;

				}

				if(Accel_z_Speed20<0.0f  && Accel_y_Speed20 <0.0f && StillCalc > 0.00001f)
				{
					accTest = true;
					//strHitType = "Circle_4_5 success";
					if(hitTestGyroGO || hitTestGyroGT)
					{
						//calculate_data_Log(gyroData, currentOrientation, lastOrientation, strGyroData, accTest, strHitType,hitTestGyroGO,gyroGTx,gyroGTxLast,deltaGT,hitTestGyroGT);
						return 5.0f;
					}
					//calculate_data_Log(gyroData, currentOrientation, lastOrientation, strGyroData, accTest, strHitType,hitTestGyroGO,gyroGTx,gyroGTxLast,deltaGT,hitTestGyroGT);
				}
				break;

			}
				

		default:
			{
				accTest = false;
				//strHitType = null;
				//calculate_data_Log(gyroData, currentOrientation, lastOrientation, strGyroData, accTest, strHitType,hitTestGyroGO,gyroGTx,gyroGTxLast,deltaGT,hitTestGyroGT);
				return 0.0f;
			}
		}
		accTest = false;
		//strHitType = null;
		//calculate_data_Log(gyroData, currentOrientation, lastOrientation, strGyroData, accTest, strHitType,hitTestGyroGO,gyroGTx,gyroGTxLast,deltaGT,hitTestGyroGT);
		return 0.0f;
	}

	//void calculate_data_Log(MWData gyroData,Orientation currentOrientation, Orientation lastOrientation, string strGyroData, bool accTest,string hitType,bool goTest, double gti ,double gti40 ,double deltaGt ,bool gtTest)
	//{
	//	bool hitStatus = (accTest&&(goTest||gtTest));

	//	string hitString = "" + gyroData.GS_x +","+ (float)currentOrientation*1.5 +","+ gyroData.GO_x +","+ goTest +","+ (float)currentOrientation*1.5 +","+ (float)lastOrientation*1.5 +","+ gti +","+ gti40 +","+ deltaGt +","+ gtTest +","+ accTest +","+ hitStatus;

	//	string message = "" + Time.time +","+ gx +","+ gy +","+ gz +","+ hitString;
	//	Debug.Log("Dispatch message "+message);
		//linkManager.UpdateHitLogNotification (message);
	//	Debug.Log ("hit Data send ");
	//	lastHitGO = (float)gyroData.GO_x;
	//	lastHitOrient = (float)lastOrientation * 1.5f;
	//}
}
