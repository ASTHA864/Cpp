int BinarySearch(int n)
{
    int start = 0;
    int end = n;
    long long int ans = -1;
    while(start <= end)
    {
         long long int mid = start + ((end - start) / 2);
    
       long long int sqaure = mid * mid;
        if( sqaure == n)
        {
            return mid;
        }
       else if( sqaure < n)
        {
             ans = mid;
            start = mid + 1 ;
        }
        else
        {
           
           end = mid - 1;
        }
        
    }
    return ans;
}

 int floorSqrt(int n)
{
   return  BinarySearch(n);
}