
#ifndef _ESP8266_common_h
#include _ESP8266_common_h


//用户配置区

//连接端口号:8086,可自行修改为其他端口.
const u8* portnum = "8086";		

//WIFI STA模式,设置要去连接的路由器无线参数,请根据你自己的路由器设置,自行修改.
const u8* wifista_ssid      = "WEIWEN";			//路由器SSID号
const u8* wifista_encryption= "wpawpa2_aes";	//wpa/wpa2 aes加密方式
const u8* wifista_password  = "123456789"; 	//连接密码

//WIFI AP模式,模块对外的无线参数,可自行修改.
const u8* wifiap_ssid      = "WEIWEN";			//对外SSID号
const u8* wifiap_encryption= "wpawpa2_aes";	//wpa/wpa2 a s加密方式
const u8* wifiap_password  = "12345678"; 		//连接密码 

/////////////////////////////////////////////////////////////////////////////////////////////////////////// 
//4个网络模式
const u8 *ATK_ESP8266_CWMODE_TBL[3]={"STA模式 ","AP模式 ","AP&STA模式 "};	//ATK-ESP8266,3种网络模式,默认为路由器(ROUTER)模式 
//4种工作模式
const u8 *ATK_ESP8266_WORKMODE_TBL[3]={"TCP服务器","TCP客户端"," UDP 模式"};	//ATK-ESP8266,4种工作模式
//5种加密方式
const u8 *ATK_ESP8266_ECN_TBL[5]={"OPEN","WEP","WPA_PSK","WPA2_PSK","WPA_WAP2_PSK"};
/////////////////////////////////////////////////////////////////////////////////////////////////////////// 


#endif

