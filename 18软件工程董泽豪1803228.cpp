#include<iostream>
#include<time.h>
#include<stdlib.h>
using namespace std;
main()
{   
	char name[20];
	char xh[20];
	int d,s,a,b,n,c;  //�������d����ȷ�𰸣���s������Ĵ𰸣���a�����������ֵ����
	// b�������������һ��ֵ����n����ţ���c���Ӽ���������
	int score=0;     //�������score��������
    cout<<"�����뿼��ѧ��:";
	cin>>xh;
	cout<<"�����뿼��������";
	cin>>name;
    cout<<"=======================Сѧ������50���ڼӼ���ϵͳ======================"<<endl;
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
		case 2: cout<<"**********��"<<n<<"��***********"<<endl;
					 cout<<a<<"+"<<b<<"=";
		         d=a+b;
				 break;
		case 3:
        case 4:
        case 5:cout<<"*********��"<<n<<"��*********"<<endl;
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
					cout<<"����ȷ"<<endl;
				}
				else
				{
					if(tb<3)
						cout<<"�𰸴��������ԣ�����"<<endl;
					cout<<"�㻹��"<<3-tb<<"���������"<<endl;
					++tb;
				}
			}
			while(tb<=3&&s!=d);
			if(s!=d)
				cout<<"����û�л���������ȷ���ǣ�"<<d<<endl;
            switch (tb)                                   
			{
              case 1:score+=10;break;               
              case 2:score+=7;break;                  
              case 3:score+=5;break;                  
			}
			cout<<"---------------------------��ǰ����Ϊ��"<<score<<endl;
	}

			cout<<"���ĵ÷�Ϊ��"<<score<<" ";
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

	
