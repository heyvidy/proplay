int c = 1000;

void setup(){
  DDRD = 0xff;
}

void loop(){
   disp('A');
   disp(' ');
   disp(' ');
   disp(' ');
}

void disp(char var){
switch (var) {
  case 'A':
    PORTD=0x7E;  delayMicroseconds(c); 
    PORTD=0x90;  delayMicroseconds(c);  
    PORTD=0x90;  delayMicroseconds(c); 
    PORTD=0x90;  delayMicroseconds(c); 
    PORTD=0x7E;  delayMicroseconds(c);
    // statements
    break;
    
  case 'B':
    PORTD=0xFF;  delayMicroseconds(c); 
    PORTD=0x81;  delayMicroseconds(c);  
    PORTD=0x99;  delayMicroseconds(c); 
    PORTD=0x5A;  delayMicroseconds(c); 
    PORTD=0x24;  delayMicroseconds(c);
    // statements
    break;
    
  case 'C':
    PORTD=0x3C;  delayMicroseconds(c); 
    PORTD=0x42;  delayMicroseconds(c);  
    PORTD=0x81;  delayMicroseconds(c); 
    PORTD=0x81;  delayMicroseconds(c); 
    PORTD=0x81;  delayMicroseconds(c);
    // statements
    break;
    
  case 'D':
    PORTD=0xFF;  delayMicroseconds(c); 
    PORTD=0x81;  delayMicroseconds(c);  
    PORTD=0x81;  delayMicroseconds(c); 
    PORTD=0x42;  delayMicroseconds(c); 
    PORTD=0x3C;  delayMicroseconds(c);
    // statements
    break;
    
  case 'E':
    PORTD=0xFF;  delayMicroseconds(c); 
    PORTD=0x99;  delayMicroseconds(c);  
    PORTD=0x99;  delayMicroseconds(c); 
    PORTD=0x99;  delayMicroseconds(c); 
    PORTD=0x81;  delayMicroseconds(c);
    // statements
    break;
    
  case 'F':
    PORTD=0xFF;  delayMicroseconds(c); 
    PORTD=0x90;  delayMicroseconds(c);  
    PORTD=0x90;  delayMicroseconds(c); 
    PORTD=0x90;  delayMicroseconds(c); 
    PORTD=0x80;  delayMicroseconds(c);
    // statements
    break;
    
    
  case 'G':
    PORTD=0x3C;  delayMicroseconds(c); 
    PORTD=0x42;  delayMicroseconds(c);  
    PORTD=0x89;  delayMicroseconds(c); 
    PORTD=0x4A;  delayMicroseconds(c); 
    PORTD=0x2C;  delayMicroseconds(c);
    // statements
    break;
    
  case 'H':
    PORTD=0xFF;  delayMicroseconds(c); 
    PORTD=0x18;  delayMicroseconds(c);  
    PORTD=0x18;  delayMicroseconds(c); 
    PORTD=0x18;  delayMicroseconds(c); 
    PORTD=0xFF;  delayMicroseconds(c);
    // statements
    break;
    
  case 'I':
    PORTD=0x81;  delayMicroseconds(c); 
    PORTD=0x81;  delayMicroseconds(c);  
    PORTD=0xFF;  delayMicroseconds(c); 
    PORTD=0x81;  delayMicroseconds(c); 
    PORTD=0x81;  delayMicroseconds(c);
    // statements
    break;
    
  case 'J':
    PORTD=0x83;  delayMicroseconds(c); 
    PORTD=0x81;  delayMicroseconds(c);  
    PORTD=0xFF;  delayMicroseconds(c); 
    PORTD=0x80;  delayMicroseconds(c); 
    PORTD=0X80;  delayMicroseconds(c);
    // statements
    break;
    
  case 'K':
    PORTD=0xFF;  delayMicroseconds(c); 
    PORTD=0x18;  delayMicroseconds(c);  
    PORTD=0x24;  delayMicroseconds(c); 
    PORTD=0x42;  delayMicroseconds(c); 
    PORTD=0x81;  delayMicroseconds(c);
    // statements
    break;
    
  case 'L':
    PORTD=0xFF;  delayMicroseconds(c); 
    PORTD=0x03;  delayMicroseconds(c);  
    PORTD=0x03;  delayMicroseconds(c); 
    PORTD=0x03;  delayMicroseconds(c); 
    PORTD=0x03;  delayMicroseconds(c);
    // statements
    break;
    
  case 'M':
    PORTD=0xFF;  delayMicroseconds(c); 
    PORTD=0x80;  delayMicroseconds(c);  
    PORTD=0x70;  delayMicroseconds(c); 
    PORTD=0x80;  delayMicroseconds(c); 
    PORTD=0xFF;  delayMicroseconds(c);
    // statements
    break;
    
  case 'N':
    PORTD=0xFF;  delayMicroseconds(c); 
    PORTD=0x40;  delayMicroseconds(c);  
    PORTD=0x30;  delayMicroseconds(c); 
    PORTD=0x0E;  delayMicroseconds(c); 
    PORTD=0xFF;  delayMicroseconds(c);
    // statements
    break;
    
  case 'O':
    PORTD=0x3C;  delayMicroseconds(c); 
    PORTD=0x42;  delayMicroseconds(c);  
    PORTD=0x81;  delayMicroseconds(c); 
    PORTD=0x42;  delayMicroseconds(c); 
    PORTD=0x3C;  delayMicroseconds(c);
    // statements
    break;
    
  case 'P':
    PORTD=0xFF;  delayMicroseconds(c); 
    PORTD=0x88;  delayMicroseconds(c);  
    PORTD=0x88;  delayMicroseconds(c); 
    PORTD=0x88;  delayMicroseconds(c); 
    PORTD=0x70;  delayMicroseconds(c);
    // statements
    break;
    
    
  case 'Q':
    PORTD=0x3C;  delayMicroseconds(c); 
    PORTD=0x42;  delayMicroseconds(c);  
    PORTD=0x85;  delayMicroseconds(c); 
    PORTD=0x42;  delayMicroseconds(c); 
    PORTD=0x3D;  delayMicroseconds(c);
    // statements
    break;
  
  case 'R':
    PORTD=0xFF;  delayMicroseconds(c); 
    PORTD=0x98;  delayMicroseconds(c);  
    PORTD=0x94;  delayMicroseconds(c); 
    PORTD=0x92;  delayMicroseconds(c); 
    PORTD=0x61;  delayMicroseconds(c);
    // statements
    break;
    
  case 'S':
    PORTD=0x71;  delayMicroseconds(c); 
    PORTD=0x89;  delayMicroseconds(c);  
    PORTD=0x89;  delayMicroseconds(c); 
    PORTD=0x89;  delayMicroseconds(c); 
    PORTD=0x86;  delayMicroseconds(c);
    // statements
    break;
    
  case 'T':
    PORTD=0x80;  delayMicroseconds(c); 
    PORTD=0x80;  delayMicroseconds(c);  
    PORTD=0xFF;  delayMicroseconds(c); 
    PORTD=0x80;  delayMicroseconds(c); 
    PORTD=0x80;  delayMicroseconds(c);
    // statements
    break;
    
  case 'U':
    PORTD=0xFE;  delayMicroseconds(c); 
    PORTD=0x01;  delayMicroseconds(c);  
    PORTD=0x01;  delayMicroseconds(c); 
    PORTD=0x01;  delayMicroseconds(c); 
    PORTD=0xFE;  delayMicroseconds(c);
    // statements
    break;
    
  case 'V':
    PORTD=0xFC;  delayMicroseconds(c); 
    PORTD=0x02;  delayMicroseconds(c);  
    PORTD=0x01;  delayMicroseconds(c); 
    PORTD=0x02;  delayMicroseconds(c); 
    PORTD=0xFC;  delayMicroseconds(c);
    // statements
    break;
    
  case 'W':
    PORTD=0xFE;  delayMicroseconds(c); 
    PORTD=0x01;  delayMicroseconds(c);  
    PORTD=0x0E;  delayMicroseconds(c); 
    PORTD=0x01;  delayMicroseconds(c); 
    PORTD=0xFE;  delayMicroseconds(c);
    // statements
    break;
    
  case 'X':
    PORTD=0xC3;  delayMicroseconds(c); 
    PORTD=0x24;  delayMicroseconds(c);  
    PORTD=0x18;  delayMicroseconds(c); 
    PORTD=0x24;  delayMicroseconds(c); 
    PORTD=0xC3;  delayMicroseconds(c);
    // statements
    break;
    
  case 'Y':
    PORTD=0xC0;  delayMicroseconds(c); 
    PORTD=0x20;  delayMicroseconds(c);  
    PORTD=0x1F;  delayMicroseconds(c); 
    PORTD=0x20;  delayMicroseconds(c); 
    PORTD=0xC0;  delayMicroseconds(c);
    // statements
    break;
  
  case 'Z':
    PORTD=0x83;  delayMicroseconds(c); 
    PORTD=0x85;  delayMicroseconds(c);  
    PORTD=0x89;  delayMicroseconds(c); 
    PORTD=0x91;  delayMicroseconds(c); 
    PORTD=0xE1;  delayMicroseconds(c);
    // statements
    break;
  
  case ' ':
    PORTD=0x00;  delayMicroseconds(c);
    PORTD=0x00;  delayMicroseconds(c);
    break;
  default: 
    PORTD=0xfe;
    // statements
  break;
  }
}


