#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>
#include <vector>
#include <fstream>
using namespace std;
const int AMOUNT_OF_PATIENTS=2;

class PatientsBMI 
{
private:
	string email;
	string name;
	string phonenumber;
	double bmi;
	double Weight;//W= weight
	double Height;//H = height

public:
	PatientsBMI (){
		email="";
		name="";
		phonenumber="";
		 bmi;
		 Weight;//W= weigt
		 Height;//H = height
	}
	void setpatient()

	{
		// This is where they'll input the patients personal details.
		cout << "What's the patient's name:" << endl;
		getline(cin, name);

		cout << "What's the patient's Phone number: " << endl;
		getline(cin, phonenumber);

		cout << "What's the patient's email address: " << endl;
		getline(cin, email);

		// This is where they'll input the patients height and weight fot the BMI.
		cout << "Enter the patients weight in kilograms (Kg):" << endl;
		cin >> Weight;

		cout << "Enter the patients height in meters(M):" << endl;
		cin >> Height;
		cout << endl<<endl;
		cin.ignore(1);
		cin.clear();

		bmi = Weight / (Height * Height);
	}
	void outputDetails()
	{
		ofstream outfile;// this will replace the cout 

		outfile.open("bmipatientdata.txt"); //This is to attempt to open the file 

			if (outfile.is_open())//This is make sure the file is open 

			{

		outfile << "**********NEW PATIENT***********" << endl;
		outfile << "The Paitents name:" << Getname() << endl;
		outfile << "The Patients phone number:" << Getphonenumber() << endl;
		outfile << "The patients email address:" << Getemail() << endl;
		outfile << "The patients weight:" << GetWeight() << "Kg" << endl;
		outfile << "The patients height:" << GetHeight() << "M" << endl;
		outfile << "The patient is " << finalBmi() << " on the bmi scale , as there bmi is " << fixed << setprecision(1) << Getbmi() << endl;
		outfile<< "--------------------------------------------------------" << endl;
	}

	}

	// receiving name 
	string Getname()
	{
		return name;
	}

	//receiving email
	string Getemail()
	{
		return email;
	}

	// receiving phonenumber
	string  Getphonenumber()
	{
		return phonenumber;
	}

	//receiving weight
	double GetWeight()
	{
		return Weight;
	}

	// receiving height
	double GetHeight()
	{
		return Height;
	}

	// Receiving BMI input
	double Getbmi()
	{
		return bmi;
	}


	string finalBmi()
	{

		if (Getbmi() < 18.5)
		{
			return "underderweight";
		}
		else if (Getbmi()>= 18.5 && Getbmi() <=25)
		{
			return "Normal range";
		}
		else if (Getbmi()>= 25 && Getbmi()<=30)
		{
			return " Overweight";
		}
		else if (Getbmi()>=30)
		{
			return  " Obese";
		}
	}

};

int main()
{
	PatientsBMI get;

	for (int i = 0; i < AMOUNT_OF_PATIENTS; i++)

	{
	 get.setpatient(),get.outputDetails();
	}
	
	
	
	return 0;
}


