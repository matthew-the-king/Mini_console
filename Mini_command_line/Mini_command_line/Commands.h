#pragma once
#include <fstream>
#include <iostream>
#include <string>
#include <filesystem>
#include <cmath>
const float PI = 3.14159265359; 
namespace fs = std::filesystem; 


class Commands
{
	public:

	void Multiply(); //aks user for two number to multiply 

	void Divide(); //asks user for a number to divide and a number to divide by 

	void Find_sum(); //asks user for twoo numbers to add

	void Find_Diffrence(); // asks user for a number to subtract from and a number to subtract by

	void Find_sin(); //asks user for a angle and outputs sin(angle)

	void Find_cos(); //asks user for a angle and outputs cos(angle)

	void Find_tan(); //asks user for a angle and outputs tan(angle)

	void Create_File(); //aks user for a file name and file path 

	void Read_file(); //asks user for a file path to read from 

	void Write_to_File();  //asks user for a file path to write to 

	void Create_folder(); //asks user for a name and path for a folder creation 
	
	
	
};


	void Commands::Create_File() {
			std::cout << "What would you like the file to be named?\n"; 
			std::string File_Name; 
			std::getline(std::cin, File_Name); 
			std::cout << "Where would you like to put your file?\n"; 
			std::string input; 
			std::getline(std::cin, input);
			if (input != "default") {
			std::ofstream File(input + File_Name + ".txt");
			File.close(); 
			} else {
			std::ofstream File(File_Name + ".txt"); 
			File.close(); 
			}
			
			}
			


		void Commands::Create_folder() {
			std::cout << "What would you like to name your new folder?\n";
			std::string Folder_Name;
			std::cin >> Folder_Name;
			std::cout << "where would you like to place your folder?\n"; 
			std::string folder_place; 
			std::cin >> folder_place; 
			if (fs::create_directory(folder_place + Folder_Name)) {
				std::cout << "Folder was created!\n";
			}
			else {
				std::cout << "There was a error creating your folder!\n";
			}
		}

		void Commands::Write_to_File() {
			std::cout << "What file would you like to write to?\n";
			std::string File_Name;
			std::getline(std::cin, File_Name);
			std::ofstream File(File_Name, std::ios::app);
			std::string New_content;
			std::cout << "What would you like to write?\n"; 
			std::getline(std::cin, New_content);
			File << New_content; 
			File.close(); 
		}
		void Commands::Read_file() {
			std::cout << "What File would you like to read?"; 
			std::string File_Name;
			std::getline(std::cin, File_Name);
			std::ifstream File(File_Name); 
			std::cout << "The contents of the file are:\n";
			std::string content; 
			while (std::getline(File, content)) {
				std::cout << content; 
			}
			std::cout << "\n"; 
			File.close(); 
		}

		void Commands::Find_sum() {
			std::cout << "what is the first number you would like to add?\n";
			std::string term_one; 
			std::getline(std::cin, term_one); 
			std::cout << "What is the second number you would like to add?\n"; 
			std::string term_two; 
			std::getline(std::cin, term_two);
			std::cout << "The sum of " << term_one << " and " << term_two << " is " << std::stoi(term_one) + std::stoi(term_two) << "\n";
		}
		void Commands::Multiply() {
			std::cout << "What is the first number you would like to multiply?\n";
			std::string term_one; 
			std::getline(std::cin, term_one); 
			std::cout << "What is the second number you would like to multiply?\n"; 
			std::string term_two; 
			std::getline(std::cin, term_two);
			std::cout << "The product of " << term_one << " and " << term_two << " is " << std::stoi(term_one) * std::stoi(term_two) << "\n"; 
		}
		void Commands::Divide() {
			std::cout << "What is the number you would like to divide?\n"; 
			std::string term_one; 
			std::getline(std::cin, term_one); 
			std::cout << "What is the number you would like to divide by?\n"; 
			std::string term_two; 
			std::getline(std::cin, term_two); 
			if (std::stoi(term_two) == 0) {
			 std::cout << "cannot divide by 0"; 

			}
			else {
			std::cout << "The quotient of " << term_one << " divided by " << term_two << " is " << std::stoi(term_one) / std::stoi(term_two) << "\n";
			}
			 
		}
		void Commands::Find_Diffrence() {
			std::cout << "what is the first number you would like to subtract from?\n";
			std::string term_one;
			std::getline(std::cin, term_one);
			std::cout << "What is the amount you would like to subtract?\n";
			std::string term_two;
			std::getline(std::cin, term_two);
			std::cout << "The diffrence of " << term_one << " and " << term_two << " is " << std::stoi(term_one) - std::stoi(term_two) << "\n";
		}
		void Commands::Find_sin() {
			std::cout << "what is the angle?\n"; 
			std::string angle; 
			std::getline(std::cin, angle); 
			std::cout << std::sin(std::stoi(angle) * PI / 180) << "\n";
		}
		void Commands::Find_cos() {
			std::cout << "what is the angle?\n";
			std::string angle;
			std::getline(std::cin, angle);
			std::cout << std::cos(std::stoi(angle) * PI / 180) << "\n";
		}
		void Commands::Find_tan() {
			std::cout << "what is the angle?\n";
			std::string angle;
			std::getline(std::cin, angle);
			std::cout << std::tan(std::stoi(angle) * PI / 180) << "\n";
		}


