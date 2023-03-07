class Solution{
    public:
    // This function wants you to modify the given input
    // array and no need to return anything
    // arr: input array
    // n: size of array
    //Function to rearrange  the array elements alternately.
    void rearrange(long long *arr, int n) 
    { 
int* temp=new int[1000000];
long long int flag=true;
long long int small=0,large=n-1;
for(long long int i=0;i<n;i++)
{if(flag)
temp[i]=arr[large--];
else 
temp[i]=arr[small++];
flag=!flag;

}for(long long int i=0;i<n;i++)
{
    arr[i]=temp[i];
}
    }
};
