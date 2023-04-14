#include "ece4750.h"
#include "ubmark-sort.h"
#include "ubmark-sort.dat"

#include <iostream>
#include <cstdlib>
#include <ctime>

int** matrix_multiply(int** A, int** B) {
    // Calculate the sizes of the input matrices
    int n = sizeof(A) / sizeof(A[0]);   // number of rows in A
    int m = sizeof(A[0]) / sizeof(A[0][0]);  // number of columns in A
    int p = sizeof(B[0]) / sizeof(B[0][0]);  // number of columns in B

    // Allocate memory for the result matrix C
    int** C = ece4750_malloc( int 32 ) int*[n];
    for (int i = 0; i < n; i++) {
        C[i] = ece4750_malloc( int 32 ) int[p];
    }

    // Perform matrix multiplication
    for (int i = 0; i < n; i++) {      // for each row of A
        for (int j = 0; j < p; j++) {      // for each column of B
            C[i][j] = 0;       // initialize the element at row i and column j in C to 0
            for (int k = 0; k < m; k++) {   // for each element in the ith row of A and jth column of B
                C[i][j] += A[i][k] * B[k][j];  // multiply the corresponding elements and accumulate the sum in C[i][j]
            }
        }
    }

    return C;   // return the resulting matrix C
}


void generate_random_matrix(int** A, int n, int m, int min_val, int max_val) {
    // Set the seed for the random number generator
    ece4750_srand(0x0000f1ef);

    // Calculate the range of values that can be generated
    int range = max_val - min_val + 1;

    // Generate random values for each element of the matrix
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            // Generate a random integer between min_val and max_val (inclusive)
            // and assign it to the current element of the matrix
            A[i][j] = ece4750_rand() % range + min_val;
        }
    }
}

// This function performs matrix multiplication of two input matrices A and B
// and returns the result matrix C
int** matrix_multiply_reference(int** A, int** B) {
    // Calculate the sizes of the input matrices
    int n = sizeof(A)/sizeof(A[0]);  // number of rows in A
    int m = sizeof(A[0])/sizeof(A[0][0]);  // number of columns in A
    int p = sizeof(B[0])/sizeof(B[0][0]);  // number of columns in B

    // Allocate memory for the result matrix C
    int** C = ece4750_malloc( int 32 ) int*[n];
    for (int i = 0; i < n; i++) {
        C[i] = ece4750_malloc( int 32 ) int[p];
    }

    // Perform matrix multiplication
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < p; j++) {

            // Initialize the element of C with 0
            C[i][j] = 0;

            // Calculate each element of C
            for (int k = 0; k < m; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    // Return the result matrix C
    return C;
}

bool compare_matrices(int** A, int** B) {
    // Calculate the number of rows, columns and depth of matrices A and B
    int n = sizeof(A)/sizeof(A[0]); // number of rows in A
    int m = sizeof(A[0])/sizeof(A[0][0]); // number of columns in A
    int p = sizeof(B[0])/sizeof(B[0][0]); // number of columns in B

    // Declare two 2D integer arrays "C" and "C_ref"
    int** C;
    int** C_ref;

    // Call the function "matrix_multiply" with input parameters "A", "B", and "C"
    C = matrix_multiply(A, B, C);

    // Call the function "matrix_multiply_reference" with input parameters "A", "B", "C_ref", "n", "m", and "p"
    C_ref = matrix_multiply_reference(A, B, C_ref, n, m, p);

    // Compare each element of matrices "C" and "C_ref"
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < p; j++) {
            // If an element of "C" is not equal to the corresponding element of "C_ref", return false
            if (C[i][j] != C_ref[i][j]) {
                return false;
            }
        }
    }

    // If all elements of "C" are equal to the corresponding elements of "C_ref", return true
    return true;

}


