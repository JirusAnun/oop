#include<iomanip>
#include <cmath>

class TIME{
	int h,m,s;
public:
	 void set_time(int,int,int);
	 void display();
   void getTime();
   int Sec();
   TIME subtract(TIME);
	 //void add_min(int);
};

void TIME::set_time(int hour, int min, int sec) {
    h = hour;
    m = min;
    s = sec;
}

void TIME::display(){
   cout<<setw(2)<<setfill('0')<<h;
   cout<<":";
   cout<<setw(2)<<setfill('0')<<m;
   cout<<":";
   cout<<setw(2)<<setfill('0')<<s;
   cout<<endl;  
 
}

TIME TIME::subtract(TIME T){
  int sec_1 = ((this->h*3600)+(this->m*60)+this->s);
  int sec_2 = ((T.h*3600)+(T.m*60)+T.s);

  int time_diff = abs(sec_2 - sec_1);
  TIME temp;
  temp.h = time_diff / 3600;
  time_diff = time_diff % 3600;

  temp.m = time_diff / 60;
  time_diff = time_diff % 60;

  temp.s = time_diff;
  return temp;
}

void TIME::getTime (){
  int temp,sec;
  cout << "Input hours :";
  cin >> temp;
  if(temp<0){ temp = 0; }
  sec = temp*3600;
  cout << "Input minutes:";
  cin >> temp;
  if(temp<0){ temp = 0; }
  sec += temp*60;
  cout << "Input seconds :";
  cin >> temp;
  if(temp<0){ temp = 0; }
  sec += temp;

  h = sec / 3600;
  sec = sec % 3600;

  m = sec / 60;
  sec = sec % 60;

  s = sec;

  cout<<h<<":"<<m<<":"<<s<<endl;
}


