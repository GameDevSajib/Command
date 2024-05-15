#include <cstdlib>
#include <bits/stdc++.h>
int main() {

    ///Make sure you have a (hello.ps1 file in F drive -->> cpp_all folder)
    ///here i have use  two command in my hello.ps1 file (ls and ./DSA_Preperation.exe)
    const char* scriptPath = "F:\\cpp_all\\hello.ps1"; // Corrected path
    const char* command = "powershell -ExecutionPolicy Bypass -File ";

    // Create a buffer to hold the full command
    char fullCommand[256]; // Adjust the size as needed

    // Copy the initial command
    strcpy(fullCommand, command);

    // Concatenate the script path
    strcat(fullCommand, scriptPath);

    // Execute the PowerShell script
    system(fullCommand);

    return 0;
}