// Define the main function
// int main() {
    // // Set the size of the matrices and the range of values
    // const int n = 3;
    // const int m = 2;
    // const int p = 4;
    // const int min_val = -10;
    // const int max_val = 10;

    // // Allocate memory for the input matrices
    // int** A = ece4750_malloc( int 32 ) int*[n];
    // int** B = ece4750_malloc( int 32 ) int*[m];
    // for (int i = 0; i < n; i++) {
    //     A[i] = ece4750_malloc( int 32 ) int[m];
    // }
    // for (int i = 0; i < m; i++) {
    //     B[i] = ece4750_malloc( int 32 ) int[p];
    // }

    // // Generate random values for the input matrices
    // generate_random_matrix(A, n, m, min_val, max_val);
    // generate_random_matrix(B, m, p, min_val, max_val);

    // // Test the matrix multiplication function
    // std::cout << "Testing matrix multiplication..." << std::endl;
    // int** C = matrix_multiply(A, B);
    // int** C_ref = matrix_multiply_reference(A, B);
    // if (compare_matrices(C, C_ref)) {
    //     std::cout << "Matrix multiplication test passed." << std::endl;
    // } else {
    //     std::cout << "Matrix multiplication test failed." << std::endl;
    // }

    // // Free memory for the matrices
    // for (int i = 0; i < n; i++) {
    //     ece4750_free( A[i] );
    // }
    // for (int i = 0; i < m; i++) {
    //     ece4750_free( B[i] );
    // }
    // for (int i = 0; i < n; i++) {
    //     ece4750_free( C[i] );
    //     ece4750_free( C_ref[i] );
    // }
    // ece4750_free(A);
    // ece4750_free(B);
    // ece4750_free(C);
    // ece4750_free(C_ref);

    // return 0;
// }


//------------------------------------------------------------------------
// test_case_1_mult_basic
//------------------------------------------------------------------------

void test_case_1_mult_basic()
{
ECE4750_CHECK( L"test_case_1_mult_basic" );
    const int n = 3;
    const int m = 3;
    const int p = 3;
    const int min_val = 0;
    const int max_val = 5;

    // Allocate memory for the input matrices
    int** A = ece4750_malloc( int 32 ) int*[n];
    int** B = ece4750_malloc( int 32 ) int*[m];
    for (int i = 0; i < n; i++) {
        A[i] = ece4750_malloc( int 32 ) int[m];
    }
    for (int i = 0; i < m; i++) {
        B[i] = ece4750_malloc( int 32 ) int[p];
    }

    // Generate random values for the input matrices
    generate_random_matrix(A, n, m, min_val, max_val);
    generate_random_matrix(B, m, p, min_val, max_val);

    // Test the matrix multiplication function
    std::cout << "Testing matrix multiplication..." << std::endl;
    int** C = matrix_multiply(A, B);
    int** C_ref = matrix_multiply_reference(A, B);
    if (compare_matrices(C, C_ref)) {
        std::cout << "Matrix multiplication test passed." << std::endl;
    } else {
        std::cout << "Matrix multiplication test failed." << std::endl;
    }

    // Free memory for the matrices
    for (int i = 0; i < n; i++) {
        ece4750_free( A[i] );
    }
    for (int i = 0; i < m; i++) {
        ece4750_free( B[i] );
    }
    for (int i = 0; i < n; i++) {
        ece4750_free( C[i] );
        ece4750_free( C_ref[i] );
    }
    ece4750_free(A);
    ece4750_free(B);
    ece4750_free(C);
    ece4750_free(C_ref);

    // Compare each element of matrices "C" and "C_ref"
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < p; j++) {
            // If an element of "C" is not equal to the corresponding element of "C_ref", return false
            ECE4750_CHECK_INT_EQ( C[i] , C_ref[i] );
        }
    }

ECE4750_CHECK_INT_EQ( ece4750_get_heap_usage(), 0 );
}

//''' LAB TASK '''''''''''''''''''''''''''''''''''''''''''''''''''''''''''
// Add many more test cases for helper functions and sort function
//''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''\/

//------------------------------------------------------------------------
// test_case_2_mult_five_elements
//------------------------------------------------------------------------
// A simple test case that tests sorting 5 numbers

