#include<iostream>
#include<fstream>
#include<string>
#include<vector>
using namespace std; 

int main(){
    ifstream source;
    source.open("D:\\261102\\lab17-2562-2-charnnaronggot\\name_score.txt");
	string textline;
	vector <string> list_name;
	vector <char> list_grade;
	vector <int> list_score;

    while(getline(source,textline)){
    //cout << textline << "\n";  
    char format[] ="%[^:]: %f %f" ;
    char name[100] ;
    float a,b,c; 
    sscanf (textline.c_str(),format,&name,&a,&b,&c);
    // cout << textline << "\n" ;
    // cout << name << " " << a	<< " " << b << " " << c <<  endl ;
    list_name.push_back(name);
	list_score.push_back(a);
	list_score.push_back(b);
	list_score.push_back(c);
     char grade ;
     int sum ;
            if (sum > 80 ){
                grade == 'A';
            }else if(sum >=70 && sum < 80){
                grade == 'B';
            }else if(sum >=60 && sum < 70){
                grade == 'C';
            }else if(sum>=50 && sum <60 ){
                grade == 'D';
            }else{
                grade == 'F' ;
            }
	list_grade.push_back(grade);    
    }

    while(true){
        cout << "---------------------------------\n";
        string commandtext ; 
        cout << "Please input your command : " ; 
        getline(cin,commandtext) ;
        cout << "---------------------------------\n";
        string rule ;
        rule = commandtext.substr(0,5);
            if(commandtext == rule)
        


        }
}


//Write your code here
