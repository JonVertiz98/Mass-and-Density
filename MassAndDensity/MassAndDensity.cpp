// Jonathan Vertiz
// ITSE 1307
// Mass and Density
// MassAndDensity.cpp : Solves for Volume when given the Mass and Density of an object

#include "stdafx.h"
#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
using namespace std;


int main()
{
	//Initilize all the values we'll need includeing variables and strings
	double dblGrams = 0.0;
	double dblDensity = 0.0;
	double dblVolume = 0.0;
	string strFileName = "input.dat";
	string strFileName2 = "output.txt";
	string strLine1 = "Please input a mass in grams: ";
	string strLine2 = "Please input the density in Grams/Cm^3: ";
	string strLine3 = "Volume = Mass/Density";
	string strLine4 = "Your volume in Cm^3 is: ";

	//open up the input file that'll take in the users mass and density
	ifstream fileInput;
	fileInput.open(strFileName);
	fileInput >> strLine1;
	fileInput >> dblGrams;
	fileInput >> strLine2;
	fileInput >> dblDensity;

	//makes it to where the whole equation accounts for 3 sig figs and outputs the info for the variables
	cout << setprecision(3);
	cout << strLine1;
	cin >> dblGrams;
	cout << strLine2;
	cin >> dblDensity;
	fileInput.close();

	//open up the second output file where we'll calculate the volume 
	ifstream fileOutput;
	fileOutput.open(strFileName2);
	fileOutput >> strLine3;
	fileOutput >> strLine4;
	fileOutput >> dblVolume;

	//set the precision again, displays the equation needed to calculate, and outputs the Volume 
	cout << setprecision(3);
	dblVolume = dblDensity / dblGrams;
	cout << strLine3 << endl;
	cout << strLine4
		<< dblVolume << endl;
	fileOutput.close();
    return 0;
}

