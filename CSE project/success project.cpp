#include<iostream>
#include<fstream>
#include <iomanip>
#include<windows.h>
#include<string.h>
using namespace std;
void select();
void option();
void option_old();
void option_update();
void clear();
void india_batting_scorecard();                                //for old scorecard
void india_batting_update_scorecard();
void bang_batting_scorecard();
void bang_batting_update_scorecard();
void clear_bang();
void bowling_scrd_bng();
void bowling_scrd_ind();
void sleep(unsigned milisecond)
    {
        Sleep(milisecond);
    }
fstream fileb,fileb1,file,file1,bang_ball,ind_ball;
static int b=0;
static int a=0;
class india
{
	public:
		float six,four,ball;
		float run;
		india()                                                               // CONSTRUCTOR
		{
			a++;
		cout<<"Enter the detail of player "<<a<<": "<<endl;
		cout<<"Enter the run scored: ";	
		cin>>run;
		cout<<"Enter the no. of 6 hitted: ";
		cin>>six;
		cout<<"Enter the no. of 4 hitted: ";
		cin>>four;
		cout<<"Enter the no. ball played: ";
		cin>>ball;
		try                                                                 // EXCEPTION HANDLING
	        {
	          if(ball==0)
	          throw ball;           
            }
        catch(int x) {}
		cout<<endl;
		cout<<"----------------------------------------------"<<endl;
		cout<<endl;
		}
};
class bangladesh                                               
{
	public:
		float run,six,four,ball;
		bangladesh()                                                         // CONSTRUCTOR
		{
		b++;
		cout<<"Enter the detail of player "<<b<<": "<<endl;
		cout<<"Enter the run scored: ";	
		cin>>run;
		cout<<"Enter the no. of 6 hitted: ";
		cin>>six;
		cout<<"Enter the no. of 4 hitted: ";
		cin>>four;
		cout<<"Enter the no. ball played: ";
		cin>>ball;
		try                                                                 // EXCEPTION HANDELING
	        {
	          if(ball==0)
	          throw ball;           
            }
        catch(int x) {}
		cout<<endl;
		cout<<"----------------------------------------------"<<endl;
		cout<<endl;	
	    }
	    
};
int main()
{
	system("color A");                                                   // SET OUTPUT TEXT COLOR
	char ch[]={"........................................................ WELCOME TO THE SCORECARD OF INDIA V/S BANGLADESH .............................................................."}; 
	int len; 
	len=strlen(ch);                               
	cout<<endl<<endl;
	for(int i=0;i<len;i++)
	{
	sleep(40);
	cout<<ch[i];
    }
	cout<<""<<endl<<endl;
	option();
}
void option()
{
	cout<<"=============================================="<<endl;
	cout<<"    PRESS : "<<endl<<endl;
	char c1[]={"    1. TO VIEW THE OLD SCORECARD "};
	char c2[]={"    2. FOR LIVE MATCH "};
	int len,len2;
	len=strlen(c1);
	len2=strlen(c2);
	for(int i=0;i<len;i++)
	{
		sleep(50);
		cout<<c1[i];
	}
	cout<<endl<<endl;
	for(int i=0;i<len2;i++)
	{
		sleep(50);
		cout<<c2[i];
	}
	cout<<endl<<endl;
	cout<<"----------------------------------------------"<<endl;
	cout<<"    Enter your choice: ";
	int n;
	cin>>n;
	cout<<"=============================================="<<endl;
	switch(n)
	{
		case 1:
			option_old();
			break;
		case 2:
		    option_update();
			break;
		default:
			cout<<endl<<endl;
			cout<<"Please enter valid choice "<<endl;;
		option();
		break;	
	}
}
void option_old()
{
	int a;
	cout<<endl<<"    PRESS : "<<endl<<endl;
	cout<<"    1. TO VIEW INDIA's BATTING "<<endl;
	cout<<"    2. TO VIEW BANGLADESH's BATTING"<<endl;
	cout<<"    3. TO VIEW INDIA's BOWLING"<<endl;
	cout<<"    4. TO VIEW BANGLADESH's BOWLING"<<endl;
	cout<<"    5. TO VIEW INDIA's TOTAL SCORECARD"<<endl;
	cout<<"    6. TO VIEW BANGLADESH's TOTAL SCORECARD"<<endl;
	cout<<"    7. TO VIEW FULL SCORECARD"<<endl<<endl;
	cout<<"----------------------------------------------"<<endl;
	cout<<"    Enter your choice: ";
	cin>>a;
	cout<<"=============================================="<<endl;
	switch(a)
	{
		case 1:
			india_batting_scorecard();
			break;
		case 2:
			bang_batting_scorecard();
			break;
		case 3:
			bowling_scrd_ind();
			break;
		case 4:
	        bowling_scrd_bng();
			break;
		case 5:
			india_batting_scorecard();
			cout<<endl<<endl<<endl<<endl;
			bowling_scrd_bng();
			break;
		case 6:
			bang_batting_scorecard();
			cout<<endl<<endl<<endl<<endl;
			bowling_scrd_ind();
			break;
		case 7:
			india_batting_scorecard();
			cout<<endl<<endl<<endl<<endl;
			sleep(2000);
			bowling_scrd_bng();
			cout<<endl<<endl;
			cout<<"----------------------------------------------------------------------------------------------------";
			cout<<"--------------------------------------------------------------------"<<endl<<endl;
			sleep(2000);
			bang_batting_scorecard();
			cout<<endl<<endl<<endl<<endl;
			sleep(2000);
			bowling_scrd_ind();
			cout<<endl<<endl<<endl<<endl;
			cout<<"----------------------------------------------------------------------------------------------------";
			cout<<"--------------------------------------------------------------------"<<endl<<endl;
			cout<<"\t\t\t\t\t\t\t";
			cout<<"CONGRATULATION INDIA WON THIS MATCH";
			cout<<endl<<endl;
			cout<<"----------------------------------------------------------------------------------------------------";
			cout<<"--------------------------------------------------------------------"<<endl<<endl;
			option();
			break;
	}
}
void option_update()
{
	int a1;
	cout<<"Enter a digit for TOSS"<<endl;
	cin>>a1;
	
	if(a1==10)
	{
		cout<<endl;
		cout<<"BANGLADESH WON THE TOSS";
			cout<<endl<<endl;
	        cout<<"=============================================="<<endl;
			bang_batting_update_scorecard();
			cout<<endl<<endl;
	        cout<<"=============================================="<<endl;
			india_batting_update_scorecard();
			option();
	}
	else
	{
		cout<<endl;
		cout<<"INDIA WON THE TOSS";
			cout<<endl<<endl;
	        cout<<"=============================================="<<endl;
			india_batting_update_scorecard();
			cout<<endl<<endl;
	        cout<<"=============================================="<<endl;
			bang_batting_update_scorecard();
			option();
	}
}
void india_batting_scorecard()
	{
		cout<<endl<<endl;
		fstream file;
		char c;
		if(file.fail())
        cout<<"ERROR";
		file.open("india1.txt",ios::in);
			while(!file.eof())
	        {
		        file.get(c);
		        sleep(0.999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999);
		        cout<<c;
	        }
	file.close();
	cout<<endl<<endl<<endl;
	}
	
	
	void india_batting_update_scorecard()
	{
	cout<<endl;
	cout<<"Enter the detail of INDIA team"<<endl;
	cout<<"----------------------------------------------"<<endl;
	int i,j,total_india=0;
	float strike_rate,temp;
	char c;
	fstream file,file1;
	for(i=827;i<2438;i=i+230)
	{
	file.open("india.txt",ios::out|ios::in);
	file1.open("india1.txt",ios::out|ios::in);
	file.seekp(i,ios::beg);
	india player;                                                             //  constructor call
	total_india=total_india+player.run;
	file<<player.run;
	file.seekp(i+6,ios::beg);
	file<<player.six;
	file.seekp(i+12,ios::beg);
	file<<player.four;
	file.seekp(i+18,ios::beg);
	file<<player.ball;
	strike_rate=(float)(player.run/player.ball)*100;
	file.seekp(i+24,ios::beg);
	file<<strike_rate;
	file.seekp(0,ios::beg);
	if(i==2437)
	{
		file.seekp(384,ios::beg);
		file<<total_india+5;
		file.close();
		file.open("india.txt",ios::out|ios::in);
		file.seekp(0,ios::beg);
	while(!file.eof())
	{
	file.get(c);
	file1<<c;
    }
    clear();
    }
    file.close();
	file1.close();
}
    cout<<endl<<endl<<endl<<endl;
    india_batting_scorecard();
}
	
	void clear()
{
int i,j;
	fstream file;
	for(i=827;i<2438;i=i+230)
	{
		j=i;
		file.open("india.txt",ios::out|ios::in);
		while(j<i+25)
	{
    file.seekp(j,ios::beg);
	file.seekg(j,ios::beg);
	file<<"   ";
	j=j+6;
    }
    	while(j<i+25)
	{
    file.seekp(j,ios::beg);
	file.seekg(j,ios::beg);
	file<<"        ";
	j=j+6;
    }
    file.close();
    }
}


