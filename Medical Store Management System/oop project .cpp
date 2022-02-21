#include <iostream>
#include <fstream>
#include<cmath>
#include <string>

using namespace std;


class Pharmacy
{
    

    public:
    
    void take_order();//to  take_order
	void order_list(); //to display the order_list
	void modify(); //to modify the order in terms of quantiy 
	void daily_summary(); //to display daily_summary
	void exit();  //function to exit system
    Pharmacy()
	{
		//constructor
	}

};

struct med
{
    int reciept_number;
	string customerName;
	string date;
	int quantity[10];
	string type = {"OTC"};
	int x, menu2[10];
    double amount[10];
    string medicineName[10]={"Probiotics","Vitamin C(500mg)","Acid Free C(500mg)","Women'S Multivate","Marino Tablet","Maxi Cal Tablet",
	"Amino Zinc Tablet","Burnex","Fabuloss 5","Royal Propollen"};
	double Medicine[10] = {2.00,3.00,1.00,4.00,1.00,5.00,7.00,4.00,3.00,5.00};
	double total;

    
};

int main()
{
    Pharmacy medicine;
    int menu;
	do
	{
		system("cls");
		cout<<"\t\t\t    Medical Store Management System \n";
		cout<<"\t\t==================================================\n\n";
		cout<<"\t\t--------------------------------------------------\n";
		cout<<"\t\t||\t1. Take new Medicine order \t\t ||\n";
		
		cout<<"\t\t||\t2. Modify Order List \t\t\t ||\n";
		cout<<"\t\t||\t3. Print the Reciept and Make Payment \t ||\n";
		cout<<"\t\t||\t4. Daily Summary of total Sale \t\t ||\n";
		cout<<"\t\t||\t5. Exit\t\t\t\t\t ||\n";
		cout<<"\t\t--------------------------------------------------\n";
		cout<<"Enter choice: ";

		cin>>menu;

		switch (menu)
		{
		case 1:
			{
				medicine.take_order();	//function add
				break;
			}	//end case 1
		case 2:
			{
				medicine.modify();	//function modify
				
				break;
			}	//end case 2
		
		case 3:
			{
				medicine.order_list();	//function order
				
				break;
			}	//end case 3
		
			
		

		
		case 4:
			{
				medicine.daily_summary();	//function daily_summary
				
				break;
			}	//end case 4
        case 5:
			{
				medicine.exit();	//function exit
				
				break;
			}	//end case 5

		
		default:
			{
				cout<<"You enter invalid input\nre-enter the input\n"<<endl;
				break;
			}//end defeault
		}//end Switch
	}while(menu!=5);//end do-while


    return 0;



}
 med temp[10];

void Pharmacy::take_order()
{
	int no;
	cout << "Type Order no: ";
	cin>>no;
	no = no-1;
	cout<<"Type Receipt number: ";
    cin >> temp[no].reciept_number;

    int i;
   
    	cout <<"**************************************************************************\n";
				cout<<"DRUGS ID"<<"\tDRUGS TYPE"<<"   \t\tDRUGS NAME"<<"           DRUGS PRICE(Dollar)"<<endl;
				cout <<"**************************************************************************\n";
                cout<<"0001"<<"\t"<<"\tOTC"<<"\t\t"<<"    Probiotics"<<"			 2.00"<<endl;
                cout<<"0002"<<"\t"<<"\tOTC"<<"\t\t"<<"    Vitamin C(500mg)"<<"		 3.00"<<endl;
                cout<<"0003"<<"\t"<<"\tOTC"<<"\t\t"<<"    Acid Free C(500mg)"<<"		 1.00"<<endl;
                cout<<"0004"<<"\t"<<"\tOTC"<<"\t\t"<<"    Women'S Multivate"<<"		 4.00"<<endl;
                cout<<"0005"<<"\t"<<"\tOTC"<<"\t\t"<<"    Marino Tablet"<<"	 	 1.00"<<endl;
                cout<<"0006"<<"\t"<<"\tOTC"<<"\t\t"<<"    Maxi Cal Tablet"<<" 		 5.00"<<endl;
                cout<<"0007"<<"\t"<<"\tOTC"<<"\t\t"<<"    Amino Zinc Tablet"<<"		 7.00"<<endl;
                cout<<"0008"<<"\t"<<"\tOTC"<<"\t\t"<<"    Burnex"<<"			 4.00"<<endl;//1353fn
                cout<<"0009"<<"\t"<<"\tOTC"<<"\t\t"<<"    Fabuloss 5"<<"			 3.00"<<endl;
                cout<<"0010"<<"\t"<<"\tOTC"<<"\t\t"<<"    Royal Propollen"<<"		 5.00"<<endl;
                cout<<" "<<endl;

    cout<< "Enter Customer Name: ";
	cin>> temp[no].customerName;
    
	
	cout<<"Enter Date : ";
	cin>>temp[no].date;
	cout << "How many Medicine would you like to order:"<< endl;
	cout<<"( Maximum is 10 order for each transaction ) \n";
	cout << "  " ;
	cin >> temp[no].x;
    if (temp[no].x >10)
	{
		cout << "The Medicine you order is exceed the maximum amount of order !";
		system("pause");
	}
	else
    {
	for (i=0; i<temp[no].x; i++)
	{
		
		cout << "Please enter your selection : "<<endl;
		cin>> temp[no].menu2[i];
        cout<< "Medicine Name: " <<temp[no].medicineName[temp[no].menu2[i]-1]<<endl;
        cout << "How many medicine do you want: ";
        cin >> temp[no].quantity[i];
        temp[no].amount[i] = temp[no].quantity[i] * temp[no].Medicine[temp[no].menu2[i]-1];
        cout << "The amount You need to pay is: " << temp[no].amount[i]<<" dollars"<<endl;
       system("PAUSE");
                      
	}
	cout<<"==========================================================================="<<endl;
    cout << "Order Taken Successfully"<<endl;
    cout<<"==========================================================================="<<endl;
    cout << "Go to Reciept Menu to Pay The Bill"<<endl;
    cout<<"==========================================================================="<<endl;
    }
	
}

