// array is the array to search over.
// target is the value we're trying to determine exists or not.
// min is the index of the lower bounds of the array we're searching.
// max is the index of the upper bounds of the array we're searching.
// binarySearch() should return the index of the target element if the target is found, -1 otherwise

int binarySearch(int *array, int target, int min, int max)
{
  int mid = 0; // initialise the int variable

  mid = (max + min) / 2; // take the medium position.

  // not found
  if (min > max)
    return -1;
  
  //base case
  else if (array[mid] == target)
    return mid;
  

  // otherwise update the windows
  else if (target < array[mid])
    return binarySearch(array, target, min, mid - 1);
  
  else
    return binarySearch(array, target, mid + 1, max);

}

int binarySearchIterative(int *array, int target, int min, int max)
{
 int mid(0); // initiate mid
 
 do
 {
  mid = (min + max)/2; // should be an integer

    // if mid is a match, directly return the value
  if (target == array[mid])
  {
    return mid;
  }

  // if target is smaller than the value at mid then shrink the window to the first half
  else if (target < array[mid])
  {
    max = mid - 1;
  }

  // if the target is larger than the value at mid then update the window to the second half.
  else
  {
    min = mid + 1;
  }

 } while (min <= max);

 return -1;
 
}
 