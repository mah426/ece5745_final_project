//========================================================================
// Unit tests for ubmark accum
//========================================================================

#include "ece4750.h"
#include "ubmark-accum-xcel.h"
#include "ubmark-accum.dat"

//------------------------------------------------------------------------
// Test positive inputs
//------------------------------------------------------------------------

void test_case_1_pos()
{
  ECE4750_CHECK( L"test_case_1_pos" );

  int src[] = { 1, 2, 3, 4 };

  int result = ubmark_accum_xcel( src, 4 );

  ECE4750_CHECK_INT_EQ( result, 10 );
}

//------------------------------------------------------------------------
// Test negative inputs
//------------------------------------------------------------------------

void test_case_2_neg()
{
  ECE4750_CHECK( L"test_case_2_neg" );

  int src[] = { -1, -2, -3,  4 };

  int result = ubmark_accum_xcel( src, 4 );

  ECE4750_CHECK_INT_EQ( result, -2 );
}

//------------------------------------------------------------------------
// Test size 9
//------------------------------------------------------------------------

void test_case_3_size9()
{
  ECE4750_CHECK( L"test_case_3_size9" );

  int src[9];
  int ref = 0;

  for ( int i = 0; i < 9; i++ ) {
    src[i] = i;
    ref    += i;
  }

  int result = ubmark_accum_xcel( src, 9 );

  ECE4750_CHECK_INT_EQ( result, ref );
}

//------------------------------------------------------------------------
// Test size 16
//------------------------------------------------------------------------

void test_case_4_size16()
{
  ECE4750_CHECK( L"test_case_4_size16" );

  int src[16];
  int ref = 0;

  for ( int i = 0; i < 16; i++ ) {
    src[i] = i;
    ref    += i;
  }

  int result = ubmark_accum_xcel( src, 16 );

  ECE4750_CHECK_INT_EQ( result, ref );
}

//------------------------------------------------------------------------
// Test eval dataset
//------------------------------------------------------------------------

void test_case_5_eval_dataset()
{
  ECE4750_CHECK( L"test_case_5_eval_dataset" );

  int result = ubmark_accum_xcel( eval_src, eval_size );

  ECE4750_CHECK_INT_EQ( result, eval_ref );
}

//------------------------------------------------------------------------
// main
//------------------------------------------------------------------------

int main( int argc, char** argv )
{
  __n = ( argc == 1 ) ? 0 : ece4750_atoi( argv[1] );

  if ( (__n <= 0) || (__n == 1) ) test_case_1_pos();
  if ( (__n <= 0) || (__n == 2) ) test_case_2_neg();
  if ( (__n <= 0) || (__n == 3) ) test_case_3_size9();
  if ( (__n <= 0) || (__n == 4) ) test_case_4_size16();
  if ( (__n <= 0) || (__n == 5) ) test_case_5_eval_dataset();

  ece4750_wprintf( L"\n\n" );
  return ece4750_check_status;
}

