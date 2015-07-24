# C-EXERCISES


1. Given an natural number input n, write the following function

a) Check if n is a prime number.
    
    int is_prime(int n) {
    }
    
    The function returns 1 if n is a prime, otherwise it returns 0
    
b) Count the number of divisors that n has (E.g. 12 has six divisors, which are 1, 2, 3, 4, 6, 12)

int count_divisors(int n) {
}

For example, the function returns 6 if n = 12

c) Check if n is a square number (n is a square number if n = r^2 where r is a natural number)

int is_square(int n) {
}

The function returns 1 if n is square (for example, n = 9, 64, 125, ...) otherwise return 0

d) Compute n! = 1.2....n using loop

long lonng compute_factorial_iterative(int n) {
}


e) Compute n! using recursive function

long lonng compute_factorial_recursive(int n) {
}

f) Compute this sum S = 1 - 1/3 + 1/5 - 1/7 + ... - 1/(4n+3). Verify if S is approximate to pi/4 

double compute_sum(int n) {
}

2) Given n real numbers a0, a1, ..., an-1, and a number x. Write a separate function for each of the following tasks

a) Compute this sum S = a0^2 - a1^2 + a2^2 - ... + (-1)^n an^2

double compute_sum(double a[]) {
}

b) Check if there is an index i such that a_i = x

in find_element(double *a, x) {
}

c) Sort the array by their absolute values

double *sort_array(double *a) {
  return a;
}

For example, if a0 = -10, a1 = 20, a2 = 9, then after being sorted, the array looks like this

a0 = 9, a1 = -10, a2 = 20


d) Find a pair of two distinct indices 0=<i < j <=n such that ai + aj is largest. For example, given, a0 = 7, a1 = 3, a2 = 14, a3 =9, a4 = 24, a5 = 1. Then
return i = 2, j = 4

struct IndexPair {
  int index1;
  int index2;
};

IndexPair *find_pair_with_largest_sum(double *a) {

  IndexPair *index_pair;
}

return 0 (NULL pointer) if n = 1, otherwise return index_pair (IndexPair *index_pair) where index_pair->index1 = i and index_pair->index2 = j


3) We use the following data structure:

Struct Student {
  string name;
  string id;
  int age;
};

Input information for n students. Print the list of the students to the screen by

a) the alphabetic order of their names

void print_student_list_by_name(Student *student_list) {
}

b) their ages

void print_student_list_by_age(Student *student_list) {
}

For example, give three students

Nguyen Anh Tuan, Id = 00, Age = 17
Nguyen Hong Minh, Id = 01, Age = 37
Hoang Thi Hoa, Id = 02, Age = 20

Then a) will print out:

Hoang Thi Hoa, Id = 02, Age = 20
Nguyen Anh Tuan, Id = 00, Age = 17
Nguyen Hong Minh, Id = 01, Age = 37

and b) will print out:

Nguyen Anh Tuan, Id = 00, Age = 17
Hoang Thi Hoa, Id = 02, Age = 20
Nguyen Hong Minh, Id = 01, Age = 37

4) Given a data file "essay.txt" that contains an essay of a student. An example of content is

Hello, today is a beautiful day
I would like to go out for fun
Hochiminh city is a good destination

a) write a function that read the text file and return the number of lines in the file

int count_lines(string filename) {
}

b)  write a function that read the text file and return the number of lines that has a given word in it

int count_lines_with_word(string filename, string word) {
}

For example if word = "like", the function will return 1, while if word = "is", the function will return 2

5) Given a text file "data.txt" which has information of a matrix. Details are as follows

- The first row stores the number of rows
- The second row stores the number of columns
- The next rows are values of rows of the matrix separated by spaces

For example, for this matrix, A = [5 6 7
                                   8 9 10]
data.txt looks like this:

2
3
5 6 7
8 9 10
a) Write a function that  read the information from the file and print the matrix to the screen
b) Write a function that reads the matrix information from the data.txt file and return the matrix

struct Matrix {
  int row_num;
  int col_num;
  int **values;
};

Matrix *read_matrix(string filename) {
     int m;
     int n;
     
     // ... read m, n from the file
     
     int **A;
     
     // allocate memory for matrix A
     A = (int**)calloc(m, sizeof(int*));
     for (int i = 0; i < m; i++) {
          A[i] = (int*)calloc(n, sizeof(int));
     }
     
     // ... read values of the matrix from the file to A[i][j], ...
     
     Matrix *M;
     M->row_num = m;
     M->col_num = n;
     M->values = A;
     return M;
}

to return a matrix M. For the above example, [0][0] = 5, A[0][1] = 6, A[0][2] = 7, A[1][0] = 8, A[1][1] = 9, A[1][2] = 10



