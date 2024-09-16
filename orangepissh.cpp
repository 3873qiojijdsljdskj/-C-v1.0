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
	cout<<"输入香橙派IP地址";
	cin>>ip; 
	while(true){
		system("cls");
		cout<<"香橙派C++脚本简易编程器v1.0"<<endl<<endl;
				cout<<"1.打开绿色led灯"<<endl;
				cout<<"2.打开红色led灯"<<endl;
				cout<<"3.关闭绿色led灯"<<endl;
				cout<<"4.关闭红色led灯"<<endl;
				cout<<"5.延时1秒"<<endl;
				cout<<"6.GPIO26输出高电平"<<endl;
				cout<<"7.GPIO26输出低电平"<<endl;
				cout<<"8.保存更改并上传到香橙派"<<endl;
				cout<<"9.删除上一项"<<endl;
				cout<<"10.绿色led灯闪烁"<<endl;
				cout<<"11.红色led灯闪烁"<<endl<<endl;
				if(x>0){
				cout<<"以下为你编写的程序"<<endl<<endl;
			}
		for(int i=1;x>=i;i++){
			int hchc=arr[i];
			cout<<i<<".";
			if(hchc==1){
				cout<<"打开绿色led灯"<<endl;
			}
			if(hchc==2){
				cout<<"打开红色led灯"<<endl;
			}
			if(hchc==3){
				cout<<"关闭绿色led灯"<<endl;
			}
			if(hchc==4){
				cout<<"关闭红色led灯"<<endl;
			}
			if(hchc==5){
				cout<<"延时1秒"<<endl;
			}
			if(hchc==6){
				cout<<"GPIO26输出高电平"<<endl;
			}
			if(hchc==7){
				cout<<"GPIO26输出低电平"<<endl;
			}
			if(hchc==10){
				cout<<"绿色led灯闪烁"<<endl;
			}
			if(hchc==11){
				cout<<"红色led灯闪烁"<<endl;
			}
		}
		cout<<endl<<"下一次要执行的代码:"; 
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
			cout<<"文件名:";
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
        std::cerr << "文件保存完成，正在上传" << std::endl;
        std::string command = "scp " + nemef + " root@" + ip + ":/root";
        system(command.c_str());
        system("echo 编译运行中");
        std::string sshCommand = "ssh root@" + ip + " \"";
        sshCommand += "sed -i 's/\\r$//' " + nemef + ";";
        sshCommand += " g++ " + nemef + " -o test;";
        sshCommand += " chmod +x test;";
        sshCommand += " ./test;";
        sshCommand += "\"";
        system(sshCommand.c_str());
        system("echo 运行完毕,按下任意键退出");
        return 0;
		}
	}
}
