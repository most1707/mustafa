/*Nmame: Nmame:abdalah ahmed abdalah ahmed*/
/*specialization: computer engineer*/
/*level: sucond*/

#include <iostream>                                 /*ستدعاء لمكتبة الادخال و الاخراج*/
using namespace std;

double sum=0,count=8,average;
void start(int stu[10]) /* دالة ادخال مصفوفة الطلاب */
{   
    
}

void middle(int s[8]) /* دالة ادخال مصفوفة الدرجات */
{
    
    cout<<"Insert your materials degrees: "<<endl;
    for (int y = 0; y < 8; y++)
    {
        cin>>s[y];
    }
    for (int i = 0; i < 8; i++)
    {
        cout<<"Students "<<": "<<s[i]<<endl;
        sum = sum+s[i];
    
    }
    cout<<"Sum: "<<sum<<endl;
    average=sum/count;
}

void end(string n, int id, char d, int deg ,double a) /* دالة المخرجات */
{
    
    average=sum/count;
    cout<<"--------------"<<endl;
    cout<<"Name: "<<n<<endl;
    cout<<"University ID: "<<id<<endl;
    cout<<"Department: "<<d<<endl;
    cout<<"Student Degree: "<<deg<<endl;
    cout<<"Materials average: "<<a<<endl;
}


int main()                                         /*الدالة الرئيسية للبرنامج*/
{
	string y;                                                           
	string n;                  
	int id,x,stu[10],sub[8],i ;	

	for (int j =j ,j<10,j++){
	
	cout<<"name: "; cin>>n;                          
	cout<<"id: ";cin>>id;                                      /*ادخال اسم والرقم الجامعي للمستخدم*/
	cout<<x<<"enter A , T , c ";
	cin>>y;
	if(y=="A")                                   
	   cout<<"control"<<endl;
	else if(y=="T")
	   cout<<"communication"<<endl;
	else if(y=="C")
	  cout<<"computer"<<endl;                      /*اخراج الي اي قسم ينتمي*/ 
    cout<<"grade supgeict: ";
	cin>>x;
	if((x>=90)&&(x)<=100)
	cout<<"A";
	else if((x>=80)&&(x)<90)
	cout<<"B";
	else if((x>=70)&&(x)<80)
	cout<<"C";
	else if((x>=60)&&(x)<70)
	cout<<"D";
	else if((x>=50)&&(x)<60)                        /*ادخال درجه الماده */ 
	cout<<"F"; 

    middle(sub);
    end(n,id,d,degree,ave);
    start(stu);

	}

	return 0;
}                                                    /*نهايه البرنامج*/ 
