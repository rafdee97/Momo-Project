#include <iostream>
using namespace std;
void authentication();
void reserting();
void checking_balance(float bal, string pin);
void sending_money(float bal, string pin);

void intro(float bal, string pin);

//default pin 0000
//bal GHC 1000
//AFTER THRE WRON PIN END
// untill exit  program should run.

void authentication(float bal ,string pin ){
	
	cout<<"Enter momo pin to approve withrawal of GHC : 200 from UEB32100000  VENTURES "<<endl;
	 
	 string a ;
	 cin>>a;
	 if (a==pin){
	 	cout<<"transaction approved"<<endl;
	 	intro(bal,pin);
	 }
	 else{
	 	cout<<"pin mismatch transaction failed "<<endl;
	 	intro(bal,pin);
	 }
}


void reserting(float bal ,string pin){
	
	cout<<"enter pin : ";   
	string p;
	cin>>p;
		if (p==pin){
	cout<<"enter new pin : "; 
	string pa;
	cin>>pa;	
	string b;
		cout<<"enter pin again  : "; cin>>b;
		if(pa==b){
				cout<<"pin changed \n\n ";
		intro(bal,pa);
		}
		else{
				cout<<"pin mismatch : "; cin>>p;
				 	 reserting(bal,pin);
				 
				 	cout<<"enter new pin : "; cin>>pa;	
		cout<<"enter pin again  : "; cin>>b;
		if(p==b){
				cout<<"pin changed "; cin>>p;
		intro(bal,pin);
		}
		else{
				cout<<"pin mismatch : "; cin>>p;
				 	 reserting(bal,pin);
		}	
	}}else{
			cout<<"pin mismatch : "; cin>>p;
			 reserting(bal,pin);
	}
	
	
}



void sending_money(float bal, string pin){
	
	cout<<"Enter reciever's number"<<endl;
	
	int n1,n2;
	cin>>n1;
	cout<<"confirm the mobile number"<<endl;
	cin>>n2;
	if(n1==n2){
		cout<<"enter amount ";
		float am;
		cin>>am;
		if (am>bal){
			cout<<"Insuficient balance to perform this transaction";
		}else{
			cout<<"Enter momo pin"<<endl;
	string p;
	cin>>p;


	//1
	if (pin==p){
		float d = bal-am;
		
	cout<<"An amount of GHC : "<<am<<" has been sent to "<<n2<<" Curent Balance : GHC : "<<bal<<" available balance : GHC : "<<d<<endl; 
	intro(d,pin);
	
	}else {
		cout<<"incorect pin  \n enter pin again "<<endl;
	
	string a;
		cin>>a;
	//2	
			if (pin==a){
		float d = bal-am;
	cout<<"An amount of GHC : "<<am<<" has been sent to "<<n2<<" Curent Balance : GHC : "<<bal<<" available balance : GHC : "<<d<<endl; 
	intro(d,pin);
	}else {
		cout<<"incorect pin  \n enter pin again "<<endl;
	
	string b;
		cin>>b;
	//3	
			if (pin==b){
		float d = bal-am;
	cout<<"An amount of GHC : "<<am<<" has been sent to "<<n2<<" Curent Balance : GHC : "<<bal<<" available balance : GHC : "<<d<<endl; 
	intro(d,pin);
	
	}else {
		cout<<" sorry , multiple attemps has course your account to be blocked \n contact customer care for more details "<<endl;
	
	
		//.checking_balance( bal, pin);
		
	}
	
	
	
		}
	

	}}}
	else{
		//	intro(d,pin);
		cout<<"number mismatch";
	}
	
	
	
	
	
	
	
}














void checking_balance( float bal, string pin){
	
	cout<<"Enter momo pin"<<endl;
	string p;
	cin>>p;


	//1
	if (pin==p){
	cout<<"Curent Balance : GHC : "<<bal<<endl; 
	
	}else {
		cout<<"incorect pin  \n enter pin again "<<endl;
	
	string a;
		cin>>a;
	//2	
			if (pin==a){
	cout<<"Curent Balance : GHC : "<<bal<<endl; 
	
	}else {
		cout<<"incorect pin  \n enter pin again "<<endl;
	
	string b;
		cin>>b;
	//3	
			if (pin==b){
	cout<<"Curent Balance : GHC : "<<bal<<endl; 
	
	}else {
		cout<<" sorry , myultiple attemps has course your account to be blocked \n contact customer care for more details "<<endl;
	
	
		//.checking_balance( bal, pin);
		
	}
	
		}
		
		//.checking_balance( bal, pin);
		
	}
	
	
}

void intro(float bal, string pin){
	
		cout<<"HELLO PLEASE WELCOME EDEMOND'S MOMO SERVICES \n PLEASE SELECT AN OPTION"<<endl;
	
	cout<<"1.authentication \n2.reset or change pin \n3.check balance \n4.send money"<<endl;
	
	int n;
	cin>>n;
	switch (n){
		case 3:
		checking_balance(bal,pin);
			break;
			
				case 4:
		sending_money(bal,pin);
			break;
				case 2:
		 reserting(bal,pin);
			break;
				case 1:
		 authentication(bal,pin);
			break;
			default:
				cout<<"wron input "<<endl;
				intro(bal,pin);
				break;
			
			
			
	}

}





int main(){
	
	intro(1000,"0000");
	
	
	
	
	
return (0);	
}
