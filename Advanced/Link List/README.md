Link List

Vectors are the same as dynamic arrays with the ability to resize itself automatically when an element is inserted or deleted, with their storage being handled automatically by the container.<br />
Inserting at the end takes differential time, as sometimes the array may need to be extended. <br />
Removing the last element takes only constant time because no resizing happens. <br />
Inserting and erasing at the beginning or in the middle is linear in time.

Begin() - Returns an iterator pointing to the first element in the vector <br /><br />
end() - Returns an iterator pointing to the theoretical element that follows the last element in the vector <br /><br />
rbegin() - Returns a reverse iterator pointing to the last element in the vector (reverse beginning). It moves from last to first element <br /><br />
rend() - Returns a reverse iterator pointing to the theoretical element preceding the first element in the vector (considered as reverse end)<br /><br />
cbegin() - Returns a constant iterator pointing to the first element in the vector.<br /><br />
cend() - Returns a constant iterator pointing to the theoretical element that follows the last element in the vector.<br /><br />
crbegin() - Returns a constant reverse iterator pointing to the last element in the vector (reverse beginning). It moves from last to first element<br /><br />
crend() - Returns a constant reverse iterator pointing to the theoretical element preceding the first element in the vector (considered as reverse end)<br /><br />