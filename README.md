# Binary-searching
binary searching for sorted array , O(log2(array_size).

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
