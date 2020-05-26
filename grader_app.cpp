#include <iostream>
#include <math.h>
using namespace std;

int main(){
	
	int grade;
	char opt;
	
do{

	cout<<"enter a grade (1-100)\n";
	cin>>grade;
	
	if(grade>=90){
		
		cout<<"A+!, you've scored 90% or higher\n";
	}
	
	else if(grade >= 87 && grade <= 89 ){
		
		cout<<"Grade: B+, you've scored 87-89%\n ";
	
	}
	
	else if(grade >= 83 && grade <= 86 ){
		
		cout<<"Grade: B, you've scored 83-86%\n";
	
	}
	else if(grade >= 80 && grade <= 82 ){
		
		cout<<"Grade: B-, you've scored 80-82%\n ";
	
	}
	else if(grade >= 77 && grade <= 79 ){
		
		cout<<"C+, you've scored 77-79%\n ";
	
	}
	else if(grade >= 60 && grade <= 72 ){
		
		cout<<"Grade:C- , you've scored 60-72%\n ";
	
	}
	else if(grade <= 60 ){
		
		cout<<"Grade: F\n";
	
	}
	else{
		
		cout<<"please enter a number";
	}
cout<<	"would you like to  calculate another grade(Y(yes) N(No))?\n";
cin>>opt;
}while(opt =='y' || opt=='Y');
return 0;
}




	
