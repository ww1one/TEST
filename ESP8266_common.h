
#ifndef _ESP8266_common_h
#include _ESP8266_common_h


//�û�������

//���Ӷ˿ں�:8086,�������޸�Ϊ�����˿�.
const u8* portnum = "8086";		

//WIFI STAģʽ,����Ҫȥ���ӵ�·�������߲���,��������Լ���·��������,�����޸�.
const u8* wifista_ssid      = "WEIWEN";			//·����SSID��
const u8* wifista_encryption= "wpawpa2_aes";	//wpa/wpa2 aes���ܷ�ʽ
const u8* wifista_password  = "123456789"; 	//��������

//WIFI APģʽ,ģ���������߲���,�������޸�.
const u8* wifiap_ssid      = "WEIWEN";			//����SSID��
const u8* wifiap_encryption= "wpawpa2_aes";	//wpa/wpa2 a s���ܷ�ʽ
const u8* wifiap_password  = "12345678"; 		//�������� 

/////////////////////////////////////////////////////////////////////////////////////////////////////////// 
//4������ģʽ
const u8 *ATK_ESP8266_CWMODE_TBL[3]={"STAģʽ ","APģʽ ","AP&STAģʽ "};	//ATK-ESP8266,3������ģʽ,Ĭ��Ϊ·����(ROUTER)ģʽ 
//4�ֹ���ģʽ
const u8 *ATK_ESP8266_WORKMODE_TBL[3]={"TCP������","TCP�ͻ���"," UDP ģʽ"};	//ATK-ESP8266,4�ֹ���ģʽ
//5�ּ��ܷ�ʽ
const u8 *ATK_ESP8266_ECN_TBL[5]={"OPEN","WEP","WPA_PSK","WPA2_PSK","WPA_WAP2_PSK"};
/////////////////////////////////////////////////////////////////////////////////////////////////////////// 


#endif