void Pharmacy :: order_list()
{
	int  no,num,i;
	

	cout<<" Enter the Reciept Number To Print The Reciept\n";
	cin>>no;
	no = no -1;
	cout<<"\n";
	cout<<"==========================================================================="<<endl;
	cout <<"\t\tHere is the Order list\n"; 
	cout<<"==========================================================================="<<endl;
	
	cout<<"Reciept Number : "<<temp[no].reciept_number<<endl;
	cout<<"Customer Name : "<<temp[no].customerName<<endl;
	cout<<"Order date :"<<temp[no].date;

	cout<<"_____________________________________________________________________________"<<endl;
			
		cout << "===============================================================================" << endl;
		cout << "|  Medicine Type |     Medicine Name    |  	Quantity     |    Total Price |" << endl;
		cout << "=======++==================++================++===============++===============" << endl;
		for (i=0;i<temp[no].x;i++)
		{
			cout << temp[no].type <<"  \t\t";
			cout<<temp[no].medicineName[temp[no].menu2[i]-1]<<"\t\t\t  ";
			cout<<temp[no].quantity[i] <<"\t\t";
			cout<< temp[no].amount[i]<<" Dollars"<<endl;
			cout<<"_________________________________________________________________________________"<<endl;
		}


		temp[no].total = temp[no].amount[0]+temp[no].amount[1]+temp[no].amount[2]+temp[no].amount[3]+temp[no].amount[4]+temp[no].amount[5]+temp[no].amount[6]+temp[no].amount[7]
						+temp[no].amount[8]+temp[no].amount[9];
		cout<<"Total Bill is : "<<temp[no].total;
		cout<<"\n";
		system("PAUSE");
		
}



