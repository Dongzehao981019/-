#include<iostream>
#include<time.h>
#include<stdlib.h>
using namespace std;
main()
{   
	char name[20];
	char xh[20];
	int d,s,a,b,n,c;  //定义变量d（正确答案），s（输入的答案），a（参与运算的值），
	// b（参与运算的另一个值），n（题号），c（加减的条件）
	int score=0;     //定义变量score（分数）
    cout<<"请输入考生学号:";
	cin>>xh;
	cout<<"请输入考生姓名：";
	cin>>name;
    cout<<"=======================小学生整数50以内加减法系统======================"<<endl;
    srand(time(NULL));
	for(n=1;n<=10;n++)
	{
		loop:a=rand()%50;
		b=rand()%50;
		c=rand()%6;
		if((c==0||c==1||c==2)&&(a+b)>50)
		{
			if(a>25&&b>25)
		{
			a=a-25;
			b=b-25;
		}
		if(a>25)
			a=a-25;
		if(b>25)
			b=b-25;
		}
		switch(c)
		{ 
		case 0:
		case 1:
		case 2: cout<<"**********第"<<n<<"题***********"<<endl;
					 cout<<a<<"+"<<b<<"=";
		         d=a+b;
				 break;
		case 3:
        case 4:
        case 5:cout<<"*********第"<<n<<"题*********"<<endl;
        if(a>b)
		{
			cout<<a<<"-"<<b<<"=";    d=a-b;
		}
        else {
			cout<<b<<"-"<<a<<"=";    d=b-a;
		}
        break; 
		goto loop;
		}
		int tb=1;
			do
			{
				cin>>s;
				if(s==d)
				{
					cout<<"答案正确"<<endl;
				}
				else
				{
					if(tb<3)
						cout<<"答案错误，请重试！！！"<<endl;
					cout<<"你还有"<<3-tb<<"次作答机会"<<endl;
					++tb;
				}
			}
			while(tb<=3&&s!=d);
			if(s!=d)
				cout<<"你已没有机会作答，正确答案是："<<d<<endl;
            switch (tb)                                   
			{
              case 1:score+=10;break;               
              case 2:score+=7;break;                  
              case 3:score+=5;break;                  
			}
			cout<<"---------------------------当前分数为："<<score<<endl;
	}

			cout<<"最后的得分为："<<score<<" ";
			if (score>90)                                  
			{
               cout<<"SMART!"<<endl;                   
			}
            else if (score>80)                            
			{
               cout<<"GOOD!"<<endl;                  
			}
            else if (score>70)                           
			{
               cout<<"OK!"<<endl;                    
			}
            else if (score>=60)                          
			{
               cout<<"PASS!"<<endl;                   
			}
            else cout<<"TRY AGAIN!"<<endl;               
               cout<<"\n";
	}	

	
