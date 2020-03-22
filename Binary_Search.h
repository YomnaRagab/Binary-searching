#ifndef Binary_Search
#define Binary_Search
typedef enum{
  False=0,
  True=1
}enumCheck;

enumCheck BinarySearch(u32 * arr_ptr, u32 arr_length, u32 value , u32 * position);
/*
  Func name: BinarySearch , it search sequentially into an array , to find a certain element.
  Arguments: arr_ptr: pointer to unsigned 32-bit integer , it's a pointer to an array to be searched.
             value: unsigned 32-bit integer, the value wanted to be found.
             arr_length:  unsigned 32-bit integer, the array length.
             position: pointer to unsigned 32-bit integer, the position of the values
             in the array ,if the value was founded.
 Return: enumCheck , It return true if the value is exist in the array.
                    It return fale if the value is not exist in the array.

*****************NOTE: array **must** be sorted !!******************* 
*/
#endif
