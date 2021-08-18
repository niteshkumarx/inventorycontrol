//Program to maintain Retail 

/*=== Developed By : Nitesh Kumar : 2012 =====*/

/*---Included header files-----------*/
#include<math.h>
 #include<conio.h>
  #include<dos.h>
   #include<graphics.h>
  #include<fstream.h>
 #include<stdio.h>
#include<stdlib.h>
 #include<iomanip.h>

/*---Globally defined values---------*/

      #define l delay(50)
       #define c cout<<
	#define s cout<<"\t\t\t";
       #define ll delay(100)
     #define ef sound(500);l;nosound();
   #define refresh clrscr();for(i=0;i<20;i++){s;s;c"\t\t\n";};
/*---Structure for product information--------*/

   struct prodetail{
			int proid;
			double procost;
			char proname[11];
			char pbrand[11];
			char other[21];
		      };
   prodetail s1,s2,s3,s4,s5,s6,s7,s8;
/*---Structure for Smart Card Accounts--------*/
   struct smartcard{ char name[17];
		     char secpass[7];  //Security Password
		     double bal;
		     char tel[11];
		     };
   smartcard smc;

/*---Main Function-------------------*/

void main()

{	//Statements of main

void texta(void);
char ch,rt,x,p,q,pp,a,nam[21],ax,q2,line[80],dd;
int i,j,xl;
int code;//User Access Code
double cost[15],sum=0,desc,pay;
ofstream filout;
ifstream filin;

    texta(); //Calling Graphic Function

/*---Introduction---------------------*/

		delay(2500);
	textbackground(6);
	textcolor(15);clrscr();
c"\n\t\t\t  W";l;c"E";l;c"L";l;c"C";l;c"O";l;c"M";l;c"E";l;c" ";l;
c"T";l;c"O";l;c" ";l;c"R";l;c"E";l;c"L";l;c"I";l;c"A";l;c"N";l;
c"C";l;c"E";l;c" ";l;c"R";l;c"E";l;c"T";l;c"A";l;c"I";l;c"L";l;
c"\n\t\t\t  ~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
sound(1000);ll;sound(1500);ll;sound(2000);ll;sound(2500);ll;nosound();

net:     //Main menu Label

/*---Window function------------------*/

window(1,5,80,5);textcolor(11);textbackground(0);clrscr();
	ll;ll;

/*---Date Function--------------------*/

	c" What you want to do \? \t\t";s;struct date d;

   getdate(&d);
   printf("Today is :%d\\", d.da_day);
   printf("%d\\", d.da_mon);
   printf("%d", d.da_year);
//   sound(500);ll;nosound();

/*---Options---------------------------*/

c"\n\t 1.See Product details " ;s;s;ef;
c"\n\t 2.Add new Products " ;s;s;ef;
c"\n\t 3.Calculate Custmor's bill \t\t";s;ef;
c"\n\t 4.Open a Smart card Account \t\t" ;s; ef;
c"\n\t 5.Delete a Product \t\t" ;s; ef;
c"\n\t 6.Exit";s;s;s;
	for(i=0;i<10;i++)
	{s;s;c"\t\t\t\n";}
c"\t Please Enter your choice (1-6)          : ";
	cin>>ch;
 refresh;
/*---case 1 Product details----------------------*/

if(ch=='1')

{// Main Case 1 statements
set:  //Main Case 1 Label
textcolor(11); clrscr();

c" Product details\n ";ef;
c"\t1 . Clothes\t\t\n";ef;
c" \t2 . Electronics\t\t\n";ef;
c" \t3 . Funitures\t\t\t\n";ef;
c" \t4 . Mobile Phones\t\t\n";ef;
c" \t5 . Grocery\t\t\t\t\n";ef;
c" \t6 . Books\t\t\t\n";ef;
c" \t7 . CD-ROMs\\DVDs\t\t\n";ef;
c" \t8 . Movie Tickets\t\t\n";ef;
c" \t9 . Go to previous menu\t\t\n";ef;
c" \t0 . Exit from whole program\t\t\n";ef;
	for(i=0;i<5;i++)
	{s;s;c"\t\t\t\n";}

c"\n\t Please enter your choice (1-0)                   : ";
cin>>x;
 refresh;

/*---Case 1#9--------------------------*/

if(x=='9')
{
goto net;}
/*---Case 1#2--------------------------*/
else if(x=='2')
{ sss1:
textcolor(11);clrscr();
filin.open("Electra",ios::in);
c" Electronics \n";ef;
filin.seekg(0);
for(i=1;i<16;i++)
{filin.getline(line,80);
cout<<line<<"\n";
}
filin.close();

c"\n\t Press 1 to go back :";
cin>>dd;
refresh;
if(dd=='1')
{goto set;}

else {
textcolor(12+128);clrscr();c"! INVALID INPUT ! Please retry";sound(1500);
delay(500);nosound();ll;l;sound(1500);delay(500);nosound();
      goto sss1;
      }
}//end end 1.2

/*---Case 1#1--------------------------*/
else if(x=='1')
{ sss2:
textcolor(11);clrscr();
filin.open("Cloth",ios::in);
c" Cloths \n";ef;
filin.seekg(0);
for(i=1;i<16;i++)
{filin.getline(line,80);
cout<<line<<"\n";
}
filin.close();

c"\n\t Press 1 to go back :";
cin>>dd;
refresh;
if(dd=='1')
{goto set;}

else {
textcolor(12+128);clrscr();c"! INVALID INPUT ! Please retry";sound(1500);
delay(500);nosound();ll;l;sound(1500);delay(500);nosound();
      goto sss2;
      }
}//end end 1.1

/*---Case 1#3--------------------------*/
else if(x=='3')
{ sss3:
textcolor(11);clrscr();
filin.open("Furn",ios::in);
c" Furnitures \n";ef;
filin.seekg(0);
for(i=1;i<16;i++)
{filin.getline(line,80);
cout<<line<<"\n";
}
filin.close();

c"\n\t Press 1 to go back :";
cin>>dd;
refresh;
if(dd=='1')
{goto set;}

else {
textcolor(12+128);clrscr();c"! INVALID INPUT ! Please retry";sound(1500);
delay(500);nosound();ll;l;sound(1500);delay(500);nosound();
      goto sss3;
      }
}//end end 1.3

/*---Case 1#4--------------------------*/
else if(x=='4')
{ sss4:
textcolor(11);clrscr();
filin.open("Mobile",ios::in);
c" Mobile Phones \n";ef;
filin.seekg(0);
for(i=1;i<16;i++)
{filin.getline(line,80);
cout<<line<<"\n";
}
filin.close();

c"\n\t Press 1 to go back :";
cin>>dd;
refresh;
if(dd=='1')
{goto set;}

else {
textcolor(12+128);clrscr();c"! INVALID INPUT ! Please retry";sound(1500);
delay(500);nosound();ll;l;sound(1500);delay(500);nosound();
      goto sss4;
      }
}//end end 1.4

/*---Case 1#5--------------------------*/
else if(x=='5')
{ sss5:
textcolor(11);clrscr();
filin.open("Gros",ios::in);
c" Grocery Items \n";ef;
filin.seekg(0);
for(i=1;i<16;i++)
{filin.getline(line,80);
cout<<line<<"\n";
}
filin.close();

c"\n\t Press 1 to go back :";
cin>>dd;
refresh;
if(dd=='1')
{goto set;}

else {
textcolor(12+128);clrscr();c"! INVALID INPUT ! Please retry";sound(1500);
delay(500);nosound();ll;l;sound(1500);delay(500);nosound();
      goto sss5;
      }
}//end end 1.5

/*---Case 1#6--------------------------*/
else if(x=='6')
{ sss6:
textcolor(11);clrscr();
filin.open("Book",ios::in);
c" Books \n";ef;
filin.seekg(0);
for(i=1;i<16;i++)
{filin.getline(line,80);
cout<<line<<"\n";
}
filin.close();

c"\n\t Press 1 to go back :";
cin>>dd;
refresh;
if(dd=='1')
{goto set;}

else {
textcolor(12+128);clrscr();c"! INVALID INPUT ! Please retry";sound(1500);
delay(500);nosound();ll;l;sound(1500);delay(500);nosound();
      goto sss6;
      }
}//end end 1.6

/*---Case 1#7--------------------------*/
else if(x=='7')
{ sss7:
textcolor(11);clrscr();
filin.open("Dvd",ios::in);
c" CDs/DVDs \n";ef;
filin.seekg(0);
for(i=1;i<16;i++)
{filin.getline(line,80);
cout<<line<<"\n";
}
filin.close();

c"\n\t Press 1 to go back :";
cin>>dd;
refresh;
if(dd=='1')
{goto set;}

else {
textcolor(12+128);clrscr();c"! INVALID INPUT ! Please retry";sound(1500);
delay(500);nosound();ll;l;sound(1500);delay(500);nosound();
      goto sss7;
      }
}//end end 1.7

/*---Case 1#8--------------------------*/
else if(x=='8')
{ sss8:
textcolor(11);clrscr();
filin.open("Move",ios::in);
c" Movie tickets \n";ef;
filin.seekg(0);
for(i=1;i<16;i++)
{filin.getline(line,80);
cout<<line<<"\n";
}
filin.close();

c"\n\t Press 1 to go back :";
cin>>dd;
refresh;
if(dd=='1')
{goto set;}

else {
textcolor(12+128);clrscr();c"! INVALID INPUT ! Please retry";sound(1500);
delay(500);nosound();ll;l;sound(1500);delay(500);nosound();
      goto sss8;
      }
}//end end 1.8



/*---Case 1#0--------------------------*/

	else if(x=='0')

{	sink:

textcolor(11); clrscr();
c" Are you sure you want to exit \?\n";
c"\t 1. Yes";s;ef;
c"\n\t 2. No";ef;
for(i=0;i<14;i++)
	{s;s;c"\t\t\n";}

c"\n\t Please enter your choice (1-2)                   : ";
      cin>>q;
 refresh;

/*---Exit#C1------------------------------*/

	if(q=='1')
      {textcolor(13+128);textbackground(0);clrscr();
      c" Program developer - Nitesh Kumar";
      for(i=0;i<15;i++)
	{s;s;c"\t\t\t\n";}

     c"\n\t\t\t THANK YOU FOR VISITING RELIANCE\t\t ";
      delay(3000);
       exit(0);}
      else if(q=='2')
      {goto set;
}
/*---Exit ERROR C1-------------------------*/
else {
textcolor(12+128);clrscr();c"! INVALID INPUT ! Please retry";sound(1500);
delay(500);nosound();ll;l;sound(1500);delay(500);nosound();
      goto sink;
      }
}
/*---ERROR main case 1--------------------*/

else{ textcolor(12+128);clrscr();c"! INVALID INPUT ! Please retry";sound(1500);
delay(500);nosound();ll;l;sound(1500);delay(500);nosound();
goto set;}

} //End of Main case 1

/*--- Case 5 Exit main----------------------------*/

else if(ch=='6')
{pink:
textcolor(11); clrscr();
c" Are you sure you want to exit \?\n";
c"\t 1. Yes";s;ef;
c"\n\t 2. No";ef;
for(i=0;i<14;i++)
	{s;s;c"\t\t\n";}

c"\n\t Please enter your choice (1-2)                   : ";
      cin>>p;      refresh;

      if(p=='1')
      {textcolor(13+128);textbackground(0);clrscr();
      c" Program developer - Nitesh Kumar";
      for(i=0;i<15;i++)
	{s;s;c"\t\t\t\n";}

     c"\n\t\t\t THANK YOU FOR VISITING RELIANCE\t\t ";
      delay(3000);
      exit(0);}

      else if(p=='2')
      {goto net;}

/*--- Exit ERROR Main------------------------*/

      else {textcolor(12+128);clrscr();c"! INVALID INPUT ! Please retry";sound(1500);
delay(500);nosound();ll;l;sound(1500);delay(500);nosound();
 goto pink;
      }

}// End of main Case 5

/*--- Case 3 Customer Bill calculator-------------*/

      else if(ch=='3')
      { hcl: 	//Bill Calculator Restart Label

      textcolor(11);clrscr();
      c" Customer's bill Calculator\n ";
c"\t Welcome to Customer's bill calculator. Please enter the   " ;
c"\n\t details asked in the further process.                     " ;
c"\n\t The customers will get a discount of 10% of the payable   ";
c"\n\t ammount if the purchase made of more than Rs.1000 only    ";
for(i=0;i<12;i++)
	{s;s;c"\t\t\t\n";}

c"\t Please enter first name of the customer : ";ef;ef;
cin>>nam;   refresh;

jail:
textcolor(11);clrscr();
c" Customer's bill Calculator\n ";

c"\t Please do not Enter any alphabets or special characters";
c"\n\t Entering such characters may cause unexpectable Error!.";

      for(i=0;i<14;i++)
	{s;s;c"\t\t\t\n";}

c"\t Please enter the number of products (max. 15)    : "; ef;ef;
cin>>xl;   refresh;//Case variable for number of items

//If Valid Case
if(xl>0 && xl<16)
{
textcolor(11);clrscr();

      c" Please Enter the cost now.\n ";
for(j=1;j<=xl;j++)
{
c"\t Cost of Product "<<j<<" is : ";ef;
cin>>cost[j];
sum=sum+cost[j];
}

//Filling Empty space

for(i=0;i<=(15-xl);i++)
{s;s;c"\t\t\t\n";}

//Setting Precision

cout.setf(ios::fixed);
cout.setf(ios::showpoint);

c"\t The Sum total= Rs "<<setprecision(2)<<sum<<" , Please wait.";s;
delay(2000);
refresh;
//Cases of Sum

tail:
if(sum>1000)
{desc=10;
 pay=sum-(sum*0.1);
 }
 else{desc=0; pay=sum;}
textcolor(11);clrscr();
cout<<" "<<nam<<"'s bill";
c"\n\t\t     Name of the customer: "<<nam;
c"\n\t\t     Number of products  : "<<xl;
c"\n\t\t     Grand total in Rs   : "<<sum;
c"\n\t\t     Discount given      : "<<desc<<"%";
c"\n\t\t     Net payable ammount : Rs. "<<pay;
sum=0;
/*char opt;
      for(i=0;i<9;i++)
	{s;s;c"\t\t\t\n";}
c"\t Paying Options ";
c"\n\t Press 1 for cash, 2 for Smart card: ";
cin>>opt;
if(opt=='1')
{char lov;
c"\t If you wish to print the bill press 1:";
cin>>lov;
refresh;
if(lov=='1')
{filout.open("PRN",ios::out);
filout<<" "<<nam<<"'s bill";
filout<<"\n\t     Name of the customer: "<<nam;
filout<<"\n\t     Number of products  : "<<xl;
filout<<"\n\t     Grand total in Rs   : "<<sum;
filout<<"\n\t     Discount given      : "<<desc<<"%";
filout<<"\n\t     Net payable ammount : Rs. "<<pay;
char cha;
while(filin.get(cha)!=0)
filout.put(cha);
filout.close(); goto foot;
}
else{goto foot;};  }
else if(opt=='2')
{}
else{textcolor(12+128);clrscr();c"! INVALID INPUT ! Please retry";
sound (1500);delay(500);nosound();ll;l;sound(1500);delay(500);nosound();
goto  tail;
}
foot:      textcolor(11);clrscr();
      c" Customer's bill Calculator\n ";
*/
      for(i=0;i<7;i++)
	{s;s;c"\t\t\t\n";}

c"\n\t To restart with a new customer press 1  ";s;ef;
c"\n\t To go back to the previous menu press 2 ";s;ef;
c"\n\t To exit from whole program press 3      ";s;ef;
c"\n\t Please enter your choice from (1-3)             : ";ef;
cin>>a;    refresh;
if(a=='1')
{goto hcl;}
else if(a=='2')
{goto net;}
else if(a=='3')
{ask:
textcolor(11); clrscr();
c" Are you sure you want to exit \?\n";
c"\t 1. Yes";s;s;ef;
c"\n\t 2. No";s;s;ef;
	for(i=0;i<14;i++)
	{s;s;c"\t\t\t\n";}
c"\t Please enter your choice (1-2)                   : ";
      cin>>pp; refresh;
      if(pp=='1')
      {textcolor(13+128);textbackground(0);clrscr();
      c" Program developer - Nitesh Kumar";
      for(i=0;i<15;i++)
	{s;s;c"\t\t\t\n";}
     c"\n\t\t\t THANK YOU FOR VISITING RELIANCE\t\t ";
      delay(3000);
      exit(0);}
      else if(pp=='2')
      {goto tail;}
     else {textcolor(12+128);clrscr();c"! INVALID INPUT ! Please retry";
sound(1500);delay(500);nosound();ll;l;sound(1500);delay(500);nosound();
goto ask;
}
}//end of ask

else{textcolor(12+128);clrscr();c"! INVALID INPUT ! Please retry";
sound (1500);delay(500);nosound();ll;l;sound(1500);delay(500);nosound();
goto  tail;
}

}//end of valid

else
{textcolor(12+128);clrscr();c"! INVALID INPUT ! Please retry";
sound(1500);delay(500);nosound();ll;l;sound(1500);delay(500);nosound();
goto jail;
}

}//end of


/*---Case 4 Smart card accounts-------------------*/

else if(ch=='4')
{cody:
textcolor(11);clrscr();
c" Please enter User Access Code (Press 1 to return) :";ef;
cin>>code;
if(code>5785 && code<5787)
{
textcolor(11);clrscr();
c" New Smart Card account ";
c"\n\t Smart card is a credit card applicable only for Reliance " ;
c"\n\t retail stores all over India.After every purchase instead " ;
c"\n\t of paying cash, the amount can be payed using Smart card, ";
c"\n\t having the required positive balance. ";
c"\n\n\t Please Enter the name of the smart card holder :";ef;
gets(smc.name);
c"\t Telphone(with STD code)/Mobile no :";ef;
gets(smc.tel);
c"\t Choose a six letter security password :";ef;
gets(smc.secpass);
c"\t Please enter the account starter balance :";ef;
cin>>smc.bal;
filout.open("Smart",ios::app);
filout<<" Name     :"<<smc.name<<"\n Phone no :"<<smc.tel<<"\n";
filout<<" Password :"<<smc.secpass<<"\n Balance  :Rs."<<smc.bal<<"\n";
filout<<"----------------------------------------------------------\n";
filout.close();
	    delay(2000);goto net;
	    }
	    else if (code==1)
	    {goto net;}
else
{textcolor(12+128);clrscr();c"! INVALID INPUT ! Please retry";sound(1500);
delay(500);nosound();ll;l;sound(1500);delay(500);nosound();
      goto cody;
      }

      }// End of Main case 4 SCA

char v,idd; char found='f',confirm='n';

/*---case 5 Delete the products-----------*/

 if(ch=='5')
{delet:
textcolor(11);clrscr();
c" Delete existing Products | Please choose a catogary\n";
c"\t1 . Clothes\t\t\t\n";ef;
c" \t2 . Electronics\t\t\n";ef;
c" \t3 . Funitures\t\t\t\n";ef;
c" \t4 . Mobile Phones\t\t\n";ef;
c" \t5 . Grocery\t\t\t\t\n";ef;
c" \t6 . Books\t\t\t\n";ef;
c" \t7 . CD-ROMs\\DVDs\t\t\n";ef;
c" \t8 . Movie Tickets\t\t\n";ef;
c" \t9 . Go to previous menu\t\t\n";ef;
c" \t0 . Exit from whole program\t\t\n";ef;
	for(i=0;i<5;i++)
	{s;s;c"\t\t\t\n";}
c"\n\t Please enter your choice (1-0)                   : ";
cin>>v;
// refresh;
 if(v=='1')
 {ifstream fio("cloth",ios::in);
 ofstream file("temp", ios::out);
 textcolor(11);clrscr();
 c" Clothes | Please enter the product ID :";
cin>>idd;
while(!fio.eof())
{fio.read((char*) &s2, sizeof(s2));
if(s2.proid==idd)
{c" Product ID: "<<s2.proid<<" \tName: "<<s2.proname;
c"  \tBrand: "<<s2.pbrand<<"\n Cost: Rs."<<s2.procost<<".00 \tOther Detail :"<<s1.other<<endl;
c"----------------------------------------------------------\n";
found=='t';
c"\n Are you sure you want to delete this record (y/n) :";
cin>>confirm;
if(confirm=='n'||confirm=='N')
{file.write((char*) &s2, sizeof(s2));
}
else if(confirm=='y'||confirm=='Y')
{file.write((char*) &s2, sizeof(s2));}
else{ textcolor(12+128);clrscr();c"! INVALID INPUT ! Please retry";sound(1500);
delay(500);nosound();ll;l;sound(1500);delay(500);nosound();
goto delet;}
}
if(found=='f')
{textcolor(11);clrscr();
c"\n Invalid product ID ";ef;ef;ef;fio.close();file.close();
delay(1500);
goto delet;}
fio.close();
file.close();
remove("cloth");
rename("temp","cloth");
}
}}
/*---case 2 Addition of new products to the list-*/

else if(ch=='2')
{ pro:
textcolor(11);clrscr();
c" Add new Products|Please select the catagory\n ";
c"\t1 . Clothes\t\t\t\n";ef;
c" \t2 . Electronics\t\t\n";ef;
c" \t3 . Funitures\t\t\t\n";ef;
c" \t4 . Mobile Phones\t\t\n";ef;
c" \t5 . Grocery\t\t\t\t\n";ef;
c" \t6 . Books\t\t\t\n";ef;
c" \t7 . CD-ROMs\\DVDs\t\t\n";ef;
c" \t8 . Movie Tickets\t\t\n";ef;
c" \t9 . Go to previous menu\t\t\n";ef;
c" \t0 . Exit from whole program\t\t\n";ef;
	for(i=0;i<5;i++)
	{s;s;c"\t\t\t\n";}
c"\n\t Please enter your choice (1-0)                   : ";
cin>>ax;
 refresh;

/*---Case 2#9--------------------------*/

if(ax=='9')
{
goto net;}

/*---Case 2#2--------------------------*/

else if(ax=='2')
{ss1:
textcolor(11);clrscr();
c" Electronics \n";
c"\t Please enter the Details about the product.\n";ef;
c"\t Product ID:";ef;
cin>>s1.proid;
c"\t Product Brand: ";ef;
gets(s1.pbrand);
c"\t Product name: ";ef;
gets(s1.proname);
c"\t Product Cost: Rs.";ef;
cin>>s1.procost;
c"\t Any other detail (mark - if none):";ef;
gets(s1.other);
filout.open("Electra",ios::app);
filout<<" Product ID: "<<s1.proid<<" \tName: "<<s1.proname;
filout<<"  \tBrand: "<<s1.pbrand<<"\n Cost: Rs."<<s1.procost<<".00 \tOther Detail :"<<s1.other<<endl;
filout<<"----------------------------------------------------------\n";
filout.close();
c"\n\n\t To enter more press 1\n";
c"\t To go back to previous menu press 2\n";
c"\t To exit from whole program press 3: ";
cin>>rt;
refresh;
if(rt=='1')
{goto ss1;}
else if(rt=='2')
{goto pro;}
else if(rt=='3')
{	s1rink:

textcolor(11); clrscr();
c" Are you sure you want to exit \?\n";
c"\t 1. Yes";s;ef;
c"\n\t 2. No";ef;
for(i=0;i<14;i++)
	{s;s;c"\t\t\n";}

c"\n\t Please enter your choice (1-2)                   : ";
      cin>>q2;
 refresh;

/*---Exit#C2.2------------------------------*/

	if(q2=='1')
      {textcolor(13+128);textbackground(0);clrscr();
      c" Program developer - Nitesh Kumar";
      for(i=0;i<15;i++)
	{s;s;c"\t\t\t\n";}

     c"\n\t\t\t THANK YOU FOR VISITING RELIANCE\t\t ";
      delay(3000);
       exit(0);}
      else if(q2=='2')
      {goto pro;
}
/*---Exit ERROR C2.2-------------------------*/
else {
textcolor(12+128);clrscr();c"! INVALID INPUT ! Please retry";sound(1500);
delay(500);nosound();ll;l;sound(1500);delay(500);nosound();
      goto s1rink;
      }
}
else{ textcolor(12+128);clrscr();c"! INVALID INPUT ! Please retry";sound(1500);
delay(500);nosound();ll;l;sound(1500);delay(500);nosound();
goto pro;}
}//end of 2.2


/*---Case 2#1--------------------------*/

else if(ax=='1')
{ss2:
textcolor(11);clrscr();
c" Cloths \n";
c"\t Please enter the Details about the product.\n";ef;
c"\t Product ID:";ef;
cin>>s2.proid;
c"\t Product Brand: ";ef;
gets(s2.pbrand);
c"\t Product name: ";ef;
gets(s2.proname);
c"\t Product Cost: Rs.";ef;
cin>>s2.procost;
c"\t Any other detail (mark - if none):";ef;
gets(s2.other);
filout.open("Cloth",ios::app);
filout<<" Product ID: "<<s2.proid<<" \tName: "<<s2.proname;
filout<<"  \tBrand: "<<s2.pbrand<<"\n Cost: Rs."<<s2.procost<<".00 \tOther Detail :"<<s2.other<<endl;
filout<<"----------------------------------------------------------\n";
filout.close();
c"\n\n\t To enter more press 1\n";
c"\t To go back to previous menu press 2\n";
c"\t To exit from whole program press 3: ";
cin>>rt;
refresh;
if(rt=='1')
{goto ss2;}
else if(rt=='2')
{goto pro;}
else if(rt=='3')
{	s2rink:

textcolor(11); clrscr();
c" Are you sure you want to exit \?\n";
c"\t 1. Yes";s;ef;
c"\n\t 2. No";ef;
for(i=0;i<14;i++)
	{s;s;c"\t\t\n";}

c"\n\t Please enter your choice (1-2)                   : ";
      cin>>q2;
 refresh;

/*---Exit#C2.2------------------------------*/

	if(q2=='1')
      {textcolor(13+128);textbackground(0);clrscr();
      c" Program developer - Nitesh Kumar";
      for(i=0;i<15;i++)
	{s;s;c"\t\t\t\n";}

     c"\n\t\t\t THANK YOU FOR VISITING RELIANCE\t\t ";
      delay(3000);
       exit(0);}
      else if(q2=='2')
      {goto pro;
}
/*---Exit ERROR C2.2-------------------------*/
else {
textcolor(12+128);clrscr();c"! INVALID INPUT ! Please retry";sound(1500);
delay(500);nosound();ll;l;sound(1500);delay(500);nosound();
      goto s2rink;
      }
}
else{ textcolor(12+128);clrscr();c"! INVALID INPUT ! Please retry";sound(1500);
delay(500);nosound();ll;l;sound(1500);delay(500);nosound();
goto pro;}
}//end of 2.1


/*---Case 2#3--------------------------*/

else if(ax=='3')
{ss3:
textcolor(11);clrscr();
c" Furnitures \n";
c"\t Please enter the Details about the product.\n";ef;
c"\t Product ID:";ef;
cin>>s3.proid;
c"\t Product Brand: ";ef;
gets(s3.pbrand);
c"\t Product name: ";ef;
gets(s3.proname);
c"\t Product Cost: Rs.";ef;
cin>>s3.procost;
c"\t Any other detail (mark - if none):";ef;
gets(s3.other);
filout.open("Furn",ios::app);
filout<<" Product ID: "<<s3.proid<<" \tName: "<<s3.proname;
filout<<"  \tBrand: "<<s3.pbrand<<"\n Cost: Rs."<<s3.procost<<".00 \tOther Detail :"<<s3.other<<endl;
filout<<"----------------------------------------------------------\n";
filout.close();
c"\n\n\t To enter more press 1\n";
c"\t To go back to previous menu press 2\n";
c"\t To exit from whole program press 3: ";
cin>>rt;
refresh;
if(rt=='1')
{goto ss3;}
else if(rt=='2')
{goto pro;}
else if(rt=='3')
{	s3rink:

textcolor(11); clrscr();
c" Are you sure you want to exit \?\n";
c"\t 1. Yes";s;ef;
c"\n\t 2. No";ef;
for(i=0;i<14;i++)
	{s;s;c"\t\t\n";}

c"\n\t Please enter your choice (1-2)                   : ";
      cin>>q2;
 refresh;

/*---Exit#C2.3------------------------------*/

	if(q2=='1')
      {textcolor(13+128);textbackground(0);clrscr();
      c" Program developer - Nitesh Kumar";
      for(i=0;i<15;i++)
	{s;s;c"\t\t\t\n";}

     c"\n\t\t\t THANK YOU FOR VISITING RELIANCE\t\t ";
      delay(3000);
       exit(0);}
      else if(q2=='2')
      {goto pro;
}
/*---Exit ERROR C2.3-------------------------*/
else {
textcolor(12+128);clrscr();c"! INVALID INPUT ! Please retry";sound(1500);
delay(500);nosound();ll;l;sound(1500);delay(500);nosound();
      goto s3rink;
      }
}
else{ textcolor(12+128);clrscr();c"! INVALID INPUT ! Please retry";sound(1500);
delay(500);nosound();ll;l;sound(1500);delay(500);nosound();
goto pro;}
}//end of 2.3


/*---Case 2#4--------------------------*/

else if(ax=='4')
{ss4:
textcolor(11);clrscr();
c" Mobile Phones \n";
c"\t Please enter the Details about the product.\n";ef;
c"\t Product ID:";ef;
cin>>s4.proid;
c"\t Product Brand: ";ef;
gets(s4.pbrand);
c"\t Product name: ";ef;
gets(s4.proname);
c"\t Product Cost: Rs.";ef;
cin>>s4.procost;
c"\t Any other detail (mark - if none):";ef;
gets(s4.other);
filout.open("Mobile",ios::app);
filout<<" Product ID: "<<s4.proid<<" \tName: "<<s4.proname;
filout<<"  \tBrand: "<<s4.pbrand<<"\n Cost: Rs."<<s4.procost<<".00 \tOther Detail :"<<s4.other<<endl;
filout<<"----------------------------------------------------------\n";
filout.close();
c"\n\n\t To enter more press 1\n";
c"\t To go back to previous menu press 2\n";
c"\t To exit from whole program press 3: ";
cin>>rt;
refresh;
if(rt=='1')
{goto ss4;}
else if(rt=='2')
{goto pro;}
else if(rt=='3')
{	s4rink:

textcolor(11); clrscr();
c" Are you sure you want to exit \?\n";
c"\t 1. Yes";s;ef;
c"\n\t 2. No";ef;
for(i=0;i<14;i++)
	{s;s;c"\t\t\n";}

c"\n\t Please enter your choice (1-2)                   : ";
      cin>>q2;
 refresh;

/*---Exit#C2.4------------------------------*/

	if(q2=='1')
      {textcolor(13+128);textbackground(0);clrscr();
      c" Program developer - Nitesh Kumar";
      for(i=0;i<15;i++)
	{s;s;c"\t\t\t\n";}

     c"\n\t\t\t THANK YOU FOR VISITING RELIANCE\t\t ";
      delay(3000);
       exit(0);}
      else if(q2=='2')
      {goto pro;
}
/*---Exit ERROR C2.4-------------------------*/
else {
textcolor(12+128);clrscr();c"! INVALID INPUT ! Please retry";sound(1500);
delay(500);nosound();ll;l;sound(1500);delay(500);nosound();
      goto s4rink;
      }
}
else{ textcolor(12+128);clrscr();c"! INVALID INPUT ! Please retry";sound(1500);
delay(500);nosound();ll;l;sound(1500);delay(500);nosound();
goto pro;}
}//end of 2.4


/*---Case 2#5--------------------------*/

else if(ax=='5')
{ss5:
textcolor(11);clrscr();
c" Grocery Items \n";
c"\t Please enter the Details about the product.\n";ef;
c"\t Product ID:";ef;
cin>>s5.proid;
c"\t Product Brand: ";ef;
gets(s5.pbrand);
c"\t Product name: ";ef;
gets(s5.proname);
c"\t Product Cost: Rs.";ef;
cin>>s5.procost;
c"\t Any other detail (mark - if none):";ef;
gets(s5.other);
filout.open("Gros",ios::app);
filout<<" Product ID: "<<s5.proid<<" \tName: "<<s5.proname;
filout<<"  \tBrand: "<<s5.pbrand<<"\n Cost: Rs."<<s5.procost<<".00 \tOther Detail :"<<s5.other<<endl;
filout<<"----------------------------------------------------------\n";
filout.close();
c"\n\n\t To enter more press 1\n";
c"\t To go back to previous menu press 2\n";
c"\t To exit from whole program press 3: ";
cin>>rt;
refresh;
if(rt=='1')
{goto ss5;}
else if(rt=='2')
{goto pro;}
else if(rt=='3')
{	s5rink:

textcolor(11); clrscr();
c" Are you sure you want to exit \?\n";
c"\t 1. Yes";s;ef;
c"\n\t 2. No";ef;
for(i=0;i<14;i++)
	{s;s;c"\t\t\n";}

c"\n\t Please enter your choice (1-2)                   : ";
      cin>>q2;
 refresh;

/*---Exit#C2.5------------------------------*/

	if(q2=='1')
      {textcolor(13+128);textbackground(0);clrscr();
      c" Program developer - Nitesh Kumar";
      for(i=0;i<15;i++)
	{s;s;c"\t\t\t\n";}

     c"\n\t\t\t THANK YOU FOR VISITING RELIANCE\t\t ";
      delay(3000);
       exit(0);}
      else if(q2=='2')
      {goto pro;
}
/*---Exit ERROR C2.5-------------------------*/
else {
textcolor(12+128);clrscr();c"! INVALID INPUT ! Please retry";sound(1500);
delay(500);nosound();ll;l;sound(1500);delay(500);nosound();
      goto s5rink;
      }}
else{ textcolor(12+128);clrscr();c"! INVALID INPUT ! Please retry";sound(1500);
delay(500);nosound();ll;l;sound(1500);delay(500);nosound();
goto pro;}
}//end of 2.5
/*---Case 2#6--------------------------*/
else if(ax=='6')
{ss6:
textcolor(11);clrscr();
c" Books \n";
c"\t Please enter the Details about the product.\n";ef;
c"\t Product ID:";ef;
cin>>s6.proid;
c"\t Product Brand: ";ef;
gets(s6.pbrand);
c"\t Product name: ";ef;
gets(s6.proname);
c"\t Product Cost: Rs.";ef;
cin>>s6.procost;
c"\t Any other detail (mark - if none):";ef;
gets(s6.other);
filout.open("Book",ios::app);
filout<<" Product ID: "<<s6.proid<<" \tName: "<<s6.proname;
filout<<"  \tBrand: "<<s6.pbrand<<"\n Cost: Rs."<<s6.procost<<".00 \tOther Detail :"<<s6.other<<endl;
filout<<"----------------------------------------------------------\n";
filout.close();
c"\n\n\t To enter more press 1\n";
c"\t To go back to previous menu press 2\n";
c"\t To exit from whole program press 3: ";
cin>>rt;
refresh;
if(rt=='1')
{goto ss6;}
else if(rt=='2')
{goto pro;}
else if(rt=='3')
{	s6rink:
textcolor(11); clrscr();
c" Are you sure you want to exit \?\n";
c"\t 1. Yes";s;ef;
c"\n\t 2. No";ef;
for(i=0;i<14;i++)
	{s;s;c"\t\t\n";}
c"\n\t Please enter your choice (1-2)                   : ";
      cin>>q2;
 refresh;
/*---Exit#C2.6------------------------------*/

	if(q2=='1')
      {textcolor(13+128);textbackground(0);clrscr();
      c" Program developer - Nitesh Kumar";
      for(i=0;i<15;i++)
	{s;s;c"\t\t\t\n";}
   c"\n\t\t\t THANK YOU FOR VISITING RELIANCE\t\t ";
      delay(3000);
       exit(0);}
      else if(q2=='2')
      {goto pro;}
/*---Exit ERROR C2.6-------------------------*/
else {
textcolor(12+128);clrscr();c"! INVALID INPUT ! Please retry";sound(1500);
delay(500);nosound();ll;l;sound(1500);delay(500);nosound();
      goto s6rink;
      }}
else{ textcolor(12+128);clrscr();c"! INVALID INPUT ! Please retry";sound(1500);
delay(500);nosound();ll;l;sound(1500);delay(500);nosound();
goto pro;}
}//end of 2.6
/*---Case 2#7--------------------------*/
else if(ax=='7')
{ss7:
textcolor(11);clrscr();
c" CDs/DVDs \n";
c"\t Please enter the Details about the product.\n";ef;
c"\t Product ID:";ef;
cin>>s7.proid;
c"\t Product Brand: ";ef;
gets(s7.pbrand);
c"\t Product name: ";ef;
gets(s7.proname);
c"\t Product Cost: Rs.";ef;
cin>>s7.procost;
c"\t Any other detail (mark - if none):";ef;
gets(s7.other);
filout.open("Dvd",ios::app);
filout<<" Product ID: "<<s7.proid<<" \tName: "<<s7.proname;
filout<<"  \tBrand: "<<s7.pbrand<<"\n Cost: Rs."<<s7.procost<<".00 \tOther Detail :"<<s7.other<<endl;
filout<<"----------------------------------------------------------\n";
filout.close();
c"\n\n\t To enter more press 1\n";
c"\t To go back to previous menu press 2\n";
c"\t To exit from whole program press 3: ";
cin>>rt;
refresh;
if(rt=='1')
{goto ss7;}
else if(rt=='2')
{goto pro;}
else if(rt=='3')
{	s7rink:
textcolor(11); clrscr();
c" Are you sure you want to exit \?\n";
c"\t 1. Yes";s;ef;
c"\n\t 2. No";ef;
for(i=0;i<14;i++)
	{s;s;c"\t\t\n";}
c"\n\t Please enter your choice (1-2)                   : ";
      cin>>q2;
 refresh;
/*---Exit#C2.7------------------------------*/
	if(q2=='1')
      {textcolor(13+128);textbackground(0);clrscr();
      c" Program developer - Nitesh Kumar";
      for(i=0;i<15;i++)
	{s;s;c"\t\t\t\n";}
c"\n\t\t\t THANK YOU FOR VISITING RELIANCE\t\t ";
      delay(3000);
       exit(0);}
      else if(q2=='2')
      {goto pro;}
/*---Exit ERROR C2.7-------------------------*/
else {
textcolor(12+128);clrscr();c"! INVALID INPUT ! Please retry";sound(1500);
delay(500);nosound();ll;l;sound(1500);delay(500);nosound();
      goto s7rink;
      }}
else{ textcolor(12+128);clrscr();c"! INVALID INPUT ! Please retry";sound(1500);
delay(500);nosound();ll;l;sound(1500);delay(500);nosound();
goto pro;}
}//end of 2.7
/*---Case 2#8--------------------------*/
else if(ax=='8')
{ss8:
textcolor(11);clrscr();
c" Movie Tickets \n";
c"\t Please enter the Details about the product.\n";ef;
c"\t Product ID:";ef;
cin>>s8.proid;
c"\t Producer: ";ef;
gets(s8.pbrand);
c"\t Movie name: ";ef;
gets(s8.proname);
c"\t Ticket Cost: Rs.";ef;
cin>>s8.procost;
c"\t Any other detail (mark - if none):";ef;
gets(s8.other);
filout.open("Move",ios::app);
filout<<" Product ID: "<<s8.proid<<" \tMovie name: "<<s8.proname;
filout<<"  \tProducer: "<<s8.pbrand<<"\n Cost: Rs."<<s8.procost<<".00 \tOther Detail :"<<s8.other<<endl;
filout<<"----------------------------------------------------------\n";
filout.close();
c"\n\n\t To enter more press 1\n";
c"\t To go back to previous menu press 2\n";
c"\t To exit from whole program press 3: ";
cin>>rt;
refresh;
if(rt=='1')
{goto ss8;}
else if(rt=='2')
{goto pro;}
else if(rt=='3')
{	s8rink:
textcolor(11); clrscr();
c" Are you sure you want to exit \?\n";
c"\t 1. Yes";s;ef;
c"\n\t 2. No";ef;
for(i=0;i<14;i++)
	{s;s;c"\t\t\n";}
c"\n\t Please enter your choice (1-2)                   : ";
      cin>>q2;
 refresh;
/*---Exit#C2.8------------------------------*/
	if(q2=='1')
      {textcolor(13+128);textbackground(0);clrscr();
      c" Program developer - Nitesh Kumar";
      for(i=0;i<15;i++)
	{s;s;c"\t\t\t\n";}
c"\n\t\t\t THANK YOU FOR VISITING RELIANCE\t\t ";
      delay(3000);
       exit(0);}
      else if(q2=='2')
      {goto pro;
}
/*---Exit ERROR C2.8-------------------------*/
else {
textcolor(12+128);clrscr();c"! INVALID INPUT ! Please retry";sound(1500);
delay(500);nosound();ll;l;sound(1500);delay(500);nosound();
      goto s8rink;
      }}
else{ textcolor(12+128);clrscr();c"! INVALID INPUT ! Please retry";sound(1500);
delay(500);nosound();ll;l;sound(1500);delay(500);nosound();
goto pro;}
}//end of 2.8
/*---Case 2#0--------------------------*/
	else if(ax=='0')
{	drink:
textcolor(11); clrscr();
c" Are you sure you want to exit \?\n";
c"\t 1. Yes";s;ef;
c"\n\t 2. No";ef;
for(i=0;i<14;i++)
	{s;s;c"\t\t\n";}
c"\n\t Please enter your choice (1-2)                   : ";
      cin>>q2;
 refresh;
/*---Exit#C2------------------------------*/
	if(q2=='1')
      {textcolor(13+128);textbackground(0);clrscr();
      c" Program developer - Nitesh Kumar";
      for(i=0;i<15;i++)
	{s;s;c"\t\t\t\n";}
   c"\n\t\t\t THANK YOU FOR VISITING RELIANCE\t\t ";
      delay(3000);
       exit(0);}
      else if(q2=='2')
      {goto pro;}
/*---Exit ERROR C2-------------------------*/
else {
textcolor(12+128);clrscr();c"! INVALID INPUT ! Please retry";sound(1500);
delay(500);nosound();ll;l;sound(1500);delay(500);nosound();
      goto drink;
      }}
/*---ERROR main case 2--------------------*/
else{ textcolor(12+128);clrscr();c"! INVALID INPUT ! Please retry";sound(1500);
delay(500);nosound();ll;l;sound(1500);delay(500);nosound();
goto pro;}
}//End of main case 2
/*---Final case of main ERROR---------------*/
	else
      {textcolor(12+128);clrscr();c"! INVALID INPUT ! Please retry";sound(1500);
delay(500);nosound();ll;l;sound(1500);delay(500);nosound();
goto net;// Returning back to origin
}getch();}
//Functions other than main()
/*---Graphic Function-------------------*/
void texta(void)
{int style;
   int gdriver = DETECT, gmode, errorcode;
   int midx, midy, x[10],y[10],x_center=520,y_center=380,rad=100;
   int size = 1,i,j; char *fname[] = { "Welcome to Reliance Retail"};
 initgraph(&gdriver, &gmode, "");
   midx = getmaxx() / 2;
   midy = getmaxy() / 2;
style= 10;            setbkcolor(9);
settextjustify(CENTER_TEXT, CENTER_TEXT);
   settextstyle(style, HORIZ_DIR, size);
   outtextxy(midx, midy, fname[0]);
    char *gname[] = {"Program Developer: Nitesh Kumar"};
  settextjustify(CENTER_TEXT, CENTER_TEXT);
   settextstyle(0, 0, 1);
   outtextxy(getmaxx()/2, getmaxy()/4, gname[0]);
for (i=0;i<10;i++)
    { x[i]=x_center+rad*cos(36*i*3.14/180);
      y[i]=y_center+rad*sin(36*i*3.14/180);
    }
//----Graphic Function Sound Effect--------------
  for (i=0;i<10;i++)
       for (j=0;j<10;j++)
	  line(x[i],y[i],x[j],y[j]); delay(1000);
	  for(i=1;i<31;i++)
	  {sound(100*i);delay(5);}
	  for(i=30;i>0;i--)
	  {sound(100*i);delay(5);}
	    for(i=1;i<31;i++)
	  {sound(100*i);delay(5);}
	  for(i=30;i>0;i--)
	  {sound(100*i);delay(5);}
	   sound(3000);delay(200);nosound(); delay(50);
	   sound(3000);delay(200);nosound();
	  nosound();	//End of Sound
  delay(2000);
closegraph();
return;
}
//Copyrights Reserved
/*--------------END OF THE PROGRAM---------------*/
/*-------------------Thank You-------------------*/
