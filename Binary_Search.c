/*Author : Yomna Ragab*/
#include "std_types.h"
#include "Binary_Search.h"
/*

-->O(log2(arr_length))
1)first it puts the start and the end index to the top and the end of the array
2)as long as the end not eqal the start , which means , we didn't search all the elements yet.
3)then it get the index to the middle of the arr which is ((end-start)/2)+start
4)check if the middle element of the ary is equal to the value wanted to be founded
    if yes , break the loop , return true and put the index in the position
    if no , the check if the value is greater than the middle element or no
              if yes , then we have to search in the 2ed part of the array which means change the start index
                        start index=middle index+1
                        end index won't be changed
              if no , then we have to search in the 1st part of the array which means change the end index
                        end index= middle index-1
                        start index won't be changed
5) return to step number 2 .

*/

enumCheck BinarySearch(u32 * arr_ptr, u32 arr_length , u32 value, u32 * position)
{
  enumCheck status=False;
  *position=0;
  u32 start=0,end=arr_length-1;
  u32 i=(((end-start)/2)+start);
  while(!((start==end)&&(start==i)))
  {
    i=((((end-start)/2))+start);
    if(arr_ptr[i]==value)
    {
      status=True;
      *position=i;
      break;
    }
    else if(arr_ptr[i]<value)
    {
      start=i+1;
    }
    else
    {
      end=i-1;
    }
  }
  return(status);
}

/*****************TEST**************/

#include <stdio.h>
void main(void)
{
  u32 arr[10]={10,20,40,50,60,70,77,80,90,100};
  u32 i;
  enumCheck status= BinarySearch(arr , 10,100,&i);
  if(status==True)  printf("okay , %d",i);
  else              printf("NOkay, %d",i);

}