void test_case_2_mult_five_element()
{
    ECE4750_CHECK( L"test_case_2_mult_five_element" );
    const int n = 5;
    const int m = 5;
    const int p = 5;
    const int min_val = 0;
    const int max_val = 5;

    // Allocate memory for the input matrices
    int** A = ece4750_malloc( int 32 ) int*[n];
    int** B = ece4750_malloc( int 32 ) int*[m];
    for (int i = 0; i < n; i++) {
        A[i] = ece4750_malloc( int 32 ) int[m];
    }
    for (int i = 0; i < m; i++) {
        B[i] = ece4750_malloc( int 32 ) int[p];
    }

    // Generate random values for the input matrices
    generate_random_matrix(A, n, m, min_val, max_val);
    generate_random_matrix(B, m, p, min_val, max_val);

    // Test the matrix multiplication function
    std::cout << "Testing matrix multiplication..." << std::endl;
    int** C = matrix_multiply(A, B);
    int** C_ref = matrix_multiply_reference(A, B);
    if (compare_matrices(C, C_ref)) {
        std::cout << "Matrix multiplication test passed." << std::endl;
    } else {
        std::cout << "Matrix multiplication test failed." << std::endl;
    }

    // Free memory for the matrices
    for (int i = 0; i < n; i++) {
        ece4750_free( A[i] );
    }
    for (int i = 0; i < m; i++) {
        ece4750_free( B[i] );
    }
    for (int i = 0; i < n; i++) {
        ece4750_free( C[i] );
        ece4750_free( C_ref[i] );
    }
    ece4750_free(A);
    ece4750_free(B);
    ece4750_free(C);
    ece4750_free(C_ref);

    // Compare each element of matrices "C" and "C_ref"
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < p; j++) {
            // If an element of "C" is not equal to the corresponding element of "C_ref", return false
            ECE4750_CHECK_INT_EQ( C[i] , C_ref[i] );
        }
    }

// ECE4750_CHECK_INT_EQ( ece4750_get_heap_usage(), 0 );

    ECE4750_CHECK_INT_EQ( ece4750_get_heap_usage(), 0 );
}

//------------------------------------------------------------------------
// test_case_3_mult_small_zeros
//------------------------------------------------------------------------
// A simple test case that tests sorting an empty array. Just make sure
// it doesn't segfault or crash or anything.

void test_case_3_mult_small_zeros()
{
    ECE4750_CHECK( L"test_case_2_mult_five_element" );
    const int n = 3;
    const int m = 3;
    const int p = 3;
    const int min_val = 0;
    const int max_val = 0;

    // Allocate memory for the input matrices
    int** A = ece4750_malloc( int 32 ) int*[n];
    int** B = ece4750_malloc( int 32 ) int*[m];
    for (int i = 0; i < n; i++) {
        A[i] = ece4750_malloc( int 32 ) int[m];
    }
    for (int i = 0; i < m; i++) {
        B[i] = ece4750_malloc( int 32 ) int[p];
    }

    // Generate random values for the input matrices
    generate_random_matrix(A, n, m, min_val, max_val);
    generate_random_matrix(B, m, p, min_val, max_val);

    // Test the matrix multiplication function
    std::cout << "Testing matrix multiplication..." << std::endl;
    int** C = matrix_multiply(A, B);
    int** C_ref = matrix_multiply_reference(A, B);
    if (compare_matrices(C, C_ref)) {
        std::cout << "Matrix multiplication test passed." << std::endl;
    } else {
        std::cout << "Matrix multiplication test failed." << std::endl;
    }

    // Free memory for the matrices
    for (int i = 0; i < n; i++) {
        ece4750_free( A[i] );
    }
    for (int i = 0; i < m; i++) {
        ece4750_free( B[i] );
    }
    for (int i = 0; i < n; i++) {
        ece4750_free( C[i] );
        ece4750_free( C_ref[i] );
    }
    ece4750_free(A);
    ece4750_free(B);
    ece4750_free(C);
    ece4750_free(C_ref);

    // Compare each element of matrices "C" and "C_ref"
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < p; j++) {
            // If an element of "C" is not equal to the corresponding element of "C_ref", return false
            ECE4750_CHECK_INT_EQ( C[i] , C_ref[i] );
        }
    }

    ECE4750_CHECK_INT_EQ( ece4750_get_heap_usage(), 0 );
}

//------------------------------------------------------------------------
// test_case_4_mult_one_element
//------------------------------------------------------------------------
// A simple test case that tests sorting a one-element array.

