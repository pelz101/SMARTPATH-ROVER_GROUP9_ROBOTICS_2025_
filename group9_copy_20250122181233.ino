void setup() {
  pinMode(2, INPUT); //left sensor 
  pinMode(3, INPUT); //right sensor
  pinMode(10, OUTPUT); //left motor foward
  pinMode(11, OUTPUT); //left motor backward
  pinMode(12, OUTPUT); //right motor foward
  pinMode(13, OUTPUT); //right motor backword
}



void loop() {
  int v = digitalRead(2);// reading or seching left 
  int s = digitalRead(3);// reading or seaching right
  if(v == 1 and s == 1){ //v and s are high foward movement
    digitalWrite(13, 1);

    digitalWrite(12, 0);

    digitalWrite(11, 1);

    digitalWrite(10, 0);
  }

  if(v == 1 and s == 0){ //v is high s is low turn right
    digitalWrite(13, 0);
    digitalWrite(12, 1);
    digitalWrite(11, 1);
    digitalWrite(10, 0);
  }
  if(v == 0 and s == 1){ //s is high v is low turn left 
    digitalWrite(13, 1);
    digitalWrite(12, 0);
    digitalWrite(11, 0);
    digitalWrite(10, 1);
  }
  if(v == 0 and s == 0){ //s is low v is low no detection of line move foward slowly 
    digitalWrite(13, 0);
    digitalWrite(12, 1);
    digitalWrite(11, 0);
    digitalWrite(10, 1);
  }// notes 1 is high hence its in action   2 is low hence its not in action  v is left sensor and s is right sensor
}
