// 1. array will go out of scope so nothing will be returned. the function returns a reference to a local variable

int &doSomething(int *arr)
{
  return arr[3];
}

// 2. The recursion will not terminate. need to have a base case

int sumTo(int value)
{
  if (value == 0)
    return 0;
  else
    return value + sumTo(value - 1);
}

// 3. function overloading is not allowed for two functions only differ by return type. because at compile time it is sometimes impossible to tell the return type.
// also potential divide by 0 issue

// 4. will be a stack overflow - need to be dynamically allocated

// 5. no validation check
// need to convert it from char to int


