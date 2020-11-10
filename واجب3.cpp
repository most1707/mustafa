/*Nmame: Nmame:abdalah ahmed abdalah ahmed*/
/*specialization: computer engineer*/
/*level: sucond*/

#include <iostream>                                 /*ستدعاء لمكتبة الادخال و الاخراج*/
using namespace std;

int main()                                         /*الدالة الرئيسية للبرنامج*/
{
	string y;                                                           
	string n;                  
	int id,x,stu[10],sub[8],i ;	
	double sum =0,count=8, average;

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

     cout<<"enter materials degrees: "<<endl;
    for ( i = 0; i < 8; i++)
    {
        cin>>materials[i]; /* شرط ادخال درجات مواد الطلاب */
    }
    for ( i = 0; i < 8; i++)
    {
        sum = sum+materials[i]; /*ايجاد المجموع و ايجاد المتوسط للدرجات */
    }
    cout<<"Sum: "<<sum<<endl;
    average=sum/count;
    cout<<"Average: "<<average<<endl;

	}

	return 0;
}                                                    /*نهايه البرنامج*/ 
