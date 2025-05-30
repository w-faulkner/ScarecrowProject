# Automated Scarecrow
***
### By: Jacob Crabtree, Will Faulkner, Lauren Lanham, and Rianna Mueller
### BAE 305
### Spring 2025
***
## Summary
&nbsp;&nbsp;&nbsp;&nbsp; The objective of this project was to design and implement an automated scarecrow system intended to assist farmers in deterring birds and minimizing crop yield losses. The system integrates a passive infrared (PIR) motion sensor, mounted on the head of the scarecrow. The PIR sensor can detect thermal movement from birds or other heat-emitting objects within its field of view. Upon motion detection, the system initiates a sequence that activates the DC motors that drive the movement of the scarecrow’s arms and legs, while a set of LEDs embedded in the head light up to enhance the scare effect. To provide mobility and remote operation, the entire scarecrow assembly is mounted on a motorized, remote-controlled (RC) platform. This platform is driven by two DC hobby gear motors, which are connected to a wireless control interface. The RC car is capable of multidirectional movement (forward, backward, left, and right) controlled by a handheld transmitter. This mobility allows the operator to reposition the scarecrow across a field or garden, which increases its effective coverage area and adaptability to different farming environments. The video that includes all the features of our automated scarecrow can be found [here](https://vimeo.com/1079489157/0302ad2d24?ts=0&share=copy).


<figure>  
<p align="left">  
<img src="https://github.com/w-faulkner/ScarecrowProject/blob/main/Scarecrow%20Render.png" width="960" height="540" 
alt=" Scarecrow">  
<figcaption> <h6> Figure 1. The final model rendering of our scarecrow build. </figcaption>  
</figure>  
</p>  

## Design 
&nbsp;&nbsp;&nbsp;&nbsp; The automated scarecrow can be broken down into three parts: scarecrow design, the remote-controlled (RC) car, and wiring. All 3D-printable files and code are linked and can also be found in the files of this repository.
### Scarecrow

#### Materials 

* [3D printed block](https://github.com/w-faulkner/ScarecrowProject/blob/main/Modeling%20Files/block.stl)
* [3D printed bottom plate](https://github.com/w-faulkner/ScarecrowProject/blob/main/Modeling%20Files/bottomplate.stl)
* [3D printed cover](https://github.com/w-faulkner/ScarecrowProject/blob/main/Modeling%20Files/cover.stl)
* [3D printed head](https://github.com/w-faulkner/ScarecrowProject/blob/main/Modeling%20Files/head.stl)
* [3D printed main body](https://github.com/w-faulkner/ScarecrowProject/blob/main/Modeling%20Files/mainboyd.stl)
* [3D printed neck](https://github.com/w-faulkner/ScarecrowProject/blob/main/Modeling%20Files/neck.stl)
* [3D printed pin](https://github.com/w-faulkner/ScarecrowProject/blob/main/Modeling%20Files/pin.stl)
* [3D printed pin cap](https://github.com/w-faulkner/ScarecrowProject/blob/main/Modeling%20Files/pincap.stl)
* [3D printed post](https://github.com/w-faulkner/ScarecrowProject/blob/main/Modeling%20Files/post.stl)
* [3D printed scotch](https://github.com/w-faulkner/ScarecrowProject/blob/main/Modeling%20Files/scotch.stl)
* [3D printed top plate](https://github.com/w-faulkner/ScarecrowProject/blob/main/Modeling%20Files/topplate.stl)
* [3D printed yoke](https://github.com/w-faulkner/ScarecrowProject/blob/main/Modeling%20Files/yoke.stl)
* 2 –  [1 ft bamboo square dowels](https://www.amazon.com/Lugailly-Square-Wood-Dowels-Woodworking/dp/B0CZJGM1Y3/ref=sr_1_7?crid=6Q6R7N0ZXDCW&dib=eyJ2IjoiMSJ9.0wVOJrwWKctfiGo2qieYP4jOYuxX371JYXTphPOzkBYsRC5ElHvMPvNnlmiA49Ut3oVaKr3_NMwQ4L1P-R7PKJ6Pnd-ViAZ0POnUe0EfEmw301Q-_fAWFo2NtND6wVY0ArZzITNMeGMAMQzvCKS632qD8WZ0NONYzVgbsF39aS9EzsWRTiykIEJGxICJi-k_YTy9JURfjjdbvRas0n8svyoXbRJwBTc6qvAUD1cBEGeLV5b48bDconAaTo0LXaiFDZ9hwwcdFiMTet3K2gOutc3BDuUDWIqNeRCfO4f9-5o.1nqRoZkFnmloywseF3o71huTal6zwOMd4WS61sonNEY&dib_tag=se&keywords=1%2Bft%2Bsquare%2Bdowels&qid=1746061329&sprefix=1%2Bft%2Bsquare%2Bdowel%2Caps%2C114&sr=8-7&th=1)
* 4 - [Eye hooks](https://www.amazon.com/FramePac-Small-Screw-Short-Screweyes/dp/B07R837Y69/ref=sr_1_1_sspa?crid=1HFFYZ5V5CJ8C&dib=eyJ2IjoiMSJ9.DbzBgtU1TKr2qQQESHZtxrVEkbUBduToJIQiVaESnZkKvsxLjP3S4AHGyptvgzWyRbUdksGJQUYCBpgwuRwtIgKTxNdO0ZQiAMNHj3KWGwwYNULZtN6ii_KT6DSw1jId4Oz7et61drFgR7S03SqHMdGOELoj0_2O7hr8mX0wF4wjV4IQlGc-f0jE3pP_2RhfjjfjS9qRvDm52cigKUOt3AoxpoRQCgT-ctb6ePAZgYY.Dl_ef4rgwGkSg3ZR7z09wrKOf6RwUWQiHR_8b7cbI5E&dib_tag=se&keywords=small%2Beye%2Bhooks&qid=1746061479&sprefix=small%2Beye%2Bhook%2Caps%2C140&sr=8-1-spons&sp_csd=d2lkZ2V0TmFtZT1zcF9hdGY&th=1)
* 2 - [J-style hooks](https://www.amazon.com/IDEALSV-Antique-Ceiling-Vintage-Jewelry/dp/B089N325DP/ref=sr_1_12_sspa?crid=GVX3VS1Z2UH0&dib=eyJ2IjoiMSJ9.aOX7YjTVoakOizkzhpzVNukjrqFB1fzOluElIcF9fne1Z7g3VcyyCVvOGfeVOdCozAOOH1XGoIFrHZkBz5BpIvFisg83wypjwQ1qFGyS0Z4HRDRkaNHN7WOUpR6ziDtHii3G267DG0LMUVZsBu2z9Shi3C2d2o3bqtIAV2UTpP0qSP2AaPFQ6pE81NKfGGmTzsAkzWV-szLrGY4FFUXbNudj-VXzqfAMg6ieEMKTYMYtQfZR9ncLbpOeRrhITLezX_Kx4MBj0rL2_AXc9U__itbfAg-Zt3RlxD6sPIss3Ic.hH21lB6nfojSSmXh-EzLkJxdHyxVAAS4X036gtUjW18&dib_tag=se&keywords=mini%2Bj%2Bhooks&qid=1746061526&sprefix=minihooks%2Caps%2C98&sr=8-12-spons&sp_csd=d2lkZ2V0TmFtZT1zcF9tdGY&th=1)
* [Velcro](https://www.amazon.com/Adhesive-Interlocking-Fastener-Adhesion-reclosable/dp/B09HTT768S/ref=sr_1_1_sspa?crid=302M2K7RBNHJP&dib=eyJ2IjoiMSJ9.ELg-p4m6dLNXV4DQt8GSLd8WPBQff2QXH0anmQGOh1ZCONCU_wV7tJl5--T1IIkuxyPLE8v3JmumtSRKtWlhzUNAPfJrN-XuINzttCvE73XftH8O2_OAcstznmX5jvtq7RUmocbnlii6r_Zh5axPVhgNhiGo-GLkw6XJFrRlo8IQGMXW5VprP0t-TmOIOGCoXjH2XHrlzEtCAT5ryZHkSjaRqtFv9Tds80KVzMWlsHk.xPwhDCrw5NlylNcv6jS7MnIEfB6J4Hh6FIJjtpRAPHY&dib_tag=se&keywords=3m%2Bvelcro%2Bstrips%2Bwith%2Badhesive&qid=1746061550&sprefix=3m%2Bvel%2Caps%2C143&sr=8-1-spons&sp_csd=d2lkZ2V0TmFtZT1zcF9hdGY&th=1)
* 2 – [RGB LED](https://www.sparkfun.com/led-assorted-20-pack.html)
* [AMS312 Mini Pyroelectric PIR Human Sensor Module](https://www.amazon.com/dp/B07RT7MK7C?ref=ppx_yo2ov_dt_b_fed_asin_title)
* 2 – [N20 D.C. gear motor](https://www.amazon.com/HiLetgo-GA12-N20-Reduction-Deceleration-Multiple/dp/B0CHRWJFMD/ref=sr_1_1_sspa?crid=1UWUQYJH2Z44A&dib=eyJ2IjoiMSJ9.28lLgs4tN8_uzq37orPhGNrmqvpzNurPIL7GqTF3LXUk1kr0vyS2dZLTpcw4IEImtsXeztT4OeQGx72YsGbL_RfdrVeu6fY7fLCQNymgr1G6w91EgWPyTyAolZG69jDDaHggPqrepHuBBJVuDTeCshhubb9incal-ZPy897YSRq_KCPCCDYmD3kUtpr_QY_PLSVonsoOZWlwZEwdb12VkKt014k8HkPXGxQmVnkTwy6ItEfpqBgjTlK4mmYE8va_i2UrL8T1Fs7uaBlnuGyWKDFM3Ldgs1UV27RDNNAyGa0.yihXsrzs3lBFqq-tMH2DvShOYLEiXrUqBnnqz4P-axE&dib_tag=se&keywords=n20+gear+motor&qid=1746061690&sprefix=n20+ge%2Caps%2C153&sr=8-1-spons&sp_csd=d2lkZ2V0TmFtZT1zcF9hdGY&psc=1)
* [Super Glue](https://www.amazon.com/Gorilla-Super-Glue-gram-Clear/dp/B082XGL21J/ref=sr_1_3?crid=1BD6VD9U8UIX4&dib=eyJ2IjoiMSJ9.WmdSkHMJoPzPqAPS6nmZI_3r_VvqevFgQDxE58u4N2IqD5w3xSR_cQmGHTTDGmKXYu_b3nN0ZHEiPMhIchQvcFmzezHM1TXGQTg8k9V2TdGBmZA1JS5Ds171K7-bEHf3NEeXndYmPb1vWEkDugqwbgQMmJ6aJtM9EHKeNRws9MWMG7iQe_ahuNSMd-Ep2dLhMB8rqZsj7ln5Cszgm_zy9AugcJbYu8iKDQyM95BZEWA.jx3-7qVA4YoO61aTyLvg6IQ9oajF916cGaELYo-KOvU&dib_tag=se&keywords=super+glue&qid=1746061719&sprefix=super%2Caps%2C167&sr=8-3) 

#### Build Procedure

&nbsp;&nbsp;&nbsp;&nbsp; The initial phase of the project focused on constructing the physical structure of the scarecrow. This began with CAD modeling and 3D printing all necessary components. To ensure structural integrity, the top and bottom plates were adhesively bonded to the central chassis of the scarecrow using super glue, allowing adequate curing time for secure attachment. For the articulation mechanism, pilot holes were drilled into each of the yoke spacers using a precision drill bit. These holes allowed for the insertion of small eye hooks, which serve as mechanical linkage points for the scarecrow’s limbs. The component initially labeled “block” in the CAD files was later renamed “yoke spacer” for clarity. The yoke assembly was then inserted and fixed into place with adhesive. A 3D-printed pin was inserted through the rear opening of the body, and the assembly components (yoke spacer, yoke, and pin cap) were sequentially mounted onto the pin. This procedure was repeated for both N20 gear motor assemblies, ensuring symmetric actuation of the limbs. Following the installation of the yoke mechanisms, the N20 gear motors were positioned into their respective motor housings and secured. Scotch yokes were then mounted onto the motor output shafts and mechanically linked to the yoke assemblies. Additional eye bolts were threaded into the pre-drilled holes on the yoke spacers to establish the attachment points for the limbs. A close-up image of the scotch yoke mechanism used can be seen in Figure 2. The limb assembly utilized 12-inch bamboo dowels, which were cut in half to form both the arms and legs. Each dowel segment had a pilot hole drilled at one end to allow for the installation of J-hooks. The dowels were inserted through designated openings on the main body, and the J-hooks were connected to the eye bolts on the yoke spacers, completing the limb articulation system. For the head unit, two LEDs were embedded into a pumpkin-shaped enclosure to simulate eyes, and a passive infrared (PIR) motion sensor was installed to detect thermal activity on top. The neck component was affixed to the bottom of the head and then bonded to the top of the main body using adhesive. A post was subsequently glued to the bottom of the body to provide additional structural support and integration with the mobile platform. To complete the assembly, Velcro strips were attached to both the main body and its removable cover. This allows the internal wiring and electronic components to be concealed while still enabling easy access for maintenance or adjustments.
<figure>  
<p align="left">  
<img src="https://github.com/w-faulkner/ScarecrowProject/blob/main/Final%20Images/IMG_2493.jpg" width="504" height="672"
alt=" Scarecrow">  
<figcaption> <h6> Figure 2. An image of the scotch yoke mechanism used to move to arms and legs of the scarecrow. </figcaption>  
</figure>  
</p>  

### RC Car

#### Materials 

* [3D printed car base](https://github.com/w-faulkner/ScarecrowProject/blob/main/Modeling%20Files/car_base.stl)
* 2 – [140 RPM D.C. Hobby Gearmotors](https://www.sparkfun.com/hobby-gearmotor-140-rpm-pair.html)
* [Flange Mount Ball Transfer](https://www.mcmaster.com/5674K1/)
* [Female Threaded Hex Standoffs 1.5](https://www.mcmaster.com/91115A146/)
* [Velcro](https://www.amazon.com/Adhesive-Interlocking-Fastener-Adhesion-reclosable/dp/B09HTT768S/ref=sr_1_1_sspa?crid=302M2K7RBNHJP&dib=eyJ2IjoiMSJ9.ELg-p4m6dLNXV4DQt8GSLd8WPBQff2QXH0anmQGOh1ZCONCU_wV7tJl5--T1IIkuxyPLE8v3JmumtSRKtWlhzUNAPfJrN-XuINzttCvE73XftH8O2_OAcstznmX5jvtq7RUmocbnlii6r_Zh5axPVhgNhiGo-GLkw6XJFrRlo8IQGMXW5VprP0t-TmOIOGCoXjH2XHrlzEtCAT5ryZHkSjaRqtFv9Tds80KVzMWlsHk.xPwhDCrw5NlylNcv6jS7MnIEfB6J4Hh6FIJjtpRAPHY&dib_tag=se&keywords=3m%2Bvelcro%2Bstrips%2Bwith%2Badhesive&qid=1746061550&sprefix=3m%2Bvel%2Caps%2C143&sr=8-1-spons&sp_csd=d2lkZ2V0TmFtZT1zcF9hdGY&th=1)
* 2 - [65 mm wheels](https://www.sparkfun.com/wheel-65mm-rubber-tire-pair.html)
* 4 – [10-32 Machine Screws](https://www.mcmaster.com/90272A829/)

#### Build Procedure 

&nbsp;&nbsp;&nbsp;&nbsp; The construction of the RC car base for the scarecrow platform involved a straightforward mechanical integration of components. A flange-mounted ball transfer unit was affixed to a pair of hex standoffs using two 10-32 machine screws. The opposing ends of the hex standoffs were then secured to the baseplate of the RC platform using an additional pair of 10-32 machine screws, forming a stable tricycle-style support configuration. To mount the DC hobby gear motors, Velcro strips were applied to both the flat surface of each motor casing and the inner surfaces of their respective motor tabs. This configuration provided a non-permanent but secure method of attachment, enabling straightforward removal and reinstallation during testing or maintenance. The motors were oriented such that the drive wheels extended beneath the car’s base, ensuring ground clearance and proper weight distribution.

### Wiring

#### Materials 

* 2 – [330 Ohm Resistors](https://www.sparkfun.com/resistor-330-ohm-1-4-watt-pth-20-pack-thick-leads.html)
* [433 MHz Wireless Remote Control and Mini Receiver](https://www.amazon.com/dp/B09P89RF8R?ref=ppx_yo2ov_dt_b_fed_asin_title&th=1)
* [Push button](https://www.sparkfun.com/mini-pushbutton-switch.html)
* [Two-way switch](https://www.sparkfun.com/mini-power-switch-spdt.html)
* 2 – [Dual TB6612FNG Motor Driver](https://www.sparkfun.com/sparkfun-motor-driver-dual-tb6612fng-with-headers.html)
* 2 – [Arduino Uno Microcontroller](https://www.sparkfun.com/sparkfun-redboard-qwiic.html)
* 2 – [10 by 30 row prototyping breadboards](https://www.sparkfun.com/breadboard-self-adhesive-white.html)
* [Various wires with male and female connecting ends](https://www.amazon.com/Breadboard-Solderless-Prototype-Arduino-Project/dp/B09M9YFDQQ/ref=sr_1_1_sspa?crid=301V4DSVUESP6&dib=eyJ2IjoiMSJ9.LkNZzyQ3iQVu7_mBNBYzMjdjMkLE04VKB6-5wSRCVisc5j1Xfn9n1Jb8KC9EJ9Sm9p7MRXjsGXDBycSLjeU2tpJX2SD2yXNfVNZ40Xj-mHs6uf90PVlYSeBoyMBqumxh.CcUVzQTZCiDBZ8g-g2d8e1Zf1-vwKS2sQ_pFUutm24A&dib_tag=se&keywords=assorted+wires+with+male+and+female+connecting+ends+for+breadboard&qid=1746063384&s=hi&sprefix=assorted+wires+with+male+and+female+connecting+ends+for+breadboard%2Ctools%2C89&sr=1-1-spons&sp_csd=d2lkZ2V0TmFtZT1zcF9hdGY&psc=1)

#### Build Procedure 

&nbsp;&nbsp;&nbsp;&nbsp; The electrical design of the system required the implementation of two independent circuits, each controlled by a dedicated Arduino Uno microcontroller (Figure 3). Due to the distinct and asynchronous functionalities of the scarecrow and the RC car platform, isolating these subsystems onto separate microcontrollers improved modularity and reduced the complexity of the wiring architecture. The primary circuit is responsible for the scarecrow’s functionality, encompassing the core actuation and sensing features. This circuit controlled the motion of the limbs via motor drivers and responded to motion input detected by the PIR sensor. Given the scope of its operation, special consideration was given to designing this control system in a streamlined and manageable manner to ensure reliability and ease of troubleshooting. To maintain a clean and organized wiring layout, the RC car control circuit was implemented on a separate Arduino Uno board. This decision eliminated the need for excessive wiring between distant components, thereby reducing electrical noise and physical clutter. The configuration of these circuits is based on earlier laboratory prototypes developed during the course, which informed the final layout and sequence of integration. As a result, the development of the RC subsystem was deferred until the final stages of the build, leveraging prior knowledge and successful test results.
 
<figure>  
<p align="left">  
<img src="https://github.com/w-faulkner/ScarecrowProject/blob/main/Circuit%20Schematics/fixedcircuitbody.png" width="767" height="562" 
alt=" Scarecrow Body Circuit">  
<img src="https://github.com/w-faulkner/ScarecrowProject/blob/main/Circuit%20Schematics/updatedcarbasecircuit.png"  width="577" height="535"
alt=" R.C. Car Base Circuit">  
<figcaption> <h6> Figure 3. The wiring diagrams for the scarecrow body (top) and the R.C. car base (bottom)</figcaption>  
</figure>  
</p>  

### Testing
&nbsp;&nbsp;&nbsp;&nbsp; Following the completion of the mechanical assembly, a series of functional tests were conducted using modular code segments. Individual test scripts were written and executed for each subsystem to validate proper operation prior to full integration. These tests included verification of LED functionality, motion detection via the PIR sensor, motor-driven limb articulation, and directional movement of the RC car. This incremental testing approach not only ensured that all individual components were operating as intended, but also facilitated the development of modular code blocks that could later be combined into the final integrated control program. By verifying the behavior of each subsystem in isolation, potential issues were identified and resolved early in the development cycle. All testing was performed using two Arduino Uno microcontrollers programmed via the Arduino IDE on a compatible laptop. This platform provided a reliable environment for compiling, uploading, and debugging code for both the scarecrow and the RC car systems.

### Design Discussion

&nbsp;&nbsp;&nbsp;&nbsp; The mechanical design of the scarecrow body and the RC car base underwent multiple iterations to meet functional and practical requirements. Initial concepts aimed to translate the rotational motion of the DC motors into oscillatory limb movement using a traditional crank-arm mechanism. However, after early prototyping and performance analysis, the crank-arm design was replaced by a scotch yoke system. The scotch yoke mechanism proved to be superior for this application, offering simpler assembly, smoother operation, and more consistent motion output. Notably, it enables the generation of near-perfect simple harmonic motion, ensuring symmetrical and repeatable vertical displacement of the limbs with each motor cycle—an essential feature for the scarecrow’s deterrent effect. In parallel, the RC car platform also underwent critical revisions. The original steering configuration utilized a rigid front axle with dual 65 mm wheels (sourced from SparkFun), intended to improve maneuverability. However, due to the axle’s solid design, both wheels rotated in unison, causing significant resistance during turns and leading to frequent drag or complete steering failure. This issue was resolved by replacing the front axle assembly with a single ball transfer unit, which significantly improved the platform’s turning radius, acceleration response, and general mobility. Stability at higher speeds remained a concern due to the scarecrow’s elevated center of gravity. While mitigations were applied, further investigation into alternative front-end configurations such as dual independent wheel assemblies or articulated front steering would be pursued in extended development cycles. The electrical integration and control strategy also underwent several iterations. To ensure modularity and facilitate both mobility and autonomous scarecrow behavior, two Arduino Uno microcontrollers were utilized. The first microcontroller managed the scarecrow’s operation, including the LED “eyes,” PIR motion sensor, and the actuation of the arms and legs via DC gear motors. The second Arduino Uno controlled the RC car’s movement via a wireless remote control system comprising of a mini 4-channel receiver module and a corresponding handheld transmitter. The RC control interface was implemented using digital high/low signal mapping, where each button press on the transmitter triggered directional motion (forward, reverse, left, right) through corresponding motor outputs. Both microcontrollers were powered from a 4-cell AA battery pack, wired directly to one Arduino and daisy-chained to the second via the VIN and GND rails. While this configuration simplified power distribution and battery replacement, extended operation under full motor load resulted in significant current draw, leading to voltage drops and reduced operational duration. This observation suggests that future revisions should consider more robust power management solutions, including integrated rechargeable battery packs or solar charging modules to support sustained deployment in agricultural environments. To facilitate flexible operation modes, a single-pole dual-throw (SPDT) slider switch was added to toggle between manual operation and motion detection modes. In manual mode, the system allows for repositioning or transport without unintentional activation of the PIR-triggered motion system. Additionally, a momentary push-button switch was integrated to enable functional testing of the scarecrow’s LEDs and motor systems without relying on sensor input.

## Testing
### Scarecrow Body Code
```c
/*
  BAE 305
  Automated Scarecrow Project
  This is the code to control the the movements and LEDs on the scarecrow as well as motion detecting
  By: Jacob Crabtree
*/
// Inputs
const int switchPin = 7;  // SPDT switch
const int buttonPin = 4;  // Button input
const int pirPin = 2;     // PIR sensor input

// LEDs
const int redLED = 3;
const int greenLED = 5;

// Right motor
const int AIN1 = 13;
const int AIN2 = 12;
const int PWMA = 11;

// Left motor
const int BIN1 = 8;
const int BIN2 = 9;
const int PWMB = 10;

bool buttonPrevState = HIGH;  // Button is pulled up
bool motionPrevState = LOW;

enum Mode { BUTTON, MOTION };
Mode currentMode = BUTTON;

void setup() {
  Serial.begin(9600);

  pinMode(switchPin, INPUT);  // Read from SPDT switch
  pinMode(buttonPin, INPUT_PULLUP);
  pinMode(pirPin, INPUT);

  pinMode(redLED, OUTPUT);
  pinMode(greenLED, OUTPUT);

  pinMode(AIN1, OUTPUT);
  pinMode(AIN2, OUTPUT);
  pinMode(PWMA, OUTPUT);
  pinMode(BIN1, OUTPUT);
  pinMode(BIN2, OUTPUT);
  pinMode(PWMB, OUTPUT);

  setGreen();
  stopMotors();
  Serial.println("Mode: BUTTON");
}

void loop() {
  // Read switch position and set mode
  bool switchState = digitalRead(switchPin);
  Mode newMode = (switchState == LOW) ? BUTTON : MOTION;

  // Change mode if necessary
  if (newMode != currentMode) {
    currentMode = newMode;
    stopMotors();
    setGreen();
    Serial.print("Mode: ");
    Serial.println(currentMode == BUTTON ? "BUTTON" : "MOTION");
  }

  // Button mode logic
  if (currentMode == BUTTON) {
    bool buttonPressed = digitalRead(buttonPin) == LOW;
    if (buttonPressed && buttonPrevState == HIGH) {
      Serial.println("Button pressed!");
      runSequence();
    }
    buttonPrevState = buttonPressed;

  } 
  // Motion mode logic
  else if (currentMode == MOTION) {
    bool motionDetected = digitalRead(pirPin) == HIGH;
    if (motionDetected && motionPrevState == LOW) {
      Serial.println("Motion detected!");
      runSequence();
    }
    motionPrevState = motionDetected;
  }
}

void runSequence() {
  setRed();
  runMotors();
  delay(7000);
  stopMotors();
  setGreen();
}

void runMotors() {
  digitalWrite(AIN1, HIGH);
  digitalWrite(AIN2, LOW);
  analogWrite(PWMA, 255);

  digitalWrite(BIN1, HIGH);
  digitalWrite(BIN2, LOW);
  analogWrite(PWMB, 255);
}

void stopMotors() {
  analogWrite(PWMA, 0);
  analogWrite(PWMB, 0);
}

void setRed() {
  digitalWrite(redLED, HIGH);
  digitalWrite(greenLED, LOW);
}

void setGreen() {
  digitalWrite(redLED, LOW);
  digitalWrite(greenLED, HIGH);
}
```

### R.C. Car Code
```c
/*
  BAe 305
  Automated Scarecrow Project
  This is the code to control the R.C. Car base of the build
  By: Jacob Crabtree
*/
// Motor driver pins
const int AIN1 = 13; // Right motor
const int AIN2 = 12;
const int PWMA = 11;

const int PWMB = 10; // Left motor
const int BIN2 = 9;
const int BIN1 = 8;

// RF receiver inputs
const int FORWARD_PIN = 2;
const int BACKWARD_PIN = 3;
const int LEFT_PIN = 4;
const int RIGHT_PIN = 5;

void setup() {
  // Motor pins
  pinMode(AIN1, OUTPUT);
  pinMode(AIN2, OUTPUT);
  pinMode(PWMA, OUTPUT);

  pinMode(BIN1, OUTPUT);
  pinMode(BIN2, OUTPUT);
  pinMode(PWMB, OUTPUT);

  // Receiver inputs
  pinMode(FORWARD_PIN, INPUT);
  pinMode(BACKWARD_PIN, INPUT);
  pinMode(LEFT_PIN, INPUT);
  pinMode(RIGHT_PIN, INPUT);

  Serial.begin(9600);
}

void loop() {
  bool forward = digitalRead(FORWARD_PIN);
  bool backward = digitalRead(BACKWARD_PIN);
  bool left = digitalRead(LEFT_PIN);
  bool right = digitalRead(RIGHT_PIN);

  // Stop motors by default
  stopMotors();

  if (forward) {
    Serial.println("Forward");
    moveForeward();
  } else if (backward) {
    Serial.println("Backward");
    moveBackward();
  } else if (left) {
    Serial.println("Left");
    turnLeft();
  } else if (right) {
    Serial.println("Right");
    turnRight();
  }

  delay(50); // Small delay to avoid flooding serial monitor
}

// === Motor control functions ===

void moveBackward() {
  digitalWrite(AIN1, HIGH);
  digitalWrite(AIN2, LOW);
  analogWrite(PWMA, 255);  // Right motor at full speed

  digitalWrite(BIN1, HIGH);
  digitalWrite(BIN2, LOW);
  analogWrite(PWMB, 255);  // Left motor at full speed
}

void moveForeward() {
  digitalWrite(AIN1, LOW);
  digitalWrite(AIN2, HIGH);
  analogWrite(PWMA, 255);  // Right motor at full speed

  digitalWrite(BIN1, LOW);
  digitalWrite(BIN2, HIGH);
  analogWrite(PWMB, 255);  // Left motor at full speed
}

void turnRight() {
  digitalWrite(AIN1, LOW);
  digitalWrite(AIN2, HIGH);
  analogWrite(PWMA, 190);  // Right motor at full speed

  digitalWrite(BIN1, LOW);
  digitalWrite(BIN2, HIGH);
  analogWrite(PWMB, 255);  // Left motor at full speed
}

void turnLeft() {
  digitalWrite(AIN1, LOW);
  digitalWrite(AIN2, HIGH);
  analogWrite(PWMA, 255);  // Right motor at full speed

  digitalWrite(BIN1, LOW);
  digitalWrite(BIN2, HIGH);
  analogWrite(PWMB, 190);  // Left motor at full speed
}

void stopMotors() {
  analogWrite(PWMA, 0); // Stop right motor
  analogWrite(PWMB, 0); // Stop left motor
}
```
### Procedure 

&nbsp;&nbsp;&nbsp;&nbsp; To validate the functionality of the prototype, a systematic testing procedure was employed, beginning with the verification of the primary scarecrow subsystem. As the arm and leg actuators and LEDs were integrated into the control circuit, initial testing focused on verifying their coordinated operation. Upon initial execution, the system failed to respond as expected, necessitating code debugging and parameter tuning within the Arduino environment. Once revised, the updated firmware successfully enabled synchronized movement of the limbs and activation of the LEDs in response to motion input. Subsequent testing addressed the mobility of the RC car platform. Initial trials were conducted without the wireless receiver connected to ensure basic motor function and wiring integrity. Upon confirming proper motor operation, the wireless RC module was integrated into the system, and the code was updated to accommodate remote input signals. The platform demonstrated consistent forward and reverse movement, with limited but functional lateral steering. A final integration test was performed to simulate field deployment. The fully assembled system was navigated through a constructed obstacle course comprising tables, chairs, and miscellaneous obstructions. Upon reaching the designated position, the scarecrow was placed into “detection mode.” A heat-emitting object (i.e., a human hand) was then introduced at varying heights and distances to evaluate the range and responsiveness of the PIR sensor. Multiple trials were conducted to determine detection consistency across angles and distances representative of typical bird flight paths.

### Results

&nbsp;&nbsp;&nbsp;&nbsp; Following system debugging and iterative testing, the prototype achieved expected operational performance. The coordinated movement of limbs and LED activation occurred reliably upon PIR sensor triggering. The RC platform successfully supported basic mobility; however, limitations in turning radius and stability were observed. Notably, the system tended to tip laterally during high-speed turns, likely due to the elevated center of mass imposed by the scarecrow’s structure. Furthermore, during extended operation, battery depletion became evident, necessitating frequent replacement to maintain performance. These limitations, while manageable during testing, suggest areas for improvement in future design iterations, such as implementing onboard solar charging capabilities.

### Discussion
&nbsp;&nbsp;&nbsp;&nbsp; The RC mobility system demonstrated adequate forward and reverse motion, with steering performance constrained by the platform’s geometry. Increasing the turning capability introduced additional instability, particularly during rapid directional changes, where the scarecrow’s top-heavy design contributed to tipping risks. To address this, future designs should consider alternate drive configurations, such as a dual-axle steering mechanism or a four-wheel skid-steer approach, to enhance stability and maneuverability. The actuation system for the scarecrow limbs functioned in accordance with design specifications. The motion profile achieved a balance between aggressive movement sufficient to deter birds and restrained force that preserved platform stability. LED brightness was suitable for visual effect, with enhanced visibility in low-light conditions. The PIR sensor, initially a point of concern due to its directional sensitivity, was found to perform within acceptable tolerances. Experimental testing confirmed the sensor could detect motion from common approach vectors, including side angles, thereby satisfying the requirements for bird detection in an open field environment. Overall, the prototype met all core functional objectives. While improvements could be made to enhance durability, stability, and power efficiency, the current design effectively demonstrates the feasibility of a mobile, autonomous scarecrow platform as a proof-of-concept prototype.