void test_case_4_mult_one_element()
{
    ECE4750_CHECK( L"test_case_4_mult_one_element" );
    const int n = 1;
    const int m = 1;
    const int p = 1;
    const int min_val = 0;
    const int max_val = 5;

    // Allocate memory for the input matrices
    int** A = ece4750_malloc( int 32 ) int*[n];
    int** B = ece4750_malloc( int 32 ) int*[m];
    for (int i = 0; i < n; i++) {
        A[i] = ece4750_malloc( int 32 ) int[m];
    }
    for (int i = 0; i < m; i++) {
        B[i] = ece4750_malloc( int 32 ) int[p];
    }

    // Generate random values for the input matrices
    generate_random_matrix(A, n, m, min_val, max_val);
    generate_random_matrix(B, m, p, min_val, max_val);

    // Test the matrix multiplication function
    std::cout << "Testing matrix multiplication..." << std::endl;
    int** C = matrix_multiply(A, B);
    int** C_ref = matrix_multiply_reference(A, B);
    if (compare_matrices(C, C_ref)) {
        std::cout << "Matrix multiplication test passed." << std::endl;
    } else {
        std::cout << "Matrix multiplication test failed." << std::endl;
    }

    // Free memory for the matrices
    for (int i = 0; i < n; i++) {
        ece4750_free( A[i] );
    }
    for (int i = 0; i < m; i++) {
        ece4750_free( B[i] );
    }
    for (int i = 0; i < n; i++) {
        ece4750_free( C[i] );
        ece4750_free( C_ref[i] );
    }
    ece4750_free(A);
    ece4750_free(B);
    ece4750_free(C);
    ece4750_free(C_ref);

    // Compare each element of matrices "C" and "C_ref"
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < p; j++) {
            // If an element of "C" is not equal to the corresponding element of "C_ref", return false
            ECE4750_CHECK_INT_EQ( C[i] , C_ref[i] );
        }
    }

    //ECE4750_CHECK_INT_EQ( ece4750_get_heap_usage(), 0 );
    ECE4750_CHECK_INT_EQ( ece4750_get_heap_usage(), 0 );
}

//------------------------------------------------------------------------
// test_case_5_sort_two_element
//------------------------------------------------------------------------

void test_case_5_sort_two_element()
{
    ECE4750_CHECK( L"test_case_5_sort_two_element" );
    const int n = 2;
    const int m = 2;
    const int p = 2;
    const int min_val = 0;
    const int max_val = 5;

    // Allocate memory for the input matrices
    int** A = ece4750_malloc( int 32 ) int*[n];
    int** B = ece4750_malloc( int 32 ) int*[m];
    for (int i = 0; i < n; i++) {
        A[i] = ece4750_malloc( int 32 ) int[m];
    }
    for (int i = 0; i < m; i++) {
        B[i] = ece4750_malloc( int 32 ) int[p];
    }

    // Generate random values for the input matrices
    generate_random_matrix(A, n, m, min_val, max_val);
    generate_random_matrix(B, m, p, min_val, max_val);

    // Test the matrix multiplication function
    std::cout << "Testing matrix multiplication..." << std::endl;
    int** C = matrix_multiply(A, B);
    int** C_ref = matrix_multiply_reference(A, B);
    if (compare_matrices(C, C_ref)) {
        std::cout << "Matrix multiplication test passed." << std::endl;
    } else {
        std::cout << "Matrix multiplication test failed." << std::endl;
    }

    // Free memory for the matrices
    for (int i = 0; i < n; i++) {
        ece4750_free( A[i] );
    }
    for (int i = 0; i < m; i++) {
        ece4750_free( B[i] );
    }
    for (int i = 0; i < n; i++) {
        ece4750_free( C[i] );
        ece4750_free( C_ref[i] );
    }
    ece4750_free(A);
    ece4750_free(B);
    ece4750_free(C);
    ece4750_free(C_ref);

    // Compare each element of matrices "C" and "C_ref"
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < p; j++) {
            // If an element of "C" is not equal to the corresponding element of "C_ref", return false
            ECE4750_CHECK_INT_EQ( C[i] , C_ref[i] );
        }
    }

    ECE4750_CHECK_INT_EQ( ece4750_get_heap_usage(), 0 );
}

//------------------------------------------------------------------------
// test_case_6_mult_larger_matrix
//------------------------------------------------------------------------

