#pragma once

/** 13.2 Compare and contrast a hash table vs. an STL map. How is a hash table implemented?
 * If the number of inputs is small, what data structure options can be used instead of a hash table?
 * ===================================================================================================
 * In a hash table, a value is stored by applying hash function on a key. Thus, values are not stored
 * in a hash table in sorted order. Additionally, since hash tables use the key to find the index that
 * will store the value, an insert/lookup can be done in amortised O(1) time (assuming only a few
 * collisions in the hashtable). One must also handle potential collisions in a hashtable.
 *
 * In an STL map, insertion of key/value pair is in sorted order of key.
 * It uses a tree to store values, which is why an O(log N) insert/lookup is required.
 * There is also no need to handle collisions. An STL map works well for things like:
>> find min element
>> find max element
>> print elements in sorted order
>> find the exact element or, if the element is not found, find the next smallest number

 * How is a hash table implemented?
1. A good hash function is required (e.g.: operation % prime number)
to ensure that the hash values are uniformly distributed.
2. A collision resolving method is also needed: chaining (good for dense table entries),
probing (good for sparse table entries), etc.
3. Implement methods to dynamically increase or decrease the hash table size on a given criterion.
For example, when the [number of elements] by [table size] ratio is greater than the fixed threshold,
increase the hash table size by creating a new hash table and transfer the entries from the old table
to the new table by computing the index using new hash function.

 * What can be used instead of a hash table, if the number of inputs is small?
You can use an STL map. Although this takes O(log n) time, since
the number of inputs is small, this time is negligible.
**/

