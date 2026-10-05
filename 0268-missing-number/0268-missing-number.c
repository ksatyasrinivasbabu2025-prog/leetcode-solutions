int missingNumber(int* nums, int numsSize)
{
   int n=numsSize;
   int sum=0;
   for(int i=0;i<numsSize;i++)
   {
       sum=sum+nums[i];
   }
   int res=(n*(n+1)/2)-sum ;
   return res;
}