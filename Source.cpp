#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <cmath>
using namespace std;


int main() {
	ifstream fileInput;
	ofstream fileOutput;

	double farenheight;
	double celsius;
	string cityName;
	double tempNums;
	string fileData;
	vector<string> inputVec;
	vector<string> outputVec;

	//Open, read, and display input contents of input file
	fileInput.open("FahrenheitTemperature.txt");
	getline(fileInput, fileData);
	while (!fileInput.fail()) {
		inputVec.push_back(fileData);
		getline(fileInput, fileData);
	}

	cout << "---------------------------------------------------------" << endl;
	cout << "Opening file: 'FahrenheitTemperature.txt'" << endl;
	cout << "Reading file..." << endl;
	cout << endl;

	for (int i = 0; i < inputVec.size(); ++i) {
		cout << inputVec.at(i) << endl;
	}

	cout << endl;
	cout << "Closing file: 'FahrenheitTemperature.txt'" << endl;
	fileInput.close();
	cout << "---------------------------------------------------------" << endl;
	cout << endl;
	cout << endl;


	// Open, and write from fileInput to fileOutput
	fileInput.open("FahrenheitTemperature.txt");
	fileOutput.open("CelsiusTemperature.txt");
	cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
	cout << endl;
	cout << "Converting temperatures from Fahrenheit to Celsius......" << endl;
	cout << endl;
	cout << "Standby...." << endl;
	cout << endl;
	cout << "...Almost Finished..." << endl;
	cout << endl;
	cout << "Sucessful!" << endl;
	cout << endl;
	cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
	cout << endl;
	cout << endl;
	if (!fileInput.is_open()) {
		cout << "unable to open file.. ";
	}
	else {
		fileInput >> cityName >> tempNums;
		while (!fileInput.fail()) {
			farenheight = tempNums;
			celsius = (farenheight - 32.0) * (5.0 / 9.0);

			fileOutput << cityName << " " << celsius << endl;
			fileInput >> cityName >> tempNums;
		}

		fileInput.close();
		fileOutput.close();

	}
	

	//Open, read, and display contents of output file
	fileInput.open("CelsiusTemperature.txt");
	getline(fileInput, fileData);
	while (!fileInput.fail()) {
		outputVec.push_back(fileData);
		getline(fileInput, fileData);
	}

	cout << "---------------------------------------------------------" << endl;
	cout << "Opening file: 'CelsiusTemperature.txt'" << endl;
	cout << "Writing to file..." << endl;
	cout << endl;

	for (int i = 0; i < outputVec.size(); ++i) {
		cout << outputVec.at(i) << endl;
	}

	cout << endl;
	cout << "Closing file: 'CelsiusTemperature.txt'" << endl;
	fileInput.close();
	cout << "---------------------------------------------------------" << endl;
	cout << endl;
}

	