void test_case_6_mult_larger_matrix()
{
    ECE4750_CHECK( L"test_case_6_mult_larger_matrix" );

    const int n = 10;
    const int m = 10;
    const int p = 10;
    const int min_val = 0;
    const int max_val = 5;

    // Allocate memory for the input matrices
    int** A = ece4750_malloc( int 32 ) int*[n];
    int** B = ece4750_malloc( int 32 ) int*[m];
    for (int i = 0; i < n; i++) {
        A[i] = ece4750_malloc( int 32 ) int[m];
    }
    for (int i = 0; i < m; i++) {
        B[i] = ece4750_malloc( int 32 ) int[p];
    }

    // Generate random values for the input matrices
    generate_random_matrix(A, n, m, min_val, max_val);
    generate_random_matrix(B, m, p, min_val, max_val);

    // Test the matrix multiplication function
    std::cout << "Testing matrix multiplication..." << std::endl;
    int** C = matrix_multiply(A, B);
    int** C_ref = matrix_multiply_reference(A, B);
    if (compare_matrices(C, C_ref)) {
        std::cout << "Matrix multiplication test passed." << std::endl;
    } else {
        std::cout << "Matrix multiplication test failed." << std::endl;
    }

    // Free memory for the matrices
    for (int i = 0; i < n; i++) {
        ece4750_free( A[i] );
    }
    for (int i = 0; i < m; i++) {
        ece4750_free( B[i] );
    }
    for (int i = 0; i < n; i++) {
        ece4750_free( C[i] );
        ece4750_free( C_ref[i] );
    }
    ece4750_free(A);
    ece4750_free(B);
    ece4750_free(C);
    ece4750_free(C_ref);

    // Compare each element of matrices "C" and "C_ref"
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < p; j++) {
            // If an element of "C" is not equal to the corresponding element of "C_ref", return false
            ECE4750_CHECK_INT_EQ( C[i] , C_ref[i] );
        }
    }

    ECE4750_CHECK_INT_EQ( ece4750_get_heap_usage(), 0 );
}

//------------------------------------------------------------------------
// test_case_7_mult_larger_matrix_larger_values
//------------------------------------------------------------------------

void test_case_7_mult_larger_matrix_larger_values()
{
ECE4750_CHECK( L"test_case_7_mult_larger_matrix_larger_values" );

    ECE4750_CHECK( L"test_case_6_mult_larger_matrix" );

    const int n = 25;
    const int m = 25;
    const int p = 25;
    const int min_val = 0;
    const int max_val = 100;

    // Allocate memory for the input matrices
    int** A = ece4750_malloc( int 32 ) int*[n];
    int** B = ece4750_malloc( int 32 ) int*[m];
    for (int i = 0; i < n; i++) {
        A[i] = ece4750_malloc( int 32 ) int[m];
    }
    for (int i = 0; i < m; i++) {
        B[i] = ece4750_malloc( int 32 ) int[p];
    }

    // Generate random values for the input matrices
    generate_random_matrix(A, n, m, min_val, max_val);
    generate_random_matrix(B, m, p, min_val, max_val);

    // Test the matrix multiplication function
    std::cout << "Testing matrix multiplication..." << std::endl;
    int** C = matrix_multiply(A, B);
    int** C_ref = matrix_multiply_reference(A, B);
    if (compare_matrices(C, C_ref)) {
        std::cout << "Matrix multiplication test passed." << std::endl;
    } else {
        std::cout << "Matrix multiplication test failed." << std::endl;
    }

    // Free memory for the matrices
    for (int i = 0; i < n; i++) {
        ece4750_free( A[i] );
    }
    for (int i = 0; i < m; i++) {
        ece4750_free( B[i] );
    }
    for (int i = 0; i < n; i++) {
        ece4750_free( C[i] );
        ece4750_free( C_ref[i] );
    }
    ece4750_free(A);
    ece4750_free(B);
    ece4750_free(C);
    ece4750_free(C_ref);

    // Compare each element of matrices "C" and "C_ref"
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < p; j++) {
            // If an element of "C" is not equal to the corresponding element of "C_ref", return false
            ECE4750_CHECK_INT_EQ( C[i] , C_ref[i] );
        }
    }

    ECE4750_CHECK_INT_EQ( ece4750_get_heap_usage(), 0 );
}

//------------------------------------------------------------------------
// test_case_8_mult_max_size_small_values
//------------------------------------------------------------------------

