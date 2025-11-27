// Array
// 1. It stores same type of data type.
// 2. It stores at contigous location.

//  Declaration of array:
int a[1000];
//  Here, int =data type , a = array name , 1000 = size of array

//  Initialization of array:
int a[5] = {6, 8, 5, 1, 9};

int name[] = {3, 8, 2, 9}; // another way to initialize
// here, we have not declared any size to the array.It will adjustr accordingly.

// There are various ways we can initialize an array.We will see:
int a[5] = {8, 4}; // {8,4, 0, 0, 0}

int arr[5] = {0}; // {0,0,0,0,0}

int brr[5]; // {GV, GV, GV, GV, GV}  GV=Garbage value(anything)
