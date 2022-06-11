#include<iostream>

using  namespace std;

int count=0;
int majorityElement(int nums[],int n)
{
    int c=0,c2=0,maj;
    for(int i =0;i<n;i++)
    {
        for(int j =0;j<n;j++)
        {
            if(nums[i] ==nums[j])
            {
                c++;
            }
            if(c > c2){
                c2=c;
                maj = nums[i];
            }
        }
    }
    if(c2 >= (n/2))
    {
        return maj;
    }
    return 0;
}
int main()
{
    int n;
    cout<<"\nEnter array length:";
    cin>>n;
    int arr[n];
    cout<<"\nEnter array elements :";
    for(int i =0;i<n;i++)
    {
        cin>>arr[i];
    }

    cout<<"\nMajority number :"<<majorityElement(arr,n);
}
