#include "ece4750.h"
#include "ubmark-sort.h"
#include "ubmark-sort.dat"

#include <iostream>
#include <cstdlib>
#include <ctime>

int** matrix_multiply(int** A, int** B) {
    // Calculate the sizes of the input matrices
    int n = sizeof(A) / sizeof(A[0]);
    int m = sizeof(A[0]) / sizeof(A[0][0]);
    int p = sizeof(B[0]) / sizeof(B[0][0]);

    // Allocate memory for the result matrix C
    int** C = new int*[n];
    for (int i = 0; i < n; i++) {
        C[i] = new int[p];
    }

    // Perform matrix multiplication
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < p; j++) {
            C[i][j] = 0;
            for (int k = 0; k < m; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    return C;
}

void generate_random_matrix(int** A, int n, int m, int min_val, int max_val) {
    std::srand(std::time(nullptr));
    int range = max_val - min_val + 1;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            A[i][j] = std::rand() % range + min_val;
        }
    }
}

void matrix_multiply_reference(int** A, int** B, int**& C) {
    int n = sizeof(A)/sizeof(A[0]);
    int m = sizeof(A[0])/sizeof(A[0][0]);
    int p = sizeof(B[0])/sizeof(B[0][0]);

    C = new int*[n];
    for (int i = 0; i < n; i++) {
        C[i] = new int[p];
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < p; j++) {
            C[i][j] = 0;
            for (int k = 0; k < m; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }
}

int main() {
    int A[2][3] = {{1, 2, 3}, {4, 5, 6}};
    int B[3][2] = {{7, 8}, {9, 10}, {11, 12}};

    // Perform matrix multiplication and print the result
    int** C = matrix_multiply(A, B);
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            std::cout << C[i][j] << " ";
        }
        std::cout << std::endl;
    }

    // Free memory for the result matrix
    for (int i = 0; i < 2; i++) {
        delete[] C[i];
    }
    delete[] C;

    return 0;
}

//------------------------------------------------------------------------
// test_case_1_sort_basic
//------------------------------------------------------------------------

void test_case_1_sort_basic()
{
ECE4750_CHECK( L"test_case_1_sort_basic" );

int a[]     = { 4, 3, 6, 5, };
int a_ref[] = { 3, 4, 5, 6, };

bubbleSort( a, 4 );

for ( int i = 0; i < 4; i++ )
ECE4750_CHECK_INT_EQ( a[i] , a_ref[i] );

ECE4750_CHECK_INT_EQ( ece4750_get_heap_usage(), 0 );
}

//''' LAB TASK '''''''''''''''''''''''''''''''''''''''''''''''''''''''''''
// Add many more test cases for helper functions and sort function
//''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''\/

//------------------------------------------------------------------------
// test_case_2_sort_five_elements
//------------------------------------------------------------------------
// A simple test case that tests sorting 5 numbers

void test_case_2_sort_five_element()
{
ECE4750_CHECK( L"test_case_2_sort_five_elements" );

int a[]     = { 4, 3, 5, 6, 10 };
int a_ref[] = { 3, 4, 5, 6, 10 };

bubbleSort( a, 5 );

for ( int i = 0; i < 5; i++ )
ECE4750_CHECK_INT_EQ( a[i] , a_ref[i] );

int b[]     = {5, 9, 1, 0, 13};
int b_ref[] = {0, 1, 5, 9, 13};

bubbleSort( b, 5 );

for ( int i = 0; i < 5; i++ )
ECE4750_CHECK_INT_EQ( b[i] , b_ref[i] );

int c[]     = {500, 16, 140, 32, 1000};
int c_ref[] = {16, 32, 140, 500, 1000};

bubbleSort( c, 5 );

for ( int i = 0; i < 5; i++ )
ECE4750_CHECK_INT_EQ( c[i] , c_ref[i] );

ECE4750_CHECK_INT_EQ( ece4750_get_heap_usage(), 0 );
}

//------------------------------------------------------------------------
// test_case_3_sort_empty
//------------------------------------------------------------------------
// A simple test case that tests sorting an empty array. Just make sure
// it doesn't segfault or crash or anything.

void test_case_3_sort_empty()
{
ECE4750_CHECK( L"test_case_3_sort_empty" );

int* a = NULL;

bubbleSort( a, 0 );

int* b = NULL;

bubbleSort( b, 0 );

// Need at least one check ... if we get here it means we didn't crash

ECE4750_CHECK_TRUE( 1 );
ECE4750_CHECK_INT_EQ( ece4750_get_heap_usage(), 0 );
}

//------------------------------------------------------------------------
// test_case_4_sort_one_element
//------------------------------------------------------------------------
// A simple test case that tests sorting a one-element array.

