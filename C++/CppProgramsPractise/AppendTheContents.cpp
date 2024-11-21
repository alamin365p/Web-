
#include<iostream>
using namespace std;

int main()
{
    FILE*file=fopen("file.txt","r");
    FILE*file2=fopen("file2.txt","a");
    if(file2==NULL)
    {
        cout<<"File not found";
        return 0;
    }

    else if(file==NULL)
    {
        cout<<"File not found";
        return 1;
    };

    char ch=fgetc(file);
    while(ch!=EOF)
    {
        fprintf(file2,"%c",ch);
        ch=fgetc(file);
    }
    fclose(file);
    fclose(file2);
    FILE*file3=fopen("file2.txt","r");
    char ch2 =fgetc(file3);
    while(ch2!=EOF)
    {
        printf("%c", ch2);
        ch2=fgetc(file3);
        fclose(file3);
    }
}











// #include <iostream>
// #include <fstream>
// #include <string>

// int main() {
//     // Open the source file for reading
//     std::ifstream sourceFile("source.txt");
//     if (!sourceFile.is_open()) {
//         std::cerr << "Error opening source file." << std::endl;
//         return 1;
//     }

//     // Open the destination file for appending
//     std::ofstream destFile("destination.txt", std::ios::app);
//     if (!destFile.is_open()) {
//         std::cerr << "Error opening destination file." << std::endl;
//         return 1;
//     }

//     // Read and append the contents of the source file to the destination file
//     std::string line;
//     while (std::getline(sourceFile, line)) {
//         destFile << line << std::endl;
//     }

//     // Close the files
//     sourceFile.close();
//     destFile.close();

//     std::cout << "Contents appended successfully." << std::endl;

//     return 0;
// }
