#include <windows.h>
#include <fstream>
#include <bits/stdc++.h> 
using namespace std;
int main(){
string ip; 
int arr[100];
int x; 
	string nemef;
 	system("cls");
	cout<<"���������IP��ַ";
	cin>>ip; 
	while(true){
		system("cls");
		cout<<"�����C++�ű����ױ����v1.0"<<endl<<endl;
				cout<<"1.����ɫled��"<<endl;
				cout<<"2.�򿪺�ɫled��"<<endl;
				cout<<"3.�ر���ɫled��"<<endl;
				cout<<"4.�رպ�ɫled��"<<endl;
				cout<<"5.��ʱ1��"<<endl;
				cout<<"6.GPIO26����ߵ�ƽ"<<endl;
				cout<<"7.GPIO26����͵�ƽ"<<endl;
				cout<<"8.������Ĳ��ϴ��������"<<endl;
				cout<<"9.ɾ����һ��"<<endl;
				cout<<"10.��ɫled����˸"<<endl;
				cout<<"11.��ɫled����˸"<<endl<<endl;
				if(x>0){
				cout<<"����Ϊ���д�ĳ���"<<endl<<endl;
			}
		for(int i=1;x>=i;i++){
			int hchc=arr[i];
			cout<<i<<".";
			if(hchc==1){
				cout<<"����ɫled��"<<endl;
			}
			if(hchc==2){
				cout<<"�򿪺�ɫled��"<<endl;
			}
			if(hchc==3){
				cout<<"�ر���ɫled��"<<endl;
			}
			if(hchc==4){
				cout<<"�رպ�ɫled��"<<endl;
			}
			if(hchc==5){
				cout<<"��ʱ1��"<<endl;
			}
			if(hchc==6){
				cout<<"GPIO26����ߵ�ƽ"<<endl;
			}
			if(hchc==7){
				cout<<"GPIO26����͵�ƽ"<<endl;
			}
			if(hchc==10){
				cout<<"��ɫled����˸"<<endl;
			}
			if(hchc==11){
				cout<<"��ɫled����˸"<<endl;
			}
		}
		cout<<endl<<"��һ��Ҫִ�еĴ���:"; 
		int hc;
		cin>>hc;
		if((hc<=7&&hc>=0)||hc==10||hc==11){
			arr[x+1]=hc;
			x++;
		}
		else if(hc==9&&x>0){
			arr[x]==0;
			x--;
		}
		else if(hc==8){
			system("cls");
			cout<<"�ļ���:";
			cin>>nemef;
		    std::ofstream fileStream(nemef.c_str());
        fileStream << "#include <fstream>\n";
fileStream << "#include <string>\n";
fileStream << "#include <chrono>\n";
fileStream << "#include <thread>\n";
fileStream << "#include <iostream>\n";
fileStream << "#define OUTPUT 0\n";
fileStream << "#define INPUT 1\n";
fileStream << "#define HIGH 1\n";
fileStream << "#define LOW 0\n";
fileStream << "#define GREENLED 1\n";
fileStream << "#define REDLED 0\n";
fileStream << "#define HEARTBAET 2\n";
fileStream << "void digitalLed(bool id,int m){\n";
fileStream << "    if(m==1){\n";
fileStream << "        if(id){\n";
fileStream << "            std::ofstream outfile(\"/sys/class/leds/green_led/trigger\");\n";
fileStream << "            outfile << \"default-on\" << \"\\n\"; \n";
fileStream << "            outfile.close();  \n";
fileStream << "        }\n";
fileStream << "        else{\n";
fileStream << "            std::ofstream outfile(\"/sys/class/leds/red_led/trigger\");\n";
fileStream << "            outfile << \"default-on\" << \"\\n\"; \n";
fileStream << "            outfile.close();  \n";
fileStream << "        }\n";
fileStream << "    }\n";
fileStream << "    else if(m==0){\n";
fileStream << "        if(id){\n";
fileStream << "            std::ofstream outfile(\"/sys/class/leds/green_led/trigger\");\n";
fileStream << "            outfile << \"none\" << \"\\n\"; \n";
fileStream << "            outfile.close();  \n";
fileStream << "        }\n";
fileStream << "        else{\n";
fileStream << "            std::ofstream outfile(\"/sys/class/leds/red_led/trigger\");\n";
fileStream << "            outfile << \"none\" << \"\\n\"; \n";
fileStream << "            outfile.close();  \n";
fileStream << "        }\n";
fileStream << "    }\n";
fileStream << "    else if(m==2){\n";
fileStream << "        if(id){\n";
fileStream << "            std::ofstream outfile(\"/sys/class/leds/green_led/trigger\");\n";
fileStream << "            outfile << \"heartbeat\" << \"\\n\"; \n";
fileStream << "            outfile.close();  \n";
fileStream << "        }\n";
fileStream << "        else{\n";
fileStream << "            std::ofstream outfile(\"/sys/class/leds/red_led/trigger\");\n";
fileStream << "            outfile << \"heartbeat\" << \"\\n\"; \n";
fileStream << "            outfile.close();  \n";
fileStream << "        }\n";
fileStream << "    }\n";
fileStream << "}\n";
fileStream << "void pinMode(int id,bool mode){\n";
fileStream << "    if(mode){\n";
fileStream << "        std::ofstream outfile(\"/sys/class/gpio/export\");\n";
fileStream << "        outfile << std::to_string(id) << \"\\n\"; \n";
fileStream << "        outfile.close();  \n";
fileStream << "        std::string first=\"/sys/class/gpio/gpio\";\n";
fileStream << "        std::string two=std::to_string(id);\n";
fileStream << "        std::string three=\"/direction\";\n";
fileStream << "        std::string result = first +two+ three;\n";
fileStream << "        std::ofstream outfile1(result);\n";
fileStream << "        outfile1 << \"in\" << \"\\n\"; \n";
fileStream << "        outfile1.close();\n";
fileStream << "    }\n";
fileStream << "    else{\n";
fileStream << "        std::ofstream outfile(\"/sys/class/gpio/export\");\n";
fileStream << "        outfile << std::to_string(id) << \"\\n\"; \n";
fileStream << "        outfile.close();  \n";
fileStream << "        std::string first=\"/sys/class/gpio/gpio\";\n";
fileStream << "        std::string two=std::to_string(id);\n";
fileStream << "        std::string three=\"/direction\";\n";
fileStream << "        std::string result = first +two+ three;\n";
fileStream << "        std::ofstream outfile1(result);\n";
fileStream << "        outfile1 << \"out\" << \"\\n\"; \n";
fileStream << "        outfile1.close();\n";
fileStream << "    }\n";
fileStream << "}\n";
fileStream << "void digitalWrite(int id,bool mode){\n";
fileStream << "    std::string first1=\"/sys/class/gpio/gpio\";\n";
fileStream << "    std::string two1=std::to_string(id);\n";
fileStream << "    std::string three1=\"/value\";\n";
fileStream << "    std::string result1 = first1 +two1+ three1;\n";
fileStream << "    std::ofstream outfile2(result1);\n";
fileStream << "    if (!outfile2.is_open()) {\n";
fileStream << "        std::cerr << \"Error: Failed to open the file \" << result1 << \"\\n\";\n";
fileStream << "        return;\n";
fileStream << "    }\n";
fileStream << "    outfile2 << std::to_string(mode) << \"\\n\";\n";
fileStream << "    outfile2.close();\n";
fileStream << "}\n";
fileStream << "bool digitalRead(int id){\n";
fileStream << "    std::string first1=\"/sys/class/gpio/gpio\";\n";
fileStream << "    std::string two1=std::to_string(id);\n";
fileStream << "    std::string three1=\"/value\";\n";
fileStream << "    std::string result1 = first1 +two1+ three1;\n";
fileStream << "    std::ifstream file(result1);\n";
fileStream << "    if (!file.is_open()) {\n";
fileStream << "        std::cerr << \"Error: Unable to open file \" << result1 << \"\\n\";\n";
fileStream << "        return false; \n";
fileStream << "    }\n";
fileStream << "    std::string content;\n";
fileStream << "    file >> content; \n";
fileStream << "    int number = std::stoi(content);\n";
fileStream << "    return (number == 1);\n";
fileStream << "}\n";
fileStream << "int main(){\n";
fileStream << "pinMode(74,OUTPUT);\n";
for(int i=1;x>=i;i++){
			int hchc=arr[i];
			if(hchc==1){
				fileStream << "digitalLed(GREENLED,HIGH);\n";
			}
			if(hchc==2){
				fileStream << "digitalLed(REDLED,HIGH);\n";
			}
			if(hchc==3){
				fileStream << "digitalLed(GREENLED,LOW);\n";
			}
			if(hchc==4){
				fileStream << "digitalLed(REDLED,LOW);\n";
			}
			if(hchc==5){
				fileStream << "std::this_thread::sleep_for(std::chrono::seconds(1));\n";
			}
			if(hchc==6){
				fileStream << "digitalWrite(74,HIGH);\n";
			}
			if(hchc==7){
				fileStream << "digitalWrite(74,LOW);\n";
			}
			if(hchc==10){
				fileStream << "digitalLed(GREENLED,HEARTBAET);\n";
			}
			if(hchc==11){
				fileStream << "digitalLed(REDLED,HEARTBAET);\n";
			}
		}	
		fileStream << "}";
        fileStream.close(); 
        system("cls");
        std::cerr << "�ļ�������ɣ������ϴ�" << std::endl;
        std::string command = "scp " + nemef + " root@" + ip + ":/root";
        system(command.c_str());
        system("echo ����������");
        std::string sshCommand = "ssh root@" + ip + " \"";
        sshCommand += "sed -i 's/\\r$//' " + nemef + ";";
        sshCommand += " g++ " + nemef + " -o test;";
        sshCommand += " chmod +x test;";
        sshCommand += " ./test;";
        sshCommand += "\"";
        system(sshCommand.c_str());
        system("echo �������,����������˳�");
        return 0;
		}
	}
}
