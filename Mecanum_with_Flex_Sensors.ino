// The Value Of Fledx Sensor Degree After Which The Robot Will Do Something
int threshold = 5;

// Analog Input Pin For Variuos Flex Sensros
int flex_thumb = A0;
int flex_index = A1;
int flex_middle = A2;
int flex_ring = A3;

// Out Pins For Dc Motors Of Meccanum Wheels
int right_front_motor_on = 8;
int right_front_motor_off = 9;

int right_back_motor_on = 2;
int right_back_motor_off = 3;

int left_front_motor_on = 4;
int left_front_motor_off = 5;

int left_back_motor_on = 6;
int left_back_motor_off = 7;

void setup() {
  Serial.begin(9600);

  pinMode(right_front_motor_on, OUTPUT);
  pinMode(right_front_motor_off, OUTPUT);

  pinMode(right_back_motor_on, OUTPUT);
  pinMode(right_back_motor_off, OUTPUT);

  pinMode(left_front_motor_on, OUTPUT);
  pinMode(left_front_motor_off, OUTPUT);

  pinMode(left_back_motor_on, OUTPUT);
  pinMode(left_back_motor_off, OUTPUT);

}

void loop() {
  
  // Getting The Flex Sensor Value
  int flex_thumb_val = analogRead(flex_thumb);
  int flex_index_val = analogRead(flex_index);
  int flex_middle_val = analogRead(flex_middle);
  int flex_ring_val = analogRead(flex_ring);

  if(flex_middle_val <= threshold){

    digitalWrite(right_front_motor_on, HIGH);
    digitalWrite(right_front_motor_off, LOW);

    digitalWrite(right_back_motor_on, HIGH);
    digitalWrite(right_back_motor_off, LOW);

    digitalWrite(left_front_motor_on, LOW);
    digitalWrite(left_front_motor_off, HIGH);

    digitalWrite(left_back_motor_on, LOW);
    digitalWrite(left_back_motor_off, HIGH);
  }

  if(flex_thumb_val <= threshold && flex_index_val <= threshold && flex_middle_val <= threshold && flex_ring_val <= threshold){

    digitalWrite(right_front_motor_on, LOW);
    digitalWrite(right_front_motor_off, HIGH);

    digitalWrite(right_back_motor_on, LOW);
    digitalWrite(right_back_motor_off, HIGH);

    digitalWrite(left_front_motor_on, HIGH);
    digitalWrite(left_front_motor_off, LOW);

    digitalWrite(left_back_motor_on, HIGH);
    digitalWrite(left_back_motor_off, LOW);
  }

  if(flex_thumb_val <= threshold){

    digitalWrite(right_front_motor_on, LOW);
    digitalWrite(right_front_motor_off, HIGH);

    digitalWrite(right_back_motor_on, HIGH);
    digitalWrite(right_back_motor_off, LOW);

    digitalWrite(left_front_motor_on, HIGH);
    digitalWrite(left_front_motor_off, LOW);

    digitalWrite(left_back_motor_on, LOW);
    digitalWrite(left_back_motor_off, HIGH);
  }

  if(flex_index_val <= threshold){

    digitalWrite(right_front_motor_on, HIGH);
    digitalWrite(right_front_motor_off, LOW);

    digitalWrite(right_back_motor_on, LOW);
    digitalWrite(right_back_motor_off, HIGH);

    digitalWrite(left_front_motor_on, LOW);
    digitalWrite(left_front_motor_off, HIGH);

    digitalWrite(left_back_motor_on, HIGH);
    digitalWrite(left_back_motor_off, LOW);
  }

  if(flex_middle_val <= threshold && flex_ring_val <= threshold){

    digitalWrite(right_front_motor_on, LOW);
    digitalWrite(right_front_motor_off, LOW);

    digitalWrite(right_back_motor_on, HIGH);
    digitalWrite(right_back_motor_off, LOW);

    digitalWrite(left_front_motor_on, LOW);
    digitalWrite(left_front_motor_off, LOW);

    digitalWrite(left_back_motor_on, HIGH);
    digitalWrite(left_back_motor_off, LOW);
  }

  if(flex_index_val <= threshold && flex_middle_val <= threshold){

    digitalWrite(right_front_motor_on, HIGH);
    digitalWrite(right_front_motor_off, LOW);

    digitalWrite(right_back_motor_on, LOW);
    digitalWrite(right_back_motor_off, LOW);

    digitalWrite(left_front_motor_on, HIGH);
    digitalWrite(left_front_motor_off, LOW);

    digitalWrite(left_back_motor_on, LOW);
    digitalWrite(left_back_motor_off, LOW);
  }

  if(flex_middle_val <= threshold && flex_thumb_val <= threshold){

    digitalWrite(right_front_motor_on, LOW);
    digitalWrite(right_front_motor_off, LOW);

    digitalWrite(right_back_motor_on, LOW);
    digitalWrite(right_back_motor_off, HIGH);

    digitalWrite(left_front_motor_on, LOW);
    digitalWrite(left_front_motor_off, HIGH);

    digitalWrite(left_back_motor_on, LOW);
    digitalWrite(left_back_motor_off, LOW);
  }

  if(flex_index_val <= threshold && flex_thumb_val <= threshold){

    digitalWrite(right_front_motor_on, LOW);
    digitalWrite(right_front_motor_off, HIGH);

    digitalWrite(right_back_motor_on, LOW);
    digitalWrite(right_back_motor_off, LOW);

    digitalWrite(left_front_motor_on, LOW);
    digitalWrite(left_front_motor_off, HIGH);

    digitalWrite(left_back_motor_on, LOW);
    digitalWrite(left_back_motor_off, LOW);
  }

}