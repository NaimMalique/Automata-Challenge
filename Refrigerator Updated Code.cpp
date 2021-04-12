/* Muhammad Naim Bin Abdul Malek  1722937 */
// Muhammad Hafiq Bin Mohd Bekeri 1721973
#include <iostream>
//#include <time.h>

using namespace std;

int
main ()
{
  string accept = "YES";
  string reject = "NO";
  string ans1, ans2, ans3, ans4;


  cout << "~~~~~AIR CONDITIONER [SLICK]~~~~~\n" << endl;

  cout << "Human Present?\nYES or NO: ";
  cin >> ans1;

  if (ans1 == accept)
      cout << "ALLOW TO OPERATE" << endl;

  else
    {
      cout << "THE OPERATION IS NOT ALLOWED" << endl;
      return 0;
    }
    
    //sleep(2);
    cout << "\nHot temp !, set Temp within 16 degree celsius?\nYES or NO: " ;
    cin >> ans2;
    
    if(ans2== accept)
        cout<<"CONTINUE TO OPERATE" << endl;
    
    else if (ans2 == reject)
        cout<<"CONTINUE TO OPERATE" << endl;
    
    else
    {
        cout<<"Invalid operation"<<endl;
        return 0;
    }
    
    cout << "\nSuitable temp !, set Temp to 24 degree celsius?\nYES or NO: ";
    cin >> ans3;
    
    if(ans3== accept)
        cout<<"CONTINUE TO OPERATE" << endl;
    
    else if (ans3 == reject)
        cout<<"CONTINUE TO OPERATE" << endl;
    
    else
    {
        cout<<"Invalid operation"<<endl;
        return 0;
    }

    cout << "\nSwing airflow to cool down all angle\nYES or NO: ";
    cin >> ans4;
    
    if(ans4== accept)
        cout<<"CONTINUE TO OPERATE" << endl;
    
    else if (ans4 == reject)
        cout<<"CONTINUE TO OPERATE" << endl;
    
    else
    {
        cout<<"Invalid operation"<<endl;
        return 0;
    }

  return 0;
}
