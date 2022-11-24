Link List

Vectors are the same as dynamic arrays with the ability to resize itself automatically when an element is inserted or deleted, with their storage being handled automatically by the container.<br />
Inserting at the end takes differential time, as sometimes the array may need to be extended. <br />
Removing the last element takes only constant time because no resizing happens. <br />
Inserting and erasing at the beginning or in the middle is linear in time.

### Starting - Vector1

Begin() - Returns an iterator pointing to the first element in the vector <br /><br />
end() - Returns an iterator pointing to the theoretical element that follows the last element in the vector <br /><br />
rbegin() - Returns a reverse iterator pointing to the last element in the vector (reverse beginning). It moves from last to first element <br /><br />
rend() - Returns a reverse iterator pointing to the theoretical element preceding the first element in the vector (considered as reverse end)<br /><br />
cbegin() - Returns a constant iterator pointing to the first element in the vector.<br /><br />
cend() - Returns a constant iterator pointing to the theoretical element that follows the last element in the vector.<br /><br />
crbegin() - Returns a constant reverse iterator pointing to the last element in the vector (reverse beginning). It moves from last to first element<br /><br />
crend() - Returns a constant reverse iterator pointing to the theoretical element preceding the first element in the vector (considered as reverse end)<br /><br />

### Capacity - Vector2 

push_back - Pushes Element<br />
auto - A standard container which offers fixed time access to individual elements in any order.<br />
size() – Returns the number of elements in the vector.<br />
max_size() – Returns the maximum number of elements that the vector can hold.<br />
capacity() – Returns the size of the storage space currently allocated to the vector expressed as number of elements.<br />
resize(n) – Resizes the container so that it contains ‘n’ elements.<br />
empty() – Returns whether the container is empty.<br />
shrink_to_fit() – Reduces the capacity of the container to fit its size and destroys all elements beyond the capacity.<br />
reserve() – Requests that the vector capacity be at least enough to contain n elements.<br /><br />

### Element Access - Vector3

reference operator [g] – Returns a reference to the element at position ‘g’ in the vector <br />
at(g) – Returns a reference to the element at position ‘g’ in the vector<br />
front() – Returns a reference to the first element in the vector<br />
back() – Returns a reference to the last element in the vector<br />
data() – Returns a direct pointer to the memory array used internally by the vector to store its owned elements.<br /><br />

### Modifiers - Vector4

assign() – It assigns new value to the vector elements by replacing old ones<br />
push_back() – It push the elements into a vector from the back<br />
pop_back() – It is used to pop or remove elements from a vector from the back.<br />
insert() – It inserts new elements before the element at the specified position<br />
erase() – It is used to remove elements from a container from the specified position or range.<br />
swap() – It is used to swap the contents of one vector with another vector of same type. Sizes may differ.<br />
clear() – It is used to remove all the elements of the vector container<br />
emplace() – It extends the container by inserting new element at position<br />
emplace_back() – It is used to insert a new element into the vector container, the new element is added to the end of the vector<br />

