#include<SoftwareSerial.h>

SoftwareSerial esp(2,3);  //rx tx

#define ssid "srx123"    //add your ssid name
#define pass "12345678910" //add your password
#define IP "180.106.153.149" // ip for thingspeak

String cmd;
String msg = "GET /update?key=ZLFJWCYYGV66YFK9"
int data; //the data you want to send should be stored in data

void setup()
{
    //**************Wifi***********************************************
    Serial.begin(115200);
    esp.println("AT");    //cheked if arduino is connecter to esp microcontroler
    if(esp.find("OK"));  Serial.println("esp is online");

    //connecting to wifi rounter
    esp.println("AT+CWMODE=1"); //change to station mode(i also confused why we do it)
    esp.println("AT+CWJAP=\""+ssid+"\",\""+pass+"\"");  //give ssid and password to intialize the connection
    if(esp.find("OK"))      Serial.println("connected to wifi");
    else                    Serial.println("try again \n failed to connect to internet");
    //*********************************************************************

}

//****to send data*****************
//add more parameter if you want to send more data 
void send(int data1)
{
    esp.println("AT+CIPSTART=\"UDP\",\""+IP+"\",80"); //start a udp connection
    
    cmd=msg+"&field1="+data1+"\r\n";  //the data packet to be send

    esp.println("AT+CIPSEND="+cmd.length()); //intailize buffer to send data
    esp.println(cmd)  //send the data
    esp.println("AT+CIPCLOED");  //closed the connection

}


void loop(){
}