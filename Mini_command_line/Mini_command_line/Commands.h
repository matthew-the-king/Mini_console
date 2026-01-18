#pragma once
#include <fstream>
#include <iostream>
#include <string>
#include <filesystem>

class Commands
{
	public:
		void Create_File() {
			std::cout << "What would you like the file to be named?\n"; 
			std::string File_Name; 
			std::getline(std::cin, File_Name); 
			if (File_Name == "folder") {
			
			}
			else {
			std::ofstream File(File_Name + ".txt"); 
			File.close(); 
			}
			
		}
		void Write_to_File() {
			std::cout << "What file would you like to write to?";
			std::string File_Name;
			std::getline(std::cin, File_Name);
			std::ofstream File(File_Name + ".txt", std::ios::app);
			std::string New_content;
			std::getline(std::cin, New_content);
			File << New_content; 
			File.close(); 
		}
		void Read_file() {
			std::cout << "What File would you like to read?"; 
			std::string File_Name;
			std::getline(std::cin, File_Name);
			std::ifstream File(File_Name + ".txt"); 
			std::cout << "The contents of the file are:\n";
			std::string content; 
			while (std::getline(File, content)) {
				std::cout << content; 
			}
			std::cout << "\n"; 
			File.close(); 
		}

		void Find_sum() {
			std::cout << "what is the first number you would like to add?\n";
			std::string term_one; 
			std::getline(std::cin, term_one); 
			std::cout << "What is the second number you would like to add?\n"; 
			std::string term_two; 
			std::getline(std::cin, term_two);
			std::cout << "The sum of " << term_one << " and " << term_two << " is " << std::stoi(term_one) + std::stoi(term_two) << "\n";
		}
		void Multiply() {
			std::cout << "What is the first number you would like to multiply?\n";
			std::string term_one; 
			std::getline(std::cin, term_one); 
			std::cout << "What is the second number you would like to multiply?\n"; 
			std::string term_two; 
			std::getline(std::cin, term_two);
			std::cout << "The product of " << term_one << " and " << term_two << " is " << std::stoi(term_one) * std::stoi(term_two) << "\n"; 
		}
		void Divide() {
			std::cout << "What is the number you would like to divide?\n"; 
			std::string term_one; 
			std::getline(std::cin, term_one); 
			std::cout << "What is the number you would like to divide by?\n"; 
			std::string term_two; 
			std::getline(std::cin, term_two); 
			std::cout << "The quotient of " << term_one << " divided by " << term_two << " is " << std::stoi(term_one) / std::stoi(term_two) << "\n"; 
		}
		void Find_Diffrence() {
			std::cout << "what is the first number you would like to subtract from?\n";
			std::string term_one;
			std::getline(std::cin, term_one);
			std::cout << "What is the amount you would like to subtract?\n";
			std::string term_two;
			std::getline(std::cin, term_two);
			std::cout << "The diffrence of " << term_one << " and " << term_two << " is " << std::stoi(term_one) - std::stoi(term_two) << "\n";
		}
};

