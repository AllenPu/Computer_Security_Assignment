# Computer_Security_Assignment
I used C++ to do this assignment
As you can see , the very first step is the main.cpp which implemented the requirement of the Assignment to check if the Pe-1.txt included,if not, write in and create the file, etc.

The file follows the rule:
  main.cpp ->compile to .o file -> than link to .exe file

Script and files  
The simple C++ script is to overwrite the txt content

For Q1 STEP2 : 
![](https://github.com/AllenPu/Computer_Security_Assignment/blob/master/Screenshot%20(4).png)

For Q1 STEP 3
  PACKING:
    First paste the UPX.exe to the Desktop.
    Then win+R input CMD
    AND cd to the directory to the Desktop
    Command :  upx Directory\PE-Input.exe
    ![](https://github.com/AllenPu/Computer_Security_Assignment/blob/master/Screenshot%20(5).png)
  UNPACKING:
    Same place:
    Command: upx -d Directory\PE-Input.exe
    ![](https://github.com/AllenPu/Computer_Security_Assignment/blob/master/Screenshot%20(6).png)
 
 For Q1 STEP 4:
    I used the WINDOWS system to encrypt the exe file.
    Right click in exe and choose Property
    Then Click Advanced
    Then choose encryot
    That is the procedure.
    And I run the encrypted file with the VirusTotal:
    I got this:
    ![](https://github.com/AllenPu/Computer_Security_Assignment/blob/master/Screenshot%20(7).png)
