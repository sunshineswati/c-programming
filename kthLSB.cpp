#include <iostream>
using namespace std;

int main() {
    int T;
    int num,k,a[101],j;
    cin>>T;
    for(int i=0;i<T;i++)
    {
        cin>>num;
        cin>>k;
        j=0;
        while(num>0)
        {
            a[j]=num%2;
            j++;
            num=num/2;
        }
        cout<<a[k-1];
    }
	//code
	return 0;
}
