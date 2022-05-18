//practice_v2022.03.05.cpp
//
//The function of the program is to determine which numerical inputs are prime numbers

#include <iostream>
#include <stdio.h>


using namespace std;

struct alignas(16) stc_number
{
	int odd;       //4 bytes
	int even;      //4 bytes
	alignas(4) char arr[5];
	bool num_chk;  //2 bytes 
};

struct alignas(8) stc_prime_check
 {
 public:
	 int prime_var;
	 int prime_check;
	 //consider coding constructor and default constructor

}* ptr_prime_check; //if code becomes verbose

int func_prime_check(int prime_var)
{

	stc_prime_check  stc_prime_check;

	if (prime_var == 0) { std::cout << "The number "; std::cout << prime_var; std::cout << " is a zero number \n"; }
	else if ((prime_var >= 1 && prime_var <= 3) || prime_var == 5) { printf("The number %d is a prime number \n", prime_var); }
	else if ((stc_prime_check.prime_check = prime_var % 2) == 0 || (stc_prime_check.prime_check = prime_var % 5) == 0 || (stc_prime_check.prime_check = prime_var % 3) == 0) { std:cout << "The number " << prime_var << " is not a prime number \n"; }
	else if ((stc_prime_check.prime_check = prime_var % 3) != 0) { printf("The number %d is a prime number \n", prime_var); }
	else cout << "Danger Will Robinson \n";
	/*{
		for (auto divisor_chk = 2; divisor_chk < 10; ++divisor_chk)
			//for (auto& a : z) a++
			stc_prime_check.prime_check = prime_var % divisor_chk;
			if (stc_prime_check.prime_check == 0) { std::cout << "The number " << prime_var << " is a prime number \n"; }
			else if (stc_prime_check.prime_check == 0) { printf("The number %d is not a prime number \n", prime_var); }
	}*/
	return 0;
}

int main()

{
int prime_input;
string one_and_done;


func_prime_check(0);
func_prime_check(1);
func_prime_check(2);
func_prime_check(3);
func_prime_check(5);
func_prime_check(13);
func_prime_check(20);

for (int x = 0; x <= 100; x++) { func_prime_check(x); }

//Smart Pointer: may be needed down the road
//std::unique_ptr<prime_check> ptr_prime_check<new prime_check>;

//dynamic input 
std::cout << "Input number to check prime status: \n";
bool b_done = (one_and_done == "Done" or "done") ? false : true;
do  {
	std::cin >> prime_input;
	func_prime_check(prime_input);
	
} while (b_done);



std::cout << "Hello World! \n";
printf("Hello World! \n");

if (one_and_done == "Done" or "done") { exit; }

return 0;
}