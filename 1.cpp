//Вычисление коэффициентов тригонометрического многочлена
#include <iostream>
#include <conio.h>
#include <cmath>
#include <math.h>
#define M_PI       3.14159265358979323846
using namespace std;
int main()
{   setlocale(LC_ALL,"");
	int n=0;
  //  int s=0;
    std::cin >> n;
	//int s = 1/(2*n+1);
	double s = 0;
	double result0=0;
	//double _result0=0;
	double resultj=0;
	double resultj2=0;
	//double resultj3=0;
//double resultj4=0;
//	cout.precision(20);
for(int k=0;k<=2*n;k++)
{  std::cout << std::endl;
	std::cout << "Узел"  << k << "=";
    std::cout << 2*3.14*k/(2*n+1);
	std::cout << std::endl;
	 //_result0 += 1/(1+(2*3.14*j/(n))*(2*3.14*j/(n)))*(2*n+1);
	//std::cout << 1/(1+(2*3.14*j/(2*n))*(2*3.14*j/(2*n)))*(n);
//	std::cout << "Значение узла в функции:" <<std::endl;
	//std::cout <<  (exp(cos(2*3.14*k/(2*n+1))+sin((2*3.14*k/(2*n+1)))));
//	std::cout << abs(2*3.14*k/(2*n+1));
	//std::cout << 1/(1+(2*3.14*k/(2*n+1)-3.14)*(2*3.14*k/(2*n+1)-3.14));
	//std::cout << (exp(-abs((2*3.14*k/(2*n+1))-3.14)));
	//std::cout << (exp(-abs((2*3.14*k/(2*n+1)))));
	//std::cout << (exp(cos(2*3.14*k/(2*n+1))+sin((2*3.14*k/(2*n+1)))));
	//std::cout << abs((2*3.14*k/(2*n+1))-3.14);
	std::cout << (exp(2*3.14*k/(2*n+1)));
	std::cout << std::endl;
}
	for(int k=0;k<=2*n;k++)
	{ 
		
	//	std::cout << (2*3.14*k/(2*n+1));
	//	std::cout << std::endl;
	//	std::cout <<(powl(2*3.14*k/(2*n+1),2));
	//	std::cout << std::endl;
	//	std::cout <<1/(1+(powl(2*3.14*k/(2*n+1),2)));
	//	std::cout << std::endl;

	//	result0 += (exp(cos(2*M_PI*k/(2*n+1))+sin((2*M_PI*k/(2*n+1))))); //a0
		//result0 += abs(2*M_PI*k/(2*n+1));
		//result0 += abs((2*M_PI*k/(2*n+1))-M_PI);
		//result0 += (exp(2*M_PI*k/(2*n+1)));
	//	result0 += (exp(-abs((2*M_PI*k/(2*n+1))-M_PI)));
		//result0 += (1/(1+(powl(1.57*(cos((2*n-2*k+1)*3.14/(2*n))+1),2)))*(2*n+1));
	  result0 += 1/(1+(2*M_PI*k/(2*n+1)-M_PI)*(2*M_PI*k/(2*n+1)-M_PI));

	//	result0 += 1/(1+(powl(2*3.14*k-3.14*(2*n+1)/(2*n+1),2)));

		//result0 += 1/(1+(2*3.14*k/n)*(2*3.14*k/n))*n;

	}
	std::cout << "a0=" ;
	std::cout << result0/(2*n+1) << std::endl;//a0
	for(int j=1;j<=n;j++)
	{
		resultj = 0;
		for(int k=0;k<=2*n;k++)
		{

			resultj += (exp(cos(2*M_PI*k/(2*n+1))+sin((2*M_PI*k/(2*n+1)))))*cos(j*2*3.14*k/(2*n+1)); //aj
			//resultj += abs(2*M_PI*k/(2*n+1))*cos(j*2*M_PI*k/(2*n+1));
			//resultj += abs((2*M_PI*k/(2*n+1))-M_PI)*cos(j*2*M_PI*k/(2*n+1));
			//resultj +=(exp(2*M_PI*k/(2*n+1)))*cos(j*2*M_PI*k/(2*n+1));
			//resultj += (exp(-abs((2*M_PI*k/(2*n+1))-M_PI)))*cos(j*2*M_PI*k/(2*n+1));
			resultj += (1/(1+(2*M_PI*k/(2*n+1)-M_PI)*(2*M_PI*k/(2*n+1)-M_PI)))*cos(j*((2*M_PI*k/(2*n+1))-M_PI));
			//resultj += 2*(1/(1+(-1+2*k/n)*(-1+2*k/n)))*cos(j*(-1+2*k/n))/(2*n+1)
		//	resultj += 2*(1/(1+(2*3.14*k/n)*(2*3.14*k/n)))*cos(j*2*3.14*k/(n))/n;
		}
		std::cout << "a" << j <<"=";
		std::cout << 2*resultj/(2*n+1) << std::endl;

	}

	for(int j=1;j<=n;j++)
	{
		resultj2 = 0;
		for(int k=0;k<=2*n;k++)
		{

		//	resultj2 += (exp(cos(2*M_PI*k/(2*n+1))+sin((2*M_PI*k/(2*n+1)))))*sin(j*2*M_PI*k/(2*n+1)); //bj
			//resultj2 += abs(2*M_PI*k/(2*n+1))*sin(j*2*M_PI*k/(2*n+1));
		//	resultj2 += abs((2*M_PI*k/(2*n+1))-M_PI)*sin(j*2*M_PI*k/(2*n+1));
			//resultj2 += (exp(2*M_PI*k/(2*n+1)))*sin(j*2*M_PI*k/(2*n+1));
		//	resultj2 += (exp(-abs((2*M_PI*k/(2*n+1))-M_PI)))*sin(j*2*M_PI*k/(2*n+1));
			//resultj2 += 2*(1/(1+(powl(1.57*(cos((2*n-2*k+1)*3.14/(2*n))+1),2))))*sin(j*1.57*(cos((2*n-2*k+1)*3.14/(2*n))+1))/(2*n+1);
			resultj2 += (1/(1+(2*M_PI*k/(2*n+1)-M_PI)*(2*M_PI*k/(2*n+1)-M_PI)))*sin(j*((2*M_PI*k/(2*n+1))-M_PI));
			//resultj2 += 2*(1/(1+(2*3.14*k/n)*(2*3.14*k/n)))*sin(j*2*3.14*k/(n))/n;

		}
		std::cout << "b" << j <<"=";
		std::cout << 2*resultj2/(2*n+1) << std::endl;

	}


	//Отрицательные коэффициенты
	/*std::cin>>s;

	for(int k=0;k>=2*s;k--)
	{
		
		//result0 += (exp(cos(2*3.14*k/(2*n+1))+sin((2*3.14*k/(2*n+1)))))/(2*n+1); //a0
		_result0 += abs(2*3.14*k/(2*n+1))/(2*n+1);
		//result0 += (exp(2*3.14*k/(2*n+1)))/(2*n+1);
		//result0 += (exp(-abs(2*3.14*k/(2*n+1))))/(2*n+1);
		//result0 += (1/(1+(powl(1.57*(cos((2*n-2*k+1)*3.14/(2*n))+1),2)))*(2*n+1));
	  //result0 += 1/(1+(2*3.14*k/(2*n+1))*(2*3.14*k/(2*n+1)))*(2*n+1);

	}
	std::cout << "a0=" ;
	std::cout << _result0 << std::endl;//a0
	



	for(int j=-1;j>=s;j--)
	{
		resultj3 = 0;
		for(int k=-1;k>=2*s;k--)
		{

			//resultj += 2*(exp(cos(2*3.14*k/(2*n+1))+sin((2*3.14*k/(2*n+1)))))*cos(j*2*3.14*k/(2*n+1))/(2*n+1); //aj
			resultj3 += 2*abs(2*3.14*k/(2*n+1))*cos(j*2*3.14*k/(2*n+1))/(2*n+1);
			//resultj += 2*(exp(2*3.14*k/(2*n+1)))*cos(j*2*3.14*k/(2*n+1))/(2*n+1);
			//resultj += 2*(exp(-abs(2*3.14*k/(2*n+1))))*cos(j*2*3.14*k/(2*n+1))/(2*n+1);
		//	resultj += 2*(1/(1+(2*3.14*k/(2*n+1))*(2*3.14*k/(2*n+1))))*cos(j*2*3.14*k/(2*n+1))/(2*n+1);
		}
		std::cout << "-a" << j <<"=";
		std::cout << resultj3 << std::endl;

	}

	for(int j=-1;j>=s;j--)
	{
		resultj4 = 0;
		for(int k=-1;k>=2*s;k--)
		{

		//	resultj2 += 2*(exp(cos(2*3.14*k/(2*n+1))+sin((2*3.14*k/(2*n+1)))))*sin(j*2*3.14*k/(2*n+1))/(2*n+1); //bj
			resultj4 += 2*abs(2*3.14*k/(2*n+1))*sin(j*2*3.14*k/(2*n+1))/(2*n+1);
			//resultj2 += 2*(exp(2*3.14*k/(2*n+1)))*sin(j*2*3.14*k/(2*n+1))/(2*n+1);
			//resultj2 += 2*(exp(-abs(2*3.14*k/(2*n+1))))*sin(j*2*3.14*k/(2*n+1))/(2*n+1);
			//resultj2 += 2*(1/(1+(powl(1.57*(cos((2*n-2*k+1)*3.14/(2*n))+1),2))))*sin(j*1.57*(cos((2*n-2*k+1)*3.14/(2*n))+1))/(2*n+1);
		//	resultj2 += 2*(1/(1+(2*3.14*k/(2*n+1))*(2*3.14*k/(2*n+1))))*sin(j*2*3.14*k/(2*n+1))/(2*n+1);


		}
		std::cout << "-b" << j <<"=";
		std::cout << resultj4 << std::endl;

	}
	*/















	getch();
	return 0;

}