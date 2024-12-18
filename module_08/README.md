# Exercise : 00 Easy find

- create a function easyfind that accept a type T,
    it takes the first one has type T and the second has integer
  - if the function find this a value return same value
  - if the funtion doesn't find anything should return "error value of your choice" or exception

# Exercise 01: Span

- create a Span class :
    - that can store a maximum of N integers.
    - N is an unsigned int
    - will be the only parameter passed to the constructor
    - create a function called addNumber() to add a single number
        - should order to fill it, Any attempt to add a new element if there
        - are already N elements stored should throw an exception-
    - create function shortestSpan()
        - return the shortest span
        - or throw an exception
    - create function longestSpan()
        - return the longest span
        - or throw an exception

### notice
- Test your Span at least with a minimum of 10 000 numbers
- it would be wonderful to fill your Span using a 'range of iterators'

# Exercise 02: Mutated abomination
- use std::stack containers
- Write a MutantStack class 
    - It will be 'implemented in terms of a std::stack'
    - I can use all iterators feature.


## Containers in C++ STL (Standard Template Library)

The Standard Template Library in C++, STL types plus explains

## Sequence containers

Sequence containers implement data structures that can be accessed sequentially.

Elements are stored in a specific order, like a line.


array Static contiguous array
vector Dynamic contiguous array
deque Double-ended queue
forward_list Singly-linked list
list Doubly-linked list

## Associative containers

Associative containers implement sorted data structures that can be quickly searched (O(log n) complexity).

Elements are stored in a sorted order based on a key.

Keys must be unique (no duplicates).

You can efficiently search for elements using their key.

- Set Collection of unique keys, sorted by keys
- Map Collection of key-value pairs, sorted by keys, keys are unique.
- multiset Collection of keys, sorted by keys
- multimap Collection of key-value pairs, sorted by keys

## Unordered associative containers

Unordered associative containers implement unsorted (hashed) data structures that can be 
quickly searched (O(1) amortized, O(n) worst-case complexity).

Elements are stored in a hash table for faster average lookups (like a phone book index).

Keys can be duplicate, but element order isn't guaranteed.

- unordered_set Collection of unique keys, hashed by keys.
- unordered_map Collection of key-value pairs, hashed by keys, keys are unique.
- unordered_multiset Collection of keys, hashed by keys
- unordered_multimap Collection of key-value pairs, hashed by keys

## Container adapters

Container adapters provide a different interface for sequential containers.

These don't store data themselves, but provide a specific interface on top of existing containers.

Useful when you need specific data structures like stacks or queues without managing the underlying container.

- stack Adapts a container to provide stack (LIFO data structure).
- queue Adapts a container to provide queue (FIFO data structure).
- priority_queue Adapts a container to provide priority queue. 


### NOTICE

- Sequence containers: When order matters and you need random access.
- Associative containers: For fast lookups by unique keys.
- Unordered associative containers: When order doesn't matter and you need very fast average lookups.
- Container adapters: To implement specific data structures like stacks or queues

        
        // The line std::stack<int> s(mstack); initializes a standard stack s using the contents of the MutantStack object mstack.
        // This means that the elements in mstack are copied into the new stack s.
        
        // Here is a step-by-step explanation:
        
        // MutantStack<int> mstack; creates an instance of MutantStack that holds integers.
        // Elements are pushed onto mstack using the push method.
        // std::stack<int> s(mstack); creates a new standard stack s and initializes it with the elements from mstack.
        // This allows you to use the standard stack functionalities with the elements that were originally in the MutantStack.
        
        // futeares of containers
        // stack: LIFO, no iterators, no access to elements, no insertions or deletions except at the top.
        // queue: FIFO, no iterators, no access to elements, no insertions or deletions except at the front and back.
        // vector:  Dynamic array, iterators available, allows insertions and deletions at any position.
        // deque: Dynamic array, iterators available, allows insertions and deletions at any position.
        // It also supports random access to elements, similar to std::vector
        // list: Doubly linked list (which means that each element points to the previous and next), iterators available, allows insertions and deletions at any element
        // supports bidirectional iterators.
        
        // An iterator like a pointer that points to an element inside the container.
  
