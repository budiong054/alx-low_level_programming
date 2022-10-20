# 0x1A. C - Hash tables

### 0.>>> ht = {}
[0-hash\_table\_create.c](https://github.com/budiong054/alx-low_level_programming/blob/master/0x1A-hash_tables/0-hash_table_create.c) contains a function that creates a hash table.
- Prototype: `hash_table_t *hash_table_create(unsigned long int size);`
	- where `size` is the size of the array
		
### 1. djb2
[1-djb2.c](https://github.com/budiong054/alx-low_level_programming/blob/master/0x1A-hash_tables/1-djb2.c) contains a hash function that implement the djb2 algorithm
- Prototype: `unsigned long int hash_djb2(const unsigned char *str);`

### 2. key -> index
[2-key\_index.c](https://github.com/budiong054/alx-low_level_programming/blob/master/0x1A-hash_tables/2-key_index.c) contains a function that gives you the index of a key.
- Prototype: `unsigned long int key_index(const unsigned char *key, unsigned long int size);`
	- where `key` is the key
	- and `size` is the size of the array of the hash table

### >>> ht['betty'] = 'cool'
[3-hash\_table\_set.c](https://github.com/budiong054/alx-low_level_programming/blob/master/0x1A-hash_tables/3-hash_table_set.c) contains a function that adds an element to hash table.
- Prototype: `int hash_table_set(hash_table_t *ht, const char *key, const char *value);`
	- where `ht` is the hash table you want to add or update the key/value
	- `key` is the key. `key` can't be an empty string
	- and `value` is the value associated with the key. `value` must be duplicated. `value` can be an empty string
- Returns: `1` if it succeeded, `0` otherwise

### >>> ht['betty']
[4-hash\_table\_get.c](https://github.com/budiong054/alx-low_level_programming/blob/master/0x1A-hash_tables/4-hash_table_get.c) contains a function that retrieves a value associated with a key.
- Prototype: `char *hash_table_get(const hash_table_t *ht, const char *key);`
	- where `ht` is the hash table you want to look into
	- and `key` is the key you are looking for
- Returns the value associated with the element, or `NULL` if `key` is not found

### >>> print(ht)
[5-hash\_table\_print.c](https://github.com/budiong054/alx-low_level_programming/blob/master/0x1A-hash_tables/5-hash_table_print.c) contains a function that prints hash table.
- Prototype: `void hash_table_print(const hash_table_t *ht);`
	- where `ht` is the hash table
- Printing is done in order that the appear in the array of the hash table
	- Order: array, list
- Print nothing if `ht` is NULL

### >>> del ht
[6-hash\_table\_delete.c](https://github.com/budiong054/alx-low_level_programming/blob/master/0x1A-hash_tables/6-hash_table_delete.c) contains a function that deletes a hash table.
- Prototype: `void hash_table_delete(hash_table_t *ht);`
	- where `ht` is the hash table