void test_case_8_mult_max_size_small_values()
{
    ECE4750_CHECK( L"test_case_8_mult_max_size_small_values" );

    const int n = 64;
    const int m = 64;
    const int p = 64;
    const int min_val = 0;
    const int max_val = 5;

    // Allocate memory for the input matrices
    int** A = ece4750_malloc( int 32 ) int*[n];
    int** B = ece4750_malloc( int 32 ) int*[m];
    for (int i = 0; i < n; i++) {
        A[i] = ece4750_malloc( int 32 ) int[m];
    }
    for (int i = 0; i < m; i++) {
        B[i] = ece4750_malloc( int 32 ) int[p];
    }

    // Generate random values for the input matrices
    generate_random_matrix(A, n, m, min_val, max_val);
    generate_random_matrix(B, m, p, min_val, max_val);

    // Test the matrix multiplication function
    std::cout << "Testing matrix multiplication..." << std::endl;
    int** C = matrix_multiply(A, B);
    int** C_ref = matrix_multiply_reference(A, B);
    if (compare_matrices(C, C_ref)) {
        std::cout << "Matrix multiplication test passed." << std::endl;
    } else {
        std::cout << "Matrix multiplication test failed." << std::endl;
    }

    // Free memory for the matrices
    for (int i = 0; i < n; i++) {
        ece4750_free( A[i] );
    }
    for (int i = 0; i < m; i++) {
        ece4750_free( B[i] );
    }
    for (int i = 0; i < n; i++) {
        ece4750_free( C[i] );
        ece4750_free( C_ref[i] );
    }
    ece4750_free(A);
    ece4750_free(B);
    ece4750_free(C);
    ece4750_free(C_ref);

    // Compare each element of matrices "C" and "C_ref"
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < p; j++) {
            // If an element of "C" is not equal to the corresponding element of "C_ref", return false
            ECE4750_CHECK_INT_EQ( C[i] , C_ref[i] );
        }
    }

    ECE4750_CHECK_INT_EQ( ece4750_get_heap_usage(), 0 );
}

//------------------------------------------------------------------------
// test_case_9_few_unique
//------------------------------------------------------------------------

void test_case_9_mult_max_size_medium_values()
{
    ECE4750_CHECK( L"test_case_9_mult_max_size_medium_values" );

    const int n = 64;
    const int m = 64;
    const int p = 64;
    const int min_val = 0;
    const int max_val = 100;

    // Allocate memory for the input matrices
    int** A = ece4750_malloc( int 32 ) int*[n];
    int** B = ece4750_malloc( int 32 ) int*[m];
    for (int i = 0; i < n; i++) {
        A[i] = ece4750_malloc( int 32 ) int[m];
    }
    for (int i = 0; i < m; i++) {
        B[i] = ece4750_malloc( int 32 ) int[p];
    }

    // Generate random values for the input matrices
    generate_random_matrix(A, n, m, min_val, max_val);
    generate_random_matrix(B, m, p, min_val, max_val);

    // Test the matrix multiplication function
    std::cout << "Testing matrix multiplication..." << std::endl;
    int** C = matrix_multiply(A, B);
    int** C_ref = matrix_multiply_reference(A, B);
    if (compare_matrices(C, C_ref)) {
        std::cout << "Matrix multiplication test passed." << std::endl;
    } else {
        std::cout << "Matrix multiplication test failed." << std::endl;
    }

    // Free memory for the matrices
    for (int i = 0; i < n; i++) {
        ece4750_free( A[i] );
    }
    for (int i = 0; i < m; i++) {
        ece4750_free( B[i] );
    }
    for (int i = 0; i < n; i++) {
        ece4750_free( C[i] );
        ece4750_free( C_ref[i] );
    }
    ece4750_free(A);
    ece4750_free(B);
    ece4750_free(C);
    ece4750_free(C_ref);

    // Compare each element of matrices "C" and "C_ref"
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < p; j++) {
            // If an element of "C" is not equal to the corresponding element of "C_ref", return false
            ECE4750_CHECK_INT_EQ( C[i] , C_ref[i] );
        }
    }

    ECE4750_CHECK_INT_EQ( ece4750_get_heap_usage(), 0 );
}

//------------------------------------------------------------------------
// test_case_10_mult_max_size_large_values
//------------------------------------------------------------------------

