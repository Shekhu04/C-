#include <iostream>
using namespace std;

int main()
{
    int n;
    //cout<<"Enter the number of problems in the contest: ";
    cin>>n;
    
    int k;
    //cout<<"Enter the time required to reach the party: ";
    cin>>k;
    
    int timeinhand = 240 - k;
    int timeused = 0;
    int count = 0;
    
    for (int i = 1; i<=n; i++)
    {
      timeused = timeused + (i*5);
      count++;
      if(timeused > timeinhand)
    {
        count = count -1;
        break;
    }
        else if (timeused == timeinhand)
            break;
    }
    cout<<count<<endl;
}
