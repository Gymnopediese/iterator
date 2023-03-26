# iterator
To stop doing shitty loops

# How to use it

```c
void	init_iterator(int iter[], int size);
int	iter(int size, int iter[], int maxes[]);
```
init_iterator is used to init the iterator... <br>
iter is used to iterates, return 0 when finished.

### Exemple

#### using it 🥰

```c
void	test(void)
{
	static int	it[3];
	static int	maxes[3] = {100, 100, 100};

	init_iterator(it, 3);
	while (iter(3, it, maxes))
		printf("x:\t%i, y:\t%i, z:\t%i\n", it[0], it[1], it[2]);
}
```

#### without using it 🤬

```c
void	bad_test(void)
{
	static int	it[3];

	it[0] = -1;
	while (++it[0] < 100)
	{
		it[1] = -1;
		while (++it[1] < 100)
		{
			it[2] = -1;
			while (++it[2] < 100)
			{
				printf("x:\t%i, y:\t%i, z:\t%i\n", it[0], it[1], it[2]);
			}
		}
	}
}
```
#### the weird way 🥴
```c
void	weird_test(void)
{
	int	i;

	i = -1;
	while (++i < 100 * 100 * 100)
		printf("x:\t%i, y:\t%i, z:\t%i\n", (i / (100 * 100)), (i / 100) % 100, i % 100);
}
```

# SPEED

##### with it:
```c
//./a.out  0,34s user 0,56s system 3% cpu 25,093 total
//./a.out  0,34s user 0,55s system 3% cpu 23,038 total
//./a.out  0,33s user 0,53s system 3% cpu 24,385 total
```
##### without it:
```c
//./a.out  0,33s user 0,54s system 3% cpu 23,625 total
//./a.out  0,34s user 0,57s system 3% cpu 25,084 total
//./a.out  0,34s user 0,56s system 3% cpu 24,721 total
```
it's the same except for:
##### the weird way it:
```c
//./a.out  0,33s user 0,56s system 3% cpu 24,816 total
//./a.out  0,35s user 0,60s system 3% cpu 27,727 total
//./a.out  0,33s user 0,55s system 3% cpu 25,383 total
```


