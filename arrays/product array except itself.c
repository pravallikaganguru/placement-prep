int* productExceptSelf(int* nums, int numsSize, int* returnSize) 
{
    int prefix[numsSize];
    int suffix[numsSize];
    int* ans=(int*) malloc(numsSize*sizeof(int));
    int i,j;
    prefix[0]=1;
    suffix[numsSize-1]=1;
    for(i=1;i<numsSize;i++)
    {
        prefix[i]=prefix[i-1]*nums[i-1];
    }
    for(i=numsSize-2;i>=0;i--)
    {
        suffix[i]=suffix[i+1]*nums[i+1];
    }
    for(i=0;i<numsSize;i++)
    {
        ans[i]=prefix[i]*suffix[i];
    }
    *returnSize = numsSize;
    return ans;


    
}