void test_case_10_mult_max_size_large_values()
{
    ECE4750_CHECK( L"test_case_10_mult_max_size_large_values" );

    const int n = 64;
    const int m = 64;
    const int p = 64;
    const int min_val = 0;
    const int max_val = 1000;

    // Allocate memory for the input matrices
    int** A = ece4750_malloc( int 32 ) int*[n];
    int** B = ece4750_malloc( int 32 ) int*[m];
    for (int i = 0; i < n; i++) {
        A[i] = ece4750_malloc( int 32 ) int[m];
    }
    for (int i = 0; i < m; i++) {
        B[i] = ece4750_malloc( int 32 ) int[p];
    }

    // Generate random values for the input matrices
    generate_random_matrix(A, n, m, min_val, max_val);
    generate_random_matrix(B, m, p, min_val, max_val);

    // Test the matrix multiplication function
    std::cout << "Testing matrix multiplication..." << std::endl;
    int** C = matrix_multiply(A, B);
    int** C_ref = matrix_multiply_reference(A, B);
    if (compare_matrices(C, C_ref)) {
        std::cout << "Matrix multiplication test passed." << std::endl;
    } else {
        std::cout << "Matrix multiplication test failed." << std::endl;
    }

    // Free memory for the matrices
    for (int i = 0; i < n; i++) {
        ece4750_free( A[i] );
    }
    for (int i = 0; i < m; i++) {
        ece4750_free( B[i] );
    }
    for (int i = 0; i < n; i++) {
        ece4750_free( C[i] );
        ece4750_free( C_ref[i] );
    }
    ece4750_free(A);
    ece4750_free(B);
    ece4750_free(C);
    ece4750_free(C_ref);

    // Compare each element of matrices "C" and "C_ref"
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < p; j++) {
            // If an element of "C" is not equal to the corresponding element of "C_ref", return false
            ECE4750_CHECK_INT_EQ( C[i] , C_ref[i] );
        }
    }

    ECE4750_CHECK_INT_EQ( ece4750_get_heap_usage(), 0 );
}

//------------------------------------------------------------------------
// test_case_11_mult_max_size_very_large_values
//------------------------------------------------------------------------

void test_case_11_mult_max_size_very_large_values()
{
    ECE4750_CHECK( L"test_case_11_mult_max_size_very_large_values" );

    const int n = 64;
    const int m = 64;
    const int p = 64;
    const int min_val = 0;
    const int max_val = 100000;

    // Allocate memory for the input matrices
    int** A = ece4750_malloc( int 32 ) int*[n];
    int** B = ece4750_malloc( int 32 ) int*[m];
    for (int i = 0; i < n; i++) {
        A[i] = ece4750_malloc( int 32 ) int[m];
    }
    for (int i = 0; i < m; i++) {
        B[i] = ece4750_malloc( int 32 ) int[p];
    }

    // Generate random values for the input matrices
    generate_random_matrix(A, n, m, min_val, max_val);
    generate_random_matrix(B, m, p, min_val, max_val);

    // Test the matrix multiplication function
    std::cout << "Testing matrix multiplication..." << std::endl;
    int** C = matrix_multiply(A, B);
    int** C_ref = matrix_multiply_reference(A, B);
    if (compare_matrices(C, C_ref)) {
        std::cout << "Matrix multiplication test passed." << std::endl;
    } else {
        std::cout << "Matrix multiplication test failed." << std::endl;
    }

    // Free memory for the matrices
    for (int i = 0; i < n; i++) {
        ece4750_free( A[i] );
    }
    for (int i = 0; i < m; i++) {
        ece4750_free( B[i] );
    }
    for (int i = 0; i < n; i++) {
        ece4750_free( C[i] );
        ece4750_free( C_ref[i] );
    }
    ece4750_free(A);
    ece4750_free(B);
    ece4750_free(C);
    ece4750_free(C_ref);

    // Compare each element of matrices "C" and "C_ref"
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < p; j++) {
            // If an element of "C" is not equal to the corresponding element of "C_ref", return false
            ECE4750_CHECK_INT_EQ( C[i] , C_ref[i] );
        }
    }

    ECE4750_CHECK_INT_EQ( ece4750_get_heap_usage(), 0 );
}

//------------------------------------------------------------------------
// test_case_11_mult_max_size_even_larger_values
//------------------------------------------------------------------------

