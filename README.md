# iterator
To stop doing shitty loops

# How to use it

```c
void	init_iterator(int iter[], int size);
int	iter(int size, int iter[], int maxes[]);
```
init_iterator is used to init the iterator...
iter is used to iterates

### Exemple

#### using it 🥰

```c
void	test(void)
{
	static int	it[3];
	static int	maxes[3] = {4, 4, 4};

	init_iterator(it, 3);
	while (iter(3, it, maxes))
		printf("x:\t%i, y:\t%i, z:\t%i\n", it[0], it[1], it[2]);
}
```

#### without using it 🤬

```c
void	test(void)
{
	static int	it[3];
	static int	maxes[3] = {4, 4, 4};

	init_iterator(it, 3);
	while (iter(3, it, maxes))
		printf("x:\t%i, y:\t%i, z:\t%i\n", it[0], it[1], it[2]);
}
```
