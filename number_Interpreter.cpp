#include<iostream>
#include<string>
enum class number_Bounds
{
	LOWEST_VALUE = -999999,
	HIGHEST_VALUE = 999999,
	MAX_DIGITS = 6
}high_Val, low_Val, max_Num_Of_Digits;

std::string convert_Num_To_String(int num);
std::string convert_Num_To_Eng(std::string);
void display_num(std::string);
void fragment_Number(std::string);
bool is_Negetive(std::string num);
int main()
{
	high_Val = number_Bounds::HIGHEST_VALUE;
	low_Val = number_Bounds::LOWEST_VALUE;

	int num_Tracker = 0;
	std::string num = { 0 };
	for (int i = (int)low_Val; i < (int)high_Val; i++)
	{
		num_Tracker = i;
		num = convert_Num_To_String(i);
																																			// call a function to see if the number is negetive use it in the display function 
		fragment_Number(num);


	}


	return 0;
}

std::string convert_Num_To_String(int num)
{
	std::string num_As_A_String = std::to_string(num);
	return num_As_A_String;
}



void display_num(std::string)
{



}

void fragment_Number(std::string number_In_Str_format)																																	// This function should return an int?.....
{
	max_Num_Of_Digits = number_Bounds::MAX_DIGITS;																																		// this  may be palttry the for loop in the main wont go over 999,999
	int string_len = number_In_Str_format.length();																																		// gets length of the string
	std::string temp;
	int ones = 0;
	int tens = 0;
	int hundreds = 0;
	int thousands = 0;
	int ten_Thousands = 0;
	int hundred_Thousands = 0;
	int string_As_An_Int = std::stoi(number_In_Str_format);																																// converted from string to int
	int trace = (int)max_Num_Of_Digits;

	for (int i = (string_len - 1); i > 0; i--)
	{

		if ((int)number_In_Str_format[i] > (char)48 && (int)number_In_Str_format[i] <= (char)57 && trace == (int)max_Num_Of_Digits)														// explain this...
		{
			temp = number_In_Str_format[i];																																				// holds the char to atemp string
			ones = std::stoi(temp);																																						// convert the string char to int and assign it to ones variable...


		}

		else if ((int)number_In_Str_format[i] > (char)48 && (int)number_In_Str_format[i] <= (char)57 && trace == (int)max_Num_Of_Digits - 1)
		{
			temp = number_In_Str_format[i];
			tens = std::stoi(temp);


		}

		else if ((int)number_In_Str_format[i] > (char)48 && (int)number_In_Str_format[i] <= (char)57 && trace == (int)max_Num_Of_Digits - 2)
		{
			temp = number_In_Str_format[i];
			hundreds = std::stoi(temp);


		}

		else if ((int)number_In_Str_format[i] > (char)48 && (int)number_In_Str_format[i] <= (char)57 && trace == (int)max_Num_Of_Digits - 3)
		{
			temp = number_In_Str_format[i];
			thousands = std::stoi(temp);


		}

		else if ((int)number_In_Str_format[i] > (char)48 && (int)number_In_Str_format[i] <= (char)57 && trace == (int)max_Num_Of_Digits - 4)
		{
			temp = number_In_Str_format[i];
			ten_Thousands = std::stoi(temp);
		}

		else if ((int)number_In_Str_format[i] > (char)48 && (int)number_In_Str_format[i] <= (char)57 && trace == (int)max_Num_Of_Digits - 5)
		{
			temp = number_In_Str_format[i];
			hundred_Thousands = std::stoi(temp);

		}

		trace--;


	}


}

bool is_Negetive(std::string num)
{
	bool flag = false;
	if (num[0] == '-')
	{
		flag = true;
	}

	return flag;

}

