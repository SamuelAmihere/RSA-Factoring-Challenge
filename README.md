# RSA Factoring Challenge

This repository contains two programs to factorize RSA numbers into their prime factors. The challenges involve finding the prime factors `p` and `q` of a given RSA number `n`.

## Challenge 1: Factorize Numbers

The first challenge is to factorize a list of numbers into two smaller numbers. The program takes a file containing natural numbers, one number per line, and factors each number into `n = p * q`, where `p` and `q` don't have to be prime numbers.

### Usage

1. Clone the repository:
```
git clone https://github.com/SamuelAmihere/RSA-Factoring-Challenge.git
```

2. Compile the code:
```
gcc -o factors factors.c fact.c
```


3. Run the program:
```
./factors <file>
```


Replace `<file>` with the path to the input file containing the natural numbers to factorize.

The program will output the factorization of each number in the format `n = p * q`.

### Example

Input file (`numbers.txt`):
```
4
12
34
```


Command:
```
./factors numbers.txt
```


Output:


```
4 = 2 * 2
12 = 6 * 2
34 = 17 * 2
```


## Challenge 2: Prime Factorization

The second challenge is to factorize a single RSA number into two prime numbers `p` and `q`. The program takes a file containing a single RSA number and finds the prime factors `p` and `q` such that `n = p * q`.

### Usage

1. Clone the repository:
```
git clone https://github.com/SamuelAmihere/RSA-Factoring-Challenge.git
```


2. Compile the code:
```
gcc -o rsa rsa.c fact.c
```


3. Run the program:
```
./rsa <file>
```


Replace `<file>` with the path to the input file containing the RSA number.

The program will output the prime factorization of the number in the format `n = p * q`.

### Example

Input file (`rsa-number.txt`):
```
77
```


Command:
```
./rsa rsa-number.txt
```


Output:
```
77 = 11 * 7
```


## Limitations

The programs assume that the input numbers are valid and greater than 1. They can handle reasonably sized RSA numbers within a time limit of 5 seconds. However, for extremely large numbers, the factorization may take longer or exceed the time limit.

## Contributing

Contributions to the codebase are welcome. If you encounter any issues or have suggestions for improvements, please open an issue or submit a pull request.

# Author
[Samuel Amihere](https://github.com/SamuelAmihere)
