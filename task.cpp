// C++  Program : Insert Element in Array
#include<iostream>
using namespace std;

int main()
{
	int row,column;
	cout<<"Enter Row Size : ";
	cin>>row;
	cout<<"Enter Column Size : ";
	cin>>column;	
    int arr[row][column];
    int evennum[row*column];
    int oddnum[row*column];
    int even =-1;
    int odd =-1;
        for(int i=0; i<row; i++)
        {
            for(int j=0; j<column; j++)
            {
            	cout<<"Enter Element of [" << i << "][" << j << "] : "<<endl;
                cin>>arr[i][j];
                if(arr[i][j] % 2 == 0){
                	even++;
                	evennum[even] = arr[i][j];
				} else {
					odd++;
					oddnum[odd] = arr[i][j];
				}
            }
        }
        cout<<"EVEN NUMBER IS : ";
        
        for(int i=0;i<=even;i++){
        	cout<<evennum[i]<<endl;
		}
		cout<<"ODD NUMBER IS : ";
		for(int i=0;i<=even;i++){
        	cout<<oddnum[i]<<endl;
		}        
        
        cout<<endl;
        
        
        
        
        
        
}