void bang_batting_scorecard()
	{
		char c;
		fileb.open("bangladesh1.txt",ios::in);
			while(!fileb.eof())
	        {
		        fileb.get(c);
		        //sleep(1);
		        cout<<c;
	        }
	fileb.close();
	}
	
	
void bang_batting_update_scorecard()
	{
		cout<<endl;
		cout<<"Enter the detail of BANGLADESH team"<<endl;
		cout<<"----------------------------------------------"<<endl;
		int i,j,total=0;
	float strike_rate_bang;
	char m;
	for(i=543;i<2844;i=i+230)
	{
	fileb.open("bangladesh.txt",ios::out|ios::in);
	fileb1.open("bangladesh1.txt",ios::out|ios::in);
	fileb.seekp(i,ios::beg);
	bangladesh playerb;                                                        //  constructor call
	total=total+playerb.run;
	fileb<<playerb.run;
	fileb.seekp(i+6,ios::beg);
	fileb<<playerb.six;
	fileb.seekp(i+12,ios::beg);
	fileb<<playerb.four;
	fileb.seekp(i+18,ios::beg);
	fileb<<playerb.ball;
	fileb.seekp(i+24,ios::beg);
	strike_rate_bang=(float)((playerb.run/playerb.ball)*100);
	fileb<<strike_rate_bang;
	fileb.seekp(0,ios::beg);
	if(i==2843)
	{
		fileb.seekp(100,ios::beg);
		fileb<<total+8;
		fileb.seekp(0,ios::beg);
	while(!fileb.eof())
	{
	fileb.get(m);
	fileb1<<m;
    }
    clear_bang();
    }
    fileb.close();
	fileb1.close();
}
cout<<endl<<endl<<endl<<endl;
bang_batting_scorecard();
}


void clear_bang()
{
int i,j;
	for(i=543;i<2844;i=i+230)
	{
		j=i;
		fileb.open("bangladesh.txt",ios::out|ios::in);
		fileb.seekp(0,ios::beg);
		while(j<i+25)
	{
    fileb.seekp(j,ios::beg);
	fileb.seekg(j,ios::beg);
	fileb<<"   ";
	j=j+6;
    }
    fileb.close();
    }
}


void bowling_scrd_ind()
{
ind_ball.open("indiab.txt",ios::in);
char c;
while(!ind_ball.eof())
{
	ind_ball.get(c);
	cout<<c;
}
ind_ball.close();
}



void bowling_scrd_bng()
{
bang_ball.open("bangladeshb.txt",ios::in);
char c;
while(!bang_ball.eof())
{
	bang_ball.get(c);
	cout<<c;
}
bang_ball.close();
}
