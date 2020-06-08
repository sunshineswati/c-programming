#include <iostream>
#include<string>
using namespace std;

int main() {
    int T;
    char str[100];
    cin>>T;
    //int count=0;
    for(int i=0;i<T;i++)
    {
    	int count=0;
        cin.getline(str,100);
        for(int j=0;str[j]!='\0';j++)
        {
            if((str[j]=='g')&&(str[j+1]=='f')&&(str[j+2]=='g'))
            {
                count++;
            }
        }
        cout<<count<<endl;
    }
    
	//code
	return 0;
}
