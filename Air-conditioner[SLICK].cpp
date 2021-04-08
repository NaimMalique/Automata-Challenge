
/** Muhammad Naim Bin Abdul Malek 
    1722937 **/
#include <iostream>
//#include <time.h>

using namespace std;

int
main ()
{
  string accept = "yes";
  string reject = "no";
  string ans1, ans2, ans3, ans4;


  cout << "AIR CONDITIONER [SLICK]" << endl;

  cout << "Human Present? " << endl;
  cin >> ans1;

  if (ans1 == accept)
    {
      cout << "ALLOW TO OPERATE" << endl;

    }
  else
    {
      cout << "THE OPERATION IS NOT ALLOWED" << endl;
      return 0;

    }
    
    //sleep(2);
    cout << "Hot temp !, set Temp within 16 degree celsius? " << endl;
    cin>>ans2;
    
    if(ans2== accept){
        cout<<"CONTINUE TO OPERATE" << endl;
    }
    else if (ans2 == reject){
        cout<<"CONTINUE TO OPERATE" << endl;
    }
    else{
        cout<<"Invalid operation"<<endl;
        return 0;
    }
    
    cout << "Suitable temp !, set Temp to 24 degree celsius? " << endl;
    cin>>ans3;
    
    if(ans3== accept){
        cout<<"CONTINUE TO OPERATE" << endl;
    }
    else if (ans3 == reject){
        cout<<"CONTINUE TO OPERATE" << endl;
    }
    else{
        cout<<"Invalid operation"<<endl;
        return 0;
    }

    cout << "Swing airflow to cool down all angle >> " << endl;
    cin>>ans4;
    
    if(ans4== accept){
        cout<<"CONTINUE TO OPERATE" << endl;
    }
    else if (ans4 == reject){
        cout<<"CONTINUE TO OPERATE" << endl;
    }
    else{
        cout<<"Invalid operation"<<endl;
        return 0;
    }

  return 0;
}