void test_case_11_mult_max_size_even_larger_values()
{
    ECE4750_CHECK( L"test_case_11_mult_max_size_even_larger_values" );

const int n = 64;
    const int m = 64;
    const int p = 64;
    const int min_val = 0;
    const int max_val = 100000000;

    // Allocate memory for the input matrices
    int** A = ece4750_malloc( int 32 ) int*[n];
    int** B = ece4750_malloc( int 32 ) int*[m];
    for (int i = 0; i < n; i++) {
        A[i] = ece4750_malloc( int 32 ) int[m];
    }
    for (int i = 0; i < m; i++) {
        B[i] = ece4750_malloc( int 32 ) int[p];
    }

    // Generate random values for the input matrices
    generate_random_matrix(A, n, m, min_val, max_val);
    generate_random_matrix(B, m, p, min_val, max_val);

    // Test the matrix multiplication function
    std::cout << "Testing matrix multiplication..." << std::endl;
    int** C = matrix_multiply(A, B);
    int** C_ref = matrix_multiply_reference(A, B);
    if (compare_matrices(C, C_ref)) {
        std::cout << "Matrix multiplication test passed." << std::endl;
    } else {
        std::cout << "Matrix multiplication test failed." << std::endl;
    }

    // Free memory for the matrices
    for (int i = 0; i < n; i++) {
        ece4750_free( A[i] );
    }
    for (int i = 0; i < m; i++) {
        ece4750_free( B[i] );
    }
    for (int i = 0; i < n; i++) {
        ece4750_free( C[i] );
        ece4750_free( C_ref[i] );
    }
    ece4750_free(A);
    ece4750_free(B);
    ece4750_free(C);
    ece4750_free(C_ref);

    // Compare each element of matrices "C" and "C_ref"
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < p; j++) {
            // If an element of "C" is not equal to the corresponding element of "C_ref", return false
            ECE4750_CHECK_INT_EQ( C[i] , C_ref[i] );
        }
    }

    ECE4750_CHECK_INT_EQ( ece4750_get_heap_usage(), 0 );
}

//------------------------------------------------------------------------
// test_case_13_sort_eval_dataset
//------------------------------------------------------------------------

// void test_case_13_sort_eval_dataset()
// {
//     ECE4750_CHECK( L"test_case_13_sort_eval_dataset" );

//     bubbleSort( eval_src, eval_size );

//     ECE4750_CHECK_TRUE( is_sorted( eval_src, eval_size ) );
//     ECE4750_CHECK_INT_EQ( ece4750_get_heap_usage(), 0 );
// }

//''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''/\

//------------------------------------------------------------------------
// main
//------------------------------------------------------------------------

int main( int argc, char** argv )
{
    __n = ( argc == 1 ) ? 0 : ece4750_atoi( argv[1] );

    if ( (__n <= 0) || (__n == 1 ) ) test_case_1_mult_basic();

    //''' LAB TASK '''''''''''''''''''''''''''''''''''''''''''''''''''''''''
    // Add all test cases here (make sure to check __n appropriately!)
    //''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''\/

    if ( (__n <= 0) || (__n == 2 ) ) test_case_2_mult_five_element();
    if ( (__n <= 0) || (__n == 3 ) ) test_case_3_mult_small_zeros();
    if ( (__n <= 0) || (__n == 4 ) ) test_case_4_mult_one_element();
    if ( (__n <= 0) || (__n == 5 ) ) test_case_5_sort_two_element();
    if ( (__n <= 0) || (__n == 6 ) ) test_case_6_mult_larger_matrix();
    if ( (__n <= 0) || (__n == 7 ) ) test_case_7_mult_larger_matrix_larger_values();
    if ( (__n <= 0) || (__n == 8 ) ) test_case_8_mult_max_size_small_values();
    if ( (__n <= 0) || (__n == 9 ) ) test_case_9_mult_max_size_medium_values();
    if ( (__n <= 0) || (__n == 10) ) test_case_10_mult_max_size_large_values();
    if ( (__n <= 0) || (__n == 11) ) test_case_11_mult_max_size_very_large_values();
    if ( (__n <= 0) || (__n == 12) ) test_case_11_mult_max_size_even_larger_values();
    // if ( (__n <= 0) || (__n == 13) ) test_case_13_sort_eval_dataset();

    //''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''/\

    ece4750_wprintf( L"\n\n" );
    return ece4750_check_status;
}