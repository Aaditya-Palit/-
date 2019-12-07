  #include<stdio.h>
 int main()
{
  int arr[] = {14,9,10,8,6,24,22,3,5,20,1};
  int arr_size = 11;
  struct pair minmax = getMinMax(arr, 0, arr_size-1);
  printf(" Minimum element is %d", minmax.min);
  printf(" Maximum element is %d", minmax.max);
  getchar();
}
 struct pair
 {
     int min;
     int max;
 };
 struct pair getMaxMin( int arr[], int low, int high)
 {
     int mid;
     struct pair minmax, mmleft,mmright;

     if(low==high)      // for one element
     {
         minmax.min=low;    // or equivalent to 'high'
         minmax.max=low;
         return minmax;
     }
     if (high == low + 1)   // if there is 2 elements
  {
     if (arr[low] > arr[high])
     {
        minmax.max = arr[low];
        minmax.min = arr[high];
     }
     else
     {
        minmax.max = arr[high];
        minmax.min = arr[low];
     }
     return minmax;
  }
  mid = (low + high)/2;   // for more than 2 elements
  mmleft = getMinMax(arr, low, mid);
  mmright = getMinMax(arr, mid+1, high);

  if (mmleft.min < mmright.min)     //to compare minimum of Two parts
    minmax.min = mmleft.min;
  else
    minmax.min = mmright.min;

  if (mmleft.max > mmright.max)
    minmax.max = mmleft.max;
  else
    minmax.max = mmright.max;

  return minmax;
 }
