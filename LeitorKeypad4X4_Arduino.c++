const int l1=13, l2=12, l3=11, l4=10;
const int c1=5, c2=4, c3=3, c4=2;
char out;

void setup()
{
  pinMode(l1, INPUT);
  pinMode(l2, INPUT);
  pinMode(l3, INPUT);
  pinMode(l4, INPUT);
  pinMode(c1, OUTPUT);
  pinMode(c2, OUTPUT);
  pinMode(c3, OUTPUT);
  pinMode(c4, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  
  while(1){
    
    digitalWrite(c1, 1);
    digitalWrite(c2, 0);
    digitalWrite(c3, 0);
    digitalWrite(c4, 0);
  	
    if(digitalRead(l1)==1){
    	out='1';
      	break;
    }else if(digitalRead(l2)==1){
    	out='4';
      	break;
    }else if(digitalRead(l3)==1){
    	out='7';
      	break;
    }else if(digitalRead(l4)==1){
    	out='*';
      	break;
    }else{}  
  	
    digitalWrite(c1, 0);
    digitalWrite(c2, 1);
    digitalWrite(c3, 0);
    digitalWrite(c4, 0);
  	
    if(digitalRead(l1)==1){
    	out='2';
      	break;
    }else if(digitalRead(l2)==1){
    	out='5';
      	break;
    }else if(digitalRead(l3)==1){
    	out='8';
      	break;
    }else if(digitalRead(l4)==1){
    	out='0';
      	break;
    }else{} 
  	
    digitalWrite(c1, 0);
    digitalWrite(c2, 0);
    digitalWrite(c3, 1);
    digitalWrite(c4, 0);
  	
    if(digitalRead(l1)==1){
    	out='3';
      	break;
    }else if(digitalRead(l2)==1){
    	out='6';
      	break;
    }else if(digitalRead(l3)==1){
    	out='9';
      	break;
    }else if(digitalRead(l4)==1){
    	out='#';
      	break;
    }else{}   
  	
    digitalWrite(c1, 0);
    digitalWrite(c2, 0);
    digitalWrite(c3, 0);
    digitalWrite(c4, 1);
  	
    if(digitalRead(l1)==1){
    	out='A';
      	break;
    }else if(digitalRead(l2)==1){
    	out='B';
      	break;
    }else if(digitalRead(l3)==1){
    	out='C';
      	break;
    }else if(digitalRead(l4)==1){
    	out='D';
      	break;
    }else{}   
    
  }
  
  delay(100);
  Serial.println(out);
  delay(100);
  
}