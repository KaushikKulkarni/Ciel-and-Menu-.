#include<iostream>
#include<string>
#include<cstdlib>
/**
*@file   CielMenu.cpp
*@Title  Ciel and  Menu.
*@author Kaushik G Kullkarni
*@brief  This is one easy problem from the site CodeChef.com using the function of string manipulation .
**/

using namespace std ;

int main()
{
    string input ;/** This variable is used to take the input string from the user,Also note though the input would be of integer type I am taking string according to the flexibility of PS*/
    string manip ;/**This is used to store the manipulated string .Which is basically a substring of the string input . */
    cout << "Please input the number on the wooden board ."<<endl ;
    cin >> input ;
    int result ; /** This is just used to store the integer form of the manipulated string .*/
    int count = 0 ;/** This is used to count th total number of possibilities corresponding to the PS. */
    int length = input.length() ; /**Clearly the length variable is used to store the length of the input string .*/
    for (int i =0 ;i <length ; i++)
    {
        for (int j =1 ;j <= length - i ; j ++)
        {
            manip = input.substr(i , j) ;
            result = atoi(manip.c_str()) ;
            if (result % 8 == 0)
            {
                count ++ ;
            }
           
        }
    }
    cout << count << endl ; ;
}
