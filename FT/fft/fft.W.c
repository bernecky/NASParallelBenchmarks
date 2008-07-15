

/*
 *  Global Switches
 */

#define SAC_DO_CHECK           0
#define SAC_DO_CHECK_BOUNDARY  0
#define SAC_DO_CHECK_MALLOC    0
#define SAC_DO_CHECK_ERRNO     0
#define SAC_DO_CHECK_HEAP      0

#define SAC_DO_PHM             1
#define SAC_DO_APS             1
#define SAC_DO_RCAO            1
#define SAC_DO_MSCA            1

#define SAC_DO_PROFILE         0
#define SAC_DO_PROFILE_WITH    0
#define SAC_DO_PROFILE_FUN     0
#define SAC_DO_PROFILE_INL     0
#define SAC_DO_PROFILE_LIB     0

#define SAC_DO_TRACE           0
#define SAC_DO_TRACE_REF       0
#define SAC_DO_TRACE_MEM       0
#define SAC_DO_TRACE_PRF       0
#define SAC_DO_TRACE_FUN       0
#define SAC_DO_TRACE_WL        0
#define SAC_DO_TRACE_AA        0
#define SAC_DO_TRACE_MT        0

#define SAC_DO_CACHESIM        0
#define SAC_DO_CACHESIM_ADV    0
#define SAC_DO_CACHESIM_GLOBAL 1
#define SAC_DO_CACHESIM_FILE   0
#define SAC_DO_CACHESIM_PIPE   1
#define SAC_DO_CACHESIM_IMDT   0

#define SAC_DO_MULTITHREAD     0
#define SAC_DO_THREADS_STATIC  1

#define SAC_DO_COMPILE_MODULE  0



/*
 *  Global Settings
 */

#ifndef NULL
#define NULL                      (void*) 0
#endif

#define SAC_SET_INITIAL_MASTER_HEAPSIZE      1048576
#define SAC_SET_INITIAL_WORKER_HEAPSIZE      65536
#define SAC_SET_INITIAL_UNIFIED_HEAPSIZE     0

#ifndef SAC_SET_THREADS_MAX
#define SAC_SET_THREADS_MAX          32
#endif

#ifndef SAC_SET_THREADS
#define SAC_SET_THREADS              1
#endif

#ifndef SAC_SET_MASTERCLASS
#define SAC_SET_MASTERCLASS          0
#endif

#define SAC_SET_MAX_SYNC_FOLD        0
#define SAC_SET_NUM_SCHEDULERS       0

#define SAC_SET_CACHE_1_SIZE         -1
#define SAC_SET_CACHE_1_LINE         4
#define SAC_SET_CACHE_1_ASSOC        1
#define SAC_SET_CACHE_1_WRITEPOL     SAC_CS_default
#define SAC_SET_CACHE_1_MSCA_FACTOR  0.00

#define SAC_SET_CACHE_2_SIZE         -1
#define SAC_SET_CACHE_2_LINE         4
#define SAC_SET_CACHE_2_ASSOC        1
#define SAC_SET_CACHE_2_WRITEPOL     SAC_CS_default
#define SAC_SET_CACHE_2_MSCA_FACTOR  0.00

#define SAC_SET_CACHE_3_SIZE         -1
#define SAC_SET_CACHE_3_LINE         4
#define SAC_SET_CACHE_3_ASSOC        1
#define SAC_SET_CACHE_3_WRITEPOL     SAC_CS_default
#define SAC_SET_CACHE_3_MSCA_FACTOR  0.00

#define SAC_SET_CACHESIM_HOST        ""
#define SAC_SET_CACHESIM_FILE        "fft.W.cs"
#define SAC_SET_CACHESIM_DIR         "/tmp"
#define SAC_SET_MAXFUN               0
#define SAC_SET_MAXFUNAP             1

#define SAC_SET_FUN_NAMES    \
  {    \
    "main"   \
  }

#define SAC_SET_FUN_APPS    \
  {    \
    0   \
  }

#define SAC_SET_FUN_AP_LINES    \
  {    \
    {    \
      0   \
    }   \
  }


/*
 *  Includes
 */


#include "sac.h"


/*
 *  SAC-Program fft_cpx.sac :
 */


/*
 *  type definitions
 */

SAC_ND_TYPEDEF_ARRAY( double, SACt_Complex__complex)
SAC_ND_TYPEDEF_HIDDEN( SACe_list)

extern SACe_list copy_list( SACe_list);
extern void free_list( SACe_list);

SAC_ND_TYPEDEF_HIDDEN( SACe_Terminal)
SAC_ND_TYPEDEF_HIDDEN( SACe_TermFile)
typedef int SACe_syserr;
SAC_ND_TYPEDEF_HIDDEN( SACe_string)

extern SACe_string copy_string( SACe_string);
extern void free( SACe_string);

SAC_ND_TYPEDEF_HIDDEN( SACe_FileSystem)
SAC_ND_TYPEDEF_HIDDEN( SACe_World)
SAC_ND_TYPEDEF_HIDDEN( SACe_File)
SAC_ND_TYPEDEF_ARRAY( double, SACt_cpx)


/*
 *  Global Definitions
 */

SAC_MT_DEFINE()
SAC_PF_DEFINE()
SAC_HM_DEFINE()


/*
 *  function declarations
 */

extern 
/*
 * ND_FUN_DEC( SACf_GlobalObjInit, void, 0)
 */
void SACf_GlobalObjInit( int __argc, char *__argv[]);

extern 
/*
 * ND_FUN_DEC( create_TheWorld, SACe_World, 0)
 */
SACe_World create_TheWorld();

extern 
/*
 * ND_FUN_DEC( create_TheFileSystem, SACe_FileSystem, 0)
 */
SACe_FileSystem create_TheFileSystem();

extern 
/*
 * ND_FUN_DEC( create_stderr, SACe_TermFile, 0)
 */
SACe_TermFile create_stderr();

extern 
/*
 * ND_FUN_DEC( create_stdout, SACe_TermFile, 0)
 */
SACe_TermFile create_stdout();

extern 
/*
 * ND_FUN_DEC( create_stdin, SACe_TermFile, 0)
 */
SACe_TermFile create_stdin();

extern 
/*
 * ND_FUN_DEC( create_TheTerminal, SACe_Terminal, 0)
 */
SACe_Terminal create_TheTerminal();

extern 
/*
 * ND_FUN_DEC( cos, double, 1, in, double, SACl_X)
 */
double cos( SAC_ND_PARAM_in( double, SACl_X));

extern 
/*
 * ND_FUN_DEC( sin, double, 1, in, double, SACl_X)
 */
double sin( SAC_ND_PARAM_in( double, SACl_X));

extern 
/*
 * ND_FUN_DEC( exp, double, 1, in, double, SACl_X)
 */
double exp( SAC_ND_PARAM_in( double, SACl_X));

extern 
/*
 * ND_FUN_DEC( pow, double, 2, in, double, SACl_X, in, double, SACl_Y)
 */
double pow( SAC_ND_PARAM_in( double, SACl_X), SAC_ND_PARAM_in( double, SACl_Y));

extern 
/*
 * ND_FUN_DEC( floor, double, 1, in, double, SACl_X)
 */
double floor( SAC_ND_PARAM_in( double, SACl_X));

extern 
/*
 * ND_FUN_DEC( SACprintf, void, 2, in, SACe_string, SACl_FORMAT, in, ..., )
 */
void SACprintf( SAC_ND_PARAM_in( SACe_string, SACl_FORMAT), SAC_ND_PARAM_in( ..., ));

extern 
/*
 * ND_FUN_DEC( SACf_ComputeIndexMap, void, 1, out_rc, int *, SAC__arg_1)
 */
void SACf_ComputeIndexMap( SAC_ND_PARAM_out_rc( int *, SAC__arg_1));

extern 
/*
 * ND_FUN_DEC( SACf_ComputeExponentialMap, void, 1, out_rc, double *, SAC__arg_1)
 */
void SACf_ComputeExponentialMap( SAC_ND_PARAM_out_rc( double *, SAC__arg_1));

extern 
/*
 * ND_FUN_DEC( SACf_RootsOfUnity__d, void, 2, out_rc, double *, SAC__arg_1, in, double, SACl_dir)
 */
void SACf_RootsOfUnity__d( SAC_ND_PARAM_out_rc( double *, SAC__arg_1), SAC_ND_PARAM_in( double, SACl_dir));

extern 
/*
 * ND_FUN_DEC( SACf_FFT1d__d___MAIN__cpx_8___MAIN__cpx_4, void, 4, out_rc, double *, SAC__arg_1, in, double, SACl_dir, in_rc, double *, SACl_v, in_rc, double *, SACl_rofu)
 */
void SACf_FFT1d__d___MAIN__cpx_8___MAIN__cpx_4( SAC_ND_PARAM_out_rc( double *, SAC__arg_1), SAC_ND_PARAM_in( double, SACl_dir), SAC_ND_PARAM_in_rc( double *, SACl_v), SAC_ND_PARAM_in_rc( double *, SACl_rofu));

extern 
/*
 * ND_FUN_DEC( SACf_FFT1d__d___MAIN__cpx_16___MAIN__cpx_8, void, 4, out_rc, double *, SAC__arg_1, in, double, SACl_dir, in_rc, double *, SACl_v, in_rc, double *, SACl_rofu)
 */
void SACf_FFT1d__d___MAIN__cpx_16___MAIN__cpx_8( SAC_ND_PARAM_out_rc( double *, SAC__arg_1), SAC_ND_PARAM_in( double, SACl_dir), SAC_ND_PARAM_in_rc( double *, SACl_v), SAC_ND_PARAM_in_rc( double *, SACl_rofu));

extern 
/*
 * ND_FUN_DEC( SACf_FFT1d__d___MAIN__cpx_32___MAIN__cpx_16, void, 4, out_rc, double *, SAC__arg_1, in, double, SACl_dir, in_rc, double *, SACl_v, in_rc, double *, SACl_rofu)
 */
void SACf_FFT1d__d___MAIN__cpx_32___MAIN__cpx_16( SAC_ND_PARAM_out_rc( double *, SAC__arg_1), SAC_ND_PARAM_in( double, SACl_dir), SAC_ND_PARAM_in_rc( double *, SACl_v), SAC_ND_PARAM_in_rc( double *, SACl_rofu));

extern 
/*
 * ND_FUN_DEC( SACf_FFT1d__d___MAIN__cpx_64___MAIN__cpx_32, void, 4, out_rc, double *, SAC__arg_1, in, double, SACl_dir, in_rc, double *, SACl_v, in_rc, double *, SACl_rofu)
 */
void SACf_FFT1d__d___MAIN__cpx_64___MAIN__cpx_32( SAC_ND_PARAM_out_rc( double *, SAC__arg_1), SAC_ND_PARAM_in( double, SACl_dir), SAC_ND_PARAM_in_rc( double *, SACl_v), SAC_ND_PARAM_in_rc( double *, SACl_rofu));

extern 
/*
 * ND_FUN_DEC( SACf_FFT1d__d___MAIN__cpx_128___MAIN__cpx_64, void, 4, out_rc, double *, SAC__arg_1, in, double, SACl_dir, in_rc, double *, SACl_v, in_rc, double *, SACl_rofu)
 */
void SACf_FFT1d__d___MAIN__cpx_128___MAIN__cpx_64( SAC_ND_PARAM_out_rc( double *, SAC__arg_1), SAC_ND_PARAM_in( double, SACl_dir), SAC_ND_PARAM_in_rc( double *, SACl_v), SAC_ND_PARAM_in_rc( double *, SACl_rofu));

extern 
/*
 * ND_FUN_DEC( SACf_FFT1d_Slice__d___MAIN__cpx_128_32_128___MAIN__cpx_64, void, 4, out_rc, double *, SAC__arg_1, in, double, SACl_dir, in_rc, double *, SACl_a, in_rc, double *, SACl_rofu)
 */
void SACf_FFT1d_Slice__d___MAIN__cpx_128_32_128___MAIN__cpx_64( SAC_ND_PARAM_out_rc( double *, SAC__arg_1), SAC_ND_PARAM_in( double, SACl_dir), SAC_ND_PARAM_in_rc( double *, SACl_a), SAC_ND_PARAM_in_rc( double *, SACl_rofu));

extern 
/*
 * ND_FUN_DEC( SACf_FFT1d_Slice__d___MAIN__cpx_128_128_32___MAIN__cpx_64, void, 4, out_rc, double *, SAC__arg_1, in, double, SACl_dir, in_rc, double *, SACl_a, in_rc, double *, SACl_rofu)
 */
void SACf_FFT1d_Slice__d___MAIN__cpx_128_128_32___MAIN__cpx_64( SAC_ND_PARAM_out_rc( double *, SAC__arg_1), SAC_ND_PARAM_in( double, SACl_dir), SAC_ND_PARAM_in_rc( double *, SACl_a), SAC_ND_PARAM_in_rc( double *, SACl_rofu));

extern 
/*
 * ND_FUN_DEC( SACf_FFT1d_Slice__d___MAIN__cpx_32_128_128___MAIN__cpx_64, void, 4, out_rc, double *, SAC__arg_1, in, double, SACl_dir, in_rc, double *, SACl_a, in_rc, double *, SACl_rofu)
 */
void SACf_FFT1d_Slice__d___MAIN__cpx_32_128_128___MAIN__cpx_64( SAC_ND_PARAM_out_rc( double *, SAC__arg_1), SAC_ND_PARAM_in( double, SACl_dir), SAC_ND_PARAM_in_rc( double *, SACl_a), SAC_ND_PARAM_in_rc( double *, SACl_rofu));

extern 
/*
 * ND_FUN_DEC( SACf_FFT3d_forward___MAIN__cpx_128_128_32___MAIN__cpx_64, void, 3, out_rc, double *, SAC__arg_1, in_rc, double *, SACl_a, in_rc, double *, SACl_rofu)
 */
void SACf_FFT3d_forward___MAIN__cpx_128_128_32___MAIN__cpx_64( SAC_ND_PARAM_out_rc( double *, SAC__arg_1), SAC_ND_PARAM_in_rc( double *, SACl_a), SAC_ND_PARAM_in_rc( double *, SACl_rofu));

extern 
/*
 * ND_FUN_DEC( SACf_CheckResult__i___MAIN__cpx_128_128_32, void, 2, in, int, SACl_iter, in_rc, double *, SACl_X)
 */
void SACf_CheckResult__i___MAIN__cpx_128_128_32( SAC_ND_PARAM_in( int, SACl_iter), SAC_ND_PARAM_in_rc( double *, SACl_X));

extern 
/*
 * ND_FUN_DEC( SACf_main, int, 0)
 */
int SACf_main();

extern 
/*
 * ND_FUN_DEC( to_string, void, 3, out_rc, SACe_string, SAC__arg_1, in_rc, char *, SACl_A, in, int, SACl_LENGTH)
 */
void to_string( SAC_ND_PARAM_out_rc( SACe_string, SAC__arg_1), SAC_ND_PARAM_in_rc( char *, SACl_A), SAC_ND_PARAM_in( int, SACl_LENGTH));



/*
 *  global objects
 */

extern SACe_World TheWorld;

extern SACe_Terminal TheTerminal;

extern SACe_TermFile SACstdin;

extern SACe_TermFile SACstdout;

extern SACe_TermFile SACstderr;

extern SACe_FileSystem TheFileSystem;



/*
 *  function definitions
 */

/*
 * ND_FUN_DEC( SACf_GlobalObjInit, void, 0)
 */
void SACf_GlobalObjInit( int __argc, char *__argv[])
{ 
  SAC_INITGLOBALOBJECT_BEGIN( TheWorld)
    /*
     * ND_FUN_AP( create_TheWorld, TheWorld, 0)
     */
    TheWorld = create_TheWorld();

  SAC_INITGLOBALOBJECT_END( )
  SAC_INITGLOBALOBJECT_BEGIN( TheTerminal)
    /*
     * ND_FUN_AP( create_TheTerminal, TheTerminal, 0)
     */
    TheTerminal = create_TheTerminal();

  SAC_INITGLOBALOBJECT_END( )
  SAC_INITGLOBALOBJECT_BEGIN( SACstdin)
    /*
     * ND_FUN_AP( create_stdin, SACstdin, 0)
     */
    SACstdin = create_stdin();

  SAC_INITGLOBALOBJECT_END( )
  SAC_INITGLOBALOBJECT_BEGIN( SACstdout)
    /*
     * ND_FUN_AP( create_stdout, SACstdout, 0)
     */
    SACstdout = create_stdout();

  SAC_INITGLOBALOBJECT_END( )
  SAC_INITGLOBALOBJECT_BEGIN( SACstderr)
    /*
     * ND_FUN_AP( create_stderr, SACstderr, 0)
     */
    SACstderr = create_stderr();

  SAC_INITGLOBALOBJECT_END( )
  SAC_INITGLOBALOBJECT_BEGIN( TheFileSystem)
    /*
     * ND_FUN_AP( create_TheFileSystem, TheFileSystem, 0)
     */
    TheFileSystem = create_TheFileSystem();

  SAC_INITGLOBALOBJECT_END( )
  /*
   * ND_FUN_RET( , 0)
   */
  return;
}

/*
 * ND_FUN_DEC( SACf_ComputeIndexMap, void, 1, out_rc, int *, SAC__arg_1)
 */
void SACf_ComputeIndexMap( SAC_ND_PARAM_out_rc( int *, SAC__arg_1))
{ 
  /*
   * ND_KS_DECL_ARRAY( int, SACl_map, 3, 128, 128, 32)
   */
  int *SACl_map;
  int SAC_ND_A_RC( SACl_map);
  const int SAC_ND_A_SIZE( SACl_map) = 128*128*32;
  const int SAC_ND_A_DIM( SACl_map) = 3;
  const int SAC_ND_A_SHAPE( SACl_map, 0) = 128;
  const int SAC_ND_A_SHAPE( SACl_map, 1) = 128;
  const int SAC_ND_A_SHAPE( SACl_map, 2) = 32;

  int SACl_ttt; 
  int SACp_flat_163; 
  int SACp_flat_164; 
  int SACp_flat_165; 
  int SACp_flat_166; 
  int SACl_kk; 
  int SACp_flat_159; 
  int SACp_flat_160; 
  int SACl_jj; 
  int SACp_flat_155; 
  int SACp_flat_156; 
  int SACl_ii; 
  int SACp_flat_151; 
  int SACp_flat_152; 
  int SACp_flat_149_k; 
  int SACp_flat_148_j; 
  int SACp_flat_147_i; 
  /*
   * ND_KS_DECL_ARRAY( int, SACp_flat_150_iv, 1, 3)
   */
  int *SACp_flat_150_iv;
  int SAC_ND_A_RC( SACp_flat_150_iv);
  const int SAC_ND_A_SIZE( SACp_flat_150_iv) = 3;
  const int SAC_ND_A_DIM( SACp_flat_150_iv) = 1;
  const int SAC_ND_A_SHAPE( SACp_flat_150_iv, 0) = 3;


  SAC_ND_ALLOC_ARRAY( int, SACl_map, 1)
  SAC_PF_BEGIN_WITH( genarray)
    /*
     * WL_BEGIN__OFFSET( SACl_map, 3, SACp_flat_150_iv, 3)
     */
    { int SAC_WL_OFFSET( SACl_map);
      int SAC_WL_MT_SCHEDULE_START( 0);
      int SAC_WL_MT_SCHEDULE_STOP( 0);
      int SAC_WL_MT_SCHEDULE_START( 1);
      int SAC_WL_MT_SCHEDULE_STOP( 1);
      int SAC_WL_MT_SCHEDULE_START( 2);
      int SAC_WL_MT_SCHEDULE_STOP( 2);
      int SAC_i;
      int SAC_WL_SHAPE_FACTOR( SACl_map, 0) = 1 * SAC_ND_A_SHAPE( SACl_map, 1) * SAC_ND_A_SHAPE( SACl_map, 2);
      int SAC_WL_SHAPE_FACTOR( SACl_map, 1) = 1 * SAC_ND_A_SHAPE( SACl_map, 2);
      int SAC_WL_SHAPE_FACTOR( SACl_map, 2) = 1;

      /*
       * MT_SCHEDULER_BEGIN( 0, 3, 0, 0, 0, 128, 128, 32)
       */
      SAC_WL_MT_SCHEDULE_START( 0) = 0;
      SAC_WL_MT_SCHEDULE_STOP( 0) = 128;
      SAC_WL_MT_SCHEDULE_START( 1) = 0;
      SAC_WL_MT_SCHEDULE_STOP( 1) = 128;
      SAC_WL_MT_SCHEDULE_START( 2) = 0;
      SAC_WL_MT_SCHEDULE_STOP( 2) = 32;

      /*
       * WL_INIT_OFFSET( SACl_map, 3, SACp_flat_150_iv, 3)
       */
      SAC_WL_OFFSET( SACl_map)
        = SAC_WL_MT_SCHEDULE_START( 0) * SAC_WL_SHAPE_FACTOR( SACl_map, 0)
        + SAC_WL_MT_SCHEDULE_START( 1) * SAC_WL_SHAPE_FACTOR( SACl_map, 1)
        + SAC_WL_MT_SCHEDULE_START( 2) * SAC_WL_SHAPE_FACTOR( SACl_map, 2);

      SAC_WL_STRIDE_LOOP0_BEGIN( 0, SACp_flat_150_iv, SACp_flat_147_i, 0, 128, 1)
        SAC_WL_GRID_UNROLL_BEGIN( 0, SACp_flat_150_iv, SACp_flat_147_i, 0, 1)
          SAC_WL_STRIDE_LOOP0_BEGIN( 1, SACp_flat_150_iv, SACp_flat_148_j, 0, 128, 1)
            SAC_WL_GRID_UNROLL_BEGIN( 1, SACp_flat_150_iv, SACp_flat_148_j, 0, 1)
              SAC_WL_STRIDE_LOOP0_BEGIN( 2, SACp_flat_150_iv, SACp_flat_149_k, 0, 32, 1)
                SAC_WL_GRID_UNROLL_BEGIN( 2, SACp_flat_150_iv, SACp_flat_149_k, 0, 1)
                  SACp_flat_152 = (SACp_flat_147_i + 64); 
                  SACp_flat_151 = (SACp_flat_152 % 128); 
                  SACl_ii = (SACp_flat_151 + -64); 
                  SACp_flat_156 = (SACp_flat_148_j + 64); 
                  SACp_flat_155 = (SACp_flat_156 % 128); 
                  SACl_jj = (SACp_flat_155 + -64); 
                  SACp_flat_160 = (SACp_flat_149_k + 16); 
                  SACp_flat_159 = (SACp_flat_160 % 32); 
                  SACl_kk = (SACp_flat_159 + -16); 
                  SACp_flat_166 = (SACl_kk * SACl_kk); 
                  SACp_flat_165 = (SACl_jj * SACl_jj); 
                  SACp_flat_164 = (SACl_ii * SACl_ii); 
                  SACp_flat_163 = (SACp_flat_164 + SACp_flat_165); 
                  SACl_ttt = (SACp_flat_163 + SACp_flat_166); 
                  /*
                   * WL_ASSIGN( SACl_ttt, 0, SACl_map, 3, SACp_flat_150_iv, 3, SACp_flat_147_i, SACp_flat_148_j, SACp_flat_149_k)
                   */
                  SAC_TR_WL_PRINT( ("index vector [%d, %d, %d] (== offset %d) -- offset %d -- assign", SACp_flat_147_i, SACp_flat_148_j, SACp_flat_149_k, ( SAC_ND_A_SHAPE( SACl_map, 2) * ( SAC_ND_A_SHAPE( SACl_map, 1) * SACp_flat_147_i + SACp_flat_148_j )+ SACp_flat_149_k ), SAC_WL_OFFSET( SACl_map)));
                  SAC_ASSURE_TYPE( (SAC_ND_A_DIM( SACl_ttt) == (SAC_ND_A_DIM( SACl_map) - 3)), ("WL expression with illegal dimension found!"));
                  SAC_ASSURE_TYPE( (SAC_ND_A_SIZE( SACl_ttt) == SAC_WL_SHAPE_FACTOR( SACl_map, 2)), ("WL expression with illegal size found!"));
                  SAC_ND_WRITE_ARRAY( SACl_map, SAC_WL_OFFSET( SACl_map)) = SACl_ttt;
                  SAC_WL_OFFSET( SACl_map)++;

                SAC_WL_GRID_UNROLL_END( 2, SACp_flat_150_iv, SACp_flat_149_k, 0, 1)
              SAC_WL_STRIDE_LOOP_END( 2, SACp_flat_150_iv, SACp_flat_149_k, 0, 32, 1)
            SAC_WL_GRID_UNROLL_END( 1, SACp_flat_150_iv, SACp_flat_148_j, 0, 1)
          SAC_WL_STRIDE_LOOP_END( 1, SACp_flat_150_iv, SACp_flat_148_j, 0, 128, 1)
        SAC_WL_GRID_UNROLL_END( 0, SACp_flat_150_iv, SACp_flat_147_i, 0, 1)
      SAC_WL_STRIDE_LOOP_END( 0, SACp_flat_150_iv, SACp_flat_147_i, 0, 128, 1)
      /*
       * MT_SCHEDULER_END( 0, 3, 0, 0, 0, 128, 128, 32)
       */


      /*
       * WL_END__OFFSET( SACl_map, 3, SACp_flat_150_iv, 3)
       */
    }

  SAC_PF_END_WITH( genarray)
  /*
   * ND_FUN_RET( , 1, out_rc, SACl_map, SAC__arg_1)
   */
  SAC_ND_RET_out_rc( SACl_map, SAC__arg_1)
  return;
}

/*
 * ND_FUN_DEC( SACf_ComputeExponentialMap, void, 1, out_rc, double *, SAC__arg_1)
 */
void SACf_ComputeExponentialMap( SAC_ND_PARAM_out_rc( double *, SAC__arg_1))
{ 
  int SACp_inl_6480_i; 
  /*
   * ND_KS_DECL_ARRAY( double, SACp_inl_6479_map, 1, 50689)
   */
  double *SACp_inl_6479_map;
  int SAC_ND_A_RC( SACp_inl_6479_map);
  const int SAC_ND_A_SIZE( SACp_inl_6479_map) = 50689;
  const int SAC_ND_A_DIM( SACp_inl_6479_map) = 1;
  const int SAC_ND_A_SHAPE( SACp_inl_6479_map, 0) = 50689;

  int SACp_inl_6478__lir_3884__flat_182_50689__; 
  /*
   * ND_KS_DECL_ARRAY( double, SACp_inl_6477_map__SSA_3, 1, 50689)
   */
  double *SACp_inl_6477_map__SSA_3;
  int SAC_ND_A_RC( SACp_inl_6477_map__SSA_3);
  const int SAC_ND_A_SIZE( SACp_inl_6477_map__SSA_3) = 50689;
  const int SAC_ND_A_DIM( SACp_inl_6477_map__SSA_3) = 1;
  const int SAC_ND_A_SHAPE( SACp_inl_6477_map__SSA_3, 0) = 50689;

  int SACp_inl_6476_i__SSA_1; 
  int SACp_inl_6475__flat_176_50689__; 
  double SACp_inl_6474__flat_177; 
  double SACp_inl_6473__flat_178; 
  int SACp_inl_6472__flat_179_50689__; 
  int SACp_inl_6471__flat_180; 
  double SACp_inl_6470__flat_181; 
  bool SACp_inl_6469__flat_183; 
  /*
   * ND_KS_DECL_ARRAY( double, SACp_inl_3878_map__SSA_1, 1, 50689)
   */
  double *SACp_inl_3878_map__SSA_1;
  int SAC_ND_A_RC( SACp_inl_3878_map__SSA_1);
  const int SAC_ND_A_SIZE( SACp_inl_3878_map__SSA_1) = 50689;
  const int SAC_ND_A_DIM( SACp_inl_3878_map__SSA_1) = 1;
  const int SAC_ND_A_SHAPE( SACp_inl_3878_map__SSA_1, 0) = 50689;

  int SACl_i; 
  int SACp_flat_174_50689__; 
  double SACp_flat_175; 
  int SACp_flat_173_50689__; 
  double SACl_alpha; 
  double SACp_flat_170; 
  /*
   * ND_KS_DECL_ARRAY( double, SACl_map, 1, 50689)
   */
  double *SACl_map;
  int SAC_ND_A_RC( SACl_map);
  const int SAC_ND_A_SIZE( SACl_map) = 50689;
  const int SAC_ND_A_DIM( SACl_map) = 1;
  const int SAC_ND_A_SHAPE( SACl_map, 0) = 50689;

  double SACp_type_363; 
  int SACp_type_364; 
  /*
   * ND_KS_DECL_ARRAY( int, SACp_type_362, 1, 1)
   */
  int *SACp_type_362;
  int SAC_ND_A_RC( SACp_type_362);
  const int SAC_ND_A_SIZE( SACp_type_362) = 1;
  const int SAC_ND_A_DIM( SACp_type_362) = 1;
  const int SAC_ND_A_SHAPE( SACp_type_362, 0) = 1;

  /*
   * ND_KS_DECL_ARRAY( double, SACl_map__SSA_1, 1, 50689)
   */
  double *SACl_map__SSA_1;
  int SAC_ND_A_RC( SACl_map__SSA_1);
  const int SAC_ND_A_SIZE( SACl_map__SSA_1) = 50689;
  const int SAC_ND_A_DIM( SACl_map__SSA_1) = 1;
  const int SAC_ND_A_SHAPE( SACl_map__SSA_1, 0) = 50689;

  /*
   * ND_KS_DECL_ARRAY( double, SACl_map__SSA_2, 1, 50689)
   */
  double *SACl_map__SSA_2;
  int SAC_ND_A_RC( SACl_map__SSA_2);
  const int SAC_ND_A_SIZE( SACl_map__SSA_2) = 50689;
  const int SAC_ND_A_DIM( SACl_map__SSA_2) = 1;
  const int SAC_ND_A_SHAPE( SACl_map__SSA_2, 0) = 50689;


  SACp_type_363 = 0.0; 
  SAC_ND_ALLOC_ARRAY( double, SACl_map, 1)
  SAC_PF_BEGIN_WITH( genarray)
    /*
     * WL_BEGIN__OFFSET( SACl_map, 1, SACp_type_362, 1)
     */
    { int SAC_WL_OFFSET( SACl_map);
      int SAC_WL_MT_SCHEDULE_START( 0);
      int SAC_WL_MT_SCHEDULE_STOP( 0);
      int SAC_i;
      int SAC_WL_SHAPE_FACTOR( SACl_map, 0) = 1;

      /*
       * MT_SCHEDULER_BEGIN( 0, 1, 0, 50689)
       */
      SAC_WL_MT_SCHEDULE_START( 0) = 0;
      SAC_WL_MT_SCHEDULE_STOP( 0) = 50689;

      /*
       * WL_INIT_OFFSET( SACl_map, 1, SACp_type_362, 1)
       */
      SAC_WL_OFFSET( SACl_map)
        = SAC_WL_MT_SCHEDULE_START( 0) * SAC_WL_SHAPE_FACTOR( SACl_map, 0);

      SAC_WL_STRIDE_LOOP0_BEGIN( 0, SACp_type_362, SACp_type_364, 0, 50689, 1)
        SAC_WL_GRID_UNROLL_BEGIN( 0, SACp_type_362, SACp_type_364, 0, 1)
          /*
           * WL_ASSIGN( SACp_type_363, 0, SACl_map, 1, SACp_type_362, 1, SACp_type_364)
           */
          SAC_TR_WL_PRINT( ("index vector [%d] (== offset %d) -- offset %d -- assign", SACp_type_364, SACp_type_364 , SAC_WL_OFFSET( SACl_map)));
          SAC_ASSURE_TYPE( (SAC_ND_A_DIM( SACp_type_363) == (SAC_ND_A_DIM( SACl_map) - 1)), ("WL expression with illegal dimension found!"));
          SAC_ASSURE_TYPE( (SAC_ND_A_SIZE( SACp_type_363) == SAC_WL_SHAPE_FACTOR( SACl_map, 0)), ("WL expression with illegal size found!"));
          SAC_ND_WRITE_ARRAY( SACl_map, SAC_WL_OFFSET( SACl_map)) = SACp_type_363;
          SAC_WL_OFFSET( SACl_map)++;

        SAC_WL_GRID_UNROLL_END( 0, SACp_type_362, SACp_type_364, 0, 1)
      SAC_WL_STRIDE_LOOP_END( 0, SACp_type_362, SACp_type_364, 0, 50689, 1)
      /*
       * MT_SCHEDULER_END( 0, 1, 0, 50689)
       */


      /*
       * WL_END__OFFSET( SACl_map, 1, SACp_type_362, 1)
       */
    }

  SAC_PF_END_WITH( genarray)
  /*
   * ND_FUN_AP( pow, SACp_flat_170, 2, in, 10.0, in, -6.0)
   */
  SACp_flat_170 = pow( SAC_ND_ARG_in( 10.0), SAC_ND_ARG_in( -6.0));

  SACl_alpha = (SACp_flat_170 * -39.4784176043574319692197605036199092864990234375); 
  SACp_flat_173_50689__ = 0; 
  SAC_ND_CHECK_REUSE_ARRAY( SACl_map, SACl_map__SSA_1)
  SAC_ND_ALLOC_ARRAY( double, SACl_map__SSA_1, 0)
  SAC_ND_INC_RC( SACl_map__SSA_1, 1)
  SAC_ND_IDX_MODARRAY_AxVxS( double, SACl_map__SSA_1, SACl_map, SACp_flat_173_50689__, 1.0)
  SAC_ND_DEC_RC_FREE_ARRAY( SACl_map, 1)
  /*
   * ND_FUN_AP( exp, SACp_flat_175, 1, in, SACl_alpha)
   */
  SACp_flat_175 = exp( SAC_ND_ARG_in( SACl_alpha));

  SACp_flat_174_50689__ = 1; 
  SAC_ND_CHECK_REUSE_ARRAY( SACl_map__SSA_1, SACl_map__SSA_2)
  SAC_ND_ALLOC_ARRAY( double, SACl_map__SSA_2, 0)
  SAC_ND_INC_RC( SACl_map__SSA_2, 1)
  SAC_ND_IDX_MODARRAY_AxVxS( double, SACl_map__SSA_2, SACl_map__SSA_1, SACp_flat_174_50689__, SACp_flat_175)
  SAC_ND_DEC_RC_FREE_ARRAY( SACl_map__SSA_1, 1)
  SACl_i = 2; 
  SACp_inl_6480_i = SACl_i; 
  SAC_ND_KS_ASSIGN_ARRAY( SACl_map__SSA_2, SACp_inl_6479_map)
  SACp_inl_6478__lir_3884__flat_182_50689__ = SACp_flat_174_50689__; 
  SAC_ND_GOTO( _comp_6651_SAC__label)
  do 
  { 
    SAC_ND_DEC_RC_FREE_ARRAY( SACp_inl_6477_map__SSA_3, 1)
    SAC_ND_LABEL( _comp_6651_SAC__label)
    SAC_ND_IDX_SEL_S( SACp_inl_6478__lir_3884__flat_182_50689__, SACp_inl_6479_map, SACp_inl_6470__flat_181)
    SACp_inl_6471__flat_180 = (SACp_inl_6480_i - 1); 
    SACp_inl_6472__flat_179_50689__ = SACp_inl_6471__flat_180; 
    SAC_ND_IDX_SEL_S( SACp_inl_6472__flat_179_50689__, SACp_inl_6479_map, SACp_inl_6473__flat_178)
    SACp_inl_6474__flat_177 = (SACp_inl_6473__flat_178 * SACp_inl_6470__flat_181); 
    SACp_inl_6475__flat_176_50689__ = SACp_inl_6480_i; 
    SAC_ND_CHECK_REUSE_ARRAY( SACp_inl_6479_map, SACp_inl_6477_map__SSA_3)
    SAC_ND_ALLOC_ARRAY( double, SACp_inl_6477_map__SSA_3, 0)
    SAC_ND_INC_RC( SACp_inl_6477_map__SSA_3, 1)
    SAC_ND_IDX_MODARRAY_AxVxS( double, SACp_inl_6477_map__SSA_3, SACp_inl_6479_map, SACp_inl_6475__flat_176_50689__, SACp_inl_6474__flat_177)
    SAC_ND_DEC_RC_FREE_ARRAY( SACp_inl_6479_map, 1)
    SAC_ND_INC_RC( SACp_inl_6477_map__SSA_3, 1)
    SACp_inl_6476_i__SSA_1 = (SACp_inl_6480_i + 1); 
    SACp_inl_6469__flat_183 = (SACp_inl_6476_i__SSA_1 < 50689); 
    SAC_ND_KS_ASSIGN_ARRAY( SACp_inl_6477_map__SSA_3, SACp_inl_6479_map)
    SACp_inl_6480_i = SACp_inl_6476_i__SSA_1; 
  }
  while (SACp_inl_6469__flat_183);
  SAC_ND_DEC_RC_FREE_ARRAY( SACp_inl_6479_map, 1)
  SAC_ND_KS_ASSIGN_ARRAY( SACp_inl_6477_map__SSA_3, SACp_inl_3878_map__SSA_1)
  /*
   * ND_FUN_RET( , 1, out_rc, SACp_inl_3878_map__SSA_1, SAC__arg_1)
   */
  SAC_ND_RET_out_rc( SACp_inl_3878_map__SSA_1, SAC__arg_1)
  return;
}

/*
 * ND_FUN_DEC( SACf_RootsOfUnity__d, void, 2, out_rc, double *, SAC__arg_1, in, double, SACl_dir)
 */
void SACf_RootsOfUnity__d( SAC_ND_PARAM_out_rc( double *, SAC__arg_1), SAC_ND_PARAM_in( double, SACl_dir))
{ 
  int SACp_inl_6502_i; 
  /*
   * ND_KS_DECL_ARRAY( double, SACp_inl_6501_u, 2, 64, 2)
   */
  double *SACp_inl_6501_u;
  int SAC_ND_A_RC( SACp_inl_6501_u);
  const int SAC_ND_A_SIZE( SACp_inl_6501_u) = 64*2;
  const int SAC_ND_A_DIM( SACp_inl_6501_u) = 2;
  const int SAC_ND_A_SHAPE( SACp_inl_6501_u, 0) = 64;
  const int SAC_ND_A_SHAPE( SACp_inl_6501_u, 1) = 2;

  double SACp_inl_6500__lir_3951__inl_799__flat_0; 
  double SACp_inl_6499__lir_3953__inl_809__flat_0; 
  double SACp_inl_6498__type_369__SSA_1; 
  int SACp_inl_6497__type_370__SSA_1_64_2__; 
  /*
   * ND_KS_DECL_ARRAY( double, SACp_inl_6496_u__SSA_3, 2, 64, 2)
   */
  double *SACp_inl_6496_u__SSA_3;
  int SAC_ND_A_RC( SACp_inl_6496_u__SSA_3);
  const int SAC_ND_A_SIZE( SACp_inl_6496_u__SSA_3) = 64*2;
  const int SAC_ND_A_DIM( SACp_inl_6496_u__SSA_3) = 2;
  const int SAC_ND_A_SHAPE( SACp_inl_6496_u__SSA_3, 0) = 64;
  const int SAC_ND_A_SHAPE( SACp_inl_6496_u__SSA_3, 1) = 2;

  int SACp_inl_6495_i__SSA_1; 
  int SACp_inl_6494__flat_206_64_2__; 
  double SACp_inl_6493__type_369; 
  int SACp_inl_6492__type_370_64_2__; 
  int SACp_inl_6491__flat_204; 
  bool SACp_inl_6490__flat_208; 
  double SACp_inl_6489__flat_12; 
  double SACp_inl_6488__flat_9; 
  /*
   * ND_KS_DECL_ARRAY( double, SACp_inl_6487_res, 1, 2)
   */
  double *SACp_inl_6487_res;
  int SAC_ND_A_RC( SACp_inl_6487_res);
  const int SAC_ND_A_SIZE( SACp_inl_6487_res) = 2;
  const int SAC_ND_A_DIM( SACp_inl_6487_res) = 1;
  const int SAC_ND_A_SHAPE( SACp_inl_6487_res, 0) = 2;

  double SACp_inl_6486__flat_34; 
  double SACp_inl_6485__flat_31; 
  double SACp_inl_6484__flat_30; 
  double SACp_inl_6483__flat_27; 
  double SACp_inl_6482__flat_24; 
  double SACp_inl_6481__flat_23; 
  /*
   * ND_KS_DECL_ARRAY( double, SACp_inl_3938_u__SSA_1, 2, 64, 2)
   */
  double *SACp_inl_3938_u__SSA_1;
  int SAC_ND_A_RC( SACp_inl_3938_u__SSA_1);
  const int SAC_ND_A_SIZE( SACp_inl_3938_u__SSA_1) = 64*2;
  const int SAC_ND_A_DIM( SACp_inl_3938_u__SSA_1) = 2;
  const int SAC_ND_A_SHAPE( SACp_inl_3938_u__SSA_1, 0) = 64;
  const int SAC_ND_A_SHAPE( SACp_inl_3938_u__SSA_1, 1) = 2;

  int SACl_i; 
  /*
   * ND_KS_DECL_ARRAY( double, SACp_flat_201, 1, 2)
   */
  double *SACp_flat_201;
  int SAC_ND_A_RC( SACp_flat_201);
  const int SAC_ND_A_SIZE( SACp_flat_201) = 2;
  const int SAC_ND_A_DIM( SACp_flat_201) = 1;
  const int SAC_ND_A_SHAPE( SACp_flat_201, 0) = 2;

  double SACp_flat_198; 
  double SACp_flat_199; 
  double SACp_flat_200; 
  double SACl_theta; 
  /*
   * ND_KS_DECL_ARRAY( double, SACl_u, 2, 64, 2)
   */
  double *SACl_u;
  int SAC_ND_A_RC( SACl_u);
  const int SAC_ND_A_SIZE( SACl_u) = 64*2;
  const int SAC_ND_A_DIM( SACl_u) = 2;
  const int SAC_ND_A_SHAPE( SACl_u, 0) = 64;
  const int SAC_ND_A_SHAPE( SACl_u, 1) = 2;

  double SACp_type_366; 
  int SACp_type_368; 
  int SACp_type_367; 
  /*
   * ND_KS_DECL_ARRAY( int, SACp_type_365, 1, 2)
   */
  int *SACp_type_365;
  int SAC_ND_A_RC( SACp_type_365);
  const int SAC_ND_A_SIZE( SACp_type_365) = 2;
  const int SAC_ND_A_DIM( SACp_type_365) = 1;
  const int SAC_ND_A_SHAPE( SACp_type_365, 0) = 2;

  int SACp_inl_771__flat_729_64_2__; 
  /*
   * ND_KS_DECL_ARRAY( double, SACp_inl_770__flat_728, 2, 64, 2)
   */
  double *SACp_inl_770__flat_728;
  int SAC_ND_A_RC( SACp_inl_770__flat_728);
  const int SAC_ND_A_SIZE( SACp_inl_770__flat_728) = 64*2;
  const int SAC_ND_A_DIM( SACp_inl_770__flat_728) = 2;
  const int SAC_ND_A_SHAPE( SACp_inl_770__flat_728, 0) = 64;
  const int SAC_ND_A_SHAPE( SACp_inl_770__flat_728, 1) = 2;


  SACp_type_366 = 0.0; 
  SAC_ND_ALLOC_ARRAY( double, SACl_u, 1)
  SAC_PF_BEGIN_WITH( genarray)
    /*
     * WL_BEGIN__OFFSET( SACl_u, 2, SACp_type_365, 2)
     */
    { int SAC_WL_OFFSET( SACl_u);
      int SAC_WL_MT_SCHEDULE_START( 0);
      int SAC_WL_MT_SCHEDULE_STOP( 0);
      int SAC_WL_MT_SCHEDULE_START( 1);
      int SAC_WL_MT_SCHEDULE_STOP( 1);
      int SAC_i;
      int SAC_WL_SHAPE_FACTOR( SACl_u, 0) = 1 * SAC_ND_A_SHAPE( SACl_u, 1);
      int SAC_WL_SHAPE_FACTOR( SACl_u, 1) = 1;

      /*
       * MT_SCHEDULER_BEGIN( 0, 2, 0, 0, 64, 2)
       */
      SAC_WL_MT_SCHEDULE_START( 0) = 0;
      SAC_WL_MT_SCHEDULE_STOP( 0) = 64;
      SAC_WL_MT_SCHEDULE_START( 1) = 0;
      SAC_WL_MT_SCHEDULE_STOP( 1) = 2;

      /*
       * WL_INIT_OFFSET( SACl_u, 2, SACp_type_365, 2)
       */
      SAC_WL_OFFSET( SACl_u)
        = SAC_WL_MT_SCHEDULE_START( 0) * SAC_WL_SHAPE_FACTOR( SACl_u, 0)
        + SAC_WL_MT_SCHEDULE_START( 1) * SAC_WL_SHAPE_FACTOR( SACl_u, 1);

      SAC_WL_STRIDE_LOOP0_BEGIN( 0, SACp_type_365, SACp_type_367, 0, 64, 1)
        SAC_WL_GRID_UNROLL_BEGIN( 0, SACp_type_365, SACp_type_367, 0, 1)
          SAC_WL_STRIDE_LOOP0_BEGIN( 1, SACp_type_365, SACp_type_368, 0, 2, 1)
            SAC_WL_GRID_UNROLL_BEGIN( 1, SACp_type_365, SACp_type_368, 0, 1)
              /*
               * WL_ASSIGN( SACp_type_366, 0, SACl_u, 2, SACp_type_365, 2, SACp_type_367, SACp_type_368)
               */
              SAC_TR_WL_PRINT( ("index vector [%d, %d] (== offset %d) -- offset %d -- assign", SACp_type_367, SACp_type_368, ( SAC_ND_A_SHAPE( SACl_u, 1) * SACp_type_367 + SACp_type_368 ), SAC_WL_OFFSET( SACl_u)));
              SAC_ASSURE_TYPE( (SAC_ND_A_DIM( SACp_type_366) == (SAC_ND_A_DIM( SACl_u) - 2)), ("WL expression with illegal dimension found!"));
              SAC_ASSURE_TYPE( (SAC_ND_A_SIZE( SACp_type_366) == SAC_WL_SHAPE_FACTOR( SACl_u, 1)), ("WL expression with illegal size found!"));
              SAC_ND_WRITE_ARRAY( SACl_u, SAC_WL_OFFSET( SACl_u)) = SACp_type_366;
              SAC_WL_OFFSET( SACl_u)++;

            SAC_WL_GRID_UNROLL_END( 1, SACp_type_365, SACp_type_368, 0, 1)
          SAC_WL_STRIDE_LOOP_END( 1, SACp_type_365, SACp_type_368, 0, 2, 1)
        SAC_WL_GRID_UNROLL_END( 0, SACp_type_365, SACp_type_367, 0, 1)
      SAC_WL_STRIDE_LOOP_END( 0, SACp_type_365, SACp_type_367, 0, 64, 1)
      /*
       * MT_SCHEDULER_END( 0, 2, 0, 0, 64, 2)
       */


      /*
       * WL_END__OFFSET( SACl_u, 2, SACp_type_365, 2)
       */
    }

  SAC_PF_END_WITH( genarray)
  SACl_theta = (SACl_dir * 0.049087385212340517437468179196002893149852752685546875); 
  /*
   * ND_FUN_AP( sin, SACp_flat_200, 1, in, SACl_theta)
   */
  SACp_flat_200 = sin( SAC_ND_ARG_in( SACl_theta));

  /*
   * ND_FUN_AP( cos, SACp_flat_199, 1, in, SACl_theta)
   */
  SACp_flat_199 = cos( SAC_ND_ARG_in( SACl_theta));

  SACp_flat_198 = (SACp_flat_199 + -1.0); 
  SAC_ND_ALLOC_ARRAY( double, SACp_flat_201, 1)
  /*
   * ND_CREATE_CONST_ARRAY_S( SACp_flat_201, 2, 1.0, 0.0)
   */
  SAC_ND_WRITE_ARRAY( SACp_flat_201, 0) = 1.0;
  SAC_ND_WRITE_ARRAY( SACp_flat_201, 1) = 0.0;

  SACp_inl_771__flat_729_64_2__ = (0 * 2); 
  SAC_ND_CHECK_REUSE_ARRAY( SACl_u, SACp_inl_770__flat_728)
  SAC_ND_ALLOC_ARRAY( double, SACp_inl_770__flat_728, 0)
  SAC_ND_INC_RC( SACp_inl_770__flat_728, 1)
  SAC_ND_IDX_MODARRAY_AxVxA( double, SACp_inl_770__flat_728, SACl_u, SACp_inl_771__flat_729_64_2__, SACp_flat_201)
  SAC_ND_DEC_RC_FREE_ARRAY( SACp_flat_201, 1)
  SAC_ND_DEC_RC_FREE_ARRAY( SACl_u, 1)
  SACl_i = 1; 
  SACp_inl_6502_i = SACl_i; 
  SAC_ND_KS_ASSIGN_ARRAY( SACp_inl_770__flat_728, SACp_inl_6501_u)
  SACp_inl_6500__lir_3951__inl_799__flat_0 = SACp_flat_198; 
  SACp_inl_6499__lir_3953__inl_809__flat_0 = SACp_flat_200; 
  SAC_ND_GOTO( _comp_6652_SAC__label)
  do 
  { 
    SAC_ND_DEC_RC_FREE_ARRAY( SACp_inl_6496_u__SSA_3, 1)
    SAC_ND_LABEL( _comp_6652_SAC__label)
    SACp_inl_6491__flat_204 = (SACp_inl_6502_i - 1); 
    SACp_inl_6492__type_370_64_2__ = ((SACp_inl_6491__flat_204 * 2) + 1); 
    SAC_ND_IDX_SEL_S( SACp_inl_6492__type_370_64_2__, SACp_inl_6501_u, SACp_inl_6493__type_369)
    SACp_inl_6497__type_370__SSA_1_64_2__ = ((SACp_inl_6491__flat_204 * 2) + 0); 
    SAC_ND_IDX_SEL_S( SACp_inl_6497__type_370__SSA_1_64_2__, SACp_inl_6501_u, SACp_inl_6498__type_369__SSA_1)
    SACp_inl_6486__flat_34 = (SACp_inl_6493__type_369 * SACp_inl_6500__lir_3951__inl_799__flat_0); 
    SACp_inl_6485__flat_31 = (SACp_inl_6498__type_369__SSA_1 * SACp_inl_6499__lir_3953__inl_809__flat_0); 
    SACp_inl_6484__flat_30 = (SACp_inl_6485__flat_31 + SACp_inl_6486__flat_34); 
    SACp_inl_6483__flat_27 = (SACp_inl_6493__type_369 * SACp_inl_6499__lir_3953__inl_809__flat_0); 
    SACp_inl_6482__flat_24 = (SACp_inl_6498__type_369__SSA_1 * SACp_inl_6500__lir_3951__inl_799__flat_0); 
    SACp_inl_6481__flat_23 = (SACp_inl_6482__flat_24 - SACp_inl_6483__flat_27); 
    SACp_inl_6489__flat_12 = (SACp_inl_6484__flat_30 + SACp_inl_6493__type_369); 
    SACp_inl_6488__flat_9 = (SACp_inl_6481__flat_23 + SACp_inl_6498__type_369__SSA_1); 
    SAC_ND_ALLOC_ARRAY( double, SACp_inl_6487_res, 1)
    /*
     * ND_CREATE_CONST_ARRAY_S( SACp_inl_6487_res, 2, SACp_inl_6488__flat_9, SACp_inl_6489__flat_12)
     */
    SAC_ND_WRITE_ARRAY( SACp_inl_6487_res, 0) = SACp_inl_6488__flat_9;
    SAC_ND_WRITE_ARRAY( SACp_inl_6487_res, 1) = SACp_inl_6489__flat_12;

    SACp_inl_6494__flat_206_64_2__ = (SACp_inl_6502_i * 2); 
    SAC_ND_CHECK_REUSE_ARRAY( SACp_inl_6501_u, SACp_inl_6496_u__SSA_3)
    SAC_ND_ALLOC_ARRAY( double, SACp_inl_6496_u__SSA_3, 0)
    SAC_ND_INC_RC( SACp_inl_6496_u__SSA_3, 1)
    SAC_ND_IDX_MODARRAY_AxVxA( double, SACp_inl_6496_u__SSA_3, SACp_inl_6501_u, SACp_inl_6494__flat_206_64_2__, SACp_inl_6487_res)
    SAC_ND_DEC_RC_FREE_ARRAY( SACp_inl_6487_res, 1)
    SAC_ND_DEC_RC_FREE_ARRAY( SACp_inl_6501_u, 1)
    SAC_ND_INC_RC( SACp_inl_6496_u__SSA_3, 1)
    SACp_inl_6495_i__SSA_1 = (SACp_inl_6502_i + 1); 
    SACp_inl_6490__flat_208 = (SACp_inl_6495_i__SSA_1 < 64); 
    SAC_ND_KS_ASSIGN_ARRAY( SACp_inl_6496_u__SSA_3, SACp_inl_6501_u)
    SACp_inl_6502_i = SACp_inl_6495_i__SSA_1; 
  }
  while (SACp_inl_6490__flat_208);
  SAC_ND_DEC_RC_FREE_ARRAY( SACp_inl_6501_u, 1)
  SAC_ND_KS_ASSIGN_ARRAY( SACp_inl_6496_u__SSA_3, SACp_inl_3938_u__SSA_1)
  /*
   * ND_FUN_RET( , 1, out_rc, SACp_inl_3938_u__SSA_1, SAC__arg_1)
   */
  SAC_ND_RET_out_rc( SACp_inl_3938_u__SSA_1, SAC__arg_1)
  return;
}

/*
 * ND_FUN_DEC( SACf_FFT1d__d___MAIN__cpx_8___MAIN__cpx_4, void, 4, out_rc, double *, SAC__arg_1, in, double, SACl_dir, in_rc, double *, SACl_v, in_rc, double *, SACl_rofu)
 */
void SACf_FFT1d__d___MAIN__cpx_8___MAIN__cpx_4( SAC_ND_PARAM_out_rc( double *, SAC__arg_1), SAC_ND_PARAM_in( double, SACl_dir), SAC_ND_PARAM_in_rc( double *, SACl_v), SAC_ND_PARAM_in_rc( double *, SACl_rofu))
{ 
  double SACp_dl_4455; 
  double SACp_dl_4454; 
  double SACp_dl_4450; 
  double SACp_dl_4449; 
  double SACp_dl_4445; 
  double SACp_dl_4444; 
  double SACp_dl_4440; 
  double SACp_dl_4439; 
  double SACp_dl_4435; 
  double SACp_dl_4434; 
  double SACp_dl_4430; 
  double SACp_dl_4429; 
  double SACp_esd_4408; 
  double SACp_esd_4406; 
  double SACp_esd_4405; 
  double SACp_esd_4404; 
  double SACp_esd_4403; 
  double SACp_esd_4402; 
  double SACp_esd_4399; 
  double SACp_esd_4397; 
  double SACp_esd_4396; 
  double SACp_esd_4395; 
  double SACp_esd_4394; 
  double SACp_esd_4393; 
  double SACp_esd_4390; 
  double SACp_esd_4389; 
  double SACp_esd_4388; 
  double SACp_esd_4387; 
  double SACp_inl_4373_array_elem__SSA_1; 
  double SACp_inl_4369_array_elem; 
  int SACp_inl_4355__flat_401_8_2__; 
  /*
   * ND_KS_DECL_ARRAY( int, SACp_inl_4354__flat_402_iv, 1, 2)
   */
  int *SACp_inl_4354__flat_402_iv;
  int SAC_ND_A_RC( SACp_inl_4354__flat_402_iv);
  const int SAC_ND_A_SIZE( SACp_inl_4354__flat_402_iv) = 2;
  const int SAC_ND_A_DIM( SACp_inl_4354__flat_402_iv) = 1;
  const int SAC_ND_A_SHAPE( SACp_inl_4354__flat_402_iv, 0) = 2;

  int SACp_inl_4354__flat_402_iv_8_2__; 
  int SACp_inl_4352__flat_404_8_2__; 
  int SACp_inl_4351__flat_403_8_2__; 
  /*
   * ND_KS_DECL_ARRAY( double, SACp_inl_4350__flat_406, 2, 8, 2)
   */
  double *SACp_inl_4350__flat_406;
  int SAC_ND_A_RC( SACp_inl_4350__flat_406);
  const int SAC_ND_A_SIZE( SACp_inl_4350__flat_406) = 8*2;
  const int SAC_ND_A_DIM( SACp_inl_4350__flat_406) = 2;
  const int SAC_ND_A_SHAPE( SACp_inl_4350__flat_406, 0) = 8;
  const int SAC_ND_A_SHAPE( SACp_inl_4350__flat_406, 1) = 2;

  int SACp_inl_4347__type_747; 
  int SACp_inl_4346__type_748; 
  int SACp_inl_4344__esd_3817_8_2__; 
  int SACp_esd_3820_4_2__; 
  int SACp_esd_3818_4_2__; 
  /*
   * ND_KS_DECL_ARRAY( int, SACp_inl_2421__type_487, 1, 2)
   */
  int *SACp_inl_2421__type_487;
  int SAC_ND_A_RC( SACp_inl_2421__type_487);
  const int SAC_ND_A_SIZE( SACp_inl_2421__type_487) = 2;
  const int SAC_ND_A_DIM( SACp_inl_2421__type_487) = 1;
  const int SAC_ND_A_SHAPE( SACp_inl_2421__type_487, 0) = 2;

  int SACp_inl_2421__type_487_4_2__; 
  int SACp_inl_2420__type_489; 
  int SACp_inl_2419__type_490; 
  int SACp_inl_2417__type_484_4_2__; 
  /*
   * ND_KS_DECL_ARRAY( double, SACp_inl_2415__type_488, 2, 8, 2)
   */
  double *SACp_inl_2415__type_488;
  int SAC_ND_A_RC( SACp_inl_2415__type_488);
  const int SAC_ND_A_SIZE( SACp_inl_2415__type_488) = 8*2;
  const int SAC_ND_A_DIM( SACp_inl_2415__type_488) = 2;
  const int SAC_ND_A_SHAPE( SACp_inl_2415__type_488, 0) = 8;
  const int SAC_ND_A_SHAPE( SACp_inl_2415__type_488, 1) = 2;

  double SACp_inl_2405__flat_40; 
  double SACp_inl_2404__flat_39; 
  double SACp_inl_2393__flat_47; 
  double SACp_inl_2392__flat_46; 
  int SACp_inl_2369__flat_65_4_2__; 
  double SACp_inl_2368__flat_64; 
  double SACp_inl_2366__flat_62; 
  double SACp_inl_2365__flat_61; 
  double SACp_inl_2364__flat_60; 
  double SACp_inl_2363__flat_59; 
  double SACp_inl_2362__flat_58; 
  double SACp_inl_2361_val; 
  int SACp_inl_2356__flat_74_4_2__; 
  double SACp_inl_2355__flat_73; 
  double SACp_inl_2354__flat_72; 
  double SACp_inl_2353__flat_71; 
  double SACp_inl_2352__flat_70; 
  double SACp_inl_2350__flat_68; 
  double SACp_inl_2349__flat_67; 
  double SACp_inl_2318__flat_19; 
  double SACp_inl_2315__flat_16; 
  double SACp_inl_2286__flat_19; 
  double SACp_inl_2283__flat_16; 
  double SACp_inl_2254__flat_12; 
  double SACp_inl_2251__flat_9; 
  double SACp_inl_2222__flat_12; 
  double SACp_inl_2219__flat_9; 
  double SACp_inl_2172__flat_34; 
  double SACp_inl_2165__flat_27; 
  double SACp_inl_2114__flat_19; 
  double SACp_inl_2111__flat_16; 
  double SACp_inl_2084__flat_12; 
  double SACp_inl_2081__flat_9; 
  double SACp_inl_2054__flat_19; 
  double SACp_inl_2024__flat_12; 
  double SACp_inl_2021__flat_9; 
  /*
   * ND_KS_DECL_ARRAY( double, SACp_inl_1935_t, 2, 4, 2)
   */
  double *SACp_inl_1935_t;
  int SAC_ND_A_RC( SACp_inl_1935_t);
  const int SAC_ND_A_SIZE( SACp_inl_1935_t) = 4*2;
  const int SAC_ND_A_DIM( SACp_inl_1935_t) = 2;
  const int SAC_ND_A_SHAPE( SACp_inl_1935_t, 0) = 4;
  const int SAC_ND_A_SHAPE( SACp_inl_1935_t, 1) = 2;

  double SACp_inl_1905__flat_19; 
  double SACp_inl_1902__flat_16; 
  double SACp_inl_1873__flat_19; 
  double SACp_inl_1870__flat_16; 
  double SACp_inl_1841__flat_12; 
  double SACp_inl_1838__flat_9; 
  double SACp_inl_1809__flat_12; 
  double SACp_inl_1806__flat_9; 
  double SACp_inl_1759__flat_34; 
  double SACp_inl_1752__flat_27; 
  double SACp_inl_1701__flat_19; 
  double SACp_inl_1698__flat_16; 
  double SACp_inl_1671__flat_12; 
  double SACp_inl_1668__flat_9; 
  double SACp_inl_1641__flat_19; 
  double SACp_inl_1611__flat_12; 
  double SACp_inl_1608__flat_9; 
  /*
   * ND_KS_DECL_ARRAY( double, SACp_inl_1522_t, 2, 4, 2)
   */
  double *SACp_inl_1522_t;
  int SAC_ND_A_RC( SACp_inl_1522_t);
  const int SAC_ND_A_SIZE( SACp_inl_1522_t) = 4*2;
  const int SAC_ND_A_DIM( SACp_inl_1522_t) = 2;
  const int SAC_ND_A_SHAPE( SACp_inl_1522_t, 0) = 4;
  const int SAC_ND_A_SHAPE( SACp_inl_1522_t, 1) = 2;

  double SACp_inl_1485__flat_109; 
  int SACp_inl_1429__flat_110_8_2__; 
  int SACp_inl_1429__flat_110_4_2__; 
  double SACp_inl_1428__flat_109; 
  double SACp_inl_2361_val__SSA_1; 
  int SACp_inl_1429__flat_110__SSA_1_8_2__; 
  double SACp_inl_1428__flat_109__SSA_1; 
  int SACp_inl_1429__flat_110__SSA_2_8_2__; 
  double SACp_inl_1428__flat_109__SSA_2; 
  int SACp_inl_1429__flat_110__SSA_3_8_2__; 
  double SACp_inl_1428__flat_109__SSA_3; 
  double SACp_inl_1485__flat_109__SSA_1; 
  double SACp_inl_1485__flat_109__SSA_2; 
  double SACp_inl_1485__flat_109__SSA_3; 
  int SACp_inl_2417__type_484__SSA_1_4_2__; 
  double SACp_inl_2393__flat_47__SSA_1; 
  double SACp_inl_2392__flat_46__SSA_1; 
  int SACp_inl_2369__flat_65__SSA_1_4_2__; 
  double SACp_inl_2368__flat_64__SSA_1; 
  double SACp_inl_2366__flat_62__SSA_1; 
  double SACp_inl_2365__flat_61__SSA_1; 
  double SACp_inl_2364__flat_60__SSA_1; 
  double SACp_inl_2363__flat_59__SSA_1; 
  double SACp_inl_2362__flat_58__SSA_1; 
  double SACp_inl_2361_val__SSA_2; 
  int SACp_inl_2356__flat_74__SSA_1_4_2__; 
  double SACp_inl_2355__flat_73__SSA_1; 
  double SACp_inl_2354__flat_72__SSA_1; 
  double SACp_inl_2353__flat_71__SSA_1; 
  double SACp_inl_2352__flat_70__SSA_1; 
  double SACp_inl_2350__flat_68__SSA_1; 
  double SACp_inl_2349__flat_67__SSA_1; 
  double SACp_inl_2361_val__SSA_3; 
  double SACp_inl_2405__flat_40__SSA_1; 
  double SACp_inl_2404__flat_39__SSA_1; 
  int SACp_inl_1429__flat_110__SSA_4_8_2__; 
  double SACp_inl_1428__flat_109__SSA_4; 
  int SACp_inl_1429__flat_110__SSA_5_8_2__; 
  double SACp_inl_1428__flat_109__SSA_5; 
  int SACp_inl_1429__flat_110__SSA_6_8_2__; 
  double SACp_inl_1428__flat_109__SSA_6; 
  int SACp_inl_1429__flat_110__SSA_7_8_2__; 
  double SACp_inl_1428__flat_109__SSA_7; 
  double SACp_inl_1485__flat_109__SSA_4; 
  double SACp_inl_1485__flat_109__SSA_5; 
  double SACp_inl_1485__flat_109__SSA_6; 
  double SACp_inl_1485__flat_109__SSA_7; 

  /*
   * ND_KS_DECL_ARRAY_ARG( SACl_rofu, 2, 4, 2)
   */
  const int SAC_ND_A_SIZE( SACl_rofu) = 4*2;
  const int SAC_ND_A_DIM( SACl_rofu) = 2;
  const int SAC_ND_A_SHAPE( SACl_rofu, 0) = 4;
  const int SAC_ND_A_SHAPE( SACl_rofu, 1) = 2;

  /*
   * ND_KS_DECL_ARRAY_ARG( SACl_v, 2, 8, 2)
   */
  const int SAC_ND_A_SIZE( SACl_v) = 8*2;
  const int SAC_ND_A_DIM( SACl_v) = 2;
  const int SAC_ND_A_SHAPE( SACl_v, 0) = 8;
  const int SAC_ND_A_SHAPE( SACl_v, 1) = 2;

  SACp_inl_4352__flat_404_8_2__ = ((1 * 2) + 0); 
  SACp_inl_4344__esd_3817_8_2__ = ((-7 * 2) + 0); 
  SAC_ND_ALLOC_ARRAY( double, SACp_inl_4350__flat_406, 1)
  SAC_PF_BEGIN_WITH( genarray)
    /*
     * WL_BEGIN__OFFSET( SACp_inl_4350__flat_406, 2, SACp_inl_4354__flat_402_iv, 2)
     */
    { int SAC_WL_OFFSET( SACp_inl_4350__flat_406);
      int SAC_WL_MT_SCHEDULE_START( 0);
      int SAC_WL_MT_SCHEDULE_STOP( 0);
      int SAC_WL_MT_SCHEDULE_START( 1);
      int SAC_WL_MT_SCHEDULE_STOP( 1);
      int SAC_i;
      int SAC_WL_SHAPE_FACTOR( SACp_inl_4350__flat_406, 0) = 1 * SAC_ND_A_SHAPE( SACp_inl_4350__flat_406, 1);
      int SAC_WL_SHAPE_FACTOR( SACp_inl_4350__flat_406, 1) = 1;

      /*
       * MT_SCHEDULER_BEGIN( 0, 2, 0, 0, 8, 2)
       */
      SAC_WL_MT_SCHEDULE_START( 0) = 0;
      SAC_WL_MT_SCHEDULE_STOP( 0) = 8;
      SAC_WL_MT_SCHEDULE_START( 1) = 0;
      SAC_WL_MT_SCHEDULE_STOP( 1) = 2;

      /*
       * WL_INIT_OFFSET( SACp_inl_4350__flat_406, 2, SACp_inl_4354__flat_402_iv, 2)
       */
      SAC_WL_OFFSET( SACp_inl_4350__flat_406)
        = SAC_WL_MT_SCHEDULE_START( 0) * SAC_WL_SHAPE_FACTOR( SACp_inl_4350__flat_406, 0)
        + SAC_WL_MT_SCHEDULE_START( 1) * SAC_WL_SHAPE_FACTOR( SACp_inl_4350__flat_406, 1);

      SAC_WL_STRIDE_LOOP0_BEGIN( 0, SACp_inl_4354__flat_402_iv, SACp_inl_4347__type_747, 0, 7, 1)
        SAC_WL_GRID_UNROLL_BEGIN( 0, SACp_inl_4354__flat_402_iv, SACp_inl_4347__type_747, 0, 1)
          SAC_WL_STRIDE_LOOP0_BEGIN( 1, SACp_inl_4354__flat_402_iv, SACp_inl_4346__type_748, 0, 2, 1)
            SAC_WL_GRID_UNROLL_BEGIN( 1, SACp_inl_4354__flat_402_iv, SACp_inl_4346__type_748, 0, 1)
              SAC_ND_KS_USE_GENVAR_OFFSET( SACp_inl_4354__flat_402_iv_8_2__, SACp_inl_4350__flat_406)
              SACp_inl_4351__flat_403_8_2__ = (SACp_inl_4352__flat_404_8_2__ + SACp_inl_4354__flat_402_iv_8_2__); 
              SAC_ND_IDX_SEL_S( SACp_inl_4351__flat_403_8_2__, SACl_v, SACp_inl_4373_array_elem__SSA_1)
              /*
               * WL_ASSIGN( SACp_inl_4373_array_elem__SSA_1, 0, SACp_inl_4350__flat_406, 2, SACp_inl_4354__flat_402_iv, 2, SACp_inl_4347__type_747, SACp_inl_4346__type_748)
               */
              SAC_TR_WL_PRINT( ("index vector [%d, %d] (== offset %d) -- offset %d -- assign", SACp_inl_4347__type_747, SACp_inl_4346__type_748, ( SAC_ND_A_SHAPE( SACp_inl_4350__flat_406, 1) * SACp_inl_4347__type_747 + SACp_inl_4346__type_748 ), SAC_WL_OFFSET( SACp_inl_4350__flat_406)));
              SAC_ASSURE_TYPE( (SAC_ND_A_DIM( SACp_inl_4373_array_elem__SSA_1) == (SAC_ND_A_DIM( SACp_inl_4350__flat_406) - 2)), ("WL expression with illegal dimension found!"));
              SAC_ASSURE_TYPE( (SAC_ND_A_SIZE( SACp_inl_4373_array_elem__SSA_1) == SAC_WL_SHAPE_FACTOR( SACp_inl_4350__flat_406, 1)), ("WL expression with illegal size found!"));
              SAC_ND_WRITE_ARRAY( SACp_inl_4350__flat_406, SAC_WL_OFFSET( SACp_inl_4350__flat_406)) = SACp_inl_4373_array_elem__SSA_1;
              SAC_WL_OFFSET( SACp_inl_4350__flat_406)++;

            SAC_WL_GRID_UNROLL_END( 1, SACp_inl_4354__flat_402_iv, SACp_inl_4346__type_748, 0, 1)
          SAC_WL_STRIDE_LOOP_END( 1, SACp_inl_4354__flat_402_iv, SACp_inl_4346__type_748, 0, 2, 1)
        SAC_WL_GRID_UNROLL_END( 0, SACp_inl_4354__flat_402_iv, SACp_inl_4347__type_747, 0, 1)
      SAC_WL_STRIDE_LOOP_END( 0, SACp_inl_4354__flat_402_iv, SACp_inl_4347__type_747, 0, 7, 1)
      SAC_WL_STRIDE_LOOP0_BEGIN( 0, SACp_inl_4354__flat_402_iv, SACp_inl_4347__type_747, 7, 8, 1)
        SAC_WL_GRID_UNROLL_BEGIN( 0, SACp_inl_4354__flat_402_iv, SACp_inl_4347__type_747, 0, 1)
          SAC_WL_STRIDE_LOOP0_BEGIN( 1, SACp_inl_4354__flat_402_iv, SACp_inl_4346__type_748, 0, 2, 1)
            SAC_WL_GRID_UNROLL_BEGIN( 1, SACp_inl_4354__flat_402_iv, SACp_inl_4346__type_748, 0, 1)
              SAC_ND_KS_USE_GENVAR_OFFSET( SACp_inl_4354__flat_402_iv_8_2__, SACp_inl_4350__flat_406)
              SACp_inl_4355__flat_401_8_2__ = (SACp_inl_4354__flat_402_iv_8_2__ + SACp_inl_4344__esd_3817_8_2__); 
              SAC_ND_IDX_SEL_S( SACp_inl_4355__flat_401_8_2__, SACl_v, SACp_inl_4369_array_elem)
              /*
               * WL_ASSIGN( SACp_inl_4369_array_elem, 0, SACp_inl_4350__flat_406, 2, SACp_inl_4354__flat_402_iv, 2, SACp_inl_4347__type_747, SACp_inl_4346__type_748)
               */
              SAC_TR_WL_PRINT( ("index vector [%d, %d] (== offset %d) -- offset %d -- assign", SACp_inl_4347__type_747, SACp_inl_4346__type_748, ( SAC_ND_A_SHAPE( SACp_inl_4350__flat_406, 1) * SACp_inl_4347__type_747 + SACp_inl_4346__type_748 ), SAC_WL_OFFSET( SACp_inl_4350__flat_406)));
              SAC_ASSURE_TYPE( (SAC_ND_A_DIM( SACp_inl_4369_array_elem) == (SAC_ND_A_DIM( SACp_inl_4350__flat_406) - 2)), ("WL expression with illegal dimension found!"));
              SAC_ASSURE_TYPE( (SAC_ND_A_SIZE( SACp_inl_4369_array_elem) == SAC_WL_SHAPE_FACTOR( SACp_inl_4350__flat_406, 1)), ("WL expression with illegal size found!"));
              SAC_ND_WRITE_ARRAY( SACp_inl_4350__flat_406, SAC_WL_OFFSET( SACp_inl_4350__flat_406)) = SACp_inl_4369_array_elem;
              SAC_WL_OFFSET( SACp_inl_4350__flat_406)++;

            SAC_WL_GRID_UNROLL_END( 1, SACp_inl_4354__flat_402_iv, SACp_inl_4346__type_748, 0, 1)
          SAC_WL_STRIDE_LOOP_END( 1, SACp_inl_4354__flat_402_iv, SACp_inl_4346__type_748, 0, 2, 1)
        SAC_WL_GRID_UNROLL_END( 0, SACp_inl_4354__flat_402_iv, SACp_inl_4347__type_747, 0, 1)
      SAC_WL_STRIDE_LOOP_END( 0, SACp_inl_4354__flat_402_iv, SACp_inl_4347__type_747, 7, 8, 1)
      /*
       * MT_SCHEDULER_END( 0, 2, 0, 0, 8, 2)
       */


      /*
       * WL_END__OFFSET( SACp_inl_4350__flat_406, 2, SACp_inl_4354__flat_402_iv, 2)
       */
    }

  SAC_PF_END_WITH( genarray)
  SACp_inl_1429__flat_110_8_2__ = ((0 * 2) + 1); 
  SACp_inl_1429__flat_110_4_2__ = ((0 * 2) + 1); 
  SAC_ND_IDX_SEL_S( SACp_inl_1429__flat_110_8_2__, SACl_v, SACp_inl_1428__flat_109)
  SACp_inl_1429__flat_110__SSA_4_8_2__ = ((0 * 2) + 0); 
  SAC_ND_IDX_SEL_S( SACp_inl_1429__flat_110__SSA_4_8_2__, SACl_v, SACp_inl_1428__flat_109__SSA_4)
  SACp_inl_1429__flat_110__SSA_1_8_2__ = ((2 * 2) + 1); 
  SAC_ND_IDX_SEL_S( SACp_inl_1429__flat_110__SSA_1_8_2__, SACl_v, SACp_inl_1428__flat_109__SSA_1)
  SACp_inl_1429__flat_110__SSA_5_8_2__ = ((2 * 2) + 0); 
  SAC_ND_IDX_SEL_S( SACp_inl_1429__flat_110__SSA_5_8_2__, SACl_v, SACp_inl_1428__flat_109__SSA_5)
  SACp_inl_1429__flat_110__SSA_2_8_2__ = ((4 * 2) + 1); 
  SAC_ND_IDX_SEL_S( SACp_inl_1429__flat_110__SSA_2_8_2__, SACl_v, SACp_inl_1428__flat_109__SSA_2)
  SACp_inl_1429__flat_110__SSA_6_8_2__ = ((4 * 2) + 0); 
  SAC_ND_IDX_SEL_S( SACp_inl_1429__flat_110__SSA_6_8_2__, SACl_v, SACp_inl_1428__flat_109__SSA_6)
  SACp_inl_1429__flat_110__SSA_3_8_2__ = ((6 * 2) + 1); 
  SAC_ND_IDX_SEL_S( SACp_inl_1429__flat_110__SSA_3_8_2__, SACl_v, SACp_inl_1428__flat_109__SSA_3)
  SACp_inl_1429__flat_110__SSA_7_8_2__ = ((6 * 2) + 0); 
  SAC_ND_IDX_SEL_S( SACp_inl_1429__flat_110__SSA_7_8_2__, SACl_v, SACp_inl_1428__flat_109__SSA_7)
  SAC_ND_DEC_RC_FREE_ARRAY( SACl_v, 1)
  SACp_inl_1611__flat_12 = (SACp_inl_1428__flat_109 + SACp_inl_1428__flat_109__SSA_2); 
  SACp_inl_1608__flat_9 = (SACp_inl_1428__flat_109__SSA_4 + SACp_inl_1428__flat_109__SSA_6); 
  SACp_inl_1641__flat_19 = (SACp_inl_1428__flat_109 - SACp_inl_1428__flat_109__SSA_2); 
  SACp_inl_1671__flat_12 = (SACp_inl_1428__flat_109__SSA_1 + SACp_inl_1428__flat_109__SSA_3); 
  SACp_inl_1668__flat_9 = (SACp_inl_1428__flat_109__SSA_5 + SACp_inl_1428__flat_109__SSA_7); 
  SACp_inl_1701__flat_19 = (SACp_inl_1428__flat_109__SSA_1 - SACp_inl_1428__flat_109__SSA_3); 
  SACp_inl_1698__flat_16 = (SACp_inl_1428__flat_109__SSA_5 - SACp_inl_1428__flat_109__SSA_7); 
  SACp_inl_1759__flat_34 = (SACl_dir * SACp_inl_1698__flat_16); 
  SACp_inl_1752__flat_27 = (SACl_dir * SACp_inl_1701__flat_19); 
  SACp_inl_1809__flat_12 = (SACp_inl_1611__flat_12 + SACp_inl_1671__flat_12); 
  SACp_inl_1806__flat_9 = (SACp_inl_1608__flat_9 + SACp_inl_1668__flat_9); 
  SACp_inl_1841__flat_12 = (SACp_inl_1641__flat_19 + SACp_inl_1759__flat_34); 
  SACp_dl_4454 = (SACp_inl_1428__flat_109__SSA_6 + SACp_inl_1752__flat_27); 
  SACp_dl_4455 = (SACp_dl_4454 * -1.0); 
  SACp_inl_1838__flat_9 = (SACp_dl_4455 + SACp_inl_1428__flat_109__SSA_4); 
  SACp_inl_1873__flat_19 = (SACp_inl_1611__flat_12 - SACp_inl_1671__flat_12); 
  SACp_inl_1870__flat_16 = (SACp_inl_1608__flat_9 - SACp_inl_1668__flat_9); 
  SACp_dl_4444 = (SACp_inl_1428__flat_109__SSA_2 + SACp_inl_1759__flat_34); 
  SACp_dl_4445 = (SACp_dl_4444 * -1.0); 
  SACp_inl_1905__flat_19 = (SACp_dl_4445 + SACp_inl_1428__flat_109); 
  SACp_dl_4439 = (SACp_inl_1428__flat_109__SSA_6 - SACp_inl_1752__flat_27); 
  SACp_dl_4440 = (SACp_dl_4439 * -1.0); 
  SACp_inl_1902__flat_16 = (SACp_dl_4440 + SACp_inl_1428__flat_109__SSA_4); 
  SAC_ND_ALLOC_ARRAY( double, SACp_inl_1522_t, 1)
  /*
   * ND_CREATE_CONST_ARRAY_S( SACp_inl_1522_t, 8, SACp_inl_1806__flat_9, SACp_inl_1809__flat_12, SACp_inl_1838__flat_9, SACp_inl_1841__flat_12, SACp_inl_1870__flat_16, SACp_inl_1873__flat_19, SACp_inl_1902__flat_16, SACp_inl_1905__flat_19)
   */
  SAC_ND_WRITE_ARRAY( SACp_inl_1522_t, 0) = SACp_inl_1806__flat_9;
  SAC_ND_WRITE_ARRAY( SACp_inl_1522_t, 1) = SACp_inl_1809__flat_12;
  SAC_ND_WRITE_ARRAY( SACp_inl_1522_t, 2) = SACp_inl_1838__flat_9;
  SAC_ND_WRITE_ARRAY( SACp_inl_1522_t, 3) = SACp_inl_1841__flat_12;
  SAC_ND_WRITE_ARRAY( SACp_inl_1522_t, 4) = SACp_inl_1870__flat_16;
  SAC_ND_WRITE_ARRAY( SACp_inl_1522_t, 5) = SACp_inl_1873__flat_19;
  SAC_ND_WRITE_ARRAY( SACp_inl_1522_t, 6) = SACp_inl_1902__flat_16;
  SAC_ND_WRITE_ARRAY( SACp_inl_1522_t, 7) = SACp_inl_1905__flat_19;

  SAC_ND_IDX_SEL_S( SACp_inl_1429__flat_110_8_2__, SACp_inl_4350__flat_406, SACp_inl_1485__flat_109)
  SAC_ND_IDX_SEL_S( SACp_inl_1429__flat_110__SSA_4_8_2__, SACp_inl_4350__flat_406, SACp_inl_1485__flat_109__SSA_4)
  SAC_ND_IDX_SEL_S( SACp_inl_1429__flat_110__SSA_1_8_2__, SACp_inl_4350__flat_406, SACp_inl_1485__flat_109__SSA_1)
  SAC_ND_IDX_SEL_S( SACp_inl_1429__flat_110__SSA_5_8_2__, SACp_inl_4350__flat_406, SACp_inl_1485__flat_109__SSA_5)
  SAC_ND_IDX_SEL_S( SACp_inl_1429__flat_110__SSA_2_8_2__, SACp_inl_4350__flat_406, SACp_inl_1485__flat_109__SSA_2)
  SAC_ND_IDX_SEL_S( SACp_inl_1429__flat_110__SSA_6_8_2__, SACp_inl_4350__flat_406, SACp_inl_1485__flat_109__SSA_6)
  SAC_ND_IDX_SEL_S( SACp_inl_1429__flat_110__SSA_3_8_2__, SACp_inl_4350__flat_406, SACp_inl_1485__flat_109__SSA_3)
  SAC_ND_IDX_SEL_S( SACp_inl_1429__flat_110__SSA_7_8_2__, SACp_inl_4350__flat_406, SACp_inl_1485__flat_109__SSA_7)
  SAC_ND_DEC_RC_FREE_ARRAY( SACp_inl_4350__flat_406, 1)
  SACp_inl_2024__flat_12 = (SACp_inl_1485__flat_109 + SACp_inl_1485__flat_109__SSA_2); 
  SACp_inl_2021__flat_9 = (SACp_inl_1485__flat_109__SSA_4 + SACp_inl_1485__flat_109__SSA_6); 
  SACp_inl_2054__flat_19 = (SACp_inl_1485__flat_109 - SACp_inl_1485__flat_109__SSA_2); 
  SACp_inl_2084__flat_12 = (SACp_inl_1485__flat_109__SSA_1 + SACp_inl_1485__flat_109__SSA_3); 
  SACp_inl_2081__flat_9 = (SACp_inl_1485__flat_109__SSA_5 + SACp_inl_1485__flat_109__SSA_7); 
  SACp_inl_2114__flat_19 = (SACp_inl_1485__flat_109__SSA_1 - SACp_inl_1485__flat_109__SSA_3); 
  SACp_inl_2111__flat_16 = (SACp_inl_1485__flat_109__SSA_5 - SACp_inl_1485__flat_109__SSA_7); 
  SACp_inl_2172__flat_34 = (SACl_dir * SACp_inl_2111__flat_16); 
  SACp_inl_2165__flat_27 = (SACl_dir * SACp_inl_2114__flat_19); 
  SACp_inl_2222__flat_12 = (SACp_inl_2024__flat_12 + SACp_inl_2084__flat_12); 
  SACp_inl_2219__flat_9 = (SACp_inl_2021__flat_9 + SACp_inl_2081__flat_9); 
  SACp_inl_2254__flat_12 = (SACp_inl_2054__flat_19 + SACp_inl_2172__flat_34); 
  SACp_dl_4449 = (SACp_inl_1485__flat_109__SSA_6 + SACp_inl_2165__flat_27); 
  SACp_dl_4450 = (SACp_dl_4449 * -1.0); 
  SACp_inl_2251__flat_9 = (SACp_dl_4450 + SACp_inl_1485__flat_109__SSA_4); 
  SACp_inl_2286__flat_19 = (SACp_inl_2024__flat_12 - SACp_inl_2084__flat_12); 
  SACp_inl_2283__flat_16 = (SACp_inl_2021__flat_9 - SACp_inl_2081__flat_9); 
  SACp_dl_4434 = (SACp_inl_1485__flat_109__SSA_2 + SACp_inl_2172__flat_34); 
  SACp_dl_4435 = (SACp_dl_4434 * -1.0); 
  SACp_inl_2318__flat_19 = (SACp_dl_4435 + SACp_inl_1485__flat_109); 
  SACp_dl_4429 = (SACp_inl_1485__flat_109__SSA_6 - SACp_inl_2165__flat_27); 
  SACp_dl_4430 = (SACp_dl_4429 * -1.0); 
  SACp_inl_2315__flat_16 = (SACp_dl_4430 + SACp_inl_1485__flat_109__SSA_4); 
  SAC_ND_ALLOC_ARRAY( double, SACp_inl_1935_t, 1)
  /*
   * ND_CREATE_CONST_ARRAY_S( SACp_inl_1935_t, 8, SACp_inl_2219__flat_9, SACp_inl_2222__flat_12, SACp_inl_2251__flat_9, SACp_inl_2254__flat_12, SACp_inl_2283__flat_16, SACp_inl_2286__flat_19, SACp_inl_2315__flat_16, SACp_inl_2318__flat_19)
   */
  SAC_ND_WRITE_ARRAY( SACp_inl_1935_t, 0) = SACp_inl_2219__flat_9;
  SAC_ND_WRITE_ARRAY( SACp_inl_1935_t, 1) = SACp_inl_2222__flat_12;
  SAC_ND_WRITE_ARRAY( SACp_inl_1935_t, 2) = SACp_inl_2251__flat_9;
  SAC_ND_WRITE_ARRAY( SACp_inl_1935_t, 3) = SACp_inl_2254__flat_12;
  SAC_ND_WRITE_ARRAY( SACp_inl_1935_t, 4) = SACp_inl_2283__flat_16;
  SAC_ND_WRITE_ARRAY( SACp_inl_1935_t, 5) = SACp_inl_2286__flat_19;
  SAC_ND_WRITE_ARRAY( SACp_inl_1935_t, 6) = SACp_inl_2315__flat_16;
  SAC_ND_WRITE_ARRAY( SACp_inl_1935_t, 7) = SACp_inl_2318__flat_19;

  SACp_esd_3818_4_2__ = ((-4 * 2) + 0); 
  SACp_esd_3820_4_2__ = ((0 * 2) + -1); 
  SAC_ND_ALLOC_ARRAY( double, SACp_inl_2415__type_488, 1)
  SAC_PF_BEGIN_WITH( genarray)
    /*
     * WL_BEGIN__OFFSET( SACp_inl_2415__type_488, 2, SACp_inl_2421__type_487, 2)
     */
    { int SAC_WL_OFFSET( SACp_inl_2415__type_488);
      int SAC_WL_MT_SCHEDULE_START( 0);
      int SAC_WL_MT_SCHEDULE_STOP( 0);
      int SAC_WL_MT_SCHEDULE_START( 1);
      int SAC_WL_MT_SCHEDULE_STOP( 1);
      int SAC_i;
      int SAC_WL_SHAPE_FACTOR( SACp_inl_2415__type_488, 0) = 1 * SAC_ND_A_SHAPE( SACp_inl_2415__type_488, 1);
      int SAC_WL_SHAPE_FACTOR( SACp_inl_2415__type_488, 1) = 1;

      /*
       * MT_SCHEDULER_BEGIN( 0, 2, 0, 0, 8, 2)
       */
      SAC_WL_MT_SCHEDULE_START( 0) = 0;
      SAC_WL_MT_SCHEDULE_STOP( 0) = 8;
      SAC_WL_MT_SCHEDULE_START( 1) = 0;
      SAC_WL_MT_SCHEDULE_STOP( 1) = 2;

      /*
       * WL_INIT_OFFSET( SACp_inl_2415__type_488, 2, SACp_inl_2421__type_487, 2)
       */
      SAC_WL_OFFSET( SACp_inl_2415__type_488)
        = SAC_WL_MT_SCHEDULE_START( 0) * SAC_WL_SHAPE_FACTOR( SACp_inl_2415__type_488, 0)
        + SAC_WL_MT_SCHEDULE_START( 1) * SAC_WL_SHAPE_FACTOR( SACp_inl_2415__type_488, 1);

      SAC_WL_STRIDE_LOOP0_BEGIN( 0, SACp_inl_2421__type_487, SACp_inl_2420__type_489, 0, 4, 1)
        SAC_WL_GRID_UNROLL_BEGIN( 0, SACp_inl_2421__type_487, SACp_inl_2420__type_489, 0, 1)
          SAC_WL_STRIDE_LOOP0_BEGIN( 1, SACp_inl_2421__type_487, SACp_inl_2419__type_490, 0, 1, 1)
            SAC_WL_GRID_UNROLL_BEGIN( 1, SACp_inl_2421__type_487, SACp_inl_2419__type_490, 0, 1)
              /*
               * ND_IDXS2OFFSET( SACp_inl_2421__type_487_4_2__, 2, SACp_inl_2420__type_489, SACp_inl_2419__type_490, 2, 4, 2)
               */
              SACp_inl_2421__type_487_4_2__ = ( 2* SACp_inl_2420__type_489+SACp_inl_2419__type_490) ;

              SACp_inl_2369__flat_65__SSA_1_4_2__ = (SACp_inl_2421__type_487_4_2__ + SACp_inl_1429__flat_110_4_2__); 
              SAC_ND_IDX_SEL_S( SACp_inl_2369__flat_65__SSA_1_4_2__, SACl_rofu, SACp_inl_2368__flat_64__SSA_1)
              SAC_ND_IDX_SEL_S( SACp_inl_2369__flat_65__SSA_1_4_2__, SACp_inl_1935_t, SACp_inl_2366__flat_62__SSA_1)
              SACp_inl_2365__flat_61__SSA_1 = (SACp_inl_2366__flat_62__SSA_1 * SACp_inl_2368__flat_64__SSA_1); 
              SAC_ND_IDX_SEL_S( SACp_inl_2421__type_487_4_2__, SACl_rofu, SACp_inl_2364__flat_60__SSA_1)
              SAC_ND_IDX_SEL_S( SACp_inl_2421__type_487_4_2__, SACp_inl_1935_t, SACp_inl_2363__flat_59__SSA_1)
              SACp_inl_2362__flat_58__SSA_1 = (SACp_inl_2363__flat_59__SSA_1 * SACp_inl_2364__flat_60__SSA_1); 
              SACp_inl_2361_val__SSA_2 = (SACp_inl_2362__flat_58__SSA_1 - SACp_inl_2365__flat_61__SSA_1); 
              SAC_ND_IDX_SEL_S( SACp_inl_2421__type_487_4_2__, SACp_inl_1522_t, SACp_inl_2405__flat_40)
              SACp_inl_2404__flat_39 = (SACp_inl_2405__flat_40 + SACp_inl_2361_val__SSA_2); 
              /*
               * WL_ASSIGN( SACp_inl_2404__flat_39, 0, SACp_inl_2415__type_488, 2, SACp_inl_2421__type_487, 2, SACp_inl_2420__type_489, SACp_inl_2419__type_490)
               */
              SAC_TR_WL_PRINT( ("index vector [%d, %d] (== offset %d) -- offset %d -- assign", SACp_inl_2420__type_489, SACp_inl_2419__type_490, ( SAC_ND_A_SHAPE( SACp_inl_2415__type_488, 1) * SACp_inl_2420__type_489 + SACp_inl_2419__type_490 ), SAC_WL_OFFSET( SACp_inl_2415__type_488)));
              SAC_ASSURE_TYPE( (SAC_ND_A_DIM( SACp_inl_2404__flat_39) == (SAC_ND_A_DIM( SACp_inl_2415__type_488) - 2)), ("WL expression with illegal dimension found!"));
              SAC_ASSURE_TYPE( (SAC_ND_A_SIZE( SACp_inl_2404__flat_39) == SAC_WL_SHAPE_FACTOR( SACp_inl_2415__type_488, 1)), ("WL expression with illegal size found!"));
              SAC_ND_WRITE_ARRAY( SACp_inl_2415__type_488, SAC_WL_OFFSET( SACp_inl_2415__type_488)) = SACp_inl_2404__flat_39;
              SAC_WL_OFFSET( SACp_inl_2415__type_488)++;

            SAC_WL_GRID_UNROLL_END( 1, SACp_inl_2421__type_487, SACp_inl_2419__type_490, 0, 1)
          SAC_WL_STRIDE_LOOP_END( 1, SACp_inl_2421__type_487, SACp_inl_2419__type_490, 0, 1, 1)
          SAC_WL_STRIDE_LOOP0_BEGIN( 1, SACp_inl_2421__type_487, SACp_inl_2419__type_490, 1, 2, 1)
            SAC_WL_GRID_UNROLL_BEGIN( 1, SACp_inl_2421__type_487, SACp_inl_2419__type_490, 0, 1)
              /*
               * ND_IDXS2OFFSET( SACp_inl_2421__type_487_4_2__, 2, SACp_inl_2420__type_489, SACp_inl_2419__type_490, 2, 4, 2)
               */
              SACp_inl_2421__type_487_4_2__ = ( 2* SACp_inl_2420__type_489+SACp_inl_2419__type_490) ;

              SACp_inl_2356__flat_74__SSA_1_4_2__ = (SACp_inl_2421__type_487_4_2__ + SACp_esd_3820_4_2__); 
              SAC_ND_IDX_SEL_S( SACp_inl_2356__flat_74__SSA_1_4_2__, SACl_rofu, SACp_inl_2355__flat_73__SSA_1)
              SAC_ND_IDX_SEL_S( SACp_inl_2421__type_487_4_2__, SACp_inl_1935_t, SACp_inl_2354__flat_72__SSA_1)
              SACp_inl_2353__flat_71__SSA_1 = (SACp_inl_2354__flat_72__SSA_1 * SACp_inl_2355__flat_73__SSA_1); 
              SAC_ND_IDX_SEL_S( SACp_inl_2421__type_487_4_2__, SACl_rofu, SACp_inl_2352__flat_70__SSA_1)
              SAC_ND_IDX_SEL_S( SACp_inl_2356__flat_74__SSA_1_4_2__, SACp_inl_1935_t, SACp_inl_2350__flat_68__SSA_1)
              SACp_inl_2349__flat_67__SSA_1 = (SACp_inl_2350__flat_68__SSA_1 * SACp_inl_2352__flat_70__SSA_1); 
              SACp_inl_2361_val__SSA_3 = (SACp_inl_2349__flat_67__SSA_1 + SACp_inl_2353__flat_71__SSA_1); 
              SAC_ND_IDX_SEL_S( SACp_inl_2421__type_487_4_2__, SACp_inl_1522_t, SACp_inl_2405__flat_40__SSA_1)
              SACp_inl_2404__flat_39__SSA_1 = (SACp_inl_2405__flat_40__SSA_1 + SACp_inl_2361_val__SSA_3); 
              /*
               * WL_ASSIGN( SACp_inl_2404__flat_39__SSA_1, 0, SACp_inl_2415__type_488, 2, SACp_inl_2421__type_487, 2, SACp_inl_2420__type_489, SACp_inl_2419__type_490)
               */
              SAC_TR_WL_PRINT( ("index vector [%d, %d] (== offset %d) -- offset %d -- assign", SACp_inl_2420__type_489, SACp_inl_2419__type_490, ( SAC_ND_A_SHAPE( SACp_inl_2415__type_488, 1) * SACp_inl_2420__type_489 + SACp_inl_2419__type_490 ), SAC_WL_OFFSET( SACp_inl_2415__type_488)));
              SAC_ASSURE_TYPE( (SAC_ND_A_DIM( SACp_inl_2404__flat_39__SSA_1) == (SAC_ND_A_DIM( SACp_inl_2415__type_488) - 2)), ("WL expression with illegal dimension found!"));
              SAC_ASSURE_TYPE( (SAC_ND_A_SIZE( SACp_inl_2404__flat_39__SSA_1) == SAC_WL_SHAPE_FACTOR( SACp_inl_2415__type_488, 1)), ("WL expression with illegal size found!"));
              SAC_ND_WRITE_ARRAY( SACp_inl_2415__type_488, SAC_WL_OFFSET( SACp_inl_2415__type_488)) = SACp_inl_2404__flat_39__SSA_1;
              SAC_WL_OFFSET( SACp_inl_2415__type_488)++;

            SAC_WL_GRID_UNROLL_END( 1, SACp_inl_2421__type_487, SACp_inl_2419__type_490, 0, 1)
          SAC_WL_STRIDE_LOOP_END( 1, SACp_inl_2421__type_487, SACp_inl_2419__type_490, 1, 2, 1)
        SAC_WL_GRID_UNROLL_END( 0, SACp_inl_2421__type_487, SACp_inl_2420__type_489, 0, 1)
      SAC_WL_STRIDE_LOOP_END( 0, SACp_inl_2421__type_487, SACp_inl_2420__type_489, 0, 4, 1)
      SAC_WL_STRIDE_LOOP0_BEGIN( 0, SACp_inl_2421__type_487, SACp_inl_2420__type_489, 4, 8, 1)
        SAC_WL_GRID_UNROLL_BEGIN( 0, SACp_inl_2421__type_487, SACp_inl_2420__type_489, 0, 1)
          SAC_WL_STRIDE_LOOP0_BEGIN( 1, SACp_inl_2421__type_487, SACp_inl_2419__type_490, 0, 1, 1)
            SAC_WL_GRID_UNROLL_BEGIN( 1, SACp_inl_2421__type_487, SACp_inl_2419__type_490, 0, 1)
              /*
               * ND_IDXS2OFFSET( SACp_inl_2421__type_487_4_2__, 2, SACp_inl_2420__type_489, SACp_inl_2419__type_490, 2, 4, 2)
               */
              SACp_inl_2421__type_487_4_2__ = ( 2* SACp_inl_2420__type_489+SACp_inl_2419__type_490) ;

              SACp_inl_2417__type_484_4_2__ = (SACp_inl_2421__type_487_4_2__ + SACp_esd_3818_4_2__); 
              SACp_inl_2369__flat_65_4_2__ = (SACp_inl_2417__type_484_4_2__ + SACp_inl_1429__flat_110_4_2__); 
              SAC_ND_IDX_SEL_S( SACp_inl_2369__flat_65_4_2__, SACl_rofu, SACp_inl_2368__flat_64)
              SAC_ND_IDX_SEL_S( SACp_inl_2369__flat_65_4_2__, SACp_inl_1935_t, SACp_inl_2366__flat_62)
              SACp_inl_2365__flat_61 = (SACp_inl_2366__flat_62 * SACp_inl_2368__flat_64); 
              SAC_ND_IDX_SEL_S( SACp_inl_2417__type_484_4_2__, SACl_rofu, SACp_inl_2364__flat_60)
              SAC_ND_IDX_SEL_S( SACp_inl_2417__type_484_4_2__, SACp_inl_1935_t, SACp_inl_2363__flat_59)
              SACp_inl_2362__flat_58 = (SACp_inl_2363__flat_59 * SACp_inl_2364__flat_60); 
              SACp_inl_2361_val = (SACp_inl_2362__flat_58 - SACp_inl_2365__flat_61); 
              SAC_ND_IDX_SEL_S( SACp_inl_2417__type_484_4_2__, SACp_inl_1522_t, SACp_inl_2393__flat_47)
              SACp_inl_2392__flat_46 = (SACp_inl_2393__flat_47 - SACp_inl_2361_val); 
              /*
               * WL_ASSIGN( SACp_inl_2392__flat_46, 0, SACp_inl_2415__type_488, 2, SACp_inl_2421__type_487, 2, SACp_inl_2420__type_489, SACp_inl_2419__type_490)
               */
              SAC_TR_WL_PRINT( ("index vector [%d, %d] (== offset %d) -- offset %d -- assign", SACp_inl_2420__type_489, SACp_inl_2419__type_490, ( SAC_ND_A_SHAPE( SACp_inl_2415__type_488, 1) * SACp_inl_2420__type_489 + SACp_inl_2419__type_490 ), SAC_WL_OFFSET( SACp_inl_2415__type_488)));
              SAC_ASSURE_TYPE( (SAC_ND_A_DIM( SACp_inl_2392__flat_46) == (SAC_ND_A_DIM( SACp_inl_2415__type_488) - 2)), ("WL expression with illegal dimension found!"));
              SAC_ASSURE_TYPE( (SAC_ND_A_SIZE( SACp_inl_2392__flat_46) == SAC_WL_SHAPE_FACTOR( SACp_inl_2415__type_488, 1)), ("WL expression with illegal size found!"));
              SAC_ND_WRITE_ARRAY( SACp_inl_2415__type_488, SAC_WL_OFFSET( SACp_inl_2415__type_488)) = SACp_inl_2392__flat_46;
              SAC_WL_OFFSET( SACp_inl_2415__type_488)++;

            SAC_WL_GRID_UNROLL_END( 1, SACp_inl_2421__type_487, SACp_inl_2419__type_490, 0, 1)
          SAC_WL_STRIDE_LOOP_END( 1, SACp_inl_2421__type_487, SACp_inl_2419__type_490, 0, 1, 1)
          SAC_WL_STRIDE_LOOP0_BEGIN( 1, SACp_inl_2421__type_487, SACp_inl_2419__type_490, 1, 2, 1)
            SAC_WL_GRID_UNROLL_BEGIN( 1, SACp_inl_2421__type_487, SACp_inl_2419__type_490, 0, 1)
              /*
               * ND_IDXS2OFFSET( SACp_inl_2421__type_487_4_2__, 2, SACp_inl_2420__type_489, SACp_inl_2419__type_490, 2, 4, 2)
               */
              SACp_inl_2421__type_487_4_2__ = ( 2* SACp_inl_2420__type_489+SACp_inl_2419__type_490) ;

              SACp_inl_2417__type_484__SSA_1_4_2__ = (SACp_inl_2421__type_487_4_2__ + SACp_esd_3818_4_2__); 
              SACp_inl_2356__flat_74_4_2__ = (SACp_inl_2417__type_484__SSA_1_4_2__ + SACp_esd_3820_4_2__); 
              SAC_ND_IDX_SEL_S( SACp_inl_2356__flat_74_4_2__, SACl_rofu, SACp_inl_2355__flat_73)
              SAC_ND_IDX_SEL_S( SACp_inl_2417__type_484__SSA_1_4_2__, SACp_inl_1935_t, SACp_inl_2354__flat_72)
              SACp_inl_2353__flat_71 = (SACp_inl_2354__flat_72 * SACp_inl_2355__flat_73); 
              SAC_ND_IDX_SEL_S( SACp_inl_2417__type_484__SSA_1_4_2__, SACl_rofu, SACp_inl_2352__flat_70)
              SAC_ND_IDX_SEL_S( SACp_inl_2356__flat_74_4_2__, SACp_inl_1935_t, SACp_inl_2350__flat_68)
              SACp_inl_2349__flat_67 = (SACp_inl_2350__flat_68 * SACp_inl_2352__flat_70); 
              SACp_inl_2361_val__SSA_1 = (SACp_inl_2349__flat_67 + SACp_inl_2353__flat_71); 
              SAC_ND_IDX_SEL_S( SACp_inl_2417__type_484__SSA_1_4_2__, SACp_inl_1522_t, SACp_inl_2393__flat_47__SSA_1)
              SACp_inl_2392__flat_46__SSA_1 = (SACp_inl_2393__flat_47__SSA_1 - SACp_inl_2361_val__SSA_1); 
              /*
               * WL_ASSIGN( SACp_inl_2392__flat_46__SSA_1, 0, SACp_inl_2415__type_488, 2, SACp_inl_2421__type_487, 2, SACp_inl_2420__type_489, SACp_inl_2419__type_490)
               */
              SAC_TR_WL_PRINT( ("index vector [%d, %d] (== offset %d) -- offset %d -- assign", SACp_inl_2420__type_489, SACp_inl_2419__type_490, ( SAC_ND_A_SHAPE( SACp_inl_2415__type_488, 1) * SACp_inl_2420__type_489 + SACp_inl_2419__type_490 ), SAC_WL_OFFSET( SACp_inl_2415__type_488)));
              SAC_ASSURE_TYPE( (SAC_ND_A_DIM( SACp_inl_2392__flat_46__SSA_1) == (SAC_ND_A_DIM( SACp_inl_2415__type_488) - 2)), ("WL expression with illegal dimension found!"));
              SAC_ASSURE_TYPE( (SAC_ND_A_SIZE( SACp_inl_2392__flat_46__SSA_1) == SAC_WL_SHAPE_FACTOR( SACp_inl_2415__type_488, 1)), ("WL expression with illegal size found!"));
              SAC_ND_WRITE_ARRAY( SACp_inl_2415__type_488, SAC_WL_OFFSET( SACp_inl_2415__type_488)) = SACp_inl_2392__flat_46__SSA_1;
              SAC_WL_OFFSET( SACp_inl_2415__type_488)++;

            SAC_WL_GRID_UNROLL_END( 1, SACp_inl_2421__type_487, SACp_inl_2419__type_490, 0, 1)
          SAC_WL_STRIDE_LOOP_END( 1, SACp_inl_2421__type_487, SACp_inl_2419__type_490, 1, 2, 1)
        SAC_WL_GRID_UNROLL_END( 0, SACp_inl_2421__type_487, SACp_inl_2420__type_489, 0, 1)
      SAC_WL_STRIDE_LOOP_END( 0, SACp_inl_2421__type_487, SACp_inl_2420__type_489, 4, 8, 1)
      /*
       * MT_SCHEDULER_END( 0, 2, 0, 0, 8, 2)
       */


      /*
       * WL_END__OFFSET( SACp_inl_2415__type_488, 2, SACp_inl_2421__type_487, 2)
       */
    }

  SAC_PF_END_WITH( genarray)
  SAC_ND_DEC_RC_FREE_ARRAY( SACp_inl_1522_t, 1)
  SAC_ND_DEC_RC_FREE_ARRAY( SACp_inl_1935_t, 1)
  SAC_ND_DEC_RC_FREE_ARRAY( SACl_rofu, 1)
  /*
   * ND_FUN_RET( , 1, out_rc, SACp_inl_2415__type_488, SAC__arg_1)
   */
  SAC_ND_RET_out_rc( SACp_inl_2415__type_488, SAC__arg_1)
  return;
}

/*
 * ND_FUN_DEC( SACf_FFT1d__d___MAIN__cpx_16___MAIN__cpx_8, void, 4, out_rc, double *, SAC__arg_1, in, double, SACl_dir, in_rc, double *, SACl_v, in_rc, double *, SACl_rofu)
 */
void SACf_FFT1d__d___MAIN__cpx_16___MAIN__cpx_8( SAC_ND_PARAM_out_rc( double *, SAC__arg_1), SAC_ND_PARAM_in( double, SACl_dir), SAC_ND_PARAM_in_rc( double *, SACl_v), SAC_ND_PARAM_in_rc( double *, SACl_rofu))
{ 
  double SACp_esd_4512; 
  double SACp_esd_4511; 
  double SACp_esd_4510; 
  double SACp_esd_4509; 
  double SACp_inl_4495_array_elem__SSA_1; 
  int SACp_inl_4474__flat_404_16_2__; 
  int SACp_inl_4473__flat_403_16_2__; 
  int SACp_esd_3845_8_2__; 
  int SACp_esd_3843_8_2__; 
  /*
   * ND_KS_DECL_ARRAY( double, SACl_fft_right, 2, 8, 2)
   */
  double *SACl_fft_right;
  int SAC_ND_A_RC( SACl_fft_right);
  const int SAC_ND_A_SIZE( SACl_fft_right) = 8*2;
  const int SAC_ND_A_DIM( SACl_fft_right) = 2;
  const int SAC_ND_A_SHAPE( SACl_fft_right, 0) = 8;
  const int SAC_ND_A_SHAPE( SACl_fft_right, 1) = 2;

  /*
   * ND_KS_DECL_ARRAY( double, SACl_fft_left, 2, 8, 2)
   */
  double *SACl_fft_left;
  int SAC_ND_A_RC( SACl_fft_left);
  const int SAC_ND_A_SIZE( SACl_fft_left) = 8*2;
  const int SAC_ND_A_DIM( SACl_fft_left) = 2;
  const int SAC_ND_A_SHAPE( SACl_fft_left, 0) = 8;
  const int SAC_ND_A_SHAPE( SACl_fft_left, 1) = 2;

  /*
   * ND_KS_DECL_ARRAY( int, SACp_inl_2604__type_506, 1, 2)
   */
  int *SACp_inl_2604__type_506;
  int SAC_ND_A_RC( SACp_inl_2604__type_506);
  const int SAC_ND_A_SIZE( SACp_inl_2604__type_506) = 2;
  const int SAC_ND_A_DIM( SACp_inl_2604__type_506) = 1;
  const int SAC_ND_A_SHAPE( SACp_inl_2604__type_506, 0) = 2;

  int SACp_inl_2604__type_506_8_2__; 
  int SACp_inl_2603__type_508; 
  int SACp_inl_2602__type_509; 
  int SACp_inl_2600__type_503_8_2__; 
  /*
   * ND_KS_DECL_ARRAY( double, SACp_inl_2598__type_507, 2, 16, 2)
   */
  double *SACp_inl_2598__type_507;
  int SAC_ND_A_RC( SACp_inl_2598__type_507);
  const int SAC_ND_A_SIZE( SACp_inl_2598__type_507) = 16*2;
  const int SAC_ND_A_DIM( SACp_inl_2598__type_507) = 2;
  const int SAC_ND_A_SHAPE( SACp_inl_2598__type_507, 0) = 16;
  const int SAC_ND_A_SHAPE( SACp_inl_2598__type_507, 1) = 2;

  double SACp_inl_2588__flat_40; 
  double SACp_inl_2587__flat_39; 
  double SACp_inl_2576__flat_47; 
  double SACp_inl_2575__flat_46; 
  int SACp_inl_2552__flat_65_8_2__; 
  double SACp_inl_2551__flat_64; 
  double SACp_inl_2549__flat_62; 
  double SACp_inl_2548__flat_61; 
  double SACp_inl_2547__flat_60; 
  double SACp_inl_2546__flat_59; 
  double SACp_inl_2545__flat_58; 
  double SACp_inl_2544_val; 
  int SACp_inl_2539__flat_74_8_2__; 
  double SACp_inl_2538__flat_73; 
  double SACp_inl_2537__flat_72; 
  double SACp_inl_2536__flat_71; 
  double SACp_inl_2535__flat_70; 
  double SACp_inl_2533__flat_68; 
  double SACp_inl_2532__flat_67; 
  int SACp_inl_2514__flat_110_8_2__; 
  double SACp_inl_2513__flat_109; 
  /*
   * ND_KS_DECL_ARRAY( int, SACp_inl_2503__flat_108_iv, 1, 2)
   */
  int *SACp_inl_2503__flat_108_iv;
  int SAC_ND_A_RC( SACp_inl_2503__flat_108_iv);
  const int SAC_ND_A_SIZE( SACp_inl_2503__flat_108_iv) = 2;
  const int SAC_ND_A_DIM( SACp_inl_2503__flat_108_iv) = 1;
  const int SAC_ND_A_SHAPE( SACp_inl_2503__flat_108_iv, 0) = 2;

  int SACp_inl_2502__type_433; 
  int SACp_inl_2501__type_434; 
  int SACp_inl_2496__flat_111; 
  int SACp_inl_2495__flat_110_16_2__; 
  /*
   * ND_KS_DECL_ARRAY( double, SACp_inl_2493_rn, 2, 8, 2)
   */
  double *SACp_inl_2493_rn;
  int SAC_ND_A_RC( SACp_inl_2493_rn);
  const int SAC_ND_A_SIZE( SACp_inl_2493_rn) = 8*2;
  const int SAC_ND_A_DIM( SACp_inl_2493_rn) = 2;
  const int SAC_ND_A_SHAPE( SACp_inl_2493_rn, 0) = 8;
  const int SAC_ND_A_SHAPE( SACp_inl_2493_rn, 1) = 2;

  /*
   * ND_KS_DECL_ARRAY( int, SACp_inl_2446__flat_108_iv, 1, 2)
   */
  int *SACp_inl_2446__flat_108_iv;
  int SAC_ND_A_RC( SACp_inl_2446__flat_108_iv);
  const int SAC_ND_A_SIZE( SACp_inl_2446__flat_108_iv) = 2;
  const int SAC_ND_A_DIM( SACp_inl_2446__flat_108_iv) = 1;
  const int SAC_ND_A_SHAPE( SACp_inl_2446__flat_108_iv, 0) = 2;

  int SACp_inl_2445__type_430; 
  int SACp_inl_2444__type_431; 
  int SACp_inl_2439__flat_111; 
  int SACp_inl_2438__flat_110_16_2__; 
  double SACp_inl_2437__flat_109; 
  /*
   * ND_KS_DECL_ARRAY( double, SACp_inl_2436_rn, 2, 8, 2)
   */
  double *SACp_inl_2436_rn;
  int SAC_ND_A_RC( SACp_inl_2436_rn);
  const int SAC_ND_A_SIZE( SACp_inl_2436_rn) = 8*2;
  const int SAC_ND_A_DIM( SACp_inl_2436_rn) = 2;
  const int SAC_ND_A_SHAPE( SACp_inl_2436_rn, 0) = 8;
  const int SAC_ND_A_SHAPE( SACp_inl_2436_rn, 1) = 2;

  double SACp_inl_2544_val__SSA_1; 
  int SACp_inl_2600__type_503__SSA_1_8_2__; 
  double SACp_inl_2576__flat_47__SSA_1; 
  double SACp_inl_2575__flat_46__SSA_1; 
  int SACp_inl_2552__flat_65__SSA_1_8_2__; 
  double SACp_inl_2551__flat_64__SSA_1; 
  double SACp_inl_2549__flat_62__SSA_1; 
  double SACp_inl_2548__flat_61__SSA_1; 
  double SACp_inl_2547__flat_60__SSA_1; 
  double SACp_inl_2546__flat_59__SSA_1; 
  double SACp_inl_2545__flat_58__SSA_1; 
  double SACp_inl_2544_val__SSA_2; 
  int SACp_inl_2539__flat_74__SSA_1_8_2__; 
  double SACp_inl_2538__flat_73__SSA_1; 
  double SACp_inl_2537__flat_72__SSA_1; 
  double SACp_inl_2536__flat_71__SSA_1; 
  double SACp_inl_2535__flat_70__SSA_1; 
  double SACp_inl_2533__flat_68__SSA_1; 
  double SACp_inl_2532__flat_67__SSA_1; 
  double SACp_inl_2544_val__SSA_3; 
  double SACp_inl_2588__flat_40__SSA_1; 
  double SACp_inl_2587__flat_39__SSA_1; 
  int SACp_inl_2514__flat_110__SSA_1_8_2__; 
  double SACp_inl_2513__flat_109__SSA_1; 
  int SACp_inl_2522__flat_108_iv__SSA_2_8_2__; 
  int SACp_inl_2514__flat_110__SSA_2_8_2__; 
  double SACp_inl_2513__flat_109__SSA_2; 
  int SACp_inl_2522__flat_108_iv__SSA_3_8_2__; 
  int SACp_inl_2514__flat_110__SSA_3_8_2__; 
  double SACp_inl_2513__flat_109__SSA_3; 
  double SACp_inl_2513__flat_109__SSA_4; 
  double SACp_inl_2513__flat_109__SSA_5; 
  int SACp_inl_2522__flat_108_iv__SSA_6_8_2__; 
  double SACp_inl_2513__flat_109__SSA_6; 
  int SACp_inl_2522__flat_108_iv__SSA_7_8_2__; 
  double SACp_inl_2513__flat_109__SSA_7; 
  /*
   * ND_KS_DECL_ARRAY( double, SACp_inl_2512_rn__SSA_8, 2, 4, 2)
   */
  double *SACp_inl_2512_rn__SSA_8;
  int SAC_ND_A_RC( SACp_inl_2512_rn__SSA_8);
  const int SAC_ND_A_SIZE( SACp_inl_2512_rn__SSA_8) = 4*2;
  const int SAC_ND_A_DIM( SACp_inl_2512_rn__SSA_8) = 2;
  const int SAC_ND_A_SHAPE( SACp_inl_2512_rn__SSA_8, 0) = 4;
  const int SAC_ND_A_SHAPE( SACp_inl_2512_rn__SSA_8, 1) = 2;


  /*
   * ND_KS_DECL_ARRAY_ARG( SACl_rofu, 2, 8, 2)
   */
  const int SAC_ND_A_SIZE( SACl_rofu) = 8*2;
  const int SAC_ND_A_DIM( SACl_rofu) = 2;
  const int SAC_ND_A_SHAPE( SACl_rofu, 0) = 8;
  const int SAC_ND_A_SHAPE( SACl_rofu, 1) = 2;

  /*
   * ND_KS_DECL_ARRAY_ARG( SACl_v, 2, 16, 2)
   */
  const int SAC_ND_A_SIZE( SACl_v) = 16*2;
  const int SAC_ND_A_DIM( SACl_v) = 2;
  const int SAC_ND_A_SHAPE( SACl_v, 0) = 16;
  const int SAC_ND_A_SHAPE( SACl_v, 1) = 2;

  SAC_ND_ALLOC_ARRAY( double, SACp_inl_2436_rn, 1)
  SAC_PF_BEGIN_WITH( genarray)
    /*
     * WL_BEGIN__OFFSET( SACp_inl_2436_rn, 2, SACp_inl_2446__flat_108_iv, 2)
     */
    { int SAC_WL_OFFSET( SACp_inl_2436_rn);
      int SAC_WL_MT_SCHEDULE_START( 0);
      int SAC_WL_MT_SCHEDULE_STOP( 0);
      int SAC_WL_MT_SCHEDULE_START( 1);
      int SAC_WL_MT_SCHEDULE_STOP( 1);
      int SAC_i;
      int SAC_WL_SHAPE_FACTOR( SACp_inl_2436_rn, 0) = 1 * SAC_ND_A_SHAPE( SACp_inl_2436_rn, 1);
      int SAC_WL_SHAPE_FACTOR( SACp_inl_2436_rn, 1) = 1;

      /*
       * MT_SCHEDULER_BEGIN( 0, 2, 0, 0, 8, 2)
       */
      SAC_WL_MT_SCHEDULE_START( 0) = 0;
      SAC_WL_MT_SCHEDULE_STOP( 0) = 8;
      SAC_WL_MT_SCHEDULE_START( 1) = 0;
      SAC_WL_MT_SCHEDULE_STOP( 1) = 2;

      /*
       * WL_INIT_OFFSET( SACp_inl_2436_rn, 2, SACp_inl_2446__flat_108_iv, 2)
       */
      SAC_WL_OFFSET( SACp_inl_2436_rn)
        = SAC_WL_MT_SCHEDULE_START( 0) * SAC_WL_SHAPE_FACTOR( SACp_inl_2436_rn, 0)
        + SAC_WL_MT_SCHEDULE_START( 1) * SAC_WL_SHAPE_FACTOR( SACp_inl_2436_rn, 1);

      SAC_WL_STRIDE_LOOP0_BEGIN( 0, SACp_inl_2446__flat_108_iv, SACp_inl_2445__type_430, 0, 8, 1)
        SAC_WL_GRID_UNROLL_BEGIN( 0, SACp_inl_2446__flat_108_iv, SACp_inl_2445__type_430, 0, 1)
          SAC_WL_STRIDE_LOOP0_BEGIN( 1, SACp_inl_2446__flat_108_iv, SACp_inl_2444__type_431, 0, 2, 1)
            SAC_WL_GRID_UNROLL_BEGIN( 1, SACp_inl_2446__flat_108_iv, SACp_inl_2444__type_431, 0, 1)
              SACp_inl_2439__flat_111 = (2 * SACp_inl_2445__type_430); 
              SACp_inl_2438__flat_110_16_2__ = ((SACp_inl_2439__flat_111 * 2) + SACp_inl_2444__type_431); 
              SAC_ND_IDX_SEL_S( SACp_inl_2438__flat_110_16_2__, SACl_v, SACp_inl_2437__flat_109)
              /*
               * WL_ASSIGN( SACp_inl_2437__flat_109, 0, SACp_inl_2436_rn, 2, SACp_inl_2446__flat_108_iv, 2, SACp_inl_2445__type_430, SACp_inl_2444__type_431)
               */
              SAC_TR_WL_PRINT( ("index vector [%d, %d] (== offset %d) -- offset %d -- assign", SACp_inl_2445__type_430, SACp_inl_2444__type_431, ( SAC_ND_A_SHAPE( SACp_inl_2436_rn, 1) * SACp_inl_2445__type_430 + SACp_inl_2444__type_431 ), SAC_WL_OFFSET( SACp_inl_2436_rn)));
              SAC_ASSURE_TYPE( (SAC_ND_A_DIM( SACp_inl_2437__flat_109) == (SAC_ND_A_DIM( SACp_inl_2436_rn) - 2)), ("WL expression with illegal dimension found!"));
              SAC_ASSURE_TYPE( (SAC_ND_A_SIZE( SACp_inl_2437__flat_109) == SAC_WL_SHAPE_FACTOR( SACp_inl_2436_rn, 1)), ("WL expression with illegal size found!"));
              SAC_ND_WRITE_ARRAY( SACp_inl_2436_rn, SAC_WL_OFFSET( SACp_inl_2436_rn)) = SACp_inl_2437__flat_109;
              SAC_WL_OFFSET( SACp_inl_2436_rn)++;

            SAC_WL_GRID_UNROLL_END( 1, SACp_inl_2446__flat_108_iv, SACp_inl_2444__type_431, 0, 1)
          SAC_WL_STRIDE_LOOP_END( 1, SACp_inl_2446__flat_108_iv, SACp_inl_2444__type_431, 0, 2, 1)
        SAC_WL_GRID_UNROLL_END( 0, SACp_inl_2446__flat_108_iv, SACp_inl_2445__type_430, 0, 1)
      SAC_WL_STRIDE_LOOP_END( 0, SACp_inl_2446__flat_108_iv, SACp_inl_2445__type_430, 0, 8, 1)
      /*
       * MT_SCHEDULER_END( 0, 2, 0, 0, 8, 2)
       */


      /*
       * WL_END__OFFSET( SACp_inl_2436_rn, 2, SACp_inl_2446__flat_108_iv, 2)
       */
    }

  SAC_PF_END_WITH( genarray)
  SACp_inl_4474__flat_404_16_2__ = ((1 * 2) + 0); 
  SAC_ND_ALLOC_ARRAY( double, SACp_inl_2493_rn, 1)
  SAC_PF_BEGIN_WITH( genarray)
    /*
     * WL_BEGIN__OFFSET( SACp_inl_2493_rn, 2, SACp_inl_2503__flat_108_iv, 2)
     */
    { int SAC_WL_OFFSET( SACp_inl_2493_rn);
      int SAC_WL_MT_SCHEDULE_START( 0);
      int SAC_WL_MT_SCHEDULE_STOP( 0);
      int SAC_WL_MT_SCHEDULE_START( 1);
      int SAC_WL_MT_SCHEDULE_STOP( 1);
      int SAC_i;
      int SAC_WL_SHAPE_FACTOR( SACp_inl_2493_rn, 0) = 1 * SAC_ND_A_SHAPE( SACp_inl_2493_rn, 1);
      int SAC_WL_SHAPE_FACTOR( SACp_inl_2493_rn, 1) = 1;

      /*
       * MT_SCHEDULER_BEGIN( 0, 2, 0, 0, 8, 2)
       */
      SAC_WL_MT_SCHEDULE_START( 0) = 0;
      SAC_WL_MT_SCHEDULE_STOP( 0) = 8;
      SAC_WL_MT_SCHEDULE_START( 1) = 0;
      SAC_WL_MT_SCHEDULE_STOP( 1) = 2;

      /*
       * WL_INIT_OFFSET( SACp_inl_2493_rn, 2, SACp_inl_2503__flat_108_iv, 2)
       */
      SAC_WL_OFFSET( SACp_inl_2493_rn)
        = SAC_WL_MT_SCHEDULE_START( 0) * SAC_WL_SHAPE_FACTOR( SACp_inl_2493_rn, 0)
        + SAC_WL_MT_SCHEDULE_START( 1) * SAC_WL_SHAPE_FACTOR( SACp_inl_2493_rn, 1);

      SAC_WL_STRIDE_LOOP0_BEGIN( 0, SACp_inl_2503__flat_108_iv, SACp_inl_2502__type_433, 0, 8, 1)
        SAC_WL_GRID_UNROLL_BEGIN( 0, SACp_inl_2503__flat_108_iv, SACp_inl_2502__type_433, 0, 1)
          SAC_WL_STRIDE_LOOP0_BEGIN( 1, SACp_inl_2503__flat_108_iv, SACp_inl_2501__type_434, 0, 2, 1)
            SAC_WL_GRID_UNROLL_BEGIN( 1, SACp_inl_2503__flat_108_iv, SACp_inl_2501__type_434, 0, 1)
              SACp_inl_2496__flat_111 = (2 * SACp_inl_2502__type_433); 
              SACp_inl_2495__flat_110_16_2__ = ((SACp_inl_2496__flat_111 * 2) + SACp_inl_2501__type_434); 
              SACp_inl_4473__flat_403_16_2__ = (SACp_inl_4474__flat_404_16_2__ + SACp_inl_2495__flat_110_16_2__); 
              SAC_ND_IDX_SEL_S( SACp_inl_4473__flat_403_16_2__, SACl_v, SACp_inl_4495_array_elem__SSA_1)
              /*
               * WL_ASSIGN( SACp_inl_4495_array_elem__SSA_1, 0, SACp_inl_2493_rn, 2, SACp_inl_2503__flat_108_iv, 2, SACp_inl_2502__type_433, SACp_inl_2501__type_434)
               */
              SAC_TR_WL_PRINT( ("index vector [%d, %d] (== offset %d) -- offset %d -- assign", SACp_inl_2502__type_433, SACp_inl_2501__type_434, ( SAC_ND_A_SHAPE( SACp_inl_2493_rn, 1) * SACp_inl_2502__type_433 + SACp_inl_2501__type_434 ), SAC_WL_OFFSET( SACp_inl_2493_rn)));
              SAC_ASSURE_TYPE( (SAC_ND_A_DIM( SACp_inl_4495_array_elem__SSA_1) == (SAC_ND_A_DIM( SACp_inl_2493_rn) - 2)), ("WL expression with illegal dimension found!"));
              SAC_ASSURE_TYPE( (SAC_ND_A_SIZE( SACp_inl_4495_array_elem__SSA_1) == SAC_WL_SHAPE_FACTOR( SACp_inl_2493_rn, 1)), ("WL expression with illegal size found!"));
              SAC_ND_WRITE_ARRAY( SACp_inl_2493_rn, SAC_WL_OFFSET( SACp_inl_2493_rn)) = SACp_inl_4495_array_elem__SSA_1;
              SAC_WL_OFFSET( SACp_inl_2493_rn)++;

            SAC_WL_GRID_UNROLL_END( 1, SACp_inl_2503__flat_108_iv, SACp_inl_2501__type_434, 0, 1)
          SAC_WL_STRIDE_LOOP_END( 1, SACp_inl_2503__flat_108_iv, SACp_inl_2501__type_434, 0, 2, 1)
        SAC_WL_GRID_UNROLL_END( 0, SACp_inl_2503__flat_108_iv, SACp_inl_2502__type_433, 0, 1)
      SAC_WL_STRIDE_LOOP_END( 0, SACp_inl_2503__flat_108_iv, SACp_inl_2502__type_433, 0, 8, 1)
      /*
       * MT_SCHEDULER_END( 0, 2, 0, 0, 8, 2)
       */


      /*
       * WL_END__OFFSET( SACp_inl_2493_rn, 2, SACp_inl_2503__flat_108_iv, 2)
       */
    }

  SAC_PF_END_WITH( genarray)
  SAC_ND_DEC_RC_FREE_ARRAY( SACl_v, 1)
  SACp_inl_2514__flat_110_8_2__ = ((6 * 2) + 1); 
  SAC_ND_IDX_SEL_S( SACp_inl_2514__flat_110_8_2__, SACl_rofu, SACp_inl_2513__flat_109)
  SACp_inl_2514__flat_110__SSA_1_8_2__ = ((6 * 2) + 0); 
  SAC_ND_IDX_SEL_S( SACp_inl_2514__flat_110__SSA_1_8_2__, SACl_rofu, SACp_inl_2513__flat_109__SSA_1)
  SACp_inl_2522__flat_108_iv__SSA_2_8_2__ = ((2 * 2) + 1); 
  SACp_inl_2514__flat_110__SSA_2_8_2__ = ((4 * 2) + 1); 
  SAC_ND_IDX_SEL_S( SACp_inl_2514__flat_110__SSA_2_8_2__, SACl_rofu, SACp_inl_2513__flat_109__SSA_2)
  SACp_inl_2522__flat_108_iv__SSA_3_8_2__ = ((2 * 2) + 0); 
  SACp_inl_2514__flat_110__SSA_3_8_2__ = ((4 * 2) + 0); 
  SAC_ND_IDX_SEL_S( SACp_inl_2514__flat_110__SSA_3_8_2__, SACl_rofu, SACp_inl_2513__flat_109__SSA_3)
  SAC_ND_IDX_SEL_S( SACp_inl_2522__flat_108_iv__SSA_2_8_2__, SACl_rofu, SACp_inl_2513__flat_109__SSA_4)
  SAC_ND_IDX_SEL_S( SACp_inl_2522__flat_108_iv__SSA_3_8_2__, SACl_rofu, SACp_inl_2513__flat_109__SSA_5)
  SACp_inl_2522__flat_108_iv__SSA_6_8_2__ = ((0 * 2) + 1); 
  SAC_ND_IDX_SEL_S( SACp_inl_2522__flat_108_iv__SSA_6_8_2__, SACl_rofu, SACp_inl_2513__flat_109__SSA_6)
  SACp_inl_2522__flat_108_iv__SSA_7_8_2__ = ((0 * 2) + 0); 
  SAC_ND_IDX_SEL_S( SACp_inl_2522__flat_108_iv__SSA_7_8_2__, SACl_rofu, SACp_inl_2513__flat_109__SSA_7)
  SAC_ND_ALLOC_ARRAY( double, SACp_inl_2512_rn__SSA_8, 1)
  /*
   * ND_CREATE_CONST_ARRAY_S( SACp_inl_2512_rn__SSA_8, 8, SACp_inl_2513__flat_109__SSA_7, SACp_inl_2513__flat_109__SSA_6, SACp_inl_2513__flat_109__SSA_5, SACp_inl_2513__flat_109__SSA_4, SACp_inl_2513__flat_109__SSA_3, SACp_inl_2513__flat_109__SSA_2, SACp_inl_2513__flat_109__SSA_1, SACp_inl_2513__flat_109)
   */
  SAC_ND_WRITE_ARRAY( SACp_inl_2512_rn__SSA_8, 0) = SACp_inl_2513__flat_109__SSA_7;
  SAC_ND_WRITE_ARRAY( SACp_inl_2512_rn__SSA_8, 1) = SACp_inl_2513__flat_109__SSA_6;
  SAC_ND_WRITE_ARRAY( SACp_inl_2512_rn__SSA_8, 2) = SACp_inl_2513__flat_109__SSA_5;
  SAC_ND_WRITE_ARRAY( SACp_inl_2512_rn__SSA_8, 3) = SACp_inl_2513__flat_109__SSA_4;
  SAC_ND_WRITE_ARRAY( SACp_inl_2512_rn__SSA_8, 4) = SACp_inl_2513__flat_109__SSA_3;
  SAC_ND_WRITE_ARRAY( SACp_inl_2512_rn__SSA_8, 5) = SACp_inl_2513__flat_109__SSA_2;
  SAC_ND_WRITE_ARRAY( SACp_inl_2512_rn__SSA_8, 6) = SACp_inl_2513__flat_109__SSA_1;
  SAC_ND_WRITE_ARRAY( SACp_inl_2512_rn__SSA_8, 7) = SACp_inl_2513__flat_109;

  SAC_ND_INC_RC( SACp_inl_2512_rn__SSA_8, 1)
  /*
   * ND_FUN_AP( SACf_FFT1d__d___MAIN__cpx_8___MAIN__cpx_4, , 4, out_rc, SACl_fft_left, in, SACl_dir, in_rc, SACp_inl_2436_rn, in_rc, SACp_inl_2512_rn__SSA_8)
   */
  SACf_FFT1d__d___MAIN__cpx_8___MAIN__cpx_4( SAC_ND_ARG_out_rc( SACl_fft_left), SAC_ND_ARG_in( SACl_dir), SAC_ND_ARG_in_rc( SACp_inl_2436_rn), SAC_ND_ARG_in_rc( SACp_inl_2512_rn__SSA_8));

  /*
   * ND_FUN_AP( SACf_FFT1d__d___MAIN__cpx_8___MAIN__cpx_4, , 4, out_rc, SACl_fft_right, in, SACl_dir, in_rc, SACp_inl_2493_rn, in_rc, SACp_inl_2512_rn__SSA_8)
   */
  SACf_FFT1d__d___MAIN__cpx_8___MAIN__cpx_4( SAC_ND_ARG_out_rc( SACl_fft_right), SAC_ND_ARG_in( SACl_dir), SAC_ND_ARG_in_rc( SACp_inl_2493_rn), SAC_ND_ARG_in_rc( SACp_inl_2512_rn__SSA_8));

  SACp_esd_3843_8_2__ = ((-8 * 2) + 0); 
  SACp_esd_3845_8_2__ = ((0 * 2) + -1); 
  SAC_ND_ALLOC_ARRAY( double, SACp_inl_2598__type_507, 1)
  SAC_PF_BEGIN_WITH( genarray)
    /*
     * WL_BEGIN__OFFSET( SACp_inl_2598__type_507, 2, SACp_inl_2604__type_506, 2)
     */
    { int SAC_WL_OFFSET( SACp_inl_2598__type_507);
      int SAC_WL_MT_SCHEDULE_START( 0);
      int SAC_WL_MT_SCHEDULE_STOP( 0);
      int SAC_WL_MT_SCHEDULE_START( 1);
      int SAC_WL_MT_SCHEDULE_STOP( 1);
      int SAC_i;
      int SAC_WL_SHAPE_FACTOR( SACp_inl_2598__type_507, 0) = 1 * SAC_ND_A_SHAPE( SACp_inl_2598__type_507, 1);
      int SAC_WL_SHAPE_FACTOR( SACp_inl_2598__type_507, 1) = 1;

      /*
       * MT_SCHEDULER_BEGIN( 0, 2, 0, 0, 16, 2)
       */
      SAC_WL_MT_SCHEDULE_START( 0) = 0;
      SAC_WL_MT_SCHEDULE_STOP( 0) = 16;
      SAC_WL_MT_SCHEDULE_START( 1) = 0;
      SAC_WL_MT_SCHEDULE_STOP( 1) = 2;

      /*
       * WL_INIT_OFFSET( SACp_inl_2598__type_507, 2, SACp_inl_2604__type_506, 2)
       */
      SAC_WL_OFFSET( SACp_inl_2598__type_507)
        = SAC_WL_MT_SCHEDULE_START( 0) * SAC_WL_SHAPE_FACTOR( SACp_inl_2598__type_507, 0)
        + SAC_WL_MT_SCHEDULE_START( 1) * SAC_WL_SHAPE_FACTOR( SACp_inl_2598__type_507, 1);

      SAC_WL_STRIDE_LOOP0_BEGIN( 0, SACp_inl_2604__type_506, SACp_inl_2603__type_508, 0, 8, 1)
        SAC_WL_GRID_UNROLL_BEGIN( 0, SACp_inl_2604__type_506, SACp_inl_2603__type_508, 0, 1)
          SAC_WL_STRIDE_LOOP0_BEGIN( 1, SACp_inl_2604__type_506, SACp_inl_2602__type_509, 0, 1, 1)
            SAC_WL_GRID_UNROLL_BEGIN( 1, SACp_inl_2604__type_506, SACp_inl_2602__type_509, 0, 1)
              /*
               * ND_IDXS2OFFSET( SACp_inl_2604__type_506_8_2__, 2, SACp_inl_2603__type_508, SACp_inl_2602__type_509, 2, 8, 2)
               */
              SACp_inl_2604__type_506_8_2__ = ( 2* SACp_inl_2603__type_508+SACp_inl_2602__type_509) ;

              SACp_inl_2552__flat_65__SSA_1_8_2__ = (SACp_inl_2604__type_506_8_2__ + SACp_inl_2522__flat_108_iv__SSA_6_8_2__); 
              SAC_ND_IDX_SEL_S( SACp_inl_2552__flat_65__SSA_1_8_2__, SACl_rofu, SACp_inl_2551__flat_64__SSA_1)
              SAC_ND_IDX_SEL_S( SACp_inl_2552__flat_65__SSA_1_8_2__, SACl_fft_right, SACp_inl_2549__flat_62__SSA_1)
              SACp_inl_2548__flat_61__SSA_1 = (SACp_inl_2549__flat_62__SSA_1 * SACp_inl_2551__flat_64__SSA_1); 
              SAC_ND_IDX_SEL_S( SACp_inl_2604__type_506_8_2__, SACl_rofu, SACp_inl_2547__flat_60__SSA_1)
              SAC_ND_IDX_SEL_S( SACp_inl_2604__type_506_8_2__, SACl_fft_right, SACp_inl_2546__flat_59__SSA_1)
              SACp_inl_2545__flat_58__SSA_1 = (SACp_inl_2546__flat_59__SSA_1 * SACp_inl_2547__flat_60__SSA_1); 
              SACp_inl_2544_val__SSA_2 = (SACp_inl_2545__flat_58__SSA_1 - SACp_inl_2548__flat_61__SSA_1); 
              SAC_ND_IDX_SEL_S( SACp_inl_2604__type_506_8_2__, SACl_fft_left, SACp_inl_2588__flat_40)
              SACp_inl_2587__flat_39 = (SACp_inl_2588__flat_40 + SACp_inl_2544_val__SSA_2); 
              /*
               * WL_ASSIGN( SACp_inl_2587__flat_39, 0, SACp_inl_2598__type_507, 2, SACp_inl_2604__type_506, 2, SACp_inl_2603__type_508, SACp_inl_2602__type_509)
               */
              SAC_TR_WL_PRINT( ("index vector [%d, %d] (== offset %d) -- offset %d -- assign", SACp_inl_2603__type_508, SACp_inl_2602__type_509, ( SAC_ND_A_SHAPE( SACp_inl_2598__type_507, 1) * SACp_inl_2603__type_508 + SACp_inl_2602__type_509 ), SAC_WL_OFFSET( SACp_inl_2598__type_507)));
              SAC_ASSURE_TYPE( (SAC_ND_A_DIM( SACp_inl_2587__flat_39) == (SAC_ND_A_DIM( SACp_inl_2598__type_507) - 2)), ("WL expression with illegal dimension found!"));
              SAC_ASSURE_TYPE( (SAC_ND_A_SIZE( SACp_inl_2587__flat_39) == SAC_WL_SHAPE_FACTOR( SACp_inl_2598__type_507, 1)), ("WL expression with illegal size found!"));
              SAC_ND_WRITE_ARRAY( SACp_inl_2598__type_507, SAC_WL_OFFSET( SACp_inl_2598__type_507)) = SACp_inl_2587__flat_39;
              SAC_WL_OFFSET( SACp_inl_2598__type_507)++;

            SAC_WL_GRID_UNROLL_END( 1, SACp_inl_2604__type_506, SACp_inl_2602__type_509, 0, 1)
          SAC_WL_STRIDE_LOOP_END( 1, SACp_inl_2604__type_506, SACp_inl_2602__type_509, 0, 1, 1)
          SAC_WL_STRIDE_LOOP0_BEGIN( 1, SACp_inl_2604__type_506, SACp_inl_2602__type_509, 1, 2, 1)
            SAC_WL_GRID_UNROLL_BEGIN( 1, SACp_inl_2604__type_506, SACp_inl_2602__type_509, 0, 1)
              /*
               * ND_IDXS2OFFSET( SACp_inl_2604__type_506_8_2__, 2, SACp_inl_2603__type_508, SACp_inl_2602__type_509, 2, 8, 2)
               */
              SACp_inl_2604__type_506_8_2__ = ( 2* SACp_inl_2603__type_508+SACp_inl_2602__type_509) ;

              SACp_inl_2539__flat_74__SSA_1_8_2__ = (SACp_inl_2604__type_506_8_2__ + SACp_esd_3845_8_2__); 
              SAC_ND_IDX_SEL_S( SACp_inl_2539__flat_74__SSA_1_8_2__, SACl_rofu, SACp_inl_2538__flat_73__SSA_1)
              SAC_ND_IDX_SEL_S( SACp_inl_2604__type_506_8_2__, SACl_fft_right, SACp_inl_2537__flat_72__SSA_1)
              SACp_inl_2536__flat_71__SSA_1 = (SACp_inl_2537__flat_72__SSA_1 * SACp_inl_2538__flat_73__SSA_1); 
              SAC_ND_IDX_SEL_S( SACp_inl_2604__type_506_8_2__, SACl_rofu, SACp_inl_2535__flat_70__SSA_1)
              SAC_ND_IDX_SEL_S( SACp_inl_2539__flat_74__SSA_1_8_2__, SACl_fft_right, SACp_inl_2533__flat_68__SSA_1)
              SACp_inl_2532__flat_67__SSA_1 = (SACp_inl_2533__flat_68__SSA_1 * SACp_inl_2535__flat_70__SSA_1); 
              SACp_inl_2544_val__SSA_3 = (SACp_inl_2532__flat_67__SSA_1 + SACp_inl_2536__flat_71__SSA_1); 
              SAC_ND_IDX_SEL_S( SACp_inl_2604__type_506_8_2__, SACl_fft_left, SACp_inl_2588__flat_40__SSA_1)
              SACp_inl_2587__flat_39__SSA_1 = (SACp_inl_2588__flat_40__SSA_1 + SACp_inl_2544_val__SSA_3); 
              /*
               * WL_ASSIGN( SACp_inl_2587__flat_39__SSA_1, 0, SACp_inl_2598__type_507, 2, SACp_inl_2604__type_506, 2, SACp_inl_2603__type_508, SACp_inl_2602__type_509)
               */
              SAC_TR_WL_PRINT( ("index vector [%d, %d] (== offset %d) -- offset %d -- assign", SACp_inl_2603__type_508, SACp_inl_2602__type_509, ( SAC_ND_A_SHAPE( SACp_inl_2598__type_507, 1) * SACp_inl_2603__type_508 + SACp_inl_2602__type_509 ), SAC_WL_OFFSET( SACp_inl_2598__type_507)));
              SAC_ASSURE_TYPE( (SAC_ND_A_DIM( SACp_inl_2587__flat_39__SSA_1) == (SAC_ND_A_DIM( SACp_inl_2598__type_507) - 2)), ("WL expression with illegal dimension found!"));
              SAC_ASSURE_TYPE( (SAC_ND_A_SIZE( SACp_inl_2587__flat_39__SSA_1) == SAC_WL_SHAPE_FACTOR( SACp_inl_2598__type_507, 1)), ("WL expression with illegal size found!"));
              SAC_ND_WRITE_ARRAY( SACp_inl_2598__type_507, SAC_WL_OFFSET( SACp_inl_2598__type_507)) = SACp_inl_2587__flat_39__SSA_1;
              SAC_WL_OFFSET( SACp_inl_2598__type_507)++;

            SAC_WL_GRID_UNROLL_END( 1, SACp_inl_2604__type_506, SACp_inl_2602__type_509, 0, 1)
          SAC_WL_STRIDE_LOOP_END( 1, SACp_inl_2604__type_506, SACp_inl_2602__type_509, 1, 2, 1)
        SAC_WL_GRID_UNROLL_END( 0, SACp_inl_2604__type_506, SACp_inl_2603__type_508, 0, 1)
      SAC_WL_STRIDE_LOOP_END( 0, SACp_inl_2604__type_506, SACp_inl_2603__type_508, 0, 8, 1)
      SAC_WL_STRIDE_LOOP0_BEGIN( 0, SACp_inl_2604__type_506, SACp_inl_2603__type_508, 8, 16, 1)
        SAC_WL_GRID_UNROLL_BEGIN( 0, SACp_inl_2604__type_506, SACp_inl_2603__type_508, 0, 1)
          SAC_WL_STRIDE_LOOP0_BEGIN( 1, SACp_inl_2604__type_506, SACp_inl_2602__type_509, 0, 1, 1)
            SAC_WL_GRID_UNROLL_BEGIN( 1, SACp_inl_2604__type_506, SACp_inl_2602__type_509, 0, 1)
              /*
               * ND_IDXS2OFFSET( SACp_inl_2604__type_506_8_2__, 2, SACp_inl_2603__type_508, SACp_inl_2602__type_509, 2, 8, 2)
               */
              SACp_inl_2604__type_506_8_2__ = ( 2* SACp_inl_2603__type_508+SACp_inl_2602__type_509) ;

              SACp_inl_2600__type_503_8_2__ = (SACp_inl_2604__type_506_8_2__ + SACp_esd_3843_8_2__); 
              SACp_inl_2552__flat_65_8_2__ = (SACp_inl_2600__type_503_8_2__ + SACp_inl_2522__flat_108_iv__SSA_6_8_2__); 
              SAC_ND_IDX_SEL_S( SACp_inl_2552__flat_65_8_2__, SACl_rofu, SACp_inl_2551__flat_64)
              SAC_ND_IDX_SEL_S( SACp_inl_2552__flat_65_8_2__, SACl_fft_right, SACp_inl_2549__flat_62)
              SACp_inl_2548__flat_61 = (SACp_inl_2549__flat_62 * SACp_inl_2551__flat_64); 
              SAC_ND_IDX_SEL_S( SACp_inl_2600__type_503_8_2__, SACl_rofu, SACp_inl_2547__flat_60)
              SAC_ND_IDX_SEL_S( SACp_inl_2600__type_503_8_2__, SACl_fft_right, SACp_inl_2546__flat_59)
              SACp_inl_2545__flat_58 = (SACp_inl_2546__flat_59 * SACp_inl_2547__flat_60); 
              SACp_inl_2544_val = (SACp_inl_2545__flat_58 - SACp_inl_2548__flat_61); 
              SAC_ND_IDX_SEL_S( SACp_inl_2600__type_503_8_2__, SACl_fft_left, SACp_inl_2576__flat_47)
              SACp_inl_2575__flat_46 = (SACp_inl_2576__flat_47 - SACp_inl_2544_val); 
              /*
               * WL_ASSIGN( SACp_inl_2575__flat_46, 0, SACp_inl_2598__type_507, 2, SACp_inl_2604__type_506, 2, SACp_inl_2603__type_508, SACp_inl_2602__type_509)
               */
              SAC_TR_WL_PRINT( ("index vector [%d, %d] (== offset %d) -- offset %d -- assign", SACp_inl_2603__type_508, SACp_inl_2602__type_509, ( SAC_ND_A_SHAPE( SACp_inl_2598__type_507, 1) * SACp_inl_2603__type_508 + SACp_inl_2602__type_509 ), SAC_WL_OFFSET( SACp_inl_2598__type_507)));
              SAC_ASSURE_TYPE( (SAC_ND_A_DIM( SACp_inl_2575__flat_46) == (SAC_ND_A_DIM( SACp_inl_2598__type_507) - 2)), ("WL expression with illegal dimension found!"));
              SAC_ASSURE_TYPE( (SAC_ND_A_SIZE( SACp_inl_2575__flat_46) == SAC_WL_SHAPE_FACTOR( SACp_inl_2598__type_507, 1)), ("WL expression with illegal size found!"));
              SAC_ND_WRITE_ARRAY( SACp_inl_2598__type_507, SAC_WL_OFFSET( SACp_inl_2598__type_507)) = SACp_inl_2575__flat_46;
              SAC_WL_OFFSET( SACp_inl_2598__type_507)++;

            SAC_WL_GRID_UNROLL_END( 1, SACp_inl_2604__type_506, SACp_inl_2602__type_509, 0, 1)
          SAC_WL_STRIDE_LOOP_END( 1, SACp_inl_2604__type_506, SACp_inl_2602__type_509, 0, 1, 1)
          SAC_WL_STRIDE_LOOP0_BEGIN( 1, SACp_inl_2604__type_506, SACp_inl_2602__type_509, 1, 2, 1)
            SAC_WL_GRID_UNROLL_BEGIN( 1, SACp_inl_2604__type_506, SACp_inl_2602__type_509, 0, 1)
              /*
               * ND_IDXS2OFFSET( SACp_inl_2604__type_506_8_2__, 2, SACp_inl_2603__type_508, SACp_inl_2602__type_509, 2, 8, 2)
               */
              SACp_inl_2604__type_506_8_2__ = ( 2* SACp_inl_2603__type_508+SACp_inl_2602__type_509) ;

              SACp_inl_2600__type_503__SSA_1_8_2__ = (SACp_inl_2604__type_506_8_2__ + SACp_esd_3843_8_2__); 
              SACp_inl_2539__flat_74_8_2__ = (SACp_inl_2600__type_503__SSA_1_8_2__ + SACp_esd_3845_8_2__); 
              SAC_ND_IDX_SEL_S( SACp_inl_2539__flat_74_8_2__, SACl_rofu, SACp_inl_2538__flat_73)
              SAC_ND_IDX_SEL_S( SACp_inl_2600__type_503__SSA_1_8_2__, SACl_fft_right, SACp_inl_2537__flat_72)
              SACp_inl_2536__flat_71 = (SACp_inl_2537__flat_72 * SACp_inl_2538__flat_73); 
              SAC_ND_IDX_SEL_S( SACp_inl_2600__type_503__SSA_1_8_2__, SACl_rofu, SACp_inl_2535__flat_70)
              SAC_ND_IDX_SEL_S( SACp_inl_2539__flat_74_8_2__, SACl_fft_right, SACp_inl_2533__flat_68)
              SACp_inl_2532__flat_67 = (SACp_inl_2533__flat_68 * SACp_inl_2535__flat_70); 
              SACp_inl_2544_val__SSA_1 = (SACp_inl_2532__flat_67 + SACp_inl_2536__flat_71); 
              SAC_ND_IDX_SEL_S( SACp_inl_2600__type_503__SSA_1_8_2__, SACl_fft_left, SACp_inl_2576__flat_47__SSA_1)
              SACp_inl_2575__flat_46__SSA_1 = (SACp_inl_2576__flat_47__SSA_1 - SACp_inl_2544_val__SSA_1); 
              /*
               * WL_ASSIGN( SACp_inl_2575__flat_46__SSA_1, 0, SACp_inl_2598__type_507, 2, SACp_inl_2604__type_506, 2, SACp_inl_2603__type_508, SACp_inl_2602__type_509)
               */
              SAC_TR_WL_PRINT( ("index vector [%d, %d] (== offset %d) -- offset %d -- assign", SACp_inl_2603__type_508, SACp_inl_2602__type_509, ( SAC_ND_A_SHAPE( SACp_inl_2598__type_507, 1) * SACp_inl_2603__type_508 + SACp_inl_2602__type_509 ), SAC_WL_OFFSET( SACp_inl_2598__type_507)));
              SAC_ASSURE_TYPE( (SAC_ND_A_DIM( SACp_inl_2575__flat_46__SSA_1) == (SAC_ND_A_DIM( SACp_inl_2598__type_507) - 2)), ("WL expression with illegal dimension found!"));
              SAC_ASSURE_TYPE( (SAC_ND_A_SIZE( SACp_inl_2575__flat_46__SSA_1) == SAC_WL_SHAPE_FACTOR( SACp_inl_2598__type_507, 1)), ("WL expression with illegal size found!"));
              SAC_ND_WRITE_ARRAY( SACp_inl_2598__type_507, SAC_WL_OFFSET( SACp_inl_2598__type_507)) = SACp_inl_2575__flat_46__SSA_1;
              SAC_WL_OFFSET( SACp_inl_2598__type_507)++;

            SAC_WL_GRID_UNROLL_END( 1, SACp_inl_2604__type_506, SACp_inl_2602__type_509, 0, 1)
          SAC_WL_STRIDE_LOOP_END( 1, SACp_inl_2604__type_506, SACp_inl_2602__type_509, 1, 2, 1)
        SAC_WL_GRID_UNROLL_END( 0, SACp_inl_2604__type_506, SACp_inl_2603__type_508, 0, 1)
      SAC_WL_STRIDE_LOOP_END( 0, SACp_inl_2604__type_506, SACp_inl_2603__type_508, 8, 16, 1)
      /*
       * MT_SCHEDULER_END( 0, 2, 0, 0, 16, 2)
       */


      /*
       * WL_END__OFFSET( SACp_inl_2598__type_507, 2, SACp_inl_2604__type_506, 2)
       */
    }

  SAC_PF_END_WITH( genarray)
  SAC_ND_DEC_RC_FREE_ARRAY( SACl_fft_left, 1)
  SAC_ND_DEC_RC_FREE_ARRAY( SACl_fft_right, 1)
  SAC_ND_DEC_RC_FREE_ARRAY( SACl_rofu, 1)
  /*
   * ND_FUN_RET( , 1, out_rc, SACp_inl_2598__type_507, SAC__arg_1)
   */
  SAC_ND_RET_out_rc( SACp_inl_2598__type_507, SAC__arg_1)
  return;
}

/*
 * ND_FUN_DEC( SACf_FFT1d__d___MAIN__cpx_32___MAIN__cpx_16, void, 4, out_rc, double *, SAC__arg_1, in, double, SACl_dir, in_rc, double *, SACl_v, in_rc, double *, SACl_rofu)
 */
void SACf_FFT1d__d___MAIN__cpx_32___MAIN__cpx_16( SAC_ND_PARAM_out_rc( double *, SAC__arg_1), SAC_ND_PARAM_in( double, SACl_dir), SAC_ND_PARAM_in_rc( double *, SACl_v), SAC_ND_PARAM_in_rc( double *, SACl_rofu))
{ 
  double SACp_esd_4584; 
  double SACp_esd_4583; 
  double SACp_esd_4582; 
  double SACp_esd_4581; 
  double SACp_inl_4567_array_elem__SSA_1; 
  int SACp_inl_4546__flat_404_32_2__; 
  int SACp_inl_4545__flat_403_32_2__; 
  int SACp_esd_3852_16_2__; 
  int SACp_esd_3850_16_2__; 
  /*
   * ND_KS_DECL_ARRAY( double, SACl_fft_right, 2, 16, 2)
   */
  double *SACl_fft_right;
  int SAC_ND_A_RC( SACl_fft_right);
  const int SAC_ND_A_SIZE( SACl_fft_right) = 16*2;
  const int SAC_ND_A_DIM( SACl_fft_right) = 2;
  const int SAC_ND_A_SHAPE( SACl_fft_right, 0) = 16;
  const int SAC_ND_A_SHAPE( SACl_fft_right, 1) = 2;

  /*
   * ND_KS_DECL_ARRAY( double, SACl_fft_left, 2, 16, 2)
   */
  double *SACl_fft_left;
  int SAC_ND_A_RC( SACl_fft_left);
  const int SAC_ND_A_SIZE( SACl_fft_left) = 16*2;
  const int SAC_ND_A_DIM( SACl_fft_left) = 2;
  const int SAC_ND_A_SHAPE( SACl_fft_left, 0) = 16;
  const int SAC_ND_A_SHAPE( SACl_fft_left, 1) = 2;

  /*
   * ND_KS_DECL_ARRAY( int, SACp_inl_2787__type_525, 1, 2)
   */
  int *SACp_inl_2787__type_525;
  int SAC_ND_A_RC( SACp_inl_2787__type_525);
  const int SAC_ND_A_SIZE( SACp_inl_2787__type_525) = 2;
  const int SAC_ND_A_DIM( SACp_inl_2787__type_525) = 1;
  const int SAC_ND_A_SHAPE( SACp_inl_2787__type_525, 0) = 2;

  int SACp_inl_2787__type_525_16_2__; 
  int SACp_inl_2786__type_527; 
  int SACp_inl_2785__type_528; 
  int SACp_inl_2783__type_522_16_2__; 
  /*
   * ND_KS_DECL_ARRAY( double, SACp_inl_2781__type_526, 2, 32, 2)
   */
  double *SACp_inl_2781__type_526;
  int SAC_ND_A_RC( SACp_inl_2781__type_526);
  const int SAC_ND_A_SIZE( SACp_inl_2781__type_526) = 32*2;
  const int SAC_ND_A_DIM( SACp_inl_2781__type_526) = 2;
  const int SAC_ND_A_SHAPE( SACp_inl_2781__type_526, 0) = 32;
  const int SAC_ND_A_SHAPE( SACp_inl_2781__type_526, 1) = 2;

  double SACp_inl_2771__flat_40; 
  double SACp_inl_2770__flat_39; 
  double SACp_inl_2759__flat_47; 
  double SACp_inl_2758__flat_46; 
  int SACp_inl_2735__flat_65_16_2__; 
  double SACp_inl_2734__flat_64; 
  double SACp_inl_2732__flat_62; 
  double SACp_inl_2731__flat_61; 
  double SACp_inl_2730__flat_60; 
  double SACp_inl_2729__flat_59; 
  double SACp_inl_2728__flat_58; 
  double SACp_inl_2727_val; 
  int SACp_inl_2722__flat_74_16_2__; 
  double SACp_inl_2721__flat_73; 
  double SACp_inl_2720__flat_72; 
  double SACp_inl_2719__flat_71; 
  double SACp_inl_2718__flat_70; 
  double SACp_inl_2716__flat_68; 
  double SACp_inl_2715__flat_67; 
  /*
   * ND_KS_DECL_ARRAY( int, SACp_inl_2705__flat_108_iv, 1, 2)
   */
  int *SACp_inl_2705__flat_108_iv;
  int SAC_ND_A_RC( SACp_inl_2705__flat_108_iv);
  const int SAC_ND_A_SIZE( SACp_inl_2705__flat_108_iv) = 2;
  const int SAC_ND_A_DIM( SACp_inl_2705__flat_108_iv) = 1;
  const int SAC_ND_A_SHAPE( SACp_inl_2705__flat_108_iv, 0) = 2;

  int SACp_inl_2704__type_427; 
  int SACp_inl_2703__type_428; 
  int SACp_inl_2698__flat_111; 
  int SACp_inl_2697__flat_110_16_2__; 
  double SACp_inl_2696__flat_109; 
  /*
   * ND_KS_DECL_ARRAY( double, SACp_inl_2695_rn, 2, 8, 2)
   */
  double *SACp_inl_2695_rn;
  int SAC_ND_A_RC( SACp_inl_2695_rn);
  const int SAC_ND_A_SIZE( SACp_inl_2695_rn) = 8*2;
  const int SAC_ND_A_DIM( SACp_inl_2695_rn) = 2;
  const int SAC_ND_A_SHAPE( SACp_inl_2695_rn, 0) = 8;
  const int SAC_ND_A_SHAPE( SACp_inl_2695_rn, 1) = 2;

  /*
   * ND_KS_DECL_ARRAY( int, SACp_inl_2686__flat_108_iv, 1, 2)
   */
  int *SACp_inl_2686__flat_108_iv;
  int SAC_ND_A_RC( SACp_inl_2686__flat_108_iv);
  const int SAC_ND_A_SIZE( SACp_inl_2686__flat_108_iv) = 2;
  const int SAC_ND_A_DIM( SACp_inl_2686__flat_108_iv) = 1;
  const int SAC_ND_A_SHAPE( SACp_inl_2686__flat_108_iv, 0) = 2;

  int SACp_inl_2685__type_424; 
  int SACp_inl_2684__type_425; 
  int SACp_inl_2679__flat_111; 
  int SACp_inl_2678__flat_110_32_2__; 
  /*
   * ND_KS_DECL_ARRAY( double, SACp_inl_2676_rn, 2, 16, 2)
   */
  double *SACp_inl_2676_rn;
  int SAC_ND_A_RC( SACp_inl_2676_rn);
  const int SAC_ND_A_SIZE( SACp_inl_2676_rn) = 16*2;
  const int SAC_ND_A_DIM( SACp_inl_2676_rn) = 2;
  const int SAC_ND_A_SHAPE( SACp_inl_2676_rn, 0) = 16;
  const int SAC_ND_A_SHAPE( SACp_inl_2676_rn, 1) = 2;

  /*
   * ND_KS_DECL_ARRAY( int, SACp_inl_2629__flat_108_iv, 1, 2)
   */
  int *SACp_inl_2629__flat_108_iv;
  int SAC_ND_A_RC( SACp_inl_2629__flat_108_iv);
  const int SAC_ND_A_SIZE( SACp_inl_2629__flat_108_iv) = 2;
  const int SAC_ND_A_DIM( SACp_inl_2629__flat_108_iv) = 1;
  const int SAC_ND_A_SHAPE( SACp_inl_2629__flat_108_iv, 0) = 2;

  int SACp_inl_2628__type_421; 
  int SACp_inl_2627__type_422; 
  int SACp_inl_2622__flat_111; 
  int SACp_inl_2621__flat_110_32_2__; 
  double SACp_inl_2620__flat_109; 
  /*
   * ND_KS_DECL_ARRAY( double, SACp_inl_2619_rn, 2, 16, 2)
   */
  double *SACp_inl_2619_rn;
  int SAC_ND_A_RC( SACp_inl_2619_rn);
  const int SAC_ND_A_SIZE( SACp_inl_2619_rn) = 16*2;
  const int SAC_ND_A_DIM( SACp_inl_2619_rn) = 2;
  const int SAC_ND_A_SHAPE( SACp_inl_2619_rn, 0) = 16;
  const int SAC_ND_A_SHAPE( SACp_inl_2619_rn, 1) = 2;

  int SACp_inl_2741_lb_imag__SSA_1_16_2__; 
  double SACp_inl_2727_val__SSA_1; 
  int SACp_inl_2783__type_522__SSA_1_16_2__; 
  double SACp_inl_2759__flat_47__SSA_1; 
  double SACp_inl_2758__flat_46__SSA_1; 
  int SACp_inl_2735__flat_65__SSA_1_16_2__; 
  double SACp_inl_2734__flat_64__SSA_1; 
  double SACp_inl_2732__flat_62__SSA_1; 
  double SACp_inl_2731__flat_61__SSA_1; 
  double SACp_inl_2730__flat_60__SSA_1; 
  double SACp_inl_2729__flat_59__SSA_1; 
  double SACp_inl_2728__flat_58__SSA_1; 
  double SACp_inl_2727_val__SSA_2; 
  int SACp_inl_2722__flat_74__SSA_1_16_2__; 
  double SACp_inl_2721__flat_73__SSA_1; 
  double SACp_inl_2720__flat_72__SSA_1; 
  double SACp_inl_2719__flat_71__SSA_1; 
  double SACp_inl_2718__flat_70__SSA_1; 
  double SACp_inl_2716__flat_68__SSA_1; 
  double SACp_inl_2715__flat_67__SSA_1; 
  double SACp_inl_2727_val__SSA_3; 
  double SACp_inl_2771__flat_40__SSA_1; 
  double SACp_inl_2770__flat_39__SSA_1; 

  /*
   * ND_KS_DECL_ARRAY_ARG( SACl_rofu, 2, 16, 2)
   */
  const int SAC_ND_A_SIZE( SACl_rofu) = 16*2;
  const int SAC_ND_A_DIM( SACl_rofu) = 2;
  const int SAC_ND_A_SHAPE( SACl_rofu, 0) = 16;
  const int SAC_ND_A_SHAPE( SACl_rofu, 1) = 2;

  /*
   * ND_KS_DECL_ARRAY_ARG( SACl_v, 2, 32, 2)
   */
  const int SAC_ND_A_SIZE( SACl_v) = 32*2;
  const int SAC_ND_A_DIM( SACl_v) = 2;
  const int SAC_ND_A_SHAPE( SACl_v, 0) = 32;
  const int SAC_ND_A_SHAPE( SACl_v, 1) = 2;

  SAC_ND_ALLOC_ARRAY( double, SACp_inl_2619_rn, 1)
  SAC_PF_BEGIN_WITH( genarray)
    /*
     * WL_BEGIN__OFFSET( SACp_inl_2619_rn, 2, SACp_inl_2629__flat_108_iv, 2)
     */
    { int SAC_WL_OFFSET( SACp_inl_2619_rn);
      int SAC_WL_MT_SCHEDULE_START( 0);
      int SAC_WL_MT_SCHEDULE_STOP( 0);
      int SAC_WL_MT_SCHEDULE_START( 1);
      int SAC_WL_MT_SCHEDULE_STOP( 1);
      int SAC_i;
      int SAC_WL_SHAPE_FACTOR( SACp_inl_2619_rn, 0) = 1 * SAC_ND_A_SHAPE( SACp_inl_2619_rn, 1);
      int SAC_WL_SHAPE_FACTOR( SACp_inl_2619_rn, 1) = 1;

      /*
       * MT_SCHEDULER_BEGIN( 0, 2, 0, 0, 16, 2)
       */
      SAC_WL_MT_SCHEDULE_START( 0) = 0;
      SAC_WL_MT_SCHEDULE_STOP( 0) = 16;
      SAC_WL_MT_SCHEDULE_START( 1) = 0;
      SAC_WL_MT_SCHEDULE_STOP( 1) = 2;

      /*
       * WL_INIT_OFFSET( SACp_inl_2619_rn, 2, SACp_inl_2629__flat_108_iv, 2)
       */
      SAC_WL_OFFSET( SACp_inl_2619_rn)
        = SAC_WL_MT_SCHEDULE_START( 0) * SAC_WL_SHAPE_FACTOR( SACp_inl_2619_rn, 0)
        + SAC_WL_MT_SCHEDULE_START( 1) * SAC_WL_SHAPE_FACTOR( SACp_inl_2619_rn, 1);

      SAC_WL_STRIDE_LOOP0_BEGIN( 0, SACp_inl_2629__flat_108_iv, SACp_inl_2628__type_421, 0, 16, 1)
        SAC_WL_GRID_UNROLL_BEGIN( 0, SACp_inl_2629__flat_108_iv, SACp_inl_2628__type_421, 0, 1)
          SAC_WL_STRIDE_LOOP0_BEGIN( 1, SACp_inl_2629__flat_108_iv, SACp_inl_2627__type_422, 0, 2, 1)
            SAC_WL_GRID_UNROLL_BEGIN( 1, SACp_inl_2629__flat_108_iv, SACp_inl_2627__type_422, 0, 1)
              SACp_inl_2622__flat_111 = (2 * SACp_inl_2628__type_421); 
              SACp_inl_2621__flat_110_32_2__ = ((SACp_inl_2622__flat_111 * 2) + SACp_inl_2627__type_422); 
              SAC_ND_IDX_SEL_S( SACp_inl_2621__flat_110_32_2__, SACl_v, SACp_inl_2620__flat_109)
              /*
               * WL_ASSIGN( SACp_inl_2620__flat_109, 0, SACp_inl_2619_rn, 2, SACp_inl_2629__flat_108_iv, 2, SACp_inl_2628__type_421, SACp_inl_2627__type_422)
               */
              SAC_TR_WL_PRINT( ("index vector [%d, %d] (== offset %d) -- offset %d -- assign", SACp_inl_2628__type_421, SACp_inl_2627__type_422, ( SAC_ND_A_SHAPE( SACp_inl_2619_rn, 1) * SACp_inl_2628__type_421 + SACp_inl_2627__type_422 ), SAC_WL_OFFSET( SACp_inl_2619_rn)));
              SAC_ASSURE_TYPE( (SAC_ND_A_DIM( SACp_inl_2620__flat_109) == (SAC_ND_A_DIM( SACp_inl_2619_rn) - 2)), ("WL expression with illegal dimension found!"));
              SAC_ASSURE_TYPE( (SAC_ND_A_SIZE( SACp_inl_2620__flat_109) == SAC_WL_SHAPE_FACTOR( SACp_inl_2619_rn, 1)), ("WL expression with illegal size found!"));
              SAC_ND_WRITE_ARRAY( SACp_inl_2619_rn, SAC_WL_OFFSET( SACp_inl_2619_rn)) = SACp_inl_2620__flat_109;
              SAC_WL_OFFSET( SACp_inl_2619_rn)++;

            SAC_WL_GRID_UNROLL_END( 1, SACp_inl_2629__flat_108_iv, SACp_inl_2627__type_422, 0, 1)
          SAC_WL_STRIDE_LOOP_END( 1, SACp_inl_2629__flat_108_iv, SACp_inl_2627__type_422, 0, 2, 1)
        SAC_WL_GRID_UNROLL_END( 0, SACp_inl_2629__flat_108_iv, SACp_inl_2628__type_421, 0, 1)
      SAC_WL_STRIDE_LOOP_END( 0, SACp_inl_2629__flat_108_iv, SACp_inl_2628__type_421, 0, 16, 1)
      /*
       * MT_SCHEDULER_END( 0, 2, 0, 0, 16, 2)
       */


      /*
       * WL_END__OFFSET( SACp_inl_2619_rn, 2, SACp_inl_2629__flat_108_iv, 2)
       */
    }

  SAC_PF_END_WITH( genarray)
  SACp_inl_4546__flat_404_32_2__ = ((1 * 2) + 0); 
  SAC_ND_ALLOC_ARRAY( double, SACp_inl_2676_rn, 1)
  SAC_PF_BEGIN_WITH( genarray)
    /*
     * WL_BEGIN__OFFSET( SACp_inl_2676_rn, 2, SACp_inl_2686__flat_108_iv, 2)
     */
    { int SAC_WL_OFFSET( SACp_inl_2676_rn);
      int SAC_WL_MT_SCHEDULE_START( 0);
      int SAC_WL_MT_SCHEDULE_STOP( 0);
      int SAC_WL_MT_SCHEDULE_START( 1);
      int SAC_WL_MT_SCHEDULE_STOP( 1);
      int SAC_i;
      int SAC_WL_SHAPE_FACTOR( SACp_inl_2676_rn, 0) = 1 * SAC_ND_A_SHAPE( SACp_inl_2676_rn, 1);
      int SAC_WL_SHAPE_FACTOR( SACp_inl_2676_rn, 1) = 1;

      /*
       * MT_SCHEDULER_BEGIN( 0, 2, 0, 0, 16, 2)
       */
      SAC_WL_MT_SCHEDULE_START( 0) = 0;
      SAC_WL_MT_SCHEDULE_STOP( 0) = 16;
      SAC_WL_MT_SCHEDULE_START( 1) = 0;
      SAC_WL_MT_SCHEDULE_STOP( 1) = 2;

      /*
       * WL_INIT_OFFSET( SACp_inl_2676_rn, 2, SACp_inl_2686__flat_108_iv, 2)
       */
      SAC_WL_OFFSET( SACp_inl_2676_rn)
        = SAC_WL_MT_SCHEDULE_START( 0) * SAC_WL_SHAPE_FACTOR( SACp_inl_2676_rn, 0)
        + SAC_WL_MT_SCHEDULE_START( 1) * SAC_WL_SHAPE_FACTOR( SACp_inl_2676_rn, 1);

      SAC_WL_STRIDE_LOOP0_BEGIN( 0, SACp_inl_2686__flat_108_iv, SACp_inl_2685__type_424, 0, 16, 1)
        SAC_WL_GRID_UNROLL_BEGIN( 0, SACp_inl_2686__flat_108_iv, SACp_inl_2685__type_424, 0, 1)
          SAC_WL_STRIDE_LOOP0_BEGIN( 1, SACp_inl_2686__flat_108_iv, SACp_inl_2684__type_425, 0, 2, 1)
            SAC_WL_GRID_UNROLL_BEGIN( 1, SACp_inl_2686__flat_108_iv, SACp_inl_2684__type_425, 0, 1)
              SACp_inl_2679__flat_111 = (2 * SACp_inl_2685__type_424); 
              SACp_inl_2678__flat_110_32_2__ = ((SACp_inl_2679__flat_111 * 2) + SACp_inl_2684__type_425); 
              SACp_inl_4545__flat_403_32_2__ = (SACp_inl_4546__flat_404_32_2__ + SACp_inl_2678__flat_110_32_2__); 
              SAC_ND_IDX_SEL_S( SACp_inl_4545__flat_403_32_2__, SACl_v, SACp_inl_4567_array_elem__SSA_1)
              /*
               * WL_ASSIGN( SACp_inl_4567_array_elem__SSA_1, 0, SACp_inl_2676_rn, 2, SACp_inl_2686__flat_108_iv, 2, SACp_inl_2685__type_424, SACp_inl_2684__type_425)
               */
              SAC_TR_WL_PRINT( ("index vector [%d, %d] (== offset %d) -- offset %d -- assign", SACp_inl_2685__type_424, SACp_inl_2684__type_425, ( SAC_ND_A_SHAPE( SACp_inl_2676_rn, 1) * SACp_inl_2685__type_424 + SACp_inl_2684__type_425 ), SAC_WL_OFFSET( SACp_inl_2676_rn)));
              SAC_ASSURE_TYPE( (SAC_ND_A_DIM( SACp_inl_4567_array_elem__SSA_1) == (SAC_ND_A_DIM( SACp_inl_2676_rn) - 2)), ("WL expression with illegal dimension found!"));
              SAC_ASSURE_TYPE( (SAC_ND_A_SIZE( SACp_inl_4567_array_elem__SSA_1) == SAC_WL_SHAPE_FACTOR( SACp_inl_2676_rn, 1)), ("WL expression with illegal size found!"));
              SAC_ND_WRITE_ARRAY( SACp_inl_2676_rn, SAC_WL_OFFSET( SACp_inl_2676_rn)) = SACp_inl_4567_array_elem__SSA_1;
              SAC_WL_OFFSET( SACp_inl_2676_rn)++;

            SAC_WL_GRID_UNROLL_END( 1, SACp_inl_2686__flat_108_iv, SACp_inl_2684__type_425, 0, 1)
          SAC_WL_STRIDE_LOOP_END( 1, SACp_inl_2686__flat_108_iv, SACp_inl_2684__type_425, 0, 2, 1)
        SAC_WL_GRID_UNROLL_END( 0, SACp_inl_2686__flat_108_iv, SACp_inl_2685__type_424, 0, 1)
      SAC_WL_STRIDE_LOOP_END( 0, SACp_inl_2686__flat_108_iv, SACp_inl_2685__type_424, 0, 16, 1)
      /*
       * MT_SCHEDULER_END( 0, 2, 0, 0, 16, 2)
       */


      /*
       * WL_END__OFFSET( SACp_inl_2676_rn, 2, SACp_inl_2686__flat_108_iv, 2)
       */
    }

  SAC_PF_END_WITH( genarray)
  SAC_ND_DEC_RC_FREE_ARRAY( SACl_v, 1)
  SAC_ND_ALLOC_ARRAY( double, SACp_inl_2695_rn, 1)
  SAC_PF_BEGIN_WITH( genarray)
    /*
     * WL_BEGIN__OFFSET( SACp_inl_2695_rn, 2, SACp_inl_2705__flat_108_iv, 2)
     */
    { int SAC_WL_OFFSET( SACp_inl_2695_rn);
      int SAC_WL_MT_SCHEDULE_START( 0);
      int SAC_WL_MT_SCHEDULE_STOP( 0);
      int SAC_WL_MT_SCHEDULE_START( 1);
      int SAC_WL_MT_SCHEDULE_STOP( 1);
      int SAC_i;
      int SAC_WL_SHAPE_FACTOR( SACp_inl_2695_rn, 0) = 1 * SAC_ND_A_SHAPE( SACp_inl_2695_rn, 1);
      int SAC_WL_SHAPE_FACTOR( SACp_inl_2695_rn, 1) = 1;

      /*
       * MT_SCHEDULER_BEGIN( 0, 2, 0, 0, 8, 2)
       */
      SAC_WL_MT_SCHEDULE_START( 0) = 0;
      SAC_WL_MT_SCHEDULE_STOP( 0) = 8;
      SAC_WL_MT_SCHEDULE_START( 1) = 0;
      SAC_WL_MT_SCHEDULE_STOP( 1) = 2;

      /*
       * WL_INIT_OFFSET( SACp_inl_2695_rn, 2, SACp_inl_2705__flat_108_iv, 2)
       */
      SAC_WL_OFFSET( SACp_inl_2695_rn)
        = SAC_WL_MT_SCHEDULE_START( 0) * SAC_WL_SHAPE_FACTOR( SACp_inl_2695_rn, 0)
        + SAC_WL_MT_SCHEDULE_START( 1) * SAC_WL_SHAPE_FACTOR( SACp_inl_2695_rn, 1);

      SAC_WL_STRIDE_LOOP0_BEGIN( 0, SACp_inl_2705__flat_108_iv, SACp_inl_2704__type_427, 0, 8, 1)
        SAC_WL_GRID_UNROLL_BEGIN( 0, SACp_inl_2705__flat_108_iv, SACp_inl_2704__type_427, 0, 1)
          SAC_WL_STRIDE_LOOP0_BEGIN( 1, SACp_inl_2705__flat_108_iv, SACp_inl_2703__type_428, 0, 2, 1)
            SAC_WL_GRID_UNROLL_BEGIN( 1, SACp_inl_2705__flat_108_iv, SACp_inl_2703__type_428, 0, 1)
              SACp_inl_2698__flat_111 = (2 * SACp_inl_2704__type_427); 
              SACp_inl_2697__flat_110_16_2__ = ((SACp_inl_2698__flat_111 * 2) + SACp_inl_2703__type_428); 
              SAC_ND_IDX_SEL_S( SACp_inl_2697__flat_110_16_2__, SACl_rofu, SACp_inl_2696__flat_109)
              /*
               * WL_ASSIGN( SACp_inl_2696__flat_109, 0, SACp_inl_2695_rn, 2, SACp_inl_2705__flat_108_iv, 2, SACp_inl_2704__type_427, SACp_inl_2703__type_428)
               */
              SAC_TR_WL_PRINT( ("index vector [%d, %d] (== offset %d) -- offset %d -- assign", SACp_inl_2704__type_427, SACp_inl_2703__type_428, ( SAC_ND_A_SHAPE( SACp_inl_2695_rn, 1) * SACp_inl_2704__type_427 + SACp_inl_2703__type_428 ), SAC_WL_OFFSET( SACp_inl_2695_rn)));
              SAC_ASSURE_TYPE( (SAC_ND_A_DIM( SACp_inl_2696__flat_109) == (SAC_ND_A_DIM( SACp_inl_2695_rn) - 2)), ("WL expression with illegal dimension found!"));
              SAC_ASSURE_TYPE( (SAC_ND_A_SIZE( SACp_inl_2696__flat_109) == SAC_WL_SHAPE_FACTOR( SACp_inl_2695_rn, 1)), ("WL expression with illegal size found!"));
              SAC_ND_WRITE_ARRAY( SACp_inl_2695_rn, SAC_WL_OFFSET( SACp_inl_2695_rn)) = SACp_inl_2696__flat_109;
              SAC_WL_OFFSET( SACp_inl_2695_rn)++;

            SAC_WL_GRID_UNROLL_END( 1, SACp_inl_2705__flat_108_iv, SACp_inl_2703__type_428, 0, 1)
          SAC_WL_STRIDE_LOOP_END( 1, SACp_inl_2705__flat_108_iv, SACp_inl_2703__type_428, 0, 2, 1)
        SAC_WL_GRID_UNROLL_END( 0, SACp_inl_2705__flat_108_iv, SACp_inl_2704__type_427, 0, 1)
      SAC_WL_STRIDE_LOOP_END( 0, SACp_inl_2705__flat_108_iv, SACp_inl_2704__type_427, 0, 8, 1)
      /*
       * MT_SCHEDULER_END( 0, 2, 0, 0, 8, 2)
       */


      /*
       * WL_END__OFFSET( SACp_inl_2695_rn, 2, SACp_inl_2705__flat_108_iv, 2)
       */
    }

  SAC_PF_END_WITH( genarray)
  SAC_ND_INC_RC( SACp_inl_2695_rn, 1)
  /*
   * ND_FUN_AP( SACf_FFT1d__d___MAIN__cpx_16___MAIN__cpx_8, , 4, out_rc, SACl_fft_left, in, SACl_dir, in_rc, SACp_inl_2619_rn, in_rc, SACp_inl_2695_rn)
   */
  SACf_FFT1d__d___MAIN__cpx_16___MAIN__cpx_8( SAC_ND_ARG_out_rc( SACl_fft_left), SAC_ND_ARG_in( SACl_dir), SAC_ND_ARG_in_rc( SACp_inl_2619_rn), SAC_ND_ARG_in_rc( SACp_inl_2695_rn));

  /*
   * ND_FUN_AP( SACf_FFT1d__d___MAIN__cpx_16___MAIN__cpx_8, , 4, out_rc, SACl_fft_right, in, SACl_dir, in_rc, SACp_inl_2676_rn, in_rc, SACp_inl_2695_rn)
   */
  SACf_FFT1d__d___MAIN__cpx_16___MAIN__cpx_8( SAC_ND_ARG_out_rc( SACl_fft_right), SAC_ND_ARG_in( SACl_dir), SAC_ND_ARG_in_rc( SACp_inl_2676_rn), SAC_ND_ARG_in_rc( SACp_inl_2695_rn));

  SACp_inl_2741_lb_imag__SSA_1_16_2__ = ((0 * 2) + 1); 
  SACp_esd_3850_16_2__ = ((-16 * 2) + 0); 
  SACp_esd_3852_16_2__ = ((0 * 2) + -1); 
  SAC_ND_ALLOC_ARRAY( double, SACp_inl_2781__type_526, 1)
  SAC_PF_BEGIN_WITH( genarray)
    /*
     * WL_BEGIN__OFFSET( SACp_inl_2781__type_526, 2, SACp_inl_2787__type_525, 2)
     */
    { int SAC_WL_OFFSET( SACp_inl_2781__type_526);
      int SAC_WL_MT_SCHEDULE_START( 0);
      int SAC_WL_MT_SCHEDULE_STOP( 0);
      int SAC_WL_MT_SCHEDULE_START( 1);
      int SAC_WL_MT_SCHEDULE_STOP( 1);
      int SAC_i;
      int SAC_WL_SHAPE_FACTOR( SACp_inl_2781__type_526, 0) = 1 * SAC_ND_A_SHAPE( SACp_inl_2781__type_526, 1);
      int SAC_WL_SHAPE_FACTOR( SACp_inl_2781__type_526, 1) = 1;

      /*
       * MT_SCHEDULER_BEGIN( 0, 2, 0, 0, 32, 2)
       */
      SAC_WL_MT_SCHEDULE_START( 0) = 0;
      SAC_WL_MT_SCHEDULE_STOP( 0) = 32;
      SAC_WL_MT_SCHEDULE_START( 1) = 0;
      SAC_WL_MT_SCHEDULE_STOP( 1) = 2;

      /*
       * WL_INIT_OFFSET( SACp_inl_2781__type_526, 2, SACp_inl_2787__type_525, 2)
       */
      SAC_WL_OFFSET( SACp_inl_2781__type_526)
        = SAC_WL_MT_SCHEDULE_START( 0) * SAC_WL_SHAPE_FACTOR( SACp_inl_2781__type_526, 0)
        + SAC_WL_MT_SCHEDULE_START( 1) * SAC_WL_SHAPE_FACTOR( SACp_inl_2781__type_526, 1);

      SAC_WL_STRIDE_LOOP0_BEGIN( 0, SACp_inl_2787__type_525, SACp_inl_2786__type_527, 0, 16, 1)
        SAC_WL_GRID_UNROLL_BEGIN( 0, SACp_inl_2787__type_525, SACp_inl_2786__type_527, 0, 1)
          SAC_WL_STRIDE_LOOP0_BEGIN( 1, SACp_inl_2787__type_525, SACp_inl_2785__type_528, 0, 1, 1)
            SAC_WL_GRID_UNROLL_BEGIN( 1, SACp_inl_2787__type_525, SACp_inl_2785__type_528, 0, 1)
              /*
               * ND_IDXS2OFFSET( SACp_inl_2787__type_525_16_2__, 2, SACp_inl_2786__type_527, SACp_inl_2785__type_528, 2, 16, 2)
               */
              SACp_inl_2787__type_525_16_2__ = ( 2* SACp_inl_2786__type_527+SACp_inl_2785__type_528) ;

              SACp_inl_2735__flat_65__SSA_1_16_2__ = (SACp_inl_2787__type_525_16_2__ + SACp_inl_2741_lb_imag__SSA_1_16_2__); 
              SAC_ND_IDX_SEL_S( SACp_inl_2735__flat_65__SSA_1_16_2__, SACl_rofu, SACp_inl_2734__flat_64__SSA_1)
              SAC_ND_IDX_SEL_S( SACp_inl_2735__flat_65__SSA_1_16_2__, SACl_fft_right, SACp_inl_2732__flat_62__SSA_1)
              SACp_inl_2731__flat_61__SSA_1 = (SACp_inl_2732__flat_62__SSA_1 * SACp_inl_2734__flat_64__SSA_1); 
              SAC_ND_IDX_SEL_S( SACp_inl_2787__type_525_16_2__, SACl_rofu, SACp_inl_2730__flat_60__SSA_1)
              SAC_ND_IDX_SEL_S( SACp_inl_2787__type_525_16_2__, SACl_fft_right, SACp_inl_2729__flat_59__SSA_1)
              SACp_inl_2728__flat_58__SSA_1 = (SACp_inl_2729__flat_59__SSA_1 * SACp_inl_2730__flat_60__SSA_1); 
              SACp_inl_2727_val__SSA_2 = (SACp_inl_2728__flat_58__SSA_1 - SACp_inl_2731__flat_61__SSA_1); 
              SAC_ND_IDX_SEL_S( SACp_inl_2787__type_525_16_2__, SACl_fft_left, SACp_inl_2771__flat_40)
              SACp_inl_2770__flat_39 = (SACp_inl_2771__flat_40 + SACp_inl_2727_val__SSA_2); 
              /*
               * WL_ASSIGN( SACp_inl_2770__flat_39, 0, SACp_inl_2781__type_526, 2, SACp_inl_2787__type_525, 2, SACp_inl_2786__type_527, SACp_inl_2785__type_528)
               */
              SAC_TR_WL_PRINT( ("index vector [%d, %d] (== offset %d) -- offset %d -- assign", SACp_inl_2786__type_527, SACp_inl_2785__type_528, ( SAC_ND_A_SHAPE( SACp_inl_2781__type_526, 1) * SACp_inl_2786__type_527 + SACp_inl_2785__type_528 ), SAC_WL_OFFSET( SACp_inl_2781__type_526)));
              SAC_ASSURE_TYPE( (SAC_ND_A_DIM( SACp_inl_2770__flat_39) == (SAC_ND_A_DIM( SACp_inl_2781__type_526) - 2)), ("WL expression with illegal dimension found!"));
              SAC_ASSURE_TYPE( (SAC_ND_A_SIZE( SACp_inl_2770__flat_39) == SAC_WL_SHAPE_FACTOR( SACp_inl_2781__type_526, 1)), ("WL expression with illegal size found!"));
              SAC_ND_WRITE_ARRAY( SACp_inl_2781__type_526, SAC_WL_OFFSET( SACp_inl_2781__type_526)) = SACp_inl_2770__flat_39;
              SAC_WL_OFFSET( SACp_inl_2781__type_526)++;

            SAC_WL_GRID_UNROLL_END( 1, SACp_inl_2787__type_525, SACp_inl_2785__type_528, 0, 1)
          SAC_WL_STRIDE_LOOP_END( 1, SACp_inl_2787__type_525, SACp_inl_2785__type_528, 0, 1, 1)
          SAC_WL_STRIDE_LOOP0_BEGIN( 1, SACp_inl_2787__type_525, SACp_inl_2785__type_528, 1, 2, 1)
            SAC_WL_GRID_UNROLL_BEGIN( 1, SACp_inl_2787__type_525, SACp_inl_2785__type_528, 0, 1)
              /*
               * ND_IDXS2OFFSET( SACp_inl_2787__type_525_16_2__, 2, SACp_inl_2786__type_527, SACp_inl_2785__type_528, 2, 16, 2)
               */
              SACp_inl_2787__type_525_16_2__ = ( 2* SACp_inl_2786__type_527+SACp_inl_2785__type_528) ;

              SACp_inl_2722__flat_74__SSA_1_16_2__ = (SACp_inl_2787__type_525_16_2__ + SACp_esd_3852_16_2__); 
              SAC_ND_IDX_SEL_S( SACp_inl_2722__flat_74__SSA_1_16_2__, SACl_rofu, SACp_inl_2721__flat_73__SSA_1)
              SAC_ND_IDX_SEL_S( SACp_inl_2787__type_525_16_2__, SACl_fft_right, SACp_inl_2720__flat_72__SSA_1)
              SACp_inl_2719__flat_71__SSA_1 = (SACp_inl_2720__flat_72__SSA_1 * SACp_inl_2721__flat_73__SSA_1); 
              SAC_ND_IDX_SEL_S( SACp_inl_2787__type_525_16_2__, SACl_rofu, SACp_inl_2718__flat_70__SSA_1)
              SAC_ND_IDX_SEL_S( SACp_inl_2722__flat_74__SSA_1_16_2__, SACl_fft_right, SACp_inl_2716__flat_68__SSA_1)
              SACp_inl_2715__flat_67__SSA_1 = (SACp_inl_2716__flat_68__SSA_1 * SACp_inl_2718__flat_70__SSA_1); 
              SACp_inl_2727_val__SSA_3 = (SACp_inl_2715__flat_67__SSA_1 + SACp_inl_2719__flat_71__SSA_1); 
              SAC_ND_IDX_SEL_S( SACp_inl_2787__type_525_16_2__, SACl_fft_left, SACp_inl_2771__flat_40__SSA_1)
              SACp_inl_2770__flat_39__SSA_1 = (SACp_inl_2771__flat_40__SSA_1 + SACp_inl_2727_val__SSA_3); 
              /*
               * WL_ASSIGN( SACp_inl_2770__flat_39__SSA_1, 0, SACp_inl_2781__type_526, 2, SACp_inl_2787__type_525, 2, SACp_inl_2786__type_527, SACp_inl_2785__type_528)
               */
              SAC_TR_WL_PRINT( ("index vector [%d, %d] (== offset %d) -- offset %d -- assign", SACp_inl_2786__type_527, SACp_inl_2785__type_528, ( SAC_ND_A_SHAPE( SACp_inl_2781__type_526, 1) * SACp_inl_2786__type_527 + SACp_inl_2785__type_528 ), SAC_WL_OFFSET( SACp_inl_2781__type_526)));
              SAC_ASSURE_TYPE( (SAC_ND_A_DIM( SACp_inl_2770__flat_39__SSA_1) == (SAC_ND_A_DIM( SACp_inl_2781__type_526) - 2)), ("WL expression with illegal dimension found!"));
              SAC_ASSURE_TYPE( (SAC_ND_A_SIZE( SACp_inl_2770__flat_39__SSA_1) == SAC_WL_SHAPE_FACTOR( SACp_inl_2781__type_526, 1)), ("WL expression with illegal size found!"));
              SAC_ND_WRITE_ARRAY( SACp_inl_2781__type_526, SAC_WL_OFFSET( SACp_inl_2781__type_526)) = SACp_inl_2770__flat_39__SSA_1;
              SAC_WL_OFFSET( SACp_inl_2781__type_526)++;

            SAC_WL_GRID_UNROLL_END( 1, SACp_inl_2787__type_525, SACp_inl_2785__type_528, 0, 1)
          SAC_WL_STRIDE_LOOP_END( 1, SACp_inl_2787__type_525, SACp_inl_2785__type_528, 1, 2, 1)
        SAC_WL_GRID_UNROLL_END( 0, SACp_inl_2787__type_525, SACp_inl_2786__type_527, 0, 1)
      SAC_WL_STRIDE_LOOP_END( 0, SACp_inl_2787__type_525, SACp_inl_2786__type_527, 0, 16, 1)
      SAC_WL_STRIDE_LOOP0_BEGIN( 0, SACp_inl_2787__type_525, SACp_inl_2786__type_527, 16, 32, 1)
        SAC_WL_GRID_UNROLL_BEGIN( 0, SACp_inl_2787__type_525, SACp_inl_2786__type_527, 0, 1)
          SAC_WL_STRIDE_LOOP0_BEGIN( 1, SACp_inl_2787__type_525, SACp_inl_2785__type_528, 0, 1, 1)
            SAC_WL_GRID_UNROLL_BEGIN( 1, SACp_inl_2787__type_525, SACp_inl_2785__type_528, 0, 1)
              /*
               * ND_IDXS2OFFSET( SACp_inl_2787__type_525_16_2__, 2, SACp_inl_2786__type_527, SACp_inl_2785__type_528, 2, 16, 2)
               */
              SACp_inl_2787__type_525_16_2__ = ( 2* SACp_inl_2786__type_527+SACp_inl_2785__type_528) ;

              SACp_inl_2783__type_522_16_2__ = (SACp_inl_2787__type_525_16_2__ + SACp_esd_3850_16_2__); 
              SACp_inl_2735__flat_65_16_2__ = (SACp_inl_2783__type_522_16_2__ + SACp_inl_2741_lb_imag__SSA_1_16_2__); 
              SAC_ND_IDX_SEL_S( SACp_inl_2735__flat_65_16_2__, SACl_rofu, SACp_inl_2734__flat_64)
              SAC_ND_IDX_SEL_S( SACp_inl_2735__flat_65_16_2__, SACl_fft_right, SACp_inl_2732__flat_62)
              SACp_inl_2731__flat_61 = (SACp_inl_2732__flat_62 * SACp_inl_2734__flat_64); 
              SAC_ND_IDX_SEL_S( SACp_inl_2783__type_522_16_2__, SACl_rofu, SACp_inl_2730__flat_60)
              SAC_ND_IDX_SEL_S( SACp_inl_2783__type_522_16_2__, SACl_fft_right, SACp_inl_2729__flat_59)
              SACp_inl_2728__flat_58 = (SACp_inl_2729__flat_59 * SACp_inl_2730__flat_60); 
              SACp_inl_2727_val = (SACp_inl_2728__flat_58 - SACp_inl_2731__flat_61); 
              SAC_ND_IDX_SEL_S( SACp_inl_2783__type_522_16_2__, SACl_fft_left, SACp_inl_2759__flat_47)
              SACp_inl_2758__flat_46 = (SACp_inl_2759__flat_47 - SACp_inl_2727_val); 
              /*
               * WL_ASSIGN( SACp_inl_2758__flat_46, 0, SACp_inl_2781__type_526, 2, SACp_inl_2787__type_525, 2, SACp_inl_2786__type_527, SACp_inl_2785__type_528)
               */
              SAC_TR_WL_PRINT( ("index vector [%d, %d] (== offset %d) -- offset %d -- assign", SACp_inl_2786__type_527, SACp_inl_2785__type_528, ( SAC_ND_A_SHAPE( SACp_inl_2781__type_526, 1) * SACp_inl_2786__type_527 + SACp_inl_2785__type_528 ), SAC_WL_OFFSET( SACp_inl_2781__type_526)));
              SAC_ASSURE_TYPE( (SAC_ND_A_DIM( SACp_inl_2758__flat_46) == (SAC_ND_A_DIM( SACp_inl_2781__type_526) - 2)), ("WL expression with illegal dimension found!"));
              SAC_ASSURE_TYPE( (SAC_ND_A_SIZE( SACp_inl_2758__flat_46) == SAC_WL_SHAPE_FACTOR( SACp_inl_2781__type_526, 1)), ("WL expression with illegal size found!"));
              SAC_ND_WRITE_ARRAY( SACp_inl_2781__type_526, SAC_WL_OFFSET( SACp_inl_2781__type_526)) = SACp_inl_2758__flat_46;
              SAC_WL_OFFSET( SACp_inl_2781__type_526)++;

            SAC_WL_GRID_UNROLL_END( 1, SACp_inl_2787__type_525, SACp_inl_2785__type_528, 0, 1)
          SAC_WL_STRIDE_LOOP_END( 1, SACp_inl_2787__type_525, SACp_inl_2785__type_528, 0, 1, 1)
          SAC_WL_STRIDE_LOOP0_BEGIN( 1, SACp_inl_2787__type_525, SACp_inl_2785__type_528, 1, 2, 1)
            SAC_WL_GRID_UNROLL_BEGIN( 1, SACp_inl_2787__type_525, SACp_inl_2785__type_528, 0, 1)
              /*
               * ND_IDXS2OFFSET( SACp_inl_2787__type_525_16_2__, 2, SACp_inl_2786__type_527, SACp_inl_2785__type_528, 2, 16, 2)
               */
              SACp_inl_2787__type_525_16_2__ = ( 2* SACp_inl_2786__type_527+SACp_inl_2785__type_528) ;

              SACp_inl_2783__type_522__SSA_1_16_2__ = (SACp_inl_2787__type_525_16_2__ + SACp_esd_3850_16_2__); 
              SACp_inl_2722__flat_74_16_2__ = (SACp_inl_2783__type_522__SSA_1_16_2__ + SACp_esd_3852_16_2__); 
              SAC_ND_IDX_SEL_S( SACp_inl_2722__flat_74_16_2__, SACl_rofu, SACp_inl_2721__flat_73)
              SAC_ND_IDX_SEL_S( SACp_inl_2783__type_522__SSA_1_16_2__, SACl_fft_right, SACp_inl_2720__flat_72)
              SACp_inl_2719__flat_71 = (SACp_inl_2720__flat_72 * SACp_inl_2721__flat_73); 
              SAC_ND_IDX_SEL_S( SACp_inl_2783__type_522__SSA_1_16_2__, SACl_rofu, SACp_inl_2718__flat_70)
              SAC_ND_IDX_SEL_S( SACp_inl_2722__flat_74_16_2__, SACl_fft_right, SACp_inl_2716__flat_68)
              SACp_inl_2715__flat_67 = (SACp_inl_2716__flat_68 * SACp_inl_2718__flat_70); 
              SACp_inl_2727_val__SSA_1 = (SACp_inl_2715__flat_67 + SACp_inl_2719__flat_71); 
              SAC_ND_IDX_SEL_S( SACp_inl_2783__type_522__SSA_1_16_2__, SACl_fft_left, SACp_inl_2759__flat_47__SSA_1)
              SACp_inl_2758__flat_46__SSA_1 = (SACp_inl_2759__flat_47__SSA_1 - SACp_inl_2727_val__SSA_1); 
              /*
               * WL_ASSIGN( SACp_inl_2758__flat_46__SSA_1, 0, SACp_inl_2781__type_526, 2, SACp_inl_2787__type_525, 2, SACp_inl_2786__type_527, SACp_inl_2785__type_528)
               */
              SAC_TR_WL_PRINT( ("index vector [%d, %d] (== offset %d) -- offset %d -- assign", SACp_inl_2786__type_527, SACp_inl_2785__type_528, ( SAC_ND_A_SHAPE( SACp_inl_2781__type_526, 1) * SACp_inl_2786__type_527 + SACp_inl_2785__type_528 ), SAC_WL_OFFSET( SACp_inl_2781__type_526)));
              SAC_ASSURE_TYPE( (SAC_ND_A_DIM( SACp_inl_2758__flat_46__SSA_1) == (SAC_ND_A_DIM( SACp_inl_2781__type_526) - 2)), ("WL expression with illegal dimension found!"));
              SAC_ASSURE_TYPE( (SAC_ND_A_SIZE( SACp_inl_2758__flat_46__SSA_1) == SAC_WL_SHAPE_FACTOR( SACp_inl_2781__type_526, 1)), ("WL expression with illegal size found!"));
              SAC_ND_WRITE_ARRAY( SACp_inl_2781__type_526, SAC_WL_OFFSET( SACp_inl_2781__type_526)) = SACp_inl_2758__flat_46__SSA_1;
              SAC_WL_OFFSET( SACp_inl_2781__type_526)++;

            SAC_WL_GRID_UNROLL_END( 1, SACp_inl_2787__type_525, SACp_inl_2785__type_528, 0, 1)
          SAC_WL_STRIDE_LOOP_END( 1, SACp_inl_2787__type_525, SACp_inl_2785__type_528, 1, 2, 1)
        SAC_WL_GRID_UNROLL_END( 0, SACp_inl_2787__type_525, SACp_inl_2786__type_527, 0, 1)
      SAC_WL_STRIDE_LOOP_END( 0, SACp_inl_2787__type_525, SACp_inl_2786__type_527, 16, 32, 1)
      /*
       * MT_SCHEDULER_END( 0, 2, 0, 0, 32, 2)
       */


      /*
       * WL_END__OFFSET( SACp_inl_2781__type_526, 2, SACp_inl_2787__type_525, 2)
       */
    }

  SAC_PF_END_WITH( genarray)
  SAC_ND_DEC_RC_FREE_ARRAY( SACl_fft_left, 1)
  SAC_ND_DEC_RC_FREE_ARRAY( SACl_fft_right, 1)
  SAC_ND_DEC_RC_FREE_ARRAY( SACl_rofu, 1)
  /*
   * ND_FUN_RET( , 1, out_rc, SACp_inl_2781__type_526, SAC__arg_1)
   */
  SAC_ND_RET_out_rc( SACp_inl_2781__type_526, SAC__arg_1)
  return;
}

/*
 * ND_FUN_DEC( SACf_FFT1d__d___MAIN__cpx_64___MAIN__cpx_32, void, 4, out_rc, double *, SAC__arg_1, in, double, SACl_dir, in_rc, double *, SACl_v, in_rc, double *, SACl_rofu)
 */
void SACf_FFT1d__d___MAIN__cpx_64___MAIN__cpx_32( SAC_ND_PARAM_out_rc( double *, SAC__arg_1), SAC_ND_PARAM_in( double, SACl_dir), SAC_ND_PARAM_in_rc( double *, SACl_v), SAC_ND_PARAM_in_rc( double *, SACl_rofu))
{ 
  double SACp_esd_4654; 
  double SACp_esd_4653; 
  double SACp_esd_4652; 
  double SACp_esd_4651; 
  double SACp_inl_4637_array_elem__SSA_1; 
  int SACp_inl_4616__flat_404_64_2__; 
  int SACp_inl_4615__flat_403_64_2__; 
  int SACp_esd_3859_32_2__; 
  int SACp_esd_3857_32_2__; 
  /*
   * ND_KS_DECL_ARRAY( double, SACl_fft_right, 2, 32, 2)
   */
  double *SACl_fft_right;
  int SAC_ND_A_RC( SACl_fft_right);
  const int SAC_ND_A_SIZE( SACl_fft_right) = 32*2;
  const int SAC_ND_A_DIM( SACl_fft_right) = 2;
  const int SAC_ND_A_SHAPE( SACl_fft_right, 0) = 32;
  const int SAC_ND_A_SHAPE( SACl_fft_right, 1) = 2;

  /*
   * ND_KS_DECL_ARRAY( double, SACl_fft_left, 2, 32, 2)
   */
  double *SACl_fft_left;
  int SAC_ND_A_RC( SACl_fft_left);
  const int SAC_ND_A_SIZE( SACl_fft_left) = 32*2;
  const int SAC_ND_A_DIM( SACl_fft_left) = 2;
  const int SAC_ND_A_SHAPE( SACl_fft_left, 0) = 32;
  const int SAC_ND_A_SHAPE( SACl_fft_left, 1) = 2;

  /*
   * ND_KS_DECL_ARRAY( int, SACp_inl_2970__type_544, 1, 2)
   */
  int *SACp_inl_2970__type_544;
  int SAC_ND_A_RC( SACp_inl_2970__type_544);
  const int SAC_ND_A_SIZE( SACp_inl_2970__type_544) = 2;
  const int SAC_ND_A_DIM( SACp_inl_2970__type_544) = 1;
  const int SAC_ND_A_SHAPE( SACp_inl_2970__type_544, 0) = 2;

  int SACp_inl_2970__type_544_32_2__; 
  int SACp_inl_2969__type_546; 
  int SACp_inl_2968__type_547; 
  int SACp_inl_2966__type_541_32_2__; 
  /*
   * ND_KS_DECL_ARRAY( double, SACp_inl_2964__type_545, 2, 64, 2)
   */
  double *SACp_inl_2964__type_545;
  int SAC_ND_A_RC( SACp_inl_2964__type_545);
  const int SAC_ND_A_SIZE( SACp_inl_2964__type_545) = 64*2;
  const int SAC_ND_A_DIM( SACp_inl_2964__type_545) = 2;
  const int SAC_ND_A_SHAPE( SACp_inl_2964__type_545, 0) = 64;
  const int SAC_ND_A_SHAPE( SACp_inl_2964__type_545, 1) = 2;

  double SACp_inl_2954__flat_40; 
  double SACp_inl_2953__flat_39; 
  double SACp_inl_2942__flat_47; 
  double SACp_inl_2941__flat_46; 
  int SACp_inl_2918__flat_65_32_2__; 
  double SACp_inl_2917__flat_64; 
  double SACp_inl_2915__flat_62; 
  double SACp_inl_2914__flat_61; 
  double SACp_inl_2913__flat_60; 
  double SACp_inl_2912__flat_59; 
  double SACp_inl_2911__flat_58; 
  double SACp_inl_2910_val; 
  int SACp_inl_2905__flat_74_32_2__; 
  double SACp_inl_2904__flat_73; 
  double SACp_inl_2903__flat_72; 
  double SACp_inl_2902__flat_71; 
  double SACp_inl_2901__flat_70; 
  double SACp_inl_2899__flat_68; 
  double SACp_inl_2898__flat_67; 
  /*
   * ND_KS_DECL_ARRAY( int, SACp_inl_2888__flat_108_iv, 1, 2)
   */
  int *SACp_inl_2888__flat_108_iv;
  int SAC_ND_A_RC( SACp_inl_2888__flat_108_iv);
  const int SAC_ND_A_SIZE( SACp_inl_2888__flat_108_iv) = 2;
  const int SAC_ND_A_DIM( SACp_inl_2888__flat_108_iv) = 1;
  const int SAC_ND_A_SHAPE( SACp_inl_2888__flat_108_iv, 0) = 2;

  int SACp_inl_2887__type_418; 
  int SACp_inl_2886__type_419; 
  int SACp_inl_2881__flat_111; 
  int SACp_inl_2880__flat_110_32_2__; 
  double SACp_inl_2879__flat_109; 
  /*
   * ND_KS_DECL_ARRAY( double, SACp_inl_2878_rn, 2, 16, 2)
   */
  double *SACp_inl_2878_rn;
  int SAC_ND_A_RC( SACp_inl_2878_rn);
  const int SAC_ND_A_SIZE( SACp_inl_2878_rn) = 16*2;
  const int SAC_ND_A_DIM( SACp_inl_2878_rn) = 2;
  const int SAC_ND_A_SHAPE( SACp_inl_2878_rn, 0) = 16;
  const int SAC_ND_A_SHAPE( SACp_inl_2878_rn, 1) = 2;

  /*
   * ND_KS_DECL_ARRAY( int, SACp_inl_2869__flat_108_iv, 1, 2)
   */
  int *SACp_inl_2869__flat_108_iv;
  int SAC_ND_A_RC( SACp_inl_2869__flat_108_iv);
  const int SAC_ND_A_SIZE( SACp_inl_2869__flat_108_iv) = 2;
  const int SAC_ND_A_DIM( SACp_inl_2869__flat_108_iv) = 1;
  const int SAC_ND_A_SHAPE( SACp_inl_2869__flat_108_iv, 0) = 2;

  int SACp_inl_2868__type_415; 
  int SACp_inl_2867__type_416; 
  int SACp_inl_2862__flat_111; 
  int SACp_inl_2861__flat_110_64_2__; 
  /*
   * ND_KS_DECL_ARRAY( double, SACp_inl_2859_rn, 2, 32, 2)
   */
  double *SACp_inl_2859_rn;
  int SAC_ND_A_RC( SACp_inl_2859_rn);
  const int SAC_ND_A_SIZE( SACp_inl_2859_rn) = 32*2;
  const int SAC_ND_A_DIM( SACp_inl_2859_rn) = 2;
  const int SAC_ND_A_SHAPE( SACp_inl_2859_rn, 0) = 32;
  const int SAC_ND_A_SHAPE( SACp_inl_2859_rn, 1) = 2;

  /*
   * ND_KS_DECL_ARRAY( int, SACp_inl_2812__flat_108_iv, 1, 2)
   */
  int *SACp_inl_2812__flat_108_iv;
  int SAC_ND_A_RC( SACp_inl_2812__flat_108_iv);
  const int SAC_ND_A_SIZE( SACp_inl_2812__flat_108_iv) = 2;
  const int SAC_ND_A_DIM( SACp_inl_2812__flat_108_iv) = 1;
  const int SAC_ND_A_SHAPE( SACp_inl_2812__flat_108_iv, 0) = 2;

  int SACp_inl_2811__type_412; 
  int SACp_inl_2810__type_413; 
  int SACp_inl_2805__flat_111; 
  int SACp_inl_2804__flat_110_64_2__; 
  double SACp_inl_2803__flat_109; 
  /*
   * ND_KS_DECL_ARRAY( double, SACp_inl_2802_rn, 2, 32, 2)
   */
  double *SACp_inl_2802_rn;
  int SAC_ND_A_RC( SACp_inl_2802_rn);
  const int SAC_ND_A_SIZE( SACp_inl_2802_rn) = 32*2;
  const int SAC_ND_A_DIM( SACp_inl_2802_rn) = 2;
  const int SAC_ND_A_SHAPE( SACp_inl_2802_rn, 0) = 32;
  const int SAC_ND_A_SHAPE( SACp_inl_2802_rn, 1) = 2;

  int SACp_inl_2924_lb_imag__SSA_1_32_2__; 
  double SACp_inl_2910_val__SSA_1; 
  int SACp_inl_2966__type_541__SSA_1_32_2__; 
  double SACp_inl_2942__flat_47__SSA_1; 
  double SACp_inl_2941__flat_46__SSA_1; 
  int SACp_inl_2918__flat_65__SSA_1_32_2__; 
  double SACp_inl_2917__flat_64__SSA_1; 
  double SACp_inl_2915__flat_62__SSA_1; 
  double SACp_inl_2914__flat_61__SSA_1; 
  double SACp_inl_2913__flat_60__SSA_1; 
  double SACp_inl_2912__flat_59__SSA_1; 
  double SACp_inl_2911__flat_58__SSA_1; 
  double SACp_inl_2910_val__SSA_2; 
  int SACp_inl_2905__flat_74__SSA_1_32_2__; 
  double SACp_inl_2904__flat_73__SSA_1; 
  double SACp_inl_2903__flat_72__SSA_1; 
  double SACp_inl_2902__flat_71__SSA_1; 
  double SACp_inl_2901__flat_70__SSA_1; 
  double SACp_inl_2899__flat_68__SSA_1; 
  double SACp_inl_2898__flat_67__SSA_1; 
  double SACp_inl_2910_val__SSA_3; 
  double SACp_inl_2954__flat_40__SSA_1; 
  double SACp_inl_2953__flat_39__SSA_1; 

  /*
   * ND_KS_DECL_ARRAY_ARG( SACl_rofu, 2, 32, 2)
   */
  const int SAC_ND_A_SIZE( SACl_rofu) = 32*2;
  const int SAC_ND_A_DIM( SACl_rofu) = 2;
  const int SAC_ND_A_SHAPE( SACl_rofu, 0) = 32;
  const int SAC_ND_A_SHAPE( SACl_rofu, 1) = 2;

  /*
   * ND_KS_DECL_ARRAY_ARG( SACl_v, 2, 64, 2)
   */
  const int SAC_ND_A_SIZE( SACl_v) = 64*2;
  const int SAC_ND_A_DIM( SACl_v) = 2;
  const int SAC_ND_A_SHAPE( SACl_v, 0) = 64;
  const int SAC_ND_A_SHAPE( SACl_v, 1) = 2;

  SAC_ND_ALLOC_ARRAY( double, SACp_inl_2802_rn, 1)
  SAC_PF_BEGIN_WITH( genarray)
    /*
     * WL_BEGIN__OFFSET( SACp_inl_2802_rn, 2, SACp_inl_2812__flat_108_iv, 2)
     */
    { int SAC_WL_OFFSET( SACp_inl_2802_rn);
      int SAC_WL_MT_SCHEDULE_START( 0);
      int SAC_WL_MT_SCHEDULE_STOP( 0);
      int SAC_WL_MT_SCHEDULE_START( 1);
      int SAC_WL_MT_SCHEDULE_STOP( 1);
      int SAC_i;
      int SAC_WL_SHAPE_FACTOR( SACp_inl_2802_rn, 0) = 1 * SAC_ND_A_SHAPE( SACp_inl_2802_rn, 1);
      int SAC_WL_SHAPE_FACTOR( SACp_inl_2802_rn, 1) = 1;

      /*
       * MT_SCHEDULER_BEGIN( 0, 2, 0, 0, 32, 2)
       */
      SAC_WL_MT_SCHEDULE_START( 0) = 0;
      SAC_WL_MT_SCHEDULE_STOP( 0) = 32;
      SAC_WL_MT_SCHEDULE_START( 1) = 0;
      SAC_WL_MT_SCHEDULE_STOP( 1) = 2;

      /*
       * WL_INIT_OFFSET( SACp_inl_2802_rn, 2, SACp_inl_2812__flat_108_iv, 2)
       */
      SAC_WL_OFFSET( SACp_inl_2802_rn)
        = SAC_WL_MT_SCHEDULE_START( 0) * SAC_WL_SHAPE_FACTOR( SACp_inl_2802_rn, 0)
        + SAC_WL_MT_SCHEDULE_START( 1) * SAC_WL_SHAPE_FACTOR( SACp_inl_2802_rn, 1);

      SAC_WL_STRIDE_LOOP0_BEGIN( 0, SACp_inl_2812__flat_108_iv, SACp_inl_2811__type_412, 0, 32, 1)
        SAC_WL_GRID_UNROLL_BEGIN( 0, SACp_inl_2812__flat_108_iv, SACp_inl_2811__type_412, 0, 1)
          SAC_WL_STRIDE_LOOP0_BEGIN( 1, SACp_inl_2812__flat_108_iv, SACp_inl_2810__type_413, 0, 2, 1)
            SAC_WL_GRID_UNROLL_BEGIN( 1, SACp_inl_2812__flat_108_iv, SACp_inl_2810__type_413, 0, 1)
              SACp_inl_2805__flat_111 = (2 * SACp_inl_2811__type_412); 
              SACp_inl_2804__flat_110_64_2__ = ((SACp_inl_2805__flat_111 * 2) + SACp_inl_2810__type_413); 
              SAC_ND_IDX_SEL_S( SACp_inl_2804__flat_110_64_2__, SACl_v, SACp_inl_2803__flat_109)
              /*
               * WL_ASSIGN( SACp_inl_2803__flat_109, 0, SACp_inl_2802_rn, 2, SACp_inl_2812__flat_108_iv, 2, SACp_inl_2811__type_412, SACp_inl_2810__type_413)
               */
              SAC_TR_WL_PRINT( ("index vector [%d, %d] (== offset %d) -- offset %d -- assign", SACp_inl_2811__type_412, SACp_inl_2810__type_413, ( SAC_ND_A_SHAPE( SACp_inl_2802_rn, 1) * SACp_inl_2811__type_412 + SACp_inl_2810__type_413 ), SAC_WL_OFFSET( SACp_inl_2802_rn)));
              SAC_ASSURE_TYPE( (SAC_ND_A_DIM( SACp_inl_2803__flat_109) == (SAC_ND_A_DIM( SACp_inl_2802_rn) - 2)), ("WL expression with illegal dimension found!"));
              SAC_ASSURE_TYPE( (SAC_ND_A_SIZE( SACp_inl_2803__flat_109) == SAC_WL_SHAPE_FACTOR( SACp_inl_2802_rn, 1)), ("WL expression with illegal size found!"));
              SAC_ND_WRITE_ARRAY( SACp_inl_2802_rn, SAC_WL_OFFSET( SACp_inl_2802_rn)) = SACp_inl_2803__flat_109;
              SAC_WL_OFFSET( SACp_inl_2802_rn)++;

            SAC_WL_GRID_UNROLL_END( 1, SACp_inl_2812__flat_108_iv, SACp_inl_2810__type_413, 0, 1)
          SAC_WL_STRIDE_LOOP_END( 1, SACp_inl_2812__flat_108_iv, SACp_inl_2810__type_413, 0, 2, 1)
        SAC_WL_GRID_UNROLL_END( 0, SACp_inl_2812__flat_108_iv, SACp_inl_2811__type_412, 0, 1)
      SAC_WL_STRIDE_LOOP_END( 0, SACp_inl_2812__flat_108_iv, SACp_inl_2811__type_412, 0, 32, 1)
      /*
       * MT_SCHEDULER_END( 0, 2, 0, 0, 32, 2)
       */


      /*
       * WL_END__OFFSET( SACp_inl_2802_rn, 2, SACp_inl_2812__flat_108_iv, 2)
       */
    }

  SAC_PF_END_WITH( genarray)
  SACp_inl_4616__flat_404_64_2__ = ((1 * 2) + 0); 
  SAC_ND_ALLOC_ARRAY( double, SACp_inl_2859_rn, 1)
  SAC_PF_BEGIN_WITH( genarray)
    /*
     * WL_BEGIN__OFFSET( SACp_inl_2859_rn, 2, SACp_inl_2869__flat_108_iv, 2)
     */
    { int SAC_WL_OFFSET( SACp_inl_2859_rn);
      int SAC_WL_MT_SCHEDULE_START( 0);
      int SAC_WL_MT_SCHEDULE_STOP( 0);
      int SAC_WL_MT_SCHEDULE_START( 1);
      int SAC_WL_MT_SCHEDULE_STOP( 1);
      int SAC_i;
      int SAC_WL_SHAPE_FACTOR( SACp_inl_2859_rn, 0) = 1 * SAC_ND_A_SHAPE( SACp_inl_2859_rn, 1);
      int SAC_WL_SHAPE_FACTOR( SACp_inl_2859_rn, 1) = 1;

      /*
       * MT_SCHEDULER_BEGIN( 0, 2, 0, 0, 32, 2)
       */
      SAC_WL_MT_SCHEDULE_START( 0) = 0;
      SAC_WL_MT_SCHEDULE_STOP( 0) = 32;
      SAC_WL_MT_SCHEDULE_START( 1) = 0;
      SAC_WL_MT_SCHEDULE_STOP( 1) = 2;

      /*
       * WL_INIT_OFFSET( SACp_inl_2859_rn, 2, SACp_inl_2869__flat_108_iv, 2)
       */
      SAC_WL_OFFSET( SACp_inl_2859_rn)
        = SAC_WL_MT_SCHEDULE_START( 0) * SAC_WL_SHAPE_FACTOR( SACp_inl_2859_rn, 0)
        + SAC_WL_MT_SCHEDULE_START( 1) * SAC_WL_SHAPE_FACTOR( SACp_inl_2859_rn, 1);

      SAC_WL_STRIDE_LOOP0_BEGIN( 0, SACp_inl_2869__flat_108_iv, SACp_inl_2868__type_415, 0, 32, 1)
        SAC_WL_GRID_UNROLL_BEGIN( 0, SACp_inl_2869__flat_108_iv, SACp_inl_2868__type_415, 0, 1)
          SAC_WL_STRIDE_LOOP0_BEGIN( 1, SACp_inl_2869__flat_108_iv, SACp_inl_2867__type_416, 0, 2, 1)
            SAC_WL_GRID_UNROLL_BEGIN( 1, SACp_inl_2869__flat_108_iv, SACp_inl_2867__type_416, 0, 1)
              SACp_inl_2862__flat_111 = (2 * SACp_inl_2868__type_415); 
              SACp_inl_2861__flat_110_64_2__ = ((SACp_inl_2862__flat_111 * 2) + SACp_inl_2867__type_416); 
              SACp_inl_4615__flat_403_64_2__ = (SACp_inl_4616__flat_404_64_2__ + SACp_inl_2861__flat_110_64_2__); 
              SAC_ND_IDX_SEL_S( SACp_inl_4615__flat_403_64_2__, SACl_v, SACp_inl_4637_array_elem__SSA_1)
              /*
               * WL_ASSIGN( SACp_inl_4637_array_elem__SSA_1, 0, SACp_inl_2859_rn, 2, SACp_inl_2869__flat_108_iv, 2, SACp_inl_2868__type_415, SACp_inl_2867__type_416)
               */
              SAC_TR_WL_PRINT( ("index vector [%d, %d] (== offset %d) -- offset %d -- assign", SACp_inl_2868__type_415, SACp_inl_2867__type_416, ( SAC_ND_A_SHAPE( SACp_inl_2859_rn, 1) * SACp_inl_2868__type_415 + SACp_inl_2867__type_416 ), SAC_WL_OFFSET( SACp_inl_2859_rn)));
              SAC_ASSURE_TYPE( (SAC_ND_A_DIM( SACp_inl_4637_array_elem__SSA_1) == (SAC_ND_A_DIM( SACp_inl_2859_rn) - 2)), ("WL expression with illegal dimension found!"));
              SAC_ASSURE_TYPE( (SAC_ND_A_SIZE( SACp_inl_4637_array_elem__SSA_1) == SAC_WL_SHAPE_FACTOR( SACp_inl_2859_rn, 1)), ("WL expression with illegal size found!"));
              SAC_ND_WRITE_ARRAY( SACp_inl_2859_rn, SAC_WL_OFFSET( SACp_inl_2859_rn)) = SACp_inl_4637_array_elem__SSA_1;
              SAC_WL_OFFSET( SACp_inl_2859_rn)++;

            SAC_WL_GRID_UNROLL_END( 1, SACp_inl_2869__flat_108_iv, SACp_inl_2867__type_416, 0, 1)
          SAC_WL_STRIDE_LOOP_END( 1, SACp_inl_2869__flat_108_iv, SACp_inl_2867__type_416, 0, 2, 1)
        SAC_WL_GRID_UNROLL_END( 0, SACp_inl_2869__flat_108_iv, SACp_inl_2868__type_415, 0, 1)
      SAC_WL_STRIDE_LOOP_END( 0, SACp_inl_2869__flat_108_iv, SACp_inl_2868__type_415, 0, 32, 1)
      /*
       * MT_SCHEDULER_END( 0, 2, 0, 0, 32, 2)
       */


      /*
       * WL_END__OFFSET( SACp_inl_2859_rn, 2, SACp_inl_2869__flat_108_iv, 2)
       */
    }

  SAC_PF_END_WITH( genarray)
  SAC_ND_DEC_RC_FREE_ARRAY( SACl_v, 1)
  SAC_ND_ALLOC_ARRAY( double, SACp_inl_2878_rn, 1)
  SAC_PF_BEGIN_WITH( genarray)
    /*
     * WL_BEGIN__OFFSET( SACp_inl_2878_rn, 2, SACp_inl_2888__flat_108_iv, 2)
     */
    { int SAC_WL_OFFSET( SACp_inl_2878_rn);
      int SAC_WL_MT_SCHEDULE_START( 0);
      int SAC_WL_MT_SCHEDULE_STOP( 0);
      int SAC_WL_MT_SCHEDULE_START( 1);
      int SAC_WL_MT_SCHEDULE_STOP( 1);
      int SAC_i;
      int SAC_WL_SHAPE_FACTOR( SACp_inl_2878_rn, 0) = 1 * SAC_ND_A_SHAPE( SACp_inl_2878_rn, 1);
      int SAC_WL_SHAPE_FACTOR( SACp_inl_2878_rn, 1) = 1;

      /*
       * MT_SCHEDULER_BEGIN( 0, 2, 0, 0, 16, 2)
       */
      SAC_WL_MT_SCHEDULE_START( 0) = 0;
      SAC_WL_MT_SCHEDULE_STOP( 0) = 16;
      SAC_WL_MT_SCHEDULE_START( 1) = 0;
      SAC_WL_MT_SCHEDULE_STOP( 1) = 2;

      /*
       * WL_INIT_OFFSET( SACp_inl_2878_rn, 2, SACp_inl_2888__flat_108_iv, 2)
       */
      SAC_WL_OFFSET( SACp_inl_2878_rn)
        = SAC_WL_MT_SCHEDULE_START( 0) * SAC_WL_SHAPE_FACTOR( SACp_inl_2878_rn, 0)
        + SAC_WL_MT_SCHEDULE_START( 1) * SAC_WL_SHAPE_FACTOR( SACp_inl_2878_rn, 1);

      SAC_WL_STRIDE_LOOP0_BEGIN( 0, SACp_inl_2888__flat_108_iv, SACp_inl_2887__type_418, 0, 16, 1)
        SAC_WL_GRID_UNROLL_BEGIN( 0, SACp_inl_2888__flat_108_iv, SACp_inl_2887__type_418, 0, 1)
          SAC_WL_STRIDE_LOOP0_BEGIN( 1, SACp_inl_2888__flat_108_iv, SACp_inl_2886__type_419, 0, 2, 1)
            SAC_WL_GRID_UNROLL_BEGIN( 1, SACp_inl_2888__flat_108_iv, SACp_inl_2886__type_419, 0, 1)
              SACp_inl_2881__flat_111 = (2 * SACp_inl_2887__type_418); 
              SACp_inl_2880__flat_110_32_2__ = ((SACp_inl_2881__flat_111 * 2) + SACp_inl_2886__type_419); 
              SAC_ND_IDX_SEL_S( SACp_inl_2880__flat_110_32_2__, SACl_rofu, SACp_inl_2879__flat_109)
              /*
               * WL_ASSIGN( SACp_inl_2879__flat_109, 0, SACp_inl_2878_rn, 2, SACp_inl_2888__flat_108_iv, 2, SACp_inl_2887__type_418, SACp_inl_2886__type_419)
               */
              SAC_TR_WL_PRINT( ("index vector [%d, %d] (== offset %d) -- offset %d -- assign", SACp_inl_2887__type_418, SACp_inl_2886__type_419, ( SAC_ND_A_SHAPE( SACp_inl_2878_rn, 1) * SACp_inl_2887__type_418 + SACp_inl_2886__type_419 ), SAC_WL_OFFSET( SACp_inl_2878_rn)));
              SAC_ASSURE_TYPE( (SAC_ND_A_DIM( SACp_inl_2879__flat_109) == (SAC_ND_A_DIM( SACp_inl_2878_rn) - 2)), ("WL expression with illegal dimension found!"));
              SAC_ASSURE_TYPE( (SAC_ND_A_SIZE( SACp_inl_2879__flat_109) == SAC_WL_SHAPE_FACTOR( SACp_inl_2878_rn, 1)), ("WL expression with illegal size found!"));
              SAC_ND_WRITE_ARRAY( SACp_inl_2878_rn, SAC_WL_OFFSET( SACp_inl_2878_rn)) = SACp_inl_2879__flat_109;
              SAC_WL_OFFSET( SACp_inl_2878_rn)++;

            SAC_WL_GRID_UNROLL_END( 1, SACp_inl_2888__flat_108_iv, SACp_inl_2886__type_419, 0, 1)
          SAC_WL_STRIDE_LOOP_END( 1, SACp_inl_2888__flat_108_iv, SACp_inl_2886__type_419, 0, 2, 1)
        SAC_WL_GRID_UNROLL_END( 0, SACp_inl_2888__flat_108_iv, SACp_inl_2887__type_418, 0, 1)
      SAC_WL_STRIDE_LOOP_END( 0, SACp_inl_2888__flat_108_iv, SACp_inl_2887__type_418, 0, 16, 1)
      /*
       * MT_SCHEDULER_END( 0, 2, 0, 0, 16, 2)
       */


      /*
       * WL_END__OFFSET( SACp_inl_2878_rn, 2, SACp_inl_2888__flat_108_iv, 2)
       */
    }

  SAC_PF_END_WITH( genarray)
  SAC_ND_INC_RC( SACp_inl_2878_rn, 1)
  /*
   * ND_FUN_AP( SACf_FFT1d__d___MAIN__cpx_32___MAIN__cpx_16, , 4, out_rc, SACl_fft_left, in, SACl_dir, in_rc, SACp_inl_2802_rn, in_rc, SACp_inl_2878_rn)
   */
  SACf_FFT1d__d___MAIN__cpx_32___MAIN__cpx_16( SAC_ND_ARG_out_rc( SACl_fft_left), SAC_ND_ARG_in( SACl_dir), SAC_ND_ARG_in_rc( SACp_inl_2802_rn), SAC_ND_ARG_in_rc( SACp_inl_2878_rn));

  /*
   * ND_FUN_AP( SACf_FFT1d__d___MAIN__cpx_32___MAIN__cpx_16, , 4, out_rc, SACl_fft_right, in, SACl_dir, in_rc, SACp_inl_2859_rn, in_rc, SACp_inl_2878_rn)
   */
  SACf_FFT1d__d___MAIN__cpx_32___MAIN__cpx_16( SAC_ND_ARG_out_rc( SACl_fft_right), SAC_ND_ARG_in( SACl_dir), SAC_ND_ARG_in_rc( SACp_inl_2859_rn), SAC_ND_ARG_in_rc( SACp_inl_2878_rn));

  SACp_inl_2924_lb_imag__SSA_1_32_2__ = ((0 * 2) + 1); 
  SACp_esd_3857_32_2__ = ((-32 * 2) + 0); 
  SACp_esd_3859_32_2__ = ((0 * 2) + -1); 
  SAC_ND_ALLOC_ARRAY( double, SACp_inl_2964__type_545, 1)
  SAC_PF_BEGIN_WITH( genarray)
    /*
     * WL_BEGIN__OFFSET( SACp_inl_2964__type_545, 2, SACp_inl_2970__type_544, 2)
     */
    { int SAC_WL_OFFSET( SACp_inl_2964__type_545);
      int SAC_WL_MT_SCHEDULE_START( 0);
      int SAC_WL_MT_SCHEDULE_STOP( 0);
      int SAC_WL_MT_SCHEDULE_START( 1);
      int SAC_WL_MT_SCHEDULE_STOP( 1);
      int SAC_i;
      int SAC_WL_SHAPE_FACTOR( SACp_inl_2964__type_545, 0) = 1 * SAC_ND_A_SHAPE( SACp_inl_2964__type_545, 1);
      int SAC_WL_SHAPE_FACTOR( SACp_inl_2964__type_545, 1) = 1;

      /*
       * MT_SCHEDULER_BEGIN( 0, 2, 0, 0, 64, 2)
       */
      SAC_WL_MT_SCHEDULE_START( 0) = 0;
      SAC_WL_MT_SCHEDULE_STOP( 0) = 64;
      SAC_WL_MT_SCHEDULE_START( 1) = 0;
      SAC_WL_MT_SCHEDULE_STOP( 1) = 2;

      /*
       * WL_INIT_OFFSET( SACp_inl_2964__type_545, 2, SACp_inl_2970__type_544, 2)
       */
      SAC_WL_OFFSET( SACp_inl_2964__type_545)
        = SAC_WL_MT_SCHEDULE_START( 0) * SAC_WL_SHAPE_FACTOR( SACp_inl_2964__type_545, 0)
        + SAC_WL_MT_SCHEDULE_START( 1) * SAC_WL_SHAPE_FACTOR( SACp_inl_2964__type_545, 1);

      SAC_WL_STRIDE_LOOP0_BEGIN( 0, SACp_inl_2970__type_544, SACp_inl_2969__type_546, 0, 32, 1)
        SAC_WL_GRID_UNROLL_BEGIN( 0, SACp_inl_2970__type_544, SACp_inl_2969__type_546, 0, 1)
          SAC_WL_STRIDE_LOOP0_BEGIN( 1, SACp_inl_2970__type_544, SACp_inl_2968__type_547, 0, 1, 1)
            SAC_WL_GRID_UNROLL_BEGIN( 1, SACp_inl_2970__type_544, SACp_inl_2968__type_547, 0, 1)
              /*
               * ND_IDXS2OFFSET( SACp_inl_2970__type_544_32_2__, 2, SACp_inl_2969__type_546, SACp_inl_2968__type_547, 2, 32, 2)
               */
              SACp_inl_2970__type_544_32_2__ = ( 2* SACp_inl_2969__type_546+SACp_inl_2968__type_547) ;

              SACp_inl_2918__flat_65__SSA_1_32_2__ = (SACp_inl_2970__type_544_32_2__ + SACp_inl_2924_lb_imag__SSA_1_32_2__); 
              SAC_ND_IDX_SEL_S( SACp_inl_2918__flat_65__SSA_1_32_2__, SACl_rofu, SACp_inl_2917__flat_64__SSA_1)
              SAC_ND_IDX_SEL_S( SACp_inl_2918__flat_65__SSA_1_32_2__, SACl_fft_right, SACp_inl_2915__flat_62__SSA_1)
              SACp_inl_2914__flat_61__SSA_1 = (SACp_inl_2915__flat_62__SSA_1 * SACp_inl_2917__flat_64__SSA_1); 
              SAC_ND_IDX_SEL_S( SACp_inl_2970__type_544_32_2__, SACl_rofu, SACp_inl_2913__flat_60__SSA_1)
              SAC_ND_IDX_SEL_S( SACp_inl_2970__type_544_32_2__, SACl_fft_right, SACp_inl_2912__flat_59__SSA_1)
              SACp_inl_2911__flat_58__SSA_1 = (SACp_inl_2912__flat_59__SSA_1 * SACp_inl_2913__flat_60__SSA_1); 
              SACp_inl_2910_val__SSA_2 = (SACp_inl_2911__flat_58__SSA_1 - SACp_inl_2914__flat_61__SSA_1); 
              SAC_ND_IDX_SEL_S( SACp_inl_2970__type_544_32_2__, SACl_fft_left, SACp_inl_2954__flat_40)
              SACp_inl_2953__flat_39 = (SACp_inl_2954__flat_40 + SACp_inl_2910_val__SSA_2); 
              /*
               * WL_ASSIGN( SACp_inl_2953__flat_39, 0, SACp_inl_2964__type_545, 2, SACp_inl_2970__type_544, 2, SACp_inl_2969__type_546, SACp_inl_2968__type_547)
               */
              SAC_TR_WL_PRINT( ("index vector [%d, %d] (== offset %d) -- offset %d -- assign", SACp_inl_2969__type_546, SACp_inl_2968__type_547, ( SAC_ND_A_SHAPE( SACp_inl_2964__type_545, 1) * SACp_inl_2969__type_546 + SACp_inl_2968__type_547 ), SAC_WL_OFFSET( SACp_inl_2964__type_545)));
              SAC_ASSURE_TYPE( (SAC_ND_A_DIM( SACp_inl_2953__flat_39) == (SAC_ND_A_DIM( SACp_inl_2964__type_545) - 2)), ("WL expression with illegal dimension found!"));
              SAC_ASSURE_TYPE( (SAC_ND_A_SIZE( SACp_inl_2953__flat_39) == SAC_WL_SHAPE_FACTOR( SACp_inl_2964__type_545, 1)), ("WL expression with illegal size found!"));
              SAC_ND_WRITE_ARRAY( SACp_inl_2964__type_545, SAC_WL_OFFSET( SACp_inl_2964__type_545)) = SACp_inl_2953__flat_39;
              SAC_WL_OFFSET( SACp_inl_2964__type_545)++;

            SAC_WL_GRID_UNROLL_END( 1, SACp_inl_2970__type_544, SACp_inl_2968__type_547, 0, 1)
          SAC_WL_STRIDE_LOOP_END( 1, SACp_inl_2970__type_544, SACp_inl_2968__type_547, 0, 1, 1)
          SAC_WL_STRIDE_LOOP0_BEGIN( 1, SACp_inl_2970__type_544, SACp_inl_2968__type_547, 1, 2, 1)
            SAC_WL_GRID_UNROLL_BEGIN( 1, SACp_inl_2970__type_544, SACp_inl_2968__type_547, 0, 1)
              /*
               * ND_IDXS2OFFSET( SACp_inl_2970__type_544_32_2__, 2, SACp_inl_2969__type_546, SACp_inl_2968__type_547, 2, 32, 2)
               */
              SACp_inl_2970__type_544_32_2__ = ( 2* SACp_inl_2969__type_546+SACp_inl_2968__type_547) ;

              SACp_inl_2905__flat_74__SSA_1_32_2__ = (SACp_inl_2970__type_544_32_2__ + SACp_esd_3859_32_2__); 
              SAC_ND_IDX_SEL_S( SACp_inl_2905__flat_74__SSA_1_32_2__, SACl_rofu, SACp_inl_2904__flat_73__SSA_1)
              SAC_ND_IDX_SEL_S( SACp_inl_2970__type_544_32_2__, SACl_fft_right, SACp_inl_2903__flat_72__SSA_1)
              SACp_inl_2902__flat_71__SSA_1 = (SACp_inl_2903__flat_72__SSA_1 * SACp_inl_2904__flat_73__SSA_1); 
              SAC_ND_IDX_SEL_S( SACp_inl_2970__type_544_32_2__, SACl_rofu, SACp_inl_2901__flat_70__SSA_1)
              SAC_ND_IDX_SEL_S( SACp_inl_2905__flat_74__SSA_1_32_2__, SACl_fft_right, SACp_inl_2899__flat_68__SSA_1)
              SACp_inl_2898__flat_67__SSA_1 = (SACp_inl_2899__flat_68__SSA_1 * SACp_inl_2901__flat_70__SSA_1); 
              SACp_inl_2910_val__SSA_3 = (SACp_inl_2898__flat_67__SSA_1 + SACp_inl_2902__flat_71__SSA_1); 
              SAC_ND_IDX_SEL_S( SACp_inl_2970__type_544_32_2__, SACl_fft_left, SACp_inl_2954__flat_40__SSA_1)
              SACp_inl_2953__flat_39__SSA_1 = (SACp_inl_2954__flat_40__SSA_1 + SACp_inl_2910_val__SSA_3); 
              /*
               * WL_ASSIGN( SACp_inl_2953__flat_39__SSA_1, 0, SACp_inl_2964__type_545, 2, SACp_inl_2970__type_544, 2, SACp_inl_2969__type_546, SACp_inl_2968__type_547)
               */
              SAC_TR_WL_PRINT( ("index vector [%d, %d] (== offset %d) -- offset %d -- assign", SACp_inl_2969__type_546, SACp_inl_2968__type_547, ( SAC_ND_A_SHAPE( SACp_inl_2964__type_545, 1) * SACp_inl_2969__type_546 + SACp_inl_2968__type_547 ), SAC_WL_OFFSET( SACp_inl_2964__type_545)));
              SAC_ASSURE_TYPE( (SAC_ND_A_DIM( SACp_inl_2953__flat_39__SSA_1) == (SAC_ND_A_DIM( SACp_inl_2964__type_545) - 2)), ("WL expression with illegal dimension found!"));
              SAC_ASSURE_TYPE( (SAC_ND_A_SIZE( SACp_inl_2953__flat_39__SSA_1) == SAC_WL_SHAPE_FACTOR( SACp_inl_2964__type_545, 1)), ("WL expression with illegal size found!"));
              SAC_ND_WRITE_ARRAY( SACp_inl_2964__type_545, SAC_WL_OFFSET( SACp_inl_2964__type_545)) = SACp_inl_2953__flat_39__SSA_1;
              SAC_WL_OFFSET( SACp_inl_2964__type_545)++;

            SAC_WL_GRID_UNROLL_END( 1, SACp_inl_2970__type_544, SACp_inl_2968__type_547, 0, 1)
          SAC_WL_STRIDE_LOOP_END( 1, SACp_inl_2970__type_544, SACp_inl_2968__type_547, 1, 2, 1)
        SAC_WL_GRID_UNROLL_END( 0, SACp_inl_2970__type_544, SACp_inl_2969__type_546, 0, 1)
      SAC_WL_STRIDE_LOOP_END( 0, SACp_inl_2970__type_544, SACp_inl_2969__type_546, 0, 32, 1)
      SAC_WL_STRIDE_LOOP0_BEGIN( 0, SACp_inl_2970__type_544, SACp_inl_2969__type_546, 32, 64, 1)
        SAC_WL_GRID_UNROLL_BEGIN( 0, SACp_inl_2970__type_544, SACp_inl_2969__type_546, 0, 1)
          SAC_WL_STRIDE_LOOP0_BEGIN( 1, SACp_inl_2970__type_544, SACp_inl_2968__type_547, 0, 1, 1)
            SAC_WL_GRID_UNROLL_BEGIN( 1, SACp_inl_2970__type_544, SACp_inl_2968__type_547, 0, 1)
              /*
               * ND_IDXS2OFFSET( SACp_inl_2970__type_544_32_2__, 2, SACp_inl_2969__type_546, SACp_inl_2968__type_547, 2, 32, 2)
               */
              SACp_inl_2970__type_544_32_2__ = ( 2* SACp_inl_2969__type_546+SACp_inl_2968__type_547) ;

              SACp_inl_2966__type_541_32_2__ = (SACp_inl_2970__type_544_32_2__ + SACp_esd_3857_32_2__); 
              SACp_inl_2918__flat_65_32_2__ = (SACp_inl_2966__type_541_32_2__ + SACp_inl_2924_lb_imag__SSA_1_32_2__); 
              SAC_ND_IDX_SEL_S( SACp_inl_2918__flat_65_32_2__, SACl_rofu, SACp_inl_2917__flat_64)
              SAC_ND_IDX_SEL_S( SACp_inl_2918__flat_65_32_2__, SACl_fft_right, SACp_inl_2915__flat_62)
              SACp_inl_2914__flat_61 = (SACp_inl_2915__flat_62 * SACp_inl_2917__flat_64); 
              SAC_ND_IDX_SEL_S( SACp_inl_2966__type_541_32_2__, SACl_rofu, SACp_inl_2913__flat_60)
              SAC_ND_IDX_SEL_S( SACp_inl_2966__type_541_32_2__, SACl_fft_right, SACp_inl_2912__flat_59)
              SACp_inl_2911__flat_58 = (SACp_inl_2912__flat_59 * SACp_inl_2913__flat_60); 
              SACp_inl_2910_val = (SACp_inl_2911__flat_58 - SACp_inl_2914__flat_61); 
              SAC_ND_IDX_SEL_S( SACp_inl_2966__type_541_32_2__, SACl_fft_left, SACp_inl_2942__flat_47)
              SACp_inl_2941__flat_46 = (SACp_inl_2942__flat_47 - SACp_inl_2910_val); 
              /*
               * WL_ASSIGN( SACp_inl_2941__flat_46, 0, SACp_inl_2964__type_545, 2, SACp_inl_2970__type_544, 2, SACp_inl_2969__type_546, SACp_inl_2968__type_547)
               */
              SAC_TR_WL_PRINT( ("index vector [%d, %d] (== offset %d) -- offset %d -- assign", SACp_inl_2969__type_546, SACp_inl_2968__type_547, ( SAC_ND_A_SHAPE( SACp_inl_2964__type_545, 1) * SACp_inl_2969__type_546 + SACp_inl_2968__type_547 ), SAC_WL_OFFSET( SACp_inl_2964__type_545)));
              SAC_ASSURE_TYPE( (SAC_ND_A_DIM( SACp_inl_2941__flat_46) == (SAC_ND_A_DIM( SACp_inl_2964__type_545) - 2)), ("WL expression with illegal dimension found!"));
              SAC_ASSURE_TYPE( (SAC_ND_A_SIZE( SACp_inl_2941__flat_46) == SAC_WL_SHAPE_FACTOR( SACp_inl_2964__type_545, 1)), ("WL expression with illegal size found!"));
              SAC_ND_WRITE_ARRAY( SACp_inl_2964__type_545, SAC_WL_OFFSET( SACp_inl_2964__type_545)) = SACp_inl_2941__flat_46;
              SAC_WL_OFFSET( SACp_inl_2964__type_545)++;

            SAC_WL_GRID_UNROLL_END( 1, SACp_inl_2970__type_544, SACp_inl_2968__type_547, 0, 1)
          SAC_WL_STRIDE_LOOP_END( 1, SACp_inl_2970__type_544, SACp_inl_2968__type_547, 0, 1, 1)
          SAC_WL_STRIDE_LOOP0_BEGIN( 1, SACp_inl_2970__type_544, SACp_inl_2968__type_547, 1, 2, 1)
            SAC_WL_GRID_UNROLL_BEGIN( 1, SACp_inl_2970__type_544, SACp_inl_2968__type_547, 0, 1)
              /*
               * ND_IDXS2OFFSET( SACp_inl_2970__type_544_32_2__, 2, SACp_inl_2969__type_546, SACp_inl_2968__type_547, 2, 32, 2)
               */
              SACp_inl_2970__type_544_32_2__ = ( 2* SACp_inl_2969__type_546+SACp_inl_2968__type_547) ;

              SACp_inl_2966__type_541__SSA_1_32_2__ = (SACp_inl_2970__type_544_32_2__ + SACp_esd_3857_32_2__); 
              SACp_inl_2905__flat_74_32_2__ = (SACp_inl_2966__type_541__SSA_1_32_2__ + SACp_esd_3859_32_2__); 
              SAC_ND_IDX_SEL_S( SACp_inl_2905__flat_74_32_2__, SACl_rofu, SACp_inl_2904__flat_73)
              SAC_ND_IDX_SEL_S( SACp_inl_2966__type_541__SSA_1_32_2__, SACl_fft_right, SACp_inl_2903__flat_72)
              SACp_inl_2902__flat_71 = (SACp_inl_2903__flat_72 * SACp_inl_2904__flat_73); 
              SAC_ND_IDX_SEL_S( SACp_inl_2966__type_541__SSA_1_32_2__, SACl_rofu, SACp_inl_2901__flat_70)
              SAC_ND_IDX_SEL_S( SACp_inl_2905__flat_74_32_2__, SACl_fft_right, SACp_inl_2899__flat_68)
              SACp_inl_2898__flat_67 = (SACp_inl_2899__flat_68 * SACp_inl_2901__flat_70); 
              SACp_inl_2910_val__SSA_1 = (SACp_inl_2898__flat_67 + SACp_inl_2902__flat_71); 
              SAC_ND_IDX_SEL_S( SACp_inl_2966__type_541__SSA_1_32_2__, SACl_fft_left, SACp_inl_2942__flat_47__SSA_1)
              SACp_inl_2941__flat_46__SSA_1 = (SACp_inl_2942__flat_47__SSA_1 - SACp_inl_2910_val__SSA_1); 
              /*
               * WL_ASSIGN( SACp_inl_2941__flat_46__SSA_1, 0, SACp_inl_2964__type_545, 2, SACp_inl_2970__type_544, 2, SACp_inl_2969__type_546, SACp_inl_2968__type_547)
               */
              SAC_TR_WL_PRINT( ("index vector [%d, %d] (== offset %d) -- offset %d -- assign", SACp_inl_2969__type_546, SACp_inl_2968__type_547, ( SAC_ND_A_SHAPE( SACp_inl_2964__type_545, 1) * SACp_inl_2969__type_546 + SACp_inl_2968__type_547 ), SAC_WL_OFFSET( SACp_inl_2964__type_545)));
              SAC_ASSURE_TYPE( (SAC_ND_A_DIM( SACp_inl_2941__flat_46__SSA_1) == (SAC_ND_A_DIM( SACp_inl_2964__type_545) - 2)), ("WL expression with illegal dimension found!"));
              SAC_ASSURE_TYPE( (SAC_ND_A_SIZE( SACp_inl_2941__flat_46__SSA_1) == SAC_WL_SHAPE_FACTOR( SACp_inl_2964__type_545, 1)), ("WL expression with illegal size found!"));
              SAC_ND_WRITE_ARRAY( SACp_inl_2964__type_545, SAC_WL_OFFSET( SACp_inl_2964__type_545)) = SACp_inl_2941__flat_46__SSA_1;
              SAC_WL_OFFSET( SACp_inl_2964__type_545)++;

            SAC_WL_GRID_UNROLL_END( 1, SACp_inl_2970__type_544, SACp_inl_2968__type_547, 0, 1)
          SAC_WL_STRIDE_LOOP_END( 1, SACp_inl_2970__type_544, SACp_inl_2968__type_547, 1, 2, 1)
        SAC_WL_GRID_UNROLL_END( 0, SACp_inl_2970__type_544, SACp_inl_2969__type_546, 0, 1)
      SAC_WL_STRIDE_LOOP_END( 0, SACp_inl_2970__type_544, SACp_inl_2969__type_546, 32, 64, 1)
      /*
       * MT_SCHEDULER_END( 0, 2, 0, 0, 64, 2)
       */


      /*
       * WL_END__OFFSET( SACp_inl_2964__type_545, 2, SACp_inl_2970__type_544, 2)
       */
    }

  SAC_PF_END_WITH( genarray)
  SAC_ND_DEC_RC_FREE_ARRAY( SACl_fft_left, 1)
  SAC_ND_DEC_RC_FREE_ARRAY( SACl_fft_right, 1)
  SAC_ND_DEC_RC_FREE_ARRAY( SACl_rofu, 1)
  /*
   * ND_FUN_RET( , 1, out_rc, SACp_inl_2964__type_545, SAC__arg_1)
   */
  SAC_ND_RET_out_rc( SACp_inl_2964__type_545, SAC__arg_1)
  return;
}

/*
 * ND_FUN_DEC( SACf_FFT1d__d___MAIN__cpx_128___MAIN__cpx_64, void, 4, out_rc, double *, SAC__arg_1, in, double, SACl_dir, in_rc, double *, SACl_v, in_rc, double *, SACl_rofu)
 */
void SACf_FFT1d__d___MAIN__cpx_128___MAIN__cpx_64( SAC_ND_PARAM_out_rc( double *, SAC__arg_1), SAC_ND_PARAM_in( double, SACl_dir), SAC_ND_PARAM_in_rc( double *, SACl_v), SAC_ND_PARAM_in_rc( double *, SACl_rofu))
{ 
  double SACp_esd_4722; 
  double SACp_esd_4721; 
  double SACp_esd_4720; 
  double SACp_esd_4719; 
  double SACp_inl_4705_array_elem__SSA_1; 
  int SACp_inl_4684__flat_404_128_2__; 
  int SACp_inl_4683__flat_403_128_2__; 
  int SACp_esd_3866_64_2__; 
  int SACp_esd_3864_64_2__; 
  /*
   * ND_KS_DECL_ARRAY( double, SACl_fft_right, 2, 64, 2)
   */
  double *SACl_fft_right;
  int SAC_ND_A_RC( SACl_fft_right);
  const int SAC_ND_A_SIZE( SACl_fft_right) = 64*2;
  const int SAC_ND_A_DIM( SACl_fft_right) = 2;
  const int SAC_ND_A_SHAPE( SACl_fft_right, 0) = 64;
  const int SAC_ND_A_SHAPE( SACl_fft_right, 1) = 2;

  /*
   * ND_KS_DECL_ARRAY( double, SACl_fft_left, 2, 64, 2)
   */
  double *SACl_fft_left;
  int SAC_ND_A_RC( SACl_fft_left);
  const int SAC_ND_A_SIZE( SACl_fft_left) = 64*2;
  const int SAC_ND_A_DIM( SACl_fft_left) = 2;
  const int SAC_ND_A_SHAPE( SACl_fft_left, 0) = 64;
  const int SAC_ND_A_SHAPE( SACl_fft_left, 1) = 2;

  /*
   * ND_KS_DECL_ARRAY( int, SACp_inl_3153__type_563, 1, 2)
   */
  int *SACp_inl_3153__type_563;
  int SAC_ND_A_RC( SACp_inl_3153__type_563);
  const int SAC_ND_A_SIZE( SACp_inl_3153__type_563) = 2;
  const int SAC_ND_A_DIM( SACp_inl_3153__type_563) = 1;
  const int SAC_ND_A_SHAPE( SACp_inl_3153__type_563, 0) = 2;

  int SACp_inl_3153__type_563_64_2__; 
  int SACp_inl_3152__type_565; 
  int SACp_inl_3151__type_566; 
  int SACp_inl_3149__type_560_64_2__; 
  /*
   * ND_KS_DECL_ARRAY( double, SACp_inl_3147__type_564, 2, 128, 2)
   */
  double *SACp_inl_3147__type_564;
  int SAC_ND_A_RC( SACp_inl_3147__type_564);
  const int SAC_ND_A_SIZE( SACp_inl_3147__type_564) = 128*2;
  const int SAC_ND_A_DIM( SACp_inl_3147__type_564) = 2;
  const int SAC_ND_A_SHAPE( SACp_inl_3147__type_564, 0) = 128;
  const int SAC_ND_A_SHAPE( SACp_inl_3147__type_564, 1) = 2;

  double SACp_inl_3137__flat_40; 
  double SACp_inl_3136__flat_39; 
  double SACp_inl_3125__flat_47; 
  double SACp_inl_3124__flat_46; 
  int SACp_inl_3101__flat_65_64_2__; 
  double SACp_inl_3100__flat_64; 
  double SACp_inl_3098__flat_62; 
  double SACp_inl_3097__flat_61; 
  double SACp_inl_3096__flat_60; 
  double SACp_inl_3095__flat_59; 
  double SACp_inl_3094__flat_58; 
  double SACp_inl_3093_val; 
  int SACp_inl_3088__flat_74_64_2__; 
  double SACp_inl_3087__flat_73; 
  double SACp_inl_3086__flat_72; 
  double SACp_inl_3085__flat_71; 
  double SACp_inl_3084__flat_70; 
  double SACp_inl_3082__flat_68; 
  double SACp_inl_3081__flat_67; 
  /*
   * ND_KS_DECL_ARRAY( int, SACp_inl_3071__flat_108_iv, 1, 2)
   */
  int *SACp_inl_3071__flat_108_iv;
  int SAC_ND_A_RC( SACp_inl_3071__flat_108_iv);
  const int SAC_ND_A_SIZE( SACp_inl_3071__flat_108_iv) = 2;
  const int SAC_ND_A_DIM( SACp_inl_3071__flat_108_iv) = 1;
  const int SAC_ND_A_SHAPE( SACp_inl_3071__flat_108_iv, 0) = 2;

  int SACp_inl_3070__type_409; 
  int SACp_inl_3069__type_410; 
  int SACp_inl_3064__flat_111; 
  int SACp_inl_3063__flat_110_64_2__; 
  double SACp_inl_3062__flat_109; 
  /*
   * ND_KS_DECL_ARRAY( double, SACp_inl_3061_rn, 2, 32, 2)
   */
  double *SACp_inl_3061_rn;
  int SAC_ND_A_RC( SACp_inl_3061_rn);
  const int SAC_ND_A_SIZE( SACp_inl_3061_rn) = 32*2;
  const int SAC_ND_A_DIM( SACp_inl_3061_rn) = 2;
  const int SAC_ND_A_SHAPE( SACp_inl_3061_rn, 0) = 32;
  const int SAC_ND_A_SHAPE( SACp_inl_3061_rn, 1) = 2;

  /*
   * ND_KS_DECL_ARRAY( int, SACp_inl_3052__flat_108_iv, 1, 2)
   */
  int *SACp_inl_3052__flat_108_iv;
  int SAC_ND_A_RC( SACp_inl_3052__flat_108_iv);
  const int SAC_ND_A_SIZE( SACp_inl_3052__flat_108_iv) = 2;
  const int SAC_ND_A_DIM( SACp_inl_3052__flat_108_iv) = 1;
  const int SAC_ND_A_SHAPE( SACp_inl_3052__flat_108_iv, 0) = 2;

  int SACp_inl_3051__type_406; 
  int SACp_inl_3050__type_407; 
  int SACp_inl_3045__flat_111; 
  int SACp_inl_3044__flat_110_128_2__; 
  /*
   * ND_KS_DECL_ARRAY( double, SACp_inl_3042_rn, 2, 64, 2)
   */
  double *SACp_inl_3042_rn;
  int SAC_ND_A_RC( SACp_inl_3042_rn);
  const int SAC_ND_A_SIZE( SACp_inl_3042_rn) = 64*2;
  const int SAC_ND_A_DIM( SACp_inl_3042_rn) = 2;
  const int SAC_ND_A_SHAPE( SACp_inl_3042_rn, 0) = 64;
  const int SAC_ND_A_SHAPE( SACp_inl_3042_rn, 1) = 2;

  /*
   * ND_KS_DECL_ARRAY( int, SACp_inl_2995__flat_108_iv, 1, 2)
   */
  int *SACp_inl_2995__flat_108_iv;
  int SAC_ND_A_RC( SACp_inl_2995__flat_108_iv);
  const int SAC_ND_A_SIZE( SACp_inl_2995__flat_108_iv) = 2;
  const int SAC_ND_A_DIM( SACp_inl_2995__flat_108_iv) = 1;
  const int SAC_ND_A_SHAPE( SACp_inl_2995__flat_108_iv, 0) = 2;

  int SACp_inl_2994__type_403; 
  int SACp_inl_2993__type_404; 
  int SACp_inl_2988__flat_111; 
  int SACp_inl_2987__flat_110_128_2__; 
  double SACp_inl_2986__flat_109; 
  /*
   * ND_KS_DECL_ARRAY( double, SACp_inl_2985_rn, 2, 64, 2)
   */
  double *SACp_inl_2985_rn;
  int SAC_ND_A_RC( SACp_inl_2985_rn);
  const int SAC_ND_A_SIZE( SACp_inl_2985_rn) = 64*2;
  const int SAC_ND_A_DIM( SACp_inl_2985_rn) = 2;
  const int SAC_ND_A_SHAPE( SACp_inl_2985_rn, 0) = 64;
  const int SAC_ND_A_SHAPE( SACp_inl_2985_rn, 1) = 2;

  int SACp_inl_3107_lb_imag__SSA_1_64_2__; 
  double SACp_inl_3093_val__SSA_1; 
  int SACp_inl_3149__type_560__SSA_1_64_2__; 
  double SACp_inl_3125__flat_47__SSA_1; 
  double SACp_inl_3124__flat_46__SSA_1; 
  int SACp_inl_3101__flat_65__SSA_1_64_2__; 
  double SACp_inl_3100__flat_64__SSA_1; 
  double SACp_inl_3098__flat_62__SSA_1; 
  double SACp_inl_3097__flat_61__SSA_1; 
  double SACp_inl_3096__flat_60__SSA_1; 
  double SACp_inl_3095__flat_59__SSA_1; 
  double SACp_inl_3094__flat_58__SSA_1; 
  double SACp_inl_3093_val__SSA_2; 
  int SACp_inl_3088__flat_74__SSA_1_64_2__; 
  double SACp_inl_3087__flat_73__SSA_1; 
  double SACp_inl_3086__flat_72__SSA_1; 
  double SACp_inl_3085__flat_71__SSA_1; 
  double SACp_inl_3084__flat_70__SSA_1; 
  double SACp_inl_3082__flat_68__SSA_1; 
  double SACp_inl_3081__flat_67__SSA_1; 
  double SACp_inl_3093_val__SSA_3; 
  double SACp_inl_3137__flat_40__SSA_1; 
  double SACp_inl_3136__flat_39__SSA_1; 

  /*
   * ND_KS_DECL_ARRAY_ARG( SACl_rofu, 2, 64, 2)
   */
  const int SAC_ND_A_SIZE( SACl_rofu) = 64*2;
  const int SAC_ND_A_DIM( SACl_rofu) = 2;
  const int SAC_ND_A_SHAPE( SACl_rofu, 0) = 64;
  const int SAC_ND_A_SHAPE( SACl_rofu, 1) = 2;

  /*
   * ND_KS_DECL_ARRAY_ARG( SACl_v, 2, 128, 2)
   */
  const int SAC_ND_A_SIZE( SACl_v) = 128*2;
  const int SAC_ND_A_DIM( SACl_v) = 2;
  const int SAC_ND_A_SHAPE( SACl_v, 0) = 128;
  const int SAC_ND_A_SHAPE( SACl_v, 1) = 2;

  SAC_ND_ALLOC_ARRAY( double, SACp_inl_2985_rn, 1)
  SAC_PF_BEGIN_WITH( genarray)
    /*
     * WL_BEGIN__OFFSET( SACp_inl_2985_rn, 2, SACp_inl_2995__flat_108_iv, 2)
     */
    { int SAC_WL_OFFSET( SACp_inl_2985_rn);
      int SAC_WL_MT_SCHEDULE_START( 0);
      int SAC_WL_MT_SCHEDULE_STOP( 0);
      int SAC_WL_MT_SCHEDULE_START( 1);
      int SAC_WL_MT_SCHEDULE_STOP( 1);
      int SAC_i;
      int SAC_WL_SHAPE_FACTOR( SACp_inl_2985_rn, 0) = 1 * SAC_ND_A_SHAPE( SACp_inl_2985_rn, 1);
      int SAC_WL_SHAPE_FACTOR( SACp_inl_2985_rn, 1) = 1;

      /*
       * MT_SCHEDULER_BEGIN( 0, 2, 0, 0, 64, 2)
       */
      SAC_WL_MT_SCHEDULE_START( 0) = 0;
      SAC_WL_MT_SCHEDULE_STOP( 0) = 64;
      SAC_WL_MT_SCHEDULE_START( 1) = 0;
      SAC_WL_MT_SCHEDULE_STOP( 1) = 2;

      /*
       * WL_INIT_OFFSET( SACp_inl_2985_rn, 2, SACp_inl_2995__flat_108_iv, 2)
       */
      SAC_WL_OFFSET( SACp_inl_2985_rn)
        = SAC_WL_MT_SCHEDULE_START( 0) * SAC_WL_SHAPE_FACTOR( SACp_inl_2985_rn, 0)
        + SAC_WL_MT_SCHEDULE_START( 1) * SAC_WL_SHAPE_FACTOR( SACp_inl_2985_rn, 1);

      SAC_WL_STRIDE_LOOP0_BEGIN( 0, SACp_inl_2995__flat_108_iv, SACp_inl_2994__type_403, 0, 64, 1)
        SAC_WL_GRID_UNROLL_BEGIN( 0, SACp_inl_2995__flat_108_iv, SACp_inl_2994__type_403, 0, 1)
          SAC_WL_STRIDE_LOOP0_BEGIN( 1, SACp_inl_2995__flat_108_iv, SACp_inl_2993__type_404, 0, 2, 1)
            SAC_WL_GRID_UNROLL_BEGIN( 1, SACp_inl_2995__flat_108_iv, SACp_inl_2993__type_404, 0, 1)
              SACp_inl_2988__flat_111 = (2 * SACp_inl_2994__type_403); 
              SACp_inl_2987__flat_110_128_2__ = ((SACp_inl_2988__flat_111 * 2) + SACp_inl_2993__type_404); 
              SAC_ND_IDX_SEL_S( SACp_inl_2987__flat_110_128_2__, SACl_v, SACp_inl_2986__flat_109)
              /*
               * WL_ASSIGN( SACp_inl_2986__flat_109, 0, SACp_inl_2985_rn, 2, SACp_inl_2995__flat_108_iv, 2, SACp_inl_2994__type_403, SACp_inl_2993__type_404)
               */
              SAC_TR_WL_PRINT( ("index vector [%d, %d] (== offset %d) -- offset %d -- assign", SACp_inl_2994__type_403, SACp_inl_2993__type_404, ( SAC_ND_A_SHAPE( SACp_inl_2985_rn, 1) * SACp_inl_2994__type_403 + SACp_inl_2993__type_404 ), SAC_WL_OFFSET( SACp_inl_2985_rn)));
              SAC_ASSURE_TYPE( (SAC_ND_A_DIM( SACp_inl_2986__flat_109) == (SAC_ND_A_DIM( SACp_inl_2985_rn) - 2)), ("WL expression with illegal dimension found!"));
              SAC_ASSURE_TYPE( (SAC_ND_A_SIZE( SACp_inl_2986__flat_109) == SAC_WL_SHAPE_FACTOR( SACp_inl_2985_rn, 1)), ("WL expression with illegal size found!"));
              SAC_ND_WRITE_ARRAY( SACp_inl_2985_rn, SAC_WL_OFFSET( SACp_inl_2985_rn)) = SACp_inl_2986__flat_109;
              SAC_WL_OFFSET( SACp_inl_2985_rn)++;

            SAC_WL_GRID_UNROLL_END( 1, SACp_inl_2995__flat_108_iv, SACp_inl_2993__type_404, 0, 1)
          SAC_WL_STRIDE_LOOP_END( 1, SACp_inl_2995__flat_108_iv, SACp_inl_2993__type_404, 0, 2, 1)
        SAC_WL_GRID_UNROLL_END( 0, SACp_inl_2995__flat_108_iv, SACp_inl_2994__type_403, 0, 1)
      SAC_WL_STRIDE_LOOP_END( 0, SACp_inl_2995__flat_108_iv, SACp_inl_2994__type_403, 0, 64, 1)
      /*
       * MT_SCHEDULER_END( 0, 2, 0, 0, 64, 2)
       */


      /*
       * WL_END__OFFSET( SACp_inl_2985_rn, 2, SACp_inl_2995__flat_108_iv, 2)
       */
    }

  SAC_PF_END_WITH( genarray)
  SACp_inl_4684__flat_404_128_2__ = ((1 * 2) + 0); 
  SAC_ND_ALLOC_ARRAY( double, SACp_inl_3042_rn, 1)
  SAC_PF_BEGIN_WITH( genarray)
    /*
     * WL_BEGIN__OFFSET( SACp_inl_3042_rn, 2, SACp_inl_3052__flat_108_iv, 2)
     */
    { int SAC_WL_OFFSET( SACp_inl_3042_rn);
      int SAC_WL_MT_SCHEDULE_START( 0);
      int SAC_WL_MT_SCHEDULE_STOP( 0);
      int SAC_WL_MT_SCHEDULE_START( 1);
      int SAC_WL_MT_SCHEDULE_STOP( 1);
      int SAC_i;
      int SAC_WL_SHAPE_FACTOR( SACp_inl_3042_rn, 0) = 1 * SAC_ND_A_SHAPE( SACp_inl_3042_rn, 1);
      int SAC_WL_SHAPE_FACTOR( SACp_inl_3042_rn, 1) = 1;

      /*
       * MT_SCHEDULER_BEGIN( 0, 2, 0, 0, 64, 2)
       */
      SAC_WL_MT_SCHEDULE_START( 0) = 0;
      SAC_WL_MT_SCHEDULE_STOP( 0) = 64;
      SAC_WL_MT_SCHEDULE_START( 1) = 0;
      SAC_WL_MT_SCHEDULE_STOP( 1) = 2;

      /*
       * WL_INIT_OFFSET( SACp_inl_3042_rn, 2, SACp_inl_3052__flat_108_iv, 2)
       */
      SAC_WL_OFFSET( SACp_inl_3042_rn)
        = SAC_WL_MT_SCHEDULE_START( 0) * SAC_WL_SHAPE_FACTOR( SACp_inl_3042_rn, 0)
        + SAC_WL_MT_SCHEDULE_START( 1) * SAC_WL_SHAPE_FACTOR( SACp_inl_3042_rn, 1);

      SAC_WL_STRIDE_LOOP0_BEGIN( 0, SACp_inl_3052__flat_108_iv, SACp_inl_3051__type_406, 0, 64, 1)
        SAC_WL_GRID_UNROLL_BEGIN( 0, SACp_inl_3052__flat_108_iv, SACp_inl_3051__type_406, 0, 1)
          SAC_WL_STRIDE_LOOP0_BEGIN( 1, SACp_inl_3052__flat_108_iv, SACp_inl_3050__type_407, 0, 2, 1)
            SAC_WL_GRID_UNROLL_BEGIN( 1, SACp_inl_3052__flat_108_iv, SACp_inl_3050__type_407, 0, 1)
              SACp_inl_3045__flat_111 = (2 * SACp_inl_3051__type_406); 
              SACp_inl_3044__flat_110_128_2__ = ((SACp_inl_3045__flat_111 * 2) + SACp_inl_3050__type_407); 
              SACp_inl_4683__flat_403_128_2__ = (SACp_inl_4684__flat_404_128_2__ + SACp_inl_3044__flat_110_128_2__); 
              SAC_ND_IDX_SEL_S( SACp_inl_4683__flat_403_128_2__, SACl_v, SACp_inl_4705_array_elem__SSA_1)
              /*
               * WL_ASSIGN( SACp_inl_4705_array_elem__SSA_1, 0, SACp_inl_3042_rn, 2, SACp_inl_3052__flat_108_iv, 2, SACp_inl_3051__type_406, SACp_inl_3050__type_407)
               */
              SAC_TR_WL_PRINT( ("index vector [%d, %d] (== offset %d) -- offset %d -- assign", SACp_inl_3051__type_406, SACp_inl_3050__type_407, ( SAC_ND_A_SHAPE( SACp_inl_3042_rn, 1) * SACp_inl_3051__type_406 + SACp_inl_3050__type_407 ), SAC_WL_OFFSET( SACp_inl_3042_rn)));
              SAC_ASSURE_TYPE( (SAC_ND_A_DIM( SACp_inl_4705_array_elem__SSA_1) == (SAC_ND_A_DIM( SACp_inl_3042_rn) - 2)), ("WL expression with illegal dimension found!"));
              SAC_ASSURE_TYPE( (SAC_ND_A_SIZE( SACp_inl_4705_array_elem__SSA_1) == SAC_WL_SHAPE_FACTOR( SACp_inl_3042_rn, 1)), ("WL expression with illegal size found!"));
              SAC_ND_WRITE_ARRAY( SACp_inl_3042_rn, SAC_WL_OFFSET( SACp_inl_3042_rn)) = SACp_inl_4705_array_elem__SSA_1;
              SAC_WL_OFFSET( SACp_inl_3042_rn)++;

            SAC_WL_GRID_UNROLL_END( 1, SACp_inl_3052__flat_108_iv, SACp_inl_3050__type_407, 0, 1)
          SAC_WL_STRIDE_LOOP_END( 1, SACp_inl_3052__flat_108_iv, SACp_inl_3050__type_407, 0, 2, 1)
        SAC_WL_GRID_UNROLL_END( 0, SACp_inl_3052__flat_108_iv, SACp_inl_3051__type_406, 0, 1)
      SAC_WL_STRIDE_LOOP_END( 0, SACp_inl_3052__flat_108_iv, SACp_inl_3051__type_406, 0, 64, 1)
      /*
       * MT_SCHEDULER_END( 0, 2, 0, 0, 64, 2)
       */


      /*
       * WL_END__OFFSET( SACp_inl_3042_rn, 2, SACp_inl_3052__flat_108_iv, 2)
       */
    }

  SAC_PF_END_WITH( genarray)
  SAC_ND_DEC_RC_FREE_ARRAY( SACl_v, 1)
  SAC_ND_ALLOC_ARRAY( double, SACp_inl_3061_rn, 1)
  SAC_PF_BEGIN_WITH( genarray)
    /*
     * WL_BEGIN__OFFSET( SACp_inl_3061_rn, 2, SACp_inl_3071__flat_108_iv, 2)
     */
    { int SAC_WL_OFFSET( SACp_inl_3061_rn);
      int SAC_WL_MT_SCHEDULE_START( 0);
      int SAC_WL_MT_SCHEDULE_STOP( 0);
      int SAC_WL_MT_SCHEDULE_START( 1);
      int SAC_WL_MT_SCHEDULE_STOP( 1);
      int SAC_i;
      int SAC_WL_SHAPE_FACTOR( SACp_inl_3061_rn, 0) = 1 * SAC_ND_A_SHAPE( SACp_inl_3061_rn, 1);
      int SAC_WL_SHAPE_FACTOR( SACp_inl_3061_rn, 1) = 1;

      /*
       * MT_SCHEDULER_BEGIN( 0, 2, 0, 0, 32, 2)
       */
      SAC_WL_MT_SCHEDULE_START( 0) = 0;
      SAC_WL_MT_SCHEDULE_STOP( 0) = 32;
      SAC_WL_MT_SCHEDULE_START( 1) = 0;
      SAC_WL_MT_SCHEDULE_STOP( 1) = 2;

      /*
       * WL_INIT_OFFSET( SACp_inl_3061_rn, 2, SACp_inl_3071__flat_108_iv, 2)
       */
      SAC_WL_OFFSET( SACp_inl_3061_rn)
        = SAC_WL_MT_SCHEDULE_START( 0) * SAC_WL_SHAPE_FACTOR( SACp_inl_3061_rn, 0)
        + SAC_WL_MT_SCHEDULE_START( 1) * SAC_WL_SHAPE_FACTOR( SACp_inl_3061_rn, 1);

      SAC_WL_STRIDE_LOOP0_BEGIN( 0, SACp_inl_3071__flat_108_iv, SACp_inl_3070__type_409, 0, 32, 1)
        SAC_WL_GRID_UNROLL_BEGIN( 0, SACp_inl_3071__flat_108_iv, SACp_inl_3070__type_409, 0, 1)
          SAC_WL_STRIDE_LOOP0_BEGIN( 1, SACp_inl_3071__flat_108_iv, SACp_inl_3069__type_410, 0, 2, 1)
            SAC_WL_GRID_UNROLL_BEGIN( 1, SACp_inl_3071__flat_108_iv, SACp_inl_3069__type_410, 0, 1)
              SACp_inl_3064__flat_111 = (2 * SACp_inl_3070__type_409); 
              SACp_inl_3063__flat_110_64_2__ = ((SACp_inl_3064__flat_111 * 2) + SACp_inl_3069__type_410); 
              SAC_ND_IDX_SEL_S( SACp_inl_3063__flat_110_64_2__, SACl_rofu, SACp_inl_3062__flat_109)
              /*
               * WL_ASSIGN( SACp_inl_3062__flat_109, 0, SACp_inl_3061_rn, 2, SACp_inl_3071__flat_108_iv, 2, SACp_inl_3070__type_409, SACp_inl_3069__type_410)
               */
              SAC_TR_WL_PRINT( ("index vector [%d, %d] (== offset %d) -- offset %d -- assign", SACp_inl_3070__type_409, SACp_inl_3069__type_410, ( SAC_ND_A_SHAPE( SACp_inl_3061_rn, 1) * SACp_inl_3070__type_409 + SACp_inl_3069__type_410 ), SAC_WL_OFFSET( SACp_inl_3061_rn)));
              SAC_ASSURE_TYPE( (SAC_ND_A_DIM( SACp_inl_3062__flat_109) == (SAC_ND_A_DIM( SACp_inl_3061_rn) - 2)), ("WL expression with illegal dimension found!"));
              SAC_ASSURE_TYPE( (SAC_ND_A_SIZE( SACp_inl_3062__flat_109) == SAC_WL_SHAPE_FACTOR( SACp_inl_3061_rn, 1)), ("WL expression with illegal size found!"));
              SAC_ND_WRITE_ARRAY( SACp_inl_3061_rn, SAC_WL_OFFSET( SACp_inl_3061_rn)) = SACp_inl_3062__flat_109;
              SAC_WL_OFFSET( SACp_inl_3061_rn)++;

            SAC_WL_GRID_UNROLL_END( 1, SACp_inl_3071__flat_108_iv, SACp_inl_3069__type_410, 0, 1)
          SAC_WL_STRIDE_LOOP_END( 1, SACp_inl_3071__flat_108_iv, SACp_inl_3069__type_410, 0, 2, 1)
        SAC_WL_GRID_UNROLL_END( 0, SACp_inl_3071__flat_108_iv, SACp_inl_3070__type_409, 0, 1)
      SAC_WL_STRIDE_LOOP_END( 0, SACp_inl_3071__flat_108_iv, SACp_inl_3070__type_409, 0, 32, 1)
      /*
       * MT_SCHEDULER_END( 0, 2, 0, 0, 32, 2)
       */


      /*
       * WL_END__OFFSET( SACp_inl_3061_rn, 2, SACp_inl_3071__flat_108_iv, 2)
       */
    }

  SAC_PF_END_WITH( genarray)
  SAC_ND_INC_RC( SACp_inl_3061_rn, 1)
  /*
   * ND_FUN_AP( SACf_FFT1d__d___MAIN__cpx_64___MAIN__cpx_32, , 4, out_rc, SACl_fft_left, in, SACl_dir, in_rc, SACp_inl_2985_rn, in_rc, SACp_inl_3061_rn)
   */
  SACf_FFT1d__d___MAIN__cpx_64___MAIN__cpx_32( SAC_ND_ARG_out_rc( SACl_fft_left), SAC_ND_ARG_in( SACl_dir), SAC_ND_ARG_in_rc( SACp_inl_2985_rn), SAC_ND_ARG_in_rc( SACp_inl_3061_rn));

  /*
   * ND_FUN_AP( SACf_FFT1d__d___MAIN__cpx_64___MAIN__cpx_32, , 4, out_rc, SACl_fft_right, in, SACl_dir, in_rc, SACp_inl_3042_rn, in_rc, SACp_inl_3061_rn)
   */
  SACf_FFT1d__d___MAIN__cpx_64___MAIN__cpx_32( SAC_ND_ARG_out_rc( SACl_fft_right), SAC_ND_ARG_in( SACl_dir), SAC_ND_ARG_in_rc( SACp_inl_3042_rn), SAC_ND_ARG_in_rc( SACp_inl_3061_rn));

  SACp_inl_3107_lb_imag__SSA_1_64_2__ = ((0 * 2) + 1); 
  SACp_esd_3864_64_2__ = ((-64 * 2) + 0); 
  SACp_esd_3866_64_2__ = ((0 * 2) + -1); 
  SAC_ND_ALLOC_ARRAY( double, SACp_inl_3147__type_564, 1)
  SAC_PF_BEGIN_WITH( genarray)
    /*
     * WL_BEGIN__OFFSET( SACp_inl_3147__type_564, 2, SACp_inl_3153__type_563, 2)
     */
    { int SAC_WL_OFFSET( SACp_inl_3147__type_564);
      int SAC_WL_MT_SCHEDULE_START( 0);
      int SAC_WL_MT_SCHEDULE_STOP( 0);
      int SAC_WL_MT_SCHEDULE_START( 1);
      int SAC_WL_MT_SCHEDULE_STOP( 1);
      int SAC_i;
      int SAC_WL_SHAPE_FACTOR( SACp_inl_3147__type_564, 0) = 1 * SAC_ND_A_SHAPE( SACp_inl_3147__type_564, 1);
      int SAC_WL_SHAPE_FACTOR( SACp_inl_3147__type_564, 1) = 1;

      /*
       * MT_SCHEDULER_BEGIN( 0, 2, 0, 0, 128, 2)
       */
      SAC_WL_MT_SCHEDULE_START( 0) = 0;
      SAC_WL_MT_SCHEDULE_STOP( 0) = 128;
      SAC_WL_MT_SCHEDULE_START( 1) = 0;
      SAC_WL_MT_SCHEDULE_STOP( 1) = 2;

      /*
       * WL_INIT_OFFSET( SACp_inl_3147__type_564, 2, SACp_inl_3153__type_563, 2)
       */
      SAC_WL_OFFSET( SACp_inl_3147__type_564)
        = SAC_WL_MT_SCHEDULE_START( 0) * SAC_WL_SHAPE_FACTOR( SACp_inl_3147__type_564, 0)
        + SAC_WL_MT_SCHEDULE_START( 1) * SAC_WL_SHAPE_FACTOR( SACp_inl_3147__type_564, 1);

      SAC_WL_STRIDE_LOOP0_BEGIN( 0, SACp_inl_3153__type_563, SACp_inl_3152__type_565, 0, 64, 1)
        SAC_WL_GRID_UNROLL_BEGIN( 0, SACp_inl_3153__type_563, SACp_inl_3152__type_565, 0, 1)
          SAC_WL_STRIDE_LOOP0_BEGIN( 1, SACp_inl_3153__type_563, SACp_inl_3151__type_566, 0, 1, 1)
            SAC_WL_GRID_UNROLL_BEGIN( 1, SACp_inl_3153__type_563, SACp_inl_3151__type_566, 0, 1)
              /*
               * ND_IDXS2OFFSET( SACp_inl_3153__type_563_64_2__, 2, SACp_inl_3152__type_565, SACp_inl_3151__type_566, 2, 64, 2)
               */
              SACp_inl_3153__type_563_64_2__ = ( 2* SACp_inl_3152__type_565+SACp_inl_3151__type_566) ;

              SACp_inl_3101__flat_65__SSA_1_64_2__ = (SACp_inl_3153__type_563_64_2__ + SACp_inl_3107_lb_imag__SSA_1_64_2__); 
              SAC_ND_IDX_SEL_S( SACp_inl_3101__flat_65__SSA_1_64_2__, SACl_rofu, SACp_inl_3100__flat_64__SSA_1)
              SAC_ND_IDX_SEL_S( SACp_inl_3101__flat_65__SSA_1_64_2__, SACl_fft_right, SACp_inl_3098__flat_62__SSA_1)
              SACp_inl_3097__flat_61__SSA_1 = (SACp_inl_3098__flat_62__SSA_1 * SACp_inl_3100__flat_64__SSA_1); 
              SAC_ND_IDX_SEL_S( SACp_inl_3153__type_563_64_2__, SACl_rofu, SACp_inl_3096__flat_60__SSA_1)
              SAC_ND_IDX_SEL_S( SACp_inl_3153__type_563_64_2__, SACl_fft_right, SACp_inl_3095__flat_59__SSA_1)
              SACp_inl_3094__flat_58__SSA_1 = (SACp_inl_3095__flat_59__SSA_1 * SACp_inl_3096__flat_60__SSA_1); 
              SACp_inl_3093_val__SSA_2 = (SACp_inl_3094__flat_58__SSA_1 - SACp_inl_3097__flat_61__SSA_1); 
              SAC_ND_IDX_SEL_S( SACp_inl_3153__type_563_64_2__, SACl_fft_left, SACp_inl_3137__flat_40)
              SACp_inl_3136__flat_39 = (SACp_inl_3137__flat_40 + SACp_inl_3093_val__SSA_2); 
              /*
               * WL_ASSIGN( SACp_inl_3136__flat_39, 0, SACp_inl_3147__type_564, 2, SACp_inl_3153__type_563, 2, SACp_inl_3152__type_565, SACp_inl_3151__type_566)
               */
              SAC_TR_WL_PRINT( ("index vector [%d, %d] (== offset %d) -- offset %d -- assign", SACp_inl_3152__type_565, SACp_inl_3151__type_566, ( SAC_ND_A_SHAPE( SACp_inl_3147__type_564, 1) * SACp_inl_3152__type_565 + SACp_inl_3151__type_566 ), SAC_WL_OFFSET( SACp_inl_3147__type_564)));
              SAC_ASSURE_TYPE( (SAC_ND_A_DIM( SACp_inl_3136__flat_39) == (SAC_ND_A_DIM( SACp_inl_3147__type_564) - 2)), ("WL expression with illegal dimension found!"));
              SAC_ASSURE_TYPE( (SAC_ND_A_SIZE( SACp_inl_3136__flat_39) == SAC_WL_SHAPE_FACTOR( SACp_inl_3147__type_564, 1)), ("WL expression with illegal size found!"));
              SAC_ND_WRITE_ARRAY( SACp_inl_3147__type_564, SAC_WL_OFFSET( SACp_inl_3147__type_564)) = SACp_inl_3136__flat_39;
              SAC_WL_OFFSET( SACp_inl_3147__type_564)++;

            SAC_WL_GRID_UNROLL_END( 1, SACp_inl_3153__type_563, SACp_inl_3151__type_566, 0, 1)
          SAC_WL_STRIDE_LOOP_END( 1, SACp_inl_3153__type_563, SACp_inl_3151__type_566, 0, 1, 1)
          SAC_WL_STRIDE_LOOP0_BEGIN( 1, SACp_inl_3153__type_563, SACp_inl_3151__type_566, 1, 2, 1)
            SAC_WL_GRID_UNROLL_BEGIN( 1, SACp_inl_3153__type_563, SACp_inl_3151__type_566, 0, 1)
              /*
               * ND_IDXS2OFFSET( SACp_inl_3153__type_563_64_2__, 2, SACp_inl_3152__type_565, SACp_inl_3151__type_566, 2, 64, 2)
               */
              SACp_inl_3153__type_563_64_2__ = ( 2* SACp_inl_3152__type_565+SACp_inl_3151__type_566) ;

              SACp_inl_3088__flat_74__SSA_1_64_2__ = (SACp_inl_3153__type_563_64_2__ + SACp_esd_3866_64_2__); 
              SAC_ND_IDX_SEL_S( SACp_inl_3088__flat_74__SSA_1_64_2__, SACl_rofu, SACp_inl_3087__flat_73__SSA_1)
              SAC_ND_IDX_SEL_S( SACp_inl_3153__type_563_64_2__, SACl_fft_right, SACp_inl_3086__flat_72__SSA_1)
              SACp_inl_3085__flat_71__SSA_1 = (SACp_inl_3086__flat_72__SSA_1 * SACp_inl_3087__flat_73__SSA_1); 
              SAC_ND_IDX_SEL_S( SACp_inl_3153__type_563_64_2__, SACl_rofu, SACp_inl_3084__flat_70__SSA_1)
              SAC_ND_IDX_SEL_S( SACp_inl_3088__flat_74__SSA_1_64_2__, SACl_fft_right, SACp_inl_3082__flat_68__SSA_1)
              SACp_inl_3081__flat_67__SSA_1 = (SACp_inl_3082__flat_68__SSA_1 * SACp_inl_3084__flat_70__SSA_1); 
              SACp_inl_3093_val__SSA_3 = (SACp_inl_3081__flat_67__SSA_1 + SACp_inl_3085__flat_71__SSA_1); 
              SAC_ND_IDX_SEL_S( SACp_inl_3153__type_563_64_2__, SACl_fft_left, SACp_inl_3137__flat_40__SSA_1)
              SACp_inl_3136__flat_39__SSA_1 = (SACp_inl_3137__flat_40__SSA_1 + SACp_inl_3093_val__SSA_3); 
              /*
               * WL_ASSIGN( SACp_inl_3136__flat_39__SSA_1, 0, SACp_inl_3147__type_564, 2, SACp_inl_3153__type_563, 2, SACp_inl_3152__type_565, SACp_inl_3151__type_566)
               */
              SAC_TR_WL_PRINT( ("index vector [%d, %d] (== offset %d) -- offset %d -- assign", SACp_inl_3152__type_565, SACp_inl_3151__type_566, ( SAC_ND_A_SHAPE( SACp_inl_3147__type_564, 1) * SACp_inl_3152__type_565 + SACp_inl_3151__type_566 ), SAC_WL_OFFSET( SACp_inl_3147__type_564)));
              SAC_ASSURE_TYPE( (SAC_ND_A_DIM( SACp_inl_3136__flat_39__SSA_1) == (SAC_ND_A_DIM( SACp_inl_3147__type_564) - 2)), ("WL expression with illegal dimension found!"));
              SAC_ASSURE_TYPE( (SAC_ND_A_SIZE( SACp_inl_3136__flat_39__SSA_1) == SAC_WL_SHAPE_FACTOR( SACp_inl_3147__type_564, 1)), ("WL expression with illegal size found!"));
              SAC_ND_WRITE_ARRAY( SACp_inl_3147__type_564, SAC_WL_OFFSET( SACp_inl_3147__type_564)) = SACp_inl_3136__flat_39__SSA_1;
              SAC_WL_OFFSET( SACp_inl_3147__type_564)++;

            SAC_WL_GRID_UNROLL_END( 1, SACp_inl_3153__type_563, SACp_inl_3151__type_566, 0, 1)
          SAC_WL_STRIDE_LOOP_END( 1, SACp_inl_3153__type_563, SACp_inl_3151__type_566, 1, 2, 1)
        SAC_WL_GRID_UNROLL_END( 0, SACp_inl_3153__type_563, SACp_inl_3152__type_565, 0, 1)
      SAC_WL_STRIDE_LOOP_END( 0, SACp_inl_3153__type_563, SACp_inl_3152__type_565, 0, 64, 1)
      SAC_WL_STRIDE_LOOP0_BEGIN( 0, SACp_inl_3153__type_563, SACp_inl_3152__type_565, 64, 128, 1)
        SAC_WL_GRID_UNROLL_BEGIN( 0, SACp_inl_3153__type_563, SACp_inl_3152__type_565, 0, 1)
          SAC_WL_STRIDE_LOOP0_BEGIN( 1, SACp_inl_3153__type_563, SACp_inl_3151__type_566, 0, 1, 1)
            SAC_WL_GRID_UNROLL_BEGIN( 1, SACp_inl_3153__type_563, SACp_inl_3151__type_566, 0, 1)
              /*
               * ND_IDXS2OFFSET( SACp_inl_3153__type_563_64_2__, 2, SACp_inl_3152__type_565, SACp_inl_3151__type_566, 2, 64, 2)
               */
              SACp_inl_3153__type_563_64_2__ = ( 2* SACp_inl_3152__type_565+SACp_inl_3151__type_566) ;

              SACp_inl_3149__type_560_64_2__ = (SACp_inl_3153__type_563_64_2__ + SACp_esd_3864_64_2__); 
              SACp_inl_3101__flat_65_64_2__ = (SACp_inl_3149__type_560_64_2__ + SACp_inl_3107_lb_imag__SSA_1_64_2__); 
              SAC_ND_IDX_SEL_S( SACp_inl_3101__flat_65_64_2__, SACl_rofu, SACp_inl_3100__flat_64)
              SAC_ND_IDX_SEL_S( SACp_inl_3101__flat_65_64_2__, SACl_fft_right, SACp_inl_3098__flat_62)
              SACp_inl_3097__flat_61 = (SACp_inl_3098__flat_62 * SACp_inl_3100__flat_64); 
              SAC_ND_IDX_SEL_S( SACp_inl_3149__type_560_64_2__, SACl_rofu, SACp_inl_3096__flat_60)
              SAC_ND_IDX_SEL_S( SACp_inl_3149__type_560_64_2__, SACl_fft_right, SACp_inl_3095__flat_59)
              SACp_inl_3094__flat_58 = (SACp_inl_3095__flat_59 * SACp_inl_3096__flat_60); 
              SACp_inl_3093_val = (SACp_inl_3094__flat_58 - SACp_inl_3097__flat_61); 
              SAC_ND_IDX_SEL_S( SACp_inl_3149__type_560_64_2__, SACl_fft_left, SACp_inl_3125__flat_47)
              SACp_inl_3124__flat_46 = (SACp_inl_3125__flat_47 - SACp_inl_3093_val); 
              /*
               * WL_ASSIGN( SACp_inl_3124__flat_46, 0, SACp_inl_3147__type_564, 2, SACp_inl_3153__type_563, 2, SACp_inl_3152__type_565, SACp_inl_3151__type_566)
               */
              SAC_TR_WL_PRINT( ("index vector [%d, %d] (== offset %d) -- offset %d -- assign", SACp_inl_3152__type_565, SACp_inl_3151__type_566, ( SAC_ND_A_SHAPE( SACp_inl_3147__type_564, 1) * SACp_inl_3152__type_565 + SACp_inl_3151__type_566 ), SAC_WL_OFFSET( SACp_inl_3147__type_564)));
              SAC_ASSURE_TYPE( (SAC_ND_A_DIM( SACp_inl_3124__flat_46) == (SAC_ND_A_DIM( SACp_inl_3147__type_564) - 2)), ("WL expression with illegal dimension found!"));
              SAC_ASSURE_TYPE( (SAC_ND_A_SIZE( SACp_inl_3124__flat_46) == SAC_WL_SHAPE_FACTOR( SACp_inl_3147__type_564, 1)), ("WL expression with illegal size found!"));
              SAC_ND_WRITE_ARRAY( SACp_inl_3147__type_564, SAC_WL_OFFSET( SACp_inl_3147__type_564)) = SACp_inl_3124__flat_46;
              SAC_WL_OFFSET( SACp_inl_3147__type_564)++;

            SAC_WL_GRID_UNROLL_END( 1, SACp_inl_3153__type_563, SACp_inl_3151__type_566, 0, 1)
          SAC_WL_STRIDE_LOOP_END( 1, SACp_inl_3153__type_563, SACp_inl_3151__type_566, 0, 1, 1)
          SAC_WL_STRIDE_LOOP0_BEGIN( 1, SACp_inl_3153__type_563, SACp_inl_3151__type_566, 1, 2, 1)
            SAC_WL_GRID_UNROLL_BEGIN( 1, SACp_inl_3153__type_563, SACp_inl_3151__type_566, 0, 1)
              /*
               * ND_IDXS2OFFSET( SACp_inl_3153__type_563_64_2__, 2, SACp_inl_3152__type_565, SACp_inl_3151__type_566, 2, 64, 2)
               */
              SACp_inl_3153__type_563_64_2__ = ( 2* SACp_inl_3152__type_565+SACp_inl_3151__type_566) ;

              SACp_inl_3149__type_560__SSA_1_64_2__ = (SACp_inl_3153__type_563_64_2__ + SACp_esd_3864_64_2__); 
              SACp_inl_3088__flat_74_64_2__ = (SACp_inl_3149__type_560__SSA_1_64_2__ + SACp_esd_3866_64_2__); 
              SAC_ND_IDX_SEL_S( SACp_inl_3088__flat_74_64_2__, SACl_rofu, SACp_inl_3087__flat_73)
              SAC_ND_IDX_SEL_S( SACp_inl_3149__type_560__SSA_1_64_2__, SACl_fft_right, SACp_inl_3086__flat_72)
              SACp_inl_3085__flat_71 = (SACp_inl_3086__flat_72 * SACp_inl_3087__flat_73); 
              SAC_ND_IDX_SEL_S( SACp_inl_3149__type_560__SSA_1_64_2__, SACl_rofu, SACp_inl_3084__flat_70)
              SAC_ND_IDX_SEL_S( SACp_inl_3088__flat_74_64_2__, SACl_fft_right, SACp_inl_3082__flat_68)
              SACp_inl_3081__flat_67 = (SACp_inl_3082__flat_68 * SACp_inl_3084__flat_70); 
              SACp_inl_3093_val__SSA_1 = (SACp_inl_3081__flat_67 + SACp_inl_3085__flat_71); 
              SAC_ND_IDX_SEL_S( SACp_inl_3149__type_560__SSA_1_64_2__, SACl_fft_left, SACp_inl_3125__flat_47__SSA_1)
              SACp_inl_3124__flat_46__SSA_1 = (SACp_inl_3125__flat_47__SSA_1 - SACp_inl_3093_val__SSA_1); 
              /*
               * WL_ASSIGN( SACp_inl_3124__flat_46__SSA_1, 0, SACp_inl_3147__type_564, 2, SACp_inl_3153__type_563, 2, SACp_inl_3152__type_565, SACp_inl_3151__type_566)
               */
              SAC_TR_WL_PRINT( ("index vector [%d, %d] (== offset %d) -- offset %d -- assign", SACp_inl_3152__type_565, SACp_inl_3151__type_566, ( SAC_ND_A_SHAPE( SACp_inl_3147__type_564, 1) * SACp_inl_3152__type_565 + SACp_inl_3151__type_566 ), SAC_WL_OFFSET( SACp_inl_3147__type_564)));
              SAC_ASSURE_TYPE( (SAC_ND_A_DIM( SACp_inl_3124__flat_46__SSA_1) == (SAC_ND_A_DIM( SACp_inl_3147__type_564) - 2)), ("WL expression with illegal dimension found!"));
              SAC_ASSURE_TYPE( (SAC_ND_A_SIZE( SACp_inl_3124__flat_46__SSA_1) == SAC_WL_SHAPE_FACTOR( SACp_inl_3147__type_564, 1)), ("WL expression with illegal size found!"));
              SAC_ND_WRITE_ARRAY( SACp_inl_3147__type_564, SAC_WL_OFFSET( SACp_inl_3147__type_564)) = SACp_inl_3124__flat_46__SSA_1;
              SAC_WL_OFFSET( SACp_inl_3147__type_564)++;

            SAC_WL_GRID_UNROLL_END( 1, SACp_inl_3153__type_563, SACp_inl_3151__type_566, 0, 1)
          SAC_WL_STRIDE_LOOP_END( 1, SACp_inl_3153__type_563, SACp_inl_3151__type_566, 1, 2, 1)
        SAC_WL_GRID_UNROLL_END( 0, SACp_inl_3153__type_563, SACp_inl_3152__type_565, 0, 1)
      SAC_WL_STRIDE_LOOP_END( 0, SACp_inl_3153__type_563, SACp_inl_3152__type_565, 64, 128, 1)
      /*
       * MT_SCHEDULER_END( 0, 2, 0, 0, 128, 2)
       */


      /*
       * WL_END__OFFSET( SACp_inl_3147__type_564, 2, SACp_inl_3153__type_563, 2)
       */
    }

  SAC_PF_END_WITH( genarray)
  SAC_ND_DEC_RC_FREE_ARRAY( SACl_fft_left, 1)
  SAC_ND_DEC_RC_FREE_ARRAY( SACl_fft_right, 1)
  SAC_ND_DEC_RC_FREE_ARRAY( SACl_rofu, 1)
  /*
   * ND_FUN_RET( , 1, out_rc, SACp_inl_3147__type_564, SAC__arg_1)
   */
  SAC_ND_RET_out_rc( SACp_inl_3147__type_564, SAC__arg_1)
  return;
}

/*
 * ND_FUN_DEC( SACf_FFT1d_Slice__d___MAIN__cpx_128_32_128___MAIN__cpx_64, void, 4, out_rc, double *, SAC__arg_1, in, double, SACl_dir, in_rc, double *, SACl_a, in_rc, double *, SACl_rofu)
 */
void SACf_FFT1d_Slice__d___MAIN__cpx_128_32_128___MAIN__cpx_64( SAC_ND_PARAM_out_rc( double *, SAC__arg_1), SAC_ND_PARAM_in( double, SACl_dir), SAC_ND_PARAM_in_rc( double *, SACl_a), SAC_ND_PARAM_in_rc( double *, SACl_rofu))
{ 
  /*
   * ND_KS_DECL_ARRAY( double, SACp_inl_4825_result__SSA_1, 4, 128, 32, 128, 2)
   */
  double *SACp_inl_4825_result__SSA_1;
  int SAC_ND_A_RC( SACp_inl_4825_result__SSA_1);
  const int SAC_ND_A_SIZE( SACp_inl_4825_result__SSA_1) = 128*32*128*2;
  const int SAC_ND_A_DIM( SACp_inl_4825_result__SSA_1) = 4;
  const int SAC_ND_A_SHAPE( SACp_inl_4825_result__SSA_1, 0) = 128;
  const int SAC_ND_A_SHAPE( SACp_inl_4825_result__SSA_1, 1) = 32;
  const int SAC_ND_A_SHAPE( SACp_inl_4825_result__SSA_1, 2) = 128;
  const int SAC_ND_A_SHAPE( SACp_inl_4825_result__SSA_1, 3) = 2;

  /*
   * ND_KS_DECL_ARRAY( double, SACp_inl_4824_slice__SSA_1, 2, 128, 2)
   */
  double *SACp_inl_4824_slice__SSA_1;
  int SAC_ND_A_RC( SACp_inl_4824_slice__SSA_1);
  const int SAC_ND_A_SIZE( SACp_inl_4824_slice__SSA_1) = 128*2;
  const int SAC_ND_A_DIM( SACp_inl_4824_slice__SSA_1) = 2;
  const int SAC_ND_A_SHAPE( SACp_inl_4824_slice__SSA_1, 0) = 128;
  const int SAC_ND_A_SHAPE( SACp_inl_4824_slice__SSA_1, 1) = 2;

  int SACp_inl_4822__type_683; 
  int SACp_inl_4821__type_682; 
  /*
   * ND_KS_DECL_ARRAY( int, SACp_inl_4820__flat_339_iv, 1, 2)
   */
  int *SACp_inl_4820__flat_339_iv;
  int SAC_ND_A_RC( SACp_inl_4820__flat_339_iv);
  const int SAC_ND_A_SIZE( SACp_inl_4820__flat_339_iv) = 2;
  const int SAC_ND_A_DIM( SACp_inl_4820__flat_339_iv) = 1;
  const int SAC_ND_A_SHAPE( SACp_inl_4820__flat_339_iv, 0) = 2;

  /*
   * ND_KS_DECL_ARRAY( int, SACp_inl_4764__type_610, 1, 2)
   */
  int *SACp_inl_4764__type_610;
  int SAC_ND_A_RC( SACp_inl_4764__type_610);
  const int SAC_ND_A_SIZE( SACp_inl_4764__type_610) = 2;
  const int SAC_ND_A_DIM( SACp_inl_4764__type_610) = 1;
  const int SAC_ND_A_SHAPE( SACp_inl_4764__type_610, 0) = 2;

  int SACp_inl_4763__type_605; 
  int SACp_inl_4762__type_604; 
  int SACp_inl_4757__type_603_128_32_128_2__; 
  double SACp_inl_4756__type_602; 
  /*
   * ND_KS_DECL_ARRAY( double, SACp_inl_4755_rd, 2, 128, 2)
   */
  double *SACp_inl_4755_rd;
  int SAC_ND_A_RC( SACp_inl_4755_rd);
  const int SAC_ND_A_SIZE( SACp_inl_4755_rd) = 128*2;
  const int SAC_ND_A_DIM( SACp_inl_4755_rd) = 2;
  const int SAC_ND_A_SHAPE( SACp_inl_4755_rd, 0) = 128;
  const int SAC_ND_A_SHAPE( SACp_inl_4755_rd, 1) = 2;


  /*
   * ND_KS_DECL_ARRAY_ARG( SACl_rofu, 2, 64, 2)
   */
  const int SAC_ND_A_SIZE( SACl_rofu) = 64*2;
  const int SAC_ND_A_DIM( SACl_rofu) = 2;
  const int SAC_ND_A_SHAPE( SACl_rofu, 0) = 64;
  const int SAC_ND_A_SHAPE( SACl_rofu, 1) = 2;

  /*
   * ND_KS_DECL_ARRAY_ARG( SACl_a, 4, 128, 32, 128, 2)
   */
  const int SAC_ND_A_SIZE( SACl_a) = 128*32*128*2;
  const int SAC_ND_A_DIM( SACl_a) = 4;
  const int SAC_ND_A_SHAPE( SACl_a, 0) = 128;
  const int SAC_ND_A_SHAPE( SACl_a, 1) = 32;
  const int SAC_ND_A_SHAPE( SACl_a, 2) = 128;
  const int SAC_ND_A_SHAPE( SACl_a, 3) = 2;

  SAC_ND_ALLOC_ARRAY( double, SACp_inl_4825_result__SSA_1, 1)
  SAC_PF_BEGIN_WITH( modarray)
    /*
     * WL_BEGIN__OFFSET( SACp_inl_4825_result__SSA_1, 4, SACp_inl_4820__flat_339_iv, 2)
     */
    { int SAC_WL_OFFSET( SACp_inl_4825_result__SSA_1);
      int SAC_WL_MT_SCHEDULE_START( 0);
      int SAC_WL_MT_SCHEDULE_STOP( 0);
      int SAC_WL_MT_SCHEDULE_START( 1);
      int SAC_WL_MT_SCHEDULE_STOP( 1);
      int SAC_i;
      int SAC_WL_SHAPE_FACTOR( SACp_inl_4825_result__SSA_1, 0) = 1 * SAC_ND_A_SHAPE( SACp_inl_4825_result__SSA_1, 1) * SAC_ND_A_SHAPE( SACp_inl_4825_result__SSA_1, 2) * SAC_ND_A_SHAPE( SACp_inl_4825_result__SSA_1, 3);
      int SAC_WL_SHAPE_FACTOR( SACp_inl_4825_result__SSA_1, 1) = 1 * SAC_ND_A_SHAPE( SACp_inl_4825_result__SSA_1, 2) * SAC_ND_A_SHAPE( SACp_inl_4825_result__SSA_1, 3);

      /*
       * MT_SCHEDULER_BEGIN( 0, 2, 0, 0, 128, 32)
       */
      SAC_WL_MT_SCHEDULE_START( 0) = 0;
      SAC_WL_MT_SCHEDULE_STOP( 0) = 128;
      SAC_WL_MT_SCHEDULE_START( 1) = 0;
      SAC_WL_MT_SCHEDULE_STOP( 1) = 32;

      /*
       * WL_INIT_OFFSET( SACp_inl_4825_result__SSA_1, 4, SACp_inl_4820__flat_339_iv, 2)
       */
      SAC_WL_OFFSET( SACp_inl_4825_result__SSA_1)
        = SAC_WL_MT_SCHEDULE_START( 0) * SAC_WL_SHAPE_FACTOR( SACp_inl_4825_result__SSA_1, 0)
        + SAC_WL_MT_SCHEDULE_START( 1) * SAC_WL_SHAPE_FACTOR( SACp_inl_4825_result__SSA_1, 1);

      SAC_WL_STRIDE_LOOP0_BEGIN( 0, SACp_inl_4820__flat_339_iv, SACp_inl_4821__type_682, 0, 128, 1)
        SAC_WL_GRID_UNROLL_BEGIN( 0, SACp_inl_4820__flat_339_iv, SACp_inl_4821__type_682, 0, 1)
          SAC_WL_STRIDE_LOOP0_BEGIN( 1, SACp_inl_4820__flat_339_iv, SACp_inl_4822__type_683, 0, 32, 1)
            SAC_WL_GRID_UNROLL_BEGIN( 1, SACp_inl_4820__flat_339_iv, SACp_inl_4822__type_683, 0, 1)
              SAC_ND_INC_RC( SACl_rofu, 1)
              SAC_ND_ALLOC_ARRAY( double, SACp_inl_4755_rd, 1)
              SAC_PF_BEGIN_WITH( genarray)
                /*
                 * WL_BEGIN__OFFSET( SACp_inl_4755_rd, 2, SACp_inl_4764__type_610, 2)
                 */
                { int SAC_WL_OFFSET( SACp_inl_4755_rd);
                  int SAC_WL_MT_SCHEDULE_START( 0);
                  int SAC_WL_MT_SCHEDULE_STOP( 0);
                  int SAC_WL_MT_SCHEDULE_START( 1);
                  int SAC_WL_MT_SCHEDULE_STOP( 1);
                  int SAC_i;
                  int SAC_WL_SHAPE_FACTOR( SACp_inl_4755_rd, 0) = 1 * SAC_ND_A_SHAPE( SACp_inl_4755_rd, 1);
                  int SAC_WL_SHAPE_FACTOR( SACp_inl_4755_rd, 1) = 1;

                  /*
                   * MT_SCHEDULER_BEGIN( 0, 2, 0, 0, 128, 2)
                   */
                  SAC_WL_MT_SCHEDULE_START( 0) = 0;
                  SAC_WL_MT_SCHEDULE_STOP( 0) = 128;
                  SAC_WL_MT_SCHEDULE_START( 1) = 0;
                  SAC_WL_MT_SCHEDULE_STOP( 1) = 2;

                  /*
                   * WL_INIT_OFFSET( SACp_inl_4755_rd, 2, SACp_inl_4764__type_610, 2)
                   */
                  SAC_WL_OFFSET( SACp_inl_4755_rd)
                    = SAC_WL_MT_SCHEDULE_START( 0) * SAC_WL_SHAPE_FACTOR( SACp_inl_4755_rd, 0)
                    + SAC_WL_MT_SCHEDULE_START( 1) * SAC_WL_SHAPE_FACTOR( SACp_inl_4755_rd, 1);

                  SAC_WL_STRIDE_LOOP0_BEGIN( 0, SACp_inl_4764__type_610, SACp_inl_4763__type_605, 0, 128, 1)
                    SAC_WL_GRID_UNROLL_BEGIN( 0, SACp_inl_4764__type_610, SACp_inl_4763__type_605, 0, 1)
                      SAC_WL_STRIDE_LOOP0_BEGIN( 1, SACp_inl_4764__type_610, SACp_inl_4762__type_604, 0, 2, 1)
                        SAC_WL_GRID_UNROLL_BEGIN( 1, SACp_inl_4764__type_610, SACp_inl_4762__type_604, 0, 1)
                          SACp_inl_4757__type_603_128_32_128_2__ = ((((((SACp_inl_4821__type_682 * 32) + SACp_inl_4822__type_683) * 128) + SACp_inl_4763__type_605) * 2) + SACp_inl_4762__type_604); 
                          SAC_ND_IDX_SEL_S( SACp_inl_4757__type_603_128_32_128_2__, SACl_a, SACp_inl_4756__type_602)
                          /*
                           * WL_ASSIGN( SACp_inl_4756__type_602, 0, SACp_inl_4755_rd, 2, SACp_inl_4764__type_610, 2, SACp_inl_4763__type_605, SACp_inl_4762__type_604)
                           */
                          SAC_TR_WL_PRINT( ("index vector [%d, %d] (== offset %d) -- offset %d -- assign", SACp_inl_4763__type_605, SACp_inl_4762__type_604, ( SAC_ND_A_SHAPE( SACp_inl_4755_rd, 1) * SACp_inl_4763__type_605 + SACp_inl_4762__type_604 ), SAC_WL_OFFSET( SACp_inl_4755_rd)));
                          SAC_ASSURE_TYPE( (SAC_ND_A_DIM( SACp_inl_4756__type_602) == (SAC_ND_A_DIM( SACp_inl_4755_rd) - 2)), ("WL expression with illegal dimension found!"));
                          SAC_ASSURE_TYPE( (SAC_ND_A_SIZE( SACp_inl_4756__type_602) == SAC_WL_SHAPE_FACTOR( SACp_inl_4755_rd, 1)), ("WL expression with illegal size found!"));
                          SAC_ND_WRITE_ARRAY( SACp_inl_4755_rd, SAC_WL_OFFSET( SACp_inl_4755_rd)) = SACp_inl_4756__type_602;
                          SAC_WL_OFFSET( SACp_inl_4755_rd)++;

                        SAC_WL_GRID_UNROLL_END( 1, SACp_inl_4764__type_610, SACp_inl_4762__type_604, 0, 1)
                      SAC_WL_STRIDE_LOOP_END( 1, SACp_inl_4764__type_610, SACp_inl_4762__type_604, 0, 2, 1)
                    SAC_WL_GRID_UNROLL_END( 0, SACp_inl_4764__type_610, SACp_inl_4763__type_605, 0, 1)
                  SAC_WL_STRIDE_LOOP_END( 0, SACp_inl_4764__type_610, SACp_inl_4763__type_605, 0, 128, 1)
                  /*
                   * MT_SCHEDULER_END( 0, 2, 0, 0, 128, 2)
                   */


                  /*
                   * WL_END__OFFSET( SACp_inl_4755_rd, 2, SACp_inl_4764__type_610, 2)
                   */
                }

              SAC_PF_END_WITH( genarray)
              /*
               * ND_FUN_AP( SACf_FFT1d__d___MAIN__cpx_128___MAIN__cpx_64, , 4, out_rc, SACp_inl_4824_slice__SSA_1, in, SACl_dir, in_rc, SACp_inl_4755_rd, in_rc, SACl_rofu)
               */
              SACf_FFT1d__d___MAIN__cpx_128___MAIN__cpx_64( SAC_ND_ARG_out_rc( SACp_inl_4824_slice__SSA_1), SAC_ND_ARG_in( SACl_dir), SAC_ND_ARG_in_rc( SACp_inl_4755_rd), SAC_ND_ARG_in_rc( SACl_rofu));

              /*
               * WL_ASSIGN( SACp_inl_4824_slice__SSA_1, 2, SACp_inl_4825_result__SSA_1, 4, SACp_inl_4820__flat_339_iv, 2, SACp_inl_4821__type_682, SACp_inl_4822__type_683)
               */
              SAC_TR_WL_PRINT( ("index vector [%d, %d] (== offset %d) -- offset %d -- assign", SACp_inl_4821__type_682, SACp_inl_4822__type_683, ( SAC_ND_A_SHAPE( SACp_inl_4825_result__SSA_1, 1) * SACp_inl_4821__type_682 + SACp_inl_4822__type_683 ), SAC_WL_OFFSET( SACp_inl_4825_result__SSA_1)));
              SAC_ASSURE_TYPE( (SAC_ND_A_DIM( SACp_inl_4824_slice__SSA_1) == (SAC_ND_A_DIM( SACp_inl_4825_result__SSA_1) - 2)), ("WL expression with illegal dimension found!"));
              SAC_ASSURE_TYPE( (SAC_ND_A_SIZE( SACp_inl_4824_slice__SSA_1) == SAC_WL_SHAPE_FACTOR( SACp_inl_4825_result__SSA_1, 1)), ("WL expression with illegal size found!"));
              { int SAC_i;
                for (SAC_i = 0; SAC_i < SAC_ND_A_SIZE( SACp_inl_4824_slice__SSA_1); SAC_i++) { 
                  SAC_ND_WRITE( SACp_inl_4825_result__SSA_1, SAC_WL_OFFSET( SACp_inl_4825_result__SSA_1)) = SAC_ND_READ( SACp_inl_4824_slice__SSA_1, SAC_i);
                  SAC_WL_OFFSET( SACp_inl_4825_result__SSA_1)++;
                }
              }

              SAC_ND_DEC_RC_FREE_ARRAY( SACp_inl_4824_slice__SSA_1, 1)
            SAC_WL_GRID_UNROLL_END( 1, SACp_inl_4820__flat_339_iv, SACp_inl_4822__type_683, 0, 1)
          SAC_WL_STRIDE_LOOP_END( 1, SACp_inl_4820__flat_339_iv, SACp_inl_4822__type_683, 0, 32, 1)
        SAC_WL_GRID_UNROLL_END( 0, SACp_inl_4820__flat_339_iv, SACp_inl_4821__type_682, 0, 1)
      SAC_WL_STRIDE_LOOP_END( 0, SACp_inl_4820__flat_339_iv, SACp_inl_4821__type_682, 0, 128, 1)
      /*
       * MT_SCHEDULER_END( 0, 2, 0, 0, 128, 32)
       */


      /*
       * WL_END__OFFSET( SACp_inl_4825_result__SSA_1, 4, SACp_inl_4820__flat_339_iv, 2)
       */
    }

  SAC_PF_END_WITH( modarray)
  SAC_ND_DEC_RC_FREE_ARRAY( SACl_rofu, 1)
  SAC_ND_DEC_RC_FREE_ARRAY( SACl_a, 1)
  /*
   * ND_FUN_RET( , 1, out_rc, SACp_inl_4825_result__SSA_1, SAC__arg_1)
   */
  SAC_ND_RET_out_rc( SACp_inl_4825_result__SSA_1, SAC__arg_1)
  return;
}

/*
 * ND_FUN_DEC( SACf_FFT1d_Slice__d___MAIN__cpx_128_128_32___MAIN__cpx_64, void, 4, out_rc, double *, SAC__arg_1, in, double, SACl_dir, in_rc, double *, SACl_a, in_rc, double *, SACl_rofu)
 */
void SACf_FFT1d_Slice__d___MAIN__cpx_128_128_32___MAIN__cpx_64( SAC_ND_PARAM_out_rc( double *, SAC__arg_1), SAC_ND_PARAM_in( double, SACl_dir), SAC_ND_PARAM_in_rc( double *, SACl_a), SAC_ND_PARAM_in_rc( double *, SACl_rofu))
{ 
  /*
   * ND_KS_DECL_ARRAY( double, SACp_inl_4925_result, 4, 128, 128, 32, 2)
   */
  double *SACp_inl_4925_result;
  int SAC_ND_A_RC( SACp_inl_4925_result);
  const int SAC_ND_A_SIZE( SACp_inl_4925_result) = 128*128*32*2;
  const int SAC_ND_A_DIM( SACp_inl_4925_result) = 4;
  const int SAC_ND_A_SHAPE( SACp_inl_4925_result, 0) = 128;
  const int SAC_ND_A_SHAPE( SACp_inl_4925_result, 1) = 128;
  const int SAC_ND_A_SHAPE( SACp_inl_4925_result, 2) = 32;
  const int SAC_ND_A_SHAPE( SACp_inl_4925_result, 3) = 2;

  /*
   * ND_KS_DECL_ARRAY( double, SACp_inl_4924_slice, 2, 32, 2)
   */
  double *SACp_inl_4924_slice;
  int SAC_ND_A_RC( SACp_inl_4924_slice);
  const int SAC_ND_A_SIZE( SACp_inl_4924_slice) = 32*2;
  const int SAC_ND_A_DIM( SACp_inl_4924_slice) = 2;
  const int SAC_ND_A_SHAPE( SACp_inl_4924_slice, 0) = 32;
  const int SAC_ND_A_SHAPE( SACp_inl_4924_slice, 1) = 2;

  int SACp_inl_4922__type_582; 
  int SACp_inl_4921__type_581; 
  /*
   * ND_KS_DECL_ARRAY( int, SACp_inl_4920__flat_329_iv, 1, 2)
   */
  int *SACp_inl_4920__flat_329_iv;
  int SAC_ND_A_RC( SACp_inl_4920__flat_329_iv);
  const int SAC_ND_A_SIZE( SACp_inl_4920__flat_329_iv) = 2;
  const int SAC_ND_A_DIM( SACp_inl_4920__flat_329_iv) = 1;
  const int SAC_ND_A_SHAPE( SACp_inl_4920__flat_329_iv, 0) = 2;

  /*
   * ND_KS_DECL_ARRAY( double, SACp_inl_4910__flat_298, 2, 16, 2)
   */
  double *SACp_inl_4910__flat_298;
  int SAC_ND_A_RC( SACp_inl_4910__flat_298);
  const int SAC_ND_A_SIZE( SACp_inl_4910__flat_298) = 16*2;
  const int SAC_ND_A_DIM( SACp_inl_4910__flat_298) = 2;
  const int SAC_ND_A_SHAPE( SACp_inl_4910__flat_298, 0) = 16;
  const int SAC_ND_A_SHAPE( SACp_inl_4910__flat_298, 1) = 2;

  double SACp_inl_4909__flat_300; 
  int SACp_inl_4908__flat_301_64_2__; 
  int SACp_inl_4907__flat_302; 
  int SACp_inl_4888__type_580; 
  int SACp_inl_4887__type_579; 
  /*
   * ND_KS_DECL_ARRAY( int, SACp_inl_4886__flat_299_iv, 1, 2)
   */
  int *SACp_inl_4886__flat_299_iv;
  int SAC_ND_A_RC( SACp_inl_4886__flat_299_iv);
  const int SAC_ND_A_SIZE( SACp_inl_4886__flat_299_iv) = 2;
  const int SAC_ND_A_DIM( SACp_inl_4886__flat_299_iv) = 1;
  const int SAC_ND_A_SHAPE( SACp_inl_4886__flat_299_iv, 0) = 2;

  /*
   * ND_KS_DECL_ARRAY( int, SACp_inl_4860__type_591, 1, 2)
   */
  int *SACp_inl_4860__type_591;
  int SAC_ND_A_RC( SACp_inl_4860__type_591);
  const int SAC_ND_A_SIZE( SACp_inl_4860__type_591) = 2;
  const int SAC_ND_A_DIM( SACp_inl_4860__type_591) = 1;
  const int SAC_ND_A_SHAPE( SACp_inl_4860__type_591, 0) = 2;

  int SACp_inl_4859__type_586; 
  int SACp_inl_4858__type_585; 
  int SACp_inl_4853__type_584_128_128_32_2__; 
  double SACp_inl_4852__type_583; 
  /*
   * ND_KS_DECL_ARRAY( double, SACp_inl_4851_rd, 2, 32, 2)
   */
  double *SACp_inl_4851_rd;
  int SAC_ND_A_RC( SACp_inl_4851_rd);
  const int SAC_ND_A_SIZE( SACp_inl_4851_rd) = 32*2;
  const int SAC_ND_A_DIM( SACp_inl_4851_rd) = 2;
  const int SAC_ND_A_SHAPE( SACp_inl_4851_rd, 0) = 32;
  const int SAC_ND_A_SHAPE( SACp_inl_4851_rd, 1) = 2;


  /*
   * ND_KS_DECL_ARRAY_ARG( SACl_rofu, 2, 64, 2)
   */
  const int SAC_ND_A_SIZE( SACl_rofu) = 64*2;
  const int SAC_ND_A_DIM( SACl_rofu) = 2;
  const int SAC_ND_A_SHAPE( SACl_rofu, 0) = 64;
  const int SAC_ND_A_SHAPE( SACl_rofu, 1) = 2;

  /*
   * ND_KS_DECL_ARRAY_ARG( SACl_a, 4, 128, 128, 32, 2)
   */
  const int SAC_ND_A_SIZE( SACl_a) = 128*128*32*2;
  const int SAC_ND_A_DIM( SACl_a) = 4;
  const int SAC_ND_A_SHAPE( SACl_a, 0) = 128;
  const int SAC_ND_A_SHAPE( SACl_a, 1) = 128;
  const int SAC_ND_A_SHAPE( SACl_a, 2) = 32;
  const int SAC_ND_A_SHAPE( SACl_a, 3) = 2;

  SAC_ND_ALLOC_ARRAY( double, SACp_inl_4910__flat_298, 1)
  SAC_PF_BEGIN_WITH( genarray)
    /*
     * WL_BEGIN__OFFSET( SACp_inl_4910__flat_298, 2, SACp_inl_4886__flat_299_iv, 2)
     */
    { int SAC_WL_OFFSET( SACp_inl_4910__flat_298);
      int SAC_WL_MT_SCHEDULE_START( 0);
      int SAC_WL_MT_SCHEDULE_STOP( 0);
      int SAC_WL_MT_SCHEDULE_START( 1);
      int SAC_WL_MT_SCHEDULE_STOP( 1);
      int SAC_i;
      int SAC_WL_SHAPE_FACTOR( SACp_inl_4910__flat_298, 0) = 1 * SAC_ND_A_SHAPE( SACp_inl_4910__flat_298, 1);
      int SAC_WL_SHAPE_FACTOR( SACp_inl_4910__flat_298, 1) = 1;

      /*
       * MT_SCHEDULER_BEGIN( 0, 2, 0, 0, 16, 2)
       */
      SAC_WL_MT_SCHEDULE_START( 0) = 0;
      SAC_WL_MT_SCHEDULE_STOP( 0) = 16;
      SAC_WL_MT_SCHEDULE_START( 1) = 0;
      SAC_WL_MT_SCHEDULE_STOP( 1) = 2;

      /*
       * WL_INIT_OFFSET( SACp_inl_4910__flat_298, 2, SACp_inl_4886__flat_299_iv, 2)
       */
      SAC_WL_OFFSET( SACp_inl_4910__flat_298)
        = SAC_WL_MT_SCHEDULE_START( 0) * SAC_WL_SHAPE_FACTOR( SACp_inl_4910__flat_298, 0)
        + SAC_WL_MT_SCHEDULE_START( 1) * SAC_WL_SHAPE_FACTOR( SACp_inl_4910__flat_298, 1);

      SAC_WL_STRIDE_LOOP0_BEGIN( 0, SACp_inl_4886__flat_299_iv, SACp_inl_4887__type_579, 0, 16, 1)
        SAC_WL_GRID_UNROLL_BEGIN( 0, SACp_inl_4886__flat_299_iv, SACp_inl_4887__type_579, 0, 1)
          SAC_WL_STRIDE_LOOP0_BEGIN( 1, SACp_inl_4886__flat_299_iv, SACp_inl_4888__type_580, 0, 2, 1)
            SAC_WL_GRID_UNROLL_BEGIN( 1, SACp_inl_4886__flat_299_iv, SACp_inl_4888__type_580, 0, 1)
              SACp_inl_4907__flat_302 = (4 * SACp_inl_4887__type_579); 
              SACp_inl_4908__flat_301_64_2__ = ((SACp_inl_4907__flat_302 * 2) + SACp_inl_4888__type_580); 
              SAC_ND_IDX_SEL_S( SACp_inl_4908__flat_301_64_2__, SACl_rofu, SACp_inl_4909__flat_300)
              /*
               * WL_ASSIGN( SACp_inl_4909__flat_300, 0, SACp_inl_4910__flat_298, 2, SACp_inl_4886__flat_299_iv, 2, SACp_inl_4887__type_579, SACp_inl_4888__type_580)
               */
              SAC_TR_WL_PRINT( ("index vector [%d, %d] (== offset %d) -- offset %d -- assign", SACp_inl_4887__type_579, SACp_inl_4888__type_580, ( SAC_ND_A_SHAPE( SACp_inl_4910__flat_298, 1) * SACp_inl_4887__type_579 + SACp_inl_4888__type_580 ), SAC_WL_OFFSET( SACp_inl_4910__flat_298)));
              SAC_ASSURE_TYPE( (SAC_ND_A_DIM( SACp_inl_4909__flat_300) == (SAC_ND_A_DIM( SACp_inl_4910__flat_298) - 2)), ("WL expression with illegal dimension found!"));
              SAC_ASSURE_TYPE( (SAC_ND_A_SIZE( SACp_inl_4909__flat_300) == SAC_WL_SHAPE_FACTOR( SACp_inl_4910__flat_298, 1)), ("WL expression with illegal size found!"));
              SAC_ND_WRITE_ARRAY( SACp_inl_4910__flat_298, SAC_WL_OFFSET( SACp_inl_4910__flat_298)) = SACp_inl_4909__flat_300;
              SAC_WL_OFFSET( SACp_inl_4910__flat_298)++;

            SAC_WL_GRID_UNROLL_END( 1, SACp_inl_4886__flat_299_iv, SACp_inl_4888__type_580, 0, 1)
          SAC_WL_STRIDE_LOOP_END( 1, SACp_inl_4886__flat_299_iv, SACp_inl_4888__type_580, 0, 2, 1)
        SAC_WL_GRID_UNROLL_END( 0, SACp_inl_4886__flat_299_iv, SACp_inl_4887__type_579, 0, 1)
      SAC_WL_STRIDE_LOOP_END( 0, SACp_inl_4886__flat_299_iv, SACp_inl_4887__type_579, 0, 16, 1)
      /*
       * MT_SCHEDULER_END( 0, 2, 0, 0, 16, 2)
       */


      /*
       * WL_END__OFFSET( SACp_inl_4910__flat_298, 2, SACp_inl_4886__flat_299_iv, 2)
       */
    }

  SAC_PF_END_WITH( genarray)
  SAC_ND_DEC_RC_FREE_ARRAY( SACl_rofu, 1)
  SAC_ND_ALLOC_ARRAY( double, SACp_inl_4925_result, 1)
  SAC_PF_BEGIN_WITH( modarray)
    /*
     * WL_BEGIN__OFFSET( SACp_inl_4925_result, 4, SACp_inl_4920__flat_329_iv, 2)
     */
    { int SAC_WL_OFFSET( SACp_inl_4925_result);
      int SAC_WL_MT_SCHEDULE_START( 0);
      int SAC_WL_MT_SCHEDULE_STOP( 0);
      int SAC_WL_MT_SCHEDULE_START( 1);
      int SAC_WL_MT_SCHEDULE_STOP( 1);
      int SAC_i;
      int SAC_WL_SHAPE_FACTOR( SACp_inl_4925_result, 0) = 1 * SAC_ND_A_SHAPE( SACp_inl_4925_result, 1) * SAC_ND_A_SHAPE( SACp_inl_4925_result, 2) * SAC_ND_A_SHAPE( SACp_inl_4925_result, 3);
      int SAC_WL_SHAPE_FACTOR( SACp_inl_4925_result, 1) = 1 * SAC_ND_A_SHAPE( SACp_inl_4925_result, 2) * SAC_ND_A_SHAPE( SACp_inl_4925_result, 3);

      /*
       * MT_SCHEDULER_BEGIN( 0, 2, 0, 0, 128, 128)
       */
      SAC_WL_MT_SCHEDULE_START( 0) = 0;
      SAC_WL_MT_SCHEDULE_STOP( 0) = 128;
      SAC_WL_MT_SCHEDULE_START( 1) = 0;
      SAC_WL_MT_SCHEDULE_STOP( 1) = 128;

      /*
       * WL_INIT_OFFSET( SACp_inl_4925_result, 4, SACp_inl_4920__flat_329_iv, 2)
       */
      SAC_WL_OFFSET( SACp_inl_4925_result)
        = SAC_WL_MT_SCHEDULE_START( 0) * SAC_WL_SHAPE_FACTOR( SACp_inl_4925_result, 0)
        + SAC_WL_MT_SCHEDULE_START( 1) * SAC_WL_SHAPE_FACTOR( SACp_inl_4925_result, 1);

      SAC_WL_STRIDE_LOOP0_BEGIN( 0, SACp_inl_4920__flat_329_iv, SACp_inl_4921__type_581, 0, 128, 1)
        SAC_WL_GRID_UNROLL_BEGIN( 0, SACp_inl_4920__flat_329_iv, SACp_inl_4921__type_581, 0, 1)
          SAC_WL_STRIDE_LOOP0_BEGIN( 1, SACp_inl_4920__flat_329_iv, SACp_inl_4922__type_582, 0, 128, 1)
            SAC_WL_GRID_UNROLL_BEGIN( 1, SACp_inl_4920__flat_329_iv, SACp_inl_4922__type_582, 0, 1)
              SAC_ND_INC_RC( SACp_inl_4910__flat_298, 1)
              SAC_ND_ALLOC_ARRAY( double, SACp_inl_4851_rd, 1)
              SAC_PF_BEGIN_WITH( genarray)
                /*
                 * WL_BEGIN__OFFSET( SACp_inl_4851_rd, 2, SACp_inl_4860__type_591, 2)
                 */
                { int SAC_WL_OFFSET( SACp_inl_4851_rd);
                  int SAC_WL_MT_SCHEDULE_START( 0);
                  int SAC_WL_MT_SCHEDULE_STOP( 0);
                  int SAC_WL_MT_SCHEDULE_START( 1);
                  int SAC_WL_MT_SCHEDULE_STOP( 1);
                  int SAC_i;
                  int SAC_WL_SHAPE_FACTOR( SACp_inl_4851_rd, 0) = 1 * SAC_ND_A_SHAPE( SACp_inl_4851_rd, 1);
                  int SAC_WL_SHAPE_FACTOR( SACp_inl_4851_rd, 1) = 1;

                  /*
                   * MT_SCHEDULER_BEGIN( 0, 2, 0, 0, 32, 2)
                   */
                  SAC_WL_MT_SCHEDULE_START( 0) = 0;
                  SAC_WL_MT_SCHEDULE_STOP( 0) = 32;
                  SAC_WL_MT_SCHEDULE_START( 1) = 0;
                  SAC_WL_MT_SCHEDULE_STOP( 1) = 2;

                  /*
                   * WL_INIT_OFFSET( SACp_inl_4851_rd, 2, SACp_inl_4860__type_591, 2)
                   */
                  SAC_WL_OFFSET( SACp_inl_4851_rd)
                    = SAC_WL_MT_SCHEDULE_START( 0) * SAC_WL_SHAPE_FACTOR( SACp_inl_4851_rd, 0)
                    + SAC_WL_MT_SCHEDULE_START( 1) * SAC_WL_SHAPE_FACTOR( SACp_inl_4851_rd, 1);

                  SAC_WL_STRIDE_LOOP0_BEGIN( 0, SACp_inl_4860__type_591, SACp_inl_4859__type_586, 0, 32, 1)
                    SAC_WL_GRID_UNROLL_BEGIN( 0, SACp_inl_4860__type_591, SACp_inl_4859__type_586, 0, 1)
                      SAC_WL_STRIDE_LOOP0_BEGIN( 1, SACp_inl_4860__type_591, SACp_inl_4858__type_585, 0, 2, 1)
                        SAC_WL_GRID_UNROLL_BEGIN( 1, SACp_inl_4860__type_591, SACp_inl_4858__type_585, 0, 1)
                          SACp_inl_4853__type_584_128_128_32_2__ = ((((((SACp_inl_4921__type_581 * 128) + SACp_inl_4922__type_582) * 32) + SACp_inl_4859__type_586) * 2) + SACp_inl_4858__type_585); 
                          SAC_ND_IDX_SEL_S( SACp_inl_4853__type_584_128_128_32_2__, SACl_a, SACp_inl_4852__type_583)
                          /*
                           * WL_ASSIGN( SACp_inl_4852__type_583, 0, SACp_inl_4851_rd, 2, SACp_inl_4860__type_591, 2, SACp_inl_4859__type_586, SACp_inl_4858__type_585)
                           */
                          SAC_TR_WL_PRINT( ("index vector [%d, %d] (== offset %d) -- offset %d -- assign", SACp_inl_4859__type_586, SACp_inl_4858__type_585, ( SAC_ND_A_SHAPE( SACp_inl_4851_rd, 1) * SACp_inl_4859__type_586 + SACp_inl_4858__type_585 ), SAC_WL_OFFSET( SACp_inl_4851_rd)));
                          SAC_ASSURE_TYPE( (SAC_ND_A_DIM( SACp_inl_4852__type_583) == (SAC_ND_A_DIM( SACp_inl_4851_rd) - 2)), ("WL expression with illegal dimension found!"));
                          SAC_ASSURE_TYPE( (SAC_ND_A_SIZE( SACp_inl_4852__type_583) == SAC_WL_SHAPE_FACTOR( SACp_inl_4851_rd, 1)), ("WL expression with illegal size found!"));
                          SAC_ND_WRITE_ARRAY( SACp_inl_4851_rd, SAC_WL_OFFSET( SACp_inl_4851_rd)) = SACp_inl_4852__type_583;
                          SAC_WL_OFFSET( SACp_inl_4851_rd)++;

                        SAC_WL_GRID_UNROLL_END( 1, SACp_inl_4860__type_591, SACp_inl_4858__type_585, 0, 1)
                      SAC_WL_STRIDE_LOOP_END( 1, SACp_inl_4860__type_591, SACp_inl_4858__type_585, 0, 2, 1)
                    SAC_WL_GRID_UNROLL_END( 0, SACp_inl_4860__type_591, SACp_inl_4859__type_586, 0, 1)
                  SAC_WL_STRIDE_LOOP_END( 0, SACp_inl_4860__type_591, SACp_inl_4859__type_586, 0, 32, 1)
                  /*
                   * MT_SCHEDULER_END( 0, 2, 0, 0, 32, 2)
                   */


                  /*
                   * WL_END__OFFSET( SACp_inl_4851_rd, 2, SACp_inl_4860__type_591, 2)
                   */
                }

              SAC_PF_END_WITH( genarray)
              /*
               * ND_FUN_AP( SACf_FFT1d__d___MAIN__cpx_32___MAIN__cpx_16, , 4, out_rc, SACp_inl_4924_slice, in, SACl_dir, in_rc, SACp_inl_4851_rd, in_rc, SACp_inl_4910__flat_298)
               */
              SACf_FFT1d__d___MAIN__cpx_32___MAIN__cpx_16( SAC_ND_ARG_out_rc( SACp_inl_4924_slice), SAC_ND_ARG_in( SACl_dir), SAC_ND_ARG_in_rc( SACp_inl_4851_rd), SAC_ND_ARG_in_rc( SACp_inl_4910__flat_298));

              /*
               * WL_ASSIGN( SACp_inl_4924_slice, 2, SACp_inl_4925_result, 4, SACp_inl_4920__flat_329_iv, 2, SACp_inl_4921__type_581, SACp_inl_4922__type_582)
               */
              SAC_TR_WL_PRINT( ("index vector [%d, %d] (== offset %d) -- offset %d -- assign", SACp_inl_4921__type_581, SACp_inl_4922__type_582, ( SAC_ND_A_SHAPE( SACp_inl_4925_result, 1) * SACp_inl_4921__type_581 + SACp_inl_4922__type_582 ), SAC_WL_OFFSET( SACp_inl_4925_result)));
              SAC_ASSURE_TYPE( (SAC_ND_A_DIM( SACp_inl_4924_slice) == (SAC_ND_A_DIM( SACp_inl_4925_result) - 2)), ("WL expression with illegal dimension found!"));
              SAC_ASSURE_TYPE( (SAC_ND_A_SIZE( SACp_inl_4924_slice) == SAC_WL_SHAPE_FACTOR( SACp_inl_4925_result, 1)), ("WL expression with illegal size found!"));
              { int SAC_i;
                for (SAC_i = 0; SAC_i < SAC_ND_A_SIZE( SACp_inl_4924_slice); SAC_i++) { 
                  SAC_ND_WRITE( SACp_inl_4925_result, SAC_WL_OFFSET( SACp_inl_4925_result)) = SAC_ND_READ( SACp_inl_4924_slice, SAC_i);
                  SAC_WL_OFFSET( SACp_inl_4925_result)++;
                }
              }

              SAC_ND_DEC_RC_FREE_ARRAY( SACp_inl_4924_slice, 1)
            SAC_WL_GRID_UNROLL_END( 1, SACp_inl_4920__flat_329_iv, SACp_inl_4922__type_582, 0, 1)
          SAC_WL_STRIDE_LOOP_END( 1, SACp_inl_4920__flat_329_iv, SACp_inl_4922__type_582, 0, 128, 1)
        SAC_WL_GRID_UNROLL_END( 0, SACp_inl_4920__flat_329_iv, SACp_inl_4921__type_581, 0, 1)
      SAC_WL_STRIDE_LOOP_END( 0, SACp_inl_4920__flat_329_iv, SACp_inl_4921__type_581, 0, 128, 1)
      /*
       * MT_SCHEDULER_END( 0, 2, 0, 0, 128, 128)
       */


      /*
       * WL_END__OFFSET( SACp_inl_4925_result, 4, SACp_inl_4920__flat_329_iv, 2)
       */
    }

  SAC_PF_END_WITH( modarray)
  SAC_ND_DEC_RC_FREE_ARRAY( SACp_inl_4910__flat_298, 1)
  SAC_ND_DEC_RC_FREE_ARRAY( SACl_a, 1)
  /*
   * ND_FUN_RET( , 1, out_rc, SACp_inl_4925_result, SAC__arg_1)
   */
  SAC_ND_RET_out_rc( SACp_inl_4925_result, SAC__arg_1)
  return;
}

/*
 * ND_FUN_DEC( SACf_FFT1d_Slice__d___MAIN__cpx_32_128_128___MAIN__cpx_64, void, 4, out_rc, double *, SAC__arg_1, in, double, SACl_dir, in_rc, double *, SACl_a, in_rc, double *, SACl_rofu)
 */
void SACf_FFT1d_Slice__d___MAIN__cpx_32_128_128___MAIN__cpx_64( SAC_ND_PARAM_out_rc( double *, SAC__arg_1), SAC_ND_PARAM_in( double, SACl_dir), SAC_ND_PARAM_in_rc( double *, SACl_a), SAC_ND_PARAM_in_rc( double *, SACl_rofu))
{ 
  /*
   * ND_KS_DECL_ARRAY( double, SACp_inl_5053_result__SSA_1, 4, 32, 128, 128, 2)
   */
  double *SACp_inl_5053_result__SSA_1;
  int SAC_ND_A_RC( SACp_inl_5053_result__SSA_1);
  const int SAC_ND_A_SIZE( SACp_inl_5053_result__SSA_1) = 32*128*128*2;
  const int SAC_ND_A_DIM( SACp_inl_5053_result__SSA_1) = 4;
  const int SAC_ND_A_SHAPE( SACp_inl_5053_result__SSA_1, 0) = 32;
  const int SAC_ND_A_SHAPE( SACp_inl_5053_result__SSA_1, 1) = 128;
  const int SAC_ND_A_SHAPE( SACp_inl_5053_result__SSA_1, 2) = 128;
  const int SAC_ND_A_SHAPE( SACp_inl_5053_result__SSA_1, 3) = 2;

  /*
   * ND_KS_DECL_ARRAY( double, SACp_inl_5052_slice__SSA_1, 2, 128, 2)
   */
  double *SACp_inl_5052_slice__SSA_1;
  int SAC_ND_A_RC( SACp_inl_5052_slice__SSA_1);
  const int SAC_ND_A_SIZE( SACp_inl_5052_slice__SSA_1) = 128*2;
  const int SAC_ND_A_DIM( SACp_inl_5052_slice__SSA_1) = 2;
  const int SAC_ND_A_SHAPE( SACp_inl_5052_slice__SSA_1, 0) = 128;
  const int SAC_ND_A_SHAPE( SACp_inl_5052_slice__SSA_1, 1) = 2;

  int SACp_inl_5050__type_640; 
  int SACp_inl_5049__type_639; 
  /*
   * ND_KS_DECL_ARRAY( int, SACp_inl_5048__flat_339_iv, 1, 2)
   */
  int *SACp_inl_5048__flat_339_iv;
  int SAC_ND_A_RC( SACp_inl_5048__flat_339_iv);
  const int SAC_ND_A_SIZE( SACp_inl_5048__flat_339_iv) = 2;
  const int SAC_ND_A_DIM( SACp_inl_5048__flat_339_iv) = 1;
  const int SAC_ND_A_SHAPE( SACp_inl_5048__flat_339_iv, 0) = 2;

  /*
   * ND_KS_DECL_ARRAY( int, SACp_inl_4992__type_401, 1, 2)
   */
  int *SACp_inl_4992__type_401;
  int SAC_ND_A_RC( SACp_inl_4992__type_401);
  const int SAC_ND_A_SIZE( SACp_inl_4992__type_401) = 2;
  const int SAC_ND_A_DIM( SACp_inl_4992__type_401) = 1;
  const int SAC_ND_A_SHAPE( SACp_inl_4992__type_401, 0) = 2;

  int SACp_inl_4991__type_396; 
  int SACp_inl_4990__type_395; 
  int SACp_inl_4985__type_394_32_128_128_2__; 
  double SACp_inl_4984__type_393; 
  /*
   * ND_KS_DECL_ARRAY( double, SACp_inl_4983_rd, 2, 128, 2)
   */
  double *SACp_inl_4983_rd;
  int SAC_ND_A_RC( SACp_inl_4983_rd);
  const int SAC_ND_A_SIZE( SACp_inl_4983_rd) = 128*2;
  const int SAC_ND_A_DIM( SACp_inl_4983_rd) = 2;
  const int SAC_ND_A_SHAPE( SACp_inl_4983_rd, 0) = 128;
  const int SAC_ND_A_SHAPE( SACp_inl_4983_rd, 1) = 2;


  /*
   * ND_KS_DECL_ARRAY_ARG( SACl_rofu, 2, 64, 2)
   */
  const int SAC_ND_A_SIZE( SACl_rofu) = 64*2;
  const int SAC_ND_A_DIM( SACl_rofu) = 2;
  const int SAC_ND_A_SHAPE( SACl_rofu, 0) = 64;
  const int SAC_ND_A_SHAPE( SACl_rofu, 1) = 2;

  /*
   * ND_KS_DECL_ARRAY_ARG( SACl_a, 4, 32, 128, 128, 2)
   */
  const int SAC_ND_A_SIZE( SACl_a) = 32*128*128*2;
  const int SAC_ND_A_DIM( SACl_a) = 4;
  const int SAC_ND_A_SHAPE( SACl_a, 0) = 32;
  const int SAC_ND_A_SHAPE( SACl_a, 1) = 128;
  const int SAC_ND_A_SHAPE( SACl_a, 2) = 128;
  const int SAC_ND_A_SHAPE( SACl_a, 3) = 2;

  SAC_ND_ALLOC_ARRAY( double, SACp_inl_5053_result__SSA_1, 1)
  SAC_PF_BEGIN_WITH( modarray)
    /*
     * WL_BEGIN__OFFSET( SACp_inl_5053_result__SSA_1, 4, SACp_inl_5048__flat_339_iv, 2)
     */
    { int SAC_WL_OFFSET( SACp_inl_5053_result__SSA_1);
      int SAC_WL_MT_SCHEDULE_START( 0);
      int SAC_WL_MT_SCHEDULE_STOP( 0);
      int SAC_WL_MT_SCHEDULE_START( 1);
      int SAC_WL_MT_SCHEDULE_STOP( 1);
      int SAC_i;
      int SAC_WL_SHAPE_FACTOR( SACp_inl_5053_result__SSA_1, 0) = 1 * SAC_ND_A_SHAPE( SACp_inl_5053_result__SSA_1, 1) * SAC_ND_A_SHAPE( SACp_inl_5053_result__SSA_1, 2) * SAC_ND_A_SHAPE( SACp_inl_5053_result__SSA_1, 3);
      int SAC_WL_SHAPE_FACTOR( SACp_inl_5053_result__SSA_1, 1) = 1 * SAC_ND_A_SHAPE( SACp_inl_5053_result__SSA_1, 2) * SAC_ND_A_SHAPE( SACp_inl_5053_result__SSA_1, 3);

      /*
       * MT_SCHEDULER_BEGIN( 0, 2, 0, 0, 32, 128)
       */
      SAC_WL_MT_SCHEDULE_START( 0) = 0;
      SAC_WL_MT_SCHEDULE_STOP( 0) = 32;
      SAC_WL_MT_SCHEDULE_START( 1) = 0;
      SAC_WL_MT_SCHEDULE_STOP( 1) = 128;

      /*
       * WL_INIT_OFFSET( SACp_inl_5053_result__SSA_1, 4, SACp_inl_5048__flat_339_iv, 2)
       */
      SAC_WL_OFFSET( SACp_inl_5053_result__SSA_1)
        = SAC_WL_MT_SCHEDULE_START( 0) * SAC_WL_SHAPE_FACTOR( SACp_inl_5053_result__SSA_1, 0)
        + SAC_WL_MT_SCHEDULE_START( 1) * SAC_WL_SHAPE_FACTOR( SACp_inl_5053_result__SSA_1, 1);

      SAC_WL_STRIDE_LOOP0_BEGIN( 0, SACp_inl_5048__flat_339_iv, SACp_inl_5049__type_639, 0, 32, 1)
        SAC_WL_GRID_UNROLL_BEGIN( 0, SACp_inl_5048__flat_339_iv, SACp_inl_5049__type_639, 0, 1)
          SAC_WL_STRIDE_LOOP0_BEGIN( 1, SACp_inl_5048__flat_339_iv, SACp_inl_5050__type_640, 0, 128, 1)
            SAC_WL_GRID_UNROLL_BEGIN( 1, SACp_inl_5048__flat_339_iv, SACp_inl_5050__type_640, 0, 1)
              SAC_ND_INC_RC( SACl_rofu, 1)
              SAC_ND_ALLOC_ARRAY( double, SACp_inl_4983_rd, 1)
              SAC_PF_BEGIN_WITH( genarray)
                /*
                 * WL_BEGIN__OFFSET( SACp_inl_4983_rd, 2, SACp_inl_4992__type_401, 2)
                 */
                { int SAC_WL_OFFSET( SACp_inl_4983_rd);
                  int SAC_WL_MT_SCHEDULE_START( 0);
                  int SAC_WL_MT_SCHEDULE_STOP( 0);
                  int SAC_WL_MT_SCHEDULE_START( 1);
                  int SAC_WL_MT_SCHEDULE_STOP( 1);
                  int SAC_i;
                  int SAC_WL_SHAPE_FACTOR( SACp_inl_4983_rd, 0) = 1 * SAC_ND_A_SHAPE( SACp_inl_4983_rd, 1);
                  int SAC_WL_SHAPE_FACTOR( SACp_inl_4983_rd, 1) = 1;

                  /*
                   * MT_SCHEDULER_BEGIN( 0, 2, 0, 0, 128, 2)
                   */
                  SAC_WL_MT_SCHEDULE_START( 0) = 0;
                  SAC_WL_MT_SCHEDULE_STOP( 0) = 128;
                  SAC_WL_MT_SCHEDULE_START( 1) = 0;
                  SAC_WL_MT_SCHEDULE_STOP( 1) = 2;

                  /*
                   * WL_INIT_OFFSET( SACp_inl_4983_rd, 2, SACp_inl_4992__type_401, 2)
                   */
                  SAC_WL_OFFSET( SACp_inl_4983_rd)
                    = SAC_WL_MT_SCHEDULE_START( 0) * SAC_WL_SHAPE_FACTOR( SACp_inl_4983_rd, 0)
                    + SAC_WL_MT_SCHEDULE_START( 1) * SAC_WL_SHAPE_FACTOR( SACp_inl_4983_rd, 1);

                  SAC_WL_STRIDE_LOOP0_BEGIN( 0, SACp_inl_4992__type_401, SACp_inl_4991__type_396, 0, 128, 1)
                    SAC_WL_GRID_UNROLL_BEGIN( 0, SACp_inl_4992__type_401, SACp_inl_4991__type_396, 0, 1)
                      SAC_WL_STRIDE_LOOP0_BEGIN( 1, SACp_inl_4992__type_401, SACp_inl_4990__type_395, 0, 2, 1)
                        SAC_WL_GRID_UNROLL_BEGIN( 1, SACp_inl_4992__type_401, SACp_inl_4990__type_395, 0, 1)
                          SACp_inl_4985__type_394_32_128_128_2__ = ((((((SACp_inl_5049__type_639 * 128) + SACp_inl_5050__type_640) * 128) + SACp_inl_4991__type_396) * 2) + SACp_inl_4990__type_395); 
                          SAC_ND_IDX_SEL_S( SACp_inl_4985__type_394_32_128_128_2__, SACl_a, SACp_inl_4984__type_393)
                          /*
                           * WL_ASSIGN( SACp_inl_4984__type_393, 0, SACp_inl_4983_rd, 2, SACp_inl_4992__type_401, 2, SACp_inl_4991__type_396, SACp_inl_4990__type_395)
                           */
                          SAC_TR_WL_PRINT( ("index vector [%d, %d] (== offset %d) -- offset %d -- assign", SACp_inl_4991__type_396, SACp_inl_4990__type_395, ( SAC_ND_A_SHAPE( SACp_inl_4983_rd, 1) * SACp_inl_4991__type_396 + SACp_inl_4990__type_395 ), SAC_WL_OFFSET( SACp_inl_4983_rd)));
                          SAC_ASSURE_TYPE( (SAC_ND_A_DIM( SACp_inl_4984__type_393) == (SAC_ND_A_DIM( SACp_inl_4983_rd) - 2)), ("WL expression with illegal dimension found!"));
                          SAC_ASSURE_TYPE( (SAC_ND_A_SIZE( SACp_inl_4984__type_393) == SAC_WL_SHAPE_FACTOR( SACp_inl_4983_rd, 1)), ("WL expression with illegal size found!"));
                          SAC_ND_WRITE_ARRAY( SACp_inl_4983_rd, SAC_WL_OFFSET( SACp_inl_4983_rd)) = SACp_inl_4984__type_393;
                          SAC_WL_OFFSET( SACp_inl_4983_rd)++;

                        SAC_WL_GRID_UNROLL_END( 1, SACp_inl_4992__type_401, SACp_inl_4990__type_395, 0, 1)
                      SAC_WL_STRIDE_LOOP_END( 1, SACp_inl_4992__type_401, SACp_inl_4990__type_395, 0, 2, 1)
                    SAC_WL_GRID_UNROLL_END( 0, SACp_inl_4992__type_401, SACp_inl_4991__type_396, 0, 1)
                  SAC_WL_STRIDE_LOOP_END( 0, SACp_inl_4992__type_401, SACp_inl_4991__type_396, 0, 128, 1)
                  /*
                   * MT_SCHEDULER_END( 0, 2, 0, 0, 128, 2)
                   */


                  /*
                   * WL_END__OFFSET( SACp_inl_4983_rd, 2, SACp_inl_4992__type_401, 2)
                   */
                }

              SAC_PF_END_WITH( genarray)
              /*
               * ND_FUN_AP( SACf_FFT1d__d___MAIN__cpx_128___MAIN__cpx_64, , 4, out_rc, SACp_inl_5052_slice__SSA_1, in, SACl_dir, in_rc, SACp_inl_4983_rd, in_rc, SACl_rofu)
               */
              SACf_FFT1d__d___MAIN__cpx_128___MAIN__cpx_64( SAC_ND_ARG_out_rc( SACp_inl_5052_slice__SSA_1), SAC_ND_ARG_in( SACl_dir), SAC_ND_ARG_in_rc( SACp_inl_4983_rd), SAC_ND_ARG_in_rc( SACl_rofu));

              /*
               * WL_ASSIGN( SACp_inl_5052_slice__SSA_1, 2, SACp_inl_5053_result__SSA_1, 4, SACp_inl_5048__flat_339_iv, 2, SACp_inl_5049__type_639, SACp_inl_5050__type_640)
               */
              SAC_TR_WL_PRINT( ("index vector [%d, %d] (== offset %d) -- offset %d -- assign", SACp_inl_5049__type_639, SACp_inl_5050__type_640, ( SAC_ND_A_SHAPE( SACp_inl_5053_result__SSA_1, 1) * SACp_inl_5049__type_639 + SACp_inl_5050__type_640 ), SAC_WL_OFFSET( SACp_inl_5053_result__SSA_1)));
              SAC_ASSURE_TYPE( (SAC_ND_A_DIM( SACp_inl_5052_slice__SSA_1) == (SAC_ND_A_DIM( SACp_inl_5053_result__SSA_1) - 2)), ("WL expression with illegal dimension found!"));
              SAC_ASSURE_TYPE( (SAC_ND_A_SIZE( SACp_inl_5052_slice__SSA_1) == SAC_WL_SHAPE_FACTOR( SACp_inl_5053_result__SSA_1, 1)), ("WL expression with illegal size found!"));
              { int SAC_i;
                for (SAC_i = 0; SAC_i < SAC_ND_A_SIZE( SACp_inl_5052_slice__SSA_1); SAC_i++) { 
                  SAC_ND_WRITE( SACp_inl_5053_result__SSA_1, SAC_WL_OFFSET( SACp_inl_5053_result__SSA_1)) = SAC_ND_READ( SACp_inl_5052_slice__SSA_1, SAC_i);
                  SAC_WL_OFFSET( SACp_inl_5053_result__SSA_1)++;
                }
              }

              SAC_ND_DEC_RC_FREE_ARRAY( SACp_inl_5052_slice__SSA_1, 1)
            SAC_WL_GRID_UNROLL_END( 1, SACp_inl_5048__flat_339_iv, SACp_inl_5050__type_640, 0, 1)
          SAC_WL_STRIDE_LOOP_END( 1, SACp_inl_5048__flat_339_iv, SACp_inl_5050__type_640, 0, 128, 1)
        SAC_WL_GRID_UNROLL_END( 0, SACp_inl_5048__flat_339_iv, SACp_inl_5049__type_639, 0, 1)
      SAC_WL_STRIDE_LOOP_END( 0, SACp_inl_5048__flat_339_iv, SACp_inl_5049__type_639, 0, 32, 1)
      /*
       * MT_SCHEDULER_END( 0, 2, 0, 0, 32, 128)
       */


      /*
       * WL_END__OFFSET( SACp_inl_5053_result__SSA_1, 4, SACp_inl_5048__flat_339_iv, 2)
       */
    }

  SAC_PF_END_WITH( modarray)
  SAC_ND_DEC_RC_FREE_ARRAY( SACl_rofu, 1)
  SAC_ND_DEC_RC_FREE_ARRAY( SACl_a, 1)
  /*
   * ND_FUN_RET( , 1, out_rc, SACp_inl_5053_result__SSA_1, SAC__arg_1)
   */
  SAC_ND_RET_out_rc( SACp_inl_5053_result__SSA_1, SAC__arg_1)
  return;
}

/*
 * ND_FUN_DEC( SACf_FFT3d_forward___MAIN__cpx_128_128_32___MAIN__cpx_64, void, 3, out_rc, double *, SAC__arg_1, in_rc, double *, SACl_a, in_rc, double *, SACl_rofu)
 */
void SACf_FFT3d_forward___MAIN__cpx_128_128_32___MAIN__cpx_64( SAC_ND_PARAM_out_rc( double *, SAC__arg_1), SAC_ND_PARAM_in_rc( double *, SACl_a), SAC_ND_PARAM_in_rc( double *, SACl_rofu))
{ 
  int SACp__ae_3_inl_3402_ivt; 
  int SACp__ae_3_inl_3350_ivt; 
  int SACp__ae_3_inl_3298_ivt; 
  /*
   * ND_KS_DECL_ARRAY( double, SACl_d, 4, 128, 128, 32, 2)
   */
  double *SACl_d;
  int SAC_ND_A_RC( SACl_d);
  const int SAC_ND_A_SIZE( SACl_d) = 128*128*32*2;
  const int SAC_ND_A_DIM( SACl_d) = 4;
  const int SAC_ND_A_SHAPE( SACl_d, 0) = 128;
  const int SAC_ND_A_SHAPE( SACl_d, 1) = 128;
  const int SAC_ND_A_SHAPE( SACl_d, 2) = 32;
  const int SAC_ND_A_SHAPE( SACl_d, 3) = 2;

  /*
   * ND_KS_DECL_ARRAY( double, SACl_c, 4, 32, 128, 128, 2)
   */
  double *SACl_c;
  int SAC_ND_A_RC( SACl_c);
  const int SAC_ND_A_SIZE( SACl_c) = 32*128*128*2;
  const int SAC_ND_A_DIM( SACl_c) = 4;
  const int SAC_ND_A_SHAPE( SACl_c, 0) = 32;
  const int SAC_ND_A_SHAPE( SACl_c, 1) = 128;
  const int SAC_ND_A_SHAPE( SACl_c, 2) = 128;
  const int SAC_ND_A_SHAPE( SACl_c, 3) = 2;

  /*
   * ND_KS_DECL_ARRAY( double, SACl_b, 4, 32, 128, 128, 2)
   */
  double *SACl_b;
  int SAC_ND_A_RC( SACl_b);
  const int SAC_ND_A_SIZE( SACl_b) = 32*128*128*2;
  const int SAC_ND_A_DIM( SACl_b) = 4;
  const int SAC_ND_A_SHAPE( SACl_b, 0) = 32;
  const int SAC_ND_A_SHAPE( SACl_b, 1) = 128;
  const int SAC_ND_A_SHAPE( SACl_b, 2) = 128;
  const int SAC_ND_A_SHAPE( SACl_b, 3) = 2;

  /*
   * ND_KS_DECL_ARRAY( int, SACp_inl_3407__flat_79_iv, 1, 4)
   */
  int *SACp_inl_3407__flat_79_iv;
  int SAC_ND_A_RC( SACp_inl_3407__flat_79_iv);
  const int SAC_ND_A_SIZE( SACp_inl_3407__flat_79_iv) = 4;
  const int SAC_ND_A_DIM( SACp_inl_3407__flat_79_iv) = 1;
  const int SAC_ND_A_SHAPE( SACp_inl_3407__flat_79_iv, 0) = 4;

  int SACp_inl_3406__type_574; 
  int SACp_inl_3405__type_575; 
  int SACp_inl_3404__type_576; 
  int SACp_inl_3403__type_577; 
  double SACp_inl_3393_val; 
  /*
   * ND_KS_DECL_ARRAY( double, SACp_inl_3392_res, 4, 128, 128, 32, 2)
   */
  double *SACp_inl_3392_res;
  int SAC_ND_A_RC( SACp_inl_3392_res);
  const int SAC_ND_A_SIZE( SACp_inl_3392_res) = 128*128*32*2;
  const int SAC_ND_A_DIM( SACp_inl_3392_res) = 4;
  const int SAC_ND_A_SHAPE( SACp_inl_3392_res, 0) = 128;
  const int SAC_ND_A_SHAPE( SACp_inl_3392_res, 1) = 128;
  const int SAC_ND_A_SHAPE( SACp_inl_3392_res, 2) = 32;
  const int SAC_ND_A_SHAPE( SACp_inl_3392_res, 3) = 2;

  /*
   * ND_KS_DECL_ARRAY( int, SACp_inl_3355__flat_79_iv, 1, 4)
   */
  int *SACp_inl_3355__flat_79_iv;
  int SAC_ND_A_RC( SACp_inl_3355__flat_79_iv);
  const int SAC_ND_A_SIZE( SACp_inl_3355__flat_79_iv) = 4;
  const int SAC_ND_A_DIM( SACp_inl_3355__flat_79_iv) = 1;
  const int SAC_ND_A_SHAPE( SACp_inl_3355__flat_79_iv, 0) = 4;

  int SACp_inl_3354__type_568; 
  int SACp_inl_3353__type_569; 
  int SACp_inl_3352__type_570; 
  int SACp_inl_3351__type_571; 
  double SACp_inl_3341_val; 
  /*
   * ND_KS_DECL_ARRAY( double, SACp_inl_3340_res, 4, 32, 128, 128, 2)
   */
  double *SACp_inl_3340_res;
  int SAC_ND_A_RC( SACp_inl_3340_res);
  const int SAC_ND_A_SIZE( SACp_inl_3340_res) = 32*128*128*2;
  const int SAC_ND_A_DIM( SACp_inl_3340_res) = 4;
  const int SAC_ND_A_SHAPE( SACp_inl_3340_res, 0) = 32;
  const int SAC_ND_A_SHAPE( SACp_inl_3340_res, 1) = 128;
  const int SAC_ND_A_SHAPE( SACp_inl_3340_res, 2) = 128;
  const int SAC_ND_A_SHAPE( SACp_inl_3340_res, 3) = 2;

  /*
   * ND_KS_DECL_ARRAY( int, SACp_inl_3303__flat_79_iv, 1, 4)
   */
  int *SACp_inl_3303__flat_79_iv;
  int SAC_ND_A_RC( SACp_inl_3303__flat_79_iv);
  const int SAC_ND_A_SIZE( SACp_inl_3303__flat_79_iv) = 4;
  const int SAC_ND_A_DIM( SACp_inl_3303__flat_79_iv) = 1;
  const int SAC_ND_A_SHAPE( SACp_inl_3303__flat_79_iv, 0) = 4;

  int SACp_inl_3302__type_382; 
  int SACp_inl_3301__type_383; 
  int SACp_inl_3300__type_384; 
  int SACp_inl_3299__type_385; 
  double SACp_inl_3289_val; 
  /*
   * ND_KS_DECL_ARRAY( double, SACp_inl_3288_res, 4, 32, 128, 128, 2)
   */
  double *SACp_inl_3288_res;
  int SAC_ND_A_RC( SACp_inl_3288_res);
  const int SAC_ND_A_SIZE( SACp_inl_3288_res) = 32*128*128*2;
  const int SAC_ND_A_DIM( SACp_inl_3288_res) = 4;
  const int SAC_ND_A_SHAPE( SACp_inl_3288_res, 0) = 32;
  const int SAC_ND_A_SHAPE( SACp_inl_3288_res, 1) = 128;
  const int SAC_ND_A_SHAPE( SACp_inl_3288_res, 2) = 128;
  const int SAC_ND_A_SHAPE( SACp_inl_3288_res, 3) = 2;

  int SACp_inl_3298_ivt__SSA_1_128_128_32_2__; 
  int SACp_inl_3350_ivt__SSA_1_32_128_128_2__; 
  int SACp_inl_3402_ivt__SSA_1_32_128_128_2__; 
  /*
   * ND_KS_DECL_ARRAY( int, SACp_inl_3309_res__SSA_1, 1, 4)
   */
  int *SACp_inl_3309_res__SSA_1;
  int SAC_ND_A_RC( SACp_inl_3309_res__SSA_1);
  const int SAC_ND_A_SIZE( SACp_inl_3309_res__SSA_1) = 4;
  const int SAC_ND_A_DIM( SACp_inl_3309_res__SSA_1) = 1;
  const int SAC_ND_A_SHAPE( SACp_inl_3309_res__SSA_1, 0) = 4;

  /*
   * ND_KS_DECL_ARRAY( int, SACp_inl_3309_res__SSA_2, 1, 4)
   */
  int *SACp_inl_3309_res__SSA_2;
  int SAC_ND_A_RC( SACp_inl_3309_res__SSA_2);
  const int SAC_ND_A_SIZE( SACp_inl_3309_res__SSA_2) = 4;
  const int SAC_ND_A_DIM( SACp_inl_3309_res__SSA_2) = 1;
  const int SAC_ND_A_SHAPE( SACp_inl_3309_res__SSA_2, 0) = 4;

  /*
   * ND_KS_DECL_ARRAY( int, SACp_inl_3309_res__SSA_3, 1, 4)
   */
  int *SACp_inl_3309_res__SSA_3;
  int SAC_ND_A_RC( SACp_inl_3309_res__SSA_3);
  const int SAC_ND_A_SIZE( SACp_inl_3309_res__SSA_3) = 4;
  const int SAC_ND_A_DIM( SACp_inl_3309_res__SSA_3) = 1;
  const int SAC_ND_A_SHAPE( SACp_inl_3309_res__SSA_3, 0) = 4;

  /*
   * ND_KS_DECL_ARRAY( int, SACp_inl_3361_res__SSA_1, 1, 4)
   */
  int *SACp_inl_3361_res__SSA_1;
  int SAC_ND_A_RC( SACp_inl_3361_res__SSA_1);
  const int SAC_ND_A_SIZE( SACp_inl_3361_res__SSA_1) = 4;
  const int SAC_ND_A_DIM( SACp_inl_3361_res__SSA_1) = 1;
  const int SAC_ND_A_SHAPE( SACp_inl_3361_res__SSA_1, 0) = 4;

  /*
   * ND_KS_DECL_ARRAY( int, SACp_inl_3361_res__SSA_2, 1, 4)
   */
  int *SACp_inl_3361_res__SSA_2;
  int SAC_ND_A_RC( SACp_inl_3361_res__SSA_2);
  const int SAC_ND_A_SIZE( SACp_inl_3361_res__SSA_2) = 4;
  const int SAC_ND_A_DIM( SACp_inl_3361_res__SSA_2) = 1;
  const int SAC_ND_A_SHAPE( SACp_inl_3361_res__SSA_2, 0) = 4;

  /*
   * ND_KS_DECL_ARRAY( int, SACp_inl_3361_res__SSA_3, 1, 4)
   */
  int *SACp_inl_3361_res__SSA_3;
  int SAC_ND_A_RC( SACp_inl_3361_res__SSA_3);
  const int SAC_ND_A_SIZE( SACp_inl_3361_res__SSA_3) = 4;
  const int SAC_ND_A_DIM( SACp_inl_3361_res__SSA_3) = 1;
  const int SAC_ND_A_SHAPE( SACp_inl_3361_res__SSA_3, 0) = 4;

  /*
   * ND_KS_DECL_ARRAY( int, SACp_inl_3413_res__SSA_1, 1, 4)
   */
  int *SACp_inl_3413_res__SSA_1;
  int SAC_ND_A_RC( SACp_inl_3413_res__SSA_1);
  const int SAC_ND_A_SIZE( SACp_inl_3413_res__SSA_1) = 4;
  const int SAC_ND_A_DIM( SACp_inl_3413_res__SSA_1) = 1;
  const int SAC_ND_A_SHAPE( SACp_inl_3413_res__SSA_1, 0) = 4;

  /*
   * ND_KS_DECL_ARRAY( int, SACp_inl_3413_res__SSA_2, 1, 4)
   */
  int *SACp_inl_3413_res__SSA_2;
  int SAC_ND_A_RC( SACp_inl_3413_res__SSA_2);
  const int SAC_ND_A_SIZE( SACp_inl_3413_res__SSA_2) = 4;
  const int SAC_ND_A_DIM( SACp_inl_3413_res__SSA_2) = 1;
  const int SAC_ND_A_SHAPE( SACp_inl_3413_res__SSA_2, 0) = 4;

  /*
   * ND_KS_DECL_ARRAY( int, SACp_inl_3413_res__SSA_3, 1, 4)
   */
  int *SACp_inl_3413_res__SSA_3;
  int SAC_ND_A_RC( SACp_inl_3413_res__SSA_3);
  const int SAC_ND_A_SIZE( SACp_inl_3413_res__SSA_3) = 4;
  const int SAC_ND_A_DIM( SACp_inl_3413_res__SSA_3) = 1;
  const int SAC_ND_A_SHAPE( SACp_inl_3413_res__SSA_3, 0) = 4;


  /*
   * ND_KS_DECL_ARRAY_ARG( SACl_rofu, 2, 64, 2)
   */
  const int SAC_ND_A_SIZE( SACl_rofu) = 64*2;
  const int SAC_ND_A_DIM( SACl_rofu) = 2;
  const int SAC_ND_A_SHAPE( SACl_rofu, 0) = 64;
  const int SAC_ND_A_SHAPE( SACl_rofu, 1) = 2;

  /*
   * ND_KS_DECL_ARRAY_ARG( SACl_a, 4, 128, 128, 32, 2)
   */
  const int SAC_ND_A_SIZE( SACl_a) = 128*128*32*2;
  const int SAC_ND_A_DIM( SACl_a) = 4;
  const int SAC_ND_A_SHAPE( SACl_a, 0) = 128;
  const int SAC_ND_A_SHAPE( SACl_a, 1) = 128;
  const int SAC_ND_A_SHAPE( SACl_a, 2) = 32;
  const int SAC_ND_A_SHAPE( SACl_a, 3) = 2;

  SAC_ND_INC_RC( SACl_rofu, 2)
  SAC_ND_ALLOC_ARRAY( double, SACp_inl_3288_res, 1)
  SAC_ND_ALLOC_ARRAY( int, SACp_inl_3303__flat_79_iv, 1)
  SAC_PF_BEGIN_WITH( genarray)
    /*
     * WL_BEGIN__OFFSET( SACp_inl_3288_res, 4, SACp_inl_3303__flat_79_iv, 4)
     */
    { int SAC_WL_OFFSET( SACp_inl_3288_res);
      int SAC_WL_MT_SCHEDULE_START( 0);
      int SAC_WL_MT_SCHEDULE_STOP( 0);
      int SAC_WL_MT_SCHEDULE_START( 1);
      int SAC_WL_MT_SCHEDULE_STOP( 1);
      int SAC_WL_MT_SCHEDULE_START( 2);
      int SAC_WL_MT_SCHEDULE_STOP( 2);
      int SAC_WL_MT_SCHEDULE_START( 3);
      int SAC_WL_MT_SCHEDULE_STOP( 3);
      int SAC_i;
      int SAC_WL_SHAPE_FACTOR( SACp_inl_3288_res, 0) = 1 * SAC_ND_A_SHAPE( SACp_inl_3288_res, 1) * SAC_ND_A_SHAPE( SACp_inl_3288_res, 2) * SAC_ND_A_SHAPE( SACp_inl_3288_res, 3);
      int SAC_WL_SHAPE_FACTOR( SACp_inl_3288_res, 1) = 1 * SAC_ND_A_SHAPE( SACp_inl_3288_res, 2) * SAC_ND_A_SHAPE( SACp_inl_3288_res, 3);
      int SAC_WL_SHAPE_FACTOR( SACp_inl_3288_res, 2) = 1 * SAC_ND_A_SHAPE( SACp_inl_3288_res, 3);
      int SAC_WL_SHAPE_FACTOR( SACp_inl_3288_res, 3) = 1;

      /*
       * MT_SCHEDULER_BEGIN( 0, 4, 0, 0, 0, 0, 32, 128, 128, 2)
       */
      SAC_WL_MT_SCHEDULE_START( 0) = 0;
      SAC_WL_MT_SCHEDULE_STOP( 0) = 32;
      SAC_WL_MT_SCHEDULE_START( 1) = 0;
      SAC_WL_MT_SCHEDULE_STOP( 1) = 128;
      SAC_WL_MT_SCHEDULE_START( 2) = 0;
      SAC_WL_MT_SCHEDULE_STOP( 2) = 128;
      SAC_WL_MT_SCHEDULE_START( 3) = 0;
      SAC_WL_MT_SCHEDULE_STOP( 3) = 2;

      /*
       * WL_INIT_OFFSET( SACp_inl_3288_res, 4, SACp_inl_3303__flat_79_iv, 4)
       */
      SAC_WL_OFFSET( SACp_inl_3288_res)
        = SAC_WL_MT_SCHEDULE_START( 0) * SAC_WL_SHAPE_FACTOR( SACp_inl_3288_res, 0)
        + SAC_WL_MT_SCHEDULE_START( 1) * SAC_WL_SHAPE_FACTOR( SACp_inl_3288_res, 1)
        + SAC_WL_MT_SCHEDULE_START( 2) * SAC_WL_SHAPE_FACTOR( SACp_inl_3288_res, 2)
        + SAC_WL_MT_SCHEDULE_START( 3) * SAC_WL_SHAPE_FACTOR( SACp_inl_3288_res, 3);

      SAC_WL_STRIDE_LOOP0_BEGIN( 0, SACp_inl_3303__flat_79_iv, SACp_inl_3302__type_382, 0, 32, 1)
        SAC_WL_GRID_UNROLL_BEGIN( 0, SACp_inl_3303__flat_79_iv, SACp_inl_3302__type_382, 0, 1)
          SAC_WL_SET_IDXVEC( 0, SACp_inl_3303__flat_79_iv, SACp_inl_3302__type_382, 0, 1)
          SAC_WL_STRIDE_LOOP0_BEGIN( 1, SACp_inl_3303__flat_79_iv, SACp_inl_3301__type_383, 0, 128, 1)
            SAC_WL_GRID_UNROLL_BEGIN( 1, SACp_inl_3303__flat_79_iv, SACp_inl_3301__type_383, 0, 1)
              SAC_WL_SET_IDXVEC( 1, SACp_inl_3303__flat_79_iv, SACp_inl_3301__type_383, 0, 1)
              SAC_WL_STRIDE_LOOP0_BEGIN( 2, SACp_inl_3303__flat_79_iv, SACp_inl_3300__type_384, 0, 128, 1)
                SAC_WL_GRID_UNROLL_BEGIN( 2, SACp_inl_3303__flat_79_iv, SACp_inl_3300__type_384, 0, 1)
                  SAC_WL_SET_IDXVEC( 2, SACp_inl_3303__flat_79_iv, SACp_inl_3300__type_384, 0, 1)
                  SAC_WL_STRIDE_LOOP0_BEGIN( 3, SACp_inl_3303__flat_79_iv, SACp_inl_3299__type_385, 0, 2, 1)
                    SAC_WL_GRID_UNROLL_BEGIN( 3, SACp_inl_3303__flat_79_iv, SACp_inl_3299__type_385, 0, 1)
                      SAC_WL_SET_IDXVEC( 3, SACp_inl_3303__flat_79_iv, SACp_inl_3299__type_385, 0, 1)
                      SAC_ND_ALLOC_ARRAY( int, SACp_inl_3309_res__SSA_1, 1)
                      SAC_ND_IDX_MODARRAY_AxVxS( int, SACp_inl_3309_res__SSA_1, SACp_inl_3303__flat_79_iv, 2, SACp_inl_3302__type_382)
                      SAC_ND_CHECK_REUSE_ARRAY( SACp_inl_3309_res__SSA_1, SACp_inl_3309_res__SSA_2)
                      SAC_ND_ALLOC_ARRAY( int, SACp_inl_3309_res__SSA_2, 0)
                      SAC_ND_INC_RC( SACp_inl_3309_res__SSA_2, 1)
                      SAC_ND_IDX_MODARRAY_AxVxS( int, SACp_inl_3309_res__SSA_2, SACp_inl_3309_res__SSA_1, 1, SACp_inl_3301__type_383)
                      SAC_ND_DEC_RC_FREE_ARRAY( SACp_inl_3309_res__SSA_1, 1)
                      SAC_ND_CHECK_REUSE_ARRAY( SACp_inl_3309_res__SSA_2, SACp_inl_3309_res__SSA_3)
                      SAC_ND_ALLOC_ARRAY( int, SACp_inl_3309_res__SSA_3, 0)
                      SAC_ND_INC_RC( SACp_inl_3309_res__SSA_3, 1)
                      SAC_ND_IDX_MODARRAY_AxVxS( int, SACp_inl_3309_res__SSA_3, SACp_inl_3309_res__SSA_2, 0, SACp_inl_3300__type_384)
                      SAC_ND_DEC_RC_FREE_ARRAY( SACp_inl_3309_res__SSA_2, 1)
                      SAC_ND_IDX_SEL_S( 3, SACp_inl_3309_res__SSA_3, SACp__ae_3_inl_3298_ivt)
                      SAC_ND_DEC_RC_FREE_ARRAY( SACp_inl_3309_res__SSA_3, 1)
                      SACp_inl_3298_ivt__SSA_1_128_128_32_2__ = ((((((SACp_inl_3300__type_384 * 128) + SACp_inl_3301__type_383) * 32) + SACp_inl_3302__type_382) * 2) + SACp__ae_3_inl_3298_ivt); 
                      SAC_ND_IDX_SEL_S( SACp_inl_3298_ivt__SSA_1_128_128_32_2__, SACl_a, SACp_inl_3289_val)
                      /*
                       * WL_ASSIGN( SACp_inl_3289_val, 0, SACp_inl_3288_res, 4, SACp_inl_3303__flat_79_iv, 4, SACp_inl_3302__type_382, SACp_inl_3301__type_383, SACp_inl_3300__type_384, SACp_inl_3299__type_385)
                       */
                      SAC_TR_WL_PRINT( ("index vector [%d, %d, %d, %d] (== offset %d) -- offset %d -- assign", SACp_inl_3302__type_382, SACp_inl_3301__type_383, SACp_inl_3300__type_384, SACp_inl_3299__type_385, ( SAC_ND_A_SHAPE( SACp_inl_3288_res, 3) * ( SAC_ND_A_SHAPE( SACp_inl_3288_res, 2) * ( SAC_ND_A_SHAPE( SACp_inl_3288_res, 1) * SACp_inl_3302__type_382 + SACp_inl_3301__type_383 )+ SACp_inl_3300__type_384 )+ SACp_inl_3299__type_385 ), SAC_WL_OFFSET( SACp_inl_3288_res)));
                      SAC_ASSURE_TYPE( (SAC_ND_A_DIM( SACp_inl_3289_val) == (SAC_ND_A_DIM( SACp_inl_3288_res) - 4)), ("WL expression with illegal dimension found!"));
                      SAC_ASSURE_TYPE( (SAC_ND_A_SIZE( SACp_inl_3289_val) == SAC_WL_SHAPE_FACTOR( SACp_inl_3288_res, 3)), ("WL expression with illegal size found!"));
                      SAC_ND_WRITE_ARRAY( SACp_inl_3288_res, SAC_WL_OFFSET( SACp_inl_3288_res)) = SACp_inl_3289_val;
                      SAC_WL_OFFSET( SACp_inl_3288_res)++;

                    SAC_WL_GRID_UNROLL_END( 3, SACp_inl_3303__flat_79_iv, SACp_inl_3299__type_385, 0, 1)
                  SAC_WL_STRIDE_LOOP_END( 3, SACp_inl_3303__flat_79_iv, SACp_inl_3299__type_385, 0, 2, 1)
                SAC_WL_GRID_UNROLL_END( 2, SACp_inl_3303__flat_79_iv, SACp_inl_3300__type_384, 0, 1)
              SAC_WL_STRIDE_LOOP_END( 2, SACp_inl_3303__flat_79_iv, SACp_inl_3300__type_384, 0, 128, 1)
            SAC_WL_GRID_UNROLL_END( 1, SACp_inl_3303__flat_79_iv, SACp_inl_3301__type_383, 0, 1)
          SAC_WL_STRIDE_LOOP_END( 1, SACp_inl_3303__flat_79_iv, SACp_inl_3301__type_383, 0, 128, 1)
        SAC_WL_GRID_UNROLL_END( 0, SACp_inl_3303__flat_79_iv, SACp_inl_3302__type_382, 0, 1)
      SAC_WL_STRIDE_LOOP_END( 0, SACp_inl_3303__flat_79_iv, SACp_inl_3302__type_382, 0, 32, 1)
      /*
       * MT_SCHEDULER_END( 0, 4, 0, 0, 0, 0, 32, 128, 128, 2)
       */


      /*
       * WL_END__OFFSET( SACp_inl_3288_res, 4, SACp_inl_3303__flat_79_iv, 4)
       */
    }

  SAC_PF_END_WITH( genarray)
  SAC_ND_DEC_RC_FREE_ARRAY( SACl_a, 1)
  SAC_ND_DEC_RC_FREE_ARRAY( SACp_inl_3303__flat_79_iv, 1)
  /*
   * ND_FUN_AP( SACf_FFT1d_Slice__d___MAIN__cpx_32_128_128___MAIN__cpx_64, , 4, out_rc, SACl_b, in, 1.0, in_rc, SACp_inl_3288_res, in_rc, SACl_rofu)
   */
  SACf_FFT1d_Slice__d___MAIN__cpx_32_128_128___MAIN__cpx_64( SAC_ND_ARG_out_rc( SACl_b), SAC_ND_ARG_in( 1.0), SAC_ND_ARG_in_rc( SACp_inl_3288_res), SAC_ND_ARG_in_rc( SACl_rofu));

  SAC_ND_ALLOC_ARRAY( double, SACp_inl_3340_res, 1)
  SAC_ND_ALLOC_ARRAY( int, SACp_inl_3355__flat_79_iv, 1)
  SAC_PF_BEGIN_WITH( genarray)
    /*
     * WL_BEGIN__OFFSET( SACp_inl_3340_res, 4, SACp_inl_3355__flat_79_iv, 4)
     */
    { int SAC_WL_OFFSET( SACp_inl_3340_res);
      int SAC_WL_MT_SCHEDULE_START( 0);
      int SAC_WL_MT_SCHEDULE_STOP( 0);
      int SAC_WL_MT_SCHEDULE_START( 1);
      int SAC_WL_MT_SCHEDULE_STOP( 1);
      int SAC_WL_MT_SCHEDULE_START( 2);
      int SAC_WL_MT_SCHEDULE_STOP( 2);
      int SAC_WL_MT_SCHEDULE_START( 3);
      int SAC_WL_MT_SCHEDULE_STOP( 3);
      int SAC_i;
      int SAC_WL_SHAPE_FACTOR( SACp_inl_3340_res, 0) = 1 * SAC_ND_A_SHAPE( SACp_inl_3340_res, 1) * SAC_ND_A_SHAPE( SACp_inl_3340_res, 2) * SAC_ND_A_SHAPE( SACp_inl_3340_res, 3);
      int SAC_WL_SHAPE_FACTOR( SACp_inl_3340_res, 1) = 1 * SAC_ND_A_SHAPE( SACp_inl_3340_res, 2) * SAC_ND_A_SHAPE( SACp_inl_3340_res, 3);
      int SAC_WL_SHAPE_FACTOR( SACp_inl_3340_res, 2) = 1 * SAC_ND_A_SHAPE( SACp_inl_3340_res, 3);
      int SAC_WL_SHAPE_FACTOR( SACp_inl_3340_res, 3) = 1;

      /*
       * MT_SCHEDULER_BEGIN( 0, 4, 0, 0, 0, 0, 32, 128, 128, 2)
       */
      SAC_WL_MT_SCHEDULE_START( 0) = 0;
      SAC_WL_MT_SCHEDULE_STOP( 0) = 32;
      SAC_WL_MT_SCHEDULE_START( 1) = 0;
      SAC_WL_MT_SCHEDULE_STOP( 1) = 128;
      SAC_WL_MT_SCHEDULE_START( 2) = 0;
      SAC_WL_MT_SCHEDULE_STOP( 2) = 128;
      SAC_WL_MT_SCHEDULE_START( 3) = 0;
      SAC_WL_MT_SCHEDULE_STOP( 3) = 2;

      /*
       * WL_INIT_OFFSET( SACp_inl_3340_res, 4, SACp_inl_3355__flat_79_iv, 4)
       */
      SAC_WL_OFFSET( SACp_inl_3340_res)
        = SAC_WL_MT_SCHEDULE_START( 0) * SAC_WL_SHAPE_FACTOR( SACp_inl_3340_res, 0)
        + SAC_WL_MT_SCHEDULE_START( 1) * SAC_WL_SHAPE_FACTOR( SACp_inl_3340_res, 1)
        + SAC_WL_MT_SCHEDULE_START( 2) * SAC_WL_SHAPE_FACTOR( SACp_inl_3340_res, 2)
        + SAC_WL_MT_SCHEDULE_START( 3) * SAC_WL_SHAPE_FACTOR( SACp_inl_3340_res, 3);

      SAC_WL_STRIDE_LOOP0_BEGIN( 0, SACp_inl_3355__flat_79_iv, SACp_inl_3354__type_568, 0, 32, 1)
        SAC_WL_GRID_UNROLL_BEGIN( 0, SACp_inl_3355__flat_79_iv, SACp_inl_3354__type_568, 0, 1)
          SAC_WL_SET_IDXVEC( 0, SACp_inl_3355__flat_79_iv, SACp_inl_3354__type_568, 0, 1)
          SAC_WL_STRIDE_LOOP0_BEGIN( 1, SACp_inl_3355__flat_79_iv, SACp_inl_3353__type_569, 0, 128, 1)
            SAC_WL_GRID_UNROLL_BEGIN( 1, SACp_inl_3355__flat_79_iv, SACp_inl_3353__type_569, 0, 1)
              SAC_WL_SET_IDXVEC( 1, SACp_inl_3355__flat_79_iv, SACp_inl_3353__type_569, 0, 1)
              SAC_WL_STRIDE_LOOP0_BEGIN( 2, SACp_inl_3355__flat_79_iv, SACp_inl_3352__type_570, 0, 128, 1)
                SAC_WL_GRID_UNROLL_BEGIN( 2, SACp_inl_3355__flat_79_iv, SACp_inl_3352__type_570, 0, 1)
                  SAC_WL_SET_IDXVEC( 2, SACp_inl_3355__flat_79_iv, SACp_inl_3352__type_570, 0, 1)
                  SAC_WL_STRIDE_LOOP0_BEGIN( 3, SACp_inl_3355__flat_79_iv, SACp_inl_3351__type_571, 0, 2, 1)
                    SAC_WL_GRID_UNROLL_BEGIN( 3, SACp_inl_3355__flat_79_iv, SACp_inl_3351__type_571, 0, 1)
                      SAC_WL_SET_IDXVEC( 3, SACp_inl_3355__flat_79_iv, SACp_inl_3351__type_571, 0, 1)
                      SAC_ND_ALLOC_ARRAY( int, SACp_inl_3361_res__SSA_1, 1)
                      SAC_ND_IDX_MODARRAY_AxVxS( int, SACp_inl_3361_res__SSA_1, SACp_inl_3355__flat_79_iv, 2, SACp_inl_3353__type_569)
                      SAC_ND_CHECK_REUSE_ARRAY( SACp_inl_3361_res__SSA_1, SACp_inl_3361_res__SSA_2)
                      SAC_ND_ALLOC_ARRAY( int, SACp_inl_3361_res__SSA_2, 0)
                      SAC_ND_INC_RC( SACp_inl_3361_res__SSA_2, 1)
                      SAC_ND_IDX_MODARRAY_AxVxS( int, SACp_inl_3361_res__SSA_2, SACp_inl_3361_res__SSA_1, 1, SACp_inl_3352__type_570)
                      SAC_ND_DEC_RC_FREE_ARRAY( SACp_inl_3361_res__SSA_1, 1)
                      SAC_ND_CHECK_REUSE_ARRAY( SACp_inl_3361_res__SSA_2, SACp_inl_3361_res__SSA_3)
                      SAC_ND_ALLOC_ARRAY( int, SACp_inl_3361_res__SSA_3, 0)
                      SAC_ND_INC_RC( SACp_inl_3361_res__SSA_3, 1)
                      SAC_ND_IDX_MODARRAY_AxVxS( int, SACp_inl_3361_res__SSA_3, SACp_inl_3361_res__SSA_2, 0, SACp_inl_3354__type_568)
                      SAC_ND_DEC_RC_FREE_ARRAY( SACp_inl_3361_res__SSA_2, 1)
                      SAC_ND_IDX_SEL_S( 3, SACp_inl_3361_res__SSA_3, SACp__ae_3_inl_3350_ivt)
                      SAC_ND_DEC_RC_FREE_ARRAY( SACp_inl_3361_res__SSA_3, 1)
                      SACp_inl_3350_ivt__SSA_1_32_128_128_2__ = ((((((SACp_inl_3354__type_568 * 128) + SACp_inl_3352__type_570) * 128) + SACp_inl_3353__type_569) * 2) + SACp__ae_3_inl_3350_ivt); 
                      SAC_ND_IDX_SEL_S( SACp_inl_3350_ivt__SSA_1_32_128_128_2__, SACl_b, SACp_inl_3341_val)
                      /*
                       * WL_ASSIGN( SACp_inl_3341_val, 0, SACp_inl_3340_res, 4, SACp_inl_3355__flat_79_iv, 4, SACp_inl_3354__type_568, SACp_inl_3353__type_569, SACp_inl_3352__type_570, SACp_inl_3351__type_571)
                       */
                      SAC_TR_WL_PRINT( ("index vector [%d, %d, %d, %d] (== offset %d) -- offset %d -- assign", SACp_inl_3354__type_568, SACp_inl_3353__type_569, SACp_inl_3352__type_570, SACp_inl_3351__type_571, ( SAC_ND_A_SHAPE( SACp_inl_3340_res, 3) * ( SAC_ND_A_SHAPE( SACp_inl_3340_res, 2) * ( SAC_ND_A_SHAPE( SACp_inl_3340_res, 1) * SACp_inl_3354__type_568 + SACp_inl_3353__type_569 )+ SACp_inl_3352__type_570 )+ SACp_inl_3351__type_571 ), SAC_WL_OFFSET( SACp_inl_3340_res)));
                      SAC_ASSURE_TYPE( (SAC_ND_A_DIM( SACp_inl_3341_val) == (SAC_ND_A_DIM( SACp_inl_3340_res) - 4)), ("WL expression with illegal dimension found!"));
                      SAC_ASSURE_TYPE( (SAC_ND_A_SIZE( SACp_inl_3341_val) == SAC_WL_SHAPE_FACTOR( SACp_inl_3340_res, 3)), ("WL expression with illegal size found!"));
                      SAC_ND_WRITE_ARRAY( SACp_inl_3340_res, SAC_WL_OFFSET( SACp_inl_3340_res)) = SACp_inl_3341_val;
                      SAC_WL_OFFSET( SACp_inl_3340_res)++;

                    SAC_WL_GRID_UNROLL_END( 3, SACp_inl_3355__flat_79_iv, SACp_inl_3351__type_571, 0, 1)
                  SAC_WL_STRIDE_LOOP_END( 3, SACp_inl_3355__flat_79_iv, SACp_inl_3351__type_571, 0, 2, 1)
                SAC_WL_GRID_UNROLL_END( 2, SACp_inl_3355__flat_79_iv, SACp_inl_3352__type_570, 0, 1)
              SAC_WL_STRIDE_LOOP_END( 2, SACp_inl_3355__flat_79_iv, SACp_inl_3352__type_570, 0, 128, 1)
            SAC_WL_GRID_UNROLL_END( 1, SACp_inl_3355__flat_79_iv, SACp_inl_3353__type_569, 0, 1)
          SAC_WL_STRIDE_LOOP_END( 1, SACp_inl_3355__flat_79_iv, SACp_inl_3353__type_569, 0, 128, 1)
        SAC_WL_GRID_UNROLL_END( 0, SACp_inl_3355__flat_79_iv, SACp_inl_3354__type_568, 0, 1)
      SAC_WL_STRIDE_LOOP_END( 0, SACp_inl_3355__flat_79_iv, SACp_inl_3354__type_568, 0, 32, 1)
      /*
       * MT_SCHEDULER_END( 0, 4, 0, 0, 0, 0, 32, 128, 128, 2)
       */


      /*
       * WL_END__OFFSET( SACp_inl_3340_res, 4, SACp_inl_3355__flat_79_iv, 4)
       */
    }

  SAC_PF_END_WITH( genarray)
  SAC_ND_DEC_RC_FREE_ARRAY( SACl_b, 1)
  SAC_ND_DEC_RC_FREE_ARRAY( SACp_inl_3355__flat_79_iv, 1)
  /*
   * ND_FUN_AP( SACf_FFT1d_Slice__d___MAIN__cpx_32_128_128___MAIN__cpx_64, , 4, out_rc, SACl_c, in, 1.0, in_rc, SACp_inl_3340_res, in_rc, SACl_rofu)
   */
  SACf_FFT1d_Slice__d___MAIN__cpx_32_128_128___MAIN__cpx_64( SAC_ND_ARG_out_rc( SACl_c), SAC_ND_ARG_in( 1.0), SAC_ND_ARG_in_rc( SACp_inl_3340_res), SAC_ND_ARG_in_rc( SACl_rofu));

  SAC_ND_ALLOC_ARRAY( double, SACp_inl_3392_res, 1)
  SAC_ND_ALLOC_ARRAY( int, SACp_inl_3407__flat_79_iv, 1)
  SAC_PF_BEGIN_WITH( genarray)
    /*
     * WL_BEGIN__OFFSET( SACp_inl_3392_res, 4, SACp_inl_3407__flat_79_iv, 4)
     */
    { int SAC_WL_OFFSET( SACp_inl_3392_res);
      int SAC_WL_MT_SCHEDULE_START( 0);
      int SAC_WL_MT_SCHEDULE_STOP( 0);
      int SAC_WL_MT_SCHEDULE_START( 1);
      int SAC_WL_MT_SCHEDULE_STOP( 1);
      int SAC_WL_MT_SCHEDULE_START( 2);
      int SAC_WL_MT_SCHEDULE_STOP( 2);
      int SAC_WL_MT_SCHEDULE_START( 3);
      int SAC_WL_MT_SCHEDULE_STOP( 3);
      int SAC_i;
      int SAC_WL_SHAPE_FACTOR( SACp_inl_3392_res, 0) = 1 * SAC_ND_A_SHAPE( SACp_inl_3392_res, 1) * SAC_ND_A_SHAPE( SACp_inl_3392_res, 2) * SAC_ND_A_SHAPE( SACp_inl_3392_res, 3);
      int SAC_WL_SHAPE_FACTOR( SACp_inl_3392_res, 1) = 1 * SAC_ND_A_SHAPE( SACp_inl_3392_res, 2) * SAC_ND_A_SHAPE( SACp_inl_3392_res, 3);
      int SAC_WL_SHAPE_FACTOR( SACp_inl_3392_res, 2) = 1 * SAC_ND_A_SHAPE( SACp_inl_3392_res, 3);
      int SAC_WL_SHAPE_FACTOR( SACp_inl_3392_res, 3) = 1;

      /*
       * MT_SCHEDULER_BEGIN( 0, 4, 0, 0, 0, 0, 128, 128, 32, 2)
       */
      SAC_WL_MT_SCHEDULE_START( 0) = 0;
      SAC_WL_MT_SCHEDULE_STOP( 0) = 128;
      SAC_WL_MT_SCHEDULE_START( 1) = 0;
      SAC_WL_MT_SCHEDULE_STOP( 1) = 128;
      SAC_WL_MT_SCHEDULE_START( 2) = 0;
      SAC_WL_MT_SCHEDULE_STOP( 2) = 32;
      SAC_WL_MT_SCHEDULE_START( 3) = 0;
      SAC_WL_MT_SCHEDULE_STOP( 3) = 2;

      /*
       * WL_INIT_OFFSET( SACp_inl_3392_res, 4, SACp_inl_3407__flat_79_iv, 4)
       */
      SAC_WL_OFFSET( SACp_inl_3392_res)
        = SAC_WL_MT_SCHEDULE_START( 0) * SAC_WL_SHAPE_FACTOR( SACp_inl_3392_res, 0)
        + SAC_WL_MT_SCHEDULE_START( 1) * SAC_WL_SHAPE_FACTOR( SACp_inl_3392_res, 1)
        + SAC_WL_MT_SCHEDULE_START( 2) * SAC_WL_SHAPE_FACTOR( SACp_inl_3392_res, 2)
        + SAC_WL_MT_SCHEDULE_START( 3) * SAC_WL_SHAPE_FACTOR( SACp_inl_3392_res, 3);

      SAC_WL_STRIDE_LOOP0_BEGIN( 0, SACp_inl_3407__flat_79_iv, SACp_inl_3406__type_574, 0, 128, 1)
        SAC_WL_GRID_UNROLL_BEGIN( 0, SACp_inl_3407__flat_79_iv, SACp_inl_3406__type_574, 0, 1)
          SAC_WL_SET_IDXVEC( 0, SACp_inl_3407__flat_79_iv, SACp_inl_3406__type_574, 0, 1)
          SAC_WL_STRIDE_LOOP0_BEGIN( 1, SACp_inl_3407__flat_79_iv, SACp_inl_3405__type_575, 0, 128, 1)
            SAC_WL_GRID_UNROLL_BEGIN( 1, SACp_inl_3407__flat_79_iv, SACp_inl_3405__type_575, 0, 1)
              SAC_WL_SET_IDXVEC( 1, SACp_inl_3407__flat_79_iv, SACp_inl_3405__type_575, 0, 1)
              SAC_WL_STRIDE_LOOP0_BEGIN( 2, SACp_inl_3407__flat_79_iv, SACp_inl_3404__type_576, 0, 32, 1)
                SAC_WL_GRID_UNROLL_BEGIN( 2, SACp_inl_3407__flat_79_iv, SACp_inl_3404__type_576, 0, 1)
                  SAC_WL_SET_IDXVEC( 2, SACp_inl_3407__flat_79_iv, SACp_inl_3404__type_576, 0, 1)
                  SAC_WL_STRIDE_LOOP0_BEGIN( 3, SACp_inl_3407__flat_79_iv, SACp_inl_3403__type_577, 0, 2, 1)
                    SAC_WL_GRID_UNROLL_BEGIN( 3, SACp_inl_3407__flat_79_iv, SACp_inl_3403__type_577, 0, 1)
                      SAC_WL_SET_IDXVEC( 3, SACp_inl_3407__flat_79_iv, SACp_inl_3403__type_577, 0, 1)
                      SAC_ND_ALLOC_ARRAY( int, SACp_inl_3413_res__SSA_1, 1)
                      SAC_ND_IDX_MODARRAY_AxVxS( int, SACp_inl_3413_res__SSA_1, SACp_inl_3407__flat_79_iv, 2, SACp_inl_3405__type_575)
                      SAC_ND_CHECK_REUSE_ARRAY( SACp_inl_3413_res__SSA_1, SACp_inl_3413_res__SSA_2)
                      SAC_ND_ALLOC_ARRAY( int, SACp_inl_3413_res__SSA_2, 0)
                      SAC_ND_INC_RC( SACp_inl_3413_res__SSA_2, 1)
                      SAC_ND_IDX_MODARRAY_AxVxS( int, SACp_inl_3413_res__SSA_2, SACp_inl_3413_res__SSA_1, 1, SACp_inl_3406__type_574)
                      SAC_ND_DEC_RC_FREE_ARRAY( SACp_inl_3413_res__SSA_1, 1)
                      SAC_ND_CHECK_REUSE_ARRAY( SACp_inl_3413_res__SSA_2, SACp_inl_3413_res__SSA_3)
                      SAC_ND_ALLOC_ARRAY( int, SACp_inl_3413_res__SSA_3, 0)
                      SAC_ND_INC_RC( SACp_inl_3413_res__SSA_3, 1)
                      SAC_ND_IDX_MODARRAY_AxVxS( int, SACp_inl_3413_res__SSA_3, SACp_inl_3413_res__SSA_2, 0, SACp_inl_3404__type_576)
                      SAC_ND_DEC_RC_FREE_ARRAY( SACp_inl_3413_res__SSA_2, 1)
                      SAC_ND_IDX_SEL_S( 3, SACp_inl_3413_res__SSA_3, SACp__ae_3_inl_3402_ivt)
                      SAC_ND_DEC_RC_FREE_ARRAY( SACp_inl_3413_res__SSA_3, 1)
                      SACp_inl_3402_ivt__SSA_1_32_128_128_2__ = ((((((SACp_inl_3404__type_576 * 128) + SACp_inl_3406__type_574) * 128) + SACp_inl_3405__type_575) * 2) + SACp__ae_3_inl_3402_ivt); 
                      SAC_ND_IDX_SEL_S( SACp_inl_3402_ivt__SSA_1_32_128_128_2__, SACl_c, SACp_inl_3393_val)
                      /*
                       * WL_ASSIGN( SACp_inl_3393_val, 0, SACp_inl_3392_res, 4, SACp_inl_3407__flat_79_iv, 4, SACp_inl_3406__type_574, SACp_inl_3405__type_575, SACp_inl_3404__type_576, SACp_inl_3403__type_577)
                       */
                      SAC_TR_WL_PRINT( ("index vector [%d, %d, %d, %d] (== offset %d) -- offset %d -- assign", SACp_inl_3406__type_574, SACp_inl_3405__type_575, SACp_inl_3404__type_576, SACp_inl_3403__type_577, ( SAC_ND_A_SHAPE( SACp_inl_3392_res, 3) * ( SAC_ND_A_SHAPE( SACp_inl_3392_res, 2) * ( SAC_ND_A_SHAPE( SACp_inl_3392_res, 1) * SACp_inl_3406__type_574 + SACp_inl_3405__type_575 )+ SACp_inl_3404__type_576 )+ SACp_inl_3403__type_577 ), SAC_WL_OFFSET( SACp_inl_3392_res)));
                      SAC_ASSURE_TYPE( (SAC_ND_A_DIM( SACp_inl_3393_val) == (SAC_ND_A_DIM( SACp_inl_3392_res) - 4)), ("WL expression with illegal dimension found!"));
                      SAC_ASSURE_TYPE( (SAC_ND_A_SIZE( SACp_inl_3393_val) == SAC_WL_SHAPE_FACTOR( SACp_inl_3392_res, 3)), ("WL expression with illegal size found!"));
                      SAC_ND_WRITE_ARRAY( SACp_inl_3392_res, SAC_WL_OFFSET( SACp_inl_3392_res)) = SACp_inl_3393_val;
                      SAC_WL_OFFSET( SACp_inl_3392_res)++;

                    SAC_WL_GRID_UNROLL_END( 3, SACp_inl_3407__flat_79_iv, SACp_inl_3403__type_577, 0, 1)
                  SAC_WL_STRIDE_LOOP_END( 3, SACp_inl_3407__flat_79_iv, SACp_inl_3403__type_577, 0, 2, 1)
                SAC_WL_GRID_UNROLL_END( 2, SACp_inl_3407__flat_79_iv, SACp_inl_3404__type_576, 0, 1)
              SAC_WL_STRIDE_LOOP_END( 2, SACp_inl_3407__flat_79_iv, SACp_inl_3404__type_576, 0, 32, 1)
            SAC_WL_GRID_UNROLL_END( 1, SACp_inl_3407__flat_79_iv, SACp_inl_3405__type_575, 0, 1)
          SAC_WL_STRIDE_LOOP_END( 1, SACp_inl_3407__flat_79_iv, SACp_inl_3405__type_575, 0, 128, 1)
        SAC_WL_GRID_UNROLL_END( 0, SACp_inl_3407__flat_79_iv, SACp_inl_3406__type_574, 0, 1)
      SAC_WL_STRIDE_LOOP_END( 0, SACp_inl_3407__flat_79_iv, SACp_inl_3406__type_574, 0, 128, 1)
      /*
       * MT_SCHEDULER_END( 0, 4, 0, 0, 0, 0, 128, 128, 32, 2)
       */


      /*
       * WL_END__OFFSET( SACp_inl_3392_res, 4, SACp_inl_3407__flat_79_iv, 4)
       */
    }

  SAC_PF_END_WITH( genarray)
  SAC_ND_DEC_RC_FREE_ARRAY( SACl_c, 1)
  SAC_ND_DEC_RC_FREE_ARRAY( SACp_inl_3407__flat_79_iv, 1)
  /*
   * ND_FUN_AP( SACf_FFT1d_Slice__d___MAIN__cpx_128_128_32___MAIN__cpx_64, , 4, out_rc, SACl_d, in, 1.0, in_rc, SACp_inl_3392_res, in_rc, SACl_rofu)
   */
  SACf_FFT1d_Slice__d___MAIN__cpx_128_128_32___MAIN__cpx_64( SAC_ND_ARG_out_rc( SACl_d), SAC_ND_ARG_in( 1.0), SAC_ND_ARG_in_rc( SACp_inl_3392_res), SAC_ND_ARG_in_rc( SACl_rofu));

  /*
   * ND_FUN_RET( , 1, out_rc, SACl_d, SAC__arg_1)
   */
  SAC_ND_RET_out_rc( SACl_d, SAC__arg_1)
  return;
}

/*
 * ND_FUN_DEC( SACf_CheckResult__i___MAIN__cpx_128_128_32, void, 2, in, int, SACl_iter, in_rc, double *, SACl_X)
 */
void SACf_CheckResult__i___MAIN__cpx_128_128_32( SAC_ND_PARAM_in( int, SACl_iter), SAC_ND_PARAM_in_rc( double *, SACl_X))
{ 
  /*
   * ND_KS_DECL_ARRAY( double, SACp_inl_6519_X, 4, 128, 128, 32, 2)
   */
  double *SACp_inl_6519_X;
  int SAC_ND_A_RC( SACp_inl_6519_X);
  const int SAC_ND_A_SIZE( SACp_inl_6519_X) = 128*128*32*2;
  const int SAC_ND_A_DIM( SACp_inl_6519_X) = 4;
  const int SAC_ND_A_SHAPE( SACp_inl_6519_X, 0) = 128;
  const int SAC_ND_A_SHAPE( SACp_inl_6519_X, 1) = 128;
  const int SAC_ND_A_SHAPE( SACp_inl_6519_X, 2) = 32;
  const int SAC_ND_A_SHAPE( SACp_inl_6519_X, 3) = 2;

  double SACp_inl_6518_result_r; 
  double SACp_inl_6517_result_i; 
  int SACp_inl_6516_j; 
  double SACp_inl_6515_result_r__SSA_3; 
  double SACp_inl_6514_result_i__SSA_3; 
  int SACp_inl_6513_j__SSA_1; 
  bool SACp_inl_6512__flat_238; 
  int SACp_inl_6511_q; 
  int SACp_inl_6510__flat_226; 
  int SACp_inl_6509_r; 
  int SACp_inl_6508__flat_230; 
  int SACp_inl_6507_s; 
  int SACp_inl_6506__flat_235_128_128_32_2__; 
  double SACp_inl_6505__flat_234; 
  int SACp_inl_6504__flat_237_128_128_32_2__; 
  double SACp_inl_6503__flat_236; 
  double SACp_inl_5678_result_r__SSA_1; 
  double SACp_inl_5677_result_i__SSA_1; 
  SAC_ND_DECL_RC( SACe_string, SACp_flat_353)
  /*
   * ND_KS_DECL_ARRAY( char, SACp_flat_354, 1, 2)
   */
  char *SACp_flat_354;
  int SAC_ND_A_RC( SACp_flat_354);
  const int SAC_ND_A_SIZE( SACp_flat_354) = 2;
  const int SAC_ND_A_DIM( SACp_flat_354) = 1;
  const int SAC_ND_A_SHAPE( SACp_flat_354, 0) = 2;

  SAC_ND_DECL_RC( SACe_string, SACp_flat_350)
  /*
   * ND_KS_DECL_ARRAY( char, SACp_flat_351, 1, 21)
   */
  char *SACp_flat_351;
  int SAC_ND_A_RC( SACp_flat_351);
  const int SAC_ND_A_SIZE( SACp_flat_351) = 21;
  const int SAC_ND_A_DIM( SACp_flat_351) = 1;
  const int SAC_ND_A_SHAPE( SACp_flat_351, 0) = 21;

  SAC_ND_DECL_RC( SACe_string, SACp_flat_347)
  /*
   * ND_KS_DECL_ARRAY( char, SACp_flat_348, 1, 20)
   */
  char *SACp_flat_348;
  int SAC_ND_A_RC( SACp_flat_348);
  const int SAC_ND_A_SIZE( SACp_flat_348) = 20;
  const int SAC_ND_A_DIM( SACp_flat_348) = 1;
  const int SAC_ND_A_SHAPE( SACp_flat_348, 0) = 20;

  /*
   * ND_KS_DECL_ARRAY( double, SACp_inl_3498_V, 2, 6, 2)
   */
  double *SACp_inl_3498_V;
  int SAC_ND_A_RC( SACp_inl_3498_V);
  const int SAC_ND_A_SIZE( SACp_inl_3498_V) = 6*2;
  const int SAC_ND_A_DIM( SACp_inl_3498_V) = 2;
  const int SAC_ND_A_SHAPE( SACp_inl_3498_V, 0) = 6;
  const int SAC_ND_A_SHAPE( SACp_inl_3498_V, 1) = 2;

  int SACp_inl_3497__flat_246; 
  int SACp_inl_3491__type_628_6_2__; 
  double SACp_inl_3490__type_627; 
  /*
   * ND_KS_DECL_ARRAY( char, SACp_inl_3477__flat_119, 1, 16)
   */
  char *SACp_inl_3477__flat_119;
  int SAC_ND_A_RC( SACp_inl_3477__flat_119);
  const int SAC_ND_A_SIZE( SACp_inl_3477__flat_119) = 16;
  const int SAC_ND_A_DIM( SACp_inl_3477__flat_119) = 1;
  const int SAC_ND_A_SHAPE( SACp_inl_3477__flat_119, 0) = 16;

  SAC_ND_DECL_RC( SACe_string, SACp_inl_3476__flat_118)
  double SACp_inl_3465_result_r; 
  int SACp_inl_3463_j; 
  int SACp_inl_3491__type_628__SSA_1_6_2__; 
  double SACp_inl_3490__type_627__SSA_1; 

  /*
   * ND_KS_DECL_ARRAY_ARG( SACl_X, 4, 128, 128, 32, 2)
   */
  const int SAC_ND_A_SIZE( SACl_X) = 128*128*32*2;
  const int SAC_ND_A_DIM( SACl_X) = 4;
  const int SAC_ND_A_SHAPE( SACl_X, 0) = 128;
  const int SAC_ND_A_SHAPE( SACl_X, 1) = 128;
  const int SAC_ND_A_SHAPE( SACl_X, 2) = 32;
  const int SAC_ND_A_SHAPE( SACl_X, 3) = 2;

  SAC_ND_ALLOC_ARRAY( char, SACp_flat_348, 1)
  SAC_ND_CREATE_CONST_ARRAY_C( SACp_flat_348, "Current checksum:  ")
  /*
   * ND_FUN_AP( to_string, , 3, out_rc, SACp_flat_347, in_rc, SACp_flat_348, in, 19)
   */
  to_string( SAC_ND_ARG_out_rc( SACp_flat_347), SAC_ND_ARG_in_rc( SACp_flat_348), SAC_ND_ARG_in( 19));

  /*
   * ND_FUN_AP( SACprintf, , 1, in, SACp_flat_347)
   */
  SACprintf( SAC_ND_ARG_in( SACp_flat_347));

  SAC_ND_DEC_RC_FREE_HIDDEN( SACp_flat_347, 1, free)
  SACp_inl_3465_result_r = 0.0; 
  SACp_inl_3463_j = 0; 
  SAC_ND_KS_ASSIGN_ARRAY( SACl_X, SACp_inl_6519_X)
  SACp_inl_6518_result_r = SACp_inl_3465_result_r; 
  SACp_inl_6517_result_i = SACp_inl_3465_result_r; 
  SACp_inl_6516_j = SACp_inl_3463_j; 
  SAC_ND_GOTO( _comp_6653_SAC__label)
  do 
  { 
    SAC_ND_LABEL( _comp_6653_SAC__label)
    SACp_inl_6511_q = (SACp_inl_6516_j % 128); 
    SACp_inl_6510__flat_226 = (3 * SACp_inl_6516_j); 
    SACp_inl_6509_r = (SACp_inl_6510__flat_226 % 128); 
    SACp_inl_6508__flat_230 = (5 * SACp_inl_6516_j); 
    SACp_inl_6507_s = (SACp_inl_6508__flat_230 % 32); 
    SACp_inl_6506__flat_235_128_128_32_2__ = ((((((SACp_inl_6511_q * 128) + SACp_inl_6509_r) * 32) + SACp_inl_6507_s) * 2) + 0); 
    SAC_ND_IDX_SEL_S( SACp_inl_6506__flat_235_128_128_32_2__, SACp_inl_6519_X, SACp_inl_6505__flat_234)
    SACp_inl_6515_result_r__SSA_3 = (SACp_inl_6518_result_r + SACp_inl_6505__flat_234); 
    SACp_inl_6504__flat_237_128_128_32_2__ = ((((((SACp_inl_6511_q * 128) + SACp_inl_6509_r) * 32) + SACp_inl_6507_s) * 2) + 1); 
    SAC_ND_IDX_SEL_S( SACp_inl_6504__flat_237_128_128_32_2__, SACp_inl_6519_X, SACp_inl_6503__flat_236)
    SACp_inl_6514_result_i__SSA_3 = (SACp_inl_6517_result_i + SACp_inl_6503__flat_236); 
    SACp_inl_6513_j__SSA_1 = (SACp_inl_6516_j + 1); 
    SACp_inl_6512__flat_238 = (SACp_inl_6513_j__SSA_1 < 1024); 
    SACp_inl_6516_j = SACp_inl_6513_j__SSA_1; 
    SACp_inl_6517_result_i = SACp_inl_6514_result_i__SSA_3; 
    SACp_inl_6518_result_r = SACp_inl_6515_result_r__SSA_3; 
  }
  while (SACp_inl_6512__flat_238);
  SAC_ND_DEC_RC_FREE_ARRAY( SACp_inl_6519_X, 1)
  SACp_inl_5678_result_r__SSA_1 = SACp_inl_6515_result_r__SSA_3; 
  SACp_inl_5677_result_i__SSA_1 = SACp_inl_6514_result_i__SSA_3; 
  SAC_ND_ALLOC_ARRAY( char, SACp_inl_3477__flat_119, 1)
  SAC_ND_CREATE_CONST_ARRAY_C( SACp_inl_3477__flat_119, "(%.10g , %.10g)")
  /*
   * ND_FUN_AP( to_string, , 3, out_rc, SACp_inl_3476__flat_118, in_rc, SACp_inl_3477__flat_119, in, 15)
   */
  to_string( SAC_ND_ARG_out_rc( SACp_inl_3476__flat_118), SAC_ND_ARG_in_rc( SACp_inl_3477__flat_119), SAC_ND_ARG_in( 15));

  SAC_ND_INC_RC( SACp_inl_3476__flat_118, 1)
  /*
   * ND_FUN_AP( SACprintf, , 3, in, SACp_inl_3476__flat_118, in, SACp_inl_5678_result_r__SSA_1, in, SACp_inl_5677_result_i__SSA_1)
   */
  SACprintf( SAC_ND_ARG_in( SACp_inl_3476__flat_118), SAC_ND_ARG_in( SACp_inl_5678_result_r__SSA_1), SAC_ND_ARG_in( SACp_inl_5677_result_i__SSA_1));

  SAC_ND_DEC_RC( SACp_inl_3476__flat_118, 1)
  SAC_ND_ALLOC_ARRAY( char, SACp_flat_351, 1)
  SAC_ND_CREATE_CONST_ARRAY_C( SACp_flat_351, "\nRequired checksum: ")
  /*
   * ND_FUN_AP( to_string, , 3, out_rc, SACp_flat_350, in_rc, SACp_flat_351, in, 20)
   */
  to_string( SAC_ND_ARG_out_rc( SACp_flat_350), SAC_ND_ARG_in_rc( SACp_flat_351), SAC_ND_ARG_in( 20));

  /*
   * ND_FUN_AP( SACprintf, , 1, in, SACp_flat_350)
   */
  SACprintf( SAC_ND_ARG_in( SACp_flat_350));

  SAC_ND_DEC_RC_FREE_HIDDEN( SACp_flat_350, 1, free)
  SAC_ND_ALLOC_ARRAY( double, SACp_inl_3498_V, 1)
  /*
   * ND_CREATE_CONST_ARRAY_S( SACp_inl_3498_V, 12, 567.3612178944000561386928893625736236572265625, 529.324684917500007941271178424358367919921875, 563.14368852710003920947201550006866455078125, 528.2149986629000295579317025840282440185546875, 559.4024089969999522509169764816761016845703125, 527.09965580369998860987834632396697998046875, 556.06980470200005584047175943851470947265625, 526.0027904925000257208012044429779052734375, 553.0898991249999880892573855817317962646484375, 524.9400845633000471934792585670948028564453125, 550.415973453800006609526462852954864501953125, 523.921224708599993391544558107852935791015625)
   */
  SAC_ND_WRITE_ARRAY( SACp_inl_3498_V, 0) = 567.3612178944000561386928893625736236572265625;
  SAC_ND_WRITE_ARRAY( SACp_inl_3498_V, 1) = 529.324684917500007941271178424358367919921875;
  SAC_ND_WRITE_ARRAY( SACp_inl_3498_V, 2) = 563.14368852710003920947201550006866455078125;
  SAC_ND_WRITE_ARRAY( SACp_inl_3498_V, 3) = 528.2149986629000295579317025840282440185546875;
  SAC_ND_WRITE_ARRAY( SACp_inl_3498_V, 4) = 559.4024089969999522509169764816761016845703125;
  SAC_ND_WRITE_ARRAY( SACp_inl_3498_V, 5) = 527.09965580369998860987834632396697998046875;
  SAC_ND_WRITE_ARRAY( SACp_inl_3498_V, 6) = 556.06980470200005584047175943851470947265625;
  SAC_ND_WRITE_ARRAY( SACp_inl_3498_V, 7) = 526.0027904925000257208012044429779052734375;
  SAC_ND_WRITE_ARRAY( SACp_inl_3498_V, 8) = 553.0898991249999880892573855817317962646484375;
  SAC_ND_WRITE_ARRAY( SACp_inl_3498_V, 9) = 524.9400845633000471934792585670948028564453125;
  SAC_ND_WRITE_ARRAY( SACp_inl_3498_V, 10) = 550.415973453800006609526462852954864501953125;
  SAC_ND_WRITE_ARRAY( SACp_inl_3498_V, 11) = 523.921224708599993391544558107852935791015625;

  SACp_inl_3497__flat_246 = (SACl_iter + -1); 
  SACp_inl_3491__type_628_6_2__ = ((SACp_inl_3497__flat_246 * 2) + 1); 
  SAC_ND_IDX_SEL_S( SACp_inl_3491__type_628_6_2__, SACp_inl_3498_V, SACp_inl_3490__type_627)
  SACp_inl_3491__type_628__SSA_1_6_2__ = ((SACp_inl_3497__flat_246 * 2) + 0); 
  SAC_ND_IDX_SEL_S( SACp_inl_3491__type_628__SSA_1_6_2__, SACp_inl_3498_V, SACp_inl_3490__type_627__SSA_1)
  SAC_ND_DEC_RC_FREE_ARRAY( SACp_inl_3498_V, 1)
  /*
   * ND_FUN_AP( SACprintf, , 3, in, SACp_inl_3476__flat_118, in, SACp_inl_3490__type_627__SSA_1, in, SACp_inl_3490__type_627)
   */
  SACprintf( SAC_ND_ARG_in( SACp_inl_3476__flat_118), SAC_ND_ARG_in( SACp_inl_3490__type_627__SSA_1), SAC_ND_ARG_in( SACp_inl_3490__type_627));

  SAC_ND_DEC_RC_FREE_HIDDEN( SACp_inl_3476__flat_118, 1, free)
  SAC_ND_ALLOC_ARRAY( char, SACp_flat_354, 1)
  SAC_ND_CREATE_CONST_ARRAY_C( SACp_flat_354, "\n")
  /*
   * ND_FUN_AP( to_string, , 3, out_rc, SACp_flat_353, in_rc, SACp_flat_354, in, 1)
   */
  to_string( SAC_ND_ARG_out_rc( SACp_flat_353), SAC_ND_ARG_in_rc( SACp_flat_354), SAC_ND_ARG_in( 1));

  /*
   * ND_FUN_AP( SACprintf, , 1, in, SACp_flat_353)
   */
  SACprintf( SAC_ND_ARG_in( SACp_flat_353));

  SAC_ND_DEC_RC_FREE_HIDDEN( SACp_flat_353, 1, free)
  /*
   * ND_FUN_RET( , 0)
   */
  return;
}

/*
 * ND_FUN_DEC( SACf_main, int, 0)
 */
int SACf_main()
{ 
  int SACp_inl_6648_t; 
  /*
   * ND_KS_DECL_ARRAY( double, SACp_inl_6647_V, 4, 128, 128, 32, 2)
   */
  double *SACp_inl_6647_V;
  int SAC_ND_A_RC( SACp_inl_6647_V);
  const int SAC_ND_A_SIZE( SACp_inl_6647_V) = 128*128*32*2;
  const int SAC_ND_A_DIM( SACp_inl_6647_V) = 4;
  const int SAC_ND_A_SHAPE( SACp_inl_6647_V, 0) = 128;
  const int SAC_ND_A_SHAPE( SACp_inl_6647_V, 1) = 128;
  const int SAC_ND_A_SHAPE( SACp_inl_6647_V, 2) = 32;
  const int SAC_ND_A_SHAPE( SACp_inl_6647_V, 3) = 2;

  /*
   * ND_KS_DECL_ARRAY( double, SACp_inl_6646_rofu, 2, 64, 2)
   */
  double *SACp_inl_6646_rofu;
  int SAC_ND_A_RC( SACp_inl_6646_rofu);
  const int SAC_ND_A_SIZE( SACp_inl_6646_rofu) = 64*2;
  const int SAC_ND_A_DIM( SACp_inl_6646_rofu) = 2;
  const int SAC_ND_A_SHAPE( SACp_inl_6646_rofu, 0) = 64;
  const int SAC_ND_A_SHAPE( SACp_inl_6646_rofu, 1) = 2;

  /*
   * ND_KS_DECL_ARRAY( double, SACp_inl_6645_expomap, 1, 50689)
   */
  double *SACp_inl_6645_expomap;
  int SAC_ND_A_RC( SACp_inl_6645_expomap);
  const int SAC_ND_A_SIZE( SACp_inl_6645_expomap) = 50689;
  const int SAC_ND_A_DIM( SACp_inl_6645_expomap) = 1;
  const int SAC_ND_A_SHAPE( SACp_inl_6645_expomap, 0) = 50689;

  /*
   * ND_KS_DECL_ARRAY( int, SACp_inl_6644_indexmap, 3, 128, 128, 32)
   */
  int *SACp_inl_6644_indexmap;
  int SAC_ND_A_RC( SACp_inl_6644_indexmap);
  const int SAC_ND_A_SIZE( SACp_inl_6644_indexmap) = 128*128*32;
  const int SAC_ND_A_DIM( SACp_inl_6644_indexmap) = 3;
  const int SAC_ND_A_SHAPE( SACp_inl_6644_indexmap, 0) = 128;
  const int SAC_ND_A_SHAPE( SACp_inl_6644_indexmap, 1) = 128;
  const int SAC_ND_A_SHAPE( SACp_inl_6644_indexmap, 2) = 32;

  int SACp_inl_6643_t__SSA_1; 
  int SACp_inl_6642_ivt__SSA_1_128_32_128_2__; 
  int SACp_inl_6641_ivt__SSA_1_128_32_128_2__; 
  int SACp_inl_6640_ivt__SSA_1_128_128_32_2__; 
  bool SACp_inl_6639__flat_360; 
  /*
   * ND_KS_DECL_ARRAY( int, SACp_inl_6638__flat_64_iv, 1, 4)
   */
  int *SACp_inl_6638__flat_64_iv;
  int SAC_ND_A_RC( SACp_inl_6638__flat_64_iv);
  const int SAC_ND_A_SIZE( SACp_inl_6638__flat_64_iv) = 4;
  const int SAC_ND_A_DIM( SACp_inl_6638__flat_64_iv) = 1;
  const int SAC_ND_A_SHAPE( SACp_inl_6638__flat_64_iv, 0) = 4;

  double SACp_inl_6637__flat_65; 
  /*
   * ND_KS_DECL_ARRAY( double, SACp_inl_6636_result, 4, 128, 128, 32, 2)
   */
  double *SACp_inl_6636_result;
  int SAC_ND_A_RC( SACp_inl_6636_result);
  const int SAC_ND_A_SIZE( SACp_inl_6636_result) = 128*128*32*2;
  const int SAC_ND_A_DIM( SACp_inl_6636_result) = 4;
  const int SAC_ND_A_SHAPE( SACp_inl_6636_result, 0) = 128;
  const int SAC_ND_A_SHAPE( SACp_inl_6636_result, 1) = 128;
  const int SAC_ND_A_SHAPE( SACp_inl_6636_result, 2) = 32;
  const int SAC_ND_A_SHAPE( SACp_inl_6636_result, 3) = 2;

  int SACp_inl_6635__type_623; 
  int SACp_inl_6634__type_624; 
  int SACp_inl_6633__type_625; 
  int SACp_inl_6632__type_626; 
  double SACp_inl_6631_val; 
  /*
   * ND_KS_DECL_ARRAY( int, SACp_inl_6630__flat_79_iv, 1, 4)
   */
  int *SACp_inl_6630__flat_79_iv;
  int SAC_ND_A_RC( SACp_inl_6630__flat_79_iv);
  const int SAC_ND_A_SIZE( SACp_inl_6630__flat_79_iv) = 4;
  const int SAC_ND_A_DIM( SACp_inl_6630__flat_79_iv) = 1;
  const int SAC_ND_A_SHAPE( SACp_inl_6630__flat_79_iv, 0) = 4;

  int SACp_inl_6629__type_612; 
  int SACp_inl_6628__type_613; 
  int SACp_inl_6627__type_614; 
  int SACp_inl_6626__type_615; 
  double SACp_inl_6625_val; 
  /*
   * ND_KS_DECL_ARRAY( double, SACp_inl_6624_res, 4, 128, 32, 128, 2)
   */
  double *SACp_inl_6624_res;
  int SAC_ND_A_RC( SACp_inl_6624_res);
  const int SAC_ND_A_SIZE( SACp_inl_6624_res) = 128*32*128*2;
  const int SAC_ND_A_DIM( SACp_inl_6624_res) = 4;
  const int SAC_ND_A_SHAPE( SACp_inl_6624_res, 0) = 128;
  const int SAC_ND_A_SHAPE( SACp_inl_6624_res, 1) = 32;
  const int SAC_ND_A_SHAPE( SACp_inl_6624_res, 2) = 128;
  const int SAC_ND_A_SHAPE( SACp_inl_6624_res, 3) = 2;

  /*
   * ND_KS_DECL_ARRAY( int, SACp_inl_6623__flat_79_iv, 1, 4)
   */
  int *SACp_inl_6623__flat_79_iv;
  int SAC_ND_A_RC( SACp_inl_6623__flat_79_iv);
  const int SAC_ND_A_SIZE( SACp_inl_6623__flat_79_iv) = 4;
  const int SAC_ND_A_DIM( SACp_inl_6623__flat_79_iv) = 1;
  const int SAC_ND_A_SHAPE( SACp_inl_6623__flat_79_iv, 0) = 4;

  int SACp_inl_6622__type_593; 
  int SACp_inl_6621__type_594; 
  int SACp_inl_6620__type_595; 
  int SACp_inl_6619__type_596; 
  double SACp_inl_6618_val; 
  /*
   * ND_KS_DECL_ARRAY( double, SACp_inl_6617_res, 4, 128, 32, 128, 2)
   */
  double *SACp_inl_6617_res;
  int SAC_ND_A_RC( SACp_inl_6617_res);
  const int SAC_ND_A_SIZE( SACp_inl_6617_res) = 128*32*128*2;
  const int SAC_ND_A_DIM( SACp_inl_6617_res) = 4;
  const int SAC_ND_A_SHAPE( SACp_inl_6617_res, 0) = 128;
  const int SAC_ND_A_SHAPE( SACp_inl_6617_res, 1) = 32;
  const int SAC_ND_A_SHAPE( SACp_inl_6617_res, 2) = 128;
  const int SAC_ND_A_SHAPE( SACp_inl_6617_res, 3) = 2;

  /*
   * ND_KS_DECL_ARRAY( double, SACp_inl_6616_u, 4, 128, 128, 32, 2)
   */
  double *SACp_inl_6616_u;
  int SAC_ND_A_RC( SACp_inl_6616_u);
  const int SAC_ND_A_SIZE( SACp_inl_6616_u) = 128*128*32*2;
  const int SAC_ND_A_DIM( SACp_inl_6616_u) = 4;
  const int SAC_ND_A_SHAPE( SACp_inl_6616_u, 0) = 128;
  const int SAC_ND_A_SHAPE( SACp_inl_6616_u, 1) = 128;
  const int SAC_ND_A_SHAPE( SACp_inl_6616_u, 2) = 32;
  const int SAC_ND_A_SHAPE( SACp_inl_6616_u, 3) = 2;

  /*
   * ND_KS_DECL_ARRAY( double, SACp_inl_6615_v, 4, 128, 32, 128, 2)
   */
  double *SACp_inl_6615_v;
  int SAC_ND_A_RC( SACp_inl_6615_v);
  const int SAC_ND_A_SIZE( SACp_inl_6615_v) = 128*32*128*2;
  const int SAC_ND_A_DIM( SACp_inl_6615_v) = 4;
  const int SAC_ND_A_SHAPE( SACp_inl_6615_v, 0) = 128;
  const int SAC_ND_A_SHAPE( SACp_inl_6615_v, 1) = 32;
  const int SAC_ND_A_SHAPE( SACp_inl_6615_v, 2) = 128;
  const int SAC_ND_A_SHAPE( SACp_inl_6615_v, 3) = 2;

  /*
   * ND_KS_DECL_ARRAY( double, SACp_inl_6614_w, 4, 128, 32, 128, 2)
   */
  double *SACp_inl_6614_w;
  int SAC_ND_A_RC( SACp_inl_6614_w);
  const int SAC_ND_A_SIZE( SACp_inl_6614_w) = 128*32*128*2;
  const int SAC_ND_A_DIM( SACp_inl_6614_w) = 4;
  const int SAC_ND_A_SHAPE( SACp_inl_6614_w, 0) = 128;
  const int SAC_ND_A_SHAPE( SACp_inl_6614_w, 1) = 32;
  const int SAC_ND_A_SHAPE( SACp_inl_6614_w, 2) = 128;
  const int SAC_ND_A_SHAPE( SACp_inl_6614_w, 3) = 2;

  /*
   * ND_KS_DECL_ARRAY( int, SACp_inl_6613__flat_218_iv, 1, 4)
   */
  int *SACp_inl_6613__flat_218_iv;
  int SAC_ND_A_RC( SACp_inl_6613__flat_218_iv);
  const int SAC_ND_A_SIZE( SACp_inl_6613__flat_218_iv) = 4;
  const int SAC_ND_A_DIM( SACp_inl_6613__flat_218_iv) = 1;
  const int SAC_ND_A_SHAPE( SACp_inl_6613__flat_218_iv, 0) = 4;

  int SACp_inl_6613__flat_218_iv_128_128_32_2__; 
  int SACp_inl_6612__flat_214_i; 
  int SACp_inl_6611__flat_215_j; 
  int SACp_inl_6610__flat_216_k; 
  int SACp_inl_6609__flat_217_l; 
  int SACp_inl_6608__flat_220_128_128_32__; 
  int SACp_inl_6607__flat_219; 
  int SACp_inl_6606_newindex; 
  int SACp_inl_6605__flat_221_50689__; 
  double SACp_inl_6604_exponent; 
  double SACp_inl_6603__flat_222; 
  double SACp_inl_6602_val; 
  /*
   * ND_KS_DECL_ARRAY( double, SACp_inl_6601_res, 4, 128, 128, 32, 2)
   */
  double *SACp_inl_6601_res;
  int SAC_ND_A_RC( SACp_inl_6601_res);
  const int SAC_ND_A_SIZE( SACp_inl_6601_res) = 128*128*32*2;
  const int SAC_ND_A_DIM( SACp_inl_6601_res) = 4;
  const int SAC_ND_A_SHAPE( SACp_inl_6601_res, 0) = 128;
  const int SAC_ND_A_SHAPE( SACp_inl_6601_res, 1) = 128;
  const int SAC_ND_A_SHAPE( SACp_inl_6601_res, 2) = 32;
  const int SAC_ND_A_SHAPE( SACp_inl_6601_res, 3) = 2;

  /*
   * ND_KS_DECL_ARRAY( double, SACp_inl_6600_A, 4, 128, 128, 32, 2)
   */
  double *SACp_inl_6600_A;
  int SAC_ND_A_RC( SACp_inl_6600_A);
  const int SAC_ND_A_SIZE( SACp_inl_6600_A) = 128*128*32*2;
  const int SAC_ND_A_DIM( SACp_inl_6600_A) = 4;
  const int SAC_ND_A_SHAPE( SACp_inl_6600_A, 0) = 128;
  const int SAC_ND_A_SHAPE( SACp_inl_6600_A, 1) = 128;
  const int SAC_ND_A_SHAPE( SACp_inl_6600_A, 2) = 32;
  const int SAC_ND_A_SHAPE( SACp_inl_6600_A, 3) = 2;

  double SACp_inl_6599_rand; 
  int SACp_inl_6598_x; 
  int SACp_inl_6597__lir_6423__inl_5869_y__SSA_1; 
  int SACp_inl_6596__lir_6424__inl_5870_z__SSA_1; 
  double SACp_inl_6595__lir_6425__inl_5871_const3__SSA_1; 
  double SACp_inl_6594__lir_6426__inl_5872_const2__SSA_1; 
  double SACp_inl_6593__lir_6427__inl_5873_const1__SSA_1; 
  double SACp_inl_6592__lir_6430__inl_5878_a1__SSA_1; 
  double SACp_inl_6591__lir_6432__inl_5880_a2__SSA_1; 
  /*
   * ND_KS_DECL_ARRAY( double, SACp_inl_6590_A__SSA_3, 4, 128, 128, 32, 2)
   */
  double *SACp_inl_6590_A__SSA_3;
  int SAC_ND_A_RC( SACp_inl_6590_A__SSA_3);
  const int SAC_ND_A_SIZE( SACp_inl_6590_A__SSA_3) = 128*128*32*2;
  const int SAC_ND_A_DIM( SACp_inl_6590_A__SSA_3) = 4;
  const int SAC_ND_A_SHAPE( SACp_inl_6590_A__SSA_3, 0) = 128;
  const int SAC_ND_A_SHAPE( SACp_inl_6590_A__SSA_3, 1) = 128;
  const int SAC_ND_A_SHAPE( SACp_inl_6590_A__SSA_3, 2) = 32;
  const int SAC_ND_A_SHAPE( SACp_inl_6590_A__SSA_3, 3) = 2;

  double SACp_inl_6589_rand__SSA_3; 
  int SACp_inl_6588_x__SSA_1; 
  bool SACp_inl_6587__flat_143; 
  int SACp_inl_6586__flat_140_128_128_32_2__; 
  double SACp_inl_6585__flat_141; 
  double SACp_inl_6584_c; 
  double SACp_inl_6583__flat_135; 
  double SACp_inl_6582_t5; 
  double SACp_inl_6581__flat_134; 
  double SACp_inl_6580_t4; 
  double SACp_inl_6579__flat_132; 
  double SACp_inl_6578__flat_133; 
  double SACp_inl_6577_t3; 
  double SACp_inl_6576__flat_131; 
  double SACp_inl_6575_t2; 
  double SACp_inl_6574__flat_130; 
  double SACp_inl_6573_t1; 
  double SACp_inl_6572__flat_128; 
  double SACp_inl_6571__flat_129; 
  double SACp_inl_6570_b2; 
  double SACp_inl_6569__flat_127; 
  double SACp_inl_6568_b1; 
  double SACp_inl_6567__flat_126; 
  /*
   * ND_KS_DECL_ARRAY( double, SACp_inl_6566_A__SSA_1, 4, 128, 128, 32, 2)
   */
  double *SACp_inl_6566_A__SSA_1;
  int SAC_ND_A_RC( SACp_inl_6566_A__SSA_1);
  const int SAC_ND_A_SIZE( SACp_inl_6566_A__SSA_1) = 128*128*32*2;
  const int SAC_ND_A_DIM( SACp_inl_6566_A__SSA_1) = 4;
  const int SAC_ND_A_SHAPE( SACp_inl_6566_A__SSA_1, 0) = 128;
  const int SAC_ND_A_SHAPE( SACp_inl_6566_A__SSA_1, 1) = 128;
  const int SAC_ND_A_SHAPE( SACp_inl_6566_A__SSA_1, 2) = 32;
  const int SAC_ND_A_SHAPE( SACp_inl_6566_A__SSA_1, 3) = 2;

  double SACp_inl_6565__flat_126__SSA_1; 
  double SACp_inl_6564_b1__SSA_1; 
  double SACp_inl_6563__flat_127__SSA_1; 
  double SACp_inl_6562_b2__SSA_1; 
  double SACp_inl_6561__flat_129__SSA_1; 
  double SACp_inl_6560__flat_128__SSA_1; 
  double SACp_inl_6559_t1__SSA_1; 
  double SACp_inl_6558__flat_130__SSA_1; 
  double SACp_inl_6557_t2__SSA_1; 
  double SACp_inl_6556__flat_131__SSA_1; 
  double SACp_inl_6555_t3__SSA_1; 
  double SACp_inl_6554__flat_133__SSA_1; 
  double SACp_inl_6553__flat_132__SSA_1; 
  double SACp_inl_6552_t4__SSA_1; 
  double SACp_inl_6551__flat_134__SSA_1; 
  double SACp_inl_6550_t5__SSA_1; 
  double SACp_inl_6549__flat_135__SSA_1; 
  double SACp_inl_6548__flat_141__SSA_1; 
  int SACp_inl_6547__flat_140__SSA_1_128_128_32_2__; 
  /*
   * ND_KS_DECL_ARRAY( double, SACp_inl_6546_A, 4, 128, 128, 32, 2)
   */
  double *SACp_inl_6546_A;
  int SAC_ND_A_RC( SACp_inl_6546_A);
  const int SAC_ND_A_SIZE( SACp_inl_6546_A) = 128*128*32*2;
  const int SAC_ND_A_DIM( SACp_inl_6546_A) = 4;
  const int SAC_ND_A_SHAPE( SACp_inl_6546_A, 0) = 128;
  const int SAC_ND_A_SHAPE( SACp_inl_6546_A, 1) = 128;
  const int SAC_ND_A_SHAPE( SACp_inl_6546_A, 2) = 32;
  const int SAC_ND_A_SHAPE( SACp_inl_6546_A, 3) = 2;

  double SACp_inl_6545_rand; 
  int SACp_inl_6544_y; 
  double SACp_inl_6543__lir_6444__inl_5723_const1; 
  double SACp_inl_6542__lir_6445__inl_5722_const2; 
  double SACp_inl_6541__lir_6446__inl_5721_const3; 
  int SACp_inl_6540__lir_6447__inl_5719_z; 
  int SACp_inl_6539__lir_6448__inl_5717_x; 
  double SACp_inl_6538__lir_6459__inl_5859_a1; 
  double SACp_inl_6537__lir_6461__inl_5857_a2; 
  /*
   * ND_KS_DECL_ARRAY( double, SACp_inl_6536_A__SSA_3, 4, 128, 128, 32, 2)
   */
  double *SACp_inl_6536_A__SSA_3;
  int SAC_ND_A_RC( SACp_inl_6536_A__SSA_3);
  const int SAC_ND_A_SIZE( SACp_inl_6536_A__SSA_3) = 128*128*32*2;
  const int SAC_ND_A_DIM( SACp_inl_6536_A__SSA_3) = 4;
  const int SAC_ND_A_SHAPE( SACp_inl_6536_A__SSA_3, 0) = 128;
  const int SAC_ND_A_SHAPE( SACp_inl_6536_A__SSA_3, 1) = 128;
  const int SAC_ND_A_SHAPE( SACp_inl_6536_A__SSA_3, 2) = 32;
  const int SAC_ND_A_SHAPE( SACp_inl_6536_A__SSA_3, 3) = 2;

  double SACp_inl_6535_rand__SSA_3; 
  int SACp_inl_6534_y__SSA_1; 
  bool SACp_inl_6533__flat_144; 
  /*
   * ND_KS_DECL_ARRAY( double, SACp_inl_6532_A, 4, 128, 128, 32, 2)
   */
  double *SACp_inl_6532_A;
  int SAC_ND_A_RC( SACp_inl_6532_A);
  const int SAC_ND_A_SIZE( SACp_inl_6532_A) = 128*128*32*2;
  const int SAC_ND_A_DIM( SACp_inl_6532_A) = 4;
  const int SAC_ND_A_SHAPE( SACp_inl_6532_A, 0) = 128;
  const int SAC_ND_A_SHAPE( SACp_inl_6532_A, 1) = 128;
  const int SAC_ND_A_SHAPE( SACp_inl_6532_A, 2) = 32;
  const int SAC_ND_A_SHAPE( SACp_inl_6532_A, 3) = 2;

  double SACp_inl_6531_rand; 
  int SACp_inl_6530_z; 
  double SACp_inl_6529__lir_6451__inl_5740_const1; 
  double SACp_inl_6528__lir_6452__inl_5739_const2; 
  double SACp_inl_6527__lir_6453__inl_5738_const3; 
  int SACp_inl_6526__lir_6462__inl_3522_x; 
  double SACp_inl_6525__lir_6464__inl_5859_a1; 
  double SACp_inl_6524__lir_6466__inl_5857_a2; 
  /*
   * ND_KS_DECL_ARRAY( double, SACp_inl_6523_A__SSA_3, 4, 128, 128, 32, 2)
   */
  double *SACp_inl_6523_A__SSA_3;
  int SAC_ND_A_RC( SACp_inl_6523_A__SSA_3);
  const int SAC_ND_A_SIZE( SACp_inl_6523_A__SSA_3) = 128*128*32*2;
  const int SAC_ND_A_DIM( SACp_inl_6523_A__SSA_3) = 4;
  const int SAC_ND_A_SHAPE( SACp_inl_6523_A__SSA_3, 0) = 128;
  const int SAC_ND_A_SHAPE( SACp_inl_6523_A__SSA_3, 1) = 128;
  const int SAC_ND_A_SHAPE( SACp_inl_6523_A__SSA_3, 2) = 32;
  const int SAC_ND_A_SHAPE( SACp_inl_6523_A__SSA_3, 3) = 2;

  int SACp_inl_6522_z__SSA_1; 
  bool SACp_inl_6521__flat_145; 
  double SACp_inl_6520_rand__SSA_1; 
  double SACp_esd_6468; 
  double SACp_esd_6467; 
  /*
   * ND_KS_DECL_ARRAY( double, SACp_inl_5747_A__SSA_1, 4, 128, 128, 32, 2)
   */
  double *SACp_inl_5747_A__SSA_1;
  int SAC_ND_A_RC( SACp_inl_5747_A__SSA_1);
  const int SAC_ND_A_SIZE( SACp_inl_5747_A__SSA_1) = 128*128*32*2;
  const int SAC_ND_A_DIM( SACp_inl_5747_A__SSA_1) = 4;
  const int SAC_ND_A_SHAPE( SACp_inl_5747_A__SSA_1, 0) = 128;
  const int SAC_ND_A_SHAPE( SACp_inl_5747_A__SSA_1, 1) = 128;
  const int SAC_ND_A_SHAPE( SACp_inl_5747_A__SSA_1, 2) = 32;
  const int SAC_ND_A_SHAPE( SACp_inl_5747_A__SSA_1, 3) = 2;

  /*
   * ND_KS_DECL_ARRAY( double, SACl_V, 4, 128, 128, 32, 2)
   */
  double *SACl_V;
  int SAC_ND_A_RC( SACl_V);
  const int SAC_ND_A_SIZE( SACl_V) = 128*128*32*2;
  const int SAC_ND_A_DIM( SACl_V) = 4;
  const int SAC_ND_A_SHAPE( SACl_V, 0) = 128;
  const int SAC_ND_A_SHAPE( SACl_V, 1) = 128;
  const int SAC_ND_A_SHAPE( SACl_V, 2) = 32;
  const int SAC_ND_A_SHAPE( SACl_V, 3) = 2;

  /*
   * ND_KS_DECL_ARRAY( double, SACl_rofu, 2, 64, 2)
   */
  double *SACl_rofu;
  int SAC_ND_A_RC( SACl_rofu);
  const int SAC_ND_A_SIZE( SACl_rofu) = 64*2;
  const int SAC_ND_A_DIM( SACl_rofu) = 2;
  const int SAC_ND_A_SHAPE( SACl_rofu, 0) = 64;
  const int SAC_ND_A_SHAPE( SACl_rofu, 1) = 2;

  /*
   * ND_KS_DECL_ARRAY( double, SACl_expomap, 1, 50689)
   */
  double *SACl_expomap;
  int SAC_ND_A_RC( SACl_expomap);
  const int SAC_ND_A_SIZE( SACl_expomap) = 50689;
  const int SAC_ND_A_DIM( SACl_expomap) = 1;
  const int SAC_ND_A_SHAPE( SACl_expomap, 0) = 50689;

  /*
   * ND_KS_DECL_ARRAY( int, SACl_indexmap, 3, 128, 128, 32)
   */
  int *SACl_indexmap;
  int SAC_ND_A_RC( SACl_indexmap);
  const int SAC_ND_A_SIZE( SACl_indexmap) = 128*128*32;
  const int SAC_ND_A_DIM( SACl_indexmap) = 3;
  const int SAC_ND_A_SHAPE( SACl_indexmap, 0) = 128;
  const int SAC_ND_A_SHAPE( SACl_indexmap, 1) = 128;
  const int SAC_ND_A_SHAPE( SACl_indexmap, 2) = 32;

  SAC_ND_DECL_RC( SACe_string, SACp_flat_356)
  /*
   * ND_KS_DECL_ARRAY( char, SACp_flat_357, 1, 62)
   */
  char *SACp_flat_357;
  int SAC_ND_A_RC( SACp_flat_357);
  const int SAC_ND_A_SIZE( SACp_flat_357) = 62;
  const int SAC_ND_A_DIM( SACp_flat_357) = 1;
  const int SAC_ND_A_SHAPE( SACp_flat_357, 0) = 62;

  int SACp_inl_3553_idx; 
  int SACp_inl_3549_idx; 
  /*
   * ND_KS_DECL_ARRAY( int, SACp_inl_3545__type_375, 1, 4)
   */
  int *SACp_inl_3545__type_375;
  int SAC_ND_A_RC( SACp_inl_3545__type_375);
  const int SAC_ND_A_SIZE( SACp_inl_3545__type_375) = 4;
  const int SAC_ND_A_DIM( SACp_inl_3545__type_375) = 1;
  const int SAC_ND_A_SHAPE( SACp_inl_3545__type_375, 0) = 4;

  int SACp_inl_3544__type_377; 
  int SACp_inl_3543__type_378; 
  int SACp_inl_3542__type_379; 
  int SACp_inl_3541__type_380; 
  double SACp_inl_3540__type_376; 
  /*
   * ND_KS_DECL_ARRAY( double, SACp_inl_3539_A, 4, 128, 128, 32, 2)
   */
  double *SACp_inl_3539_A;
  int SAC_ND_A_RC( SACp_inl_3539_A);
  const int SAC_ND_A_SIZE( SACp_inl_3539_A) = 128*128*32*2;
  const int SAC_ND_A_DIM( SACp_inl_3539_A) = 4;
  const int SAC_ND_A_SHAPE( SACp_inl_3539_A, 0) = 128;
  const int SAC_ND_A_SHAPE( SACp_inl_3539_A, 1) = 128;
  const int SAC_ND_A_SHAPE( SACp_inl_3539_A, 2) = 32;
  const int SAC_ND_A_SHAPE( SACp_inl_3539_A, 3) = 2;

  double SACp_inl_3538_seed; 
  double SACp_inl_3536_a; 
  double SACp_inl_3535_const1; 
  double SACp_inl_3534_const2; 
  double SACp_inl_3533_const3; 
  /*
   * ND_KS_DECL_ARRAY( double, SACl_rofu__SSA_1, 2, 64, 2)
   */
  double *SACl_rofu__SSA_1;
  int SAC_ND_A_RC( SACl_rofu__SSA_1);
  const int SAC_ND_A_SIZE( SACl_rofu__SSA_1) = 64*2;
  const int SAC_ND_A_DIM( SACl_rofu__SSA_1) = 2;
  const int SAC_ND_A_SHAPE( SACl_rofu__SSA_1, 0) = 64;
  const int SAC_ND_A_SHAPE( SACl_rofu__SSA_1, 1) = 2;

  double SACp_lir_6463__inl_5860__flat_124; 
  double SACp_lir_6464__inl_5859_a1; 
  double SACp_lir_6465__inl_5858__flat_125; 
  double SACp_lir_6466__inl_5857_a2; 

  SAC_ND_ALLOC_ARRAY( char, SACp_flat_357, 1)
  SAC_ND_CREATE_CONST_ARRAY_C( SACp_flat_357, " Dimension: %d x %d x %d, N-Iter: %d  Total Size: %d Complex\n")
  /*
   * ND_FUN_AP( to_string, , 3, out_rc, SACp_flat_356, in_rc, SACp_flat_357, in, 61)
   */
  to_string( SAC_ND_ARG_out_rc( SACp_flat_356), SAC_ND_ARG_in_rc( SACp_flat_357), SAC_ND_ARG_in( 61));

  /*
   * ND_FUN_AP( SACprintf, , 6, in, SACp_flat_356, in, 128, in, 128, in, 32, in, 6, in, 524288)
   */
  SACprintf( SAC_ND_ARG_in( SACp_flat_356), SAC_ND_ARG_in( 128), SAC_ND_ARG_in( 128), SAC_ND_ARG_in( 32), SAC_ND_ARG_in( 6), SAC_ND_ARG_in( 524288));

  SAC_ND_DEC_RC_FREE_HIDDEN( SACp_flat_356, 1, free)
  /*
   * ND_FUN_AP( SACf_ComputeIndexMap, , 1, out_rc, SACl_indexmap)
   */
  SACf_ComputeIndexMap( SAC_ND_ARG_out_rc( SACl_indexmap));

  /*
   * ND_FUN_AP( SACf_ComputeExponentialMap, , 1, out_rc, SACl_expomap)
   */
  SACf_ComputeExponentialMap( SAC_ND_ARG_out_rc( SACl_expomap));

  /*
   * ND_FUN_AP( SACf_RootsOfUnity__d, , 2, out_rc, SACl_rofu, in, 1.0)
   */
  SACf_RootsOfUnity__d( SAC_ND_ARG_out_rc( SACl_rofu), SAC_ND_ARG_in( 1.0));

  SACp_inl_3540__type_376 = 0.0; 
  SAC_ND_ALLOC_ARRAY( double, SACp_inl_3539_A, 1)
  SAC_PF_BEGIN_WITH( genarray)
    /*
     * WL_BEGIN__OFFSET( SACp_inl_3539_A, 4, SACp_inl_3545__type_375, 4)
     */
    { int SAC_WL_OFFSET( SACp_inl_3539_A);
      int SAC_WL_MT_SCHEDULE_START( 0);
      int SAC_WL_MT_SCHEDULE_STOP( 0);
      int SAC_WL_MT_SCHEDULE_START( 1);
      int SAC_WL_MT_SCHEDULE_STOP( 1);
      int SAC_WL_MT_SCHEDULE_START( 2);
      int SAC_WL_MT_SCHEDULE_STOP( 2);
      int SAC_WL_MT_SCHEDULE_START( 3);
      int SAC_WL_MT_SCHEDULE_STOP( 3);
      int SAC_i;
      int SAC_WL_SHAPE_FACTOR( SACp_inl_3539_A, 0) = 1 * SAC_ND_A_SHAPE( SACp_inl_3539_A, 1) * SAC_ND_A_SHAPE( SACp_inl_3539_A, 2) * SAC_ND_A_SHAPE( SACp_inl_3539_A, 3);
      int SAC_WL_SHAPE_FACTOR( SACp_inl_3539_A, 1) = 1 * SAC_ND_A_SHAPE( SACp_inl_3539_A, 2) * SAC_ND_A_SHAPE( SACp_inl_3539_A, 3);
      int SAC_WL_SHAPE_FACTOR( SACp_inl_3539_A, 2) = 1 * SAC_ND_A_SHAPE( SACp_inl_3539_A, 3);
      int SAC_WL_SHAPE_FACTOR( SACp_inl_3539_A, 3) = 1;

      /*
       * MT_SCHEDULER_BEGIN( 0, 4, 0, 0, 0, 0, 128, 128, 32, 2)
       */
      SAC_WL_MT_SCHEDULE_START( 0) = 0;
      SAC_WL_MT_SCHEDULE_STOP( 0) = 128;
      SAC_WL_MT_SCHEDULE_START( 1) = 0;
      SAC_WL_MT_SCHEDULE_STOP( 1) = 128;
      SAC_WL_MT_SCHEDULE_START( 2) = 0;
      SAC_WL_MT_SCHEDULE_STOP( 2) = 32;
      SAC_WL_MT_SCHEDULE_START( 3) = 0;
      SAC_WL_MT_SCHEDULE_STOP( 3) = 2;

      /*
       * WL_INIT_OFFSET( SACp_inl_3539_A, 4, SACp_inl_3545__type_375, 4)
       */
      SAC_WL_OFFSET( SACp_inl_3539_A)
        = SAC_WL_MT_SCHEDULE_START( 0) * SAC_WL_SHAPE_FACTOR( SACp_inl_3539_A, 0)
        + SAC_WL_MT_SCHEDULE_START( 1) * SAC_WL_SHAPE_FACTOR( SACp_inl_3539_A, 1)
        + SAC_WL_MT_SCHEDULE_START( 2) * SAC_WL_SHAPE_FACTOR( SACp_inl_3539_A, 2)
        + SAC_WL_MT_SCHEDULE_START( 3) * SAC_WL_SHAPE_FACTOR( SACp_inl_3539_A, 3);

      SAC_WL_STRIDE_LOOP0_BEGIN( 0, SACp_inl_3545__type_375, SACp_inl_3544__type_377, 0, 128, 1)
        SAC_WL_GRID_UNROLL_BEGIN( 0, SACp_inl_3545__type_375, SACp_inl_3544__type_377, 0, 1)
          SAC_WL_STRIDE_LOOP0_BEGIN( 1, SACp_inl_3545__type_375, SACp_inl_3543__type_378, 0, 128, 1)
            SAC_WL_GRID_UNROLL_BEGIN( 1, SACp_inl_3545__type_375, SACp_inl_3543__type_378, 0, 1)
              SAC_WL_STRIDE_LOOP0_BEGIN( 2, SACp_inl_3545__type_375, SACp_inl_3542__type_379, 0, 32, 1)
                SAC_WL_GRID_UNROLL_BEGIN( 2, SACp_inl_3545__type_375, SACp_inl_3542__type_379, 0, 1)
                  SAC_WL_STRIDE_LOOP0_BEGIN( 3, SACp_inl_3545__type_375, SACp_inl_3541__type_380, 0, 2, 1)
                    SAC_WL_GRID_UNROLL_BEGIN( 3, SACp_inl_3545__type_375, SACp_inl_3541__type_380, 0, 1)
                      /*
                       * WL_ASSIGN( SACp_inl_3540__type_376, 0, SACp_inl_3539_A, 4, SACp_inl_3545__type_375, 4, SACp_inl_3544__type_377, SACp_inl_3543__type_378, SACp_inl_3542__type_379, SACp_inl_3541__type_380)
                       */
                      SAC_TR_WL_PRINT( ("index vector [%d, %d, %d, %d] (== offset %d) -- offset %d -- assign", SACp_inl_3544__type_377, SACp_inl_3543__type_378, SACp_inl_3542__type_379, SACp_inl_3541__type_380, ( SAC_ND_A_SHAPE( SACp_inl_3539_A, 3) * ( SAC_ND_A_SHAPE( SACp_inl_3539_A, 2) * ( SAC_ND_A_SHAPE( SACp_inl_3539_A, 1) * SACp_inl_3544__type_377 + SACp_inl_3543__type_378 )+ SACp_inl_3542__type_379 )+ SACp_inl_3541__type_380 ), SAC_WL_OFFSET( SACp_inl_3539_A)));
                      SAC_ASSURE_TYPE( (SAC_ND_A_DIM( SACp_inl_3540__type_376) == (SAC_ND_A_DIM( SACp_inl_3539_A) - 4)), ("WL expression with illegal dimension found!"));
                      SAC_ASSURE_TYPE( (SAC_ND_A_SIZE( SACp_inl_3540__type_376) == SAC_WL_SHAPE_FACTOR( SACp_inl_3539_A, 3)), ("WL expression with illegal size found!"));
                      SAC_ND_WRITE_ARRAY( SACp_inl_3539_A, SAC_WL_OFFSET( SACp_inl_3539_A)) = SACp_inl_3540__type_376;
                      SAC_WL_OFFSET( SACp_inl_3539_A)++;

                    SAC_WL_GRID_UNROLL_END( 3, SACp_inl_3545__type_375, SACp_inl_3541__type_380, 0, 1)
                  SAC_WL_STRIDE_LOOP_END( 3, SACp_inl_3545__type_375, SACp_inl_3541__type_380, 0, 2, 1)
                SAC_WL_GRID_UNROLL_END( 2, SACp_inl_3545__type_375, SACp_inl_3542__type_379, 0, 1)
              SAC_WL_STRIDE_LOOP_END( 2, SACp_inl_3545__type_375, SACp_inl_3542__type_379, 0, 32, 1)
            SAC_WL_GRID_UNROLL_END( 1, SACp_inl_3545__type_375, SACp_inl_3543__type_378, 0, 1)
          SAC_WL_STRIDE_LOOP_END( 1, SACp_inl_3545__type_375, SACp_inl_3543__type_378, 0, 128, 1)
        SAC_WL_GRID_UNROLL_END( 0, SACp_inl_3545__type_375, SACp_inl_3544__type_377, 0, 1)
      SAC_WL_STRIDE_LOOP_END( 0, SACp_inl_3545__type_375, SACp_inl_3544__type_377, 0, 128, 1)
      /*
       * MT_SCHEDULER_END( 0, 4, 0, 0, 0, 0, 128, 128, 32, 2)
       */


      /*
       * WL_END__OFFSET( SACp_inl_3539_A, 4, SACp_inl_3545__type_375, 4)
       */
    }

  SAC_PF_END_WITH( genarray)
  SACp_inl_3538_seed = 314159265.0; 
  /*
   * ND_FUN_AP( pow, SACp_inl_3536_a, 2, in, 5.0, in, 13.0)
   */
  SACp_inl_3536_a = pow( SAC_ND_ARG_in( 5.0), SAC_ND_ARG_in( 13.0));

  /*
   * ND_FUN_AP( pow, SACp_inl_3535_const1, 2, in, 2.0, in, 46.0)
   */
  SACp_inl_3535_const1 = pow( SAC_ND_ARG_in( 2.0), SAC_ND_ARG_in( 46.0));

  /*
   * ND_FUN_AP( pow, SACp_inl_3534_const2, 2, in, 2.0, in, -46.0)
   */
  SACp_inl_3534_const2 = pow( SAC_ND_ARG_in( 2.0), SAC_ND_ARG_in( -46.0));

  /*
   * ND_FUN_AP( pow, SACp_inl_3533_const3, 2, in, 2.0, in, 23.0)
   */
  SACp_inl_3533_const3 = pow( SAC_ND_ARG_in( 2.0), SAC_ND_ARG_in( 23.0));

  SACp_inl_3549_idx = 0; 
  SACp_inl_3553_idx = 1; 
  SACp_lir_6463__inl_5860__flat_124 = (SACp_inl_3536_a / SACp_inl_3533_const3); 
  /*
   * ND_FUN_AP( floor, SACp_lir_6464__inl_5859_a1, 1, in, SACp_lir_6463__inl_5860__flat_124)
   */
  SACp_lir_6464__inl_5859_a1 = floor( SAC_ND_ARG_in( SACp_lir_6463__inl_5860__flat_124));

  SACp_lir_6465__inl_5858__flat_125 = (SACp_inl_3533_const3 * SACp_lir_6464__inl_5859_a1); 
  SACp_lir_6466__inl_5857_a2 = (SACp_inl_3536_a - SACp_lir_6465__inl_5858__flat_125); 
  SAC_ND_KS_ASSIGN_ARRAY( SACp_inl_3539_A, SACp_inl_6532_A)
  SACp_inl_6531_rand = SACp_inl_3538_seed; 
  SACp_inl_6530_z = SACp_inl_3549_idx; 
  SACp_inl_6529__lir_6451__inl_5740_const1 = SACp_inl_3535_const1; 
  SACp_inl_6528__lir_6452__inl_5739_const2 = SACp_inl_3534_const2; 
  SACp_inl_6527__lir_6453__inl_5738_const3 = SACp_inl_3533_const3; 
  SACp_inl_6526__lir_6462__inl_3522_x = SACp_inl_3549_idx; 
  SACp_inl_6525__lir_6464__inl_5859_a1 = SACp_lir_6464__inl_5859_a1; 
  SACp_inl_6524__lir_6466__inl_5857_a2 = SACp_lir_6466__inl_5857_a2; 
  SAC_ND_GOTO( _comp_6656_SAC__label)
  do 
  { 
    SAC_ND_DEC_RC_FREE_ARRAY( SACp_inl_6523_A__SSA_3, 1)
    SAC_ND_LABEL( _comp_6656_SAC__label)
    SAC_ND_KS_ASSIGN_ARRAY( SACp_inl_6532_A, SACp_inl_6546_A)
    SACp_inl_6545_rand = SACp_inl_6531_rand; 
    SACp_inl_6544_y = SACp_inl_6526__lir_6462__inl_3522_x; 
    SACp_inl_6543__lir_6444__inl_5723_const1 = SACp_inl_6529__lir_6451__inl_5740_const1; 
    SACp_inl_6542__lir_6445__inl_5722_const2 = SACp_inl_6528__lir_6452__inl_5739_const2; 
    SACp_inl_6541__lir_6446__inl_5721_const3 = SACp_inl_6527__lir_6453__inl_5738_const3; 
    SACp_inl_6540__lir_6447__inl_5719_z = SACp_inl_6530_z; 
    SACp_inl_6539__lir_6448__inl_5717_x = SACp_inl_6526__lir_6462__inl_3522_x; 
    SACp_inl_6538__lir_6459__inl_5859_a1 = SACp_inl_6525__lir_6464__inl_5859_a1; 
    SACp_inl_6537__lir_6461__inl_5857_a2 = SACp_inl_6524__lir_6466__inl_5857_a2; 
    SAC_ND_GOTO( _comp_6655_SAC__label)
    do 
    { 
      SAC_ND_DEC_RC_FREE_ARRAY( SACp_inl_6536_A__SSA_3, 1)
      SAC_ND_LABEL( _comp_6655_SAC__label)
      SAC_ND_KS_ASSIGN_ARRAY( SACp_inl_6546_A, SACp_inl_6600_A)
      SACp_inl_6599_rand = SACp_inl_6545_rand; 
      SACp_inl_6598_x = SACp_inl_6539__lir_6448__inl_5717_x; 
      SACp_inl_6597__lir_6423__inl_5869_y__SSA_1 = SACp_inl_6544_y; 
      SACp_inl_6596__lir_6424__inl_5870_z__SSA_1 = SACp_inl_6540__lir_6447__inl_5719_z; 
      SACp_inl_6595__lir_6425__inl_5871_const3__SSA_1 = SACp_inl_6541__lir_6446__inl_5721_const3; 
      SACp_inl_6594__lir_6426__inl_5872_const2__SSA_1 = SACp_inl_6542__lir_6445__inl_5722_const2; 
      SACp_inl_6593__lir_6427__inl_5873_const1__SSA_1 = SACp_inl_6543__lir_6444__inl_5723_const1; 
      SACp_inl_6592__lir_6430__inl_5878_a1__SSA_1 = SACp_inl_6538__lir_6459__inl_5859_a1; 
      SACp_inl_6591__lir_6432__inl_5880_a2__SSA_1 = SACp_inl_6537__lir_6461__inl_5857_a2; 
      SAC_ND_GOTO( _comp_6654_SAC__label)
      do 
      { 
        SAC_ND_DEC_RC_FREE_ARRAY( SACp_inl_6590_A__SSA_3, 1)
        SAC_ND_LABEL( _comp_6654_SAC__label)
        SACp_inl_6567__flat_126 = (SACp_inl_6599_rand / SACp_inl_6595__lir_6425__inl_5871_const3__SSA_1); 
        /*
         * ND_FUN_AP( floor, SACp_inl_6568_b1, 1, in, SACp_inl_6567__flat_126)
         */
        SACp_inl_6568_b1 = floor( SAC_ND_ARG_in( SACp_inl_6567__flat_126));

        SACp_inl_6569__flat_127 = (SACp_inl_6595__lir_6425__inl_5871_const3__SSA_1 * SACp_inl_6568_b1); 
        SACp_inl_6570_b2 = (SACp_inl_6599_rand - SACp_inl_6569__flat_127); 
        SACp_inl_6571__flat_129 = (SACp_inl_6591__lir_6432__inl_5880_a2__SSA_1 * SACp_inl_6568_b1); 
        SACp_inl_6572__flat_128 = (SACp_inl_6592__lir_6430__inl_5878_a1__SSA_1 * SACp_inl_6570_b2); 
        SACp_inl_6573_t1 = (SACp_inl_6572__flat_128 + SACp_inl_6571__flat_129); 
        SACp_inl_6574__flat_130 = (SACp_inl_6573_t1 / SACp_inl_6595__lir_6425__inl_5871_const3__SSA_1); 
        /*
         * ND_FUN_AP( floor, SACp_inl_6575_t2, 1, in, SACp_inl_6574__flat_130)
         */
        SACp_inl_6575_t2 = floor( SAC_ND_ARG_in( SACp_inl_6574__flat_130));

        SACp_inl_6576__flat_131 = (SACp_inl_6595__lir_6425__inl_5871_const3__SSA_1 * SACp_inl_6575_t2); 
        SACp_inl_6577_t3 = (SACp_inl_6573_t1 - SACp_inl_6576__flat_131); 
        SACp_inl_6578__flat_133 = (SACp_inl_6591__lir_6432__inl_5880_a2__SSA_1 * SACp_inl_6570_b2); 
        SACp_inl_6579__flat_132 = (SACp_inl_6595__lir_6425__inl_5871_const3__SSA_1 * SACp_inl_6577_t3); 
        SACp_inl_6580_t4 = (SACp_inl_6579__flat_132 + SACp_inl_6578__flat_133); 
        SACp_inl_6581__flat_134 = (SACp_inl_6580_t4 / SACp_inl_6593__lir_6427__inl_5873_const1__SSA_1); 
        /*
         * ND_FUN_AP( floor, SACp_inl_6582_t5, 1, in, SACp_inl_6581__flat_134)
         */
        SACp_inl_6582_t5 = floor( SAC_ND_ARG_in( SACp_inl_6581__flat_134));

        SACp_inl_6583__flat_135 = (SACp_inl_6593__lir_6427__inl_5873_const1__SSA_1 * SACp_inl_6582_t5); 
        SACp_inl_6584_c = (SACp_inl_6580_t4 - SACp_inl_6583__flat_135); 
        SACp_inl_6585__flat_141 = (SACp_inl_6584_c * SACp_inl_6594__lir_6426__inl_5872_const2__SSA_1); 
        SACp_inl_6586__flat_140_128_128_32_2__ = ((((((SACp_inl_6598_x * 128) + SACp_inl_6597__lir_6423__inl_5869_y__SSA_1) * 32) + SACp_inl_6596__lir_6424__inl_5870_z__SSA_1) * 2) + 0); 
        SAC_ND_CHECK_REUSE_ARRAY( SACp_inl_6600_A, SACp_inl_6566_A__SSA_1)
        SAC_ND_ALLOC_ARRAY( double, SACp_inl_6566_A__SSA_1, 0)
        SAC_ND_INC_RC( SACp_inl_6566_A__SSA_1, 1)
        SAC_ND_IDX_MODARRAY_AxVxS( double, SACp_inl_6566_A__SSA_1, SACp_inl_6600_A, SACp_inl_6586__flat_140_128_128_32_2__, SACp_inl_6585__flat_141)
        SAC_ND_DEC_RC_FREE_ARRAY( SACp_inl_6600_A, 1)
        SACp_inl_6565__flat_126__SSA_1 = (SACp_inl_6584_c / SACp_inl_6595__lir_6425__inl_5871_const3__SSA_1); 
        /*
         * ND_FUN_AP( floor, SACp_inl_6564_b1__SSA_1, 1, in, SACp_inl_6565__flat_126__SSA_1)
         */
        SACp_inl_6564_b1__SSA_1 = floor( SAC_ND_ARG_in( SACp_inl_6565__flat_126__SSA_1));

        SACp_inl_6563__flat_127__SSA_1 = (SACp_inl_6595__lir_6425__inl_5871_const3__SSA_1 * SACp_inl_6564_b1__SSA_1); 
        SACp_inl_6562_b2__SSA_1 = (SACp_inl_6584_c - SACp_inl_6563__flat_127__SSA_1); 
        SACp_inl_6561__flat_129__SSA_1 = (SACp_inl_6591__lir_6432__inl_5880_a2__SSA_1 * SACp_inl_6564_b1__SSA_1); 
        SACp_inl_6560__flat_128__SSA_1 = (SACp_inl_6592__lir_6430__inl_5878_a1__SSA_1 * SACp_inl_6562_b2__SSA_1); 
        SACp_inl_6559_t1__SSA_1 = (SACp_inl_6560__flat_128__SSA_1 + SACp_inl_6561__flat_129__SSA_1); 
        SACp_inl_6558__flat_130__SSA_1 = (SACp_inl_6559_t1__SSA_1 / SACp_inl_6595__lir_6425__inl_5871_const3__SSA_1); 
        /*
         * ND_FUN_AP( floor, SACp_inl_6557_t2__SSA_1, 1, in, SACp_inl_6558__flat_130__SSA_1)
         */
        SACp_inl_6557_t2__SSA_1 = floor( SAC_ND_ARG_in( SACp_inl_6558__flat_130__SSA_1));

        SACp_inl_6556__flat_131__SSA_1 = (SACp_inl_6595__lir_6425__inl_5871_const3__SSA_1 * SACp_inl_6557_t2__SSA_1); 
        SACp_inl_6555_t3__SSA_1 = (SACp_inl_6559_t1__SSA_1 - SACp_inl_6556__flat_131__SSA_1); 
        SACp_inl_6554__flat_133__SSA_1 = (SACp_inl_6591__lir_6432__inl_5880_a2__SSA_1 * SACp_inl_6562_b2__SSA_1); 
        SACp_inl_6553__flat_132__SSA_1 = (SACp_inl_6595__lir_6425__inl_5871_const3__SSA_1 * SACp_inl_6555_t3__SSA_1); 
        SACp_inl_6552_t4__SSA_1 = (SACp_inl_6553__flat_132__SSA_1 + SACp_inl_6554__flat_133__SSA_1); 
        SACp_inl_6551__flat_134__SSA_1 = (SACp_inl_6552_t4__SSA_1 / SACp_inl_6593__lir_6427__inl_5873_const1__SSA_1); 
        /*
         * ND_FUN_AP( floor, SACp_inl_6550_t5__SSA_1, 1, in, SACp_inl_6551__flat_134__SSA_1)
         */
        SACp_inl_6550_t5__SSA_1 = floor( SAC_ND_ARG_in( SACp_inl_6551__flat_134__SSA_1));

        SACp_inl_6549__flat_135__SSA_1 = (SACp_inl_6593__lir_6427__inl_5873_const1__SSA_1 * SACp_inl_6550_t5__SSA_1); 
        SACp_inl_6589_rand__SSA_3 = (SACp_inl_6552_t4__SSA_1 - SACp_inl_6549__flat_135__SSA_1); 
        SACp_inl_6548__flat_141__SSA_1 = (SACp_inl_6589_rand__SSA_3 * SACp_inl_6594__lir_6426__inl_5872_const2__SSA_1); 
        SACp_inl_6547__flat_140__SSA_1_128_128_32_2__ = ((((((SACp_inl_6598_x * 128) + SACp_inl_6597__lir_6423__inl_5869_y__SSA_1) * 32) + SACp_inl_6596__lir_6424__inl_5870_z__SSA_1) * 2) + 1); 
        SAC_ND_CHECK_REUSE_ARRAY( SACp_inl_6566_A__SSA_1, SACp_inl_6590_A__SSA_3)
        SAC_ND_ALLOC_ARRAY( double, SACp_inl_6590_A__SSA_3, 0)
        SAC_ND_INC_RC( SACp_inl_6590_A__SSA_3, 1)
        SAC_ND_IDX_MODARRAY_AxVxS( double, SACp_inl_6590_A__SSA_3, SACp_inl_6566_A__SSA_1, SACp_inl_6547__flat_140__SSA_1_128_128_32_2__, SACp_inl_6548__flat_141__SSA_1)
        SAC_ND_DEC_RC_FREE_ARRAY( SACp_inl_6566_A__SSA_1, 1)
        SAC_ND_INC_RC( SACp_inl_6590_A__SSA_3, 1)
        SACp_inl_6588_x__SSA_1 = (SACp_inl_6598_x + 1); 
        SACp_inl_6587__flat_143 = (SACp_inl_6588_x__SSA_1 < 128); 
        SACp_inl_6598_x = SACp_inl_6588_x__SSA_1; 
        SACp_inl_6599_rand = SACp_inl_6589_rand__SSA_3; 
        SAC_ND_KS_ASSIGN_ARRAY( SACp_inl_6590_A__SSA_3, SACp_inl_6600_A)
      }
      while (SACp_inl_6587__flat_143);
      SAC_ND_DEC_RC_FREE_ARRAY( SACp_inl_6600_A, 1)
      SAC_ND_KS_ASSIGN_ARRAY( SACp_inl_6590_A__SSA_3, SACp_inl_6536_A__SSA_3)
      SAC_ND_INC_RC( SACp_inl_6536_A__SSA_3, 1)
      SACp_inl_6535_rand__SSA_3 = SACp_inl_6589_rand__SSA_3; 
      SACp_inl_6534_y__SSA_1 = (SACp_inl_6544_y + 1); 
      SACp_inl_6533__flat_144 = (SACp_inl_6534_y__SSA_1 < 128); 
      SACp_inl_6544_y = SACp_inl_6534_y__SSA_1; 
      SACp_inl_6545_rand = SACp_inl_6535_rand__SSA_3; 
      SAC_ND_KS_ASSIGN_ARRAY( SACp_inl_6536_A__SSA_3, SACp_inl_6546_A)
    }
    while (SACp_inl_6533__flat_144);
    SAC_ND_DEC_RC_FREE_ARRAY( SACp_inl_6546_A, 1)
    SAC_ND_KS_ASSIGN_ARRAY( SACp_inl_6536_A__SSA_3, SACp_inl_6523_A__SSA_3)
    SAC_ND_INC_RC( SACp_inl_6523_A__SSA_3, 1)
    SACp_inl_6520_rand__SSA_1 = SACp_inl_6535_rand__SSA_3; 
    SACp_inl_6522_z__SSA_1 = (SACp_inl_6530_z + 1); 
    SACp_inl_6521__flat_145 = (SACp_inl_6522_z__SSA_1 < 32); 
    SACp_inl_6530_z = SACp_inl_6522_z__SSA_1; 
    SACp_inl_6531_rand = SACp_inl_6520_rand__SSA_1; 
    SAC_ND_KS_ASSIGN_ARRAY( SACp_inl_6523_A__SSA_3, SACp_inl_6532_A)
  }
  while (SACp_inl_6521__flat_145);
  SAC_ND_DEC_RC_FREE_ARRAY( SACp_inl_6532_A, 1)
  SAC_ND_KS_ASSIGN_ARRAY( SACp_inl_6523_A__SSA_3, SACp_inl_5747_A__SSA_1)
  /*
   * ND_FUN_AP( SACf_FFT3d_forward___MAIN__cpx_128_128_32___MAIN__cpx_64, , 3, out_rc, SACl_V, in_rc, SACp_inl_5747_A__SSA_1, in_rc, SACl_rofu)
   */
  SACf_FFT3d_forward___MAIN__cpx_128_128_32___MAIN__cpx_64( SAC_ND_ARG_out_rc( SACl_V), SAC_ND_ARG_in_rc( SACp_inl_5747_A__SSA_1), SAC_ND_ARG_in_rc( SACl_rofu));

  /*
   * ND_FUN_AP( SACf_RootsOfUnity__d, , 2, out_rc, SACl_rofu__SSA_1, in, -1.0)
   */
  SACf_RootsOfUnity__d( SAC_ND_ARG_out_rc( SACl_rofu__SSA_1), SAC_ND_ARG_in( -1.0));

  SACp_inl_6648_t = SACp_inl_3553_idx; 
  SAC_ND_KS_ASSIGN_ARRAY( SACl_V, SACp_inl_6647_V)
  SAC_ND_KS_ASSIGN_ARRAY( SACl_rofu__SSA_1, SACp_inl_6646_rofu)
  SAC_ND_KS_ASSIGN_ARRAY( SACl_expomap, SACp_inl_6645_expomap)
  SAC_ND_KS_ASSIGN_ARRAY( SACl_indexmap, SACp_inl_6644_indexmap)
  SAC_ND_GOTO( _comp_6657_SAC__label)
  do 
  { 
    SAC_ND_LABEL( _comp_6657_SAC__label)
    SAC_ND_INC_RC( SACp_inl_6646_rofu, 3)
    SAC_ND_ALLOC_ARRAY( double, SACp_inl_6601_res, 1)
    SAC_PF_BEGIN_WITH( modarray)
      /*
       * WL_BEGIN__OFFSET( SACp_inl_6601_res, 4, SACp_inl_6613__flat_218_iv, 4)
       */
      { int SAC_WL_OFFSET( SACp_inl_6601_res);
        int SAC_WL_MT_SCHEDULE_START( 0);
        int SAC_WL_MT_SCHEDULE_STOP( 0);
        int SAC_WL_MT_SCHEDULE_START( 1);
        int SAC_WL_MT_SCHEDULE_STOP( 1);
        int SAC_WL_MT_SCHEDULE_START( 2);
        int SAC_WL_MT_SCHEDULE_STOP( 2);
        int SAC_WL_MT_SCHEDULE_START( 3);
        int SAC_WL_MT_SCHEDULE_STOP( 3);
        int SAC_i;
        int SAC_WL_SHAPE_FACTOR( SACp_inl_6601_res, 0) = 1 * SAC_ND_A_SHAPE( SACp_inl_6601_res, 1) * SAC_ND_A_SHAPE( SACp_inl_6601_res, 2) * SAC_ND_A_SHAPE( SACp_inl_6601_res, 3);
        int SAC_WL_SHAPE_FACTOR( SACp_inl_6601_res, 1) = 1 * SAC_ND_A_SHAPE( SACp_inl_6601_res, 2) * SAC_ND_A_SHAPE( SACp_inl_6601_res, 3);
        int SAC_WL_SHAPE_FACTOR( SACp_inl_6601_res, 2) = 1 * SAC_ND_A_SHAPE( SACp_inl_6601_res, 3);
        int SAC_WL_SHAPE_FACTOR( SACp_inl_6601_res, 3) = 1;

        /*
         * MT_SCHEDULER_BEGIN( 0, 4, 0, 0, 0, 0, 128, 128, 32, 2)
         */
        SAC_WL_MT_SCHEDULE_START( 0) = 0;
        SAC_WL_MT_SCHEDULE_STOP( 0) = 128;
        SAC_WL_MT_SCHEDULE_START( 1) = 0;
        SAC_WL_MT_SCHEDULE_STOP( 1) = 128;
        SAC_WL_MT_SCHEDULE_START( 2) = 0;
        SAC_WL_MT_SCHEDULE_STOP( 2) = 32;
        SAC_WL_MT_SCHEDULE_START( 3) = 0;
        SAC_WL_MT_SCHEDULE_STOP( 3) = 2;

        /*
         * WL_INIT_OFFSET( SACp_inl_6601_res, 4, SACp_inl_6613__flat_218_iv, 4)
         */
        SAC_WL_OFFSET( SACp_inl_6601_res)
          = SAC_WL_MT_SCHEDULE_START( 0) * SAC_WL_SHAPE_FACTOR( SACp_inl_6601_res, 0)
          + SAC_WL_MT_SCHEDULE_START( 1) * SAC_WL_SHAPE_FACTOR( SACp_inl_6601_res, 1)
          + SAC_WL_MT_SCHEDULE_START( 2) * SAC_WL_SHAPE_FACTOR( SACp_inl_6601_res, 2)
          + SAC_WL_MT_SCHEDULE_START( 3) * SAC_WL_SHAPE_FACTOR( SACp_inl_6601_res, 3);

        SAC_WL_STRIDE_LOOP0_BEGIN( 0, SACp_inl_6613__flat_218_iv, SACp_inl_6612__flat_214_i, 0, 128, 1)
          SAC_WL_GRID_UNROLL_BEGIN( 0, SACp_inl_6613__flat_218_iv, SACp_inl_6612__flat_214_i, 0, 1)
            SAC_WL_STRIDE_LOOP0_BEGIN( 1, SACp_inl_6613__flat_218_iv, SACp_inl_6611__flat_215_j, 0, 128, 1)
              SAC_WL_GRID_UNROLL_BEGIN( 1, SACp_inl_6613__flat_218_iv, SACp_inl_6611__flat_215_j, 0, 1)
                SAC_WL_STRIDE_LOOP0_BEGIN( 2, SACp_inl_6613__flat_218_iv, SACp_inl_6610__flat_216_k, 0, 32, 1)
                  SAC_WL_GRID_UNROLL_BEGIN( 2, SACp_inl_6613__flat_218_iv, SACp_inl_6610__flat_216_k, 0, 1)
                    SAC_WL_STRIDE_LOOP0_BEGIN( 3, SACp_inl_6613__flat_218_iv, SACp_inl_6609__flat_217_l, 0, 2, 1)
                      SAC_WL_GRID_UNROLL_BEGIN( 3, SACp_inl_6613__flat_218_iv, SACp_inl_6609__flat_217_l, 0, 1)
                        SAC_ND_KS_USE_GENVAR_OFFSET( SACp_inl_6613__flat_218_iv_128_128_32_2__, SACp_inl_6601_res)
                        SACp_inl_6608__flat_220_128_128_32__ = ((((SACp_inl_6612__flat_214_i * 128) + SACp_inl_6611__flat_215_j) * 32) + SACp_inl_6610__flat_216_k); 
                        SAC_ND_IDX_SEL_S( SACp_inl_6608__flat_220_128_128_32__, SACp_inl_6644_indexmap, SACp_inl_6607__flat_219)
                        SACp_inl_6606_newindex = (SACp_inl_6648_t * SACp_inl_6607__flat_219); 
                        SACp_inl_6605__flat_221_50689__ = SACp_inl_6606_newindex; 
                        SAC_ND_IDX_SEL_S( SACp_inl_6605__flat_221_50689__, SACp_inl_6645_expomap, SACp_inl_6604_exponent)
                        SAC_ND_IDX_SEL_S( SACp_inl_6613__flat_218_iv_128_128_32_2__, SACp_inl_6647_V, SACp_inl_6603__flat_222)
                        SACp_inl_6602_val = (SACp_inl_6603__flat_222 * SACp_inl_6604_exponent); 
                        /*
                         * WL_ASSIGN( SACp_inl_6602_val, 0, SACp_inl_6601_res, 4, SACp_inl_6613__flat_218_iv, 4, SACp_inl_6612__flat_214_i, SACp_inl_6611__flat_215_j, SACp_inl_6610__flat_216_k, SACp_inl_6609__flat_217_l)
                         */
                        SAC_TR_WL_PRINT( ("index vector [%d, %d, %d, %d] (== offset %d) -- offset %d -- assign", SACp_inl_6612__flat_214_i, SACp_inl_6611__flat_215_j, SACp_inl_6610__flat_216_k, SACp_inl_6609__flat_217_l, ( SAC_ND_A_SHAPE( SACp_inl_6601_res, 3) * ( SAC_ND_A_SHAPE( SACp_inl_6601_res, 2) * ( SAC_ND_A_SHAPE( SACp_inl_6601_res, 1) * SACp_inl_6612__flat_214_i + SACp_inl_6611__flat_215_j )+ SACp_inl_6610__flat_216_k )+ SACp_inl_6609__flat_217_l ), SAC_WL_OFFSET( SACp_inl_6601_res)));
                        SAC_ASSURE_TYPE( (SAC_ND_A_DIM( SACp_inl_6602_val) == (SAC_ND_A_DIM( SACp_inl_6601_res) - 4)), ("WL expression with illegal dimension found!"));
                        SAC_ASSURE_TYPE( (SAC_ND_A_SIZE( SACp_inl_6602_val) == SAC_WL_SHAPE_FACTOR( SACp_inl_6601_res, 3)), ("WL expression with illegal size found!"));
                        SAC_ND_WRITE_ARRAY( SACp_inl_6601_res, SAC_WL_OFFSET( SACp_inl_6601_res)) = SACp_inl_6602_val;
                        SAC_WL_OFFSET( SACp_inl_6601_res)++;

                      SAC_WL_GRID_UNROLL_END( 3, SACp_inl_6613__flat_218_iv, SACp_inl_6609__flat_217_l, 0, 1)
                    SAC_WL_STRIDE_LOOP_END( 3, SACp_inl_6613__flat_218_iv, SACp_inl_6609__flat_217_l, 0, 2, 1)
                  SAC_WL_GRID_UNROLL_END( 2, SACp_inl_6613__flat_218_iv, SACp_inl_6610__flat_216_k, 0, 1)
                SAC_WL_STRIDE_LOOP_END( 2, SACp_inl_6613__flat_218_iv, SACp_inl_6610__flat_216_k, 0, 32, 1)
              SAC_WL_GRID_UNROLL_END( 1, SACp_inl_6613__flat_218_iv, SACp_inl_6611__flat_215_j, 0, 1)
            SAC_WL_STRIDE_LOOP_END( 1, SACp_inl_6613__flat_218_iv, SACp_inl_6611__flat_215_j, 0, 128, 1)
          SAC_WL_GRID_UNROLL_END( 0, SACp_inl_6613__flat_218_iv, SACp_inl_6612__flat_214_i, 0, 1)
        SAC_WL_STRIDE_LOOP_END( 0, SACp_inl_6613__flat_218_iv, SACp_inl_6612__flat_214_i, 0, 128, 1)
        /*
         * MT_SCHEDULER_END( 0, 4, 0, 0, 0, 0, 128, 128, 32, 2)
         */


        /*
         * WL_END__OFFSET( SACp_inl_6601_res, 4, SACp_inl_6613__flat_218_iv, 4)
         */
      }

    SAC_PF_END_WITH( modarray)
    /*
     * ND_FUN_AP( SACf_FFT1d_Slice__d___MAIN__cpx_128_128_32___MAIN__cpx_64, , 4, out_rc, SACp_inl_6616_u, in, -1.0, in_rc, SACp_inl_6601_res, in_rc, SACp_inl_6646_rofu)
     */
    SACf_FFT1d_Slice__d___MAIN__cpx_128_128_32___MAIN__cpx_64( SAC_ND_ARG_out_rc( SACp_inl_6616_u), SAC_ND_ARG_in( -1.0), SAC_ND_ARG_in_rc( SACp_inl_6601_res), SAC_ND_ARG_in_rc( SACp_inl_6646_rofu));

    SAC_ND_ALLOC_ARRAY( double, SACp_inl_6617_res, 1)
    SAC_PF_BEGIN_WITH( genarray)
      /*
       * WL_BEGIN__OFFSET( SACp_inl_6617_res, 4, SACp_inl_6623__flat_79_iv, 4)
       */
      { int SAC_WL_OFFSET( SACp_inl_6617_res);
        int SAC_WL_MT_SCHEDULE_START( 0);
        int SAC_WL_MT_SCHEDULE_STOP( 0);
        int SAC_WL_MT_SCHEDULE_START( 1);
        int SAC_WL_MT_SCHEDULE_STOP( 1);
        int SAC_WL_MT_SCHEDULE_START( 2);
        int SAC_WL_MT_SCHEDULE_STOP( 2);
        int SAC_WL_MT_SCHEDULE_START( 3);
        int SAC_WL_MT_SCHEDULE_STOP( 3);
        int SAC_i;
        int SAC_WL_SHAPE_FACTOR( SACp_inl_6617_res, 0) = 1 * SAC_ND_A_SHAPE( SACp_inl_6617_res, 1) * SAC_ND_A_SHAPE( SACp_inl_6617_res, 2) * SAC_ND_A_SHAPE( SACp_inl_6617_res, 3);
        int SAC_WL_SHAPE_FACTOR( SACp_inl_6617_res, 1) = 1 * SAC_ND_A_SHAPE( SACp_inl_6617_res, 2) * SAC_ND_A_SHAPE( SACp_inl_6617_res, 3);
        int SAC_WL_SHAPE_FACTOR( SACp_inl_6617_res, 2) = 1 * SAC_ND_A_SHAPE( SACp_inl_6617_res, 3);
        int SAC_WL_SHAPE_FACTOR( SACp_inl_6617_res, 3) = 1;

        /*
         * MT_SCHEDULER_BEGIN( 0, 4, 0, 0, 0, 0, 128, 32, 128, 2)
         */
        SAC_WL_MT_SCHEDULE_START( 0) = 0;
        SAC_WL_MT_SCHEDULE_STOP( 0) = 128;
        SAC_WL_MT_SCHEDULE_START( 1) = 0;
        SAC_WL_MT_SCHEDULE_STOP( 1) = 32;
        SAC_WL_MT_SCHEDULE_START( 2) = 0;
        SAC_WL_MT_SCHEDULE_STOP( 2) = 128;
        SAC_WL_MT_SCHEDULE_START( 3) = 0;
        SAC_WL_MT_SCHEDULE_STOP( 3) = 2;

        /*
         * WL_INIT_OFFSET( SACp_inl_6617_res, 4, SACp_inl_6623__flat_79_iv, 4)
         */
        SAC_WL_OFFSET( SACp_inl_6617_res)
          = SAC_WL_MT_SCHEDULE_START( 0) * SAC_WL_SHAPE_FACTOR( SACp_inl_6617_res, 0)
          + SAC_WL_MT_SCHEDULE_START( 1) * SAC_WL_SHAPE_FACTOR( SACp_inl_6617_res, 1)
          + SAC_WL_MT_SCHEDULE_START( 2) * SAC_WL_SHAPE_FACTOR( SACp_inl_6617_res, 2)
          + SAC_WL_MT_SCHEDULE_START( 3) * SAC_WL_SHAPE_FACTOR( SACp_inl_6617_res, 3);

        SAC_WL_STRIDE_LOOP0_BEGIN( 0, SACp_inl_6623__flat_79_iv, SACp_inl_6622__type_593, 0, 128, 1)
          SAC_WL_GRID_UNROLL_BEGIN( 0, SACp_inl_6623__flat_79_iv, SACp_inl_6622__type_593, 0, 1)
            SAC_WL_STRIDE_LOOP0_BEGIN( 1, SACp_inl_6623__flat_79_iv, SACp_inl_6621__type_594, 0, 32, 1)
              SAC_WL_GRID_UNROLL_BEGIN( 1, SACp_inl_6623__flat_79_iv, SACp_inl_6621__type_594, 0, 1)
                SAC_WL_STRIDE_LOOP0_BEGIN( 2, SACp_inl_6623__flat_79_iv, SACp_inl_6620__type_595, 0, 128, 1)
                  SAC_WL_GRID_UNROLL_BEGIN( 2, SACp_inl_6623__flat_79_iv, SACp_inl_6620__type_595, 0, 1)
                    SAC_WL_STRIDE_LOOP0_BEGIN( 3, SACp_inl_6623__flat_79_iv, SACp_inl_6619__type_596, 0, 2, 1)
                      SAC_WL_GRID_UNROLL_BEGIN( 3, SACp_inl_6623__flat_79_iv, SACp_inl_6619__type_596, 0, 1)
                        SACp_inl_6640_ivt__SSA_1_128_128_32_2__ = ((((((SACp_inl_6622__type_593 * 128) + SACp_inl_6620__type_595) * 32) + SACp_inl_6621__type_594) * 2) + SACp_inl_6619__type_596); 
                        SAC_ND_IDX_SEL_S( SACp_inl_6640_ivt__SSA_1_128_128_32_2__, SACp_inl_6616_u, SACp_inl_6618_val)
                        /*
                         * WL_ASSIGN( SACp_inl_6618_val, 0, SACp_inl_6617_res, 4, SACp_inl_6623__flat_79_iv, 4, SACp_inl_6622__type_593, SACp_inl_6621__type_594, SACp_inl_6620__type_595, SACp_inl_6619__type_596)
                         */
                        SAC_TR_WL_PRINT( ("index vector [%d, %d, %d, %d] (== offset %d) -- offset %d -- assign", SACp_inl_6622__type_593, SACp_inl_6621__type_594, SACp_inl_6620__type_595, SACp_inl_6619__type_596, ( SAC_ND_A_SHAPE( SACp_inl_6617_res, 3) * ( SAC_ND_A_SHAPE( SACp_inl_6617_res, 2) * ( SAC_ND_A_SHAPE( SACp_inl_6617_res, 1) * SACp_inl_6622__type_593 + SACp_inl_6621__type_594 )+ SACp_inl_6620__type_595 )+ SACp_inl_6619__type_596 ), SAC_WL_OFFSET( SACp_inl_6617_res)));
                        SAC_ASSURE_TYPE( (SAC_ND_A_DIM( SACp_inl_6618_val) == (SAC_ND_A_DIM( SACp_inl_6617_res) - 4)), ("WL expression with illegal dimension found!"));
                        SAC_ASSURE_TYPE( (SAC_ND_A_SIZE( SACp_inl_6618_val) == SAC_WL_SHAPE_FACTOR( SACp_inl_6617_res, 3)), ("WL expression with illegal size found!"));
                        SAC_ND_WRITE_ARRAY( SACp_inl_6617_res, SAC_WL_OFFSET( SACp_inl_6617_res)) = SACp_inl_6618_val;
                        SAC_WL_OFFSET( SACp_inl_6617_res)++;

                      SAC_WL_GRID_UNROLL_END( 3, SACp_inl_6623__flat_79_iv, SACp_inl_6619__type_596, 0, 1)
                    SAC_WL_STRIDE_LOOP_END( 3, SACp_inl_6623__flat_79_iv, SACp_inl_6619__type_596, 0, 2, 1)
                  SAC_WL_GRID_UNROLL_END( 2, SACp_inl_6623__flat_79_iv, SACp_inl_6620__type_595, 0, 1)
                SAC_WL_STRIDE_LOOP_END( 2, SACp_inl_6623__flat_79_iv, SACp_inl_6620__type_595, 0, 128, 1)
              SAC_WL_GRID_UNROLL_END( 1, SACp_inl_6623__flat_79_iv, SACp_inl_6621__type_594, 0, 1)
            SAC_WL_STRIDE_LOOP_END( 1, SACp_inl_6623__flat_79_iv, SACp_inl_6621__type_594, 0, 32, 1)
          SAC_WL_GRID_UNROLL_END( 0, SACp_inl_6623__flat_79_iv, SACp_inl_6622__type_593, 0, 1)
        SAC_WL_STRIDE_LOOP_END( 0, SACp_inl_6623__flat_79_iv, SACp_inl_6622__type_593, 0, 128, 1)
        /*
         * MT_SCHEDULER_END( 0, 4, 0, 0, 0, 0, 128, 32, 128, 2)
         */


        /*
         * WL_END__OFFSET( SACp_inl_6617_res, 4, SACp_inl_6623__flat_79_iv, 4)
         */
      }

    SAC_PF_END_WITH( genarray)
    SAC_ND_DEC_RC_FREE_ARRAY( SACp_inl_6616_u, 1)
    /*
     * ND_FUN_AP( SACf_FFT1d_Slice__d___MAIN__cpx_128_32_128___MAIN__cpx_64, , 4, out_rc, SACp_inl_6615_v, in, -1.0, in_rc, SACp_inl_6617_res, in_rc, SACp_inl_6646_rofu)
     */
    SACf_FFT1d_Slice__d___MAIN__cpx_128_32_128___MAIN__cpx_64( SAC_ND_ARG_out_rc( SACp_inl_6615_v), SAC_ND_ARG_in( -1.0), SAC_ND_ARG_in_rc( SACp_inl_6617_res), SAC_ND_ARG_in_rc( SACp_inl_6646_rofu));

    SAC_ND_ALLOC_ARRAY( double, SACp_inl_6624_res, 1)
    SAC_PF_BEGIN_WITH( genarray)
      /*
       * WL_BEGIN__OFFSET( SACp_inl_6624_res, 4, SACp_inl_6630__flat_79_iv, 4)
       */
      { int SAC_WL_OFFSET( SACp_inl_6624_res);
        int SAC_WL_MT_SCHEDULE_START( 0);
        int SAC_WL_MT_SCHEDULE_STOP( 0);
        int SAC_WL_MT_SCHEDULE_START( 1);
        int SAC_WL_MT_SCHEDULE_STOP( 1);
        int SAC_WL_MT_SCHEDULE_START( 2);
        int SAC_WL_MT_SCHEDULE_STOP( 2);
        int SAC_WL_MT_SCHEDULE_START( 3);
        int SAC_WL_MT_SCHEDULE_STOP( 3);
        int SAC_i;
        int SAC_WL_SHAPE_FACTOR( SACp_inl_6624_res, 0) = 1 * SAC_ND_A_SHAPE( SACp_inl_6624_res, 1) * SAC_ND_A_SHAPE( SACp_inl_6624_res, 2) * SAC_ND_A_SHAPE( SACp_inl_6624_res, 3);
        int SAC_WL_SHAPE_FACTOR( SACp_inl_6624_res, 1) = 1 * SAC_ND_A_SHAPE( SACp_inl_6624_res, 2) * SAC_ND_A_SHAPE( SACp_inl_6624_res, 3);
        int SAC_WL_SHAPE_FACTOR( SACp_inl_6624_res, 2) = 1 * SAC_ND_A_SHAPE( SACp_inl_6624_res, 3);
        int SAC_WL_SHAPE_FACTOR( SACp_inl_6624_res, 3) = 1;

        /*
         * MT_SCHEDULER_BEGIN( 0, 4, 0, 0, 0, 0, 128, 32, 128, 2)
         */
        SAC_WL_MT_SCHEDULE_START( 0) = 0;
        SAC_WL_MT_SCHEDULE_STOP( 0) = 128;
        SAC_WL_MT_SCHEDULE_START( 1) = 0;
        SAC_WL_MT_SCHEDULE_STOP( 1) = 32;
        SAC_WL_MT_SCHEDULE_START( 2) = 0;
        SAC_WL_MT_SCHEDULE_STOP( 2) = 128;
        SAC_WL_MT_SCHEDULE_START( 3) = 0;
        SAC_WL_MT_SCHEDULE_STOP( 3) = 2;

        /*
         * WL_INIT_OFFSET( SACp_inl_6624_res, 4, SACp_inl_6630__flat_79_iv, 4)
         */
        SAC_WL_OFFSET( SACp_inl_6624_res)
          = SAC_WL_MT_SCHEDULE_START( 0) * SAC_WL_SHAPE_FACTOR( SACp_inl_6624_res, 0)
          + SAC_WL_MT_SCHEDULE_START( 1) * SAC_WL_SHAPE_FACTOR( SACp_inl_6624_res, 1)
          + SAC_WL_MT_SCHEDULE_START( 2) * SAC_WL_SHAPE_FACTOR( SACp_inl_6624_res, 2)
          + SAC_WL_MT_SCHEDULE_START( 3) * SAC_WL_SHAPE_FACTOR( SACp_inl_6624_res, 3);

        SAC_WL_STRIDE_LOOP0_BEGIN( 0, SACp_inl_6630__flat_79_iv, SACp_inl_6629__type_612, 0, 128, 1)
          SAC_WL_GRID_UNROLL_BEGIN( 0, SACp_inl_6630__flat_79_iv, SACp_inl_6629__type_612, 0, 1)
            SAC_WL_STRIDE_LOOP0_BEGIN( 1, SACp_inl_6630__flat_79_iv, SACp_inl_6628__type_613, 0, 32, 1)
              SAC_WL_GRID_UNROLL_BEGIN( 1, SACp_inl_6630__flat_79_iv, SACp_inl_6628__type_613, 0, 1)
                SAC_WL_STRIDE_LOOP0_BEGIN( 2, SACp_inl_6630__flat_79_iv, SACp_inl_6627__type_614, 0, 128, 1)
                  SAC_WL_GRID_UNROLL_BEGIN( 2, SACp_inl_6630__flat_79_iv, SACp_inl_6627__type_614, 0, 1)
                    SAC_WL_STRIDE_LOOP0_BEGIN( 3, SACp_inl_6630__flat_79_iv, SACp_inl_6626__type_615, 0, 2, 1)
                      SAC_WL_GRID_UNROLL_BEGIN( 3, SACp_inl_6630__flat_79_iv, SACp_inl_6626__type_615, 0, 1)
                        SACp_inl_6641_ivt__SSA_1_128_32_128_2__ = ((((((SACp_inl_6627__type_614 * 32) + SACp_inl_6628__type_613) * 128) + SACp_inl_6629__type_612) * 2) + SACp_inl_6626__type_615); 
                        SAC_ND_IDX_SEL_S( SACp_inl_6641_ivt__SSA_1_128_32_128_2__, SACp_inl_6615_v, SACp_inl_6625_val)
                        /*
                         * WL_ASSIGN( SACp_inl_6625_val, 0, SACp_inl_6624_res, 4, SACp_inl_6630__flat_79_iv, 4, SACp_inl_6629__type_612, SACp_inl_6628__type_613, SACp_inl_6627__type_614, SACp_inl_6626__type_615)
                         */
                        SAC_TR_WL_PRINT( ("index vector [%d, %d, %d, %d] (== offset %d) -- offset %d -- assign", SACp_inl_6629__type_612, SACp_inl_6628__type_613, SACp_inl_6627__type_614, SACp_inl_6626__type_615, ( SAC_ND_A_SHAPE( SACp_inl_6624_res, 3) * ( SAC_ND_A_SHAPE( SACp_inl_6624_res, 2) * ( SAC_ND_A_SHAPE( SACp_inl_6624_res, 1) * SACp_inl_6629__type_612 + SACp_inl_6628__type_613 )+ SACp_inl_6627__type_614 )+ SACp_inl_6626__type_615 ), SAC_WL_OFFSET( SACp_inl_6624_res)));
                        SAC_ASSURE_TYPE( (SAC_ND_A_DIM( SACp_inl_6625_val) == (SAC_ND_A_DIM( SACp_inl_6624_res) - 4)), ("WL expression with illegal dimension found!"));
                        SAC_ASSURE_TYPE( (SAC_ND_A_SIZE( SACp_inl_6625_val) == SAC_WL_SHAPE_FACTOR( SACp_inl_6624_res, 3)), ("WL expression with illegal size found!"));
                        SAC_ND_WRITE_ARRAY( SACp_inl_6624_res, SAC_WL_OFFSET( SACp_inl_6624_res)) = SACp_inl_6625_val;
                        SAC_WL_OFFSET( SACp_inl_6624_res)++;

                      SAC_WL_GRID_UNROLL_END( 3, SACp_inl_6630__flat_79_iv, SACp_inl_6626__type_615, 0, 1)
                    SAC_WL_STRIDE_LOOP_END( 3, SACp_inl_6630__flat_79_iv, SACp_inl_6626__type_615, 0, 2, 1)
                  SAC_WL_GRID_UNROLL_END( 2, SACp_inl_6630__flat_79_iv, SACp_inl_6627__type_614, 0, 1)
                SAC_WL_STRIDE_LOOP_END( 2, SACp_inl_6630__flat_79_iv, SACp_inl_6627__type_614, 0, 128, 1)
              SAC_WL_GRID_UNROLL_END( 1, SACp_inl_6630__flat_79_iv, SACp_inl_6628__type_613, 0, 1)
            SAC_WL_STRIDE_LOOP_END( 1, SACp_inl_6630__flat_79_iv, SACp_inl_6628__type_613, 0, 32, 1)
          SAC_WL_GRID_UNROLL_END( 0, SACp_inl_6630__flat_79_iv, SACp_inl_6629__type_612, 0, 1)
        SAC_WL_STRIDE_LOOP_END( 0, SACp_inl_6630__flat_79_iv, SACp_inl_6629__type_612, 0, 128, 1)
        /*
         * MT_SCHEDULER_END( 0, 4, 0, 0, 0, 0, 128, 32, 128, 2)
         */


        /*
         * WL_END__OFFSET( SACp_inl_6624_res, 4, SACp_inl_6630__flat_79_iv, 4)
         */
      }

    SAC_PF_END_WITH( genarray)
    SAC_ND_DEC_RC_FREE_ARRAY( SACp_inl_6615_v, 1)
    /*
     * ND_FUN_AP( SACf_FFT1d_Slice__d___MAIN__cpx_128_32_128___MAIN__cpx_64, , 4, out_rc, SACp_inl_6614_w, in, -1.0, in_rc, SACp_inl_6624_res, in_rc, SACp_inl_6646_rofu)
     */
    SACf_FFT1d_Slice__d___MAIN__cpx_128_32_128___MAIN__cpx_64( SAC_ND_ARG_out_rc( SACp_inl_6614_w), SAC_ND_ARG_in( -1.0), SAC_ND_ARG_in_rc( SACp_inl_6624_res), SAC_ND_ARG_in_rc( SACp_inl_6646_rofu));

    SAC_ND_ALLOC_ARRAY( double, SACp_inl_6636_result, 1)
    SAC_PF_BEGIN_WITH( genarray)
      /*
       * WL_BEGIN__OFFSET( SACp_inl_6636_result, 4, SACp_inl_6638__flat_64_iv, 4)
       */
      { int SAC_WL_OFFSET( SACp_inl_6636_result);
        int SAC_WL_MT_SCHEDULE_START( 0);
        int SAC_WL_MT_SCHEDULE_STOP( 0);
        int SAC_WL_MT_SCHEDULE_START( 1);
        int SAC_WL_MT_SCHEDULE_STOP( 1);
        int SAC_WL_MT_SCHEDULE_START( 2);
        int SAC_WL_MT_SCHEDULE_STOP( 2);
        int SAC_WL_MT_SCHEDULE_START( 3);
        int SAC_WL_MT_SCHEDULE_STOP( 3);
        int SAC_i;
        int SAC_WL_SHAPE_FACTOR( SACp_inl_6636_result, 0) = 1 * SAC_ND_A_SHAPE( SACp_inl_6636_result, 1) * SAC_ND_A_SHAPE( SACp_inl_6636_result, 2) * SAC_ND_A_SHAPE( SACp_inl_6636_result, 3);
        int SAC_WL_SHAPE_FACTOR( SACp_inl_6636_result, 1) = 1 * SAC_ND_A_SHAPE( SACp_inl_6636_result, 2) * SAC_ND_A_SHAPE( SACp_inl_6636_result, 3);
        int SAC_WL_SHAPE_FACTOR( SACp_inl_6636_result, 2) = 1 * SAC_ND_A_SHAPE( SACp_inl_6636_result, 3);
        int SAC_WL_SHAPE_FACTOR( SACp_inl_6636_result, 3) = 1;

        /*
         * MT_SCHEDULER_BEGIN( 0, 4, 0, 0, 0, 0, 128, 128, 32, 2)
         */
        SAC_WL_MT_SCHEDULE_START( 0) = 0;
        SAC_WL_MT_SCHEDULE_STOP( 0) = 128;
        SAC_WL_MT_SCHEDULE_START( 1) = 0;
        SAC_WL_MT_SCHEDULE_STOP( 1) = 128;
        SAC_WL_MT_SCHEDULE_START( 2) = 0;
        SAC_WL_MT_SCHEDULE_STOP( 2) = 32;
        SAC_WL_MT_SCHEDULE_START( 3) = 0;
        SAC_WL_MT_SCHEDULE_STOP( 3) = 2;

        /*
         * WL_INIT_OFFSET( SACp_inl_6636_result, 4, SACp_inl_6638__flat_64_iv, 4)
         */
        SAC_WL_OFFSET( SACp_inl_6636_result)
          = SAC_WL_MT_SCHEDULE_START( 0) * SAC_WL_SHAPE_FACTOR( SACp_inl_6636_result, 0)
          + SAC_WL_MT_SCHEDULE_START( 1) * SAC_WL_SHAPE_FACTOR( SACp_inl_6636_result, 1)
          + SAC_WL_MT_SCHEDULE_START( 2) * SAC_WL_SHAPE_FACTOR( SACp_inl_6636_result, 2)
          + SAC_WL_MT_SCHEDULE_START( 3) * SAC_WL_SHAPE_FACTOR( SACp_inl_6636_result, 3);

        SAC_WL_STRIDE_LOOP0_BEGIN( 0, SACp_inl_6638__flat_64_iv, SACp_inl_6635__type_623, 0, 128, 1)
          SAC_WL_GRID_UNROLL_BEGIN( 0, SACp_inl_6638__flat_64_iv, SACp_inl_6635__type_623, 0, 1)
            SAC_WL_STRIDE_LOOP0_BEGIN( 1, SACp_inl_6638__flat_64_iv, SACp_inl_6634__type_624, 0, 128, 1)
              SAC_WL_GRID_UNROLL_BEGIN( 1, SACp_inl_6638__flat_64_iv, SACp_inl_6634__type_624, 0, 1)
                SAC_WL_STRIDE_LOOP0_BEGIN( 2, SACp_inl_6638__flat_64_iv, SACp_inl_6633__type_625, 0, 32, 1)
                  SAC_WL_GRID_UNROLL_BEGIN( 2, SACp_inl_6638__flat_64_iv, SACp_inl_6633__type_625, 0, 1)
                    SAC_WL_STRIDE_LOOP0_BEGIN( 3, SACp_inl_6638__flat_64_iv, SACp_inl_6632__type_626, 0, 2, 1)
                      SAC_WL_GRID_UNROLL_BEGIN( 3, SACp_inl_6638__flat_64_iv, SACp_inl_6632__type_626, 0, 1)
                        SACp_inl_6642_ivt__SSA_1_128_32_128_2__ = ((((((SACp_inl_6634__type_624 * 32) + SACp_inl_6633__type_625) * 128) + SACp_inl_6635__type_623) * 2) + SACp_inl_6632__type_626); 
                        SAC_ND_IDX_SEL_S( SACp_inl_6642_ivt__SSA_1_128_32_128_2__, SACp_inl_6614_w, SACp_inl_6631_val)
                        SACp_inl_6637__flat_65 = (SACp_inl_6631_val / 524288.0); 
                        /*
                         * WL_ASSIGN( SACp_inl_6637__flat_65, 0, SACp_inl_6636_result, 4, SACp_inl_6638__flat_64_iv, 4, SACp_inl_6635__type_623, SACp_inl_6634__type_624, SACp_inl_6633__type_625, SACp_inl_6632__type_626)
                         */
                        SAC_TR_WL_PRINT( ("index vector [%d, %d, %d, %d] (== offset %d) -- offset %d -- assign", SACp_inl_6635__type_623, SACp_inl_6634__type_624, SACp_inl_6633__type_625, SACp_inl_6632__type_626, ( SAC_ND_A_SHAPE( SACp_inl_6636_result, 3) * ( SAC_ND_A_SHAPE( SACp_inl_6636_result, 2) * ( SAC_ND_A_SHAPE( SACp_inl_6636_result, 1) * SACp_inl_6635__type_623 + SACp_inl_6634__type_624 )+ SACp_inl_6633__type_625 )+ SACp_inl_6632__type_626 ), SAC_WL_OFFSET( SACp_inl_6636_result)));
                        SAC_ASSURE_TYPE( (SAC_ND_A_DIM( SACp_inl_6637__flat_65) == (SAC_ND_A_DIM( SACp_inl_6636_result) - 4)), ("WL expression with illegal dimension found!"));
                        SAC_ASSURE_TYPE( (SAC_ND_A_SIZE( SACp_inl_6637__flat_65) == SAC_WL_SHAPE_FACTOR( SACp_inl_6636_result, 3)), ("WL expression with illegal size found!"));
                        SAC_ND_WRITE_ARRAY( SACp_inl_6636_result, SAC_WL_OFFSET( SACp_inl_6636_result)) = SACp_inl_6637__flat_65;
                        SAC_WL_OFFSET( SACp_inl_6636_result)++;

                      SAC_WL_GRID_UNROLL_END( 3, SACp_inl_6638__flat_64_iv, SACp_inl_6632__type_626, 0, 1)
                    SAC_WL_STRIDE_LOOP_END( 3, SACp_inl_6638__flat_64_iv, SACp_inl_6632__type_626, 0, 2, 1)
                  SAC_WL_GRID_UNROLL_END( 2, SACp_inl_6638__flat_64_iv, SACp_inl_6633__type_625, 0, 1)
                SAC_WL_STRIDE_LOOP_END( 2, SACp_inl_6638__flat_64_iv, SACp_inl_6633__type_625, 0, 32, 1)
              SAC_WL_GRID_UNROLL_END( 1, SACp_inl_6638__flat_64_iv, SACp_inl_6634__type_624, 0, 1)
            SAC_WL_STRIDE_LOOP_END( 1, SACp_inl_6638__flat_64_iv, SACp_inl_6634__type_624, 0, 128, 1)
          SAC_WL_GRID_UNROLL_END( 0, SACp_inl_6638__flat_64_iv, SACp_inl_6635__type_623, 0, 1)
        SAC_WL_STRIDE_LOOP_END( 0, SACp_inl_6638__flat_64_iv, SACp_inl_6635__type_623, 0, 128, 1)
        /*
         * MT_SCHEDULER_END( 0, 4, 0, 0, 0, 0, 128, 128, 32, 2)
         */


        /*
         * WL_END__OFFSET( SACp_inl_6636_result, 4, SACp_inl_6638__flat_64_iv, 4)
         */
      }

    SAC_PF_END_WITH( genarray)
    SAC_ND_DEC_RC_FREE_ARRAY( SACp_inl_6614_w, 1)
    /*
     * ND_FUN_AP( SACf_CheckResult__i___MAIN__cpx_128_128_32, , 2, in, SACp_inl_6648_t, in_rc, SACp_inl_6636_result)
     */
    SACf_CheckResult__i___MAIN__cpx_128_128_32( SAC_ND_ARG_in( SACp_inl_6648_t), SAC_ND_ARG_in_rc( SACp_inl_6636_result));

    SACp_inl_6643_t__SSA_1 = (SACp_inl_6648_t + 1); 
    SACp_inl_6639__flat_360 = (SACp_inl_6643_t__SSA_1 <= 6); 
    SACp_inl_6648_t = SACp_inl_6643_t__SSA_1; 
  }
  while (SACp_inl_6639__flat_360);
  SAC_ND_DEC_RC_FREE_ARRAY( SACp_inl_6644_indexmap, 1)
  SAC_ND_DEC_RC_FREE_ARRAY( SACp_inl_6645_expomap, 1)
  SAC_ND_DEC_RC( SACp_inl_6646_rofu, 1)
  SAC_ND_DEC_RC_FREE_ARRAY( SACp_inl_6647_V, 1)
  /*
   * ND_FUN_RET( SACp_inl_3549_idx, 0)
   */
  return( SACp_inl_3549_idx);
}

int main( int __argc, char *__argv[])
{
  int SAC_res;

  SAC_MT_SETUP_INITIAL();
  SAC_PF_SETUP();
  SAC_HM_SETUP();
  SAC_MT_SETUP();
  SAC_CS_SETUP();
  SACf_GlobalObjInit( __argc, __argv);

  SAC_res = SACf_main();

  SAC_PF_PRINT();
  SAC_CS_FINALIZE();
  SAC_HM_PRINT();

  return( SAC_res);
}
