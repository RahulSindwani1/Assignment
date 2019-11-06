
#include <iostream>
#include <iomanip>
#include<algorithm> 
#include<vector> 
using namespace std;

void reverseArray(int *arr, int start, int end) 
{ 
    if (start >= end) 
    return; 
      
    int temp = arr[start];  
    arr[start] = arr[end]; 
    arr[end] = temp; 
      
    // Recursive Function calling 
    reverseArray(arr, start + 1, end - 1);  
}    
double maxAverage(int *arr,int inputSize)
{
    double sum=arr[0];
    double maxAverage=arr[0];
    for(int i=1;i<inputSize;i++)
    {
        sum+=arr[i];
        if(maxAverage< (sum/(i+1))){
            maxAverage=sum/(i+1);
        }
    }
    return maxAverage;
}
int main()
{
    int numberOfInputs;
    cin>>numberOfInputs;
    int array[numberOfInputs];
    for(int i=0;i<numberOfInputs;i++)
        cin>>*(array+i);    
    //size_t size = sizeof(array) / sizeof(array[0]);
    double maxAverageA=maxAverage(array,numberOfInputs);
    reverseArray(array,0,numberOfInputs-1);
    double maxAverageB=maxAverage(array,numberOfInputs);
    double result=maxAverageA;
    if(maxAverageB>maxAverageA)
        result=maxAverageB;
    if(result<0.0f)
        result=0.0f;
    cout<<fixed<<setprecision(9)<<result;
    return 0;
    
}
