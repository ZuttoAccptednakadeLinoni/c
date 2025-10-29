//
// Created by k0itoYuu on 2025/8/22.
//
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
using namespace std;
#include <fstream>
int main()
{
    //使⽤time函数的返回值设置种⼦
    //因为srand的参数是unsigned int类型，我们将time函数的返回值强制类型转换
    ofstream myfile;
    myfile.open ("aaaaaaaaaa.txt");
    myfile << "100 100\n";


    srand((unsigned int)time(NULL));

    for(int i=1;i<=100;i++){
        for(int j=1;j<=100;j++){
            myfile << rand()%2<<" ";
        }
        myfile<<endl;
    }
    myfile.close();
    return 0;

}
