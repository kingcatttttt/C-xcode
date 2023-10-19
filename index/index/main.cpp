
#include <iostream>
#include <fstream>
using namespace std;
int arr[31] = {};
int save,input,BS = 0;
int test;
int inp(int a)
{
    if (arr[a] == 1)
    {
        arr[a] = 0;
    }
    else
    {
        arr[a] = 1;
    }
    if (a == -1) {
        for (int i = 0;  i < 31; i++) {
            arr[i] = 0;
        }
    }
    return  0;
}
int main()
{
    string firstFile = "data.txt";
    string secondFile = "datat.txt";
    ifstream inOne (firstFile);
    ifstream inTwo (secondFile);
    if (inOne.is_open() && inTwo.is_open())
    {
        
       
        for (int i = 0; i < 31; i++)
        {
            inOne >> arr[i];
        }
        inTwo >> save;
        cout << " | "<<save << " | " << "its index = x + 1" <<endl;
       
        ofstream outOne(firstFile);
        ofstream outTwo(secondFile);
        cin >> test;
        inp(test);
        
       
        for (int i = 0; i < 31; i++)
        {
            outOne << arr[i] <<endl;
            if (arr[i] == 1) {
                BS++;
            }
            
        }
        for (int i = 0; i < 31; i++)
        {
            cout << "|"<< arr[i] << "|";
            if (i % 10 == 0) {
                cout <<endl;
            }
        }
        
        cout << " | "<<BS << "|" <<endl;
        for (int i = 0;  i < 1; i++) {
            outTwo << BS <<endl;
        }
        
    }
    else
    {
        ofstream a("data.txt");
        ofstream b("datat.txt");
        cout << "files was mede restart the app :)" <<endl;
    }
}
