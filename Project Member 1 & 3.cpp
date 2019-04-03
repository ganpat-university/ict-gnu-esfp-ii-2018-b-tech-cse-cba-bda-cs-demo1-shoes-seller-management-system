#include<iostream>
#include<fstream>
#include<iomanip>
#include<string>
#include<cstring>
#include<cstdlib>
using namespace std;
//Making a class shoes to store all the original data
class shoes
{
	public:
		int s_id,shoe_size,shoe_price,cust_id,c,i,t;
		string	shoe_color,shoe_company,shoe_type,shoe_category,shoe_status;
		char cus_name[20],cust_no[11], cus_add[20];
		
		void garbage()
		{	string temp;
			getline(cin,temp);
		}
		int get()
		{
			cout<<"\nEnter shoes id:";
			cin>>s_id;//Reading shoes id
			cout<<"\nEnter shoes size:";
			cin>>shoe_size;//Reading shoes size
			cout<<"\nEnter shoes price:";
			cin>>shoe_price;//Reading shoes price 
			cout<<"\nEnter 1 for black color.";
			cout<<"\nEnter 2 for brown color.";
			cout<<"\nEnter 3 for blue color.";
			cout<<"\nEnter 4 for white color.";
			cout<<"\nEnter 5 for other color.";
			cout<<"\nEnter choice:";
			cin>>c;//Reading Shoes color
			if(c==1)
			{shoe_color="black";}
			else if(c==2)
			{shoe_color="brown";}
			else if(c==3)
			{shoe_color="blue";}
			else if(c==4)
			{shoe_color="white";}
			else if(c==5)
			{cout<<"\nEnter color:";cin>>shoe_color;}
			cout<<"\nEnter 1 for bata company.";
			cout<<"\nEnter 2 for paragon company.";
			cout<<"\nEnter 3 for adidas company.";
			cout<<"\nEnter 4 for nike company.";
			cout<<"\nEnter 5 for other company.";
			cout<<"\nEnter choice:";
			cin>>c;//Reading Shoes company
			if(c==1)
			{shoe_company="bata";}
			else if(c==2)
			{shoe_company="paragon";}
			else if(c==3)
			{shoe_company="adidas";}
			else if(c==4)
			{shoe_company="nike";}
			else if(c==5)
			{cout<<"\nEnter company:";cin>>shoe_company;}
			cout<<"\nEnter 1 for formal.";
			cout<<"\nEnter 2 for casual.";
			cout<<"\nEnter choice:";
			cin>>c;//Reading shoes type
			if(c==1)
			{shoe_type="formal";}
			else if(c==2)
			{shoe_type="casual";}
			cout<<"\nEnter 1 for sandal.";
			cout<<"\nEnter 2 for mojris.";
			cout<<"\nEnter choice:";
			cin>>c;//Reading shoes category
			if(c==1)
			{shoe_category="sandal";}
			else if(c==2)
			{shoe_category="mojris";}
			cout<<"\nEnter 1 for available.";
			cout<<"\nEnter 2 for pending.";
			cout<<"\nEnter choice:";
			cin>>c;//Reading shoes Status
			if(c==1)
			{shoe_status="available";}
			else if(c==2)
			{shoe_status="pending";}
			cout<<"\n\nEnter customer id:";
			cin>>cust_id;//Reading customer id
			cout<<"\nEnter customer contact number:";
tt:			cin>>cust_no;//Reading customer number			
			garbage();
			t=strlen(cust_no);
			for(i=0;i<t-1;i++)
			{
				
				if(cust_no[i]>=48 && cust_no[i]<=57)
				{
				}
				else
				{
					cout<<"\nEnter correct number:";
					goto tt;
				}
			}
			cout<<"\nEnter customer name:";
ss:			cin.getline(cus_name,20);
			garbage();
			t=strlen(cus_name);
			for(i=0;i<t;i++)
			{
				
				if((cus_name[i]>=65 && cus_name[i]<=90) || (cus_name[i]>=97 && cus_name[i]<=122) || cus_name[i]==32)
				{
				}
				else
				{
					cout<<"\nEnter correct name:";
					goto ss;
				}
			}
			cout<<"Enter customer address:"<<endl;
			cin.getline(cus_add,20);//Reading customer address
			garbage();
			return 0;			
		}
};
//Making a class to store all shoes of type casual
class casuals
{
	public:
		int s_id;
		string company,type;	
		void show()//Displaying stored data
		{
			cout<<"\nShoe id:"<<s_id<<"\nShoe company:"<<company;
			cout<<"\nShoe type:"<<type;
			cout<<"\n---------------------------------------------";
		}
};
//Making a class to store all the customers who bought mojris of black or brown color
class mojris
{
	public:
		int cus_id;
		string name,add,no;
		void disp()//Displaying stored data
		{
			cout<<"\nCustomer id:"<<cus_id;
			cout<<"\nCustomer name"<<name;
			cout<<"\nCustomer address:"<<add;
			cout<<"\nCustomer contact number:"<<no;
			cout<<"\n---------------------------------------------";
		}
};
//Making a class to store all customers who have bought shoes of type casual and of color blue or white and having size of 6 or 8
class cus
{
	public:
		int id;
		string name,add,no;
		void display1()//Displaying stored data
		{
			cout<<"\nCustomer id:"<<id;
			cout<<"\nCustomer name:"<<name;
			cout<<"\nCustomer contact number:"<<no;
			cout<<"\nCustomer address:"<<add;
			cout<<"\n---------------------------------------------";
		}
};
//Making a class to store all customers who bought shoes of size 9 or greater than 9 and of price greater than 500
class cust
{
	public:
		int id;
		string name,add,no;
		void display2()//Displaying stored data
		{
			cout<<"\nCustomer id:"<<id;
			cout<<"\nCustomer name:"<<name;
			cout<<"\nCustomer contact number:"<<no;
			cout<<"\nCustomer address:"<<add;
			cout<<"\n---------------------------------------------";
		}
};
//Making a class to store shoes that are pending 
class pending1
{
	public:
		int id,price,size;
		string color,company,category,type;
		void display3()//Displaying stored data
		{
			cout<<"\nShoe id:"<<id;
			cout<<"\nShoe company:"<<company;
			cout<<"\nShoe color:"<<color;
			cout<<"\nShoe price:"<<price;
			cout<<"\nShoe size:"<<size;
			cout<<"\nShoe category:"<<category;
			cout<<"\nShoe type:"<<type;
			cout<<"\n---------------------------------------------";
		}
};
int main()
{
	//Making objects of all classes
	shoes ob[5];
	casuals obj[5];
	mojris obj1[5];
	cus obj4[5];
	cust obj5[5];
	pending1 obj6[5];

	ofstream tof("abc.txt",ios::out|ios::binary);

	//Declaring variables
	int i,j=0,n1=0,n2=0,n3=0,n4=0,n5=0,n6=0,n7=0,p,q,r;
	string a="casual",b="mojris",c="black",d="brown",temp1,temp2;

	//Getting data for class shoes
	for(i=0;i<1;i++)	
	{
		ob[i].get();
	}
	//Storing data for class casuals if they satisfy the condition
	for(i=0;i<1;i++)
	{
		temp1=ob[i].shoe_type;
		if(temp1==a)//checking whether the shoe type of that object is casual or not
		{
			//Copying respective data to class casual
			obj[j].s_id=ob[i].s_id;
			obj[j].company=ob[i].shoe_company;
			obj[j].type=ob[i].shoe_category;
			j++;
		}	
	}

	n1=j;
	j=0;
	//Storing data for class mojris if they satisfy the condition
	for(i=0;i<1;i++)
	{
	temp1=ob[i].shoe_category;
	temp2=ob[i].shoe_color;
	if(temp1==b && temp2==c || temp1==b && temp2==d)//Checking whether the shoe category is mojris or not and whether the shoe color is black or brown or not
		{
			//Copying respective data to class mojris
			obj1[j].cus_id=ob[i].cust_id;
			obj1[j].name=ob[i].cus_name;
			obj1[j].add=ob[i].cus_add;
			obj1[j].no=ob[i].cust_no;
			j++;
		}
	}
	n2=j;
	j=0;
	//Storing data for class cus if they satisfy the condition
	for(i=0;i<1;i++)
	{
		a="casual";
		b="white";
		c="blue";
		temp1=ob[i].shoe_type;
		temp2=ob[i].shoe_color;
		p=ob[i].shoe_size;
		if((temp1==a && temp2==b) ||(temp1==a && temp2==c)&&(p==6 || p==8))//Checking whether shoe type is formal and shoe color is white or blue
		{
			//Copying respective data to class cus

			obj4[j].id=ob[i].cust_id;
			obj4[j].name=ob[i].cus_name;
			obj4[j].no=ob[i].cust_no;
			obj4[j].add=ob[i].cus_add;
			j++;
		}
		
	}
	n5=j;
	j=0;
	//Storing data for class cust if they satisfy the condition
	for(i=0;i<1;i++)
	{
		p=ob[i].shoe_price;
		q=ob[i].shoe_size;
		if(p>500 && q>=9)//Checking whether shoe price greater than 500 and shoe size greater than 9
		{
			//Copying respective data to class cust
			obj5[j].id=ob[i].cust_id;
			obj5[j].name=ob[i].cus_name;
			obj5[j].no=ob[i].cust_no;
			obj5[j].add=ob[i].cus_add;
			j++;
		}
	}
	n6=j;
	j=0;
	//Storing data for class pending1 if they satisfy the condition
	for(i=0;i<1;i++)
	{
		a="pending";
		temp1=ob[i].shoe_status;
		if(a==temp1)//Checking shoe status is pending or not
		{
			//Copying respective data to class pending1
			obj6[j].id=ob[i].s_id;	
			obj6[j].price=ob[i].shoe_price;
			obj6[j].size=ob[i].shoe_size;
			obj6[j].color=ob[i].shoe_color;
			obj6[j].company=ob[i].shoe_company;
			obj6[j].category=ob[i].shoe_category;
			obj6[j].type=ob[i].shoe_type;
			j++;
		}
	}
	n7=j;
	cout<<"\n000000000000000000000000000000000000000000000000000000000000000000000000000000000\n";
	cout<<"0                      @@@@   @   @  @@@@@  @@@@@  @   @  @@@@@                 0\n";
	cout<<"0                     @    @  @   @    @    @   @  @   @    @                   0\n";
	cout<<"0                     @    @  @   @    @    @@@@@  @   @    @                   0\n";
	cout<<"0                     @    @  @   @    @    @      @   @    @                   0\n";
	cout<<"0                      @@@@    @@@     @    @       @@@     @                   0\n";
	cout<<"000000000000000000000000000000000000000000000000000000000000000000000000000000000\n";
	system("clear");
	cout<<"\n\nCasual shoes:\n";
	tof<<"\n\nCasual shoes:\n";
	//Displaying all the objects of class casual
	for(i=0;i<n1;i++)
	{
		obj[i].show();
		tof<<"\nShoe id:"<<obj[i].s_id;
		tof<<"\nShoe company:"<<obj[i].company;
		tof<<"\nShoe type:"<<obj[i].type;
		tof<<"\n---------------------------------------------";
		
	}
	if(n1==0){cout<<"None";tof<<"None";}
	//Displaying all the objects of class mojris
	cout<<"\n\nPeople who bought mojris of black or brown color:\n";
	tof<<"\n\nPeople who bought mojris of black or brown color:\n";
	for(i=0;i<n2;i++)
	{
		obj1[i].disp();
		tof<<"\nCustomer id:"<<obj1[i].cus_id;
		tof<<"\nCustomer name"<<obj1[i].name;
		tof<<"\nCustomer address:"<<obj1[i].add;
		tof<<"\nCustomer contact number:"<<obj1[i].no;
		tof<<"\n---------------------------------------------";
	}
	if(n2==0){cout<<"None";tof<<"None";}
	//Displaying all the objects of class cus
	cout<<"\n\nCustomer having purchased white or blue casual shoes and size 6 or 8:\n";
	tof<<"\n\nCustomer having purchased white or blue casual shoes and size 6 or 8:\n";
	for(i=0;i<n5;i++)
	{
		obj4[i].display1();
		tof<<"\nCustomer id:"<<obj4[i].id;
		tof<<"\nCustomer name:"<<obj4[i].name;
		tof<<"\nCustomer contact number:"<<obj4[i].no;
		tof<<"\nCustomer address:"<<obj4[i].add;
		tof<<"\n---------------------------------------------";
	}
	if(n5==0){cout<<"None";tof<<"None";}
	//Displaying all the objects of class cust
	cout<<"\n\nCustomers having size greater tham 9 and price greater than 500:\n";
	tof<<"\n\nCustomers having size greater tham 9 and price greater than 500:\n";
	for(i=0;i<n6;i++)
	{
		obj5[i].display2();
		tof<<"\nCustomer id:"<<obj5[i].id;
		tof<<"\nCustomer name:"<<obj5[i].name;
		tof<<"\nCustomer contact number:"<<obj5[i].no;
		tof<<"\nCustomer address:"<<obj5[i].add;
		tof<<"\n---------------------------------------------";
	}
	if(n6==0){cout<<"None";tof<<"None";}
	//Displaying all the objects of class pending1
	cout<<"\n\nShoes that are pending:\n";
	tof<<"\n\nShoes that are pending:\n";
	for(i=0;i<n7;i++)
	{
		obj6[i].display3();
		tof<<"\nShoe id:"<<obj6[i].id;
		tof<<"\nShoe company:"<<obj6[i].company;
		tof<<"\nShoe color:"<<obj6[i].color;
		tof<<"\nShoe price:"<<obj6[i].price;
		tof<<"\nShoe size:"<<obj6[i].size;
		tof<<"\nShoe category:"<<obj6[i].category;
		tof<<"\nShoe type:"<<obj6[i].type;
		tof<<"\n---------------------------------------------\n";
	}
	if(n7==0){cout<<"None"<<endl;tof<<"None";}
}
