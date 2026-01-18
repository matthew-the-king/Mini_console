#include <fstream>
#include <iostream>
#include <string>
#include "Commands.h"




std::string Icon_for_console = R"(  
        ________
   Y8baad8888888888ba,_
aaad88888888888888888888b,
`Y8888888888888888888888888b,
  `"8888888888888888888888888ba,
    Y888( )888888888888888888888ba, 
    `Y888888888888888888888888888888ba,________,,aaddddbbbaa,,____,aaa,
     `Y88888888888888888888888888888888888888888888888888888888888888888b,
       Y88888888'888888888888888888888888888888888888888888888888888=88888b
       `88888888 88888888888888888888888888888888888888888888888888888=8888I
        Y8"88888 888888888888888888888888888888888888888888888888888888=888b
         Y88888P 888888888888888888888888888888888888888888888888888888=8888
          `""""  Y88888888888888888888888888888888888888888888888888888=8888
                 (88888888888888888888888888888888888888888888888888888=8888
                 `88888888888888888888888888888888888888888888888888888=888(
                  `888888888888888888888888888888888888888888888888888=8888I
                   d88888888888888888888888888888888888888888888888888=8888I
                 ,d888888PY88888888888P"Y888888P"88888888888888888888=88888(
                d888888P'  Y8888888888'           888888888888888888=8888888
               d88888P"    `Y888888888            I8888888"Y88888888=8888888
              d88888(,      `Y8888888P            `888888P  `Y888888 Y88888P
              `Y88888b,      `Y888888I             888888'   `888888  `""""
                `Y88888b,  __ `888888'            ,88888P     888888
                  `Y88888bd88b `88888             I88888'     Y88888
                    `Y88888888b 88888             88888P      `88888
           Normand    `Y888888888888P            d8888P'       88888,
           Veilleux      `"""",d8888I        ,ad888888'        Y8888I
                           ,a8888888'       d888888P'         ,d88888
                          d8888888'         88888888       ,d8888888P
                          88888888                         88888888'
                                                                     )"; 

int main()
{
    std::cout << "\033[32m";
	std::cout << Icon_for_console; 
    std::cout << "\n\n\nWelcome to the Horse Console! Type a command to start!\n"; 

    bool done = false; 
    Commands commands; 


    while (done != true) {
        std::cout << "HORSE_USER->"; 
        std::string input;
        std::getline(std::cin, input); 

        if (input == "filenew") commands.Create_File();
            
        else if (input == "filewrite")  commands.Write_to_File();
               
        else if (input == "fileread")   commands.Read_file();
          
        else if (input == "sumof")  commands.Find_sum();
           
        else if (input == "productof")    commands.Multiply();
         
        else if (input == "quotientof")  commands.Divide();
           
        else if (input == "diffrenceof") commands.Find_Diffrence();

        else if (input == "stop") return 0;

        else if (input == "foldernew") commands.Create_folder();

        else if (input == "sin()") commands.Find_sin();

        else if (input == "cos()") commands.Find_cos();

        else if (input == "tan()") commands.Find_tan(); 

    }
   
}
