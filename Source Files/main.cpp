#include <iostream>
#include <fstream>

int main()
{
    std::cout << "Hello, World!" << std::endl;

    /*
    int error;
    char* line;
    FILE* f = fopen("/home/teradata/Workspace/CPP/createsamples/test/test", "r");
    if(NULL == f) {
        printf("failed to open file");
    }

    while(!feof(f)){
        error = ( fscanf( f, "%s", line) != 1 );
        printf("%d", error);
        printf("%s\n", line);
    }

    fclose(f);
    */



    std::string f = "/home/teradata/Workspace/CPP/createsamples/test/test";
    std::ifstream in (f);
    std::string line;
    std::string content;

    if(in)
    {
        while (getline(in, line))
        {
            std::cout<<"load: "<<line<<std::endl;
            std::ifstream in2("/home/teradata/Workspace/CPP/createsamples/test/" + line);
            if(in2)
            {
                getline(in2, content);
                std::cout<<"content: "<<content<<std::endl;
            }
            else
            {
                std::cout<<"file does not exist"<<std::endl;
            }
        }
    }
    else
    {
        std::cout<<"no such file"<<std::endl;
    }
    in.close();

    std::cout<<"ff"<<std::endl;
    int i = 3;
    char* cc;
    char qq[5] = "aa12";
    snprintf(cc, sizeof(qq), "%s%d%d", "aa",i,i);
    std::cout<<cc<<std::endl;

    std::cout << "Farewell, World!" << std::endl;


    return 0;
}