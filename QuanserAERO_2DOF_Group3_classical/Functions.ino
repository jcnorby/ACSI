////
//
void AeroGains()
{
  //Calculates voltage to be applied to Front and Back Motors K*u
float OutP=0;
float OutY=0;
for (int it=0; it<4;it++){

OutP=OutP+Error[it]*gainP[it];
OutY=OutY+Error[it]*gainY[it];
}
  Vmotors[0]=OutP;
  Vmotors[1]=OutY;
}

//
//
void SetpointGen()
{
  //  Generates setpoints for Pitch and Yaw angles at specific times
  // Note that this is not Real-Time control. The units called seconds should be renamed..
  //

// ================ Joe added =================
float pitchFreq = 0.4;
float pitchAmp = 0*PI/6.0;
float yawFreq = 0.5;
float yawAmp = PI/4.0;

     if ((millis() % (int)((2*PI)/pitchFreq*1000)) <= (int)(PI/pitchFreq*1000)){
      desired[0] = pitchAmp;
      LEDBlue = 999;
     } else {
      desired[0] = -pitchAmp;
      LEDBlue = 0;
     }
      
     if ((millis() % (int)((2*PI)/yawFreq*1000)) <= (int)(PI/yawFreq*1000)){
      desired[1] = yawAmp;
      LEDRed = 999;
     } else {
      desired[1] = -yawAmp;
      LEDRed = 0;
     }

     LEDGreen = 0;
     return;
// ============================================
//    if (milisecs>=1000){seconds++; milisecs=0;}
//     if (seconds >= 4 && seconds <8 ){
//      desired[0] = 0.35;
//       desired[1] = 0;
//      LEDRed = 0;
//      LEDGreen = 0;
//      LEDBlue = 999;
//      return;
//      }
//      
//     if (seconds >= 8 && seconds <12){
//       desired[0] = -0.35;
//       desired[1] = 0;
//      LEDRed = 999;
//      LEDGreen = 500;
//      LEDBlue = 0;
//      return;
//      }
// if (seconds >=12 && seconds <16){
//      desired[0] = 0;
//      desired[0] = 0;
//      LEDRed = 0;
//      LEDGreen = 0;
//      LEDBlue = 999;
//      return;
//      }
//
//      if (seconds >= 16 && seconds <20 ){
//      desired[0] = 0;
//       desired[1] = 0.4;
//      LEDRed = 999;
//      LEDGreen = 500;
//      LEDBlue = 0;
//      return;
//      }
//      
//     if (seconds >= 20 && seconds <24){
//      //seconds=0;
//       desired[0] = 0;
//       desired[1] = -0.4;
//      LEDRed = 0;
//      LEDGreen = 0;
//      LEDBlue = 999;
//      return;
//      }
//        if (seconds>=24){ 
//       seconds=0;
//       desired[0] = 0;
//       desired[1] = 0;
//      LEDRed = 999;
//      LEDGreen = 500;
//      LEDBlue = 0;
//      return;
//      }
      
       
      
}
