

const int buzzer = 10; 
                      


const int sa = 240 ;  
const int re = 270 ;
const int ga = 300 ; 
const int ma = 320 ;
const int pa = 360 ;
const int da =  400 ;
const int ni =  450 ;
const int SA = 480 ;


int notes[] = {   
  sa, sa , re , sa, sa, re ,
  sa , sa , re , re, ga,ga, ma, ma    
   
};

int duration[] = {        
1000 ,1000 ,1000 ,1000 ,1000 ,1000 ,1000 ,
1000 ,1000 ,1000 ,1000 ,1000 ,1000 ,1000  
};

void setup() {
                      

}

void loop() {
   for (int i=0;i<14;i++){              
  int wait = duration[i] ;
  tone(buzzer,notes[i],wait);          
  delay(wait);}                        


}