void test_case_4_sort_one_element()
{
ECE4750_CHECK( L"test_case_4_sort_one_element" );

int a[] = {3};

bubbleSort( a, 1 );

ECE4750_CHECK_INT_EQ( a[0] , 3 );
ECE4750_CHECK_INT_EQ( ece4750_get_heap_usage(), 0 );
}

//------------------------------------------------------------------------
// test_case_5_sort_two_element
//------------------------------------------------------------------------

void test_case_5_sort_two_element()
{
ECE4750_CHECK( L"test_case_5_sort_two_element" );

int a[] = { 4, 3 };

bubbleSort( a, 2 );

ECE4750_CHECK_INT_EQ( a[0], 3 );
ECE4750_CHECK_INT_EQ( a[1], 4 );

int b[] = { 5, 9 };

bubbleSort( b, 2 );

ECE4750_CHECK_INT_EQ( b[0], 5 );
ECE4750_CHECK_INT_EQ( b[1], 9 );
ECE4750_CHECK_INT_EQ( ece4750_get_heap_usage(), 0 );
}

//------------------------------------------------------------------------
// test_case_6_sort_almost_sorted
//------------------------------------------------------------------------

void test_case_6_sort_almost_sorted()
{
ECE4750_CHECK( L"test_case_6_sort_almost_sorted" );

int a[]     = { 4, 3, 5, 6, 10 };
int a_ref[] = { 3, 4, 5, 6, 10 };

bubbleSort( a, 5 );

for ( int i = 0; i < 5; i++ )
ECE4750_CHECK_INT_EQ( a[i] , a_ref[i] );

int b[]     = {0, 2, 9, 5, 13};
int b_ref[] = {0, 2, 5, 9, 13};

bubbleSort( b, 5 );

for ( int i = 0; i < 5; i++ )
ECE4750_CHECK_INT_EQ( b[i] , b_ref[i] );

ECE4750_CHECK_INT_EQ( ece4750_get_heap_usage(), 0 );
}

//------------------------------------------------------------------------
// test_case_7_sort_sorted
//------------------------------------------------------------------------

void test_case_7_sort_sorted()
{
ECE4750_CHECK( L"test_case_7_sort_sorted" );

int a[]     = { 3, 4, 5, 6, 10 };
int a_ref[] = { 3, 4, 5, 6, 10 };

bubbleSort( a, 5 );

for ( int i = 0; i < 5; i++ )
ECE4750_CHECK_INT_EQ( a[i] , a_ref[i] );

int b[]     = { 0, 2, 5, 9, 13 };
int b_ref[] = { 0, 2, 5, 9, 13 };

bubbleSort( b, 5 );

for ( int i = 0; i < 5; i++ )
ECE4750_CHECK_INT_EQ( b[i] , b_ref[i] );

int c[]     = { 2, 32, 140, 500, 1000 };
int c_ref[] = { 2, 32, 140, 500, 1000 };

bubbleSort( c, 5 );

for ( int i = 0; i < 5; i++ )
ECE4750_CHECK_INT_EQ( c[i] , c_ref[i] );

int d[]     = { 42, 42, 42, 42, 42 };
int d_ref[] = { 42, 42, 42, 42, 42 };

bubbleSort( d, 5 );

for ( int i = 0; i < 5; i++ )
ECE4750_CHECK_INT_EQ( d[i] , d_ref[i] );

ECE4750_CHECK_INT_EQ( ece4750_get_heap_usage(), 0 );
}

//------------------------------------------------------------------------
// test_case_8_sort_reversed
//------------------------------------------------------------------------

void test_case_8_sort_reversed()
{
ECE4750_CHECK( L"test_case_8_sort_reversed" );

int a[]     = {10, 6, 5, 4, 3};
int a_ref[] = {3, 4, 5, 6, 10};

bubbleSort( a, 5 );

for ( int i = 0; i < 5; i++ )
ECE4750_CHECK_INT_EQ( a[i] , a_ref[i] );

int b[]     = {13, 9, 5, 2, 1};
int b_ref[] = {1, 2, 5, 9, 13};

bubbleSort( b, 5 );

for ( int i = 0; i < 5; i++ )
ECE4750_CHECK_INT_EQ( b[i] , b_ref[i] );

int c[]     = {1000, 500, 140, 32, 1};
int c_ref[] = {1, 32, 140, 500, 1000};

bubbleSort( c, 5 );

for ( int i = 0; i < 5; i++ )
ECE4750_CHECK_INT_EQ( c[i] , c_ref[i] );

ECE4750_CHECK_INT_EQ( ece4750_get_heap_usage(), 0 );
}

//------------------------------------------------------------------------
// test_case_9_few_unique
//------------------------------------------------------------------------