void Pharmacy :: modify()
{
	int no;
	cout << "Type Order no to modify: ";
	cin>>no;
	no = no-1;
	cout<<"Type Receipt number to modify: ";
    cin >> temp[no].reciept_number;

    int i;
   
    	cout <<"**************************************************************************\n";
				cout<<"DRUGS ID"<<"\tDRUGS TYPE"<<"   \t\tDRUGS NAME"<<"           DRUGS PRICE(Dollar)"<<endl;
				cout <<"**************************************************************************\n";
                cout<<"0001"<<"\t"<<"\tOTC"<<"\t\t"<<"    Probiotics"<<"			 2.00"<<endl;
                cout<<"0002"<<"\t"<<"\tOTC"<<"\t\t"<<"    Vitamin C(500mg)"<<"		 3.00"<<endl;
                cout<<"0003"<<"\t"<<"\tOTC"<<"\t\t"<<"    Acid Free C(500mg)"<<"		 1.00"<<endl;
                cout<<"0004"<<"\t"<<"\tOTC"<<"\t\t"<<"    Women'S Multivate"<<"		 4.00"<<endl;
                cout<<"0005"<<"\t"<<"\tOTC"<<"\t\t"<<"    Marino Tablet"<<"	 	 1.00"<<endl;
                cout<<"0006"<<"\t"<<"\tOTC"<<"\t\t"<<"    Maxi Cal Tablet"<<" 		 5.00"<<endl;
                cout<<"0007"<<"\t"<<"\tOTC"<<"\t\t"<<"    Amino Zinc Tablet"<<"		 7.00"<<endl;
                cout<<"0008"<<"\t"<<"\tOTC"<<"\t\t"<<"    Burnex"<<"			 4.00"<<endl;//1353fn
                cout<<"0009"<<"\t"<<"\tOTC"<<"\t\t"<<"    Fabuloss 5"<<"			 3.00"<<endl;
                cout<<"0010"<<"\t"<<"\tOTC"<<"\t\t"<<"    Royal Propollen"<<"		 5.00"<<endl;
                cout<<" "<<endl;
	cout<<"Previous Name : "<<temp[no].customerName<<endl;
    cout<< "Modify Customer Name: ";
	cin >> temp[no].customerName;
    
	cout<<"Previous Date : "<<temp[no].date<<endl;
	cout<<"Modify Date : ";
	cin>>temp[no].date;

	cout<<"Medicines previously ordered : "<<temp[no].x << endl;

	cout << "Modify How many Medicine would you like to order :"<< endl;
	cout<<"( Maximum is 10 order for each transaction ) \n";
	cout << "  " ;
	cin >> temp[no].x;
    if (temp[no].x >10)
	{
		cout << "The Medicine you order is exceed the maximum amount of order !";
		system("pause");
	}
	else
    {
	for (i=0; i<temp[no].x; i++)
	{
		
		cout << "Please enter your modified selection : "<<endl;
		cin>> temp[no].menu2[i];
        cout<< "Medicine Name: " <<temp[no].medicineName[temp[no].menu2[i]-1]<<endl;
        cout << "How many medicine do you want: ";
        cin >> temp[no].quantity[i];
        temp[no].amount[i] = temp[no].quantity[i] * temp[no].Medicine[temp[no].menu2[i]-1];
        cout << "The amount You need to pay is: " << temp[no].amount[i]<<" dollars"<<endl;
		system("PAUSE");
                      
	}
	cout<<"==========================================================================="<<endl;
    cout << "Order Taken Successfully"<<endl;
    cout<<"==========================================================================="<<endl;
    cout << "Go to Reciept Menu to Pay The Bill"<<endl;
    cout<<"==========================================================================="<<endl;
    }

}

void Pharmacy::exit() //Function to exit
{
	cout<<"\nYou choose to exit.\n"<<endl;
}	//end function exit


void Pharmacy :: daily_summary()
{
	int no = 0;

	cout<<"The daily summary is : "<<endl;
	cout<<"(Track Max 10 orders daily) "<<endl;
	
	for(int i = 0; i < 10; i++)
	{
	cout<<"==========================================================================="<<endl;
	cout <<"\t\tHere is the Order list\n"; 
	cout<<"==========================================================================="<<endl;
	
	cout<<"Reciept Number : "<<temp[no].reciept_number<<endl;
	cout<<"Customer Name : "<<temp[no].customerName<<endl;
	cout<<"Order date :"<<temp[no].date;

	cout<<"_____________________________________________________________________________"<<endl;
			
		cout << "===============================================================================" << endl;
		cout << "|  Medicine Type |     Medicine Name    |  	Quantity     |    Total Price |" << endl;
		cout << "=======++==================++================++===============++===============" << endl;
		for (i=0;i<temp[no].x;i++)
		{
			cout << temp[no].type <<"  \t\t";
			cout<<temp[no].medicineName[temp[no].menu2[i]-1]<<"\t\t\t  ";
			cout<<temp[no].quantity[i] <<"\t\t";
			cout<< temp[no].amount[i]<<" Dollars"<<endl;
			cout<<"_________________________________________________________________________________"<<endl;
		}


		temp[no].total = temp[no].amount[0]+temp[no].amount[1]+temp[no].amount[2]+temp[no].amount[3]+temp[no].amount[4]+temp[no].amount[5]+temp[no].amount[6]+temp[no].amount[7]
						+temp[no].amount[8]+temp[no].amount[9];
		cout<<"Total Bill is : "<<temp[no].total;
		no++;
		cout<<"\n\n";
	}
		system("PAUSE");

}
