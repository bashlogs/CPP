/*
    * Link LIst
    * Vectors are the same as dynamic arrays with the ability to resize itself automatically when an element is inserted or deleted, with their storage being handled automatically by the container.
    * Inserting at the end takes differential time, as sometimes the array may need to be extended. 
    * Removing the last element takes only constant time because no resizing happens. 
    * Inserting and erasing at the beginning or in the middle is linear in time.
    * 
    * Begin() - Returns an iterator pointing to the first element in the vector
    * end() - Returns an iterator pointing to the theoretical element that follows the last element in the vector
    * rbegin() - Returns a reverse iterator pointing to the last element in the vector (reverse beginning). It moves from last to first element
    * rend() - Returns a reverse iterator pointing to the theoretical element preceding the first element in the vector (considered as reverse end)
    * cbegin() - Returns a constant iterator pointing to the first element in the vector.
    * cend() - Returns a constant iterator pointing to the theoretical element that follows the last element in the vector.
    * crbegin() - Returns a constant reverse iterator pointing to the last element in the vector (reverse beginning). It moves from last to first element
    * crend() - Returns a constant reverse iterator pointing to the theoretical element preceding the first element in the vector (considered as reverse end)
    * 
*/