void test_case_9_sort_few_unique()
{
ECE4750_CHECK( L"test_case_9_sort_few_unique" );

int a[]     = {3, 4, 4, 3, 4};
int a_ref[] = {3, 3, 4, 4, 4};

bubbleSort( a, 5 );

for ( int i = 0; i < 5; i++ )
ECE4750_CHECK_INT_EQ( a[i] , a_ref[i] );

int b[]     = {25, 5, 5, 5, 25};
int b_ref[] = {5, 5, 5, 25, 25};

bubbleSort( b, 5 );

for ( int i = 0; i < 5; i++ )
ECE4750_CHECK_INT_EQ( b[i] , b_ref[i] );

ECE4750_CHECK_INT_EQ( ece4750_get_heap_usage(), 0 );
}

//------------------------------------------------------------------------
// test_case_10_sort_random_many_4
//------------------------------------------------------------------------

void test_case_10_sort_random_many_4()
{
ECE4750_CHECK( L"test_case_10_sort_random_many_4" );

ece4750_srand(0x0000abcd);

for ( int i = 0; i < 64; i++ ) {

int a[4];

for ( int i = 0; i < 4; i++ )
    a[i] = 0x0000ffff & ece4750_rand();

bubbleSort( a, 4 );

ECE4750_CHECK_TRUE( is_sorted( a, 4 ) );
}

ECE4750_CHECK_INT_EQ( ece4750_get_heap_usage(), 0 );
}

//------------------------------------------------------------------------
// test_case_11_sort_random_64
//------------------------------------------------------------------------

void test_case_11_sort_random_64()
{
ECE4750_CHECK( L"test_case_11_sort_random_64" );

ece4750_srand(0x0000cafe);

int  size  = 64;
int* a = ece4750_malloc( size * (int) sizeof(int) );

for ( int i = 0; i < size; i++ )
a[i] = 0x0000ffff & ece4750_rand();

bubbleSort( a, size );

ECE4750_CHECK_TRUE( is_sorted( a, 64 ) );

ece4750_free( a );

ECE4750_CHECK_INT_EQ( ece4750_get_heap_usage(), 0 );
}

//------------------------------------------------------------------------
// test_case_12_sort_random_67
//------------------------------------------------------------------------

void test_case_12_sort_random_67()
{
ECE4750_CHECK( L"test_case_12_sort_random_67" );

ece4750_srand(0x0000beef);

int  size = 67;
int* a = ece4750_malloc( size * (int) sizeof(int) );

for ( int i = 0; i < size; i++ )
a[i] = 0x0000ffff & ece4750_rand();

bubbleSort( a, size );

ECE4750_CHECK_TRUE( is_sorted( a, 67 ) );

ece4750_free( a );

ECE4750_CHECK_INT_EQ( ece4750_get_heap_usage(), 0 );
}

//------------------------------------------------------------------------
// test_case_13_sort_eval_dataset
//------------------------------------------------------------------------

void test_case_13_sort_eval_dataset()
{
ECE4750_CHECK( L"test_case_13_sort_eval_dataset" );

bubbleSort( eval_src, eval_size );

ECE4750_CHECK_TRUE( is_sorted( eval_src, eval_size ) );
ECE4750_CHECK_INT_EQ( ece4750_get_heap_usage(), 0 );
}

//''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''/\

//------------------------------------------------------------------------
// main
//------------------------------------------------------------------------

int main( int argc, char** argv )
{
__n = ( argc == 1 ) ? 0 : ece4750_atoi( argv[1] );

if ( (__n <= 0) || (__n == 1 ) ) test_case_1_sort_basic();

//''' LAB TASK '''''''''''''''''''''''''''''''''''''''''''''''''''''''''
// Add all test cases here (make sure to check __n appropriately!)
//''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''\/

if ( (__n <= 0) || (__n == 2 ) ) test_case_2_sort_five_element();
if ( (__n <= 0) || (__n == 3 ) ) test_case_3_sort_empty();
if ( (__n <= 0) || (__n == 4 ) ) test_case_4_sort_one_element();
if ( (__n <= 0) || (__n == 5 ) ) test_case_5_sort_two_element();
if ( (__n <= 0) || (__n == 6 ) ) test_case_6_sort_almost_sorted();
if ( (__n <= 0) || (__n == 7 ) ) test_case_7_sort_sorted();
if ( (__n <= 0) || (__n == 8 ) ) test_case_8_sort_reversed();
if ( (__n <= 0) || (__n == 9 ) ) test_case_9_sort_few_unique();
if ( (__n <= 0) || (__n == 10) ) test_case_10_sort_random_many_4();
if ( (__n <= 0) || (__n == 11) ) test_case_11_sort_random_64();
if ( (__n <= 0) || (__n == 12) ) test_case_12_sort_random_67();
if ( (__n <= 0) || (__n == 13) ) test_case_13_sort_eval_dataset();

//''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''/\

ece4750_wprintf( L"\n\n" );
return ece4750_check_status;
}