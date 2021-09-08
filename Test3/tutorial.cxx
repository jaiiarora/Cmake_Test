#include<cmath>
#include<cstdlib>
#include<iostream>
#include<string>
#include "TutorialConfig.h"
using namespace std;
int main(int argc, char* argv[])
{
	if (argc<2)
	{
		std::cout<<" Usage: " <<argv[0]<<" number "<<std::endl;
		cout<<TUTORIAL_VERSION_MAJOR<<"."<<TUTORIAL_VERSION_MINOR<<endl;
		return 1;
	}
	//convert input to double
	const double inputValue=atof(argv[1]);

	//calculate sqroot
	const double  outputValue=sqrt(inputValue);
	std::cout<<"SQRT OF "<< inputValue <<" is "<<outputValue<<std::endl;
	return 0;
}

