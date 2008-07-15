

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
#define SAC_SET_CACHESIM_FILE        "fft_realcpx.W.cs"
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
  int SACp_flat_136; 
  int SACp_flat_137; 
  int SACp_flat_138; 
  int SACp_flat_139; 
  int SACl_kk; 
  int SACp_flat_132; 
  int SACp_flat_133; 
  int SACl_jj; 
  int SACp_flat_128; 
  int SACp_flat_129; 
  int SACl_ii; 
  int SACp_flat_124; 
  int SACp_flat_125; 
  int SACp_flat_122_k; 
  int SACp_flat_121_j; 
  int SACp_flat_120_i; 
  /*
   * ND_KS_DECL_ARRAY( int, SACp_flat_123_iv, 1, 3)
   */
  int *SACp_flat_123_iv;
  int SAC_ND_A_RC( SACp_flat_123_iv);
  const int SAC_ND_A_SIZE( SACp_flat_123_iv) = 3;
  const int SAC_ND_A_DIM( SACp_flat_123_iv) = 1;
  const int SAC_ND_A_SHAPE( SACp_flat_123_iv, 0) = 3;


  SAC_ND_ALLOC_ARRAY( int, SACl_map, 1)
  SAC_PF_BEGIN_WITH( genarray)
    /*
     * WL_BEGIN__OFFSET( SACl_map, 3, SACp_flat_123_iv, 3)
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
       * WL_INIT_OFFSET( SACl_map, 3, SACp_flat_123_iv, 3)
       */
      SAC_WL_OFFSET( SACl_map)
        = SAC_WL_MT_SCHEDULE_START( 0) * SAC_WL_SHAPE_FACTOR( SACl_map, 0)
        + SAC_WL_MT_SCHEDULE_START( 1) * SAC_WL_SHAPE_FACTOR( SACl_map, 1)
        + SAC_WL_MT_SCHEDULE_START( 2) * SAC_WL_SHAPE_FACTOR( SACl_map, 2);

      SAC_WL_STRIDE_LOOP0_BEGIN( 0, SACp_flat_123_iv, SACp_flat_120_i, 0, 128, 1)
        SAC_WL_GRID_UNROLL_BEGIN( 0, SACp_flat_123_iv, SACp_flat_120_i, 0, 1)
          SAC_WL_STRIDE_LOOP0_BEGIN( 1, SACp_flat_123_iv, SACp_flat_121_j, 0, 128, 1)
            SAC_WL_GRID_UNROLL_BEGIN( 1, SACp_flat_123_iv, SACp_flat_121_j, 0, 1)
              SAC_WL_STRIDE_LOOP0_BEGIN( 2, SACp_flat_123_iv, SACp_flat_122_k, 0, 32, 1)
                SAC_WL_GRID_UNROLL_BEGIN( 2, SACp_flat_123_iv, SACp_flat_122_k, 0, 1)
                  SACp_flat_125 = (SACp_flat_120_i + 64); 
                  SACp_flat_124 = (SACp_flat_125 % 128); 
                  SACl_ii = (SACp_flat_124 + -64); 
                  SACp_flat_129 = (SACp_flat_121_j + 64); 
                  SACp_flat_128 = (SACp_flat_129 % 128); 
                  SACl_jj = (SACp_flat_128 + -64); 
                  SACp_flat_133 = (SACp_flat_122_k + 16); 
                  SACp_flat_132 = (SACp_flat_133 % 32); 
                  SACl_kk = (SACp_flat_132 + -16); 
                  SACp_flat_139 = (SACl_kk * SACl_kk); 
                  SACp_flat_138 = (SACl_jj * SACl_jj); 
                  SACp_flat_137 = (SACl_ii * SACl_ii); 
                  SACp_flat_136 = (SACp_flat_137 + SACp_flat_138); 
                  SACl_ttt = (SACp_flat_136 + SACp_flat_139); 
                  /*
                   * WL_ASSIGN( SACl_ttt, 0, SACl_map, 3, SACp_flat_123_iv, 3, SACp_flat_120_i, SACp_flat_121_j, SACp_flat_122_k)
                   */
                  SAC_TR_WL_PRINT( ("index vector [%d, %d, %d] (== offset %d) -- offset %d -- assign", SACp_flat_120_i, SACp_flat_121_j, SACp_flat_122_k, ( SAC_ND_A_SHAPE( SACl_map, 2) * ( SAC_ND_A_SHAPE( SACl_map, 1) * SACp_flat_120_i + SACp_flat_121_j )+ SACp_flat_122_k ), SAC_WL_OFFSET( SACl_map)));
                  SAC_ASSURE_TYPE( (SAC_ND_A_DIM( SACl_ttt) == (SAC_ND_A_DIM( SACl_map) - 3)), ("WL expression with illegal dimension found!"));
                  SAC_ASSURE_TYPE( (SAC_ND_A_SIZE( SACl_ttt) == SAC_WL_SHAPE_FACTOR( SACl_map, 2)), ("WL expression with illegal size found!"));
                  SAC_ND_WRITE_ARRAY( SACl_map, SAC_WL_OFFSET( SACl_map)) = SACl_ttt;
                  SAC_WL_OFFSET( SACl_map)++;

                SAC_WL_GRID_UNROLL_END( 2, SACp_flat_123_iv, SACp_flat_122_k, 0, 1)
              SAC_WL_STRIDE_LOOP_END( 2, SACp_flat_123_iv, SACp_flat_122_k, 0, 32, 1)
            SAC_WL_GRID_UNROLL_END( 1, SACp_flat_123_iv, SACp_flat_121_j, 0, 1)
          SAC_WL_STRIDE_LOOP_END( 1, SACp_flat_123_iv, SACp_flat_121_j, 0, 128, 1)
        SAC_WL_GRID_UNROLL_END( 0, SACp_flat_123_iv, SACp_flat_120_i, 0, 1)
      SAC_WL_STRIDE_LOOP_END( 0, SACp_flat_123_iv, SACp_flat_120_i, 0, 128, 1)
      /*
       * MT_SCHEDULER_END( 0, 3, 0, 0, 0, 128, 128, 32)
       */


      /*
       * WL_END__OFFSET( SACl_map, 3, SACp_flat_123_iv, 3)
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
  int SACp_inl_8079_i; 
  /*
   * ND_KS_DECL_ARRAY( double, SACp_inl_8078_map, 1, 50689)
   */
  double *SACp_inl_8078_map;
  int SAC_ND_A_RC( SACp_inl_8078_map);
  const int SAC_ND_A_SIZE( SACp_inl_8078_map) = 50689;
  const int SAC_ND_A_DIM( SACp_inl_8078_map) = 1;
  const int SAC_ND_A_SHAPE( SACp_inl_8078_map, 0) = 50689;

  int SACp_inl_8077__lir_5165__flat_155_50689__; 
  /*
   * ND_KS_DECL_ARRAY( double, SACp_inl_8076_map__SSA_3, 1, 50689)
   */
  double *SACp_inl_8076_map__SSA_3;
  int SAC_ND_A_RC( SACp_inl_8076_map__SSA_3);
  const int SAC_ND_A_SIZE( SACp_inl_8076_map__SSA_3) = 50689;
  const int SAC_ND_A_DIM( SACp_inl_8076_map__SSA_3) = 1;
  const int SAC_ND_A_SHAPE( SACp_inl_8076_map__SSA_3, 0) = 50689;

  int SACp_inl_8075_i__SSA_1; 
  int SACp_inl_8074__flat_149_50689__; 
  double SACp_inl_8073__flat_150; 
  double SACp_inl_8072__flat_151; 
  int SACp_inl_8071__flat_152_50689__; 
  int SACp_inl_8070__flat_153; 
  double SACp_inl_8069__flat_154; 
  bool SACp_inl_8068__flat_156; 
  /*
   * ND_KS_DECL_ARRAY( double, SACp_inl_5159_map__SSA_1, 1, 50689)
   */
  double *SACp_inl_5159_map__SSA_1;
  int SAC_ND_A_RC( SACp_inl_5159_map__SSA_1);
  const int SAC_ND_A_SIZE( SACp_inl_5159_map__SSA_1) = 50689;
  const int SAC_ND_A_DIM( SACp_inl_5159_map__SSA_1) = 1;
  const int SAC_ND_A_SHAPE( SACp_inl_5159_map__SSA_1, 0) = 50689;

  int SACl_i; 
  int SACp_flat_147_50689__; 
  double SACp_flat_148; 
  int SACp_flat_146_50689__; 
  double SACl_alpha; 
  double SACp_flat_143; 
  /*
   * ND_KS_DECL_ARRAY( double, SACl_map, 1, 50689)
   */
  double *SACl_map;
  int SAC_ND_A_RC( SACl_map);
  const int SAC_ND_A_SIZE( SACl_map) = 50689;
  const int SAC_ND_A_DIM( SACl_map) = 1;
  const int SAC_ND_A_SHAPE( SACl_map, 0) = 50689;

  double SACp_type_336; 
  int SACp_type_337; 
  /*
   * ND_KS_DECL_ARRAY( int, SACp_type_335, 1, 1)
   */
  int *SACp_type_335;
  int SAC_ND_A_RC( SACp_type_335);
  const int SAC_ND_A_SIZE( SACp_type_335) = 1;
  const int SAC_ND_A_DIM( SACp_type_335) = 1;
  const int SAC_ND_A_SHAPE( SACp_type_335, 0) = 1;

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


  SACp_type_336 = 0.0; 
  SAC_ND_ALLOC_ARRAY( double, SACl_map, 1)
  SAC_PF_BEGIN_WITH( genarray)
    /*
     * WL_BEGIN__OFFSET( SACl_map, 1, SACp_type_335, 1)
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
       * WL_INIT_OFFSET( SACl_map, 1, SACp_type_335, 1)
       */
      SAC_WL_OFFSET( SACl_map)
        = SAC_WL_MT_SCHEDULE_START( 0) * SAC_WL_SHAPE_FACTOR( SACl_map, 0);

      SAC_WL_STRIDE_LOOP0_BEGIN( 0, SACp_type_335, SACp_type_337, 0, 50689, 1)
        SAC_WL_GRID_UNROLL_BEGIN( 0, SACp_type_335, SACp_type_337, 0, 1)
          /*
           * WL_ASSIGN( SACp_type_336, 0, SACl_map, 1, SACp_type_335, 1, SACp_type_337)
           */
          SAC_TR_WL_PRINT( ("index vector [%d] (== offset %d) -- offset %d -- assign", SACp_type_337, SACp_type_337 , SAC_WL_OFFSET( SACl_map)));
          SAC_ASSURE_TYPE( (SAC_ND_A_DIM( SACp_type_336) == (SAC_ND_A_DIM( SACl_map) - 1)), ("WL expression with illegal dimension found!"));
          SAC_ASSURE_TYPE( (SAC_ND_A_SIZE( SACp_type_336) == SAC_WL_SHAPE_FACTOR( SACl_map, 0)), ("WL expression with illegal size found!"));
          SAC_ND_WRITE_ARRAY( SACl_map, SAC_WL_OFFSET( SACl_map)) = SACp_type_336;
          SAC_WL_OFFSET( SACl_map)++;

        SAC_WL_GRID_UNROLL_END( 0, SACp_type_335, SACp_type_337, 0, 1)
      SAC_WL_STRIDE_LOOP_END( 0, SACp_type_335, SACp_type_337, 0, 50689, 1)
      /*
       * MT_SCHEDULER_END( 0, 1, 0, 50689)
       */


      /*
       * WL_END__OFFSET( SACl_map, 1, SACp_type_335, 1)
       */
    }

  SAC_PF_END_WITH( genarray)
  /*
   * ND_FUN_AP( pow, SACp_flat_143, 2, in, 10.0, in, -6.0)
   */
  SACp_flat_143 = pow( SAC_ND_ARG_in( 10.0), SAC_ND_ARG_in( -6.0));

  SACl_alpha = (-39.4784176043574319692197605036199092864990234375 * SACp_flat_143); 
  SACp_flat_146_50689__ = 0; 
  SAC_ND_CHECK_REUSE_ARRAY( SACl_map, SACl_map__SSA_1)
  SAC_ND_ALLOC_ARRAY( double, SACl_map__SSA_1, 0)
  SAC_ND_INC_RC( SACl_map__SSA_1, 1)
  SAC_ND_IDX_MODARRAY_AxVxS( double, SACl_map__SSA_1, SACl_map, SACp_flat_146_50689__, 1.0)
  SAC_ND_DEC_RC_FREE_ARRAY( SACl_map, 1)
  /*
   * ND_FUN_AP( exp, SACp_flat_148, 1, in, SACl_alpha)
   */
  SACp_flat_148 = exp( SAC_ND_ARG_in( SACl_alpha));

  SACp_flat_147_50689__ = 1; 
  SAC_ND_CHECK_REUSE_ARRAY( SACl_map__SSA_1, SACl_map__SSA_2)
  SAC_ND_ALLOC_ARRAY( double, SACl_map__SSA_2, 0)
  SAC_ND_INC_RC( SACl_map__SSA_2, 1)
  SAC_ND_IDX_MODARRAY_AxVxS( double, SACl_map__SSA_2, SACl_map__SSA_1, SACp_flat_147_50689__, SACp_flat_148)
  SAC_ND_DEC_RC_FREE_ARRAY( SACl_map__SSA_1, 1)
  SACl_i = 2; 
  SACp_inl_8079_i = SACl_i; 
  SAC_ND_KS_ASSIGN_ARRAY( SACl_map__SSA_2, SACp_inl_8078_map)
  SACp_inl_8077__lir_5165__flat_155_50689__ = SACp_flat_147_50689__; 
  SAC_ND_GOTO( _comp_8250_SAC__label)
  do 
  { 
    SAC_ND_DEC_RC_FREE_ARRAY( SACp_inl_8076_map__SSA_3, 1)
    SAC_ND_LABEL( _comp_8250_SAC__label)
    SAC_ND_IDX_SEL_S( SACp_inl_8077__lir_5165__flat_155_50689__, SACp_inl_8078_map, SACp_inl_8069__flat_154)
    SACp_inl_8070__flat_153 = (SACp_inl_8079_i - 1); 
    SACp_inl_8071__flat_152_50689__ = SACp_inl_8070__flat_153; 
    SAC_ND_IDX_SEL_S( SACp_inl_8071__flat_152_50689__, SACp_inl_8078_map, SACp_inl_8072__flat_151)
    SACp_inl_8073__flat_150 = (SACp_inl_8072__flat_151 * SACp_inl_8069__flat_154); 
    SACp_inl_8074__flat_149_50689__ = SACp_inl_8079_i; 
    SAC_ND_CHECK_REUSE_ARRAY( SACp_inl_8078_map, SACp_inl_8076_map__SSA_3)
    SAC_ND_ALLOC_ARRAY( double, SACp_inl_8076_map__SSA_3, 0)
    SAC_ND_INC_RC( SACp_inl_8076_map__SSA_3, 1)
    SAC_ND_IDX_MODARRAY_AxVxS( double, SACp_inl_8076_map__SSA_3, SACp_inl_8078_map, SACp_inl_8074__flat_149_50689__, SACp_inl_8073__flat_150)
    SAC_ND_DEC_RC_FREE_ARRAY( SACp_inl_8078_map, 1)
    SAC_ND_INC_RC( SACp_inl_8076_map__SSA_3, 1)
    SACp_inl_8075_i__SSA_1 = (SACp_inl_8079_i + 1); 
    SACp_inl_8068__flat_156 = (SACp_inl_8075_i__SSA_1 < 50689); 
    SAC_ND_KS_ASSIGN_ARRAY( SACp_inl_8076_map__SSA_3, SACp_inl_8078_map)
    SACp_inl_8079_i = SACp_inl_8075_i__SSA_1; 
  }
  while (SACp_inl_8068__flat_156);
  SAC_ND_DEC_RC_FREE_ARRAY( SACp_inl_8078_map, 1)
  SAC_ND_KS_ASSIGN_ARRAY( SACp_inl_8076_map__SSA_3, SACp_inl_5159_map__SSA_1)
  /*
   * ND_FUN_RET( , 1, out_rc, SACp_inl_5159_map__SSA_1, SAC__arg_1)
   */
  SAC_ND_RET_out_rc( SACp_inl_5159_map__SSA_1, SAC__arg_1)
  return;
}

/*
 * ND_FUN_DEC( SACf_RootsOfUnity__d, void, 2, out_rc, double *, SAC__arg_1, in, double, SACl_dir)
 */
void SACf_RootsOfUnity__d( SAC_ND_PARAM_out_rc( double *, SAC__arg_1), SAC_ND_PARAM_in( double, SACl_dir))
{ 
  int SACp_inl_8101_i; 
  /*
   * ND_KS_DECL_ARRAY( double, SACp_inl_8100_u, 2, 64, 2)
   */
  double *SACp_inl_8100_u;
  int SAC_ND_A_RC( SACp_inl_8100_u);
  const int SAC_ND_A_SIZE( SACp_inl_8100_u) = 64*2;
  const int SAC_ND_A_DIM( SACp_inl_8100_u) = 2;
  const int SAC_ND_A_SHAPE( SACp_inl_8100_u, 0) = 64;
  const int SAC_ND_A_SHAPE( SACp_inl_8100_u, 1) = 2;

  double SACp_inl_8099__lir_5242__inl_768__flat_0; 
  double SACp_inl_8098__lir_5244__inl_778__flat_0; 
  double SACp_inl_8097__type_342__SSA_1; 
  int SACp_inl_8096__type_343__SSA_1_64_2__; 
  /*
   * ND_KS_DECL_ARRAY( double, SACp_inl_8095_u__SSA_3, 2, 64, 2)
   */
  double *SACp_inl_8095_u__SSA_3;
  int SAC_ND_A_RC( SACp_inl_8095_u__SSA_3);
  const int SAC_ND_A_SIZE( SACp_inl_8095_u__SSA_3) = 64*2;
  const int SAC_ND_A_DIM( SACp_inl_8095_u__SSA_3) = 2;
  const int SAC_ND_A_SHAPE( SACp_inl_8095_u__SSA_3, 0) = 64;
  const int SAC_ND_A_SHAPE( SACp_inl_8095_u__SSA_3, 1) = 2;

  int SACp_inl_8094_i__SSA_1; 
  int SACp_inl_8093__flat_179_64_2__; 
  double SACp_inl_8092__type_342; 
  int SACp_inl_8091__type_343_64_2__; 
  int SACp_inl_8090__flat_177; 
  bool SACp_inl_8089__flat_181; 
  double SACp_inl_8088__flat_12; 
  double SACp_inl_8087__flat_9; 
  /*
   * ND_KS_DECL_ARRAY( double, SACp_inl_8086_res, 1, 2)
   */
  double *SACp_inl_8086_res;
  int SAC_ND_A_RC( SACp_inl_8086_res);
  const int SAC_ND_A_SIZE( SACp_inl_8086_res) = 2;
  const int SAC_ND_A_DIM( SACp_inl_8086_res) = 1;
  const int SAC_ND_A_SHAPE( SACp_inl_8086_res, 0) = 2;

  double SACp_inl_8085__flat_34; 
  double SACp_inl_8084__flat_31; 
  double SACp_inl_8083__flat_30; 
  double SACp_inl_8082__flat_27; 
  double SACp_inl_8081__flat_24; 
  double SACp_inl_8080__flat_23; 
  /*
   * ND_KS_DECL_ARRAY( double, SACp_inl_5229_u__SSA_1, 2, 64, 2)
   */
  double *SACp_inl_5229_u__SSA_1;
  int SAC_ND_A_RC( SACp_inl_5229_u__SSA_1);
  const int SAC_ND_A_SIZE( SACp_inl_5229_u__SSA_1) = 64*2;
  const int SAC_ND_A_DIM( SACp_inl_5229_u__SSA_1) = 2;
  const int SAC_ND_A_SHAPE( SACp_inl_5229_u__SSA_1, 0) = 64;
  const int SAC_ND_A_SHAPE( SACp_inl_5229_u__SSA_1, 1) = 2;

  int SACl_i; 
  /*
   * ND_KS_DECL_ARRAY( double, SACp_flat_174, 1, 2)
   */
  double *SACp_flat_174;
  int SAC_ND_A_RC( SACp_flat_174);
  const int SAC_ND_A_SIZE( SACp_flat_174) = 2;
  const int SAC_ND_A_DIM( SACp_flat_174) = 1;
  const int SAC_ND_A_SHAPE( SACp_flat_174, 0) = 2;

  double SACp_flat_171; 
  double SACp_flat_172; 
  double SACp_flat_173; 
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

  double SACp_type_339; 
  int SACp_type_341; 
  int SACp_type_340; 
  /*
   * ND_KS_DECL_ARRAY( int, SACp_type_338, 1, 2)
   */
  int *SACp_type_338;
  int SAC_ND_A_RC( SACp_type_338);
  const int SAC_ND_A_SIZE( SACp_type_338) = 2;
  const int SAC_ND_A_DIM( SACp_type_338) = 1;
  const int SAC_ND_A_SHAPE( SACp_type_338, 0) = 2;

  int SACp_inl_740__flat_729_64_2__; 
  /*
   * ND_KS_DECL_ARRAY( double, SACp_inl_739__flat_728, 2, 64, 2)
   */
  double *SACp_inl_739__flat_728;
  int SAC_ND_A_RC( SACp_inl_739__flat_728);
  const int SAC_ND_A_SIZE( SACp_inl_739__flat_728) = 64*2;
  const int SAC_ND_A_DIM( SACp_inl_739__flat_728) = 2;
  const int SAC_ND_A_SHAPE( SACp_inl_739__flat_728, 0) = 64;
  const int SAC_ND_A_SHAPE( SACp_inl_739__flat_728, 1) = 2;


  SACp_type_339 = 0.0; 
  SAC_ND_ALLOC_ARRAY( double, SACl_u, 1)
  SAC_PF_BEGIN_WITH( genarray)
    /*
     * WL_BEGIN__OFFSET( SACl_u, 2, SACp_type_338, 2)
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
       * WL_INIT_OFFSET( SACl_u, 2, SACp_type_338, 2)
       */
      SAC_WL_OFFSET( SACl_u)
        = SAC_WL_MT_SCHEDULE_START( 0) * SAC_WL_SHAPE_FACTOR( SACl_u, 0)
        + SAC_WL_MT_SCHEDULE_START( 1) * SAC_WL_SHAPE_FACTOR( SACl_u, 1);

      SAC_WL_STRIDE_LOOP0_BEGIN( 0, SACp_type_338, SACp_type_340, 0, 64, 1)
        SAC_WL_GRID_UNROLL_BEGIN( 0, SACp_type_338, SACp_type_340, 0, 1)
          SAC_WL_STRIDE_LOOP0_BEGIN( 1, SACp_type_338, SACp_type_341, 0, 2, 1)
            SAC_WL_GRID_UNROLL_BEGIN( 1, SACp_type_338, SACp_type_341, 0, 1)
              /*
               * WL_ASSIGN( SACp_type_339, 0, SACl_u, 2, SACp_type_338, 2, SACp_type_340, SACp_type_341)
               */
              SAC_TR_WL_PRINT( ("index vector [%d, %d] (== offset %d) -- offset %d -- assign", SACp_type_340, SACp_type_341, ( SAC_ND_A_SHAPE( SACl_u, 1) * SACp_type_340 + SACp_type_341 ), SAC_WL_OFFSET( SACl_u)));
              SAC_ASSURE_TYPE( (SAC_ND_A_DIM( SACp_type_339) == (SAC_ND_A_DIM( SACl_u) - 2)), ("WL expression with illegal dimension found!"));
              SAC_ASSURE_TYPE( (SAC_ND_A_SIZE( SACp_type_339) == SAC_WL_SHAPE_FACTOR( SACl_u, 1)), ("WL expression with illegal size found!"));
              SAC_ND_WRITE_ARRAY( SACl_u, SAC_WL_OFFSET( SACl_u)) = SACp_type_339;
              SAC_WL_OFFSET( SACl_u)++;

            SAC_WL_GRID_UNROLL_END( 1, SACp_type_338, SACp_type_341, 0, 1)
          SAC_WL_STRIDE_LOOP_END( 1, SACp_type_338, SACp_type_341, 0, 2, 1)
        SAC_WL_GRID_UNROLL_END( 0, SACp_type_338, SACp_type_340, 0, 1)
      SAC_WL_STRIDE_LOOP_END( 0, SACp_type_338, SACp_type_340, 0, 64, 1)
      /*
       * MT_SCHEDULER_END( 0, 2, 0, 0, 64, 2)
       */


      /*
       * WL_END__OFFSET( SACl_u, 2, SACp_type_338, 2)
       */
    }

  SAC_PF_END_WITH( genarray)
  SACl_theta = (0.049087385212340517437468179196002893149852752685546875 * SACl_dir); 
  /*
   * ND_FUN_AP( sin, SACp_flat_173, 1, in, SACl_theta)
   */
  SACp_flat_173 = sin( SAC_ND_ARG_in( SACl_theta));

  /*
   * ND_FUN_AP( cos, SACp_flat_172, 1, in, SACl_theta)
   */
  SACp_flat_172 = cos( SAC_ND_ARG_in( SACl_theta));

  SACp_flat_171 = (SACp_flat_172 + -1.0); 
  SAC_ND_ALLOC_ARRAY( double, SACp_flat_174, 1)
  /*
   * ND_CREATE_CONST_ARRAY_S( SACp_flat_174, 2, 1.0, 0.0)
   */
  SAC_ND_WRITE_ARRAY( SACp_flat_174, 0) = 1.0;
  SAC_ND_WRITE_ARRAY( SACp_flat_174, 1) = 0.0;

  SACp_inl_740__flat_729_64_2__ = (0 * 2); 
  SAC_ND_CHECK_REUSE_ARRAY( SACl_u, SACp_inl_739__flat_728)
  SAC_ND_ALLOC_ARRAY( double, SACp_inl_739__flat_728, 0)
  SAC_ND_INC_RC( SACp_inl_739__flat_728, 1)
  SAC_ND_IDX_MODARRAY_AxVxA( double, SACp_inl_739__flat_728, SACl_u, SACp_inl_740__flat_729_64_2__, SACp_flat_174)
  SAC_ND_DEC_RC_FREE_ARRAY( SACp_flat_174, 1)
  SAC_ND_DEC_RC_FREE_ARRAY( SACl_u, 1)
  SACl_i = 1; 
  SACp_inl_8101_i = SACl_i; 
  SAC_ND_KS_ASSIGN_ARRAY( SACp_inl_739__flat_728, SACp_inl_8100_u)
  SACp_inl_8099__lir_5242__inl_768__flat_0 = SACp_flat_171; 
  SACp_inl_8098__lir_5244__inl_778__flat_0 = SACp_flat_173; 
  SAC_ND_GOTO( _comp_8251_SAC__label)
  do 
  { 
    SAC_ND_DEC_RC_FREE_ARRAY( SACp_inl_8095_u__SSA_3, 1)
    SAC_ND_LABEL( _comp_8251_SAC__label)
    SACp_inl_8090__flat_177 = (SACp_inl_8101_i - 1); 
    SACp_inl_8091__type_343_64_2__ = ((SACp_inl_8090__flat_177 * 2) + 1); 
    SAC_ND_IDX_SEL_S( SACp_inl_8091__type_343_64_2__, SACp_inl_8100_u, SACp_inl_8092__type_342)
    SACp_inl_8096__type_343__SSA_1_64_2__ = ((SACp_inl_8090__flat_177 * 2) + 0); 
    SAC_ND_IDX_SEL_S( SACp_inl_8096__type_343__SSA_1_64_2__, SACp_inl_8100_u, SACp_inl_8097__type_342__SSA_1)
    SACp_inl_8085__flat_34 = (SACp_inl_8092__type_342 * SACp_inl_8099__lir_5242__inl_768__flat_0); 
    SACp_inl_8084__flat_31 = (SACp_inl_8097__type_342__SSA_1 * SACp_inl_8098__lir_5244__inl_778__flat_0); 
    SACp_inl_8083__flat_30 = (SACp_inl_8084__flat_31 + SACp_inl_8085__flat_34); 
    SACp_inl_8082__flat_27 = (SACp_inl_8092__type_342 * SACp_inl_8098__lir_5244__inl_778__flat_0); 
    SACp_inl_8081__flat_24 = (SACp_inl_8097__type_342__SSA_1 * SACp_inl_8099__lir_5242__inl_768__flat_0); 
    SACp_inl_8080__flat_23 = (SACp_inl_8081__flat_24 - SACp_inl_8082__flat_27); 
    SACp_inl_8088__flat_12 = (SACp_inl_8083__flat_30 + SACp_inl_8092__type_342); 
    SACp_inl_8087__flat_9 = (SACp_inl_8080__flat_23 + SACp_inl_8097__type_342__SSA_1); 
    SAC_ND_ALLOC_ARRAY( double, SACp_inl_8086_res, 1)
    /*
     * ND_CREATE_CONST_ARRAY_S( SACp_inl_8086_res, 2, SACp_inl_8087__flat_9, SACp_inl_8088__flat_12)
     */
    SAC_ND_WRITE_ARRAY( SACp_inl_8086_res, 0) = SACp_inl_8087__flat_9;
    SAC_ND_WRITE_ARRAY( SACp_inl_8086_res, 1) = SACp_inl_8088__flat_12;

    SACp_inl_8093__flat_179_64_2__ = (SACp_inl_8101_i * 2); 
    SAC_ND_CHECK_REUSE_ARRAY( SACp_inl_8100_u, SACp_inl_8095_u__SSA_3)
    SAC_ND_ALLOC_ARRAY( double, SACp_inl_8095_u__SSA_3, 0)
    SAC_ND_INC_RC( SACp_inl_8095_u__SSA_3, 1)
    SAC_ND_IDX_MODARRAY_AxVxA( double, SACp_inl_8095_u__SSA_3, SACp_inl_8100_u, SACp_inl_8093__flat_179_64_2__, SACp_inl_8086_res)
    SAC_ND_DEC_RC_FREE_ARRAY( SACp_inl_8086_res, 1)
    SAC_ND_DEC_RC_FREE_ARRAY( SACp_inl_8100_u, 1)
    SAC_ND_INC_RC( SACp_inl_8095_u__SSA_3, 1)
    SACp_inl_8094_i__SSA_1 = (SACp_inl_8101_i + 1); 
    SACp_inl_8089__flat_181 = (SACp_inl_8094_i__SSA_1 < 64); 
    SAC_ND_KS_ASSIGN_ARRAY( SACp_inl_8095_u__SSA_3, SACp_inl_8100_u)
    SACp_inl_8101_i = SACp_inl_8094_i__SSA_1; 
  }
  while (SACp_inl_8089__flat_181);
  SAC_ND_DEC_RC_FREE_ARRAY( SACp_inl_8100_u, 1)
  SAC_ND_KS_ASSIGN_ARRAY( SACp_inl_8095_u__SSA_3, SACp_inl_5229_u__SSA_1)
  /*
   * ND_FUN_RET( , 1, out_rc, SACp_inl_5229_u__SSA_1, SAC__arg_1)
   */
  SAC_ND_RET_out_rc( SACp_inl_5229_u__SSA_1, SAC__arg_1)
  return;
}

/*
 * ND_FUN_DEC( SACf_FFT1d__d___MAIN__cpx_8___MAIN__cpx_4, void, 4, out_rc, double *, SAC__arg_1, in, double, SACl_dir, in_rc, double *, SACl_v, in_rc, double *, SACl_rofu)
 */
void SACf_FFT1d__d___MAIN__cpx_8___MAIN__cpx_4( SAC_ND_PARAM_out_rc( double *, SAC__arg_1), SAC_ND_PARAM_in( double, SACl_dir), SAC_ND_PARAM_in_rc( double *, SACl_v), SAC_ND_PARAM_in_rc( double *, SACl_rofu))
{ 
  double SACp_dl_5972; 
  double SACp_dl_5971; 
  double SACp_dl_5967; 
  double SACp_dl_5966; 
  double SACp_dl_5965; 
  double SACp_dl_5960; 
  double SACp_dl_5959; 
  double SACp_dl_5955; 
  double SACp_dl_5954; 
  double SACp_dl_5953; 
  double SACp_dl_5948; 
  double SACp_dl_5947; 
  double SACp_dl_5943; 
  double SACp_dl_5942; 
  double SACp_dl_5938; 
  double SACp_dl_5937; 
  double SACp_dl_5936; 
  double SACp_dl_5931; 
  double SACp_dl_5930; 
  double SACp_dl_5924; 
  double SACp_dl_5923; 
  double SACp_dl_5917; 
  double SACp_dl_5916; 
  double SACp_dl_5910; 
  double SACp_dl_5909; 
  double SACp_dl_5908; 
  double SACp_dl_5902; 
  double SACp_dl_5896; 
  double SACp_dl_5895; 
  double SACp_dl_5894; 
  double SACp_dl_5887; 
  double SACp_dl_5886; 
  double SACp_dl_5885; 
  double SACp_dl_5884; 
  double SACp_dl_5878; 
  double SACp_dl_5877; 
  double SACp_dl_5876; 
  double SACp_dl_5875; 
  double SACp_dl_5868; 
  double SACp_esd_5839; 
  double SACp_esd_5837; 
  double SACp_esd_5836; 
  double SACp_esd_5835; 
  double SACp_esd_5834; 
  double SACp_esd_5830; 
  double SACp_esd_5828; 
  double SACp_esd_5827; 
  double SACp_esd_5826; 
  double SACp_esd_5825; 
  double SACp_esd_5824; 
  double SACp_esd_5820; 
  double SACp_esd_5819; 
  double SACp_esd_5818; 
  double SACp_esd_5807; 
  double SACp_esd_5806; 
  double SACp_inl_5771_array_elem__SSA_1; 
  double SACp_inl_5767_array_elem; 
  int SACp_inl_5753__flat_401_8_2__; 
  /*
   * ND_KS_DECL_ARRAY( int, SACp_inl_5752__flat_402_iv, 1, 2)
   */
  int *SACp_inl_5752__flat_402_iv;
  int SAC_ND_A_RC( SACp_inl_5752__flat_402_iv);
  const int SAC_ND_A_SIZE( SACp_inl_5752__flat_402_iv) = 2;
  const int SAC_ND_A_DIM( SACp_inl_5752__flat_402_iv) = 1;
  const int SAC_ND_A_SHAPE( SACp_inl_5752__flat_402_iv, 0) = 2;

  int SACp_inl_5752__flat_402_iv_8_2__; 
  int SACp_inl_5750__flat_404_8_2__; 
  int SACp_inl_5750__flat_404_4_2__; 
  int SACp_inl_5749__flat_403_8_2__; 
  /*
   * ND_KS_DECL_ARRAY( double, SACp_inl_5748__flat_406, 2, 8, 2)
   */
  double *SACp_inl_5748__flat_406;
  int SAC_ND_A_RC( SACp_inl_5748__flat_406);
  const int SAC_ND_A_SIZE( SACp_inl_5748__flat_406) = 8*2;
  const int SAC_ND_A_DIM( SACp_inl_5748__flat_406) = 2;
  const int SAC_ND_A_SHAPE( SACp_inl_5748__flat_406, 0) = 8;
  const int SAC_ND_A_SHAPE( SACp_inl_5748__flat_406, 1) = 2;

  int SACp_inl_5745__type_716; 
  int SACp_inl_5744__type_717; 
  int SACp_inl_5742__esd_5103_8_2__; 
  int SACp_esd_5104_4_2__; 
  double SACp_inl_3052__type_454; 
  /*
   * ND_KS_DECL_ARRAY( int, SACp_inl_3050__type_461, 1, 2)
   */
  int *SACp_inl_3050__type_461;
  int SAC_ND_A_RC( SACp_inl_3050__type_461);
  const int SAC_ND_A_SIZE( SACp_inl_3050__type_461) = 2;
  const int SAC_ND_A_DIM( SACp_inl_3050__type_461) = 1;
  const int SAC_ND_A_SHAPE( SACp_inl_3050__type_461, 0) = 2;

  int SACp_inl_3050__type_461_4_2__; 
  int SACp_inl_3049__type_463; 
  int SACp_inl_3048__type_464; 
  int SACp_inl_3046__type_458_4_2__; 
  double SACp_inl_3045__type_459; 
  /*
   * ND_KS_DECL_ARRAY( double, SACp_inl_3044__type_462, 2, 8, 2)
   */
  double *SACp_inl_3044__type_462;
  int SAC_ND_A_RC( SACp_inl_3044__type_462);
  const int SAC_ND_A_SIZE( SACp_inl_3044__type_462) = 8*2;
  const int SAC_ND_A_DIM( SACp_inl_3044__type_462) = 2;
  const int SAC_ND_A_SHAPE( SACp_inl_3044__type_462, 0) = 8;
  const int SAC_ND_A_SHAPE( SACp_inl_3044__type_462, 1) = 2;

  double SACp_inl_2782__flat_19; 
  double SACp_inl_2779__flat_16; 
  double SACp_inl_2750__flat_19; 
  double SACp_inl_2747__flat_16; 
  double SACp_inl_2718__flat_12; 
  double SACp_inl_2715__flat_9; 
  double SACp_inl_2686__flat_12; 
  double SACp_inl_2683__flat_9; 
  double SACp_inl_2636__flat_34; 
  double SACp_inl_2629__flat_27; 
  double SACp_inl_2578__flat_19; 
  double SACp_inl_2575__flat_16; 
  double SACp_inl_2548__flat_12; 
  double SACp_inl_2545__flat_9; 
  double SACp_inl_2518__flat_19; 
  double SACp_inl_2488__flat_12; 
  double SACp_inl_2485__flat_9; 
  double SACp_inl_2337__flat_19; 
  double SACp_inl_2305__flat_12; 
  double SACp_inl_2273__flat_12; 
  double SACp_inl_2270__flat_9; 
  double SACp_inl_2223__flat_34; 
  double SACp_inl_2216__flat_27; 
  double SACp_inl_2165__flat_19; 
  double SACp_inl_2162__flat_16; 
  double SACp_inl_2135__flat_12; 
  double SACp_inl_2132__flat_9; 
  double SACp_inl_2105__flat_19; 
  double SACp_inl_2075__flat_12; 
  double SACp_inl_2072__flat_9; 
  double SACp_inl_1949__flat_82; 
  int SACp_inl_1893__flat_83_8_2__; 
  int SACp_inl_1893__flat_83_4_2__; 
  double SACp_inl_1892__flat_82; 
  int SACp_inl_1893__flat_83__SSA_1_8_2__; 
  int SACp_inl_1893__flat_83__SSA_1_4_2__; 
  double SACp_inl_1892__flat_82__SSA_1; 
  int SACp_inl_1893__flat_83__SSA_2_8_2__; 
  double SACp_inl_1892__flat_82__SSA_2; 
  int SACp_inl_1893__flat_83__SSA_3_8_2__; 
  double SACp_inl_1892__flat_82__SSA_3; 
  double SACp_inl_1949__flat_82__SSA_1; 
  double SACp_inl_1949__flat_82__SSA_2; 
  double SACp_inl_1949__flat_82__SSA_3; 
  int SACp_wls_5787_4_2__; 
  int SACp_inl_2822__type_447__SSA_1_4_2__; 
  double SACp_inl_2821__type_446__SSA_1; 
  double SACp_inl_2862__flat_34__SSA_1; 
  double SACp_inl_2859__flat_31__SSA_1; 
  double SACp_inl_2858__flat_30__SSA_1; 
  double SACp_inl_2855__flat_27__SSA_1; 
  double SACp_inl_2852__flat_24__SSA_1; 
  double SACp_inl_2950__flat_19__SSA_1; 
  double SACp_inl_2947__flat_16__SSA_1; 
  double SACp_inl_3018__flat_12__SSA_1; 
  double SACp_inl_3015__flat_9__SSA_1; 
  int SACp_inl_1893__flat_83__SSA_4_8_2__; 
  int SACp_inl_1893__flat_83__SSA_4_4_2__; 
  double SACp_inl_1892__flat_82__SSA_4; 
  int SACp_inl_1893__flat_83__SSA_5_8_2__; 
  int SACp_inl_1893__flat_83__SSA_5_4_2__; 
  double SACp_inl_1892__flat_82__SSA_5; 
  int SACp_inl_1893__flat_83__SSA_6_8_2__; 
  double SACp_inl_1892__flat_82__SSA_6; 
  int SACp_inl_1893__flat_83__SSA_7_8_2__; 
  double SACp_inl_1892__flat_82__SSA_7; 
  double SACp_inl_1949__flat_82__SSA_4; 
  double SACp_inl_1949__flat_82__SSA_5; 
  double SACp_inl_1949__flat_82__SSA_6; 
  double SACp_inl_1949__flat_82__SSA_7; 
  double SACp_inl_2821__type_446__SSA_2; 
  double SACp_inl_2821__type_446__SSA_3; 
  double SACp_inl_2821__type_446__SSA_4; 
  double SACp_inl_2862__flat_34__SSA_2; 
  double SACp_inl_2859__flat_31__SSA_2; 
  double SACp_inl_2858__flat_30__SSA_2; 
  double SACp_inl_2855__flat_27__SSA_2; 
  double SACp_inl_2852__flat_24__SSA_2; 
  double SACp_inl_2851__flat_23__SSA_2; 
  int SACp_inl_2822__type_447__SSA_5_4_2__; 
  double SACp_inl_2821__type_446__SSA_5; 
  double SACp_inl_2821__type_446__SSA_6; 
  double SACp_inl_2862__flat_34__SSA_3; 
  double SACp_inl_2859__flat_31__SSA_3; 
  double SACp_inl_2858__flat_30__SSA_3; 
  double SACp_inl_2855__flat_27__SSA_3; 
  double SACp_inl_2852__flat_24__SSA_3; 
  double SACp_inl_2851__flat_23__SSA_3; 
  double SACp_inl_2821__type_446__SSA_7; 
  double SACp_inl_2821__type_446__SSA_8; 
  double SACp_inl_2862__flat_34__SSA_4; 
  double SACp_inl_2859__flat_31__SSA_4; 
  double SACp_inl_2858__flat_30__SSA_4; 
  double SACp_inl_2855__flat_27__SSA_4; 
  double SACp_inl_2852__flat_24__SSA_4; 
  double SACp_inl_2851__flat_23__SSA_4; 
  double SACp_inl_2950__flat_19__SSA_2; 
  double SACp_inl_2947__flat_16__SSA_2; 
  double SACp_inl_2950__flat_19__SSA_3; 
  double SACp_inl_2947__flat_16__SSA_3; 
  double SACp_inl_2950__flat_19__SSA_4; 
  double SACp_inl_2947__flat_16__SSA_4; 
  /*
   * ND_KS_DECL_ARRAY( double, SACp_inl_2907_res__SSA_8, 2, 4, 2)
   */
  double *SACp_inl_2907_res__SSA_8;
  int SAC_ND_A_RC( SACp_inl_2907_res__SSA_8);
  const int SAC_ND_A_SIZE( SACp_inl_2907_res__SSA_8) = 4*2;
  const int SAC_ND_A_DIM( SACp_inl_2907_res__SSA_8) = 2;
  const int SAC_ND_A_SHAPE( SACp_inl_2907_res__SSA_8, 0) = 4;
  const int SAC_ND_A_SHAPE( SACp_inl_2907_res__SSA_8, 1) = 2;

  double SACp_inl_3018__flat_12__SSA_2; 
  double SACp_inl_3015__flat_9__SSA_2; 
  double SACp_inl_3018__flat_12__SSA_3; 
  double SACp_inl_3015__flat_9__SSA_3; 
  double SACp_inl_3018__flat_12__SSA_4; 
  double SACp_inl_3015__flat_9__SSA_4; 
  /*
   * ND_KS_DECL_ARRAY( double, SACp_inl_2975_res__SSA_8, 2, 4, 2)
   */
  double *SACp_inl_2975_res__SSA_8;
  int SAC_ND_A_RC( SACp_inl_2975_res__SSA_8);
  const int SAC_ND_A_SIZE( SACp_inl_2975_res__SSA_8) = 4*2;
  const int SAC_ND_A_DIM( SACp_inl_2975_res__SSA_8) = 2;
  const int SAC_ND_A_SHAPE( SACp_inl_2975_res__SSA_8, 0) = 4;
  const int SAC_ND_A_SHAPE( SACp_inl_2975_res__SSA_8, 1) = 2;


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

  SACp_inl_5750__flat_404_8_2__ = ((1 * 2) + 0); 
  SACp_inl_5750__flat_404_4_2__ = ((1 * 2) + 0); 
  SACp_inl_5742__esd_5103_8_2__ = ((-7 * 2) + 0); 
  SAC_ND_ALLOC_ARRAY( double, SACp_inl_5748__flat_406, 1)
  SAC_PF_BEGIN_WITH( genarray)
    /*
     * WL_BEGIN__OFFSET( SACp_inl_5748__flat_406, 2, SACp_inl_5752__flat_402_iv, 2)
     */
    { int SAC_WL_OFFSET( SACp_inl_5748__flat_406);
      int SAC_WL_MT_SCHEDULE_START( 0);
      int SAC_WL_MT_SCHEDULE_STOP( 0);
      int SAC_WL_MT_SCHEDULE_START( 1);
      int SAC_WL_MT_SCHEDULE_STOP( 1);
      int SAC_i;
      int SAC_WL_SHAPE_FACTOR( SACp_inl_5748__flat_406, 0) = 1 * SAC_ND_A_SHAPE( SACp_inl_5748__flat_406, 1);
      int SAC_WL_SHAPE_FACTOR( SACp_inl_5748__flat_406, 1) = 1;

      /*
       * MT_SCHEDULER_BEGIN( 0, 2, 0, 0, 8, 2)
       */
      SAC_WL_MT_SCHEDULE_START( 0) = 0;
      SAC_WL_MT_SCHEDULE_STOP( 0) = 8;
      SAC_WL_MT_SCHEDULE_START( 1) = 0;
      SAC_WL_MT_SCHEDULE_STOP( 1) = 2;

      /*
       * WL_INIT_OFFSET( SACp_inl_5748__flat_406, 2, SACp_inl_5752__flat_402_iv, 2)
       */
      SAC_WL_OFFSET( SACp_inl_5748__flat_406)
        = SAC_WL_MT_SCHEDULE_START( 0) * SAC_WL_SHAPE_FACTOR( SACp_inl_5748__flat_406, 0)
        + SAC_WL_MT_SCHEDULE_START( 1) * SAC_WL_SHAPE_FACTOR( SACp_inl_5748__flat_406, 1);

      SAC_WL_STRIDE_LOOP0_BEGIN( 0, SACp_inl_5752__flat_402_iv, SACp_inl_5745__type_716, 0, 7, 1)
        SAC_WL_GRID_UNROLL_BEGIN( 0, SACp_inl_5752__flat_402_iv, SACp_inl_5745__type_716, 0, 1)
          SAC_WL_STRIDE_LOOP0_BEGIN( 1, SACp_inl_5752__flat_402_iv, SACp_inl_5744__type_717, 0, 2, 1)
            SAC_WL_GRID_UNROLL_BEGIN( 1, SACp_inl_5752__flat_402_iv, SACp_inl_5744__type_717, 0, 1)
              SAC_ND_KS_USE_GENVAR_OFFSET( SACp_inl_5752__flat_402_iv_8_2__, SACp_inl_5748__flat_406)
              SACp_inl_5749__flat_403_8_2__ = (SACp_inl_5750__flat_404_8_2__ + SACp_inl_5752__flat_402_iv_8_2__); 
              SAC_ND_IDX_SEL_S( SACp_inl_5749__flat_403_8_2__, SACl_v, SACp_inl_5771_array_elem__SSA_1)
              /*
               * WL_ASSIGN( SACp_inl_5771_array_elem__SSA_1, 0, SACp_inl_5748__flat_406, 2, SACp_inl_5752__flat_402_iv, 2, SACp_inl_5745__type_716, SACp_inl_5744__type_717)
               */
              SAC_TR_WL_PRINT( ("index vector [%d, %d] (== offset %d) -- offset %d -- assign", SACp_inl_5745__type_716, SACp_inl_5744__type_717, ( SAC_ND_A_SHAPE( SACp_inl_5748__flat_406, 1) * SACp_inl_5745__type_716 + SACp_inl_5744__type_717 ), SAC_WL_OFFSET( SACp_inl_5748__flat_406)));
              SAC_ASSURE_TYPE( (SAC_ND_A_DIM( SACp_inl_5771_array_elem__SSA_1) == (SAC_ND_A_DIM( SACp_inl_5748__flat_406) - 2)), ("WL expression with illegal dimension found!"));
              SAC_ASSURE_TYPE( (SAC_ND_A_SIZE( SACp_inl_5771_array_elem__SSA_1) == SAC_WL_SHAPE_FACTOR( SACp_inl_5748__flat_406, 1)), ("WL expression with illegal size found!"));
              SAC_ND_WRITE_ARRAY( SACp_inl_5748__flat_406, SAC_WL_OFFSET( SACp_inl_5748__flat_406)) = SACp_inl_5771_array_elem__SSA_1;
              SAC_WL_OFFSET( SACp_inl_5748__flat_406)++;

            SAC_WL_GRID_UNROLL_END( 1, SACp_inl_5752__flat_402_iv, SACp_inl_5744__type_717, 0, 1)
          SAC_WL_STRIDE_LOOP_END( 1, SACp_inl_5752__flat_402_iv, SACp_inl_5744__type_717, 0, 2, 1)
        SAC_WL_GRID_UNROLL_END( 0, SACp_inl_5752__flat_402_iv, SACp_inl_5745__type_716, 0, 1)
      SAC_WL_STRIDE_LOOP_END( 0, SACp_inl_5752__flat_402_iv, SACp_inl_5745__type_716, 0, 7, 1)
      SAC_WL_STRIDE_LOOP0_BEGIN( 0, SACp_inl_5752__flat_402_iv, SACp_inl_5745__type_716, 7, 8, 1)
        SAC_WL_GRID_UNROLL_BEGIN( 0, SACp_inl_5752__flat_402_iv, SACp_inl_5745__type_716, 0, 1)
          SAC_WL_STRIDE_LOOP0_BEGIN( 1, SACp_inl_5752__flat_402_iv, SACp_inl_5744__type_717, 0, 2, 1)
            SAC_WL_GRID_UNROLL_BEGIN( 1, SACp_inl_5752__flat_402_iv, SACp_inl_5744__type_717, 0, 1)
              SAC_ND_KS_USE_GENVAR_OFFSET( SACp_inl_5752__flat_402_iv_8_2__, SACp_inl_5748__flat_406)
              SACp_inl_5753__flat_401_8_2__ = (SACp_inl_5752__flat_402_iv_8_2__ + SACp_inl_5742__esd_5103_8_2__); 
              SAC_ND_IDX_SEL_S( SACp_inl_5753__flat_401_8_2__, SACl_v, SACp_inl_5767_array_elem)
              /*
               * WL_ASSIGN( SACp_inl_5767_array_elem, 0, SACp_inl_5748__flat_406, 2, SACp_inl_5752__flat_402_iv, 2, SACp_inl_5745__type_716, SACp_inl_5744__type_717)
               */
              SAC_TR_WL_PRINT( ("index vector [%d, %d] (== offset %d) -- offset %d -- assign", SACp_inl_5745__type_716, SACp_inl_5744__type_717, ( SAC_ND_A_SHAPE( SACp_inl_5748__flat_406, 1) * SACp_inl_5745__type_716 + SACp_inl_5744__type_717 ), SAC_WL_OFFSET( SACp_inl_5748__flat_406)));
              SAC_ASSURE_TYPE( (SAC_ND_A_DIM( SACp_inl_5767_array_elem) == (SAC_ND_A_DIM( SACp_inl_5748__flat_406) - 2)), ("WL expression with illegal dimension found!"));
              SAC_ASSURE_TYPE( (SAC_ND_A_SIZE( SACp_inl_5767_array_elem) == SAC_WL_SHAPE_FACTOR( SACp_inl_5748__flat_406, 1)), ("WL expression with illegal size found!"));
              SAC_ND_WRITE_ARRAY( SACp_inl_5748__flat_406, SAC_WL_OFFSET( SACp_inl_5748__flat_406)) = SACp_inl_5767_array_elem;
              SAC_WL_OFFSET( SACp_inl_5748__flat_406)++;

            SAC_WL_GRID_UNROLL_END( 1, SACp_inl_5752__flat_402_iv, SACp_inl_5744__type_717, 0, 1)
          SAC_WL_STRIDE_LOOP_END( 1, SACp_inl_5752__flat_402_iv, SACp_inl_5744__type_717, 0, 2, 1)
        SAC_WL_GRID_UNROLL_END( 0, SACp_inl_5752__flat_402_iv, SACp_inl_5745__type_716, 0, 1)
      SAC_WL_STRIDE_LOOP_END( 0, SACp_inl_5752__flat_402_iv, SACp_inl_5745__type_716, 7, 8, 1)
      /*
       * MT_SCHEDULER_END( 0, 2, 0, 0, 8, 2)
       */


      /*
       * WL_END__OFFSET( SACp_inl_5748__flat_406, 2, SACp_inl_5752__flat_402_iv, 2)
       */
    }

  SAC_PF_END_WITH( genarray)
  SACp_inl_1893__flat_83_8_2__ = ((0 * 2) + 1); 
  SACp_inl_1893__flat_83_4_2__ = ((0 * 2) + 1); 
  SAC_ND_IDX_SEL_S( SACp_inl_1893__flat_83_8_2__, SACl_v, SACp_inl_1892__flat_82)
  SACp_inl_1893__flat_83__SSA_4_8_2__ = ((0 * 2) + 0); 
  SACp_inl_1893__flat_83__SSA_4_4_2__ = ((0 * 2) + 0); 
  SAC_ND_IDX_SEL_S( SACp_inl_1893__flat_83__SSA_4_8_2__, SACl_v, SACp_inl_1892__flat_82__SSA_4)
  SACp_inl_1893__flat_83__SSA_1_8_2__ = ((2 * 2) + 1); 
  SACp_inl_1893__flat_83__SSA_1_4_2__ = ((2 * 2) + 1); 
  SAC_ND_IDX_SEL_S( SACp_inl_1893__flat_83__SSA_1_8_2__, SACl_v, SACp_inl_1892__flat_82__SSA_1)
  SACp_inl_1893__flat_83__SSA_5_8_2__ = ((2 * 2) + 0); 
  SACp_inl_1893__flat_83__SSA_5_4_2__ = ((2 * 2) + 0); 
  SAC_ND_IDX_SEL_S( SACp_inl_1893__flat_83__SSA_5_8_2__, SACl_v, SACp_inl_1892__flat_82__SSA_5)
  SACp_inl_1893__flat_83__SSA_2_8_2__ = ((4 * 2) + 1); 
  SAC_ND_IDX_SEL_S( SACp_inl_1893__flat_83__SSA_2_8_2__, SACl_v, SACp_inl_1892__flat_82__SSA_2)
  SACp_inl_1893__flat_83__SSA_6_8_2__ = ((4 * 2) + 0); 
  SAC_ND_IDX_SEL_S( SACp_inl_1893__flat_83__SSA_6_8_2__, SACl_v, SACp_inl_1892__flat_82__SSA_6)
  SACp_inl_1893__flat_83__SSA_3_8_2__ = ((6 * 2) + 1); 
  SAC_ND_IDX_SEL_S( SACp_inl_1893__flat_83__SSA_3_8_2__, SACl_v, SACp_inl_1892__flat_82__SSA_3)
  SACp_inl_1893__flat_83__SSA_7_8_2__ = ((6 * 2) + 0); 
  SAC_ND_IDX_SEL_S( SACp_inl_1893__flat_83__SSA_7_8_2__, SACl_v, SACp_inl_1892__flat_82__SSA_7)
  SAC_ND_DEC_RC_FREE_ARRAY( SACl_v, 1)
  SACp_inl_2075__flat_12 = (SACp_inl_1892__flat_82 + SACp_inl_1892__flat_82__SSA_2); 
  SACp_inl_2072__flat_9 = (SACp_inl_1892__flat_82__SSA_4 + SACp_inl_1892__flat_82__SSA_6); 
  SACp_inl_2105__flat_19 = (SACp_inl_1892__flat_82 - SACp_inl_1892__flat_82__SSA_2); 
  SACp_inl_2135__flat_12 = (SACp_inl_1892__flat_82__SSA_1 + SACp_inl_1892__flat_82__SSA_3); 
  SACp_inl_2132__flat_9 = (SACp_inl_1892__flat_82__SSA_5 + SACp_inl_1892__flat_82__SSA_7); 
  SACp_inl_2165__flat_19 = (SACp_inl_1892__flat_82__SSA_1 - SACp_inl_1892__flat_82__SSA_3); 
  SACp_inl_2162__flat_16 = (SACp_inl_1892__flat_82__SSA_5 - SACp_inl_1892__flat_82__SSA_7); 
  SACp_inl_2223__flat_34 = (SACl_dir * SACp_inl_2162__flat_16); 
  SACp_inl_2216__flat_27 = (SACl_dir * SACp_inl_2165__flat_19); 
  SACp_esd_5835 = (-1.0 * SACp_inl_2216__flat_27); 
  SACp_inl_2273__flat_12 = (SACp_inl_2075__flat_12 + SACp_inl_2135__flat_12); 
  SACp_inl_2270__flat_9 = (SACp_inl_2072__flat_9 + SACp_inl_2132__flat_9); 
  SACp_inl_2305__flat_12 = (SACp_inl_2105__flat_19 + SACp_inl_2223__flat_34); 
  SACp_inl_2337__flat_19 = (SACp_inl_2075__flat_12 - SACp_inl_2135__flat_12); 
  SAC_ND_IDX_SEL_S( SACp_inl_1893__flat_83_8_2__, SACp_inl_5748__flat_406, SACp_inl_1949__flat_82)
  SAC_ND_IDX_SEL_S( SACp_inl_1893__flat_83__SSA_4_8_2__, SACp_inl_5748__flat_406, SACp_inl_1949__flat_82__SSA_4)
  SAC_ND_IDX_SEL_S( SACp_inl_1893__flat_83__SSA_1_8_2__, SACp_inl_5748__flat_406, SACp_inl_1949__flat_82__SSA_1)
  SAC_ND_IDX_SEL_S( SACp_inl_1893__flat_83__SSA_5_8_2__, SACp_inl_5748__flat_406, SACp_inl_1949__flat_82__SSA_5)
  SAC_ND_IDX_SEL_S( SACp_inl_1893__flat_83__SSA_2_8_2__, SACp_inl_5748__flat_406, SACp_inl_1949__flat_82__SSA_2)
  SAC_ND_IDX_SEL_S( SACp_inl_1893__flat_83__SSA_6_8_2__, SACp_inl_5748__flat_406, SACp_inl_1949__flat_82__SSA_6)
  SAC_ND_IDX_SEL_S( SACp_inl_1893__flat_83__SSA_3_8_2__, SACp_inl_5748__flat_406, SACp_inl_1949__flat_82__SSA_3)
  SAC_ND_IDX_SEL_S( SACp_inl_1893__flat_83__SSA_7_8_2__, SACp_inl_5748__flat_406, SACp_inl_1949__flat_82__SSA_7)
  SAC_ND_DEC_RC_FREE_ARRAY( SACp_inl_5748__flat_406, 1)
  SACp_inl_2488__flat_12 = (SACp_inl_1949__flat_82 + SACp_inl_1949__flat_82__SSA_2); 
  SACp_inl_2485__flat_9 = (SACp_inl_1949__flat_82__SSA_4 + SACp_inl_1949__flat_82__SSA_6); 
  SACp_inl_2518__flat_19 = (SACp_inl_1949__flat_82 - SACp_inl_1949__flat_82__SSA_2); 
  SACp_inl_2548__flat_12 = (SACp_inl_1949__flat_82__SSA_1 + SACp_inl_1949__flat_82__SSA_3); 
  SACp_inl_2545__flat_9 = (SACp_inl_1949__flat_82__SSA_5 + SACp_inl_1949__flat_82__SSA_7); 
  SACp_inl_2578__flat_19 = (SACp_inl_1949__flat_82__SSA_1 - SACp_inl_1949__flat_82__SSA_3); 
  SACp_inl_2575__flat_16 = (SACp_inl_1949__flat_82__SSA_5 - SACp_inl_1949__flat_82__SSA_7); 
  SACp_inl_2636__flat_34 = (SACl_dir * SACp_inl_2575__flat_16); 
  SACp_inl_2629__flat_27 = (SACl_dir * SACp_inl_2578__flat_19); 
  SACp_inl_2686__flat_12 = (SACp_inl_2488__flat_12 + SACp_inl_2548__flat_12); 
  SACp_inl_2683__flat_9 = (SACp_inl_2485__flat_9 + SACp_inl_2545__flat_9); 
  SACp_inl_2718__flat_12 = (SACp_inl_2518__flat_19 + SACp_inl_2636__flat_34); 
  SACp_dl_5971 = (SACp_inl_1949__flat_82__SSA_6 + SACp_inl_2629__flat_27); 
  SACp_dl_5972 = (SACp_dl_5971 * -1.0); 
  SACp_inl_2715__flat_9 = (SACp_dl_5972 + SACp_inl_1949__flat_82__SSA_4); 
  SACp_inl_2750__flat_19 = (SACp_inl_2488__flat_12 - SACp_inl_2548__flat_12); 
  SACp_inl_2747__flat_16 = (SACp_inl_2485__flat_9 - SACp_inl_2545__flat_9); 
  SACp_dl_5947 = (SACp_inl_1949__flat_82__SSA_2 + SACp_inl_2636__flat_34); 
  SACp_dl_5948 = (SACp_dl_5947 * -1.0); 
  SACp_inl_2782__flat_19 = (SACp_dl_5948 + SACp_inl_1949__flat_82); 
  SACp_dl_5942 = (SACp_inl_1949__flat_82__SSA_6 - SACp_inl_2629__flat_27); 
  SACp_dl_5943 = (SACp_dl_5942 * -1.0); 
  SACp_inl_2779__flat_16 = (SACp_dl_5943 + SACp_inl_1949__flat_82__SSA_4); 
  SACp_wls_5787_4_2__ = ((3 * 2) + 0); 
  SACp_inl_2822__type_447__SSA_1_4_2__ = ((3 * 2) + 1); 
  SAC_ND_IDX_SEL_S( SACp_inl_2822__type_447__SSA_1_4_2__, SACl_rofu, SACp_inl_2821__type_446__SSA_1)
  SAC_ND_IDX_SEL_S( SACp_wls_5787_4_2__, SACl_rofu, SACp_inl_2821__type_446__SSA_2)
  SACp_inl_2862__flat_34__SSA_1 = (SACp_inl_2782__flat_19 * SACp_inl_2821__type_446__SSA_2); 
  SACp_inl_2859__flat_31__SSA_1 = (SACp_inl_2779__flat_16 * SACp_inl_2821__type_446__SSA_1); 
  SACp_inl_2858__flat_30__SSA_1 = (SACp_inl_2859__flat_31__SSA_1 + SACp_inl_2862__flat_34__SSA_1); 
  SACp_inl_2855__flat_27__SSA_1 = (SACp_inl_2782__flat_19 * SACp_inl_2821__type_446__SSA_1); 
  SACp_inl_2852__flat_24__SSA_1 = (SACp_inl_2779__flat_16 * SACp_inl_2821__type_446__SSA_2); 
  SAC_ND_IDX_SEL_S( SACp_inl_1893__flat_83__SSA_1_4_2__, SACl_rofu, SACp_inl_2821__type_446__SSA_3)
  SAC_ND_IDX_SEL_S( SACp_inl_1893__flat_83__SSA_5_4_2__, SACl_rofu, SACp_inl_2821__type_446__SSA_4)
  SACp_inl_2862__flat_34__SSA_2 = (SACp_inl_2750__flat_19 * SACp_inl_2821__type_446__SSA_4); 
  SACp_inl_2859__flat_31__SSA_2 = (SACp_inl_2747__flat_16 * SACp_inl_2821__type_446__SSA_3); 
  SACp_inl_2858__flat_30__SSA_2 = (SACp_inl_2859__flat_31__SSA_2 + SACp_inl_2862__flat_34__SSA_2); 
  SACp_inl_2855__flat_27__SSA_2 = (SACp_inl_2750__flat_19 * SACp_inl_2821__type_446__SSA_3); 
  SACp_inl_2852__flat_24__SSA_2 = (SACp_inl_2747__flat_16 * SACp_inl_2821__type_446__SSA_4); 
  SACp_inl_2851__flat_23__SSA_2 = (SACp_inl_2852__flat_24__SSA_2 - SACp_inl_2855__flat_27__SSA_2); 
  SACp_inl_2822__type_447__SSA_5_4_2__ = ((1 * 2) + 1); 
  SAC_ND_IDX_SEL_S( SACp_inl_2822__type_447__SSA_5_4_2__, SACl_rofu, SACp_inl_2821__type_446__SSA_5)
  SAC_ND_IDX_SEL_S( SACp_inl_5750__flat_404_4_2__, SACl_rofu, SACp_inl_2821__type_446__SSA_6)
  SACp_inl_2862__flat_34__SSA_3 = (SACp_inl_2718__flat_12 * SACp_inl_2821__type_446__SSA_6); 
  SACp_inl_2859__flat_31__SSA_3 = (SACp_inl_2715__flat_9 * SACp_inl_2821__type_446__SSA_5); 
  SACp_inl_2858__flat_30__SSA_3 = (SACp_inl_2859__flat_31__SSA_3 + SACp_inl_2862__flat_34__SSA_3); 
  SACp_inl_2855__flat_27__SSA_3 = (SACp_inl_2718__flat_12 * SACp_inl_2821__type_446__SSA_5); 
  SACp_inl_2852__flat_24__SSA_3 = (SACp_inl_2715__flat_9 * SACp_inl_2821__type_446__SSA_6); 
  SACp_inl_2851__flat_23__SSA_3 = (SACp_inl_2852__flat_24__SSA_3 - SACp_inl_2855__flat_27__SSA_3); 
  SAC_ND_IDX_SEL_S( SACp_inl_1893__flat_83_4_2__, SACl_rofu, SACp_inl_2821__type_446__SSA_7)
  SAC_ND_IDX_SEL_S( SACp_inl_1893__flat_83__SSA_4_4_2__, SACl_rofu, SACp_inl_2821__type_446__SSA_8)
  SAC_ND_DEC_RC_FREE_ARRAY( SACl_rofu, 1)
  SACp_inl_2862__flat_34__SSA_4 = (SACp_inl_2686__flat_12 * SACp_inl_2821__type_446__SSA_8); 
  SACp_inl_2859__flat_31__SSA_4 = (SACp_inl_2683__flat_9 * SACp_inl_2821__type_446__SSA_7); 
  SACp_inl_2858__flat_30__SSA_4 = (SACp_inl_2859__flat_31__SSA_4 + SACp_inl_2862__flat_34__SSA_4); 
  SACp_inl_2855__flat_27__SSA_4 = (SACp_inl_2686__flat_12 * SACp_inl_2821__type_446__SSA_7); 
  SACp_inl_2852__flat_24__SSA_4 = (SACp_inl_2683__flat_9 * SACp_inl_2821__type_446__SSA_8); 
  SACp_inl_2851__flat_23__SSA_4 = (SACp_inl_2852__flat_24__SSA_4 - SACp_inl_2855__flat_27__SSA_4); 
  SACp_dl_5936 = (SACp_inl_2223__flat_34 + SACp_inl_2858__flat_30__SSA_1); 
  SACp_dl_5937 = (SACp_dl_5936 + SACp_inl_1892__flat_82__SSA_2); 
  SACp_dl_5938 = (SACp_dl_5937 * -1.0); 
  SACp_inl_2950__flat_19__SSA_1 = (SACp_dl_5938 + SACp_inl_1892__flat_82); 
  SACp_dl_5966 = (SACp_inl_2216__flat_27 + SACp_inl_2855__flat_27__SSA_1); 
  SACp_dl_5967 = (SACp_dl_5966 * -1.0); 
  SACp_dl_5965 = (SACp_inl_2852__flat_24__SSA_1 + SACp_inl_1892__flat_82__SSA_6); 
  SACp_dl_5930 = (SACp_dl_5967 + SACp_dl_5965); 
  SACp_dl_5931 = (SACp_dl_5930 * -1.0); 
  SACp_inl_2947__flat_16__SSA_1 = (SACp_dl_5931 + SACp_inl_1892__flat_82__SSA_4); 
  SACp_dl_5923 = (SACp_inl_2135__flat_12 + SACp_inl_2858__flat_30__SSA_2); 
  SACp_dl_5924 = (SACp_dl_5923 * -1.0); 
  SACp_inl_2950__flat_19__SSA_2 = (SACp_dl_5924 + SACp_inl_2075__flat_12); 
  SACp_dl_5916 = (SACp_inl_2132__flat_9 + SACp_inl_2851__flat_23__SSA_2); 
  SACp_dl_5917 = (SACp_dl_5916 * -1.0); 
  SACp_inl_2947__flat_16__SSA_2 = (SACp_dl_5917 + SACp_inl_2072__flat_9); 
  SACp_dl_5909 = (SACp_inl_1892__flat_82__SSA_2 + SACp_inl_2858__flat_30__SSA_3); 
  SACp_dl_5910 = (SACp_dl_5909 * -1.0); 
  SACp_dl_5908 = (SACp_inl_1892__flat_82 + SACp_inl_2223__flat_34); 
  SACp_inl_2950__flat_19__SSA_3 = (SACp_dl_5910 + SACp_dl_5908); 
  SACp_dl_5902 = (SACp_inl_1892__flat_82__SSA_6 + SACp_inl_2851__flat_23__SSA_3); 
  SACp_dl_5959 = (SACp_dl_5902 + SACp_inl_2216__flat_27); 
  SACp_dl_5960 = (SACp_dl_5959 * -1.0); 
  SACp_inl_2947__flat_16__SSA_3 = (SACp_dl_5960 + SACp_inl_1892__flat_82__SSA_4); 
  SACp_inl_2950__flat_19__SSA_4 = (SACp_inl_2273__flat_12 - SACp_inl_2858__flat_30__SSA_4); 
  SACp_inl_2947__flat_16__SSA_4 = (SACp_inl_2270__flat_9 - SACp_inl_2851__flat_23__SSA_4); 
  SAC_ND_ALLOC_ARRAY( double, SACp_inl_2907_res__SSA_8, 1)
  /*
   * ND_CREATE_CONST_ARRAY_S( SACp_inl_2907_res__SSA_8, 8, SACp_inl_2947__flat_16__SSA_4, SACp_inl_2950__flat_19__SSA_4, SACp_inl_2947__flat_16__SSA_3, SACp_inl_2950__flat_19__SSA_3, SACp_inl_2947__flat_16__SSA_2, SACp_inl_2950__flat_19__SSA_2, SACp_inl_2947__flat_16__SSA_1, SACp_inl_2950__flat_19__SSA_1)
   */
  SAC_ND_WRITE_ARRAY( SACp_inl_2907_res__SSA_8, 0) = SACp_inl_2947__flat_16__SSA_4;
  SAC_ND_WRITE_ARRAY( SACp_inl_2907_res__SSA_8, 1) = SACp_inl_2950__flat_19__SSA_4;
  SAC_ND_WRITE_ARRAY( SACp_inl_2907_res__SSA_8, 2) = SACp_inl_2947__flat_16__SSA_3;
  SAC_ND_WRITE_ARRAY( SACp_inl_2907_res__SSA_8, 3) = SACp_inl_2950__flat_19__SSA_3;
  SAC_ND_WRITE_ARRAY( SACp_inl_2907_res__SSA_8, 4) = SACp_inl_2947__flat_16__SSA_2;
  SAC_ND_WRITE_ARRAY( SACp_inl_2907_res__SSA_8, 5) = SACp_inl_2950__flat_19__SSA_2;
  SAC_ND_WRITE_ARRAY( SACp_inl_2907_res__SSA_8, 6) = SACp_inl_2947__flat_16__SSA_1;
  SAC_ND_WRITE_ARRAY( SACp_inl_2907_res__SSA_8, 7) = SACp_inl_2950__flat_19__SSA_1;

  SACp_dl_5895 = (SACp_inl_1892__flat_82__SSA_2 + SACp_inl_2223__flat_34); 
  SACp_dl_5896 = (SACp_dl_5895 * -1.0); 
  SACp_dl_5894 = (SACp_inl_2858__flat_30__SSA_1 + SACp_inl_1892__flat_82); 
  SACp_inl_3018__flat_12__SSA_1 = (SACp_dl_5896 + SACp_dl_5894); 
  SACp_dl_5885 = (SACp_esd_5835 + SACp_inl_2855__flat_27__SSA_1); 
  SACp_dl_5886 = (SACp_dl_5885 + SACp_inl_1892__flat_82__SSA_6); 
  SACp_dl_5887 = (SACp_dl_5886 * -1.0); 
  SACp_dl_5884 = (SACp_inl_1892__flat_82__SSA_4 + SACp_inl_2852__flat_24__SSA_1); 
  SACp_inl_3015__flat_9__SSA_1 = (SACp_dl_5887 + SACp_dl_5884); 
  SACp_inl_3018__flat_12__SSA_2 = (SACp_inl_2337__flat_19 + SACp_inl_2858__flat_30__SSA_2); 
  SACp_dl_5875 = (SACp_inl_1892__flat_82__SSA_6 + SACp_inl_2852__flat_24__SSA_2); 
  SACp_dl_5877 = (SACp_inl_2132__flat_9 + SACp_inl_2855__flat_27__SSA_2); 
  SACp_dl_5878 = (SACp_dl_5877 * -1.0); 
  SACp_dl_5876 = (SACp_dl_5875 + SACp_inl_1892__flat_82__SSA_4); 
  SACp_inl_3015__flat_9__SSA_2 = (SACp_dl_5878 + SACp_dl_5876); 
  SACp_inl_3018__flat_12__SSA_3 = (SACp_inl_2305__flat_12 + SACp_inl_2858__flat_30__SSA_3); 
  SACp_dl_5868 = (SACp_inl_1892__flat_82__SSA_6 + SACp_inl_2855__flat_27__SSA_3); 
  SACp_dl_5954 = (SACp_dl_5868 + SACp_inl_2216__flat_27); 
  SACp_dl_5955 = (SACp_dl_5954 * -1.0); 
  SACp_dl_5953 = (SACp_inl_2852__flat_24__SSA_3 + SACp_inl_1892__flat_82__SSA_4); 
  SACp_inl_3015__flat_9__SSA_3 = (SACp_dl_5955 + SACp_dl_5953); 
  SACp_inl_3018__flat_12__SSA_4 = (SACp_inl_2273__flat_12 + SACp_inl_2858__flat_30__SSA_4); 
  SACp_inl_3015__flat_9__SSA_4 = (SACp_inl_2270__flat_9 + SACp_inl_2851__flat_23__SSA_4); 
  SAC_ND_ALLOC_ARRAY( double, SACp_inl_2975_res__SSA_8, 1)
  /*
   * ND_CREATE_CONST_ARRAY_S( SACp_inl_2975_res__SSA_8, 8, SACp_inl_3015__flat_9__SSA_4, SACp_inl_3018__flat_12__SSA_4, SACp_inl_3015__flat_9__SSA_3, SACp_inl_3018__flat_12__SSA_3, SACp_inl_3015__flat_9__SSA_2, SACp_inl_3018__flat_12__SSA_2, SACp_inl_3015__flat_9__SSA_1, SACp_inl_3018__flat_12__SSA_1)
   */
  SAC_ND_WRITE_ARRAY( SACp_inl_2975_res__SSA_8, 0) = SACp_inl_3015__flat_9__SSA_4;
  SAC_ND_WRITE_ARRAY( SACp_inl_2975_res__SSA_8, 1) = SACp_inl_3018__flat_12__SSA_4;
  SAC_ND_WRITE_ARRAY( SACp_inl_2975_res__SSA_8, 2) = SACp_inl_3015__flat_9__SSA_3;
  SAC_ND_WRITE_ARRAY( SACp_inl_2975_res__SSA_8, 3) = SACp_inl_3018__flat_12__SSA_3;
  SAC_ND_WRITE_ARRAY( SACp_inl_2975_res__SSA_8, 4) = SACp_inl_3015__flat_9__SSA_2;
  SAC_ND_WRITE_ARRAY( SACp_inl_2975_res__SSA_8, 5) = SACp_inl_3018__flat_12__SSA_2;
  SAC_ND_WRITE_ARRAY( SACp_inl_2975_res__SSA_8, 6) = SACp_inl_3015__flat_9__SSA_1;
  SAC_ND_WRITE_ARRAY( SACp_inl_2975_res__SSA_8, 7) = SACp_inl_3018__flat_12__SSA_1;

  SACp_esd_5104_4_2__ = ((-4 * 2) + 0); 
  SAC_ND_ALLOC_ARRAY( double, SACp_inl_3044__type_462, 1)
  SAC_PF_BEGIN_WITH( genarray)
    /*
     * WL_BEGIN__OFFSET( SACp_inl_3044__type_462, 2, SACp_inl_3050__type_461, 2)
     */
    { int SAC_WL_OFFSET( SACp_inl_3044__type_462);
      int SAC_WL_MT_SCHEDULE_START( 0);
      int SAC_WL_MT_SCHEDULE_STOP( 0);
      int SAC_WL_MT_SCHEDULE_START( 1);
      int SAC_WL_MT_SCHEDULE_STOP( 1);
      int SAC_i;
      int SAC_WL_SHAPE_FACTOR( SACp_inl_3044__type_462, 0) = 1 * SAC_ND_A_SHAPE( SACp_inl_3044__type_462, 1);
      int SAC_WL_SHAPE_FACTOR( SACp_inl_3044__type_462, 1) = 1;

      /*
       * MT_SCHEDULER_BEGIN( 0, 2, 0, 0, 8, 2)
       */
      SAC_WL_MT_SCHEDULE_START( 0) = 0;
      SAC_WL_MT_SCHEDULE_STOP( 0) = 8;
      SAC_WL_MT_SCHEDULE_START( 1) = 0;
      SAC_WL_MT_SCHEDULE_STOP( 1) = 2;

      /*
       * WL_INIT_OFFSET( SACp_inl_3044__type_462, 2, SACp_inl_3050__type_461, 2)
       */
      SAC_WL_OFFSET( SACp_inl_3044__type_462)
        = SAC_WL_MT_SCHEDULE_START( 0) * SAC_WL_SHAPE_FACTOR( SACp_inl_3044__type_462, 0)
        + SAC_WL_MT_SCHEDULE_START( 1) * SAC_WL_SHAPE_FACTOR( SACp_inl_3044__type_462, 1);

      SAC_WL_STRIDE_LOOP0_BEGIN( 0, SACp_inl_3050__type_461, SACp_inl_3049__type_463, 0, 4, 1)
        SAC_WL_GRID_UNROLL_BEGIN( 0, SACp_inl_3050__type_461, SACp_inl_3049__type_463, 0, 1)
          SAC_WL_STRIDE_LOOP0_BEGIN( 1, SACp_inl_3050__type_461, SACp_inl_3048__type_464, 0, 2, 1)
            SAC_WL_GRID_UNROLL_BEGIN( 1, SACp_inl_3050__type_461, SACp_inl_3048__type_464, 0, 1)
              /*
               * ND_IDXS2OFFSET( SACp_inl_3050__type_461_4_2__, 2, SACp_inl_3049__type_463, SACp_inl_3048__type_464, 2, 4, 2)
               */
              SACp_inl_3050__type_461_4_2__ = ( 2* SACp_inl_3049__type_463+SACp_inl_3048__type_464) ;

              SAC_ND_IDX_SEL_S( SACp_inl_3050__type_461_4_2__, SACp_inl_2975_res__SSA_8, SACp_inl_3052__type_454)
              /*
               * WL_ASSIGN( SACp_inl_3052__type_454, 0, SACp_inl_3044__type_462, 2, SACp_inl_3050__type_461, 2, SACp_inl_3049__type_463, SACp_inl_3048__type_464)
               */
              SAC_TR_WL_PRINT( ("index vector [%d, %d] (== offset %d) -- offset %d -- assign", SACp_inl_3049__type_463, SACp_inl_3048__type_464, ( SAC_ND_A_SHAPE( SACp_inl_3044__type_462, 1) * SACp_inl_3049__type_463 + SACp_inl_3048__type_464 ), SAC_WL_OFFSET( SACp_inl_3044__type_462)));
              SAC_ASSURE_TYPE( (SAC_ND_A_DIM( SACp_inl_3052__type_454) == (SAC_ND_A_DIM( SACp_inl_3044__type_462) - 2)), ("WL expression with illegal dimension found!"));
              SAC_ASSURE_TYPE( (SAC_ND_A_SIZE( SACp_inl_3052__type_454) == SAC_WL_SHAPE_FACTOR( SACp_inl_3044__type_462, 1)), ("WL expression with illegal size found!"));
              SAC_ND_WRITE_ARRAY( SACp_inl_3044__type_462, SAC_WL_OFFSET( SACp_inl_3044__type_462)) = SACp_inl_3052__type_454;
              SAC_WL_OFFSET( SACp_inl_3044__type_462)++;

            SAC_WL_GRID_UNROLL_END( 1, SACp_inl_3050__type_461, SACp_inl_3048__type_464, 0, 1)
          SAC_WL_STRIDE_LOOP_END( 1, SACp_inl_3050__type_461, SACp_inl_3048__type_464, 0, 2, 1)
        SAC_WL_GRID_UNROLL_END( 0, SACp_inl_3050__type_461, SACp_inl_3049__type_463, 0, 1)
      SAC_WL_STRIDE_LOOP_END( 0, SACp_inl_3050__type_461, SACp_inl_3049__type_463, 0, 4, 1)
      SAC_WL_STRIDE_LOOP0_BEGIN( 0, SACp_inl_3050__type_461, SACp_inl_3049__type_463, 4, 8, 1)
        SAC_WL_GRID_UNROLL_BEGIN( 0, SACp_inl_3050__type_461, SACp_inl_3049__type_463, 0, 1)
          SAC_WL_STRIDE_LOOP0_BEGIN( 1, SACp_inl_3050__type_461, SACp_inl_3048__type_464, 0, 2, 1)
            SAC_WL_GRID_UNROLL_BEGIN( 1, SACp_inl_3050__type_461, SACp_inl_3048__type_464, 0, 1)
              /*
               * ND_IDXS2OFFSET( SACp_inl_3050__type_461_4_2__, 2, SACp_inl_3049__type_463, SACp_inl_3048__type_464, 2, 4, 2)
               */
              SACp_inl_3050__type_461_4_2__ = ( 2* SACp_inl_3049__type_463+SACp_inl_3048__type_464) ;

              SACp_inl_3046__type_458_4_2__ = (SACp_inl_3050__type_461_4_2__ + SACp_esd_5104_4_2__); 
              SAC_ND_IDX_SEL_S( SACp_inl_3046__type_458_4_2__, SACp_inl_2907_res__SSA_8, SACp_inl_3045__type_459)
              /*
               * WL_ASSIGN( SACp_inl_3045__type_459, 0, SACp_inl_3044__type_462, 2, SACp_inl_3050__type_461, 2, SACp_inl_3049__type_463, SACp_inl_3048__type_464)
               */
              SAC_TR_WL_PRINT( ("index vector [%d, %d] (== offset %d) -- offset %d -- assign", SACp_inl_3049__type_463, SACp_inl_3048__type_464, ( SAC_ND_A_SHAPE( SACp_inl_3044__type_462, 1) * SACp_inl_3049__type_463 + SACp_inl_3048__type_464 ), SAC_WL_OFFSET( SACp_inl_3044__type_462)));
              SAC_ASSURE_TYPE( (SAC_ND_A_DIM( SACp_inl_3045__type_459) == (SAC_ND_A_DIM( SACp_inl_3044__type_462) - 2)), ("WL expression with illegal dimension found!"));
              SAC_ASSURE_TYPE( (SAC_ND_A_SIZE( SACp_inl_3045__type_459) == SAC_WL_SHAPE_FACTOR( SACp_inl_3044__type_462, 1)), ("WL expression with illegal size found!"));
              SAC_ND_WRITE_ARRAY( SACp_inl_3044__type_462, SAC_WL_OFFSET( SACp_inl_3044__type_462)) = SACp_inl_3045__type_459;
              SAC_WL_OFFSET( SACp_inl_3044__type_462)++;

            SAC_WL_GRID_UNROLL_END( 1, SACp_inl_3050__type_461, SACp_inl_3048__type_464, 0, 1)
          SAC_WL_STRIDE_LOOP_END( 1, SACp_inl_3050__type_461, SACp_inl_3048__type_464, 0, 2, 1)
        SAC_WL_GRID_UNROLL_END( 0, SACp_inl_3050__type_461, SACp_inl_3049__type_463, 0, 1)
      SAC_WL_STRIDE_LOOP_END( 0, SACp_inl_3050__type_461, SACp_inl_3049__type_463, 4, 8, 1)
      /*
       * MT_SCHEDULER_END( 0, 2, 0, 0, 8, 2)
       */


      /*
       * WL_END__OFFSET( SACp_inl_3044__type_462, 2, SACp_inl_3050__type_461, 2)
       */
    }

  SAC_PF_END_WITH( genarray)
  SAC_ND_DEC_RC_FREE_ARRAY( SACp_inl_2975_res__SSA_8, 1)
  SAC_ND_DEC_RC_FREE_ARRAY( SACp_inl_2907_res__SSA_8, 1)
  /*
   * ND_FUN_RET( , 1, out_rc, SACp_inl_3044__type_462, SAC__arg_1)
   */
  SAC_ND_RET_out_rc( SACp_inl_3044__type_462, SAC__arg_1)
  return;
}

/*
 * ND_FUN_DEC( SACf_FFT1d__d___MAIN__cpx_16___MAIN__cpx_8, void, 4, out_rc, double *, SAC__arg_1, in, double, SACl_dir, in_rc, double *, SACl_v, in_rc, double *, SACl_rofu)
 */
void SACf_FFT1d__d___MAIN__cpx_16___MAIN__cpx_8( SAC_ND_PARAM_out_rc( double *, SAC__arg_1), SAC_ND_PARAM_in( double, SACl_dir), SAC_ND_PARAM_in_rc( double *, SACl_v), SAC_ND_PARAM_in_rc( double *, SACl_rofu))
{ 
  double SACp_inl_6012_array_elem__SSA_1; 
  int SACp_inl_5991__flat_404_16_2__; 
  int SACp_inl_5990__flat_403_16_2__; 
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
   * ND_KS_DECL_ARRAY( int, SACp_inl_3398__type_481, 1, 2)
   */
  int *SACp_inl_3398__type_481;
  int SAC_ND_A_RC( SACp_inl_3398__type_481);
  const int SAC_ND_A_SIZE( SACp_inl_3398__type_481) = 2;
  const int SAC_ND_A_DIM( SACp_inl_3398__type_481) = 1;
  const int SAC_ND_A_SHAPE( SACp_inl_3398__type_481, 0) = 2;

  int SACp_inl_3397__type_483; 
  int SACp_inl_3396__type_484; 
  /*
   * ND_KS_DECL_ARRAY( double, SACp_inl_3392__type_482, 2, 16, 2)
   */
  double *SACp_inl_3392__type_482;
  int SAC_ND_A_RC( SACp_inl_3392__type_482);
  const int SAC_ND_A_SIZE( SACp_inl_3392__type_482) = 16*2;
  const int SAC_ND_A_DIM( SACp_inl_3392__type_482) = 2;
  const int SAC_ND_A_SHAPE( SACp_inl_3392__type_482, 0) = 16;
  const int SAC_ND_A_SHAPE( SACp_inl_3392__type_482, 1) = 2;

  int SACp_inl_3143__flat_83_8_2__; 
  double SACp_inl_3142__flat_82; 
  /*
   * ND_KS_DECL_ARRAY( int, SACp_inl_3132__flat_81_iv, 1, 2)
   */
  int *SACp_inl_3132__flat_81_iv;
  int SAC_ND_A_RC( SACp_inl_3132__flat_81_iv);
  const int SAC_ND_A_SIZE( SACp_inl_3132__flat_81_iv) = 2;
  const int SAC_ND_A_DIM( SACp_inl_3132__flat_81_iv) = 1;
  const int SAC_ND_A_SHAPE( SACp_inl_3132__flat_81_iv, 0) = 2;

  int SACp_inl_3131__type_406; 
  int SACp_inl_3130__type_407; 
  int SACp_inl_3125__flat_84; 
  int SACp_inl_3124__flat_83_16_2__; 
  /*
   * ND_KS_DECL_ARRAY( double, SACp_inl_3122_rn, 2, 8, 2)
   */
  double *SACp_inl_3122_rn;
  int SAC_ND_A_RC( SACp_inl_3122_rn);
  const int SAC_ND_A_SIZE( SACp_inl_3122_rn) = 8*2;
  const int SAC_ND_A_DIM( SACp_inl_3122_rn) = 2;
  const int SAC_ND_A_SHAPE( SACp_inl_3122_rn, 0) = 8;
  const int SAC_ND_A_SHAPE( SACp_inl_3122_rn, 1) = 2;

  /*
   * ND_KS_DECL_ARRAY( int, SACp_inl_3075__flat_81_iv, 1, 2)
   */
  int *SACp_inl_3075__flat_81_iv;
  int SAC_ND_A_RC( SACp_inl_3075__flat_81_iv);
  const int SAC_ND_A_SIZE( SACp_inl_3075__flat_81_iv) = 2;
  const int SAC_ND_A_DIM( SACp_inl_3075__flat_81_iv) = 1;
  const int SAC_ND_A_SHAPE( SACp_inl_3075__flat_81_iv, 0) = 2;

  int SACp_inl_3074__type_403; 
  int SACp_inl_3073__type_404; 
  int SACp_inl_3068__flat_84; 
  int SACp_inl_3067__flat_83_16_2__; 
  double SACp_inl_3066__flat_82; 
  /*
   * ND_KS_DECL_ARRAY( double, SACp_inl_3065_rn, 2, 8, 2)
   */
  double *SACp_inl_3065_rn;
  int SAC_ND_A_RC( SACp_inl_3065_rn);
  const int SAC_ND_A_SIZE( SACp_inl_3065_rn) = 8*2;
  const int SAC_ND_A_DIM( SACp_inl_3065_rn) = 2;
  const int SAC_ND_A_SHAPE( SACp_inl_3065_rn, 0) = 8;
  const int SAC_ND_A_SHAPE( SACp_inl_3065_rn, 1) = 2;

  int SACp_inl_3143__flat_83__SSA_1_8_2__; 
  double SACp_inl_3142__flat_82__SSA_1; 
  int SACp_inl_3151__flat_81_iv__SSA_2_8_2__; 
  int SACp_inl_3143__flat_83__SSA_2_8_2__; 
  double SACp_inl_3142__flat_82__SSA_2; 
  int SACp_inl_3151__flat_81_iv__SSA_3_8_2__; 
  int SACp_inl_3143__flat_83__SSA_3_8_2__; 
  double SACp_inl_3142__flat_82__SSA_3; 
  double SACp_inl_3142__flat_82__SSA_4; 
  double SACp_inl_3142__flat_82__SSA_5; 
  int SACp_inl_3151__flat_81_iv__SSA_6_8_2__; 
  double SACp_inl_3142__flat_82__SSA_6; 
  int SACp_inl_3151__flat_81_iv__SSA_7_8_2__; 
  double SACp_inl_3142__flat_82__SSA_7; 
  /*
   * ND_KS_DECL_ARRAY( double, SACp_inl_3141_rn__SSA_8, 2, 4, 2)
   */
  double *SACp_inl_3141_rn__SSA_8;
  int SAC_ND_A_RC( SACp_inl_3141_rn__SSA_8);
  const int SAC_ND_A_SIZE( SACp_inl_3141_rn__SSA_8) = 4*2;
  const int SAC_ND_A_DIM( SACp_inl_3141_rn__SSA_8) = 2;
  const int SAC_ND_A_SHAPE( SACp_inl_3141_rn__SSA_8, 0) = 4;
  const int SAC_ND_A_SHAPE( SACp_inl_3141_rn__SSA_8, 1) = 2;

  int SACp_inl_3334__type_467__SSA_5_8_2__; 
  int SACp_inl_3170__type_467__SSA_13_8_2__; 
  double SACp_inl_3169__type_466__SSA_21; 
  double SACp_inl_3184__type_466__SSA_21; 
  double SACp_inl_3210__flat_34__SSA_10; 
  double SACp_inl_3169__type_466__SSA_22; 
  double SACp_inl_3184__type_466__SSA_22; 
  double SACp_inl_3207__flat_31__SSA_10; 
  double SACp_inl_3206__flat_30__SSA_10; 
  double SACp_inl_3348__type_466__SSA_5; 
  double SACp_inl_3366__flat_12__SSA_2; 
  int SACp_inl_3334__type_467__SSA_8_8_2__; 
  double SACp_inl_3169__type_466__SSA_27; 
  int SACp_inl_3185__type_467__SSA_16_8_2__; 
  double SACp_inl_3184__type_466__SSA_27; 
  double SACp_inl_3169__type_466__SSA_28; 
  double SACp_inl_3184__type_466__SSA_28; 
  double SACp_inl_3203__flat_27__SSA_13; 
  double SACp_inl_3200__flat_24__SSA_13; 
  double SACp_esd_6044__SSA_6; 
  double SACp_inl_3199__flat_23__SSA_13; 
  double SACp_inl_3348__type_466__SSA_8; 
  double SACp_inl_3363__flat_9__SSA_3; 
  int SACp_inl_3259__type_472__SSA_1; 
  int SACp_inl_3266__type_467__SSA_5_8_2__; 
  int SACp_inl_3170__type_467__SSA_17_8_2__; 
  double SACp_inl_3169__type_466__SSA_29; 
  double SACp_inl_3184__type_466__SSA_29; 
  double SACp_inl_3210__flat_34__SSA_14; 
  double SACp_inl_3169__type_466__SSA_30; 
  double SACp_inl_3184__type_466__SSA_30; 
  double SACp_inl_3207__flat_31__SSA_14; 
  double SACp_inl_3206__flat_30__SSA_14; 
  double SACp_inl_3280__type_466__SSA_5; 
  double SACp_esd_6040__SSA_1; 
  double SACp_inl_3298__flat_19__SSA_2; 
  int SACp_inl_3259__type_472__SSA_2; 
  int SACp_inl_3266__type_467__SSA_8_8_2__; 
  double SACp_inl_3169__type_466__SSA_35; 
  int SACp_inl_3185__type_467__SSA_20_8_2__; 
  double SACp_inl_3184__type_466__SSA_35; 
  double SACp_inl_3169__type_466__SSA_36; 
  double SACp_inl_3184__type_466__SSA_36; 
  double SACp_inl_3203__flat_27__SSA_17; 
  double SACp_inl_3200__flat_24__SSA_17; 
  double SACp_esd_6044__SSA_8; 
  double SACp_inl_3199__flat_23__SSA_17; 
  double SACp_inl_3280__type_466__SSA_8; 
  double SACp_esd_6041__SSA_1; 
  double SACp_inl_3295__flat_16__SSA_3; 

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

  SAC_ND_ALLOC_ARRAY( double, SACp_inl_3065_rn, 1)
  SAC_PF_BEGIN_WITH( genarray)
    /*
     * WL_BEGIN__OFFSET( SACp_inl_3065_rn, 2, SACp_inl_3075__flat_81_iv, 2)
     */
    { int SAC_WL_OFFSET( SACp_inl_3065_rn);
      int SAC_WL_MT_SCHEDULE_START( 0);
      int SAC_WL_MT_SCHEDULE_STOP( 0);
      int SAC_WL_MT_SCHEDULE_START( 1);
      int SAC_WL_MT_SCHEDULE_STOP( 1);
      int SAC_i;
      int SAC_WL_SHAPE_FACTOR( SACp_inl_3065_rn, 0) = 1 * SAC_ND_A_SHAPE( SACp_inl_3065_rn, 1);
      int SAC_WL_SHAPE_FACTOR( SACp_inl_3065_rn, 1) = 1;

      /*
       * MT_SCHEDULER_BEGIN( 0, 2, 0, 0, 8, 2)
       */
      SAC_WL_MT_SCHEDULE_START( 0) = 0;
      SAC_WL_MT_SCHEDULE_STOP( 0) = 8;
      SAC_WL_MT_SCHEDULE_START( 1) = 0;
      SAC_WL_MT_SCHEDULE_STOP( 1) = 2;

      /*
       * WL_INIT_OFFSET( SACp_inl_3065_rn, 2, SACp_inl_3075__flat_81_iv, 2)
       */
      SAC_WL_OFFSET( SACp_inl_3065_rn)
        = SAC_WL_MT_SCHEDULE_START( 0) * SAC_WL_SHAPE_FACTOR( SACp_inl_3065_rn, 0)
        + SAC_WL_MT_SCHEDULE_START( 1) * SAC_WL_SHAPE_FACTOR( SACp_inl_3065_rn, 1);

      SAC_WL_STRIDE_LOOP0_BEGIN( 0, SACp_inl_3075__flat_81_iv, SACp_inl_3074__type_403, 0, 8, 1)
        SAC_WL_GRID_UNROLL_BEGIN( 0, SACp_inl_3075__flat_81_iv, SACp_inl_3074__type_403, 0, 1)
          SAC_WL_STRIDE_LOOP0_BEGIN( 1, SACp_inl_3075__flat_81_iv, SACp_inl_3073__type_404, 0, 2, 1)
            SAC_WL_GRID_UNROLL_BEGIN( 1, SACp_inl_3075__flat_81_iv, SACp_inl_3073__type_404, 0, 1)
              SACp_inl_3068__flat_84 = (2 * SACp_inl_3074__type_403); 
              SACp_inl_3067__flat_83_16_2__ = ((SACp_inl_3068__flat_84 * 2) + SACp_inl_3073__type_404); 
              SAC_ND_IDX_SEL_S( SACp_inl_3067__flat_83_16_2__, SACl_v, SACp_inl_3066__flat_82)
              /*
               * WL_ASSIGN( SACp_inl_3066__flat_82, 0, SACp_inl_3065_rn, 2, SACp_inl_3075__flat_81_iv, 2, SACp_inl_3074__type_403, SACp_inl_3073__type_404)
               */
              SAC_TR_WL_PRINT( ("index vector [%d, %d] (== offset %d) -- offset %d -- assign", SACp_inl_3074__type_403, SACp_inl_3073__type_404, ( SAC_ND_A_SHAPE( SACp_inl_3065_rn, 1) * SACp_inl_3074__type_403 + SACp_inl_3073__type_404 ), SAC_WL_OFFSET( SACp_inl_3065_rn)));
              SAC_ASSURE_TYPE( (SAC_ND_A_DIM( SACp_inl_3066__flat_82) == (SAC_ND_A_DIM( SACp_inl_3065_rn) - 2)), ("WL expression with illegal dimension found!"));
              SAC_ASSURE_TYPE( (SAC_ND_A_SIZE( SACp_inl_3066__flat_82) == SAC_WL_SHAPE_FACTOR( SACp_inl_3065_rn, 1)), ("WL expression with illegal size found!"));
              SAC_ND_WRITE_ARRAY( SACp_inl_3065_rn, SAC_WL_OFFSET( SACp_inl_3065_rn)) = SACp_inl_3066__flat_82;
              SAC_WL_OFFSET( SACp_inl_3065_rn)++;

            SAC_WL_GRID_UNROLL_END( 1, SACp_inl_3075__flat_81_iv, SACp_inl_3073__type_404, 0, 1)
          SAC_WL_STRIDE_LOOP_END( 1, SACp_inl_3075__flat_81_iv, SACp_inl_3073__type_404, 0, 2, 1)
        SAC_WL_GRID_UNROLL_END( 0, SACp_inl_3075__flat_81_iv, SACp_inl_3074__type_403, 0, 1)
      SAC_WL_STRIDE_LOOP_END( 0, SACp_inl_3075__flat_81_iv, SACp_inl_3074__type_403, 0, 8, 1)
      /*
       * MT_SCHEDULER_END( 0, 2, 0, 0, 8, 2)
       */


      /*
       * WL_END__OFFSET( SACp_inl_3065_rn, 2, SACp_inl_3075__flat_81_iv, 2)
       */
    }

  SAC_PF_END_WITH( genarray)
  SACp_inl_5991__flat_404_16_2__ = ((1 * 2) + 0); 
  SAC_ND_ALLOC_ARRAY( double, SACp_inl_3122_rn, 1)
  SAC_PF_BEGIN_WITH( genarray)
    /*
     * WL_BEGIN__OFFSET( SACp_inl_3122_rn, 2, SACp_inl_3132__flat_81_iv, 2)
     */
    { int SAC_WL_OFFSET( SACp_inl_3122_rn);
      int SAC_WL_MT_SCHEDULE_START( 0);
      int SAC_WL_MT_SCHEDULE_STOP( 0);
      int SAC_WL_MT_SCHEDULE_START( 1);
      int SAC_WL_MT_SCHEDULE_STOP( 1);
      int SAC_i;
      int SAC_WL_SHAPE_FACTOR( SACp_inl_3122_rn, 0) = 1 * SAC_ND_A_SHAPE( SACp_inl_3122_rn, 1);
      int SAC_WL_SHAPE_FACTOR( SACp_inl_3122_rn, 1) = 1;

      /*
       * MT_SCHEDULER_BEGIN( 0, 2, 0, 0, 8, 2)
       */
      SAC_WL_MT_SCHEDULE_START( 0) = 0;
      SAC_WL_MT_SCHEDULE_STOP( 0) = 8;
      SAC_WL_MT_SCHEDULE_START( 1) = 0;
      SAC_WL_MT_SCHEDULE_STOP( 1) = 2;

      /*
       * WL_INIT_OFFSET( SACp_inl_3122_rn, 2, SACp_inl_3132__flat_81_iv, 2)
       */
      SAC_WL_OFFSET( SACp_inl_3122_rn)
        = SAC_WL_MT_SCHEDULE_START( 0) * SAC_WL_SHAPE_FACTOR( SACp_inl_3122_rn, 0)
        + SAC_WL_MT_SCHEDULE_START( 1) * SAC_WL_SHAPE_FACTOR( SACp_inl_3122_rn, 1);

      SAC_WL_STRIDE_LOOP0_BEGIN( 0, SACp_inl_3132__flat_81_iv, SACp_inl_3131__type_406, 0, 8, 1)
        SAC_WL_GRID_UNROLL_BEGIN( 0, SACp_inl_3132__flat_81_iv, SACp_inl_3131__type_406, 0, 1)
          SAC_WL_STRIDE_LOOP0_BEGIN( 1, SACp_inl_3132__flat_81_iv, SACp_inl_3130__type_407, 0, 2, 1)
            SAC_WL_GRID_UNROLL_BEGIN( 1, SACp_inl_3132__flat_81_iv, SACp_inl_3130__type_407, 0, 1)
              SACp_inl_3125__flat_84 = (2 * SACp_inl_3131__type_406); 
              SACp_inl_3124__flat_83_16_2__ = ((SACp_inl_3125__flat_84 * 2) + SACp_inl_3130__type_407); 
              SACp_inl_5990__flat_403_16_2__ = (SACp_inl_5991__flat_404_16_2__ + SACp_inl_3124__flat_83_16_2__); 
              SAC_ND_IDX_SEL_S( SACp_inl_5990__flat_403_16_2__, SACl_v, SACp_inl_6012_array_elem__SSA_1)
              /*
               * WL_ASSIGN( SACp_inl_6012_array_elem__SSA_1, 0, SACp_inl_3122_rn, 2, SACp_inl_3132__flat_81_iv, 2, SACp_inl_3131__type_406, SACp_inl_3130__type_407)
               */
              SAC_TR_WL_PRINT( ("index vector [%d, %d] (== offset %d) -- offset %d -- assign", SACp_inl_3131__type_406, SACp_inl_3130__type_407, ( SAC_ND_A_SHAPE( SACp_inl_3122_rn, 1) * SACp_inl_3131__type_406 + SACp_inl_3130__type_407 ), SAC_WL_OFFSET( SACp_inl_3122_rn)));
              SAC_ASSURE_TYPE( (SAC_ND_A_DIM( SACp_inl_6012_array_elem__SSA_1) == (SAC_ND_A_DIM( SACp_inl_3122_rn) - 2)), ("WL expression with illegal dimension found!"));
              SAC_ASSURE_TYPE( (SAC_ND_A_SIZE( SACp_inl_6012_array_elem__SSA_1) == SAC_WL_SHAPE_FACTOR( SACp_inl_3122_rn, 1)), ("WL expression with illegal size found!"));
              SAC_ND_WRITE_ARRAY( SACp_inl_3122_rn, SAC_WL_OFFSET( SACp_inl_3122_rn)) = SACp_inl_6012_array_elem__SSA_1;
              SAC_WL_OFFSET( SACp_inl_3122_rn)++;

            SAC_WL_GRID_UNROLL_END( 1, SACp_inl_3132__flat_81_iv, SACp_inl_3130__type_407, 0, 1)
          SAC_WL_STRIDE_LOOP_END( 1, SACp_inl_3132__flat_81_iv, SACp_inl_3130__type_407, 0, 2, 1)
        SAC_WL_GRID_UNROLL_END( 0, SACp_inl_3132__flat_81_iv, SACp_inl_3131__type_406, 0, 1)
      SAC_WL_STRIDE_LOOP_END( 0, SACp_inl_3132__flat_81_iv, SACp_inl_3131__type_406, 0, 8, 1)
      /*
       * MT_SCHEDULER_END( 0, 2, 0, 0, 8, 2)
       */


      /*
       * WL_END__OFFSET( SACp_inl_3122_rn, 2, SACp_inl_3132__flat_81_iv, 2)
       */
    }

  SAC_PF_END_WITH( genarray)
  SAC_ND_DEC_RC_FREE_ARRAY( SACl_v, 1)
  SACp_inl_3143__flat_83_8_2__ = ((6 * 2) + 1); 
  SAC_ND_IDX_SEL_S( SACp_inl_3143__flat_83_8_2__, SACl_rofu, SACp_inl_3142__flat_82)
  SACp_inl_3143__flat_83__SSA_1_8_2__ = ((6 * 2) + 0); 
  SAC_ND_IDX_SEL_S( SACp_inl_3143__flat_83__SSA_1_8_2__, SACl_rofu, SACp_inl_3142__flat_82__SSA_1)
  SACp_inl_3151__flat_81_iv__SSA_2_8_2__ = ((2 * 2) + 1); 
  SACp_inl_3143__flat_83__SSA_2_8_2__ = ((4 * 2) + 1); 
  SAC_ND_IDX_SEL_S( SACp_inl_3143__flat_83__SSA_2_8_2__, SACl_rofu, SACp_inl_3142__flat_82__SSA_2)
  SACp_inl_3151__flat_81_iv__SSA_3_8_2__ = ((2 * 2) + 0); 
  SACp_inl_3143__flat_83__SSA_3_8_2__ = ((4 * 2) + 0); 
  SAC_ND_IDX_SEL_S( SACp_inl_3143__flat_83__SSA_3_8_2__, SACl_rofu, SACp_inl_3142__flat_82__SSA_3)
  SAC_ND_IDX_SEL_S( SACp_inl_3151__flat_81_iv__SSA_2_8_2__, SACl_rofu, SACp_inl_3142__flat_82__SSA_4)
  SAC_ND_IDX_SEL_S( SACp_inl_3151__flat_81_iv__SSA_3_8_2__, SACl_rofu, SACp_inl_3142__flat_82__SSA_5)
  SACp_inl_3151__flat_81_iv__SSA_6_8_2__ = ((0 * 2) + 1); 
  SAC_ND_IDX_SEL_S( SACp_inl_3151__flat_81_iv__SSA_6_8_2__, SACl_rofu, SACp_inl_3142__flat_82__SSA_6)
  SACp_inl_3151__flat_81_iv__SSA_7_8_2__ = ((0 * 2) + 0); 
  SAC_ND_IDX_SEL_S( SACp_inl_3151__flat_81_iv__SSA_7_8_2__, SACl_rofu, SACp_inl_3142__flat_82__SSA_7)
  SAC_ND_ALLOC_ARRAY( double, SACp_inl_3141_rn__SSA_8, 1)
  /*
   * ND_CREATE_CONST_ARRAY_S( SACp_inl_3141_rn__SSA_8, 8, SACp_inl_3142__flat_82__SSA_7, SACp_inl_3142__flat_82__SSA_6, SACp_inl_3142__flat_82__SSA_5, SACp_inl_3142__flat_82__SSA_4, SACp_inl_3142__flat_82__SSA_3, SACp_inl_3142__flat_82__SSA_2, SACp_inl_3142__flat_82__SSA_1, SACp_inl_3142__flat_82)
   */
  SAC_ND_WRITE_ARRAY( SACp_inl_3141_rn__SSA_8, 0) = SACp_inl_3142__flat_82__SSA_7;
  SAC_ND_WRITE_ARRAY( SACp_inl_3141_rn__SSA_8, 1) = SACp_inl_3142__flat_82__SSA_6;
  SAC_ND_WRITE_ARRAY( SACp_inl_3141_rn__SSA_8, 2) = SACp_inl_3142__flat_82__SSA_5;
  SAC_ND_WRITE_ARRAY( SACp_inl_3141_rn__SSA_8, 3) = SACp_inl_3142__flat_82__SSA_4;
  SAC_ND_WRITE_ARRAY( SACp_inl_3141_rn__SSA_8, 4) = SACp_inl_3142__flat_82__SSA_3;
  SAC_ND_WRITE_ARRAY( SACp_inl_3141_rn__SSA_8, 5) = SACp_inl_3142__flat_82__SSA_2;
  SAC_ND_WRITE_ARRAY( SACp_inl_3141_rn__SSA_8, 6) = SACp_inl_3142__flat_82__SSA_1;
  SAC_ND_WRITE_ARRAY( SACp_inl_3141_rn__SSA_8, 7) = SACp_inl_3142__flat_82;

  SAC_ND_INC_RC( SACp_inl_3141_rn__SSA_8, 1)
  /*
   * ND_FUN_AP( SACf_FFT1d__d___MAIN__cpx_8___MAIN__cpx_4, , 4, out_rc, SACl_fft_left, in, SACl_dir, in_rc, SACp_inl_3065_rn, in_rc, SACp_inl_3141_rn__SSA_8)
   */
  SACf_FFT1d__d___MAIN__cpx_8___MAIN__cpx_4( SAC_ND_ARG_out_rc( SACl_fft_left), SAC_ND_ARG_in( SACl_dir), SAC_ND_ARG_in_rc( SACp_inl_3065_rn), SAC_ND_ARG_in_rc( SACp_inl_3141_rn__SSA_8));

  /*
   * ND_FUN_AP( SACf_FFT1d__d___MAIN__cpx_8___MAIN__cpx_4, , 4, out_rc, SACl_fft_right, in, SACl_dir, in_rc, SACp_inl_3122_rn, in_rc, SACp_inl_3141_rn__SSA_8)
   */
  SACf_FFT1d__d___MAIN__cpx_8___MAIN__cpx_4( SAC_ND_ARG_out_rc( SACl_fft_right), SAC_ND_ARG_in( SACl_dir), SAC_ND_ARG_in_rc( SACp_inl_3122_rn), SAC_ND_ARG_in_rc( SACp_inl_3141_rn__SSA_8));

  SAC_ND_ALLOC_ARRAY( double, SACp_inl_3392__type_482, 1)
  SAC_PF_BEGIN_WITH( genarray)
    /*
     * WL_BEGIN__OFFSET( SACp_inl_3392__type_482, 2, SACp_inl_3398__type_481, 2)
     */
    { int SAC_WL_OFFSET( SACp_inl_3392__type_482);
      int SAC_WL_MT_SCHEDULE_START( 0);
      int SAC_WL_MT_SCHEDULE_STOP( 0);
      int SAC_WL_MT_SCHEDULE_START( 1);
      int SAC_WL_MT_SCHEDULE_STOP( 1);
      int SAC_i;
      int SAC_WL_SHAPE_FACTOR( SACp_inl_3392__type_482, 0) = 1 * SAC_ND_A_SHAPE( SACp_inl_3392__type_482, 1);
      int SAC_WL_SHAPE_FACTOR( SACp_inl_3392__type_482, 1) = 1;

      /*
       * MT_SCHEDULER_BEGIN( 0, 2, 0, 0, 16, 2)
       */
      SAC_WL_MT_SCHEDULE_START( 0) = 0;
      SAC_WL_MT_SCHEDULE_STOP( 0) = 16;
      SAC_WL_MT_SCHEDULE_START( 1) = 0;
      SAC_WL_MT_SCHEDULE_STOP( 1) = 2;

      /*
       * WL_INIT_OFFSET( SACp_inl_3392__type_482, 2, SACp_inl_3398__type_481, 2)
       */
      SAC_WL_OFFSET( SACp_inl_3392__type_482)
        = SAC_WL_MT_SCHEDULE_START( 0) * SAC_WL_SHAPE_FACTOR( SACp_inl_3392__type_482, 0)
        + SAC_WL_MT_SCHEDULE_START( 1) * SAC_WL_SHAPE_FACTOR( SACp_inl_3392__type_482, 1);

      SAC_WL_STRIDE_LOOP0_BEGIN( 0, SACp_inl_3398__type_481, SACp_inl_3397__type_483, 0, 8, 1)
        SAC_WL_GRID_UNROLL_BEGIN( 0, SACp_inl_3398__type_481, SACp_inl_3397__type_483, 0, 1)
          SAC_WL_STRIDE_LOOP0_BEGIN( 1, SACp_inl_3398__type_481, SACp_inl_3396__type_484, 0, 1, 1)
            SAC_WL_GRID_UNROLL_BEGIN( 1, SACp_inl_3398__type_481, SACp_inl_3396__type_484, 0, 1)
              SACp_inl_3334__type_467__SSA_8_8_2__ = ((SACp_inl_3397__type_483 * 2) + 0); 
              SAC_ND_IDX_SEL_S( SACp_inl_3334__type_467__SSA_8_8_2__, SACl_rofu, SACp_inl_3169__type_466__SSA_27)
              SACp_inl_3185__type_467__SSA_16_8_2__ = ((SACp_inl_3397__type_483 * 2) + 1); 
              SAC_ND_IDX_SEL_S( SACp_inl_3185__type_467__SSA_16_8_2__, SACl_fft_right, SACp_inl_3184__type_466__SSA_27)
              SAC_ND_IDX_SEL_S( SACp_inl_3185__type_467__SSA_16_8_2__, SACl_rofu, SACp_inl_3169__type_466__SSA_28)
              SAC_ND_IDX_SEL_S( SACp_inl_3334__type_467__SSA_8_8_2__, SACl_fft_right, SACp_inl_3184__type_466__SSA_28)
              SACp_inl_3203__flat_27__SSA_13 = (SACp_inl_3184__type_466__SSA_27 * SACp_inl_3169__type_466__SSA_28); 
              SACp_inl_3200__flat_24__SSA_13 = (SACp_inl_3184__type_466__SSA_28 * SACp_inl_3169__type_466__SSA_27); 
              SACp_inl_3199__flat_23__SSA_13 = (SACp_inl_3200__flat_24__SSA_13 - SACp_inl_3203__flat_27__SSA_13); 
              SAC_ND_IDX_SEL_S( SACp_inl_3334__type_467__SSA_8_8_2__, SACl_fft_left, SACp_inl_3348__type_466__SSA_8)
              SACp_inl_3363__flat_9__SSA_3 = (SACp_inl_3348__type_466__SSA_8 + SACp_inl_3199__flat_23__SSA_13); 
              /*
               * WL_ASSIGN( SACp_inl_3363__flat_9__SSA_3, 0, SACp_inl_3392__type_482, 2, SACp_inl_3398__type_481, 2, SACp_inl_3397__type_483, SACp_inl_3396__type_484)
               */
              SAC_TR_WL_PRINT( ("index vector [%d, %d] (== offset %d) -- offset %d -- assign", SACp_inl_3397__type_483, SACp_inl_3396__type_484, ( SAC_ND_A_SHAPE( SACp_inl_3392__type_482, 1) * SACp_inl_3397__type_483 + SACp_inl_3396__type_484 ), SAC_WL_OFFSET( SACp_inl_3392__type_482)));
              SAC_ASSURE_TYPE( (SAC_ND_A_DIM( SACp_inl_3363__flat_9__SSA_3) == (SAC_ND_A_DIM( SACp_inl_3392__type_482) - 2)), ("WL expression with illegal dimension found!"));
              SAC_ASSURE_TYPE( (SAC_ND_A_SIZE( SACp_inl_3363__flat_9__SSA_3) == SAC_WL_SHAPE_FACTOR( SACp_inl_3392__type_482, 1)), ("WL expression with illegal size found!"));
              SAC_ND_WRITE_ARRAY( SACp_inl_3392__type_482, SAC_WL_OFFSET( SACp_inl_3392__type_482)) = SACp_inl_3363__flat_9__SSA_3;
              SAC_WL_OFFSET( SACp_inl_3392__type_482)++;

            SAC_WL_GRID_UNROLL_END( 1, SACp_inl_3398__type_481, SACp_inl_3396__type_484, 0, 1)
          SAC_WL_STRIDE_LOOP_END( 1, SACp_inl_3398__type_481, SACp_inl_3396__type_484, 0, 1, 1)
          SAC_WL_STRIDE_LOOP0_BEGIN( 1, SACp_inl_3398__type_481, SACp_inl_3396__type_484, 1, 2, 1)
            SAC_WL_GRID_UNROLL_BEGIN( 1, SACp_inl_3398__type_481, SACp_inl_3396__type_484, 0, 1)
              SACp_inl_3334__type_467__SSA_5_8_2__ = ((SACp_inl_3397__type_483 * 2) + 1); 
              SACp_inl_3170__type_467__SSA_13_8_2__ = ((SACp_inl_3397__type_483 * 2) + 0); 
              SAC_ND_IDX_SEL_S( SACp_inl_3170__type_467__SSA_13_8_2__, SACl_rofu, SACp_inl_3169__type_466__SSA_21)
              SAC_ND_IDX_SEL_S( SACp_inl_3334__type_467__SSA_5_8_2__, SACl_fft_right, SACp_inl_3184__type_466__SSA_21)
              SACp_inl_3210__flat_34__SSA_10 = (SACp_inl_3184__type_466__SSA_21 * SACp_inl_3169__type_466__SSA_21); 
              SAC_ND_IDX_SEL_S( SACp_inl_3334__type_467__SSA_5_8_2__, SACl_rofu, SACp_inl_3169__type_466__SSA_22)
              SAC_ND_IDX_SEL_S( SACp_inl_3170__type_467__SSA_13_8_2__, SACl_fft_right, SACp_inl_3184__type_466__SSA_22)
              SACp_inl_3207__flat_31__SSA_10 = (SACp_inl_3184__type_466__SSA_22 * SACp_inl_3169__type_466__SSA_22); 
              SACp_inl_3206__flat_30__SSA_10 = (SACp_inl_3207__flat_31__SSA_10 + SACp_inl_3210__flat_34__SSA_10); 
              SAC_ND_IDX_SEL_S( SACp_inl_3334__type_467__SSA_5_8_2__, SACl_fft_left, SACp_inl_3348__type_466__SSA_5)
              SACp_inl_3366__flat_12__SSA_2 = (SACp_inl_3348__type_466__SSA_5 + SACp_inl_3206__flat_30__SSA_10); 
              /*
               * WL_ASSIGN( SACp_inl_3366__flat_12__SSA_2, 0, SACp_inl_3392__type_482, 2, SACp_inl_3398__type_481, 2, SACp_inl_3397__type_483, SACp_inl_3396__type_484)
               */
              SAC_TR_WL_PRINT( ("index vector [%d, %d] (== offset %d) -- offset %d -- assign", SACp_inl_3397__type_483, SACp_inl_3396__type_484, ( SAC_ND_A_SHAPE( SACp_inl_3392__type_482, 1) * SACp_inl_3397__type_483 + SACp_inl_3396__type_484 ), SAC_WL_OFFSET( SACp_inl_3392__type_482)));
              SAC_ASSURE_TYPE( (SAC_ND_A_DIM( SACp_inl_3366__flat_12__SSA_2) == (SAC_ND_A_DIM( SACp_inl_3392__type_482) - 2)), ("WL expression with illegal dimension found!"));
              SAC_ASSURE_TYPE( (SAC_ND_A_SIZE( SACp_inl_3366__flat_12__SSA_2) == SAC_WL_SHAPE_FACTOR( SACp_inl_3392__type_482, 1)), ("WL expression with illegal size found!"));
              SAC_ND_WRITE_ARRAY( SACp_inl_3392__type_482, SAC_WL_OFFSET( SACp_inl_3392__type_482)) = SACp_inl_3366__flat_12__SSA_2;
              SAC_WL_OFFSET( SACp_inl_3392__type_482)++;

            SAC_WL_GRID_UNROLL_END( 1, SACp_inl_3398__type_481, SACp_inl_3396__type_484, 0, 1)
          SAC_WL_STRIDE_LOOP_END( 1, SACp_inl_3398__type_481, SACp_inl_3396__type_484, 1, 2, 1)
        SAC_WL_GRID_UNROLL_END( 0, SACp_inl_3398__type_481, SACp_inl_3397__type_483, 0, 1)
      SAC_WL_STRIDE_LOOP_END( 0, SACp_inl_3398__type_481, SACp_inl_3397__type_483, 0, 8, 1)
      SAC_WL_STRIDE_LOOP0_BEGIN( 0, SACp_inl_3398__type_481, SACp_inl_3397__type_483, 8, 16, 1)
        SAC_WL_GRID_UNROLL_BEGIN( 0, SACp_inl_3398__type_481, SACp_inl_3397__type_483, 0, 1)
          SAC_WL_STRIDE_LOOP0_BEGIN( 1, SACp_inl_3398__type_481, SACp_inl_3396__type_484, 0, 1, 1)
            SAC_WL_GRID_UNROLL_BEGIN( 1, SACp_inl_3398__type_481, SACp_inl_3396__type_484, 0, 1)
              SACp_inl_3259__type_472__SSA_2 = (SACp_inl_3397__type_483 + -8); 
              SACp_inl_3266__type_467__SSA_8_8_2__ = ((SACp_inl_3259__type_472__SSA_2 * 2) + 0); 
              SAC_ND_IDX_SEL_S( SACp_inl_3266__type_467__SSA_8_8_2__, SACl_rofu, SACp_inl_3169__type_466__SSA_35)
              SACp_inl_3185__type_467__SSA_20_8_2__ = ((SACp_inl_3259__type_472__SSA_2 * 2) + 1); 
              SAC_ND_IDX_SEL_S( SACp_inl_3185__type_467__SSA_20_8_2__, SACl_fft_right, SACp_inl_3184__type_466__SSA_35)
              SAC_ND_IDX_SEL_S( SACp_inl_3185__type_467__SSA_20_8_2__, SACl_rofu, SACp_inl_3169__type_466__SSA_36)
              SAC_ND_IDX_SEL_S( SACp_inl_3266__type_467__SSA_8_8_2__, SACl_fft_right, SACp_inl_3184__type_466__SSA_36)
              SACp_inl_3203__flat_27__SSA_17 = (SACp_inl_3184__type_466__SSA_35 * SACp_inl_3169__type_466__SSA_36); 
              SACp_inl_3200__flat_24__SSA_17 = (SACp_inl_3184__type_466__SSA_36 * SACp_inl_3169__type_466__SSA_35); 
              SACp_inl_3199__flat_23__SSA_17 = (SACp_inl_3200__flat_24__SSA_17 - SACp_inl_3203__flat_27__SSA_17); 
              SAC_ND_IDX_SEL_S( SACp_inl_3266__type_467__SSA_8_8_2__, SACl_fft_left, SACp_inl_3280__type_466__SSA_8)
              SACp_inl_3295__flat_16__SSA_3 = (SACp_inl_3280__type_466__SSA_8 - SACp_inl_3199__flat_23__SSA_17); 
              /*
               * WL_ASSIGN( SACp_inl_3295__flat_16__SSA_3, 0, SACp_inl_3392__type_482, 2, SACp_inl_3398__type_481, 2, SACp_inl_3397__type_483, SACp_inl_3396__type_484)
               */
              SAC_TR_WL_PRINT( ("index vector [%d, %d] (== offset %d) -- offset %d -- assign", SACp_inl_3397__type_483, SACp_inl_3396__type_484, ( SAC_ND_A_SHAPE( SACp_inl_3392__type_482, 1) * SACp_inl_3397__type_483 + SACp_inl_3396__type_484 ), SAC_WL_OFFSET( SACp_inl_3392__type_482)));
              SAC_ASSURE_TYPE( (SAC_ND_A_DIM( SACp_inl_3295__flat_16__SSA_3) == (SAC_ND_A_DIM( SACp_inl_3392__type_482) - 2)), ("WL expression with illegal dimension found!"));
              SAC_ASSURE_TYPE( (SAC_ND_A_SIZE( SACp_inl_3295__flat_16__SSA_3) == SAC_WL_SHAPE_FACTOR( SACp_inl_3392__type_482, 1)), ("WL expression with illegal size found!"));
              SAC_ND_WRITE_ARRAY( SACp_inl_3392__type_482, SAC_WL_OFFSET( SACp_inl_3392__type_482)) = SACp_inl_3295__flat_16__SSA_3;
              SAC_WL_OFFSET( SACp_inl_3392__type_482)++;

            SAC_WL_GRID_UNROLL_END( 1, SACp_inl_3398__type_481, SACp_inl_3396__type_484, 0, 1)
          SAC_WL_STRIDE_LOOP_END( 1, SACp_inl_3398__type_481, SACp_inl_3396__type_484, 0, 1, 1)
          SAC_WL_STRIDE_LOOP0_BEGIN( 1, SACp_inl_3398__type_481, SACp_inl_3396__type_484, 1, 2, 1)
            SAC_WL_GRID_UNROLL_BEGIN( 1, SACp_inl_3398__type_481, SACp_inl_3396__type_484, 0, 1)
              SACp_inl_3259__type_472__SSA_1 = (SACp_inl_3397__type_483 + -8); 
              SACp_inl_3266__type_467__SSA_5_8_2__ = ((SACp_inl_3259__type_472__SSA_1 * 2) + 1); 
              SACp_inl_3170__type_467__SSA_17_8_2__ = ((SACp_inl_3259__type_472__SSA_1 * 2) + 0); 
              SAC_ND_IDX_SEL_S( SACp_inl_3170__type_467__SSA_17_8_2__, SACl_rofu, SACp_inl_3169__type_466__SSA_29)
              SAC_ND_IDX_SEL_S( SACp_inl_3266__type_467__SSA_5_8_2__, SACl_fft_right, SACp_inl_3184__type_466__SSA_29)
              SACp_inl_3210__flat_34__SSA_14 = (SACp_inl_3184__type_466__SSA_29 * SACp_inl_3169__type_466__SSA_29); 
              SAC_ND_IDX_SEL_S( SACp_inl_3266__type_467__SSA_5_8_2__, SACl_rofu, SACp_inl_3169__type_466__SSA_30)
              SAC_ND_IDX_SEL_S( SACp_inl_3170__type_467__SSA_17_8_2__, SACl_fft_right, SACp_inl_3184__type_466__SSA_30)
              SACp_inl_3207__flat_31__SSA_14 = (SACp_inl_3184__type_466__SSA_30 * SACp_inl_3169__type_466__SSA_30); 
              SACp_inl_3206__flat_30__SSA_14 = (SACp_inl_3207__flat_31__SSA_14 + SACp_inl_3210__flat_34__SSA_14); 
              SAC_ND_IDX_SEL_S( SACp_inl_3266__type_467__SSA_5_8_2__, SACl_fft_left, SACp_inl_3280__type_466__SSA_5)
              SACp_inl_3298__flat_19__SSA_2 = (SACp_inl_3280__type_466__SSA_5 - SACp_inl_3206__flat_30__SSA_14); 
              /*
               * WL_ASSIGN( SACp_inl_3298__flat_19__SSA_2, 0, SACp_inl_3392__type_482, 2, SACp_inl_3398__type_481, 2, SACp_inl_3397__type_483, SACp_inl_3396__type_484)
               */
              SAC_TR_WL_PRINT( ("index vector [%d, %d] (== offset %d) -- offset %d -- assign", SACp_inl_3397__type_483, SACp_inl_3396__type_484, ( SAC_ND_A_SHAPE( SACp_inl_3392__type_482, 1) * SACp_inl_3397__type_483 + SACp_inl_3396__type_484 ), SAC_WL_OFFSET( SACp_inl_3392__type_482)));
              SAC_ASSURE_TYPE( (SAC_ND_A_DIM( SACp_inl_3298__flat_19__SSA_2) == (SAC_ND_A_DIM( SACp_inl_3392__type_482) - 2)), ("WL expression with illegal dimension found!"));
              SAC_ASSURE_TYPE( (SAC_ND_A_SIZE( SACp_inl_3298__flat_19__SSA_2) == SAC_WL_SHAPE_FACTOR( SACp_inl_3392__type_482, 1)), ("WL expression with illegal size found!"));
              SAC_ND_WRITE_ARRAY( SACp_inl_3392__type_482, SAC_WL_OFFSET( SACp_inl_3392__type_482)) = SACp_inl_3298__flat_19__SSA_2;
              SAC_WL_OFFSET( SACp_inl_3392__type_482)++;

            SAC_WL_GRID_UNROLL_END( 1, SACp_inl_3398__type_481, SACp_inl_3396__type_484, 0, 1)
          SAC_WL_STRIDE_LOOP_END( 1, SACp_inl_3398__type_481, SACp_inl_3396__type_484, 1, 2, 1)
        SAC_WL_GRID_UNROLL_END( 0, SACp_inl_3398__type_481, SACp_inl_3397__type_483, 0, 1)
      SAC_WL_STRIDE_LOOP_END( 0, SACp_inl_3398__type_481, SACp_inl_3397__type_483, 8, 16, 1)
      /*
       * MT_SCHEDULER_END( 0, 2, 0, 0, 16, 2)
       */


      /*
       * WL_END__OFFSET( SACp_inl_3392__type_482, 2, SACp_inl_3398__type_481, 2)
       */
    }

  SAC_PF_END_WITH( genarray)
  SAC_ND_DEC_RC_FREE_ARRAY( SACl_fft_left, 1)
  SAC_ND_DEC_RC_FREE_ARRAY( SACl_fft_right, 1)
  SAC_ND_DEC_RC_FREE_ARRAY( SACl_rofu, 1)
  /*
   * ND_FUN_RET( , 1, out_rc, SACp_inl_3392__type_482, SAC__arg_1)
   */
  SAC_ND_RET_out_rc( SACp_inl_3392__type_482, SAC__arg_1)
  return;
}

/*
 * ND_FUN_DEC( SACf_FFT1d__d___MAIN__cpx_32___MAIN__cpx_16, void, 4, out_rc, double *, SAC__arg_1, in, double, SACl_dir, in_rc, double *, SACl_v, in_rc, double *, SACl_rofu)
 */
void SACf_FFT1d__d___MAIN__cpx_32___MAIN__cpx_16( SAC_ND_PARAM_out_rc( double *, SAC__arg_1), SAC_ND_PARAM_in( double, SACl_dir), SAC_ND_PARAM_in_rc( double *, SACl_v), SAC_ND_PARAM_in_rc( double *, SACl_rofu))
{ 
  double SACp_inl_6106_array_elem__SSA_1; 
  int SACp_inl_6085__flat_404_32_2__; 
  int SACp_inl_6084__flat_403_32_2__; 
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
   * ND_KS_DECL_ARRAY( int, SACp_inl_3746__type_501, 1, 2)
   */
  int *SACp_inl_3746__type_501;
  int SAC_ND_A_RC( SACp_inl_3746__type_501);
  const int SAC_ND_A_SIZE( SACp_inl_3746__type_501) = 2;
  const int SAC_ND_A_DIM( SACp_inl_3746__type_501) = 1;
  const int SAC_ND_A_SHAPE( SACp_inl_3746__type_501, 0) = 2;

  int SACp_inl_3745__type_503; 
  int SACp_inl_3744__type_504; 
  /*
   * ND_KS_DECL_ARRAY( double, SACp_inl_3740__type_502, 2, 32, 2)
   */
  double *SACp_inl_3740__type_502;
  int SAC_ND_A_RC( SACp_inl_3740__type_502);
  const int SAC_ND_A_SIZE( SACp_inl_3740__type_502) = 32*2;
  const int SAC_ND_A_DIM( SACp_inl_3740__type_502) = 2;
  const int SAC_ND_A_SHAPE( SACp_inl_3740__type_502, 0) = 32;
  const int SAC_ND_A_SHAPE( SACp_inl_3740__type_502, 1) = 2;

  /*
   * ND_KS_DECL_ARRAY( int, SACp_inl_3499__flat_81_iv, 1, 2)
   */
  int *SACp_inl_3499__flat_81_iv;
  int SAC_ND_A_RC( SACp_inl_3499__flat_81_iv);
  const int SAC_ND_A_SIZE( SACp_inl_3499__flat_81_iv) = 2;
  const int SAC_ND_A_DIM( SACp_inl_3499__flat_81_iv) = 1;
  const int SAC_ND_A_SHAPE( SACp_inl_3499__flat_81_iv, 0) = 2;

  int SACp_inl_3498__type_400; 
  int SACp_inl_3497__type_401; 
  int SACp_inl_3492__flat_84; 
  int SACp_inl_3491__flat_83_16_2__; 
  double SACp_inl_3490__flat_82; 
  /*
   * ND_KS_DECL_ARRAY( double, SACp_inl_3489_rn, 2, 8, 2)
   */
  double *SACp_inl_3489_rn;
  int SAC_ND_A_RC( SACp_inl_3489_rn);
  const int SAC_ND_A_SIZE( SACp_inl_3489_rn) = 8*2;
  const int SAC_ND_A_DIM( SACp_inl_3489_rn) = 2;
  const int SAC_ND_A_SHAPE( SACp_inl_3489_rn, 0) = 8;
  const int SAC_ND_A_SHAPE( SACp_inl_3489_rn, 1) = 2;

  /*
   * ND_KS_DECL_ARRAY( int, SACp_inl_3480__flat_81_iv, 1, 2)
   */
  int *SACp_inl_3480__flat_81_iv;
  int SAC_ND_A_RC( SACp_inl_3480__flat_81_iv);
  const int SAC_ND_A_SIZE( SACp_inl_3480__flat_81_iv) = 2;
  const int SAC_ND_A_DIM( SACp_inl_3480__flat_81_iv) = 1;
  const int SAC_ND_A_SHAPE( SACp_inl_3480__flat_81_iv, 0) = 2;

  int SACp_inl_3479__type_397; 
  int SACp_inl_3478__type_398; 
  int SACp_inl_3473__flat_84; 
  int SACp_inl_3472__flat_83_32_2__; 
  /*
   * ND_KS_DECL_ARRAY( double, SACp_inl_3470_rn, 2, 16, 2)
   */
  double *SACp_inl_3470_rn;
  int SAC_ND_A_RC( SACp_inl_3470_rn);
  const int SAC_ND_A_SIZE( SACp_inl_3470_rn) = 16*2;
  const int SAC_ND_A_DIM( SACp_inl_3470_rn) = 2;
  const int SAC_ND_A_SHAPE( SACp_inl_3470_rn, 0) = 16;
  const int SAC_ND_A_SHAPE( SACp_inl_3470_rn, 1) = 2;

  /*
   * ND_KS_DECL_ARRAY( int, SACp_inl_3423__flat_81_iv, 1, 2)
   */
  int *SACp_inl_3423__flat_81_iv;
  int SAC_ND_A_RC( SACp_inl_3423__flat_81_iv);
  const int SAC_ND_A_SIZE( SACp_inl_3423__flat_81_iv) = 2;
  const int SAC_ND_A_DIM( SACp_inl_3423__flat_81_iv) = 1;
  const int SAC_ND_A_SHAPE( SACp_inl_3423__flat_81_iv, 0) = 2;

  int SACp_inl_3422__type_394; 
  int SACp_inl_3421__type_395; 
  int SACp_inl_3416__flat_84; 
  int SACp_inl_3415__flat_83_32_2__; 
  double SACp_inl_3414__flat_82; 
  /*
   * ND_KS_DECL_ARRAY( double, SACp_inl_3413_rn, 2, 16, 2)
   */
  double *SACp_inl_3413_rn;
  int SAC_ND_A_RC( SACp_inl_3413_rn);
  const int SAC_ND_A_SIZE( SACp_inl_3413_rn) = 16*2;
  const int SAC_ND_A_DIM( SACp_inl_3413_rn) = 2;
  const int SAC_ND_A_SHAPE( SACp_inl_3413_rn, 0) = 16;
  const int SAC_ND_A_SHAPE( SACp_inl_3413_rn, 1) = 2;

  int SACp_inl_3682__type_487__SSA_5_16_2__; 
  int SACp_inl_3518__type_487__SSA_13_16_2__; 
  double SACp_inl_3517__type_486__SSA_21; 
  double SACp_inl_3532__type_486__SSA_21; 
  double SACp_inl_3558__flat_34__SSA_10; 
  double SACp_inl_3517__type_486__SSA_22; 
  double SACp_inl_3532__type_486__SSA_22; 
  double SACp_inl_3555__flat_31__SSA_10; 
  double SACp_inl_3554__flat_30__SSA_10; 
  double SACp_inl_3696__type_486__SSA_5; 
  double SACp_inl_3714__flat_12__SSA_2; 
  int SACp_inl_3682__type_487__SSA_8_16_2__; 
  double SACp_inl_3517__type_486__SSA_27; 
  int SACp_inl_3533__type_487__SSA_16_16_2__; 
  double SACp_inl_3532__type_486__SSA_27; 
  double SACp_inl_3517__type_486__SSA_28; 
  double SACp_inl_3532__type_486__SSA_28; 
  double SACp_inl_3551__flat_27__SSA_13; 
  double SACp_inl_3548__flat_24__SSA_13; 
  double SACp_esd_6138__SSA_6; 
  double SACp_inl_3547__flat_23__SSA_13; 
  double SACp_inl_3696__type_486__SSA_8; 
  double SACp_inl_3711__flat_9__SSA_3; 
  int SACp_inl_3607__type_492__SSA_1; 
  int SACp_inl_3614__type_487__SSA_5_16_2__; 
  int SACp_inl_3518__type_487__SSA_17_16_2__; 
  double SACp_inl_3517__type_486__SSA_29; 
  double SACp_inl_3532__type_486__SSA_29; 
  double SACp_inl_3558__flat_34__SSA_14; 
  double SACp_inl_3517__type_486__SSA_30; 
  double SACp_inl_3532__type_486__SSA_30; 
  double SACp_inl_3555__flat_31__SSA_14; 
  double SACp_inl_3554__flat_30__SSA_14; 
  double SACp_inl_3628__type_486__SSA_5; 
  double SACp_esd_6134__SSA_1; 
  double SACp_inl_3646__flat_19__SSA_2; 
  int SACp_inl_3607__type_492__SSA_2; 
  int SACp_inl_3614__type_487__SSA_8_16_2__; 
  double SACp_inl_3517__type_486__SSA_35; 
  int SACp_inl_3533__type_487__SSA_20_16_2__; 
  double SACp_inl_3532__type_486__SSA_35; 
  double SACp_inl_3517__type_486__SSA_36; 
  double SACp_inl_3532__type_486__SSA_36; 
  double SACp_inl_3551__flat_27__SSA_17; 
  double SACp_inl_3548__flat_24__SSA_17; 
  double SACp_esd_6138__SSA_8; 
  double SACp_inl_3547__flat_23__SSA_17; 
  double SACp_inl_3628__type_486__SSA_8; 
  double SACp_esd_6135__SSA_1; 
  double SACp_inl_3643__flat_16__SSA_3; 

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

  SAC_ND_ALLOC_ARRAY( double, SACp_inl_3413_rn, 1)
  SAC_PF_BEGIN_WITH( genarray)
    /*
     * WL_BEGIN__OFFSET( SACp_inl_3413_rn, 2, SACp_inl_3423__flat_81_iv, 2)
     */
    { int SAC_WL_OFFSET( SACp_inl_3413_rn);
      int SAC_WL_MT_SCHEDULE_START( 0);
      int SAC_WL_MT_SCHEDULE_STOP( 0);
      int SAC_WL_MT_SCHEDULE_START( 1);
      int SAC_WL_MT_SCHEDULE_STOP( 1);
      int SAC_i;
      int SAC_WL_SHAPE_FACTOR( SACp_inl_3413_rn, 0) = 1 * SAC_ND_A_SHAPE( SACp_inl_3413_rn, 1);
      int SAC_WL_SHAPE_FACTOR( SACp_inl_3413_rn, 1) = 1;

      /*
       * MT_SCHEDULER_BEGIN( 0, 2, 0, 0, 16, 2)
       */
      SAC_WL_MT_SCHEDULE_START( 0) = 0;
      SAC_WL_MT_SCHEDULE_STOP( 0) = 16;
      SAC_WL_MT_SCHEDULE_START( 1) = 0;
      SAC_WL_MT_SCHEDULE_STOP( 1) = 2;

      /*
       * WL_INIT_OFFSET( SACp_inl_3413_rn, 2, SACp_inl_3423__flat_81_iv, 2)
       */
      SAC_WL_OFFSET( SACp_inl_3413_rn)
        = SAC_WL_MT_SCHEDULE_START( 0) * SAC_WL_SHAPE_FACTOR( SACp_inl_3413_rn, 0)
        + SAC_WL_MT_SCHEDULE_START( 1) * SAC_WL_SHAPE_FACTOR( SACp_inl_3413_rn, 1);

      SAC_WL_STRIDE_LOOP0_BEGIN( 0, SACp_inl_3423__flat_81_iv, SACp_inl_3422__type_394, 0, 16, 1)
        SAC_WL_GRID_UNROLL_BEGIN( 0, SACp_inl_3423__flat_81_iv, SACp_inl_3422__type_394, 0, 1)
          SAC_WL_STRIDE_LOOP0_BEGIN( 1, SACp_inl_3423__flat_81_iv, SACp_inl_3421__type_395, 0, 2, 1)
            SAC_WL_GRID_UNROLL_BEGIN( 1, SACp_inl_3423__flat_81_iv, SACp_inl_3421__type_395, 0, 1)
              SACp_inl_3416__flat_84 = (2 * SACp_inl_3422__type_394); 
              SACp_inl_3415__flat_83_32_2__ = ((SACp_inl_3416__flat_84 * 2) + SACp_inl_3421__type_395); 
              SAC_ND_IDX_SEL_S( SACp_inl_3415__flat_83_32_2__, SACl_v, SACp_inl_3414__flat_82)
              /*
               * WL_ASSIGN( SACp_inl_3414__flat_82, 0, SACp_inl_3413_rn, 2, SACp_inl_3423__flat_81_iv, 2, SACp_inl_3422__type_394, SACp_inl_3421__type_395)
               */
              SAC_TR_WL_PRINT( ("index vector [%d, %d] (== offset %d) -- offset %d -- assign", SACp_inl_3422__type_394, SACp_inl_3421__type_395, ( SAC_ND_A_SHAPE( SACp_inl_3413_rn, 1) * SACp_inl_3422__type_394 + SACp_inl_3421__type_395 ), SAC_WL_OFFSET( SACp_inl_3413_rn)));
              SAC_ASSURE_TYPE( (SAC_ND_A_DIM( SACp_inl_3414__flat_82) == (SAC_ND_A_DIM( SACp_inl_3413_rn) - 2)), ("WL expression with illegal dimension found!"));
              SAC_ASSURE_TYPE( (SAC_ND_A_SIZE( SACp_inl_3414__flat_82) == SAC_WL_SHAPE_FACTOR( SACp_inl_3413_rn, 1)), ("WL expression with illegal size found!"));
              SAC_ND_WRITE_ARRAY( SACp_inl_3413_rn, SAC_WL_OFFSET( SACp_inl_3413_rn)) = SACp_inl_3414__flat_82;
              SAC_WL_OFFSET( SACp_inl_3413_rn)++;

            SAC_WL_GRID_UNROLL_END( 1, SACp_inl_3423__flat_81_iv, SACp_inl_3421__type_395, 0, 1)
          SAC_WL_STRIDE_LOOP_END( 1, SACp_inl_3423__flat_81_iv, SACp_inl_3421__type_395, 0, 2, 1)
        SAC_WL_GRID_UNROLL_END( 0, SACp_inl_3423__flat_81_iv, SACp_inl_3422__type_394, 0, 1)
      SAC_WL_STRIDE_LOOP_END( 0, SACp_inl_3423__flat_81_iv, SACp_inl_3422__type_394, 0, 16, 1)
      /*
       * MT_SCHEDULER_END( 0, 2, 0, 0, 16, 2)
       */


      /*
       * WL_END__OFFSET( SACp_inl_3413_rn, 2, SACp_inl_3423__flat_81_iv, 2)
       */
    }

  SAC_PF_END_WITH( genarray)
  SACp_inl_6085__flat_404_32_2__ = ((1 * 2) + 0); 
  SAC_ND_ALLOC_ARRAY( double, SACp_inl_3470_rn, 1)
  SAC_PF_BEGIN_WITH( genarray)
    /*
     * WL_BEGIN__OFFSET( SACp_inl_3470_rn, 2, SACp_inl_3480__flat_81_iv, 2)
     */
    { int SAC_WL_OFFSET( SACp_inl_3470_rn);
      int SAC_WL_MT_SCHEDULE_START( 0);
      int SAC_WL_MT_SCHEDULE_STOP( 0);
      int SAC_WL_MT_SCHEDULE_START( 1);
      int SAC_WL_MT_SCHEDULE_STOP( 1);
      int SAC_i;
      int SAC_WL_SHAPE_FACTOR( SACp_inl_3470_rn, 0) = 1 * SAC_ND_A_SHAPE( SACp_inl_3470_rn, 1);
      int SAC_WL_SHAPE_FACTOR( SACp_inl_3470_rn, 1) = 1;

      /*
       * MT_SCHEDULER_BEGIN( 0, 2, 0, 0, 16, 2)
       */
      SAC_WL_MT_SCHEDULE_START( 0) = 0;
      SAC_WL_MT_SCHEDULE_STOP( 0) = 16;
      SAC_WL_MT_SCHEDULE_START( 1) = 0;
      SAC_WL_MT_SCHEDULE_STOP( 1) = 2;

      /*
       * WL_INIT_OFFSET( SACp_inl_3470_rn, 2, SACp_inl_3480__flat_81_iv, 2)
       */
      SAC_WL_OFFSET( SACp_inl_3470_rn)
        = SAC_WL_MT_SCHEDULE_START( 0) * SAC_WL_SHAPE_FACTOR( SACp_inl_3470_rn, 0)
        + SAC_WL_MT_SCHEDULE_START( 1) * SAC_WL_SHAPE_FACTOR( SACp_inl_3470_rn, 1);

      SAC_WL_STRIDE_LOOP0_BEGIN( 0, SACp_inl_3480__flat_81_iv, SACp_inl_3479__type_397, 0, 16, 1)
        SAC_WL_GRID_UNROLL_BEGIN( 0, SACp_inl_3480__flat_81_iv, SACp_inl_3479__type_397, 0, 1)
          SAC_WL_STRIDE_LOOP0_BEGIN( 1, SACp_inl_3480__flat_81_iv, SACp_inl_3478__type_398, 0, 2, 1)
            SAC_WL_GRID_UNROLL_BEGIN( 1, SACp_inl_3480__flat_81_iv, SACp_inl_3478__type_398, 0, 1)
              SACp_inl_3473__flat_84 = (2 * SACp_inl_3479__type_397); 
              SACp_inl_3472__flat_83_32_2__ = ((SACp_inl_3473__flat_84 * 2) + SACp_inl_3478__type_398); 
              SACp_inl_6084__flat_403_32_2__ = (SACp_inl_6085__flat_404_32_2__ + SACp_inl_3472__flat_83_32_2__); 
              SAC_ND_IDX_SEL_S( SACp_inl_6084__flat_403_32_2__, SACl_v, SACp_inl_6106_array_elem__SSA_1)
              /*
               * WL_ASSIGN( SACp_inl_6106_array_elem__SSA_1, 0, SACp_inl_3470_rn, 2, SACp_inl_3480__flat_81_iv, 2, SACp_inl_3479__type_397, SACp_inl_3478__type_398)
               */
              SAC_TR_WL_PRINT( ("index vector [%d, %d] (== offset %d) -- offset %d -- assign", SACp_inl_3479__type_397, SACp_inl_3478__type_398, ( SAC_ND_A_SHAPE( SACp_inl_3470_rn, 1) * SACp_inl_3479__type_397 + SACp_inl_3478__type_398 ), SAC_WL_OFFSET( SACp_inl_3470_rn)));
              SAC_ASSURE_TYPE( (SAC_ND_A_DIM( SACp_inl_6106_array_elem__SSA_1) == (SAC_ND_A_DIM( SACp_inl_3470_rn) - 2)), ("WL expression with illegal dimension found!"));
              SAC_ASSURE_TYPE( (SAC_ND_A_SIZE( SACp_inl_6106_array_elem__SSA_1) == SAC_WL_SHAPE_FACTOR( SACp_inl_3470_rn, 1)), ("WL expression with illegal size found!"));
              SAC_ND_WRITE_ARRAY( SACp_inl_3470_rn, SAC_WL_OFFSET( SACp_inl_3470_rn)) = SACp_inl_6106_array_elem__SSA_1;
              SAC_WL_OFFSET( SACp_inl_3470_rn)++;

            SAC_WL_GRID_UNROLL_END( 1, SACp_inl_3480__flat_81_iv, SACp_inl_3478__type_398, 0, 1)
          SAC_WL_STRIDE_LOOP_END( 1, SACp_inl_3480__flat_81_iv, SACp_inl_3478__type_398, 0, 2, 1)
        SAC_WL_GRID_UNROLL_END( 0, SACp_inl_3480__flat_81_iv, SACp_inl_3479__type_397, 0, 1)
      SAC_WL_STRIDE_LOOP_END( 0, SACp_inl_3480__flat_81_iv, SACp_inl_3479__type_397, 0, 16, 1)
      /*
       * MT_SCHEDULER_END( 0, 2, 0, 0, 16, 2)
       */


      /*
       * WL_END__OFFSET( SACp_inl_3470_rn, 2, SACp_inl_3480__flat_81_iv, 2)
       */
    }

  SAC_PF_END_WITH( genarray)
  SAC_ND_DEC_RC_FREE_ARRAY( SACl_v, 1)
  SAC_ND_ALLOC_ARRAY( double, SACp_inl_3489_rn, 1)
  SAC_PF_BEGIN_WITH( genarray)
    /*
     * WL_BEGIN__OFFSET( SACp_inl_3489_rn, 2, SACp_inl_3499__flat_81_iv, 2)
     */
    { int SAC_WL_OFFSET( SACp_inl_3489_rn);
      int SAC_WL_MT_SCHEDULE_START( 0);
      int SAC_WL_MT_SCHEDULE_STOP( 0);
      int SAC_WL_MT_SCHEDULE_START( 1);
      int SAC_WL_MT_SCHEDULE_STOP( 1);
      int SAC_i;
      int SAC_WL_SHAPE_FACTOR( SACp_inl_3489_rn, 0) = 1 * SAC_ND_A_SHAPE( SACp_inl_3489_rn, 1);
      int SAC_WL_SHAPE_FACTOR( SACp_inl_3489_rn, 1) = 1;

      /*
       * MT_SCHEDULER_BEGIN( 0, 2, 0, 0, 8, 2)
       */
      SAC_WL_MT_SCHEDULE_START( 0) = 0;
      SAC_WL_MT_SCHEDULE_STOP( 0) = 8;
      SAC_WL_MT_SCHEDULE_START( 1) = 0;
      SAC_WL_MT_SCHEDULE_STOP( 1) = 2;

      /*
       * WL_INIT_OFFSET( SACp_inl_3489_rn, 2, SACp_inl_3499__flat_81_iv, 2)
       */
      SAC_WL_OFFSET( SACp_inl_3489_rn)
        = SAC_WL_MT_SCHEDULE_START( 0) * SAC_WL_SHAPE_FACTOR( SACp_inl_3489_rn, 0)
        + SAC_WL_MT_SCHEDULE_START( 1) * SAC_WL_SHAPE_FACTOR( SACp_inl_3489_rn, 1);

      SAC_WL_STRIDE_LOOP0_BEGIN( 0, SACp_inl_3499__flat_81_iv, SACp_inl_3498__type_400, 0, 8, 1)
        SAC_WL_GRID_UNROLL_BEGIN( 0, SACp_inl_3499__flat_81_iv, SACp_inl_3498__type_400, 0, 1)
          SAC_WL_STRIDE_LOOP0_BEGIN( 1, SACp_inl_3499__flat_81_iv, SACp_inl_3497__type_401, 0, 2, 1)
            SAC_WL_GRID_UNROLL_BEGIN( 1, SACp_inl_3499__flat_81_iv, SACp_inl_3497__type_401, 0, 1)
              SACp_inl_3492__flat_84 = (2 * SACp_inl_3498__type_400); 
              SACp_inl_3491__flat_83_16_2__ = ((SACp_inl_3492__flat_84 * 2) + SACp_inl_3497__type_401); 
              SAC_ND_IDX_SEL_S( SACp_inl_3491__flat_83_16_2__, SACl_rofu, SACp_inl_3490__flat_82)
              /*
               * WL_ASSIGN( SACp_inl_3490__flat_82, 0, SACp_inl_3489_rn, 2, SACp_inl_3499__flat_81_iv, 2, SACp_inl_3498__type_400, SACp_inl_3497__type_401)
               */
              SAC_TR_WL_PRINT( ("index vector [%d, %d] (== offset %d) -- offset %d -- assign", SACp_inl_3498__type_400, SACp_inl_3497__type_401, ( SAC_ND_A_SHAPE( SACp_inl_3489_rn, 1) * SACp_inl_3498__type_400 + SACp_inl_3497__type_401 ), SAC_WL_OFFSET( SACp_inl_3489_rn)));
              SAC_ASSURE_TYPE( (SAC_ND_A_DIM( SACp_inl_3490__flat_82) == (SAC_ND_A_DIM( SACp_inl_3489_rn) - 2)), ("WL expression with illegal dimension found!"));
              SAC_ASSURE_TYPE( (SAC_ND_A_SIZE( SACp_inl_3490__flat_82) == SAC_WL_SHAPE_FACTOR( SACp_inl_3489_rn, 1)), ("WL expression with illegal size found!"));
              SAC_ND_WRITE_ARRAY( SACp_inl_3489_rn, SAC_WL_OFFSET( SACp_inl_3489_rn)) = SACp_inl_3490__flat_82;
              SAC_WL_OFFSET( SACp_inl_3489_rn)++;

            SAC_WL_GRID_UNROLL_END( 1, SACp_inl_3499__flat_81_iv, SACp_inl_3497__type_401, 0, 1)
          SAC_WL_STRIDE_LOOP_END( 1, SACp_inl_3499__flat_81_iv, SACp_inl_3497__type_401, 0, 2, 1)
        SAC_WL_GRID_UNROLL_END( 0, SACp_inl_3499__flat_81_iv, SACp_inl_3498__type_400, 0, 1)
      SAC_WL_STRIDE_LOOP_END( 0, SACp_inl_3499__flat_81_iv, SACp_inl_3498__type_400, 0, 8, 1)
      /*
       * MT_SCHEDULER_END( 0, 2, 0, 0, 8, 2)
       */


      /*
       * WL_END__OFFSET( SACp_inl_3489_rn, 2, SACp_inl_3499__flat_81_iv, 2)
       */
    }

  SAC_PF_END_WITH( genarray)
  SAC_ND_INC_RC( SACp_inl_3489_rn, 1)
  /*
   * ND_FUN_AP( SACf_FFT1d__d___MAIN__cpx_16___MAIN__cpx_8, , 4, out_rc, SACl_fft_left, in, SACl_dir, in_rc, SACp_inl_3413_rn, in_rc, SACp_inl_3489_rn)
   */
  SACf_FFT1d__d___MAIN__cpx_16___MAIN__cpx_8( SAC_ND_ARG_out_rc( SACl_fft_left), SAC_ND_ARG_in( SACl_dir), SAC_ND_ARG_in_rc( SACp_inl_3413_rn), SAC_ND_ARG_in_rc( SACp_inl_3489_rn));

  /*
   * ND_FUN_AP( SACf_FFT1d__d___MAIN__cpx_16___MAIN__cpx_8, , 4, out_rc, SACl_fft_right, in, SACl_dir, in_rc, SACp_inl_3470_rn, in_rc, SACp_inl_3489_rn)
   */
  SACf_FFT1d__d___MAIN__cpx_16___MAIN__cpx_8( SAC_ND_ARG_out_rc( SACl_fft_right), SAC_ND_ARG_in( SACl_dir), SAC_ND_ARG_in_rc( SACp_inl_3470_rn), SAC_ND_ARG_in_rc( SACp_inl_3489_rn));

  SAC_ND_ALLOC_ARRAY( double, SACp_inl_3740__type_502, 1)
  SAC_PF_BEGIN_WITH( genarray)
    /*
     * WL_BEGIN__OFFSET( SACp_inl_3740__type_502, 2, SACp_inl_3746__type_501, 2)
     */
    { int SAC_WL_OFFSET( SACp_inl_3740__type_502);
      int SAC_WL_MT_SCHEDULE_START( 0);
      int SAC_WL_MT_SCHEDULE_STOP( 0);
      int SAC_WL_MT_SCHEDULE_START( 1);
      int SAC_WL_MT_SCHEDULE_STOP( 1);
      int SAC_i;
      int SAC_WL_SHAPE_FACTOR( SACp_inl_3740__type_502, 0) = 1 * SAC_ND_A_SHAPE( SACp_inl_3740__type_502, 1);
      int SAC_WL_SHAPE_FACTOR( SACp_inl_3740__type_502, 1) = 1;

      /*
       * MT_SCHEDULER_BEGIN( 0, 2, 0, 0, 32, 2)
       */
      SAC_WL_MT_SCHEDULE_START( 0) = 0;
      SAC_WL_MT_SCHEDULE_STOP( 0) = 32;
      SAC_WL_MT_SCHEDULE_START( 1) = 0;
      SAC_WL_MT_SCHEDULE_STOP( 1) = 2;

      /*
       * WL_INIT_OFFSET( SACp_inl_3740__type_502, 2, SACp_inl_3746__type_501, 2)
       */
      SAC_WL_OFFSET( SACp_inl_3740__type_502)
        = SAC_WL_MT_SCHEDULE_START( 0) * SAC_WL_SHAPE_FACTOR( SACp_inl_3740__type_502, 0)
        + SAC_WL_MT_SCHEDULE_START( 1) * SAC_WL_SHAPE_FACTOR( SACp_inl_3740__type_502, 1);

      SAC_WL_STRIDE_LOOP0_BEGIN( 0, SACp_inl_3746__type_501, SACp_inl_3745__type_503, 0, 16, 1)
        SAC_WL_GRID_UNROLL_BEGIN( 0, SACp_inl_3746__type_501, SACp_inl_3745__type_503, 0, 1)
          SAC_WL_STRIDE_LOOP0_BEGIN( 1, SACp_inl_3746__type_501, SACp_inl_3744__type_504, 0, 1, 1)
            SAC_WL_GRID_UNROLL_BEGIN( 1, SACp_inl_3746__type_501, SACp_inl_3744__type_504, 0, 1)
              SACp_inl_3682__type_487__SSA_8_16_2__ = ((SACp_inl_3745__type_503 * 2) + 0); 
              SAC_ND_IDX_SEL_S( SACp_inl_3682__type_487__SSA_8_16_2__, SACl_rofu, SACp_inl_3517__type_486__SSA_27)
              SACp_inl_3533__type_487__SSA_16_16_2__ = ((SACp_inl_3745__type_503 * 2) + 1); 
              SAC_ND_IDX_SEL_S( SACp_inl_3533__type_487__SSA_16_16_2__, SACl_fft_right, SACp_inl_3532__type_486__SSA_27)
              SAC_ND_IDX_SEL_S( SACp_inl_3533__type_487__SSA_16_16_2__, SACl_rofu, SACp_inl_3517__type_486__SSA_28)
              SAC_ND_IDX_SEL_S( SACp_inl_3682__type_487__SSA_8_16_2__, SACl_fft_right, SACp_inl_3532__type_486__SSA_28)
              SACp_inl_3551__flat_27__SSA_13 = (SACp_inl_3532__type_486__SSA_27 * SACp_inl_3517__type_486__SSA_28); 
              SACp_inl_3548__flat_24__SSA_13 = (SACp_inl_3532__type_486__SSA_28 * SACp_inl_3517__type_486__SSA_27); 
              SACp_inl_3547__flat_23__SSA_13 = (SACp_inl_3548__flat_24__SSA_13 - SACp_inl_3551__flat_27__SSA_13); 
              SAC_ND_IDX_SEL_S( SACp_inl_3682__type_487__SSA_8_16_2__, SACl_fft_left, SACp_inl_3696__type_486__SSA_8)
              SACp_inl_3711__flat_9__SSA_3 = (SACp_inl_3696__type_486__SSA_8 + SACp_inl_3547__flat_23__SSA_13); 
              /*
               * WL_ASSIGN( SACp_inl_3711__flat_9__SSA_3, 0, SACp_inl_3740__type_502, 2, SACp_inl_3746__type_501, 2, SACp_inl_3745__type_503, SACp_inl_3744__type_504)
               */
              SAC_TR_WL_PRINT( ("index vector [%d, %d] (== offset %d) -- offset %d -- assign", SACp_inl_3745__type_503, SACp_inl_3744__type_504, ( SAC_ND_A_SHAPE( SACp_inl_3740__type_502, 1) * SACp_inl_3745__type_503 + SACp_inl_3744__type_504 ), SAC_WL_OFFSET( SACp_inl_3740__type_502)));
              SAC_ASSURE_TYPE( (SAC_ND_A_DIM( SACp_inl_3711__flat_9__SSA_3) == (SAC_ND_A_DIM( SACp_inl_3740__type_502) - 2)), ("WL expression with illegal dimension found!"));
              SAC_ASSURE_TYPE( (SAC_ND_A_SIZE( SACp_inl_3711__flat_9__SSA_3) == SAC_WL_SHAPE_FACTOR( SACp_inl_3740__type_502, 1)), ("WL expression with illegal size found!"));
              SAC_ND_WRITE_ARRAY( SACp_inl_3740__type_502, SAC_WL_OFFSET( SACp_inl_3740__type_502)) = SACp_inl_3711__flat_9__SSA_3;
              SAC_WL_OFFSET( SACp_inl_3740__type_502)++;

            SAC_WL_GRID_UNROLL_END( 1, SACp_inl_3746__type_501, SACp_inl_3744__type_504, 0, 1)
          SAC_WL_STRIDE_LOOP_END( 1, SACp_inl_3746__type_501, SACp_inl_3744__type_504, 0, 1, 1)
          SAC_WL_STRIDE_LOOP0_BEGIN( 1, SACp_inl_3746__type_501, SACp_inl_3744__type_504, 1, 2, 1)
            SAC_WL_GRID_UNROLL_BEGIN( 1, SACp_inl_3746__type_501, SACp_inl_3744__type_504, 0, 1)
              SACp_inl_3682__type_487__SSA_5_16_2__ = ((SACp_inl_3745__type_503 * 2) + 1); 
              SACp_inl_3518__type_487__SSA_13_16_2__ = ((SACp_inl_3745__type_503 * 2) + 0); 
              SAC_ND_IDX_SEL_S( SACp_inl_3518__type_487__SSA_13_16_2__, SACl_rofu, SACp_inl_3517__type_486__SSA_21)
              SAC_ND_IDX_SEL_S( SACp_inl_3682__type_487__SSA_5_16_2__, SACl_fft_right, SACp_inl_3532__type_486__SSA_21)
              SACp_inl_3558__flat_34__SSA_10 = (SACp_inl_3532__type_486__SSA_21 * SACp_inl_3517__type_486__SSA_21); 
              SAC_ND_IDX_SEL_S( SACp_inl_3682__type_487__SSA_5_16_2__, SACl_rofu, SACp_inl_3517__type_486__SSA_22)
              SAC_ND_IDX_SEL_S( SACp_inl_3518__type_487__SSA_13_16_2__, SACl_fft_right, SACp_inl_3532__type_486__SSA_22)
              SACp_inl_3555__flat_31__SSA_10 = (SACp_inl_3532__type_486__SSA_22 * SACp_inl_3517__type_486__SSA_22); 
              SACp_inl_3554__flat_30__SSA_10 = (SACp_inl_3555__flat_31__SSA_10 + SACp_inl_3558__flat_34__SSA_10); 
              SAC_ND_IDX_SEL_S( SACp_inl_3682__type_487__SSA_5_16_2__, SACl_fft_left, SACp_inl_3696__type_486__SSA_5)
              SACp_inl_3714__flat_12__SSA_2 = (SACp_inl_3696__type_486__SSA_5 + SACp_inl_3554__flat_30__SSA_10); 
              /*
               * WL_ASSIGN( SACp_inl_3714__flat_12__SSA_2, 0, SACp_inl_3740__type_502, 2, SACp_inl_3746__type_501, 2, SACp_inl_3745__type_503, SACp_inl_3744__type_504)
               */
              SAC_TR_WL_PRINT( ("index vector [%d, %d] (== offset %d) -- offset %d -- assign", SACp_inl_3745__type_503, SACp_inl_3744__type_504, ( SAC_ND_A_SHAPE( SACp_inl_3740__type_502, 1) * SACp_inl_3745__type_503 + SACp_inl_3744__type_504 ), SAC_WL_OFFSET( SACp_inl_3740__type_502)));
              SAC_ASSURE_TYPE( (SAC_ND_A_DIM( SACp_inl_3714__flat_12__SSA_2) == (SAC_ND_A_DIM( SACp_inl_3740__type_502) - 2)), ("WL expression with illegal dimension found!"));
              SAC_ASSURE_TYPE( (SAC_ND_A_SIZE( SACp_inl_3714__flat_12__SSA_2) == SAC_WL_SHAPE_FACTOR( SACp_inl_3740__type_502, 1)), ("WL expression with illegal size found!"));
              SAC_ND_WRITE_ARRAY( SACp_inl_3740__type_502, SAC_WL_OFFSET( SACp_inl_3740__type_502)) = SACp_inl_3714__flat_12__SSA_2;
              SAC_WL_OFFSET( SACp_inl_3740__type_502)++;

            SAC_WL_GRID_UNROLL_END( 1, SACp_inl_3746__type_501, SACp_inl_3744__type_504, 0, 1)
          SAC_WL_STRIDE_LOOP_END( 1, SACp_inl_3746__type_501, SACp_inl_3744__type_504, 1, 2, 1)
        SAC_WL_GRID_UNROLL_END( 0, SACp_inl_3746__type_501, SACp_inl_3745__type_503, 0, 1)
      SAC_WL_STRIDE_LOOP_END( 0, SACp_inl_3746__type_501, SACp_inl_3745__type_503, 0, 16, 1)
      SAC_WL_STRIDE_LOOP0_BEGIN( 0, SACp_inl_3746__type_501, SACp_inl_3745__type_503, 16, 32, 1)
        SAC_WL_GRID_UNROLL_BEGIN( 0, SACp_inl_3746__type_501, SACp_inl_3745__type_503, 0, 1)
          SAC_WL_STRIDE_LOOP0_BEGIN( 1, SACp_inl_3746__type_501, SACp_inl_3744__type_504, 0, 1, 1)
            SAC_WL_GRID_UNROLL_BEGIN( 1, SACp_inl_3746__type_501, SACp_inl_3744__type_504, 0, 1)
              SACp_inl_3607__type_492__SSA_2 = (SACp_inl_3745__type_503 + -16); 
              SACp_inl_3614__type_487__SSA_8_16_2__ = ((SACp_inl_3607__type_492__SSA_2 * 2) + 0); 
              SAC_ND_IDX_SEL_S( SACp_inl_3614__type_487__SSA_8_16_2__, SACl_rofu, SACp_inl_3517__type_486__SSA_35)
              SACp_inl_3533__type_487__SSA_20_16_2__ = ((SACp_inl_3607__type_492__SSA_2 * 2) + 1); 
              SAC_ND_IDX_SEL_S( SACp_inl_3533__type_487__SSA_20_16_2__, SACl_fft_right, SACp_inl_3532__type_486__SSA_35)
              SAC_ND_IDX_SEL_S( SACp_inl_3533__type_487__SSA_20_16_2__, SACl_rofu, SACp_inl_3517__type_486__SSA_36)
              SAC_ND_IDX_SEL_S( SACp_inl_3614__type_487__SSA_8_16_2__, SACl_fft_right, SACp_inl_3532__type_486__SSA_36)
              SACp_inl_3551__flat_27__SSA_17 = (SACp_inl_3532__type_486__SSA_35 * SACp_inl_3517__type_486__SSA_36); 
              SACp_inl_3548__flat_24__SSA_17 = (SACp_inl_3532__type_486__SSA_36 * SACp_inl_3517__type_486__SSA_35); 
              SACp_inl_3547__flat_23__SSA_17 = (SACp_inl_3548__flat_24__SSA_17 - SACp_inl_3551__flat_27__SSA_17); 
              SAC_ND_IDX_SEL_S( SACp_inl_3614__type_487__SSA_8_16_2__, SACl_fft_left, SACp_inl_3628__type_486__SSA_8)
              SACp_inl_3643__flat_16__SSA_3 = (SACp_inl_3628__type_486__SSA_8 - SACp_inl_3547__flat_23__SSA_17); 
              /*
               * WL_ASSIGN( SACp_inl_3643__flat_16__SSA_3, 0, SACp_inl_3740__type_502, 2, SACp_inl_3746__type_501, 2, SACp_inl_3745__type_503, SACp_inl_3744__type_504)
               */
              SAC_TR_WL_PRINT( ("index vector [%d, %d] (== offset %d) -- offset %d -- assign", SACp_inl_3745__type_503, SACp_inl_3744__type_504, ( SAC_ND_A_SHAPE( SACp_inl_3740__type_502, 1) * SACp_inl_3745__type_503 + SACp_inl_3744__type_504 ), SAC_WL_OFFSET( SACp_inl_3740__type_502)));
              SAC_ASSURE_TYPE( (SAC_ND_A_DIM( SACp_inl_3643__flat_16__SSA_3) == (SAC_ND_A_DIM( SACp_inl_3740__type_502) - 2)), ("WL expression with illegal dimension found!"));
              SAC_ASSURE_TYPE( (SAC_ND_A_SIZE( SACp_inl_3643__flat_16__SSA_3) == SAC_WL_SHAPE_FACTOR( SACp_inl_3740__type_502, 1)), ("WL expression with illegal size found!"));
              SAC_ND_WRITE_ARRAY( SACp_inl_3740__type_502, SAC_WL_OFFSET( SACp_inl_3740__type_502)) = SACp_inl_3643__flat_16__SSA_3;
              SAC_WL_OFFSET( SACp_inl_3740__type_502)++;

            SAC_WL_GRID_UNROLL_END( 1, SACp_inl_3746__type_501, SACp_inl_3744__type_504, 0, 1)
          SAC_WL_STRIDE_LOOP_END( 1, SACp_inl_3746__type_501, SACp_inl_3744__type_504, 0, 1, 1)
          SAC_WL_STRIDE_LOOP0_BEGIN( 1, SACp_inl_3746__type_501, SACp_inl_3744__type_504, 1, 2, 1)
            SAC_WL_GRID_UNROLL_BEGIN( 1, SACp_inl_3746__type_501, SACp_inl_3744__type_504, 0, 1)
              SACp_inl_3607__type_492__SSA_1 = (SACp_inl_3745__type_503 + -16); 
              SACp_inl_3614__type_487__SSA_5_16_2__ = ((SACp_inl_3607__type_492__SSA_1 * 2) + 1); 
              SACp_inl_3518__type_487__SSA_17_16_2__ = ((SACp_inl_3607__type_492__SSA_1 * 2) + 0); 
              SAC_ND_IDX_SEL_S( SACp_inl_3518__type_487__SSA_17_16_2__, SACl_rofu, SACp_inl_3517__type_486__SSA_29)
              SAC_ND_IDX_SEL_S( SACp_inl_3614__type_487__SSA_5_16_2__, SACl_fft_right, SACp_inl_3532__type_486__SSA_29)
              SACp_inl_3558__flat_34__SSA_14 = (SACp_inl_3532__type_486__SSA_29 * SACp_inl_3517__type_486__SSA_29); 
              SAC_ND_IDX_SEL_S( SACp_inl_3614__type_487__SSA_5_16_2__, SACl_rofu, SACp_inl_3517__type_486__SSA_30)
              SAC_ND_IDX_SEL_S( SACp_inl_3518__type_487__SSA_17_16_2__, SACl_fft_right, SACp_inl_3532__type_486__SSA_30)
              SACp_inl_3555__flat_31__SSA_14 = (SACp_inl_3532__type_486__SSA_30 * SACp_inl_3517__type_486__SSA_30); 
              SACp_inl_3554__flat_30__SSA_14 = (SACp_inl_3555__flat_31__SSA_14 + SACp_inl_3558__flat_34__SSA_14); 
              SAC_ND_IDX_SEL_S( SACp_inl_3614__type_487__SSA_5_16_2__, SACl_fft_left, SACp_inl_3628__type_486__SSA_5)
              SACp_inl_3646__flat_19__SSA_2 = (SACp_inl_3628__type_486__SSA_5 - SACp_inl_3554__flat_30__SSA_14); 
              /*
               * WL_ASSIGN( SACp_inl_3646__flat_19__SSA_2, 0, SACp_inl_3740__type_502, 2, SACp_inl_3746__type_501, 2, SACp_inl_3745__type_503, SACp_inl_3744__type_504)
               */
              SAC_TR_WL_PRINT( ("index vector [%d, %d] (== offset %d) -- offset %d -- assign", SACp_inl_3745__type_503, SACp_inl_3744__type_504, ( SAC_ND_A_SHAPE( SACp_inl_3740__type_502, 1) * SACp_inl_3745__type_503 + SACp_inl_3744__type_504 ), SAC_WL_OFFSET( SACp_inl_3740__type_502)));
              SAC_ASSURE_TYPE( (SAC_ND_A_DIM( SACp_inl_3646__flat_19__SSA_2) == (SAC_ND_A_DIM( SACp_inl_3740__type_502) - 2)), ("WL expression with illegal dimension found!"));
              SAC_ASSURE_TYPE( (SAC_ND_A_SIZE( SACp_inl_3646__flat_19__SSA_2) == SAC_WL_SHAPE_FACTOR( SACp_inl_3740__type_502, 1)), ("WL expression with illegal size found!"));
              SAC_ND_WRITE_ARRAY( SACp_inl_3740__type_502, SAC_WL_OFFSET( SACp_inl_3740__type_502)) = SACp_inl_3646__flat_19__SSA_2;
              SAC_WL_OFFSET( SACp_inl_3740__type_502)++;

            SAC_WL_GRID_UNROLL_END( 1, SACp_inl_3746__type_501, SACp_inl_3744__type_504, 0, 1)
          SAC_WL_STRIDE_LOOP_END( 1, SACp_inl_3746__type_501, SACp_inl_3744__type_504, 1, 2, 1)
        SAC_WL_GRID_UNROLL_END( 0, SACp_inl_3746__type_501, SACp_inl_3745__type_503, 0, 1)
      SAC_WL_STRIDE_LOOP_END( 0, SACp_inl_3746__type_501, SACp_inl_3745__type_503, 16, 32, 1)
      /*
       * MT_SCHEDULER_END( 0, 2, 0, 0, 32, 2)
       */


      /*
       * WL_END__OFFSET( SACp_inl_3740__type_502, 2, SACp_inl_3746__type_501, 2)
       */
    }

  SAC_PF_END_WITH( genarray)
  SAC_ND_DEC_RC_FREE_ARRAY( SACl_fft_left, 1)
  SAC_ND_DEC_RC_FREE_ARRAY( SACl_fft_right, 1)
  SAC_ND_DEC_RC_FREE_ARRAY( SACl_rofu, 1)
  /*
   * ND_FUN_RET( , 1, out_rc, SACp_inl_3740__type_502, SAC__arg_1)
   */
  SAC_ND_RET_out_rc( SACp_inl_3740__type_502, SAC__arg_1)
  return;
}

/*
 * ND_FUN_DEC( SACf_FFT1d__d___MAIN__cpx_64___MAIN__cpx_32, void, 4, out_rc, double *, SAC__arg_1, in, double, SACl_dir, in_rc, double *, SACl_v, in_rc, double *, SACl_rofu)
 */
void SACf_FFT1d__d___MAIN__cpx_64___MAIN__cpx_32( SAC_ND_PARAM_out_rc( double *, SAC__arg_1), SAC_ND_PARAM_in( double, SACl_dir), SAC_ND_PARAM_in_rc( double *, SACl_v), SAC_ND_PARAM_in_rc( double *, SACl_rofu))
{ 
  double SACp_inl_6197_array_elem__SSA_1; 
  int SACp_inl_6176__flat_404_64_2__; 
  int SACp_inl_6175__flat_403_64_2__; 
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
   * ND_KS_DECL_ARRAY( int, SACp_inl_4094__type_521, 1, 2)
   */
  int *SACp_inl_4094__type_521;
  int SAC_ND_A_RC( SACp_inl_4094__type_521);
  const int SAC_ND_A_SIZE( SACp_inl_4094__type_521) = 2;
  const int SAC_ND_A_DIM( SACp_inl_4094__type_521) = 1;
  const int SAC_ND_A_SHAPE( SACp_inl_4094__type_521, 0) = 2;

  int SACp_inl_4093__type_523; 
  int SACp_inl_4092__type_524; 
  /*
   * ND_KS_DECL_ARRAY( double, SACp_inl_4088__type_522, 2, 64, 2)
   */
  double *SACp_inl_4088__type_522;
  int SAC_ND_A_RC( SACp_inl_4088__type_522);
  const int SAC_ND_A_SIZE( SACp_inl_4088__type_522) = 64*2;
  const int SAC_ND_A_DIM( SACp_inl_4088__type_522) = 2;
  const int SAC_ND_A_SHAPE( SACp_inl_4088__type_522, 0) = 64;
  const int SAC_ND_A_SHAPE( SACp_inl_4088__type_522, 1) = 2;

  /*
   * ND_KS_DECL_ARRAY( int, SACp_inl_3847__flat_81_iv, 1, 2)
   */
  int *SACp_inl_3847__flat_81_iv;
  int SAC_ND_A_RC( SACp_inl_3847__flat_81_iv);
  const int SAC_ND_A_SIZE( SACp_inl_3847__flat_81_iv) = 2;
  const int SAC_ND_A_DIM( SACp_inl_3847__flat_81_iv) = 1;
  const int SAC_ND_A_SHAPE( SACp_inl_3847__flat_81_iv, 0) = 2;

  int SACp_inl_3846__type_391; 
  int SACp_inl_3845__type_392; 
  int SACp_inl_3840__flat_84; 
  int SACp_inl_3839__flat_83_32_2__; 
  double SACp_inl_3838__flat_82; 
  /*
   * ND_KS_DECL_ARRAY( double, SACp_inl_3837_rn, 2, 16, 2)
   */
  double *SACp_inl_3837_rn;
  int SAC_ND_A_RC( SACp_inl_3837_rn);
  const int SAC_ND_A_SIZE( SACp_inl_3837_rn) = 16*2;
  const int SAC_ND_A_DIM( SACp_inl_3837_rn) = 2;
  const int SAC_ND_A_SHAPE( SACp_inl_3837_rn, 0) = 16;
  const int SAC_ND_A_SHAPE( SACp_inl_3837_rn, 1) = 2;

  /*
   * ND_KS_DECL_ARRAY( int, SACp_inl_3828__flat_81_iv, 1, 2)
   */
  int *SACp_inl_3828__flat_81_iv;
  int SAC_ND_A_RC( SACp_inl_3828__flat_81_iv);
  const int SAC_ND_A_SIZE( SACp_inl_3828__flat_81_iv) = 2;
  const int SAC_ND_A_DIM( SACp_inl_3828__flat_81_iv) = 1;
  const int SAC_ND_A_SHAPE( SACp_inl_3828__flat_81_iv, 0) = 2;

  int SACp_inl_3827__type_388; 
  int SACp_inl_3826__type_389; 
  int SACp_inl_3821__flat_84; 
  int SACp_inl_3820__flat_83_64_2__; 
  /*
   * ND_KS_DECL_ARRAY( double, SACp_inl_3818_rn, 2, 32, 2)
   */
  double *SACp_inl_3818_rn;
  int SAC_ND_A_RC( SACp_inl_3818_rn);
  const int SAC_ND_A_SIZE( SACp_inl_3818_rn) = 32*2;
  const int SAC_ND_A_DIM( SACp_inl_3818_rn) = 2;
  const int SAC_ND_A_SHAPE( SACp_inl_3818_rn, 0) = 32;
  const int SAC_ND_A_SHAPE( SACp_inl_3818_rn, 1) = 2;

  /*
   * ND_KS_DECL_ARRAY( int, SACp_inl_3771__flat_81_iv, 1, 2)
   */
  int *SACp_inl_3771__flat_81_iv;
  int SAC_ND_A_RC( SACp_inl_3771__flat_81_iv);
  const int SAC_ND_A_SIZE( SACp_inl_3771__flat_81_iv) = 2;
  const int SAC_ND_A_DIM( SACp_inl_3771__flat_81_iv) = 1;
  const int SAC_ND_A_SHAPE( SACp_inl_3771__flat_81_iv, 0) = 2;

  int SACp_inl_3770__type_385; 
  int SACp_inl_3769__type_386; 
  int SACp_inl_3764__flat_84; 
  int SACp_inl_3763__flat_83_64_2__; 
  double SACp_inl_3762__flat_82; 
  /*
   * ND_KS_DECL_ARRAY( double, SACp_inl_3761_rn, 2, 32, 2)
   */
  double *SACp_inl_3761_rn;
  int SAC_ND_A_RC( SACp_inl_3761_rn);
  const int SAC_ND_A_SIZE( SACp_inl_3761_rn) = 32*2;
  const int SAC_ND_A_DIM( SACp_inl_3761_rn) = 2;
  const int SAC_ND_A_SHAPE( SACp_inl_3761_rn, 0) = 32;
  const int SAC_ND_A_SHAPE( SACp_inl_3761_rn, 1) = 2;

  int SACp_inl_4030__type_507__SSA_5_32_2__; 
  int SACp_inl_3866__type_507__SSA_13_32_2__; 
  double SACp_inl_3865__type_506__SSA_21; 
  double SACp_inl_3880__type_506__SSA_21; 
  double SACp_inl_3906__flat_34__SSA_10; 
  double SACp_inl_3865__type_506__SSA_22; 
  double SACp_inl_3880__type_506__SSA_22; 
  double SACp_inl_3903__flat_31__SSA_10; 
  double SACp_inl_3902__flat_30__SSA_10; 
  double SACp_inl_4044__type_506__SSA_5; 
  double SACp_inl_4062__flat_12__SSA_2; 
  int SACp_inl_4030__type_507__SSA_8_32_2__; 
  double SACp_inl_3865__type_506__SSA_27; 
  int SACp_inl_3881__type_507__SSA_16_32_2__; 
  double SACp_inl_3880__type_506__SSA_27; 
  double SACp_inl_3865__type_506__SSA_28; 
  double SACp_inl_3880__type_506__SSA_28; 
  double SACp_inl_3899__flat_27__SSA_13; 
  double SACp_inl_3896__flat_24__SSA_13; 
  double SACp_esd_6229__SSA_6; 
  double SACp_inl_3895__flat_23__SSA_13; 
  double SACp_inl_4044__type_506__SSA_8; 
  double SACp_inl_4059__flat_9__SSA_3; 
  int SACp_inl_3955__type_512__SSA_1; 
  int SACp_inl_3962__type_507__SSA_5_32_2__; 
  int SACp_inl_3866__type_507__SSA_17_32_2__; 
  double SACp_inl_3865__type_506__SSA_29; 
  double SACp_inl_3880__type_506__SSA_29; 
  double SACp_inl_3906__flat_34__SSA_14; 
  double SACp_inl_3865__type_506__SSA_30; 
  double SACp_inl_3880__type_506__SSA_30; 
  double SACp_inl_3903__flat_31__SSA_14; 
  double SACp_inl_3902__flat_30__SSA_14; 
  double SACp_inl_3976__type_506__SSA_5; 
  double SACp_esd_6225__SSA_1; 
  double SACp_inl_3994__flat_19__SSA_2; 
  int SACp_inl_3955__type_512__SSA_2; 
  int SACp_inl_3962__type_507__SSA_8_32_2__; 
  double SACp_inl_3865__type_506__SSA_35; 
  int SACp_inl_3881__type_507__SSA_20_32_2__; 
  double SACp_inl_3880__type_506__SSA_35; 
  double SACp_inl_3865__type_506__SSA_36; 
  double SACp_inl_3880__type_506__SSA_36; 
  double SACp_inl_3899__flat_27__SSA_17; 
  double SACp_inl_3896__flat_24__SSA_17; 
  double SACp_esd_6229__SSA_8; 
  double SACp_inl_3895__flat_23__SSA_17; 
  double SACp_inl_3976__type_506__SSA_8; 
  double SACp_esd_6226__SSA_1; 
  double SACp_inl_3991__flat_16__SSA_3; 

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

  SAC_ND_ALLOC_ARRAY( double, SACp_inl_3761_rn, 1)
  SAC_PF_BEGIN_WITH( genarray)
    /*
     * WL_BEGIN__OFFSET( SACp_inl_3761_rn, 2, SACp_inl_3771__flat_81_iv, 2)
     */
    { int SAC_WL_OFFSET( SACp_inl_3761_rn);
      int SAC_WL_MT_SCHEDULE_START( 0);
      int SAC_WL_MT_SCHEDULE_STOP( 0);
      int SAC_WL_MT_SCHEDULE_START( 1);
      int SAC_WL_MT_SCHEDULE_STOP( 1);
      int SAC_i;
      int SAC_WL_SHAPE_FACTOR( SACp_inl_3761_rn, 0) = 1 * SAC_ND_A_SHAPE( SACp_inl_3761_rn, 1);
      int SAC_WL_SHAPE_FACTOR( SACp_inl_3761_rn, 1) = 1;

      /*
       * MT_SCHEDULER_BEGIN( 0, 2, 0, 0, 32, 2)
       */
      SAC_WL_MT_SCHEDULE_START( 0) = 0;
      SAC_WL_MT_SCHEDULE_STOP( 0) = 32;
      SAC_WL_MT_SCHEDULE_START( 1) = 0;
      SAC_WL_MT_SCHEDULE_STOP( 1) = 2;

      /*
       * WL_INIT_OFFSET( SACp_inl_3761_rn, 2, SACp_inl_3771__flat_81_iv, 2)
       */
      SAC_WL_OFFSET( SACp_inl_3761_rn)
        = SAC_WL_MT_SCHEDULE_START( 0) * SAC_WL_SHAPE_FACTOR( SACp_inl_3761_rn, 0)
        + SAC_WL_MT_SCHEDULE_START( 1) * SAC_WL_SHAPE_FACTOR( SACp_inl_3761_rn, 1);

      SAC_WL_STRIDE_LOOP0_BEGIN( 0, SACp_inl_3771__flat_81_iv, SACp_inl_3770__type_385, 0, 32, 1)
        SAC_WL_GRID_UNROLL_BEGIN( 0, SACp_inl_3771__flat_81_iv, SACp_inl_3770__type_385, 0, 1)
          SAC_WL_STRIDE_LOOP0_BEGIN( 1, SACp_inl_3771__flat_81_iv, SACp_inl_3769__type_386, 0, 2, 1)
            SAC_WL_GRID_UNROLL_BEGIN( 1, SACp_inl_3771__flat_81_iv, SACp_inl_3769__type_386, 0, 1)
              SACp_inl_3764__flat_84 = (2 * SACp_inl_3770__type_385); 
              SACp_inl_3763__flat_83_64_2__ = ((SACp_inl_3764__flat_84 * 2) + SACp_inl_3769__type_386); 
              SAC_ND_IDX_SEL_S( SACp_inl_3763__flat_83_64_2__, SACl_v, SACp_inl_3762__flat_82)
              /*
               * WL_ASSIGN( SACp_inl_3762__flat_82, 0, SACp_inl_3761_rn, 2, SACp_inl_3771__flat_81_iv, 2, SACp_inl_3770__type_385, SACp_inl_3769__type_386)
               */
              SAC_TR_WL_PRINT( ("index vector [%d, %d] (== offset %d) -- offset %d -- assign", SACp_inl_3770__type_385, SACp_inl_3769__type_386, ( SAC_ND_A_SHAPE( SACp_inl_3761_rn, 1) * SACp_inl_3770__type_385 + SACp_inl_3769__type_386 ), SAC_WL_OFFSET( SACp_inl_3761_rn)));
              SAC_ASSURE_TYPE( (SAC_ND_A_DIM( SACp_inl_3762__flat_82) == (SAC_ND_A_DIM( SACp_inl_3761_rn) - 2)), ("WL expression with illegal dimension found!"));
              SAC_ASSURE_TYPE( (SAC_ND_A_SIZE( SACp_inl_3762__flat_82) == SAC_WL_SHAPE_FACTOR( SACp_inl_3761_rn, 1)), ("WL expression with illegal size found!"));
              SAC_ND_WRITE_ARRAY( SACp_inl_3761_rn, SAC_WL_OFFSET( SACp_inl_3761_rn)) = SACp_inl_3762__flat_82;
              SAC_WL_OFFSET( SACp_inl_3761_rn)++;

            SAC_WL_GRID_UNROLL_END( 1, SACp_inl_3771__flat_81_iv, SACp_inl_3769__type_386, 0, 1)
          SAC_WL_STRIDE_LOOP_END( 1, SACp_inl_3771__flat_81_iv, SACp_inl_3769__type_386, 0, 2, 1)
        SAC_WL_GRID_UNROLL_END( 0, SACp_inl_3771__flat_81_iv, SACp_inl_3770__type_385, 0, 1)
      SAC_WL_STRIDE_LOOP_END( 0, SACp_inl_3771__flat_81_iv, SACp_inl_3770__type_385, 0, 32, 1)
      /*
       * MT_SCHEDULER_END( 0, 2, 0, 0, 32, 2)
       */


      /*
       * WL_END__OFFSET( SACp_inl_3761_rn, 2, SACp_inl_3771__flat_81_iv, 2)
       */
    }

  SAC_PF_END_WITH( genarray)
  SACp_inl_6176__flat_404_64_2__ = ((1 * 2) + 0); 
  SAC_ND_ALLOC_ARRAY( double, SACp_inl_3818_rn, 1)
  SAC_PF_BEGIN_WITH( genarray)
    /*
     * WL_BEGIN__OFFSET( SACp_inl_3818_rn, 2, SACp_inl_3828__flat_81_iv, 2)
     */
    { int SAC_WL_OFFSET( SACp_inl_3818_rn);
      int SAC_WL_MT_SCHEDULE_START( 0);
      int SAC_WL_MT_SCHEDULE_STOP( 0);
      int SAC_WL_MT_SCHEDULE_START( 1);
      int SAC_WL_MT_SCHEDULE_STOP( 1);
      int SAC_i;
      int SAC_WL_SHAPE_FACTOR( SACp_inl_3818_rn, 0) = 1 * SAC_ND_A_SHAPE( SACp_inl_3818_rn, 1);
      int SAC_WL_SHAPE_FACTOR( SACp_inl_3818_rn, 1) = 1;

      /*
       * MT_SCHEDULER_BEGIN( 0, 2, 0, 0, 32, 2)
       */
      SAC_WL_MT_SCHEDULE_START( 0) = 0;
      SAC_WL_MT_SCHEDULE_STOP( 0) = 32;
      SAC_WL_MT_SCHEDULE_START( 1) = 0;
      SAC_WL_MT_SCHEDULE_STOP( 1) = 2;

      /*
       * WL_INIT_OFFSET( SACp_inl_3818_rn, 2, SACp_inl_3828__flat_81_iv, 2)
       */
      SAC_WL_OFFSET( SACp_inl_3818_rn)
        = SAC_WL_MT_SCHEDULE_START( 0) * SAC_WL_SHAPE_FACTOR( SACp_inl_3818_rn, 0)
        + SAC_WL_MT_SCHEDULE_START( 1) * SAC_WL_SHAPE_FACTOR( SACp_inl_3818_rn, 1);

      SAC_WL_STRIDE_LOOP0_BEGIN( 0, SACp_inl_3828__flat_81_iv, SACp_inl_3827__type_388, 0, 32, 1)
        SAC_WL_GRID_UNROLL_BEGIN( 0, SACp_inl_3828__flat_81_iv, SACp_inl_3827__type_388, 0, 1)
          SAC_WL_STRIDE_LOOP0_BEGIN( 1, SACp_inl_3828__flat_81_iv, SACp_inl_3826__type_389, 0, 2, 1)
            SAC_WL_GRID_UNROLL_BEGIN( 1, SACp_inl_3828__flat_81_iv, SACp_inl_3826__type_389, 0, 1)
              SACp_inl_3821__flat_84 = (2 * SACp_inl_3827__type_388); 
              SACp_inl_3820__flat_83_64_2__ = ((SACp_inl_3821__flat_84 * 2) + SACp_inl_3826__type_389); 
              SACp_inl_6175__flat_403_64_2__ = (SACp_inl_6176__flat_404_64_2__ + SACp_inl_3820__flat_83_64_2__); 
              SAC_ND_IDX_SEL_S( SACp_inl_6175__flat_403_64_2__, SACl_v, SACp_inl_6197_array_elem__SSA_1)
              /*
               * WL_ASSIGN( SACp_inl_6197_array_elem__SSA_1, 0, SACp_inl_3818_rn, 2, SACp_inl_3828__flat_81_iv, 2, SACp_inl_3827__type_388, SACp_inl_3826__type_389)
               */
              SAC_TR_WL_PRINT( ("index vector [%d, %d] (== offset %d) -- offset %d -- assign", SACp_inl_3827__type_388, SACp_inl_3826__type_389, ( SAC_ND_A_SHAPE( SACp_inl_3818_rn, 1) * SACp_inl_3827__type_388 + SACp_inl_3826__type_389 ), SAC_WL_OFFSET( SACp_inl_3818_rn)));
              SAC_ASSURE_TYPE( (SAC_ND_A_DIM( SACp_inl_6197_array_elem__SSA_1) == (SAC_ND_A_DIM( SACp_inl_3818_rn) - 2)), ("WL expression with illegal dimension found!"));
              SAC_ASSURE_TYPE( (SAC_ND_A_SIZE( SACp_inl_6197_array_elem__SSA_1) == SAC_WL_SHAPE_FACTOR( SACp_inl_3818_rn, 1)), ("WL expression with illegal size found!"));
              SAC_ND_WRITE_ARRAY( SACp_inl_3818_rn, SAC_WL_OFFSET( SACp_inl_3818_rn)) = SACp_inl_6197_array_elem__SSA_1;
              SAC_WL_OFFSET( SACp_inl_3818_rn)++;

            SAC_WL_GRID_UNROLL_END( 1, SACp_inl_3828__flat_81_iv, SACp_inl_3826__type_389, 0, 1)
          SAC_WL_STRIDE_LOOP_END( 1, SACp_inl_3828__flat_81_iv, SACp_inl_3826__type_389, 0, 2, 1)
        SAC_WL_GRID_UNROLL_END( 0, SACp_inl_3828__flat_81_iv, SACp_inl_3827__type_388, 0, 1)
      SAC_WL_STRIDE_LOOP_END( 0, SACp_inl_3828__flat_81_iv, SACp_inl_3827__type_388, 0, 32, 1)
      /*
       * MT_SCHEDULER_END( 0, 2, 0, 0, 32, 2)
       */


      /*
       * WL_END__OFFSET( SACp_inl_3818_rn, 2, SACp_inl_3828__flat_81_iv, 2)
       */
    }

  SAC_PF_END_WITH( genarray)
  SAC_ND_DEC_RC_FREE_ARRAY( SACl_v, 1)
  SAC_ND_ALLOC_ARRAY( double, SACp_inl_3837_rn, 1)
  SAC_PF_BEGIN_WITH( genarray)
    /*
     * WL_BEGIN__OFFSET( SACp_inl_3837_rn, 2, SACp_inl_3847__flat_81_iv, 2)
     */
    { int SAC_WL_OFFSET( SACp_inl_3837_rn);
      int SAC_WL_MT_SCHEDULE_START( 0);
      int SAC_WL_MT_SCHEDULE_STOP( 0);
      int SAC_WL_MT_SCHEDULE_START( 1);
      int SAC_WL_MT_SCHEDULE_STOP( 1);
      int SAC_i;
      int SAC_WL_SHAPE_FACTOR( SACp_inl_3837_rn, 0) = 1 * SAC_ND_A_SHAPE( SACp_inl_3837_rn, 1);
      int SAC_WL_SHAPE_FACTOR( SACp_inl_3837_rn, 1) = 1;

      /*
       * MT_SCHEDULER_BEGIN( 0, 2, 0, 0, 16, 2)
       */
      SAC_WL_MT_SCHEDULE_START( 0) = 0;
      SAC_WL_MT_SCHEDULE_STOP( 0) = 16;
      SAC_WL_MT_SCHEDULE_START( 1) = 0;
      SAC_WL_MT_SCHEDULE_STOP( 1) = 2;

      /*
       * WL_INIT_OFFSET( SACp_inl_3837_rn, 2, SACp_inl_3847__flat_81_iv, 2)
       */
      SAC_WL_OFFSET( SACp_inl_3837_rn)
        = SAC_WL_MT_SCHEDULE_START( 0) * SAC_WL_SHAPE_FACTOR( SACp_inl_3837_rn, 0)
        + SAC_WL_MT_SCHEDULE_START( 1) * SAC_WL_SHAPE_FACTOR( SACp_inl_3837_rn, 1);

      SAC_WL_STRIDE_LOOP0_BEGIN( 0, SACp_inl_3847__flat_81_iv, SACp_inl_3846__type_391, 0, 16, 1)
        SAC_WL_GRID_UNROLL_BEGIN( 0, SACp_inl_3847__flat_81_iv, SACp_inl_3846__type_391, 0, 1)
          SAC_WL_STRIDE_LOOP0_BEGIN( 1, SACp_inl_3847__flat_81_iv, SACp_inl_3845__type_392, 0, 2, 1)
            SAC_WL_GRID_UNROLL_BEGIN( 1, SACp_inl_3847__flat_81_iv, SACp_inl_3845__type_392, 0, 1)
              SACp_inl_3840__flat_84 = (2 * SACp_inl_3846__type_391); 
              SACp_inl_3839__flat_83_32_2__ = ((SACp_inl_3840__flat_84 * 2) + SACp_inl_3845__type_392); 
              SAC_ND_IDX_SEL_S( SACp_inl_3839__flat_83_32_2__, SACl_rofu, SACp_inl_3838__flat_82)
              /*
               * WL_ASSIGN( SACp_inl_3838__flat_82, 0, SACp_inl_3837_rn, 2, SACp_inl_3847__flat_81_iv, 2, SACp_inl_3846__type_391, SACp_inl_3845__type_392)
               */
              SAC_TR_WL_PRINT( ("index vector [%d, %d] (== offset %d) -- offset %d -- assign", SACp_inl_3846__type_391, SACp_inl_3845__type_392, ( SAC_ND_A_SHAPE( SACp_inl_3837_rn, 1) * SACp_inl_3846__type_391 + SACp_inl_3845__type_392 ), SAC_WL_OFFSET( SACp_inl_3837_rn)));
              SAC_ASSURE_TYPE( (SAC_ND_A_DIM( SACp_inl_3838__flat_82) == (SAC_ND_A_DIM( SACp_inl_3837_rn) - 2)), ("WL expression with illegal dimension found!"));
              SAC_ASSURE_TYPE( (SAC_ND_A_SIZE( SACp_inl_3838__flat_82) == SAC_WL_SHAPE_FACTOR( SACp_inl_3837_rn, 1)), ("WL expression with illegal size found!"));
              SAC_ND_WRITE_ARRAY( SACp_inl_3837_rn, SAC_WL_OFFSET( SACp_inl_3837_rn)) = SACp_inl_3838__flat_82;
              SAC_WL_OFFSET( SACp_inl_3837_rn)++;

            SAC_WL_GRID_UNROLL_END( 1, SACp_inl_3847__flat_81_iv, SACp_inl_3845__type_392, 0, 1)
          SAC_WL_STRIDE_LOOP_END( 1, SACp_inl_3847__flat_81_iv, SACp_inl_3845__type_392, 0, 2, 1)
        SAC_WL_GRID_UNROLL_END( 0, SACp_inl_3847__flat_81_iv, SACp_inl_3846__type_391, 0, 1)
      SAC_WL_STRIDE_LOOP_END( 0, SACp_inl_3847__flat_81_iv, SACp_inl_3846__type_391, 0, 16, 1)
      /*
       * MT_SCHEDULER_END( 0, 2, 0, 0, 16, 2)
       */


      /*
       * WL_END__OFFSET( SACp_inl_3837_rn, 2, SACp_inl_3847__flat_81_iv, 2)
       */
    }

  SAC_PF_END_WITH( genarray)
  SAC_ND_INC_RC( SACp_inl_3837_rn, 1)
  /*
   * ND_FUN_AP( SACf_FFT1d__d___MAIN__cpx_32___MAIN__cpx_16, , 4, out_rc, SACl_fft_left, in, SACl_dir, in_rc, SACp_inl_3761_rn, in_rc, SACp_inl_3837_rn)
   */
  SACf_FFT1d__d___MAIN__cpx_32___MAIN__cpx_16( SAC_ND_ARG_out_rc( SACl_fft_left), SAC_ND_ARG_in( SACl_dir), SAC_ND_ARG_in_rc( SACp_inl_3761_rn), SAC_ND_ARG_in_rc( SACp_inl_3837_rn));

  /*
   * ND_FUN_AP( SACf_FFT1d__d___MAIN__cpx_32___MAIN__cpx_16, , 4, out_rc, SACl_fft_right, in, SACl_dir, in_rc, SACp_inl_3818_rn, in_rc, SACp_inl_3837_rn)
   */
  SACf_FFT1d__d___MAIN__cpx_32___MAIN__cpx_16( SAC_ND_ARG_out_rc( SACl_fft_right), SAC_ND_ARG_in( SACl_dir), SAC_ND_ARG_in_rc( SACp_inl_3818_rn), SAC_ND_ARG_in_rc( SACp_inl_3837_rn));

  SAC_ND_ALLOC_ARRAY( double, SACp_inl_4088__type_522, 1)
  SAC_PF_BEGIN_WITH( genarray)
    /*
     * WL_BEGIN__OFFSET( SACp_inl_4088__type_522, 2, SACp_inl_4094__type_521, 2)
     */
    { int SAC_WL_OFFSET( SACp_inl_4088__type_522);
      int SAC_WL_MT_SCHEDULE_START( 0);
      int SAC_WL_MT_SCHEDULE_STOP( 0);
      int SAC_WL_MT_SCHEDULE_START( 1);
      int SAC_WL_MT_SCHEDULE_STOP( 1);
      int SAC_i;
      int SAC_WL_SHAPE_FACTOR( SACp_inl_4088__type_522, 0) = 1 * SAC_ND_A_SHAPE( SACp_inl_4088__type_522, 1);
      int SAC_WL_SHAPE_FACTOR( SACp_inl_4088__type_522, 1) = 1;

      /*
       * MT_SCHEDULER_BEGIN( 0, 2, 0, 0, 64, 2)
       */
      SAC_WL_MT_SCHEDULE_START( 0) = 0;
      SAC_WL_MT_SCHEDULE_STOP( 0) = 64;
      SAC_WL_MT_SCHEDULE_START( 1) = 0;
      SAC_WL_MT_SCHEDULE_STOP( 1) = 2;

      /*
       * WL_INIT_OFFSET( SACp_inl_4088__type_522, 2, SACp_inl_4094__type_521, 2)
       */
      SAC_WL_OFFSET( SACp_inl_4088__type_522)
        = SAC_WL_MT_SCHEDULE_START( 0) * SAC_WL_SHAPE_FACTOR( SACp_inl_4088__type_522, 0)
        + SAC_WL_MT_SCHEDULE_START( 1) * SAC_WL_SHAPE_FACTOR( SACp_inl_4088__type_522, 1);

      SAC_WL_STRIDE_LOOP0_BEGIN( 0, SACp_inl_4094__type_521, SACp_inl_4093__type_523, 0, 32, 1)
        SAC_WL_GRID_UNROLL_BEGIN( 0, SACp_inl_4094__type_521, SACp_inl_4093__type_523, 0, 1)
          SAC_WL_STRIDE_LOOP0_BEGIN( 1, SACp_inl_4094__type_521, SACp_inl_4092__type_524, 0, 1, 1)
            SAC_WL_GRID_UNROLL_BEGIN( 1, SACp_inl_4094__type_521, SACp_inl_4092__type_524, 0, 1)
              SACp_inl_4030__type_507__SSA_8_32_2__ = ((SACp_inl_4093__type_523 * 2) + 0); 
              SAC_ND_IDX_SEL_S( SACp_inl_4030__type_507__SSA_8_32_2__, SACl_rofu, SACp_inl_3865__type_506__SSA_27)
              SACp_inl_3881__type_507__SSA_16_32_2__ = ((SACp_inl_4093__type_523 * 2) + 1); 
              SAC_ND_IDX_SEL_S( SACp_inl_3881__type_507__SSA_16_32_2__, SACl_fft_right, SACp_inl_3880__type_506__SSA_27)
              SAC_ND_IDX_SEL_S( SACp_inl_3881__type_507__SSA_16_32_2__, SACl_rofu, SACp_inl_3865__type_506__SSA_28)
              SAC_ND_IDX_SEL_S( SACp_inl_4030__type_507__SSA_8_32_2__, SACl_fft_right, SACp_inl_3880__type_506__SSA_28)
              SACp_inl_3899__flat_27__SSA_13 = (SACp_inl_3880__type_506__SSA_27 * SACp_inl_3865__type_506__SSA_28); 
              SACp_inl_3896__flat_24__SSA_13 = (SACp_inl_3880__type_506__SSA_28 * SACp_inl_3865__type_506__SSA_27); 
              SACp_inl_3895__flat_23__SSA_13 = (SACp_inl_3896__flat_24__SSA_13 - SACp_inl_3899__flat_27__SSA_13); 
              SAC_ND_IDX_SEL_S( SACp_inl_4030__type_507__SSA_8_32_2__, SACl_fft_left, SACp_inl_4044__type_506__SSA_8)
              SACp_inl_4059__flat_9__SSA_3 = (SACp_inl_4044__type_506__SSA_8 + SACp_inl_3895__flat_23__SSA_13); 
              /*
               * WL_ASSIGN( SACp_inl_4059__flat_9__SSA_3, 0, SACp_inl_4088__type_522, 2, SACp_inl_4094__type_521, 2, SACp_inl_4093__type_523, SACp_inl_4092__type_524)
               */
              SAC_TR_WL_PRINT( ("index vector [%d, %d] (== offset %d) -- offset %d -- assign", SACp_inl_4093__type_523, SACp_inl_4092__type_524, ( SAC_ND_A_SHAPE( SACp_inl_4088__type_522, 1) * SACp_inl_4093__type_523 + SACp_inl_4092__type_524 ), SAC_WL_OFFSET( SACp_inl_4088__type_522)));
              SAC_ASSURE_TYPE( (SAC_ND_A_DIM( SACp_inl_4059__flat_9__SSA_3) == (SAC_ND_A_DIM( SACp_inl_4088__type_522) - 2)), ("WL expression with illegal dimension found!"));
              SAC_ASSURE_TYPE( (SAC_ND_A_SIZE( SACp_inl_4059__flat_9__SSA_3) == SAC_WL_SHAPE_FACTOR( SACp_inl_4088__type_522, 1)), ("WL expression with illegal size found!"));
              SAC_ND_WRITE_ARRAY( SACp_inl_4088__type_522, SAC_WL_OFFSET( SACp_inl_4088__type_522)) = SACp_inl_4059__flat_9__SSA_3;
              SAC_WL_OFFSET( SACp_inl_4088__type_522)++;

            SAC_WL_GRID_UNROLL_END( 1, SACp_inl_4094__type_521, SACp_inl_4092__type_524, 0, 1)
          SAC_WL_STRIDE_LOOP_END( 1, SACp_inl_4094__type_521, SACp_inl_4092__type_524, 0, 1, 1)
          SAC_WL_STRIDE_LOOP0_BEGIN( 1, SACp_inl_4094__type_521, SACp_inl_4092__type_524, 1, 2, 1)
            SAC_WL_GRID_UNROLL_BEGIN( 1, SACp_inl_4094__type_521, SACp_inl_4092__type_524, 0, 1)
              SACp_inl_4030__type_507__SSA_5_32_2__ = ((SACp_inl_4093__type_523 * 2) + 1); 
              SACp_inl_3866__type_507__SSA_13_32_2__ = ((SACp_inl_4093__type_523 * 2) + 0); 
              SAC_ND_IDX_SEL_S( SACp_inl_3866__type_507__SSA_13_32_2__, SACl_rofu, SACp_inl_3865__type_506__SSA_21)
              SAC_ND_IDX_SEL_S( SACp_inl_4030__type_507__SSA_5_32_2__, SACl_fft_right, SACp_inl_3880__type_506__SSA_21)
              SACp_inl_3906__flat_34__SSA_10 = (SACp_inl_3880__type_506__SSA_21 * SACp_inl_3865__type_506__SSA_21); 
              SAC_ND_IDX_SEL_S( SACp_inl_4030__type_507__SSA_5_32_2__, SACl_rofu, SACp_inl_3865__type_506__SSA_22)
              SAC_ND_IDX_SEL_S( SACp_inl_3866__type_507__SSA_13_32_2__, SACl_fft_right, SACp_inl_3880__type_506__SSA_22)
              SACp_inl_3903__flat_31__SSA_10 = (SACp_inl_3880__type_506__SSA_22 * SACp_inl_3865__type_506__SSA_22); 
              SACp_inl_3902__flat_30__SSA_10 = (SACp_inl_3903__flat_31__SSA_10 + SACp_inl_3906__flat_34__SSA_10); 
              SAC_ND_IDX_SEL_S( SACp_inl_4030__type_507__SSA_5_32_2__, SACl_fft_left, SACp_inl_4044__type_506__SSA_5)
              SACp_inl_4062__flat_12__SSA_2 = (SACp_inl_4044__type_506__SSA_5 + SACp_inl_3902__flat_30__SSA_10); 
              /*
               * WL_ASSIGN( SACp_inl_4062__flat_12__SSA_2, 0, SACp_inl_4088__type_522, 2, SACp_inl_4094__type_521, 2, SACp_inl_4093__type_523, SACp_inl_4092__type_524)
               */
              SAC_TR_WL_PRINT( ("index vector [%d, %d] (== offset %d) -- offset %d -- assign", SACp_inl_4093__type_523, SACp_inl_4092__type_524, ( SAC_ND_A_SHAPE( SACp_inl_4088__type_522, 1) * SACp_inl_4093__type_523 + SACp_inl_4092__type_524 ), SAC_WL_OFFSET( SACp_inl_4088__type_522)));
              SAC_ASSURE_TYPE( (SAC_ND_A_DIM( SACp_inl_4062__flat_12__SSA_2) == (SAC_ND_A_DIM( SACp_inl_4088__type_522) - 2)), ("WL expression with illegal dimension found!"));
              SAC_ASSURE_TYPE( (SAC_ND_A_SIZE( SACp_inl_4062__flat_12__SSA_2) == SAC_WL_SHAPE_FACTOR( SACp_inl_4088__type_522, 1)), ("WL expression with illegal size found!"));
              SAC_ND_WRITE_ARRAY( SACp_inl_4088__type_522, SAC_WL_OFFSET( SACp_inl_4088__type_522)) = SACp_inl_4062__flat_12__SSA_2;
              SAC_WL_OFFSET( SACp_inl_4088__type_522)++;

            SAC_WL_GRID_UNROLL_END( 1, SACp_inl_4094__type_521, SACp_inl_4092__type_524, 0, 1)
          SAC_WL_STRIDE_LOOP_END( 1, SACp_inl_4094__type_521, SACp_inl_4092__type_524, 1, 2, 1)
        SAC_WL_GRID_UNROLL_END( 0, SACp_inl_4094__type_521, SACp_inl_4093__type_523, 0, 1)
      SAC_WL_STRIDE_LOOP_END( 0, SACp_inl_4094__type_521, SACp_inl_4093__type_523, 0, 32, 1)
      SAC_WL_STRIDE_LOOP0_BEGIN( 0, SACp_inl_4094__type_521, SACp_inl_4093__type_523, 32, 64, 1)
        SAC_WL_GRID_UNROLL_BEGIN( 0, SACp_inl_4094__type_521, SACp_inl_4093__type_523, 0, 1)
          SAC_WL_STRIDE_LOOP0_BEGIN( 1, SACp_inl_4094__type_521, SACp_inl_4092__type_524, 0, 1, 1)
            SAC_WL_GRID_UNROLL_BEGIN( 1, SACp_inl_4094__type_521, SACp_inl_4092__type_524, 0, 1)
              SACp_inl_3955__type_512__SSA_2 = (SACp_inl_4093__type_523 + -32); 
              SACp_inl_3962__type_507__SSA_8_32_2__ = ((SACp_inl_3955__type_512__SSA_2 * 2) + 0); 
              SAC_ND_IDX_SEL_S( SACp_inl_3962__type_507__SSA_8_32_2__, SACl_rofu, SACp_inl_3865__type_506__SSA_35)
              SACp_inl_3881__type_507__SSA_20_32_2__ = ((SACp_inl_3955__type_512__SSA_2 * 2) + 1); 
              SAC_ND_IDX_SEL_S( SACp_inl_3881__type_507__SSA_20_32_2__, SACl_fft_right, SACp_inl_3880__type_506__SSA_35)
              SAC_ND_IDX_SEL_S( SACp_inl_3881__type_507__SSA_20_32_2__, SACl_rofu, SACp_inl_3865__type_506__SSA_36)
              SAC_ND_IDX_SEL_S( SACp_inl_3962__type_507__SSA_8_32_2__, SACl_fft_right, SACp_inl_3880__type_506__SSA_36)
              SACp_inl_3899__flat_27__SSA_17 = (SACp_inl_3880__type_506__SSA_35 * SACp_inl_3865__type_506__SSA_36); 
              SACp_inl_3896__flat_24__SSA_17 = (SACp_inl_3880__type_506__SSA_36 * SACp_inl_3865__type_506__SSA_35); 
              SACp_inl_3895__flat_23__SSA_17 = (SACp_inl_3896__flat_24__SSA_17 - SACp_inl_3899__flat_27__SSA_17); 
              SAC_ND_IDX_SEL_S( SACp_inl_3962__type_507__SSA_8_32_2__, SACl_fft_left, SACp_inl_3976__type_506__SSA_8)
              SACp_inl_3991__flat_16__SSA_3 = (SACp_inl_3976__type_506__SSA_8 - SACp_inl_3895__flat_23__SSA_17); 
              /*
               * WL_ASSIGN( SACp_inl_3991__flat_16__SSA_3, 0, SACp_inl_4088__type_522, 2, SACp_inl_4094__type_521, 2, SACp_inl_4093__type_523, SACp_inl_4092__type_524)
               */
              SAC_TR_WL_PRINT( ("index vector [%d, %d] (== offset %d) -- offset %d -- assign", SACp_inl_4093__type_523, SACp_inl_4092__type_524, ( SAC_ND_A_SHAPE( SACp_inl_4088__type_522, 1) * SACp_inl_4093__type_523 + SACp_inl_4092__type_524 ), SAC_WL_OFFSET( SACp_inl_4088__type_522)));
              SAC_ASSURE_TYPE( (SAC_ND_A_DIM( SACp_inl_3991__flat_16__SSA_3) == (SAC_ND_A_DIM( SACp_inl_4088__type_522) - 2)), ("WL expression with illegal dimension found!"));
              SAC_ASSURE_TYPE( (SAC_ND_A_SIZE( SACp_inl_3991__flat_16__SSA_3) == SAC_WL_SHAPE_FACTOR( SACp_inl_4088__type_522, 1)), ("WL expression with illegal size found!"));
              SAC_ND_WRITE_ARRAY( SACp_inl_4088__type_522, SAC_WL_OFFSET( SACp_inl_4088__type_522)) = SACp_inl_3991__flat_16__SSA_3;
              SAC_WL_OFFSET( SACp_inl_4088__type_522)++;

            SAC_WL_GRID_UNROLL_END( 1, SACp_inl_4094__type_521, SACp_inl_4092__type_524, 0, 1)
          SAC_WL_STRIDE_LOOP_END( 1, SACp_inl_4094__type_521, SACp_inl_4092__type_524, 0, 1, 1)
          SAC_WL_STRIDE_LOOP0_BEGIN( 1, SACp_inl_4094__type_521, SACp_inl_4092__type_524, 1, 2, 1)
            SAC_WL_GRID_UNROLL_BEGIN( 1, SACp_inl_4094__type_521, SACp_inl_4092__type_524, 0, 1)
              SACp_inl_3955__type_512__SSA_1 = (SACp_inl_4093__type_523 + -32); 
              SACp_inl_3962__type_507__SSA_5_32_2__ = ((SACp_inl_3955__type_512__SSA_1 * 2) + 1); 
              SACp_inl_3866__type_507__SSA_17_32_2__ = ((SACp_inl_3955__type_512__SSA_1 * 2) + 0); 
              SAC_ND_IDX_SEL_S( SACp_inl_3866__type_507__SSA_17_32_2__, SACl_rofu, SACp_inl_3865__type_506__SSA_29)
              SAC_ND_IDX_SEL_S( SACp_inl_3962__type_507__SSA_5_32_2__, SACl_fft_right, SACp_inl_3880__type_506__SSA_29)
              SACp_inl_3906__flat_34__SSA_14 = (SACp_inl_3880__type_506__SSA_29 * SACp_inl_3865__type_506__SSA_29); 
              SAC_ND_IDX_SEL_S( SACp_inl_3962__type_507__SSA_5_32_2__, SACl_rofu, SACp_inl_3865__type_506__SSA_30)
              SAC_ND_IDX_SEL_S( SACp_inl_3866__type_507__SSA_17_32_2__, SACl_fft_right, SACp_inl_3880__type_506__SSA_30)
              SACp_inl_3903__flat_31__SSA_14 = (SACp_inl_3880__type_506__SSA_30 * SACp_inl_3865__type_506__SSA_30); 
              SACp_inl_3902__flat_30__SSA_14 = (SACp_inl_3903__flat_31__SSA_14 + SACp_inl_3906__flat_34__SSA_14); 
              SAC_ND_IDX_SEL_S( SACp_inl_3962__type_507__SSA_5_32_2__, SACl_fft_left, SACp_inl_3976__type_506__SSA_5)
              SACp_inl_3994__flat_19__SSA_2 = (SACp_inl_3976__type_506__SSA_5 - SACp_inl_3902__flat_30__SSA_14); 
              /*
               * WL_ASSIGN( SACp_inl_3994__flat_19__SSA_2, 0, SACp_inl_4088__type_522, 2, SACp_inl_4094__type_521, 2, SACp_inl_4093__type_523, SACp_inl_4092__type_524)
               */
              SAC_TR_WL_PRINT( ("index vector [%d, %d] (== offset %d) -- offset %d -- assign", SACp_inl_4093__type_523, SACp_inl_4092__type_524, ( SAC_ND_A_SHAPE( SACp_inl_4088__type_522, 1) * SACp_inl_4093__type_523 + SACp_inl_4092__type_524 ), SAC_WL_OFFSET( SACp_inl_4088__type_522)));
              SAC_ASSURE_TYPE( (SAC_ND_A_DIM( SACp_inl_3994__flat_19__SSA_2) == (SAC_ND_A_DIM( SACp_inl_4088__type_522) - 2)), ("WL expression with illegal dimension found!"));
              SAC_ASSURE_TYPE( (SAC_ND_A_SIZE( SACp_inl_3994__flat_19__SSA_2) == SAC_WL_SHAPE_FACTOR( SACp_inl_4088__type_522, 1)), ("WL expression with illegal size found!"));
              SAC_ND_WRITE_ARRAY( SACp_inl_4088__type_522, SAC_WL_OFFSET( SACp_inl_4088__type_522)) = SACp_inl_3994__flat_19__SSA_2;
              SAC_WL_OFFSET( SACp_inl_4088__type_522)++;

            SAC_WL_GRID_UNROLL_END( 1, SACp_inl_4094__type_521, SACp_inl_4092__type_524, 0, 1)
          SAC_WL_STRIDE_LOOP_END( 1, SACp_inl_4094__type_521, SACp_inl_4092__type_524, 1, 2, 1)
        SAC_WL_GRID_UNROLL_END( 0, SACp_inl_4094__type_521, SACp_inl_4093__type_523, 0, 1)
      SAC_WL_STRIDE_LOOP_END( 0, SACp_inl_4094__type_521, SACp_inl_4093__type_523, 32, 64, 1)
      /*
       * MT_SCHEDULER_END( 0, 2, 0, 0, 64, 2)
       */


      /*
       * WL_END__OFFSET( SACp_inl_4088__type_522, 2, SACp_inl_4094__type_521, 2)
       */
    }

  SAC_PF_END_WITH( genarray)
  SAC_ND_DEC_RC_FREE_ARRAY( SACl_fft_left, 1)
  SAC_ND_DEC_RC_FREE_ARRAY( SACl_fft_right, 1)
  SAC_ND_DEC_RC_FREE_ARRAY( SACl_rofu, 1)
  /*
   * ND_FUN_RET( , 1, out_rc, SACp_inl_4088__type_522, SAC__arg_1)
   */
  SAC_ND_RET_out_rc( SACp_inl_4088__type_522, SAC__arg_1)
  return;
}

/*
 * ND_FUN_DEC( SACf_FFT1d__d___MAIN__cpx_128___MAIN__cpx_64, void, 4, out_rc, double *, SAC__arg_1, in, double, SACl_dir, in_rc, double *, SACl_v, in_rc, double *, SACl_rofu)
 */
void SACf_FFT1d__d___MAIN__cpx_128___MAIN__cpx_64( SAC_ND_PARAM_out_rc( double *, SAC__arg_1), SAC_ND_PARAM_in( double, SACl_dir), SAC_ND_PARAM_in_rc( double *, SACl_v), SAC_ND_PARAM_in_rc( double *, SACl_rofu))
{ 
  double SACp_inl_6285_array_elem__SSA_1; 
  int SACp_inl_6264__flat_404_128_2__; 
  int SACp_inl_6263__flat_403_128_2__; 
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
   * ND_KS_DECL_ARRAY( int, SACp_inl_4442__type_541, 1, 2)
   */
  int *SACp_inl_4442__type_541;
  int SAC_ND_A_RC( SACp_inl_4442__type_541);
  const int SAC_ND_A_SIZE( SACp_inl_4442__type_541) = 2;
  const int SAC_ND_A_DIM( SACp_inl_4442__type_541) = 1;
  const int SAC_ND_A_SHAPE( SACp_inl_4442__type_541, 0) = 2;

  int SACp_inl_4441__type_543; 
  int SACp_inl_4440__type_544; 
  /*
   * ND_KS_DECL_ARRAY( double, SACp_inl_4436__type_542, 2, 128, 2)
   */
  double *SACp_inl_4436__type_542;
  int SAC_ND_A_RC( SACp_inl_4436__type_542);
  const int SAC_ND_A_SIZE( SACp_inl_4436__type_542) = 128*2;
  const int SAC_ND_A_DIM( SACp_inl_4436__type_542) = 2;
  const int SAC_ND_A_SHAPE( SACp_inl_4436__type_542, 0) = 128;
  const int SAC_ND_A_SHAPE( SACp_inl_4436__type_542, 1) = 2;

  /*
   * ND_KS_DECL_ARRAY( int, SACp_inl_4195__flat_81_iv, 1, 2)
   */
  int *SACp_inl_4195__flat_81_iv;
  int SAC_ND_A_RC( SACp_inl_4195__flat_81_iv);
  const int SAC_ND_A_SIZE( SACp_inl_4195__flat_81_iv) = 2;
  const int SAC_ND_A_DIM( SACp_inl_4195__flat_81_iv) = 1;
  const int SAC_ND_A_SHAPE( SACp_inl_4195__flat_81_iv, 0) = 2;

  int SACp_inl_4194__type_382; 
  int SACp_inl_4193__type_383; 
  int SACp_inl_4188__flat_84; 
  int SACp_inl_4187__flat_83_64_2__; 
  double SACp_inl_4186__flat_82; 
  /*
   * ND_KS_DECL_ARRAY( double, SACp_inl_4185_rn, 2, 32, 2)
   */
  double *SACp_inl_4185_rn;
  int SAC_ND_A_RC( SACp_inl_4185_rn);
  const int SAC_ND_A_SIZE( SACp_inl_4185_rn) = 32*2;
  const int SAC_ND_A_DIM( SACp_inl_4185_rn) = 2;
  const int SAC_ND_A_SHAPE( SACp_inl_4185_rn, 0) = 32;
  const int SAC_ND_A_SHAPE( SACp_inl_4185_rn, 1) = 2;

  /*
   * ND_KS_DECL_ARRAY( int, SACp_inl_4176__flat_81_iv, 1, 2)
   */
  int *SACp_inl_4176__flat_81_iv;
  int SAC_ND_A_RC( SACp_inl_4176__flat_81_iv);
  const int SAC_ND_A_SIZE( SACp_inl_4176__flat_81_iv) = 2;
  const int SAC_ND_A_DIM( SACp_inl_4176__flat_81_iv) = 1;
  const int SAC_ND_A_SHAPE( SACp_inl_4176__flat_81_iv, 0) = 2;

  int SACp_inl_4175__type_379; 
  int SACp_inl_4174__type_380; 
  int SACp_inl_4169__flat_84; 
  int SACp_inl_4168__flat_83_128_2__; 
  /*
   * ND_KS_DECL_ARRAY( double, SACp_inl_4166_rn, 2, 64, 2)
   */
  double *SACp_inl_4166_rn;
  int SAC_ND_A_RC( SACp_inl_4166_rn);
  const int SAC_ND_A_SIZE( SACp_inl_4166_rn) = 64*2;
  const int SAC_ND_A_DIM( SACp_inl_4166_rn) = 2;
  const int SAC_ND_A_SHAPE( SACp_inl_4166_rn, 0) = 64;
  const int SAC_ND_A_SHAPE( SACp_inl_4166_rn, 1) = 2;

  /*
   * ND_KS_DECL_ARRAY( int, SACp_inl_4119__flat_81_iv, 1, 2)
   */
  int *SACp_inl_4119__flat_81_iv;
  int SAC_ND_A_RC( SACp_inl_4119__flat_81_iv);
  const int SAC_ND_A_SIZE( SACp_inl_4119__flat_81_iv) = 2;
  const int SAC_ND_A_DIM( SACp_inl_4119__flat_81_iv) = 1;
  const int SAC_ND_A_SHAPE( SACp_inl_4119__flat_81_iv, 0) = 2;

  int SACp_inl_4118__type_376; 
  int SACp_inl_4117__type_377; 
  int SACp_inl_4112__flat_84; 
  int SACp_inl_4111__flat_83_128_2__; 
  double SACp_inl_4110__flat_82; 
  /*
   * ND_KS_DECL_ARRAY( double, SACp_inl_4109_rn, 2, 64, 2)
   */
  double *SACp_inl_4109_rn;
  int SAC_ND_A_RC( SACp_inl_4109_rn);
  const int SAC_ND_A_SIZE( SACp_inl_4109_rn) = 64*2;
  const int SAC_ND_A_DIM( SACp_inl_4109_rn) = 2;
  const int SAC_ND_A_SHAPE( SACp_inl_4109_rn, 0) = 64;
  const int SAC_ND_A_SHAPE( SACp_inl_4109_rn, 1) = 2;

  int SACp_inl_4378__type_527__SSA_5_64_2__; 
  int SACp_inl_4214__type_527__SSA_13_64_2__; 
  double SACp_inl_4213__type_526__SSA_21; 
  double SACp_inl_4228__type_526__SSA_21; 
  double SACp_inl_4254__flat_34__SSA_10; 
  double SACp_inl_4213__type_526__SSA_22; 
  double SACp_inl_4228__type_526__SSA_22; 
  double SACp_inl_4251__flat_31__SSA_10; 
  double SACp_inl_4250__flat_30__SSA_10; 
  double SACp_inl_4392__type_526__SSA_5; 
  double SACp_inl_4410__flat_12__SSA_2; 
  int SACp_inl_4378__type_527__SSA_8_64_2__; 
  double SACp_inl_4213__type_526__SSA_27; 
  int SACp_inl_4229__type_527__SSA_16_64_2__; 
  double SACp_inl_4228__type_526__SSA_27; 
  double SACp_inl_4213__type_526__SSA_28; 
  double SACp_inl_4228__type_526__SSA_28; 
  double SACp_inl_4247__flat_27__SSA_13; 
  double SACp_inl_4244__flat_24__SSA_13; 
  double SACp_esd_6317__SSA_6; 
  double SACp_inl_4243__flat_23__SSA_13; 
  double SACp_inl_4392__type_526__SSA_8; 
  double SACp_inl_4407__flat_9__SSA_3; 
  int SACp_inl_4303__type_532__SSA_1; 
  int SACp_inl_4310__type_527__SSA_5_64_2__; 
  int SACp_inl_4214__type_527__SSA_17_64_2__; 
  double SACp_inl_4213__type_526__SSA_29; 
  double SACp_inl_4228__type_526__SSA_29; 
  double SACp_inl_4254__flat_34__SSA_14; 
  double SACp_inl_4213__type_526__SSA_30; 
  double SACp_inl_4228__type_526__SSA_30; 
  double SACp_inl_4251__flat_31__SSA_14; 
  double SACp_inl_4250__flat_30__SSA_14; 
  double SACp_inl_4324__type_526__SSA_5; 
  double SACp_esd_6313__SSA_1; 
  double SACp_inl_4342__flat_19__SSA_2; 
  int SACp_inl_4303__type_532__SSA_2; 
  int SACp_inl_4310__type_527__SSA_8_64_2__; 
  double SACp_inl_4213__type_526__SSA_35; 
  int SACp_inl_4229__type_527__SSA_20_64_2__; 
  double SACp_inl_4228__type_526__SSA_35; 
  double SACp_inl_4213__type_526__SSA_36; 
  double SACp_inl_4228__type_526__SSA_36; 
  double SACp_inl_4247__flat_27__SSA_17; 
  double SACp_inl_4244__flat_24__SSA_17; 
  double SACp_esd_6317__SSA_8; 
  double SACp_inl_4243__flat_23__SSA_17; 
  double SACp_inl_4324__type_526__SSA_8; 
  double SACp_esd_6314__SSA_1; 
  double SACp_inl_4339__flat_16__SSA_3; 

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

  SAC_ND_ALLOC_ARRAY( double, SACp_inl_4109_rn, 1)
  SAC_PF_BEGIN_WITH( genarray)
    /*
     * WL_BEGIN__OFFSET( SACp_inl_4109_rn, 2, SACp_inl_4119__flat_81_iv, 2)
     */
    { int SAC_WL_OFFSET( SACp_inl_4109_rn);
      int SAC_WL_MT_SCHEDULE_START( 0);
      int SAC_WL_MT_SCHEDULE_STOP( 0);
      int SAC_WL_MT_SCHEDULE_START( 1);
      int SAC_WL_MT_SCHEDULE_STOP( 1);
      int SAC_i;
      int SAC_WL_SHAPE_FACTOR( SACp_inl_4109_rn, 0) = 1 * SAC_ND_A_SHAPE( SACp_inl_4109_rn, 1);
      int SAC_WL_SHAPE_FACTOR( SACp_inl_4109_rn, 1) = 1;

      /*
       * MT_SCHEDULER_BEGIN( 0, 2, 0, 0, 64, 2)
       */
      SAC_WL_MT_SCHEDULE_START( 0) = 0;
      SAC_WL_MT_SCHEDULE_STOP( 0) = 64;
      SAC_WL_MT_SCHEDULE_START( 1) = 0;
      SAC_WL_MT_SCHEDULE_STOP( 1) = 2;

      /*
       * WL_INIT_OFFSET( SACp_inl_4109_rn, 2, SACp_inl_4119__flat_81_iv, 2)
       */
      SAC_WL_OFFSET( SACp_inl_4109_rn)
        = SAC_WL_MT_SCHEDULE_START( 0) * SAC_WL_SHAPE_FACTOR( SACp_inl_4109_rn, 0)
        + SAC_WL_MT_SCHEDULE_START( 1) * SAC_WL_SHAPE_FACTOR( SACp_inl_4109_rn, 1);

      SAC_WL_STRIDE_LOOP0_BEGIN( 0, SACp_inl_4119__flat_81_iv, SACp_inl_4118__type_376, 0, 64, 1)
        SAC_WL_GRID_UNROLL_BEGIN( 0, SACp_inl_4119__flat_81_iv, SACp_inl_4118__type_376, 0, 1)
          SAC_WL_STRIDE_LOOP0_BEGIN( 1, SACp_inl_4119__flat_81_iv, SACp_inl_4117__type_377, 0, 2, 1)
            SAC_WL_GRID_UNROLL_BEGIN( 1, SACp_inl_4119__flat_81_iv, SACp_inl_4117__type_377, 0, 1)
              SACp_inl_4112__flat_84 = (2 * SACp_inl_4118__type_376); 
              SACp_inl_4111__flat_83_128_2__ = ((SACp_inl_4112__flat_84 * 2) + SACp_inl_4117__type_377); 
              SAC_ND_IDX_SEL_S( SACp_inl_4111__flat_83_128_2__, SACl_v, SACp_inl_4110__flat_82)
              /*
               * WL_ASSIGN( SACp_inl_4110__flat_82, 0, SACp_inl_4109_rn, 2, SACp_inl_4119__flat_81_iv, 2, SACp_inl_4118__type_376, SACp_inl_4117__type_377)
               */
              SAC_TR_WL_PRINT( ("index vector [%d, %d] (== offset %d) -- offset %d -- assign", SACp_inl_4118__type_376, SACp_inl_4117__type_377, ( SAC_ND_A_SHAPE( SACp_inl_4109_rn, 1) * SACp_inl_4118__type_376 + SACp_inl_4117__type_377 ), SAC_WL_OFFSET( SACp_inl_4109_rn)));
              SAC_ASSURE_TYPE( (SAC_ND_A_DIM( SACp_inl_4110__flat_82) == (SAC_ND_A_DIM( SACp_inl_4109_rn) - 2)), ("WL expression with illegal dimension found!"));
              SAC_ASSURE_TYPE( (SAC_ND_A_SIZE( SACp_inl_4110__flat_82) == SAC_WL_SHAPE_FACTOR( SACp_inl_4109_rn, 1)), ("WL expression with illegal size found!"));
              SAC_ND_WRITE_ARRAY( SACp_inl_4109_rn, SAC_WL_OFFSET( SACp_inl_4109_rn)) = SACp_inl_4110__flat_82;
              SAC_WL_OFFSET( SACp_inl_4109_rn)++;

            SAC_WL_GRID_UNROLL_END( 1, SACp_inl_4119__flat_81_iv, SACp_inl_4117__type_377, 0, 1)
          SAC_WL_STRIDE_LOOP_END( 1, SACp_inl_4119__flat_81_iv, SACp_inl_4117__type_377, 0, 2, 1)
        SAC_WL_GRID_UNROLL_END( 0, SACp_inl_4119__flat_81_iv, SACp_inl_4118__type_376, 0, 1)
      SAC_WL_STRIDE_LOOP_END( 0, SACp_inl_4119__flat_81_iv, SACp_inl_4118__type_376, 0, 64, 1)
      /*
       * MT_SCHEDULER_END( 0, 2, 0, 0, 64, 2)
       */


      /*
       * WL_END__OFFSET( SACp_inl_4109_rn, 2, SACp_inl_4119__flat_81_iv, 2)
       */
    }

  SAC_PF_END_WITH( genarray)
  SACp_inl_6264__flat_404_128_2__ = ((1 * 2) + 0); 
  SAC_ND_ALLOC_ARRAY( double, SACp_inl_4166_rn, 1)
  SAC_PF_BEGIN_WITH( genarray)
    /*
     * WL_BEGIN__OFFSET( SACp_inl_4166_rn, 2, SACp_inl_4176__flat_81_iv, 2)
     */
    { int SAC_WL_OFFSET( SACp_inl_4166_rn);
      int SAC_WL_MT_SCHEDULE_START( 0);
      int SAC_WL_MT_SCHEDULE_STOP( 0);
      int SAC_WL_MT_SCHEDULE_START( 1);
      int SAC_WL_MT_SCHEDULE_STOP( 1);
      int SAC_i;
      int SAC_WL_SHAPE_FACTOR( SACp_inl_4166_rn, 0) = 1 * SAC_ND_A_SHAPE( SACp_inl_4166_rn, 1);
      int SAC_WL_SHAPE_FACTOR( SACp_inl_4166_rn, 1) = 1;

      /*
       * MT_SCHEDULER_BEGIN( 0, 2, 0, 0, 64, 2)
       */
      SAC_WL_MT_SCHEDULE_START( 0) = 0;
      SAC_WL_MT_SCHEDULE_STOP( 0) = 64;
      SAC_WL_MT_SCHEDULE_START( 1) = 0;
      SAC_WL_MT_SCHEDULE_STOP( 1) = 2;

      /*
       * WL_INIT_OFFSET( SACp_inl_4166_rn, 2, SACp_inl_4176__flat_81_iv, 2)
       */
      SAC_WL_OFFSET( SACp_inl_4166_rn)
        = SAC_WL_MT_SCHEDULE_START( 0) * SAC_WL_SHAPE_FACTOR( SACp_inl_4166_rn, 0)
        + SAC_WL_MT_SCHEDULE_START( 1) * SAC_WL_SHAPE_FACTOR( SACp_inl_4166_rn, 1);

      SAC_WL_STRIDE_LOOP0_BEGIN( 0, SACp_inl_4176__flat_81_iv, SACp_inl_4175__type_379, 0, 64, 1)
        SAC_WL_GRID_UNROLL_BEGIN( 0, SACp_inl_4176__flat_81_iv, SACp_inl_4175__type_379, 0, 1)
          SAC_WL_STRIDE_LOOP0_BEGIN( 1, SACp_inl_4176__flat_81_iv, SACp_inl_4174__type_380, 0, 2, 1)
            SAC_WL_GRID_UNROLL_BEGIN( 1, SACp_inl_4176__flat_81_iv, SACp_inl_4174__type_380, 0, 1)
              SACp_inl_4169__flat_84 = (2 * SACp_inl_4175__type_379); 
              SACp_inl_4168__flat_83_128_2__ = ((SACp_inl_4169__flat_84 * 2) + SACp_inl_4174__type_380); 
              SACp_inl_6263__flat_403_128_2__ = (SACp_inl_6264__flat_404_128_2__ + SACp_inl_4168__flat_83_128_2__); 
              SAC_ND_IDX_SEL_S( SACp_inl_6263__flat_403_128_2__, SACl_v, SACp_inl_6285_array_elem__SSA_1)
              /*
               * WL_ASSIGN( SACp_inl_6285_array_elem__SSA_1, 0, SACp_inl_4166_rn, 2, SACp_inl_4176__flat_81_iv, 2, SACp_inl_4175__type_379, SACp_inl_4174__type_380)
               */
              SAC_TR_WL_PRINT( ("index vector [%d, %d] (== offset %d) -- offset %d -- assign", SACp_inl_4175__type_379, SACp_inl_4174__type_380, ( SAC_ND_A_SHAPE( SACp_inl_4166_rn, 1) * SACp_inl_4175__type_379 + SACp_inl_4174__type_380 ), SAC_WL_OFFSET( SACp_inl_4166_rn)));
              SAC_ASSURE_TYPE( (SAC_ND_A_DIM( SACp_inl_6285_array_elem__SSA_1) == (SAC_ND_A_DIM( SACp_inl_4166_rn) - 2)), ("WL expression with illegal dimension found!"));
              SAC_ASSURE_TYPE( (SAC_ND_A_SIZE( SACp_inl_6285_array_elem__SSA_1) == SAC_WL_SHAPE_FACTOR( SACp_inl_4166_rn, 1)), ("WL expression with illegal size found!"));
              SAC_ND_WRITE_ARRAY( SACp_inl_4166_rn, SAC_WL_OFFSET( SACp_inl_4166_rn)) = SACp_inl_6285_array_elem__SSA_1;
              SAC_WL_OFFSET( SACp_inl_4166_rn)++;

            SAC_WL_GRID_UNROLL_END( 1, SACp_inl_4176__flat_81_iv, SACp_inl_4174__type_380, 0, 1)
          SAC_WL_STRIDE_LOOP_END( 1, SACp_inl_4176__flat_81_iv, SACp_inl_4174__type_380, 0, 2, 1)
        SAC_WL_GRID_UNROLL_END( 0, SACp_inl_4176__flat_81_iv, SACp_inl_4175__type_379, 0, 1)
      SAC_WL_STRIDE_LOOP_END( 0, SACp_inl_4176__flat_81_iv, SACp_inl_4175__type_379, 0, 64, 1)
      /*
       * MT_SCHEDULER_END( 0, 2, 0, 0, 64, 2)
       */


      /*
       * WL_END__OFFSET( SACp_inl_4166_rn, 2, SACp_inl_4176__flat_81_iv, 2)
       */
    }

  SAC_PF_END_WITH( genarray)
  SAC_ND_DEC_RC_FREE_ARRAY( SACl_v, 1)
  SAC_ND_ALLOC_ARRAY( double, SACp_inl_4185_rn, 1)
  SAC_PF_BEGIN_WITH( genarray)
    /*
     * WL_BEGIN__OFFSET( SACp_inl_4185_rn, 2, SACp_inl_4195__flat_81_iv, 2)
     */
    { int SAC_WL_OFFSET( SACp_inl_4185_rn);
      int SAC_WL_MT_SCHEDULE_START( 0);
      int SAC_WL_MT_SCHEDULE_STOP( 0);
      int SAC_WL_MT_SCHEDULE_START( 1);
      int SAC_WL_MT_SCHEDULE_STOP( 1);
      int SAC_i;
      int SAC_WL_SHAPE_FACTOR( SACp_inl_4185_rn, 0) = 1 * SAC_ND_A_SHAPE( SACp_inl_4185_rn, 1);
      int SAC_WL_SHAPE_FACTOR( SACp_inl_4185_rn, 1) = 1;

      /*
       * MT_SCHEDULER_BEGIN( 0, 2, 0, 0, 32, 2)
       */
      SAC_WL_MT_SCHEDULE_START( 0) = 0;
      SAC_WL_MT_SCHEDULE_STOP( 0) = 32;
      SAC_WL_MT_SCHEDULE_START( 1) = 0;
      SAC_WL_MT_SCHEDULE_STOP( 1) = 2;

      /*
       * WL_INIT_OFFSET( SACp_inl_4185_rn, 2, SACp_inl_4195__flat_81_iv, 2)
       */
      SAC_WL_OFFSET( SACp_inl_4185_rn)
        = SAC_WL_MT_SCHEDULE_START( 0) * SAC_WL_SHAPE_FACTOR( SACp_inl_4185_rn, 0)
        + SAC_WL_MT_SCHEDULE_START( 1) * SAC_WL_SHAPE_FACTOR( SACp_inl_4185_rn, 1);

      SAC_WL_STRIDE_LOOP0_BEGIN( 0, SACp_inl_4195__flat_81_iv, SACp_inl_4194__type_382, 0, 32, 1)
        SAC_WL_GRID_UNROLL_BEGIN( 0, SACp_inl_4195__flat_81_iv, SACp_inl_4194__type_382, 0, 1)
          SAC_WL_STRIDE_LOOP0_BEGIN( 1, SACp_inl_4195__flat_81_iv, SACp_inl_4193__type_383, 0, 2, 1)
            SAC_WL_GRID_UNROLL_BEGIN( 1, SACp_inl_4195__flat_81_iv, SACp_inl_4193__type_383, 0, 1)
              SACp_inl_4188__flat_84 = (2 * SACp_inl_4194__type_382); 
              SACp_inl_4187__flat_83_64_2__ = ((SACp_inl_4188__flat_84 * 2) + SACp_inl_4193__type_383); 
              SAC_ND_IDX_SEL_S( SACp_inl_4187__flat_83_64_2__, SACl_rofu, SACp_inl_4186__flat_82)
              /*
               * WL_ASSIGN( SACp_inl_4186__flat_82, 0, SACp_inl_4185_rn, 2, SACp_inl_4195__flat_81_iv, 2, SACp_inl_4194__type_382, SACp_inl_4193__type_383)
               */
              SAC_TR_WL_PRINT( ("index vector [%d, %d] (== offset %d) -- offset %d -- assign", SACp_inl_4194__type_382, SACp_inl_4193__type_383, ( SAC_ND_A_SHAPE( SACp_inl_4185_rn, 1) * SACp_inl_4194__type_382 + SACp_inl_4193__type_383 ), SAC_WL_OFFSET( SACp_inl_4185_rn)));
              SAC_ASSURE_TYPE( (SAC_ND_A_DIM( SACp_inl_4186__flat_82) == (SAC_ND_A_DIM( SACp_inl_4185_rn) - 2)), ("WL expression with illegal dimension found!"));
              SAC_ASSURE_TYPE( (SAC_ND_A_SIZE( SACp_inl_4186__flat_82) == SAC_WL_SHAPE_FACTOR( SACp_inl_4185_rn, 1)), ("WL expression with illegal size found!"));
              SAC_ND_WRITE_ARRAY( SACp_inl_4185_rn, SAC_WL_OFFSET( SACp_inl_4185_rn)) = SACp_inl_4186__flat_82;
              SAC_WL_OFFSET( SACp_inl_4185_rn)++;

            SAC_WL_GRID_UNROLL_END( 1, SACp_inl_4195__flat_81_iv, SACp_inl_4193__type_383, 0, 1)
          SAC_WL_STRIDE_LOOP_END( 1, SACp_inl_4195__flat_81_iv, SACp_inl_4193__type_383, 0, 2, 1)
        SAC_WL_GRID_UNROLL_END( 0, SACp_inl_4195__flat_81_iv, SACp_inl_4194__type_382, 0, 1)
      SAC_WL_STRIDE_LOOP_END( 0, SACp_inl_4195__flat_81_iv, SACp_inl_4194__type_382, 0, 32, 1)
      /*
       * MT_SCHEDULER_END( 0, 2, 0, 0, 32, 2)
       */


      /*
       * WL_END__OFFSET( SACp_inl_4185_rn, 2, SACp_inl_4195__flat_81_iv, 2)
       */
    }

  SAC_PF_END_WITH( genarray)
  SAC_ND_INC_RC( SACp_inl_4185_rn, 1)
  /*
   * ND_FUN_AP( SACf_FFT1d__d___MAIN__cpx_64___MAIN__cpx_32, , 4, out_rc, SACl_fft_left, in, SACl_dir, in_rc, SACp_inl_4109_rn, in_rc, SACp_inl_4185_rn)
   */
  SACf_FFT1d__d___MAIN__cpx_64___MAIN__cpx_32( SAC_ND_ARG_out_rc( SACl_fft_left), SAC_ND_ARG_in( SACl_dir), SAC_ND_ARG_in_rc( SACp_inl_4109_rn), SAC_ND_ARG_in_rc( SACp_inl_4185_rn));

  /*
   * ND_FUN_AP( SACf_FFT1d__d___MAIN__cpx_64___MAIN__cpx_32, , 4, out_rc, SACl_fft_right, in, SACl_dir, in_rc, SACp_inl_4166_rn, in_rc, SACp_inl_4185_rn)
   */
  SACf_FFT1d__d___MAIN__cpx_64___MAIN__cpx_32( SAC_ND_ARG_out_rc( SACl_fft_right), SAC_ND_ARG_in( SACl_dir), SAC_ND_ARG_in_rc( SACp_inl_4166_rn), SAC_ND_ARG_in_rc( SACp_inl_4185_rn));

  SAC_ND_ALLOC_ARRAY( double, SACp_inl_4436__type_542, 1)
  SAC_PF_BEGIN_WITH( genarray)
    /*
     * WL_BEGIN__OFFSET( SACp_inl_4436__type_542, 2, SACp_inl_4442__type_541, 2)
     */
    { int SAC_WL_OFFSET( SACp_inl_4436__type_542);
      int SAC_WL_MT_SCHEDULE_START( 0);
      int SAC_WL_MT_SCHEDULE_STOP( 0);
      int SAC_WL_MT_SCHEDULE_START( 1);
      int SAC_WL_MT_SCHEDULE_STOP( 1);
      int SAC_i;
      int SAC_WL_SHAPE_FACTOR( SACp_inl_4436__type_542, 0) = 1 * SAC_ND_A_SHAPE( SACp_inl_4436__type_542, 1);
      int SAC_WL_SHAPE_FACTOR( SACp_inl_4436__type_542, 1) = 1;

      /*
       * MT_SCHEDULER_BEGIN( 0, 2, 0, 0, 128, 2)
       */
      SAC_WL_MT_SCHEDULE_START( 0) = 0;
      SAC_WL_MT_SCHEDULE_STOP( 0) = 128;
      SAC_WL_MT_SCHEDULE_START( 1) = 0;
      SAC_WL_MT_SCHEDULE_STOP( 1) = 2;

      /*
       * WL_INIT_OFFSET( SACp_inl_4436__type_542, 2, SACp_inl_4442__type_541, 2)
       */
      SAC_WL_OFFSET( SACp_inl_4436__type_542)
        = SAC_WL_MT_SCHEDULE_START( 0) * SAC_WL_SHAPE_FACTOR( SACp_inl_4436__type_542, 0)
        + SAC_WL_MT_SCHEDULE_START( 1) * SAC_WL_SHAPE_FACTOR( SACp_inl_4436__type_542, 1);

      SAC_WL_STRIDE_LOOP0_BEGIN( 0, SACp_inl_4442__type_541, SACp_inl_4441__type_543, 0, 64, 1)
        SAC_WL_GRID_UNROLL_BEGIN( 0, SACp_inl_4442__type_541, SACp_inl_4441__type_543, 0, 1)
          SAC_WL_STRIDE_LOOP0_BEGIN( 1, SACp_inl_4442__type_541, SACp_inl_4440__type_544, 0, 1, 1)
            SAC_WL_GRID_UNROLL_BEGIN( 1, SACp_inl_4442__type_541, SACp_inl_4440__type_544, 0, 1)
              SACp_inl_4378__type_527__SSA_8_64_2__ = ((SACp_inl_4441__type_543 * 2) + 0); 
              SAC_ND_IDX_SEL_S( SACp_inl_4378__type_527__SSA_8_64_2__, SACl_rofu, SACp_inl_4213__type_526__SSA_27)
              SACp_inl_4229__type_527__SSA_16_64_2__ = ((SACp_inl_4441__type_543 * 2) + 1); 
              SAC_ND_IDX_SEL_S( SACp_inl_4229__type_527__SSA_16_64_2__, SACl_fft_right, SACp_inl_4228__type_526__SSA_27)
              SAC_ND_IDX_SEL_S( SACp_inl_4229__type_527__SSA_16_64_2__, SACl_rofu, SACp_inl_4213__type_526__SSA_28)
              SAC_ND_IDX_SEL_S( SACp_inl_4378__type_527__SSA_8_64_2__, SACl_fft_right, SACp_inl_4228__type_526__SSA_28)
              SACp_inl_4247__flat_27__SSA_13 = (SACp_inl_4228__type_526__SSA_27 * SACp_inl_4213__type_526__SSA_28); 
              SACp_inl_4244__flat_24__SSA_13 = (SACp_inl_4228__type_526__SSA_28 * SACp_inl_4213__type_526__SSA_27); 
              SACp_inl_4243__flat_23__SSA_13 = (SACp_inl_4244__flat_24__SSA_13 - SACp_inl_4247__flat_27__SSA_13); 
              SAC_ND_IDX_SEL_S( SACp_inl_4378__type_527__SSA_8_64_2__, SACl_fft_left, SACp_inl_4392__type_526__SSA_8)
              SACp_inl_4407__flat_9__SSA_3 = (SACp_inl_4392__type_526__SSA_8 + SACp_inl_4243__flat_23__SSA_13); 
              /*
               * WL_ASSIGN( SACp_inl_4407__flat_9__SSA_3, 0, SACp_inl_4436__type_542, 2, SACp_inl_4442__type_541, 2, SACp_inl_4441__type_543, SACp_inl_4440__type_544)
               */
              SAC_TR_WL_PRINT( ("index vector [%d, %d] (== offset %d) -- offset %d -- assign", SACp_inl_4441__type_543, SACp_inl_4440__type_544, ( SAC_ND_A_SHAPE( SACp_inl_4436__type_542, 1) * SACp_inl_4441__type_543 + SACp_inl_4440__type_544 ), SAC_WL_OFFSET( SACp_inl_4436__type_542)));
              SAC_ASSURE_TYPE( (SAC_ND_A_DIM( SACp_inl_4407__flat_9__SSA_3) == (SAC_ND_A_DIM( SACp_inl_4436__type_542) - 2)), ("WL expression with illegal dimension found!"));
              SAC_ASSURE_TYPE( (SAC_ND_A_SIZE( SACp_inl_4407__flat_9__SSA_3) == SAC_WL_SHAPE_FACTOR( SACp_inl_4436__type_542, 1)), ("WL expression with illegal size found!"));
              SAC_ND_WRITE_ARRAY( SACp_inl_4436__type_542, SAC_WL_OFFSET( SACp_inl_4436__type_542)) = SACp_inl_4407__flat_9__SSA_3;
              SAC_WL_OFFSET( SACp_inl_4436__type_542)++;

            SAC_WL_GRID_UNROLL_END( 1, SACp_inl_4442__type_541, SACp_inl_4440__type_544, 0, 1)
          SAC_WL_STRIDE_LOOP_END( 1, SACp_inl_4442__type_541, SACp_inl_4440__type_544, 0, 1, 1)
          SAC_WL_STRIDE_LOOP0_BEGIN( 1, SACp_inl_4442__type_541, SACp_inl_4440__type_544, 1, 2, 1)
            SAC_WL_GRID_UNROLL_BEGIN( 1, SACp_inl_4442__type_541, SACp_inl_4440__type_544, 0, 1)
              SACp_inl_4378__type_527__SSA_5_64_2__ = ((SACp_inl_4441__type_543 * 2) + 1); 
              SACp_inl_4214__type_527__SSA_13_64_2__ = ((SACp_inl_4441__type_543 * 2) + 0); 
              SAC_ND_IDX_SEL_S( SACp_inl_4214__type_527__SSA_13_64_2__, SACl_rofu, SACp_inl_4213__type_526__SSA_21)
              SAC_ND_IDX_SEL_S( SACp_inl_4378__type_527__SSA_5_64_2__, SACl_fft_right, SACp_inl_4228__type_526__SSA_21)
              SACp_inl_4254__flat_34__SSA_10 = (SACp_inl_4228__type_526__SSA_21 * SACp_inl_4213__type_526__SSA_21); 
              SAC_ND_IDX_SEL_S( SACp_inl_4378__type_527__SSA_5_64_2__, SACl_rofu, SACp_inl_4213__type_526__SSA_22)
              SAC_ND_IDX_SEL_S( SACp_inl_4214__type_527__SSA_13_64_2__, SACl_fft_right, SACp_inl_4228__type_526__SSA_22)
              SACp_inl_4251__flat_31__SSA_10 = (SACp_inl_4228__type_526__SSA_22 * SACp_inl_4213__type_526__SSA_22); 
              SACp_inl_4250__flat_30__SSA_10 = (SACp_inl_4251__flat_31__SSA_10 + SACp_inl_4254__flat_34__SSA_10); 
              SAC_ND_IDX_SEL_S( SACp_inl_4378__type_527__SSA_5_64_2__, SACl_fft_left, SACp_inl_4392__type_526__SSA_5)
              SACp_inl_4410__flat_12__SSA_2 = (SACp_inl_4392__type_526__SSA_5 + SACp_inl_4250__flat_30__SSA_10); 
              /*
               * WL_ASSIGN( SACp_inl_4410__flat_12__SSA_2, 0, SACp_inl_4436__type_542, 2, SACp_inl_4442__type_541, 2, SACp_inl_4441__type_543, SACp_inl_4440__type_544)
               */
              SAC_TR_WL_PRINT( ("index vector [%d, %d] (== offset %d) -- offset %d -- assign", SACp_inl_4441__type_543, SACp_inl_4440__type_544, ( SAC_ND_A_SHAPE( SACp_inl_4436__type_542, 1) * SACp_inl_4441__type_543 + SACp_inl_4440__type_544 ), SAC_WL_OFFSET( SACp_inl_4436__type_542)));
              SAC_ASSURE_TYPE( (SAC_ND_A_DIM( SACp_inl_4410__flat_12__SSA_2) == (SAC_ND_A_DIM( SACp_inl_4436__type_542) - 2)), ("WL expression with illegal dimension found!"));
              SAC_ASSURE_TYPE( (SAC_ND_A_SIZE( SACp_inl_4410__flat_12__SSA_2) == SAC_WL_SHAPE_FACTOR( SACp_inl_4436__type_542, 1)), ("WL expression with illegal size found!"));
              SAC_ND_WRITE_ARRAY( SACp_inl_4436__type_542, SAC_WL_OFFSET( SACp_inl_4436__type_542)) = SACp_inl_4410__flat_12__SSA_2;
              SAC_WL_OFFSET( SACp_inl_4436__type_542)++;

            SAC_WL_GRID_UNROLL_END( 1, SACp_inl_4442__type_541, SACp_inl_4440__type_544, 0, 1)
          SAC_WL_STRIDE_LOOP_END( 1, SACp_inl_4442__type_541, SACp_inl_4440__type_544, 1, 2, 1)
        SAC_WL_GRID_UNROLL_END( 0, SACp_inl_4442__type_541, SACp_inl_4441__type_543, 0, 1)
      SAC_WL_STRIDE_LOOP_END( 0, SACp_inl_4442__type_541, SACp_inl_4441__type_543, 0, 64, 1)
      SAC_WL_STRIDE_LOOP0_BEGIN( 0, SACp_inl_4442__type_541, SACp_inl_4441__type_543, 64, 128, 1)
        SAC_WL_GRID_UNROLL_BEGIN( 0, SACp_inl_4442__type_541, SACp_inl_4441__type_543, 0, 1)
          SAC_WL_STRIDE_LOOP0_BEGIN( 1, SACp_inl_4442__type_541, SACp_inl_4440__type_544, 0, 1, 1)
            SAC_WL_GRID_UNROLL_BEGIN( 1, SACp_inl_4442__type_541, SACp_inl_4440__type_544, 0, 1)
              SACp_inl_4303__type_532__SSA_2 = (SACp_inl_4441__type_543 + -64); 
              SACp_inl_4310__type_527__SSA_8_64_2__ = ((SACp_inl_4303__type_532__SSA_2 * 2) + 0); 
              SAC_ND_IDX_SEL_S( SACp_inl_4310__type_527__SSA_8_64_2__, SACl_rofu, SACp_inl_4213__type_526__SSA_35)
              SACp_inl_4229__type_527__SSA_20_64_2__ = ((SACp_inl_4303__type_532__SSA_2 * 2) + 1); 
              SAC_ND_IDX_SEL_S( SACp_inl_4229__type_527__SSA_20_64_2__, SACl_fft_right, SACp_inl_4228__type_526__SSA_35)
              SAC_ND_IDX_SEL_S( SACp_inl_4229__type_527__SSA_20_64_2__, SACl_rofu, SACp_inl_4213__type_526__SSA_36)
              SAC_ND_IDX_SEL_S( SACp_inl_4310__type_527__SSA_8_64_2__, SACl_fft_right, SACp_inl_4228__type_526__SSA_36)
              SACp_inl_4247__flat_27__SSA_17 = (SACp_inl_4228__type_526__SSA_35 * SACp_inl_4213__type_526__SSA_36); 
              SACp_inl_4244__flat_24__SSA_17 = (SACp_inl_4228__type_526__SSA_36 * SACp_inl_4213__type_526__SSA_35); 
              SACp_inl_4243__flat_23__SSA_17 = (SACp_inl_4244__flat_24__SSA_17 - SACp_inl_4247__flat_27__SSA_17); 
              SAC_ND_IDX_SEL_S( SACp_inl_4310__type_527__SSA_8_64_2__, SACl_fft_left, SACp_inl_4324__type_526__SSA_8)
              SACp_inl_4339__flat_16__SSA_3 = (SACp_inl_4324__type_526__SSA_8 - SACp_inl_4243__flat_23__SSA_17); 
              /*
               * WL_ASSIGN( SACp_inl_4339__flat_16__SSA_3, 0, SACp_inl_4436__type_542, 2, SACp_inl_4442__type_541, 2, SACp_inl_4441__type_543, SACp_inl_4440__type_544)
               */
              SAC_TR_WL_PRINT( ("index vector [%d, %d] (== offset %d) -- offset %d -- assign", SACp_inl_4441__type_543, SACp_inl_4440__type_544, ( SAC_ND_A_SHAPE( SACp_inl_4436__type_542, 1) * SACp_inl_4441__type_543 + SACp_inl_4440__type_544 ), SAC_WL_OFFSET( SACp_inl_4436__type_542)));
              SAC_ASSURE_TYPE( (SAC_ND_A_DIM( SACp_inl_4339__flat_16__SSA_3) == (SAC_ND_A_DIM( SACp_inl_4436__type_542) - 2)), ("WL expression with illegal dimension found!"));
              SAC_ASSURE_TYPE( (SAC_ND_A_SIZE( SACp_inl_4339__flat_16__SSA_3) == SAC_WL_SHAPE_FACTOR( SACp_inl_4436__type_542, 1)), ("WL expression with illegal size found!"));
              SAC_ND_WRITE_ARRAY( SACp_inl_4436__type_542, SAC_WL_OFFSET( SACp_inl_4436__type_542)) = SACp_inl_4339__flat_16__SSA_3;
              SAC_WL_OFFSET( SACp_inl_4436__type_542)++;

            SAC_WL_GRID_UNROLL_END( 1, SACp_inl_4442__type_541, SACp_inl_4440__type_544, 0, 1)
          SAC_WL_STRIDE_LOOP_END( 1, SACp_inl_4442__type_541, SACp_inl_4440__type_544, 0, 1, 1)
          SAC_WL_STRIDE_LOOP0_BEGIN( 1, SACp_inl_4442__type_541, SACp_inl_4440__type_544, 1, 2, 1)
            SAC_WL_GRID_UNROLL_BEGIN( 1, SACp_inl_4442__type_541, SACp_inl_4440__type_544, 0, 1)
              SACp_inl_4303__type_532__SSA_1 = (SACp_inl_4441__type_543 + -64); 
              SACp_inl_4310__type_527__SSA_5_64_2__ = ((SACp_inl_4303__type_532__SSA_1 * 2) + 1); 
              SACp_inl_4214__type_527__SSA_17_64_2__ = ((SACp_inl_4303__type_532__SSA_1 * 2) + 0); 
              SAC_ND_IDX_SEL_S( SACp_inl_4214__type_527__SSA_17_64_2__, SACl_rofu, SACp_inl_4213__type_526__SSA_29)
              SAC_ND_IDX_SEL_S( SACp_inl_4310__type_527__SSA_5_64_2__, SACl_fft_right, SACp_inl_4228__type_526__SSA_29)
              SACp_inl_4254__flat_34__SSA_14 = (SACp_inl_4228__type_526__SSA_29 * SACp_inl_4213__type_526__SSA_29); 
              SAC_ND_IDX_SEL_S( SACp_inl_4310__type_527__SSA_5_64_2__, SACl_rofu, SACp_inl_4213__type_526__SSA_30)
              SAC_ND_IDX_SEL_S( SACp_inl_4214__type_527__SSA_17_64_2__, SACl_fft_right, SACp_inl_4228__type_526__SSA_30)
              SACp_inl_4251__flat_31__SSA_14 = (SACp_inl_4228__type_526__SSA_30 * SACp_inl_4213__type_526__SSA_30); 
              SACp_inl_4250__flat_30__SSA_14 = (SACp_inl_4251__flat_31__SSA_14 + SACp_inl_4254__flat_34__SSA_14); 
              SAC_ND_IDX_SEL_S( SACp_inl_4310__type_527__SSA_5_64_2__, SACl_fft_left, SACp_inl_4324__type_526__SSA_5)
              SACp_inl_4342__flat_19__SSA_2 = (SACp_inl_4324__type_526__SSA_5 - SACp_inl_4250__flat_30__SSA_14); 
              /*
               * WL_ASSIGN( SACp_inl_4342__flat_19__SSA_2, 0, SACp_inl_4436__type_542, 2, SACp_inl_4442__type_541, 2, SACp_inl_4441__type_543, SACp_inl_4440__type_544)
               */
              SAC_TR_WL_PRINT( ("index vector [%d, %d] (== offset %d) -- offset %d -- assign", SACp_inl_4441__type_543, SACp_inl_4440__type_544, ( SAC_ND_A_SHAPE( SACp_inl_4436__type_542, 1) * SACp_inl_4441__type_543 + SACp_inl_4440__type_544 ), SAC_WL_OFFSET( SACp_inl_4436__type_542)));
              SAC_ASSURE_TYPE( (SAC_ND_A_DIM( SACp_inl_4342__flat_19__SSA_2) == (SAC_ND_A_DIM( SACp_inl_4436__type_542) - 2)), ("WL expression with illegal dimension found!"));
              SAC_ASSURE_TYPE( (SAC_ND_A_SIZE( SACp_inl_4342__flat_19__SSA_2) == SAC_WL_SHAPE_FACTOR( SACp_inl_4436__type_542, 1)), ("WL expression with illegal size found!"));
              SAC_ND_WRITE_ARRAY( SACp_inl_4436__type_542, SAC_WL_OFFSET( SACp_inl_4436__type_542)) = SACp_inl_4342__flat_19__SSA_2;
              SAC_WL_OFFSET( SACp_inl_4436__type_542)++;

            SAC_WL_GRID_UNROLL_END( 1, SACp_inl_4442__type_541, SACp_inl_4440__type_544, 0, 1)
          SAC_WL_STRIDE_LOOP_END( 1, SACp_inl_4442__type_541, SACp_inl_4440__type_544, 1, 2, 1)
        SAC_WL_GRID_UNROLL_END( 0, SACp_inl_4442__type_541, SACp_inl_4441__type_543, 0, 1)
      SAC_WL_STRIDE_LOOP_END( 0, SACp_inl_4442__type_541, SACp_inl_4441__type_543, 64, 128, 1)
      /*
       * MT_SCHEDULER_END( 0, 2, 0, 0, 128, 2)
       */


      /*
       * WL_END__OFFSET( SACp_inl_4436__type_542, 2, SACp_inl_4442__type_541, 2)
       */
    }

  SAC_PF_END_WITH( genarray)
  SAC_ND_DEC_RC_FREE_ARRAY( SACl_fft_left, 1)
  SAC_ND_DEC_RC_FREE_ARRAY( SACl_fft_right, 1)
  SAC_ND_DEC_RC_FREE_ARRAY( SACl_rofu, 1)
  /*
   * ND_FUN_RET( , 1, out_rc, SACp_inl_4436__type_542, SAC__arg_1)
   */
  SAC_ND_RET_out_rc( SACp_inl_4436__type_542, SAC__arg_1)
  return;
}

/*
 * ND_FUN_DEC( SACf_FFT1d_Slice__d___MAIN__cpx_128_32_128___MAIN__cpx_64, void, 4, out_rc, double *, SAC__arg_1, in, double, SACl_dir, in_rc, double *, SACl_a, in_rc, double *, SACl_rofu)
 */
void SACf_FFT1d_Slice__d___MAIN__cpx_128_32_128___MAIN__cpx_64( SAC_ND_PARAM_out_rc( double *, SAC__arg_1), SAC_ND_PARAM_in( double, SACl_dir), SAC_ND_PARAM_in_rc( double *, SACl_a), SAC_ND_PARAM_in_rc( double *, SACl_rofu))
{ 
  /*
   * ND_KS_DECL_ARRAY( double, SACp_inl_6424_result__SSA_1, 4, 128, 32, 128, 2)
   */
  double *SACp_inl_6424_result__SSA_1;
  int SAC_ND_A_RC( SACp_inl_6424_result__SSA_1);
  const int SAC_ND_A_SIZE( SACp_inl_6424_result__SSA_1) = 128*32*128*2;
  const int SAC_ND_A_DIM( SACp_inl_6424_result__SSA_1) = 4;
  const int SAC_ND_A_SHAPE( SACp_inl_6424_result__SSA_1, 0) = 128;
  const int SAC_ND_A_SHAPE( SACp_inl_6424_result__SSA_1, 1) = 32;
  const int SAC_ND_A_SHAPE( SACp_inl_6424_result__SSA_1, 2) = 128;
  const int SAC_ND_A_SHAPE( SACp_inl_6424_result__SSA_1, 3) = 2;

  /*
   * ND_KS_DECL_ARRAY( double, SACp_inl_6423_slice__SSA_1, 2, 128, 2)
   */
  double *SACp_inl_6423_slice__SSA_1;
  int SAC_ND_A_RC( SACp_inl_6423_slice__SSA_1);
  const int SAC_ND_A_SIZE( SACp_inl_6423_slice__SSA_1) = 128*2;
  const int SAC_ND_A_DIM( SACp_inl_6423_slice__SSA_1) = 2;
  const int SAC_ND_A_SHAPE( SACp_inl_6423_slice__SSA_1, 0) = 128;
  const int SAC_ND_A_SHAPE( SACp_inl_6423_slice__SSA_1, 1) = 2;

  int SACp_inl_6421__type_652; 
  int SACp_inl_6420__type_651; 
  /*
   * ND_KS_DECL_ARRAY( int, SACp_inl_6419__flat_312_iv, 1, 2)
   */
  int *SACp_inl_6419__flat_312_iv;
  int SAC_ND_A_RC( SACp_inl_6419__flat_312_iv);
  const int SAC_ND_A_SIZE( SACp_inl_6419__flat_312_iv) = 2;
  const int SAC_ND_A_DIM( SACp_inl_6419__flat_312_iv) = 1;
  const int SAC_ND_A_SHAPE( SACp_inl_6419__flat_312_iv, 0) = 2;

  /*
   * ND_KS_DECL_ARRAY( int, SACp_inl_6363__type_588, 1, 2)
   */
  int *SACp_inl_6363__type_588;
  int SAC_ND_A_RC( SACp_inl_6363__type_588);
  const int SAC_ND_A_SIZE( SACp_inl_6363__type_588) = 2;
  const int SAC_ND_A_DIM( SACp_inl_6363__type_588) = 1;
  const int SAC_ND_A_SHAPE( SACp_inl_6363__type_588, 0) = 2;

  int SACp_inl_6362__type_583; 
  int SACp_inl_6361__type_582; 
  int SACp_inl_6356__type_581_128_32_128_2__; 
  double SACp_inl_6355__type_580; 
  /*
   * ND_KS_DECL_ARRAY( double, SACp_inl_6354_rd, 2, 128, 2)
   */
  double *SACp_inl_6354_rd;
  int SAC_ND_A_RC( SACp_inl_6354_rd);
  const int SAC_ND_A_SIZE( SACp_inl_6354_rd) = 128*2;
  const int SAC_ND_A_DIM( SACp_inl_6354_rd) = 2;
  const int SAC_ND_A_SHAPE( SACp_inl_6354_rd, 0) = 128;
  const int SAC_ND_A_SHAPE( SACp_inl_6354_rd, 1) = 2;


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

  SAC_ND_ALLOC_ARRAY( double, SACp_inl_6424_result__SSA_1, 1)
  SAC_PF_BEGIN_WITH( modarray)
    /*
     * WL_BEGIN__OFFSET( SACp_inl_6424_result__SSA_1, 4, SACp_inl_6419__flat_312_iv, 2)
     */
    { int SAC_WL_OFFSET( SACp_inl_6424_result__SSA_1);
      int SAC_WL_MT_SCHEDULE_START( 0);
      int SAC_WL_MT_SCHEDULE_STOP( 0);
      int SAC_WL_MT_SCHEDULE_START( 1);
      int SAC_WL_MT_SCHEDULE_STOP( 1);
      int SAC_i;
      int SAC_WL_SHAPE_FACTOR( SACp_inl_6424_result__SSA_1, 0) = 1 * SAC_ND_A_SHAPE( SACp_inl_6424_result__SSA_1, 1) * SAC_ND_A_SHAPE( SACp_inl_6424_result__SSA_1, 2) * SAC_ND_A_SHAPE( SACp_inl_6424_result__SSA_1, 3);
      int SAC_WL_SHAPE_FACTOR( SACp_inl_6424_result__SSA_1, 1) = 1 * SAC_ND_A_SHAPE( SACp_inl_6424_result__SSA_1, 2) * SAC_ND_A_SHAPE( SACp_inl_6424_result__SSA_1, 3);

      /*
       * MT_SCHEDULER_BEGIN( 0, 2, 0, 0, 128, 32)
       */
      SAC_WL_MT_SCHEDULE_START( 0) = 0;
      SAC_WL_MT_SCHEDULE_STOP( 0) = 128;
      SAC_WL_MT_SCHEDULE_START( 1) = 0;
      SAC_WL_MT_SCHEDULE_STOP( 1) = 32;

      /*
       * WL_INIT_OFFSET( SACp_inl_6424_result__SSA_1, 4, SACp_inl_6419__flat_312_iv, 2)
       */
      SAC_WL_OFFSET( SACp_inl_6424_result__SSA_1)
        = SAC_WL_MT_SCHEDULE_START( 0) * SAC_WL_SHAPE_FACTOR( SACp_inl_6424_result__SSA_1, 0)
        + SAC_WL_MT_SCHEDULE_START( 1) * SAC_WL_SHAPE_FACTOR( SACp_inl_6424_result__SSA_1, 1);

      SAC_WL_STRIDE_LOOP0_BEGIN( 0, SACp_inl_6419__flat_312_iv, SACp_inl_6420__type_651, 0, 128, 1)
        SAC_WL_GRID_UNROLL_BEGIN( 0, SACp_inl_6419__flat_312_iv, SACp_inl_6420__type_651, 0, 1)
          SAC_WL_STRIDE_LOOP0_BEGIN( 1, SACp_inl_6419__flat_312_iv, SACp_inl_6421__type_652, 0, 32, 1)
            SAC_WL_GRID_UNROLL_BEGIN( 1, SACp_inl_6419__flat_312_iv, SACp_inl_6421__type_652, 0, 1)
              SAC_ND_INC_RC( SACl_rofu, 1)
              SAC_ND_ALLOC_ARRAY( double, SACp_inl_6354_rd, 1)
              SAC_PF_BEGIN_WITH( genarray)
                /*
                 * WL_BEGIN__OFFSET( SACp_inl_6354_rd, 2, SACp_inl_6363__type_588, 2)
                 */
                { int SAC_WL_OFFSET( SACp_inl_6354_rd);
                  int SAC_WL_MT_SCHEDULE_START( 0);
                  int SAC_WL_MT_SCHEDULE_STOP( 0);
                  int SAC_WL_MT_SCHEDULE_START( 1);
                  int SAC_WL_MT_SCHEDULE_STOP( 1);
                  int SAC_i;
                  int SAC_WL_SHAPE_FACTOR( SACp_inl_6354_rd, 0) = 1 * SAC_ND_A_SHAPE( SACp_inl_6354_rd, 1);
                  int SAC_WL_SHAPE_FACTOR( SACp_inl_6354_rd, 1) = 1;

                  /*
                   * MT_SCHEDULER_BEGIN( 0, 2, 0, 0, 128, 2)
                   */
                  SAC_WL_MT_SCHEDULE_START( 0) = 0;
                  SAC_WL_MT_SCHEDULE_STOP( 0) = 128;
                  SAC_WL_MT_SCHEDULE_START( 1) = 0;
                  SAC_WL_MT_SCHEDULE_STOP( 1) = 2;

                  /*
                   * WL_INIT_OFFSET( SACp_inl_6354_rd, 2, SACp_inl_6363__type_588, 2)
                   */
                  SAC_WL_OFFSET( SACp_inl_6354_rd)
                    = SAC_WL_MT_SCHEDULE_START( 0) * SAC_WL_SHAPE_FACTOR( SACp_inl_6354_rd, 0)
                    + SAC_WL_MT_SCHEDULE_START( 1) * SAC_WL_SHAPE_FACTOR( SACp_inl_6354_rd, 1);

                  SAC_WL_STRIDE_LOOP0_BEGIN( 0, SACp_inl_6363__type_588, SACp_inl_6362__type_583, 0, 128, 1)
                    SAC_WL_GRID_UNROLL_BEGIN( 0, SACp_inl_6363__type_588, SACp_inl_6362__type_583, 0, 1)
                      SAC_WL_STRIDE_LOOP0_BEGIN( 1, SACp_inl_6363__type_588, SACp_inl_6361__type_582, 0, 2, 1)
                        SAC_WL_GRID_UNROLL_BEGIN( 1, SACp_inl_6363__type_588, SACp_inl_6361__type_582, 0, 1)
                          SACp_inl_6356__type_581_128_32_128_2__ = ((((((SACp_inl_6420__type_651 * 32) + SACp_inl_6421__type_652) * 128) + SACp_inl_6362__type_583) * 2) + SACp_inl_6361__type_582); 
                          SAC_ND_IDX_SEL_S( SACp_inl_6356__type_581_128_32_128_2__, SACl_a, SACp_inl_6355__type_580)
                          /*
                           * WL_ASSIGN( SACp_inl_6355__type_580, 0, SACp_inl_6354_rd, 2, SACp_inl_6363__type_588, 2, SACp_inl_6362__type_583, SACp_inl_6361__type_582)
                           */
                          SAC_TR_WL_PRINT( ("index vector [%d, %d] (== offset %d) -- offset %d -- assign", SACp_inl_6362__type_583, SACp_inl_6361__type_582, ( SAC_ND_A_SHAPE( SACp_inl_6354_rd, 1) * SACp_inl_6362__type_583 + SACp_inl_6361__type_582 ), SAC_WL_OFFSET( SACp_inl_6354_rd)));
                          SAC_ASSURE_TYPE( (SAC_ND_A_DIM( SACp_inl_6355__type_580) == (SAC_ND_A_DIM( SACp_inl_6354_rd) - 2)), ("WL expression with illegal dimension found!"));
                          SAC_ASSURE_TYPE( (SAC_ND_A_SIZE( SACp_inl_6355__type_580) == SAC_WL_SHAPE_FACTOR( SACp_inl_6354_rd, 1)), ("WL expression with illegal size found!"));
                          SAC_ND_WRITE_ARRAY( SACp_inl_6354_rd, SAC_WL_OFFSET( SACp_inl_6354_rd)) = SACp_inl_6355__type_580;
                          SAC_WL_OFFSET( SACp_inl_6354_rd)++;

                        SAC_WL_GRID_UNROLL_END( 1, SACp_inl_6363__type_588, SACp_inl_6361__type_582, 0, 1)
                      SAC_WL_STRIDE_LOOP_END( 1, SACp_inl_6363__type_588, SACp_inl_6361__type_582, 0, 2, 1)
                    SAC_WL_GRID_UNROLL_END( 0, SACp_inl_6363__type_588, SACp_inl_6362__type_583, 0, 1)
                  SAC_WL_STRIDE_LOOP_END( 0, SACp_inl_6363__type_588, SACp_inl_6362__type_583, 0, 128, 1)
                  /*
                   * MT_SCHEDULER_END( 0, 2, 0, 0, 128, 2)
                   */


                  /*
                   * WL_END__OFFSET( SACp_inl_6354_rd, 2, SACp_inl_6363__type_588, 2)
                   */
                }

              SAC_PF_END_WITH( genarray)
              /*
               * ND_FUN_AP( SACf_FFT1d__d___MAIN__cpx_128___MAIN__cpx_64, , 4, out_rc, SACp_inl_6423_slice__SSA_1, in, SACl_dir, in_rc, SACp_inl_6354_rd, in_rc, SACl_rofu)
               */
              SACf_FFT1d__d___MAIN__cpx_128___MAIN__cpx_64( SAC_ND_ARG_out_rc( SACp_inl_6423_slice__SSA_1), SAC_ND_ARG_in( SACl_dir), SAC_ND_ARG_in_rc( SACp_inl_6354_rd), SAC_ND_ARG_in_rc( SACl_rofu));

              /*
               * WL_ASSIGN( SACp_inl_6423_slice__SSA_1, 2, SACp_inl_6424_result__SSA_1, 4, SACp_inl_6419__flat_312_iv, 2, SACp_inl_6420__type_651, SACp_inl_6421__type_652)
               */
              SAC_TR_WL_PRINT( ("index vector [%d, %d] (== offset %d) -- offset %d -- assign", SACp_inl_6420__type_651, SACp_inl_6421__type_652, ( SAC_ND_A_SHAPE( SACp_inl_6424_result__SSA_1, 1) * SACp_inl_6420__type_651 + SACp_inl_6421__type_652 ), SAC_WL_OFFSET( SACp_inl_6424_result__SSA_1)));
              SAC_ASSURE_TYPE( (SAC_ND_A_DIM( SACp_inl_6423_slice__SSA_1) == (SAC_ND_A_DIM( SACp_inl_6424_result__SSA_1) - 2)), ("WL expression with illegal dimension found!"));
              SAC_ASSURE_TYPE( (SAC_ND_A_SIZE( SACp_inl_6423_slice__SSA_1) == SAC_WL_SHAPE_FACTOR( SACp_inl_6424_result__SSA_1, 1)), ("WL expression with illegal size found!"));
              { int SAC_i;
                for (SAC_i = 0; SAC_i < SAC_ND_A_SIZE( SACp_inl_6423_slice__SSA_1); SAC_i++) { 
                  SAC_ND_WRITE( SACp_inl_6424_result__SSA_1, SAC_WL_OFFSET( SACp_inl_6424_result__SSA_1)) = SAC_ND_READ( SACp_inl_6423_slice__SSA_1, SAC_i);
                  SAC_WL_OFFSET( SACp_inl_6424_result__SSA_1)++;
                }
              }

              SAC_ND_DEC_RC_FREE_ARRAY( SACp_inl_6423_slice__SSA_1, 1)
            SAC_WL_GRID_UNROLL_END( 1, SACp_inl_6419__flat_312_iv, SACp_inl_6421__type_652, 0, 1)
          SAC_WL_STRIDE_LOOP_END( 1, SACp_inl_6419__flat_312_iv, SACp_inl_6421__type_652, 0, 32, 1)
        SAC_WL_GRID_UNROLL_END( 0, SACp_inl_6419__flat_312_iv, SACp_inl_6420__type_651, 0, 1)
      SAC_WL_STRIDE_LOOP_END( 0, SACp_inl_6419__flat_312_iv, SACp_inl_6420__type_651, 0, 128, 1)
      /*
       * MT_SCHEDULER_END( 0, 2, 0, 0, 128, 32)
       */


      /*
       * WL_END__OFFSET( SACp_inl_6424_result__SSA_1, 4, SACp_inl_6419__flat_312_iv, 2)
       */
    }

  SAC_PF_END_WITH( modarray)
  SAC_ND_DEC_RC_FREE_ARRAY( SACl_rofu, 1)
  SAC_ND_DEC_RC_FREE_ARRAY( SACl_a, 1)
  /*
   * ND_FUN_RET( , 1, out_rc, SACp_inl_6424_result__SSA_1, SAC__arg_1)
   */
  SAC_ND_RET_out_rc( SACp_inl_6424_result__SSA_1, SAC__arg_1)
  return;
}

/*
 * ND_FUN_DEC( SACf_FFT1d_Slice__d___MAIN__cpx_128_128_32___MAIN__cpx_64, void, 4, out_rc, double *, SAC__arg_1, in, double, SACl_dir, in_rc, double *, SACl_a, in_rc, double *, SACl_rofu)
 */
void SACf_FFT1d_Slice__d___MAIN__cpx_128_128_32___MAIN__cpx_64( SAC_ND_PARAM_out_rc( double *, SAC__arg_1), SAC_ND_PARAM_in( double, SACl_dir), SAC_ND_PARAM_in_rc( double *, SACl_a), SAC_ND_PARAM_in_rc( double *, SACl_rofu))
{ 
  /*
   * ND_KS_DECL_ARRAY( double, SACp_inl_6524_result, 4, 128, 128, 32, 2)
   */
  double *SACp_inl_6524_result;
  int SAC_ND_A_RC( SACp_inl_6524_result);
  const int SAC_ND_A_SIZE( SACp_inl_6524_result) = 128*128*32*2;
  const int SAC_ND_A_DIM( SACp_inl_6524_result) = 4;
  const int SAC_ND_A_SHAPE( SACp_inl_6524_result, 0) = 128;
  const int SAC_ND_A_SHAPE( SACp_inl_6524_result, 1) = 128;
  const int SAC_ND_A_SHAPE( SACp_inl_6524_result, 2) = 32;
  const int SAC_ND_A_SHAPE( SACp_inl_6524_result, 3) = 2;

  /*
   * ND_KS_DECL_ARRAY( double, SACp_inl_6523_slice, 2, 32, 2)
   */
  double *SACp_inl_6523_slice;
  int SAC_ND_A_RC( SACp_inl_6523_slice);
  const int SAC_ND_A_SIZE( SACp_inl_6523_slice) = 32*2;
  const int SAC_ND_A_DIM( SACp_inl_6523_slice) = 2;
  const int SAC_ND_A_SHAPE( SACp_inl_6523_slice, 0) = 32;
  const int SAC_ND_A_SHAPE( SACp_inl_6523_slice, 1) = 2;

  int SACp_inl_6521__type_560; 
  int SACp_inl_6520__type_559; 
  /*
   * ND_KS_DECL_ARRAY( int, SACp_inl_6519__flat_302_iv, 1, 2)
   */
  int *SACp_inl_6519__flat_302_iv;
  int SAC_ND_A_RC( SACp_inl_6519__flat_302_iv);
  const int SAC_ND_A_SIZE( SACp_inl_6519__flat_302_iv) = 2;
  const int SAC_ND_A_DIM( SACp_inl_6519__flat_302_iv) = 1;
  const int SAC_ND_A_SHAPE( SACp_inl_6519__flat_302_iv, 0) = 2;

  /*
   * ND_KS_DECL_ARRAY( double, SACp_inl_6509__flat_271, 2, 16, 2)
   */
  double *SACp_inl_6509__flat_271;
  int SAC_ND_A_RC( SACp_inl_6509__flat_271);
  const int SAC_ND_A_SIZE( SACp_inl_6509__flat_271) = 16*2;
  const int SAC_ND_A_DIM( SACp_inl_6509__flat_271) = 2;
  const int SAC_ND_A_SHAPE( SACp_inl_6509__flat_271, 0) = 16;
  const int SAC_ND_A_SHAPE( SACp_inl_6509__flat_271, 1) = 2;

  double SACp_inl_6508__flat_273; 
  int SACp_inl_6507__flat_274_64_2__; 
  int SACp_inl_6506__flat_275; 
  int SACp_inl_6487__type_558; 
  int SACp_inl_6486__type_557; 
  /*
   * ND_KS_DECL_ARRAY( int, SACp_inl_6485__flat_272_iv, 1, 2)
   */
  int *SACp_inl_6485__flat_272_iv;
  int SAC_ND_A_RC( SACp_inl_6485__flat_272_iv);
  const int SAC_ND_A_SIZE( SACp_inl_6485__flat_272_iv) = 2;
  const int SAC_ND_A_DIM( SACp_inl_6485__flat_272_iv) = 1;
  const int SAC_ND_A_SHAPE( SACp_inl_6485__flat_272_iv, 0) = 2;

  /*
   * ND_KS_DECL_ARRAY( int, SACp_inl_6459__type_569, 1, 2)
   */
  int *SACp_inl_6459__type_569;
  int SAC_ND_A_RC( SACp_inl_6459__type_569);
  const int SAC_ND_A_SIZE( SACp_inl_6459__type_569) = 2;
  const int SAC_ND_A_DIM( SACp_inl_6459__type_569) = 1;
  const int SAC_ND_A_SHAPE( SACp_inl_6459__type_569, 0) = 2;

  int SACp_inl_6458__type_564; 
  int SACp_inl_6457__type_563; 
  int SACp_inl_6452__type_562_128_128_32_2__; 
  double SACp_inl_6451__type_561; 
  /*
   * ND_KS_DECL_ARRAY( double, SACp_inl_6450_rd, 2, 32, 2)
   */
  double *SACp_inl_6450_rd;
  int SAC_ND_A_RC( SACp_inl_6450_rd);
  const int SAC_ND_A_SIZE( SACp_inl_6450_rd) = 32*2;
  const int SAC_ND_A_DIM( SACp_inl_6450_rd) = 2;
  const int SAC_ND_A_SHAPE( SACp_inl_6450_rd, 0) = 32;
  const int SAC_ND_A_SHAPE( SACp_inl_6450_rd, 1) = 2;


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

  SAC_ND_ALLOC_ARRAY( double, SACp_inl_6509__flat_271, 1)
  SAC_PF_BEGIN_WITH( genarray)
    /*
     * WL_BEGIN__OFFSET( SACp_inl_6509__flat_271, 2, SACp_inl_6485__flat_272_iv, 2)
     */
    { int SAC_WL_OFFSET( SACp_inl_6509__flat_271);
      int SAC_WL_MT_SCHEDULE_START( 0);
      int SAC_WL_MT_SCHEDULE_STOP( 0);
      int SAC_WL_MT_SCHEDULE_START( 1);
      int SAC_WL_MT_SCHEDULE_STOP( 1);
      int SAC_i;
      int SAC_WL_SHAPE_FACTOR( SACp_inl_6509__flat_271, 0) = 1 * SAC_ND_A_SHAPE( SACp_inl_6509__flat_271, 1);
      int SAC_WL_SHAPE_FACTOR( SACp_inl_6509__flat_271, 1) = 1;

      /*
       * MT_SCHEDULER_BEGIN( 0, 2, 0, 0, 16, 2)
       */
      SAC_WL_MT_SCHEDULE_START( 0) = 0;
      SAC_WL_MT_SCHEDULE_STOP( 0) = 16;
      SAC_WL_MT_SCHEDULE_START( 1) = 0;
      SAC_WL_MT_SCHEDULE_STOP( 1) = 2;

      /*
       * WL_INIT_OFFSET( SACp_inl_6509__flat_271, 2, SACp_inl_6485__flat_272_iv, 2)
       */
      SAC_WL_OFFSET( SACp_inl_6509__flat_271)
        = SAC_WL_MT_SCHEDULE_START( 0) * SAC_WL_SHAPE_FACTOR( SACp_inl_6509__flat_271, 0)
        + SAC_WL_MT_SCHEDULE_START( 1) * SAC_WL_SHAPE_FACTOR( SACp_inl_6509__flat_271, 1);

      SAC_WL_STRIDE_LOOP0_BEGIN( 0, SACp_inl_6485__flat_272_iv, SACp_inl_6486__type_557, 0, 16, 1)
        SAC_WL_GRID_UNROLL_BEGIN( 0, SACp_inl_6485__flat_272_iv, SACp_inl_6486__type_557, 0, 1)
          SAC_WL_STRIDE_LOOP0_BEGIN( 1, SACp_inl_6485__flat_272_iv, SACp_inl_6487__type_558, 0, 2, 1)
            SAC_WL_GRID_UNROLL_BEGIN( 1, SACp_inl_6485__flat_272_iv, SACp_inl_6487__type_558, 0, 1)
              SACp_inl_6506__flat_275 = (4 * SACp_inl_6486__type_557); 
              SACp_inl_6507__flat_274_64_2__ = ((SACp_inl_6506__flat_275 * 2) + SACp_inl_6487__type_558); 
              SAC_ND_IDX_SEL_S( SACp_inl_6507__flat_274_64_2__, SACl_rofu, SACp_inl_6508__flat_273)
              /*
               * WL_ASSIGN( SACp_inl_6508__flat_273, 0, SACp_inl_6509__flat_271, 2, SACp_inl_6485__flat_272_iv, 2, SACp_inl_6486__type_557, SACp_inl_6487__type_558)
               */
              SAC_TR_WL_PRINT( ("index vector [%d, %d] (== offset %d) -- offset %d -- assign", SACp_inl_6486__type_557, SACp_inl_6487__type_558, ( SAC_ND_A_SHAPE( SACp_inl_6509__flat_271, 1) * SACp_inl_6486__type_557 + SACp_inl_6487__type_558 ), SAC_WL_OFFSET( SACp_inl_6509__flat_271)));
              SAC_ASSURE_TYPE( (SAC_ND_A_DIM( SACp_inl_6508__flat_273) == (SAC_ND_A_DIM( SACp_inl_6509__flat_271) - 2)), ("WL expression with illegal dimension found!"));
              SAC_ASSURE_TYPE( (SAC_ND_A_SIZE( SACp_inl_6508__flat_273) == SAC_WL_SHAPE_FACTOR( SACp_inl_6509__flat_271, 1)), ("WL expression with illegal size found!"));
              SAC_ND_WRITE_ARRAY( SACp_inl_6509__flat_271, SAC_WL_OFFSET( SACp_inl_6509__flat_271)) = SACp_inl_6508__flat_273;
              SAC_WL_OFFSET( SACp_inl_6509__flat_271)++;

            SAC_WL_GRID_UNROLL_END( 1, SACp_inl_6485__flat_272_iv, SACp_inl_6487__type_558, 0, 1)
          SAC_WL_STRIDE_LOOP_END( 1, SACp_inl_6485__flat_272_iv, SACp_inl_6487__type_558, 0, 2, 1)
        SAC_WL_GRID_UNROLL_END( 0, SACp_inl_6485__flat_272_iv, SACp_inl_6486__type_557, 0, 1)
      SAC_WL_STRIDE_LOOP_END( 0, SACp_inl_6485__flat_272_iv, SACp_inl_6486__type_557, 0, 16, 1)
      /*
       * MT_SCHEDULER_END( 0, 2, 0, 0, 16, 2)
       */


      /*
       * WL_END__OFFSET( SACp_inl_6509__flat_271, 2, SACp_inl_6485__flat_272_iv, 2)
       */
    }

  SAC_PF_END_WITH( genarray)
  SAC_ND_DEC_RC_FREE_ARRAY( SACl_rofu, 1)
  SAC_ND_ALLOC_ARRAY( double, SACp_inl_6524_result, 1)
  SAC_PF_BEGIN_WITH( modarray)
    /*
     * WL_BEGIN__OFFSET( SACp_inl_6524_result, 4, SACp_inl_6519__flat_302_iv, 2)
     */
    { int SAC_WL_OFFSET( SACp_inl_6524_result);
      int SAC_WL_MT_SCHEDULE_START( 0);
      int SAC_WL_MT_SCHEDULE_STOP( 0);
      int SAC_WL_MT_SCHEDULE_START( 1);
      int SAC_WL_MT_SCHEDULE_STOP( 1);
      int SAC_i;
      int SAC_WL_SHAPE_FACTOR( SACp_inl_6524_result, 0) = 1 * SAC_ND_A_SHAPE( SACp_inl_6524_result, 1) * SAC_ND_A_SHAPE( SACp_inl_6524_result, 2) * SAC_ND_A_SHAPE( SACp_inl_6524_result, 3);
      int SAC_WL_SHAPE_FACTOR( SACp_inl_6524_result, 1) = 1 * SAC_ND_A_SHAPE( SACp_inl_6524_result, 2) * SAC_ND_A_SHAPE( SACp_inl_6524_result, 3);

      /*
       * MT_SCHEDULER_BEGIN( 0, 2, 0, 0, 128, 128)
       */
      SAC_WL_MT_SCHEDULE_START( 0) = 0;
      SAC_WL_MT_SCHEDULE_STOP( 0) = 128;
      SAC_WL_MT_SCHEDULE_START( 1) = 0;
      SAC_WL_MT_SCHEDULE_STOP( 1) = 128;

      /*
       * WL_INIT_OFFSET( SACp_inl_6524_result, 4, SACp_inl_6519__flat_302_iv, 2)
       */
      SAC_WL_OFFSET( SACp_inl_6524_result)
        = SAC_WL_MT_SCHEDULE_START( 0) * SAC_WL_SHAPE_FACTOR( SACp_inl_6524_result, 0)
        + SAC_WL_MT_SCHEDULE_START( 1) * SAC_WL_SHAPE_FACTOR( SACp_inl_6524_result, 1);

      SAC_WL_STRIDE_LOOP0_BEGIN( 0, SACp_inl_6519__flat_302_iv, SACp_inl_6520__type_559, 0, 128, 1)
        SAC_WL_GRID_UNROLL_BEGIN( 0, SACp_inl_6519__flat_302_iv, SACp_inl_6520__type_559, 0, 1)
          SAC_WL_STRIDE_LOOP0_BEGIN( 1, SACp_inl_6519__flat_302_iv, SACp_inl_6521__type_560, 0, 128, 1)
            SAC_WL_GRID_UNROLL_BEGIN( 1, SACp_inl_6519__flat_302_iv, SACp_inl_6521__type_560, 0, 1)
              SAC_ND_INC_RC( SACp_inl_6509__flat_271, 1)
              SAC_ND_ALLOC_ARRAY( double, SACp_inl_6450_rd, 1)
              SAC_PF_BEGIN_WITH( genarray)
                /*
                 * WL_BEGIN__OFFSET( SACp_inl_6450_rd, 2, SACp_inl_6459__type_569, 2)
                 */
                { int SAC_WL_OFFSET( SACp_inl_6450_rd);
                  int SAC_WL_MT_SCHEDULE_START( 0);
                  int SAC_WL_MT_SCHEDULE_STOP( 0);
                  int SAC_WL_MT_SCHEDULE_START( 1);
                  int SAC_WL_MT_SCHEDULE_STOP( 1);
                  int SAC_i;
                  int SAC_WL_SHAPE_FACTOR( SACp_inl_6450_rd, 0) = 1 * SAC_ND_A_SHAPE( SACp_inl_6450_rd, 1);
                  int SAC_WL_SHAPE_FACTOR( SACp_inl_6450_rd, 1) = 1;

                  /*
                   * MT_SCHEDULER_BEGIN( 0, 2, 0, 0, 32, 2)
                   */
                  SAC_WL_MT_SCHEDULE_START( 0) = 0;
                  SAC_WL_MT_SCHEDULE_STOP( 0) = 32;
                  SAC_WL_MT_SCHEDULE_START( 1) = 0;
                  SAC_WL_MT_SCHEDULE_STOP( 1) = 2;

                  /*
                   * WL_INIT_OFFSET( SACp_inl_6450_rd, 2, SACp_inl_6459__type_569, 2)
                   */
                  SAC_WL_OFFSET( SACp_inl_6450_rd)
                    = SAC_WL_MT_SCHEDULE_START( 0) * SAC_WL_SHAPE_FACTOR( SACp_inl_6450_rd, 0)
                    + SAC_WL_MT_SCHEDULE_START( 1) * SAC_WL_SHAPE_FACTOR( SACp_inl_6450_rd, 1);

                  SAC_WL_STRIDE_LOOP0_BEGIN( 0, SACp_inl_6459__type_569, SACp_inl_6458__type_564, 0, 32, 1)
                    SAC_WL_GRID_UNROLL_BEGIN( 0, SACp_inl_6459__type_569, SACp_inl_6458__type_564, 0, 1)
                      SAC_WL_STRIDE_LOOP0_BEGIN( 1, SACp_inl_6459__type_569, SACp_inl_6457__type_563, 0, 2, 1)
                        SAC_WL_GRID_UNROLL_BEGIN( 1, SACp_inl_6459__type_569, SACp_inl_6457__type_563, 0, 1)
                          SACp_inl_6452__type_562_128_128_32_2__ = ((((((SACp_inl_6520__type_559 * 128) + SACp_inl_6521__type_560) * 32) + SACp_inl_6458__type_564) * 2) + SACp_inl_6457__type_563); 
                          SAC_ND_IDX_SEL_S( SACp_inl_6452__type_562_128_128_32_2__, SACl_a, SACp_inl_6451__type_561)
                          /*
                           * WL_ASSIGN( SACp_inl_6451__type_561, 0, SACp_inl_6450_rd, 2, SACp_inl_6459__type_569, 2, SACp_inl_6458__type_564, SACp_inl_6457__type_563)
                           */
                          SAC_TR_WL_PRINT( ("index vector [%d, %d] (== offset %d) -- offset %d -- assign", SACp_inl_6458__type_564, SACp_inl_6457__type_563, ( SAC_ND_A_SHAPE( SACp_inl_6450_rd, 1) * SACp_inl_6458__type_564 + SACp_inl_6457__type_563 ), SAC_WL_OFFSET( SACp_inl_6450_rd)));
                          SAC_ASSURE_TYPE( (SAC_ND_A_DIM( SACp_inl_6451__type_561) == (SAC_ND_A_DIM( SACp_inl_6450_rd) - 2)), ("WL expression with illegal dimension found!"));
                          SAC_ASSURE_TYPE( (SAC_ND_A_SIZE( SACp_inl_6451__type_561) == SAC_WL_SHAPE_FACTOR( SACp_inl_6450_rd, 1)), ("WL expression with illegal size found!"));
                          SAC_ND_WRITE_ARRAY( SACp_inl_6450_rd, SAC_WL_OFFSET( SACp_inl_6450_rd)) = SACp_inl_6451__type_561;
                          SAC_WL_OFFSET( SACp_inl_6450_rd)++;

                        SAC_WL_GRID_UNROLL_END( 1, SACp_inl_6459__type_569, SACp_inl_6457__type_563, 0, 1)
                      SAC_WL_STRIDE_LOOP_END( 1, SACp_inl_6459__type_569, SACp_inl_6457__type_563, 0, 2, 1)
                    SAC_WL_GRID_UNROLL_END( 0, SACp_inl_6459__type_569, SACp_inl_6458__type_564, 0, 1)
                  SAC_WL_STRIDE_LOOP_END( 0, SACp_inl_6459__type_569, SACp_inl_6458__type_564, 0, 32, 1)
                  /*
                   * MT_SCHEDULER_END( 0, 2, 0, 0, 32, 2)
                   */


                  /*
                   * WL_END__OFFSET( SACp_inl_6450_rd, 2, SACp_inl_6459__type_569, 2)
                   */
                }

              SAC_PF_END_WITH( genarray)
              /*
               * ND_FUN_AP( SACf_FFT1d__d___MAIN__cpx_32___MAIN__cpx_16, , 4, out_rc, SACp_inl_6523_slice, in, SACl_dir, in_rc, SACp_inl_6450_rd, in_rc, SACp_inl_6509__flat_271)
               */
              SACf_FFT1d__d___MAIN__cpx_32___MAIN__cpx_16( SAC_ND_ARG_out_rc( SACp_inl_6523_slice), SAC_ND_ARG_in( SACl_dir), SAC_ND_ARG_in_rc( SACp_inl_6450_rd), SAC_ND_ARG_in_rc( SACp_inl_6509__flat_271));

              /*
               * WL_ASSIGN( SACp_inl_6523_slice, 2, SACp_inl_6524_result, 4, SACp_inl_6519__flat_302_iv, 2, SACp_inl_6520__type_559, SACp_inl_6521__type_560)
               */
              SAC_TR_WL_PRINT( ("index vector [%d, %d] (== offset %d) -- offset %d -- assign", SACp_inl_6520__type_559, SACp_inl_6521__type_560, ( SAC_ND_A_SHAPE( SACp_inl_6524_result, 1) * SACp_inl_6520__type_559 + SACp_inl_6521__type_560 ), SAC_WL_OFFSET( SACp_inl_6524_result)));
              SAC_ASSURE_TYPE( (SAC_ND_A_DIM( SACp_inl_6523_slice) == (SAC_ND_A_DIM( SACp_inl_6524_result) - 2)), ("WL expression with illegal dimension found!"));
              SAC_ASSURE_TYPE( (SAC_ND_A_SIZE( SACp_inl_6523_slice) == SAC_WL_SHAPE_FACTOR( SACp_inl_6524_result, 1)), ("WL expression with illegal size found!"));
              { int SAC_i;
                for (SAC_i = 0; SAC_i < SAC_ND_A_SIZE( SACp_inl_6523_slice); SAC_i++) { 
                  SAC_ND_WRITE( SACp_inl_6524_result, SAC_WL_OFFSET( SACp_inl_6524_result)) = SAC_ND_READ( SACp_inl_6523_slice, SAC_i);
                  SAC_WL_OFFSET( SACp_inl_6524_result)++;
                }
              }

              SAC_ND_DEC_RC_FREE_ARRAY( SACp_inl_6523_slice, 1)
            SAC_WL_GRID_UNROLL_END( 1, SACp_inl_6519__flat_302_iv, SACp_inl_6521__type_560, 0, 1)
          SAC_WL_STRIDE_LOOP_END( 1, SACp_inl_6519__flat_302_iv, SACp_inl_6521__type_560, 0, 128, 1)
        SAC_WL_GRID_UNROLL_END( 0, SACp_inl_6519__flat_302_iv, SACp_inl_6520__type_559, 0, 1)
      SAC_WL_STRIDE_LOOP_END( 0, SACp_inl_6519__flat_302_iv, SACp_inl_6520__type_559, 0, 128, 1)
      /*
       * MT_SCHEDULER_END( 0, 2, 0, 0, 128, 128)
       */


      /*
       * WL_END__OFFSET( SACp_inl_6524_result, 4, SACp_inl_6519__flat_302_iv, 2)
       */
    }

  SAC_PF_END_WITH( modarray)
  SAC_ND_DEC_RC_FREE_ARRAY( SACp_inl_6509__flat_271, 1)
  SAC_ND_DEC_RC_FREE_ARRAY( SACl_a, 1)
  /*
   * ND_FUN_RET( , 1, out_rc, SACp_inl_6524_result, SAC__arg_1)
   */
  SAC_ND_RET_out_rc( SACp_inl_6524_result, SAC__arg_1)
  return;
}

/*
 * ND_FUN_DEC( SACf_FFT1d_Slice__d___MAIN__cpx_32_128_128___MAIN__cpx_64, void, 4, out_rc, double *, SAC__arg_1, in, double, SACl_dir, in_rc, double *, SACl_a, in_rc, double *, SACl_rofu)
 */
void SACf_FFT1d_Slice__d___MAIN__cpx_32_128_128___MAIN__cpx_64( SAC_ND_PARAM_out_rc( double *, SAC__arg_1), SAC_ND_PARAM_in( double, SACl_dir), SAC_ND_PARAM_in_rc( double *, SACl_a), SAC_ND_PARAM_in_rc( double *, SACl_rofu))
{ 
  /*
   * ND_KS_DECL_ARRAY( double, SACp_inl_6652_result__SSA_1, 4, 32, 128, 128, 2)
   */
  double *SACp_inl_6652_result__SSA_1;
  int SAC_ND_A_RC( SACp_inl_6652_result__SSA_1);
  const int SAC_ND_A_SIZE( SACp_inl_6652_result__SSA_1) = 32*128*128*2;
  const int SAC_ND_A_DIM( SACp_inl_6652_result__SSA_1) = 4;
  const int SAC_ND_A_SHAPE( SACp_inl_6652_result__SSA_1, 0) = 32;
  const int SAC_ND_A_SHAPE( SACp_inl_6652_result__SSA_1, 1) = 128;
  const int SAC_ND_A_SHAPE( SACp_inl_6652_result__SSA_1, 2) = 128;
  const int SAC_ND_A_SHAPE( SACp_inl_6652_result__SSA_1, 3) = 2;

  /*
   * ND_KS_DECL_ARRAY( double, SACp_inl_6651_slice__SSA_1, 2, 128, 2)
   */
  double *SACp_inl_6651_slice__SSA_1;
  int SAC_ND_A_RC( SACp_inl_6651_slice__SSA_1);
  const int SAC_ND_A_SIZE( SACp_inl_6651_slice__SSA_1) = 128*2;
  const int SAC_ND_A_DIM( SACp_inl_6651_slice__SSA_1) = 2;
  const int SAC_ND_A_SHAPE( SACp_inl_6651_slice__SSA_1, 0) = 128;
  const int SAC_ND_A_SHAPE( SACp_inl_6651_slice__SSA_1, 1) = 2;

  int SACp_inl_6649__type_618; 
  int SACp_inl_6648__type_617; 
  /*
   * ND_KS_DECL_ARRAY( int, SACp_inl_6647__flat_312_iv, 1, 2)
   */
  int *SACp_inl_6647__flat_312_iv;
  int SAC_ND_A_RC( SACp_inl_6647__flat_312_iv);
  const int SAC_ND_A_SIZE( SACp_inl_6647__flat_312_iv) = 2;
  const int SAC_ND_A_DIM( SACp_inl_6647__flat_312_iv) = 1;
  const int SAC_ND_A_SHAPE( SACp_inl_6647__flat_312_iv, 0) = 2;

  /*
   * ND_KS_DECL_ARRAY( int, SACp_inl_6591__type_374, 1, 2)
   */
  int *SACp_inl_6591__type_374;
  int SAC_ND_A_RC( SACp_inl_6591__type_374);
  const int SAC_ND_A_SIZE( SACp_inl_6591__type_374) = 2;
  const int SAC_ND_A_DIM( SACp_inl_6591__type_374) = 1;
  const int SAC_ND_A_SHAPE( SACp_inl_6591__type_374, 0) = 2;

  int SACp_inl_6590__type_369; 
  int SACp_inl_6589__type_368; 
  int SACp_inl_6584__type_367_32_128_128_2__; 
  double SACp_inl_6583__type_366; 
  /*
   * ND_KS_DECL_ARRAY( double, SACp_inl_6582_rd, 2, 128, 2)
   */
  double *SACp_inl_6582_rd;
  int SAC_ND_A_RC( SACp_inl_6582_rd);
  const int SAC_ND_A_SIZE( SACp_inl_6582_rd) = 128*2;
  const int SAC_ND_A_DIM( SACp_inl_6582_rd) = 2;
  const int SAC_ND_A_SHAPE( SACp_inl_6582_rd, 0) = 128;
  const int SAC_ND_A_SHAPE( SACp_inl_6582_rd, 1) = 2;


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

  SAC_ND_ALLOC_ARRAY( double, SACp_inl_6652_result__SSA_1, 1)
  SAC_PF_BEGIN_WITH( modarray)
    /*
     * WL_BEGIN__OFFSET( SACp_inl_6652_result__SSA_1, 4, SACp_inl_6647__flat_312_iv, 2)
     */
    { int SAC_WL_OFFSET( SACp_inl_6652_result__SSA_1);
      int SAC_WL_MT_SCHEDULE_START( 0);
      int SAC_WL_MT_SCHEDULE_STOP( 0);
      int SAC_WL_MT_SCHEDULE_START( 1);
      int SAC_WL_MT_SCHEDULE_STOP( 1);
      int SAC_i;
      int SAC_WL_SHAPE_FACTOR( SACp_inl_6652_result__SSA_1, 0) = 1 * SAC_ND_A_SHAPE( SACp_inl_6652_result__SSA_1, 1) * SAC_ND_A_SHAPE( SACp_inl_6652_result__SSA_1, 2) * SAC_ND_A_SHAPE( SACp_inl_6652_result__SSA_1, 3);
      int SAC_WL_SHAPE_FACTOR( SACp_inl_6652_result__SSA_1, 1) = 1 * SAC_ND_A_SHAPE( SACp_inl_6652_result__SSA_1, 2) * SAC_ND_A_SHAPE( SACp_inl_6652_result__SSA_1, 3);

      /*
       * MT_SCHEDULER_BEGIN( 0, 2, 0, 0, 32, 128)
       */
      SAC_WL_MT_SCHEDULE_START( 0) = 0;
      SAC_WL_MT_SCHEDULE_STOP( 0) = 32;
      SAC_WL_MT_SCHEDULE_START( 1) = 0;
      SAC_WL_MT_SCHEDULE_STOP( 1) = 128;

      /*
       * WL_INIT_OFFSET( SACp_inl_6652_result__SSA_1, 4, SACp_inl_6647__flat_312_iv, 2)
       */
      SAC_WL_OFFSET( SACp_inl_6652_result__SSA_1)
        = SAC_WL_MT_SCHEDULE_START( 0) * SAC_WL_SHAPE_FACTOR( SACp_inl_6652_result__SSA_1, 0)
        + SAC_WL_MT_SCHEDULE_START( 1) * SAC_WL_SHAPE_FACTOR( SACp_inl_6652_result__SSA_1, 1);

      SAC_WL_STRIDE_LOOP0_BEGIN( 0, SACp_inl_6647__flat_312_iv, SACp_inl_6648__type_617, 0, 32, 1)
        SAC_WL_GRID_UNROLL_BEGIN( 0, SACp_inl_6647__flat_312_iv, SACp_inl_6648__type_617, 0, 1)
          SAC_WL_STRIDE_LOOP0_BEGIN( 1, SACp_inl_6647__flat_312_iv, SACp_inl_6649__type_618, 0, 128, 1)
            SAC_WL_GRID_UNROLL_BEGIN( 1, SACp_inl_6647__flat_312_iv, SACp_inl_6649__type_618, 0, 1)
              SAC_ND_INC_RC( SACl_rofu, 1)
              SAC_ND_ALLOC_ARRAY( double, SACp_inl_6582_rd, 1)
              SAC_PF_BEGIN_WITH( genarray)
                /*
                 * WL_BEGIN__OFFSET( SACp_inl_6582_rd, 2, SACp_inl_6591__type_374, 2)
                 */
                { int SAC_WL_OFFSET( SACp_inl_6582_rd);
                  int SAC_WL_MT_SCHEDULE_START( 0);
                  int SAC_WL_MT_SCHEDULE_STOP( 0);
                  int SAC_WL_MT_SCHEDULE_START( 1);
                  int SAC_WL_MT_SCHEDULE_STOP( 1);
                  int SAC_i;
                  int SAC_WL_SHAPE_FACTOR( SACp_inl_6582_rd, 0) = 1 * SAC_ND_A_SHAPE( SACp_inl_6582_rd, 1);
                  int SAC_WL_SHAPE_FACTOR( SACp_inl_6582_rd, 1) = 1;

                  /*
                   * MT_SCHEDULER_BEGIN( 0, 2, 0, 0, 128, 2)
                   */
                  SAC_WL_MT_SCHEDULE_START( 0) = 0;
                  SAC_WL_MT_SCHEDULE_STOP( 0) = 128;
                  SAC_WL_MT_SCHEDULE_START( 1) = 0;
                  SAC_WL_MT_SCHEDULE_STOP( 1) = 2;

                  /*
                   * WL_INIT_OFFSET( SACp_inl_6582_rd, 2, SACp_inl_6591__type_374, 2)
                   */
                  SAC_WL_OFFSET( SACp_inl_6582_rd)
                    = SAC_WL_MT_SCHEDULE_START( 0) * SAC_WL_SHAPE_FACTOR( SACp_inl_6582_rd, 0)
                    + SAC_WL_MT_SCHEDULE_START( 1) * SAC_WL_SHAPE_FACTOR( SACp_inl_6582_rd, 1);

                  SAC_WL_STRIDE_LOOP0_BEGIN( 0, SACp_inl_6591__type_374, SACp_inl_6590__type_369, 0, 128, 1)
                    SAC_WL_GRID_UNROLL_BEGIN( 0, SACp_inl_6591__type_374, SACp_inl_6590__type_369, 0, 1)
                      SAC_WL_STRIDE_LOOP0_BEGIN( 1, SACp_inl_6591__type_374, SACp_inl_6589__type_368, 0, 2, 1)
                        SAC_WL_GRID_UNROLL_BEGIN( 1, SACp_inl_6591__type_374, SACp_inl_6589__type_368, 0, 1)
                          SACp_inl_6584__type_367_32_128_128_2__ = ((((((SACp_inl_6648__type_617 * 128) + SACp_inl_6649__type_618) * 128) + SACp_inl_6590__type_369) * 2) + SACp_inl_6589__type_368); 
                          SAC_ND_IDX_SEL_S( SACp_inl_6584__type_367_32_128_128_2__, SACl_a, SACp_inl_6583__type_366)
                          /*
                           * WL_ASSIGN( SACp_inl_6583__type_366, 0, SACp_inl_6582_rd, 2, SACp_inl_6591__type_374, 2, SACp_inl_6590__type_369, SACp_inl_6589__type_368)
                           */
                          SAC_TR_WL_PRINT( ("index vector [%d, %d] (== offset %d) -- offset %d -- assign", SACp_inl_6590__type_369, SACp_inl_6589__type_368, ( SAC_ND_A_SHAPE( SACp_inl_6582_rd, 1) * SACp_inl_6590__type_369 + SACp_inl_6589__type_368 ), SAC_WL_OFFSET( SACp_inl_6582_rd)));
                          SAC_ASSURE_TYPE( (SAC_ND_A_DIM( SACp_inl_6583__type_366) == (SAC_ND_A_DIM( SACp_inl_6582_rd) - 2)), ("WL expression with illegal dimension found!"));
                          SAC_ASSURE_TYPE( (SAC_ND_A_SIZE( SACp_inl_6583__type_366) == SAC_WL_SHAPE_FACTOR( SACp_inl_6582_rd, 1)), ("WL expression with illegal size found!"));
                          SAC_ND_WRITE_ARRAY( SACp_inl_6582_rd, SAC_WL_OFFSET( SACp_inl_6582_rd)) = SACp_inl_6583__type_366;
                          SAC_WL_OFFSET( SACp_inl_6582_rd)++;

                        SAC_WL_GRID_UNROLL_END( 1, SACp_inl_6591__type_374, SACp_inl_6589__type_368, 0, 1)
                      SAC_WL_STRIDE_LOOP_END( 1, SACp_inl_6591__type_374, SACp_inl_6589__type_368, 0, 2, 1)
                    SAC_WL_GRID_UNROLL_END( 0, SACp_inl_6591__type_374, SACp_inl_6590__type_369, 0, 1)
                  SAC_WL_STRIDE_LOOP_END( 0, SACp_inl_6591__type_374, SACp_inl_6590__type_369, 0, 128, 1)
                  /*
                   * MT_SCHEDULER_END( 0, 2, 0, 0, 128, 2)
                   */


                  /*
                   * WL_END__OFFSET( SACp_inl_6582_rd, 2, SACp_inl_6591__type_374, 2)
                   */
                }

              SAC_PF_END_WITH( genarray)
              /*
               * ND_FUN_AP( SACf_FFT1d__d___MAIN__cpx_128___MAIN__cpx_64, , 4, out_rc, SACp_inl_6651_slice__SSA_1, in, SACl_dir, in_rc, SACp_inl_6582_rd, in_rc, SACl_rofu)
               */
              SACf_FFT1d__d___MAIN__cpx_128___MAIN__cpx_64( SAC_ND_ARG_out_rc( SACp_inl_6651_slice__SSA_1), SAC_ND_ARG_in( SACl_dir), SAC_ND_ARG_in_rc( SACp_inl_6582_rd), SAC_ND_ARG_in_rc( SACl_rofu));

              /*
               * WL_ASSIGN( SACp_inl_6651_slice__SSA_1, 2, SACp_inl_6652_result__SSA_1, 4, SACp_inl_6647__flat_312_iv, 2, SACp_inl_6648__type_617, SACp_inl_6649__type_618)
               */
              SAC_TR_WL_PRINT( ("index vector [%d, %d] (== offset %d) -- offset %d -- assign", SACp_inl_6648__type_617, SACp_inl_6649__type_618, ( SAC_ND_A_SHAPE( SACp_inl_6652_result__SSA_1, 1) * SACp_inl_6648__type_617 + SACp_inl_6649__type_618 ), SAC_WL_OFFSET( SACp_inl_6652_result__SSA_1)));
              SAC_ASSURE_TYPE( (SAC_ND_A_DIM( SACp_inl_6651_slice__SSA_1) == (SAC_ND_A_DIM( SACp_inl_6652_result__SSA_1) - 2)), ("WL expression with illegal dimension found!"));
              SAC_ASSURE_TYPE( (SAC_ND_A_SIZE( SACp_inl_6651_slice__SSA_1) == SAC_WL_SHAPE_FACTOR( SACp_inl_6652_result__SSA_1, 1)), ("WL expression with illegal size found!"));
              { int SAC_i;
                for (SAC_i = 0; SAC_i < SAC_ND_A_SIZE( SACp_inl_6651_slice__SSA_1); SAC_i++) { 
                  SAC_ND_WRITE( SACp_inl_6652_result__SSA_1, SAC_WL_OFFSET( SACp_inl_6652_result__SSA_1)) = SAC_ND_READ( SACp_inl_6651_slice__SSA_1, SAC_i);
                  SAC_WL_OFFSET( SACp_inl_6652_result__SSA_1)++;
                }
              }

              SAC_ND_DEC_RC_FREE_ARRAY( SACp_inl_6651_slice__SSA_1, 1)
            SAC_WL_GRID_UNROLL_END( 1, SACp_inl_6647__flat_312_iv, SACp_inl_6649__type_618, 0, 1)
          SAC_WL_STRIDE_LOOP_END( 1, SACp_inl_6647__flat_312_iv, SACp_inl_6649__type_618, 0, 128, 1)
        SAC_WL_GRID_UNROLL_END( 0, SACp_inl_6647__flat_312_iv, SACp_inl_6648__type_617, 0, 1)
      SAC_WL_STRIDE_LOOP_END( 0, SACp_inl_6647__flat_312_iv, SACp_inl_6648__type_617, 0, 32, 1)
      /*
       * MT_SCHEDULER_END( 0, 2, 0, 0, 32, 128)
       */


      /*
       * WL_END__OFFSET( SACp_inl_6652_result__SSA_1, 4, SACp_inl_6647__flat_312_iv, 2)
       */
    }

  SAC_PF_END_WITH( modarray)
  SAC_ND_DEC_RC_FREE_ARRAY( SACl_rofu, 1)
  SAC_ND_DEC_RC_FREE_ARRAY( SACl_a, 1)
  /*
   * ND_FUN_RET( , 1, out_rc, SACp_inl_6652_result__SSA_1, SAC__arg_1)
   */
  SAC_ND_RET_out_rc( SACp_inl_6652_result__SSA_1, SAC__arg_1)
  return;
}

/*
 * ND_FUN_DEC( SACf_FFT3d_forward___MAIN__cpx_128_128_32___MAIN__cpx_64, void, 3, out_rc, double *, SAC__arg_1, in_rc, double *, SACl_a, in_rc, double *, SACl_rofu)
 */
void SACf_FFT3d_forward___MAIN__cpx_128_128_32___MAIN__cpx_64( SAC_ND_PARAM_out_rc( double *, SAC__arg_1), SAC_ND_PARAM_in_rc( double *, SACl_a), SAC_ND_PARAM_in_rc( double *, SACl_rofu))
{ 
  int SACp__ae_3_inl_4691_ivt; 
  int SACp__ae_3_inl_4639_ivt; 
  int SACp__ae_3_inl_4587_ivt; 
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
   * ND_KS_DECL_ARRAY( int, SACp_inl_4696__flat_52_iv, 1, 4)
   */
  int *SACp_inl_4696__flat_52_iv;
  int SAC_ND_A_RC( SACp_inl_4696__flat_52_iv);
  const int SAC_ND_A_SIZE( SACp_inl_4696__flat_52_iv) = 4;
  const int SAC_ND_A_DIM( SACp_inl_4696__flat_52_iv) = 1;
  const int SAC_ND_A_SHAPE( SACp_inl_4696__flat_52_iv, 0) = 4;

  int SACp_inl_4695__type_552; 
  int SACp_inl_4694__type_553; 
  int SACp_inl_4693__type_554; 
  int SACp_inl_4692__type_555; 
  double SACp_inl_4682_val; 
  /*
   * ND_KS_DECL_ARRAY( double, SACp_inl_4681_res, 4, 128, 128, 32, 2)
   */
  double *SACp_inl_4681_res;
  int SAC_ND_A_RC( SACp_inl_4681_res);
  const int SAC_ND_A_SIZE( SACp_inl_4681_res) = 128*128*32*2;
  const int SAC_ND_A_DIM( SACp_inl_4681_res) = 4;
  const int SAC_ND_A_SHAPE( SACp_inl_4681_res, 0) = 128;
  const int SAC_ND_A_SHAPE( SACp_inl_4681_res, 1) = 128;
  const int SAC_ND_A_SHAPE( SACp_inl_4681_res, 2) = 32;
  const int SAC_ND_A_SHAPE( SACp_inl_4681_res, 3) = 2;

  /*
   * ND_KS_DECL_ARRAY( int, SACp_inl_4644__flat_52_iv, 1, 4)
   */
  int *SACp_inl_4644__flat_52_iv;
  int SAC_ND_A_RC( SACp_inl_4644__flat_52_iv);
  const int SAC_ND_A_SIZE( SACp_inl_4644__flat_52_iv) = 4;
  const int SAC_ND_A_DIM( SACp_inl_4644__flat_52_iv) = 1;
  const int SAC_ND_A_SHAPE( SACp_inl_4644__flat_52_iv, 0) = 4;

  int SACp_inl_4643__type_546; 
  int SACp_inl_4642__type_547; 
  int SACp_inl_4641__type_548; 
  int SACp_inl_4640__type_549; 
  double SACp_inl_4630_val; 
  /*
   * ND_KS_DECL_ARRAY( double, SACp_inl_4629_res, 4, 32, 128, 128, 2)
   */
  double *SACp_inl_4629_res;
  int SAC_ND_A_RC( SACp_inl_4629_res);
  const int SAC_ND_A_SIZE( SACp_inl_4629_res) = 32*128*128*2;
  const int SAC_ND_A_DIM( SACp_inl_4629_res) = 4;
  const int SAC_ND_A_SHAPE( SACp_inl_4629_res, 0) = 32;
  const int SAC_ND_A_SHAPE( SACp_inl_4629_res, 1) = 128;
  const int SAC_ND_A_SHAPE( SACp_inl_4629_res, 2) = 128;
  const int SAC_ND_A_SHAPE( SACp_inl_4629_res, 3) = 2;

  /*
   * ND_KS_DECL_ARRAY( int, SACp_inl_4592__flat_52_iv, 1, 4)
   */
  int *SACp_inl_4592__flat_52_iv;
  int SAC_ND_A_RC( SACp_inl_4592__flat_52_iv);
  const int SAC_ND_A_SIZE( SACp_inl_4592__flat_52_iv) = 4;
  const int SAC_ND_A_DIM( SACp_inl_4592__flat_52_iv) = 1;
  const int SAC_ND_A_SHAPE( SACp_inl_4592__flat_52_iv, 0) = 4;

  int SACp_inl_4591__type_355; 
  int SACp_inl_4590__type_356; 
  int SACp_inl_4589__type_357; 
  int SACp_inl_4588__type_358; 
  double SACp_inl_4578_val; 
  /*
   * ND_KS_DECL_ARRAY( double, SACp_inl_4577_res, 4, 32, 128, 128, 2)
   */
  double *SACp_inl_4577_res;
  int SAC_ND_A_RC( SACp_inl_4577_res);
  const int SAC_ND_A_SIZE( SACp_inl_4577_res) = 32*128*128*2;
  const int SAC_ND_A_DIM( SACp_inl_4577_res) = 4;
  const int SAC_ND_A_SHAPE( SACp_inl_4577_res, 0) = 32;
  const int SAC_ND_A_SHAPE( SACp_inl_4577_res, 1) = 128;
  const int SAC_ND_A_SHAPE( SACp_inl_4577_res, 2) = 128;
  const int SAC_ND_A_SHAPE( SACp_inl_4577_res, 3) = 2;

  int SACp_inl_4587_ivt__SSA_1_128_128_32_2__; 
  int SACp_inl_4639_ivt__SSA_1_32_128_128_2__; 
  int SACp_inl_4691_ivt__SSA_1_32_128_128_2__; 
  /*
   * ND_KS_DECL_ARRAY( int, SACp_inl_4598_res__SSA_1, 1, 4)
   */
  int *SACp_inl_4598_res__SSA_1;
  int SAC_ND_A_RC( SACp_inl_4598_res__SSA_1);
  const int SAC_ND_A_SIZE( SACp_inl_4598_res__SSA_1) = 4;
  const int SAC_ND_A_DIM( SACp_inl_4598_res__SSA_1) = 1;
  const int SAC_ND_A_SHAPE( SACp_inl_4598_res__SSA_1, 0) = 4;

  /*
   * ND_KS_DECL_ARRAY( int, SACp_inl_4598_res__SSA_2, 1, 4)
   */
  int *SACp_inl_4598_res__SSA_2;
  int SAC_ND_A_RC( SACp_inl_4598_res__SSA_2);
  const int SAC_ND_A_SIZE( SACp_inl_4598_res__SSA_2) = 4;
  const int SAC_ND_A_DIM( SACp_inl_4598_res__SSA_2) = 1;
  const int SAC_ND_A_SHAPE( SACp_inl_4598_res__SSA_2, 0) = 4;

  /*
   * ND_KS_DECL_ARRAY( int, SACp_inl_4598_res__SSA_3, 1, 4)
   */
  int *SACp_inl_4598_res__SSA_3;
  int SAC_ND_A_RC( SACp_inl_4598_res__SSA_3);
  const int SAC_ND_A_SIZE( SACp_inl_4598_res__SSA_3) = 4;
  const int SAC_ND_A_DIM( SACp_inl_4598_res__SSA_3) = 1;
  const int SAC_ND_A_SHAPE( SACp_inl_4598_res__SSA_3, 0) = 4;

  /*
   * ND_KS_DECL_ARRAY( int, SACp_inl_4650_res__SSA_1, 1, 4)
   */
  int *SACp_inl_4650_res__SSA_1;
  int SAC_ND_A_RC( SACp_inl_4650_res__SSA_1);
  const int SAC_ND_A_SIZE( SACp_inl_4650_res__SSA_1) = 4;
  const int SAC_ND_A_DIM( SACp_inl_4650_res__SSA_1) = 1;
  const int SAC_ND_A_SHAPE( SACp_inl_4650_res__SSA_1, 0) = 4;

  /*
   * ND_KS_DECL_ARRAY( int, SACp_inl_4650_res__SSA_2, 1, 4)
   */
  int *SACp_inl_4650_res__SSA_2;
  int SAC_ND_A_RC( SACp_inl_4650_res__SSA_2);
  const int SAC_ND_A_SIZE( SACp_inl_4650_res__SSA_2) = 4;
  const int SAC_ND_A_DIM( SACp_inl_4650_res__SSA_2) = 1;
  const int SAC_ND_A_SHAPE( SACp_inl_4650_res__SSA_2, 0) = 4;

  /*
   * ND_KS_DECL_ARRAY( int, SACp_inl_4650_res__SSA_3, 1, 4)
   */
  int *SACp_inl_4650_res__SSA_3;
  int SAC_ND_A_RC( SACp_inl_4650_res__SSA_3);
  const int SAC_ND_A_SIZE( SACp_inl_4650_res__SSA_3) = 4;
  const int SAC_ND_A_DIM( SACp_inl_4650_res__SSA_3) = 1;
  const int SAC_ND_A_SHAPE( SACp_inl_4650_res__SSA_3, 0) = 4;

  /*
   * ND_KS_DECL_ARRAY( int, SACp_inl_4702_res__SSA_1, 1, 4)
   */
  int *SACp_inl_4702_res__SSA_1;
  int SAC_ND_A_RC( SACp_inl_4702_res__SSA_1);
  const int SAC_ND_A_SIZE( SACp_inl_4702_res__SSA_1) = 4;
  const int SAC_ND_A_DIM( SACp_inl_4702_res__SSA_1) = 1;
  const int SAC_ND_A_SHAPE( SACp_inl_4702_res__SSA_1, 0) = 4;

  /*
   * ND_KS_DECL_ARRAY( int, SACp_inl_4702_res__SSA_2, 1, 4)
   */
  int *SACp_inl_4702_res__SSA_2;
  int SAC_ND_A_RC( SACp_inl_4702_res__SSA_2);
  const int SAC_ND_A_SIZE( SACp_inl_4702_res__SSA_2) = 4;
  const int SAC_ND_A_DIM( SACp_inl_4702_res__SSA_2) = 1;
  const int SAC_ND_A_SHAPE( SACp_inl_4702_res__SSA_2, 0) = 4;

  /*
   * ND_KS_DECL_ARRAY( int, SACp_inl_4702_res__SSA_3, 1, 4)
   */
  int *SACp_inl_4702_res__SSA_3;
  int SAC_ND_A_RC( SACp_inl_4702_res__SSA_3);
  const int SAC_ND_A_SIZE( SACp_inl_4702_res__SSA_3) = 4;
  const int SAC_ND_A_DIM( SACp_inl_4702_res__SSA_3) = 1;
  const int SAC_ND_A_SHAPE( SACp_inl_4702_res__SSA_3, 0) = 4;


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
  SAC_ND_ALLOC_ARRAY( double, SACp_inl_4577_res, 1)
  SAC_ND_ALLOC_ARRAY( int, SACp_inl_4592__flat_52_iv, 1)
  SAC_PF_BEGIN_WITH( genarray)
    /*
     * WL_BEGIN__OFFSET( SACp_inl_4577_res, 4, SACp_inl_4592__flat_52_iv, 4)
     */
    { int SAC_WL_OFFSET( SACp_inl_4577_res);
      int SAC_WL_MT_SCHEDULE_START( 0);
      int SAC_WL_MT_SCHEDULE_STOP( 0);
      int SAC_WL_MT_SCHEDULE_START( 1);
      int SAC_WL_MT_SCHEDULE_STOP( 1);
      int SAC_WL_MT_SCHEDULE_START( 2);
      int SAC_WL_MT_SCHEDULE_STOP( 2);
      int SAC_WL_MT_SCHEDULE_START( 3);
      int SAC_WL_MT_SCHEDULE_STOP( 3);
      int SAC_i;
      int SAC_WL_SHAPE_FACTOR( SACp_inl_4577_res, 0) = 1 * SAC_ND_A_SHAPE( SACp_inl_4577_res, 1) * SAC_ND_A_SHAPE( SACp_inl_4577_res, 2) * SAC_ND_A_SHAPE( SACp_inl_4577_res, 3);
      int SAC_WL_SHAPE_FACTOR( SACp_inl_4577_res, 1) = 1 * SAC_ND_A_SHAPE( SACp_inl_4577_res, 2) * SAC_ND_A_SHAPE( SACp_inl_4577_res, 3);
      int SAC_WL_SHAPE_FACTOR( SACp_inl_4577_res, 2) = 1 * SAC_ND_A_SHAPE( SACp_inl_4577_res, 3);
      int SAC_WL_SHAPE_FACTOR( SACp_inl_4577_res, 3) = 1;

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
       * WL_INIT_OFFSET( SACp_inl_4577_res, 4, SACp_inl_4592__flat_52_iv, 4)
       */
      SAC_WL_OFFSET( SACp_inl_4577_res)
        = SAC_WL_MT_SCHEDULE_START( 0) * SAC_WL_SHAPE_FACTOR( SACp_inl_4577_res, 0)
        + SAC_WL_MT_SCHEDULE_START( 1) * SAC_WL_SHAPE_FACTOR( SACp_inl_4577_res, 1)
        + SAC_WL_MT_SCHEDULE_START( 2) * SAC_WL_SHAPE_FACTOR( SACp_inl_4577_res, 2)
        + SAC_WL_MT_SCHEDULE_START( 3) * SAC_WL_SHAPE_FACTOR( SACp_inl_4577_res, 3);

      SAC_WL_STRIDE_LOOP0_BEGIN( 0, SACp_inl_4592__flat_52_iv, SACp_inl_4591__type_355, 0, 32, 1)
        SAC_WL_GRID_UNROLL_BEGIN( 0, SACp_inl_4592__flat_52_iv, SACp_inl_4591__type_355, 0, 1)
          SAC_WL_SET_IDXVEC( 0, SACp_inl_4592__flat_52_iv, SACp_inl_4591__type_355, 0, 1)
          SAC_WL_STRIDE_LOOP0_BEGIN( 1, SACp_inl_4592__flat_52_iv, SACp_inl_4590__type_356, 0, 128, 1)
            SAC_WL_GRID_UNROLL_BEGIN( 1, SACp_inl_4592__flat_52_iv, SACp_inl_4590__type_356, 0, 1)
              SAC_WL_SET_IDXVEC( 1, SACp_inl_4592__flat_52_iv, SACp_inl_4590__type_356, 0, 1)
              SAC_WL_STRIDE_LOOP0_BEGIN( 2, SACp_inl_4592__flat_52_iv, SACp_inl_4589__type_357, 0, 128, 1)
                SAC_WL_GRID_UNROLL_BEGIN( 2, SACp_inl_4592__flat_52_iv, SACp_inl_4589__type_357, 0, 1)
                  SAC_WL_SET_IDXVEC( 2, SACp_inl_4592__flat_52_iv, SACp_inl_4589__type_357, 0, 1)
                  SAC_WL_STRIDE_LOOP0_BEGIN( 3, SACp_inl_4592__flat_52_iv, SACp_inl_4588__type_358, 0, 2, 1)
                    SAC_WL_GRID_UNROLL_BEGIN( 3, SACp_inl_4592__flat_52_iv, SACp_inl_4588__type_358, 0, 1)
                      SAC_WL_SET_IDXVEC( 3, SACp_inl_4592__flat_52_iv, SACp_inl_4588__type_358, 0, 1)
                      SAC_ND_ALLOC_ARRAY( int, SACp_inl_4598_res__SSA_1, 1)
                      SAC_ND_IDX_MODARRAY_AxVxS( int, SACp_inl_4598_res__SSA_1, SACp_inl_4592__flat_52_iv, 2, SACp_inl_4591__type_355)
                      SAC_ND_CHECK_REUSE_ARRAY( SACp_inl_4598_res__SSA_1, SACp_inl_4598_res__SSA_2)
                      SAC_ND_ALLOC_ARRAY( int, SACp_inl_4598_res__SSA_2, 0)
                      SAC_ND_INC_RC( SACp_inl_4598_res__SSA_2, 1)
                      SAC_ND_IDX_MODARRAY_AxVxS( int, SACp_inl_4598_res__SSA_2, SACp_inl_4598_res__SSA_1, 1, SACp_inl_4590__type_356)
                      SAC_ND_DEC_RC_FREE_ARRAY( SACp_inl_4598_res__SSA_1, 1)
                      SAC_ND_CHECK_REUSE_ARRAY( SACp_inl_4598_res__SSA_2, SACp_inl_4598_res__SSA_3)
                      SAC_ND_ALLOC_ARRAY( int, SACp_inl_4598_res__SSA_3, 0)
                      SAC_ND_INC_RC( SACp_inl_4598_res__SSA_3, 1)
                      SAC_ND_IDX_MODARRAY_AxVxS( int, SACp_inl_4598_res__SSA_3, SACp_inl_4598_res__SSA_2, 0, SACp_inl_4589__type_357)
                      SAC_ND_DEC_RC_FREE_ARRAY( SACp_inl_4598_res__SSA_2, 1)
                      SAC_ND_IDX_SEL_S( 3, SACp_inl_4598_res__SSA_3, SACp__ae_3_inl_4587_ivt)
                      SAC_ND_DEC_RC_FREE_ARRAY( SACp_inl_4598_res__SSA_3, 1)
                      SACp_inl_4587_ivt__SSA_1_128_128_32_2__ = ((((((SACp_inl_4589__type_357 * 128) + SACp_inl_4590__type_356) * 32) + SACp_inl_4591__type_355) * 2) + SACp__ae_3_inl_4587_ivt); 
                      SAC_ND_IDX_SEL_S( SACp_inl_4587_ivt__SSA_1_128_128_32_2__, SACl_a, SACp_inl_4578_val)
                      /*
                       * WL_ASSIGN( SACp_inl_4578_val, 0, SACp_inl_4577_res, 4, SACp_inl_4592__flat_52_iv, 4, SACp_inl_4591__type_355, SACp_inl_4590__type_356, SACp_inl_4589__type_357, SACp_inl_4588__type_358)
                       */
                      SAC_TR_WL_PRINT( ("index vector [%d, %d, %d, %d] (== offset %d) -- offset %d -- assign", SACp_inl_4591__type_355, SACp_inl_4590__type_356, SACp_inl_4589__type_357, SACp_inl_4588__type_358, ( SAC_ND_A_SHAPE( SACp_inl_4577_res, 3) * ( SAC_ND_A_SHAPE( SACp_inl_4577_res, 2) * ( SAC_ND_A_SHAPE( SACp_inl_4577_res, 1) * SACp_inl_4591__type_355 + SACp_inl_4590__type_356 )+ SACp_inl_4589__type_357 )+ SACp_inl_4588__type_358 ), SAC_WL_OFFSET( SACp_inl_4577_res)));
                      SAC_ASSURE_TYPE( (SAC_ND_A_DIM( SACp_inl_4578_val) == (SAC_ND_A_DIM( SACp_inl_4577_res) - 4)), ("WL expression with illegal dimension found!"));
                      SAC_ASSURE_TYPE( (SAC_ND_A_SIZE( SACp_inl_4578_val) == SAC_WL_SHAPE_FACTOR( SACp_inl_4577_res, 3)), ("WL expression with illegal size found!"));
                      SAC_ND_WRITE_ARRAY( SACp_inl_4577_res, SAC_WL_OFFSET( SACp_inl_4577_res)) = SACp_inl_4578_val;
                      SAC_WL_OFFSET( SACp_inl_4577_res)++;

                    SAC_WL_GRID_UNROLL_END( 3, SACp_inl_4592__flat_52_iv, SACp_inl_4588__type_358, 0, 1)
                  SAC_WL_STRIDE_LOOP_END( 3, SACp_inl_4592__flat_52_iv, SACp_inl_4588__type_358, 0, 2, 1)
                SAC_WL_GRID_UNROLL_END( 2, SACp_inl_4592__flat_52_iv, SACp_inl_4589__type_357, 0, 1)
              SAC_WL_STRIDE_LOOP_END( 2, SACp_inl_4592__flat_52_iv, SACp_inl_4589__type_357, 0, 128, 1)
            SAC_WL_GRID_UNROLL_END( 1, SACp_inl_4592__flat_52_iv, SACp_inl_4590__type_356, 0, 1)
          SAC_WL_STRIDE_LOOP_END( 1, SACp_inl_4592__flat_52_iv, SACp_inl_4590__type_356, 0, 128, 1)
        SAC_WL_GRID_UNROLL_END( 0, SACp_inl_4592__flat_52_iv, SACp_inl_4591__type_355, 0, 1)
      SAC_WL_STRIDE_LOOP_END( 0, SACp_inl_4592__flat_52_iv, SACp_inl_4591__type_355, 0, 32, 1)
      /*
       * MT_SCHEDULER_END( 0, 4, 0, 0, 0, 0, 32, 128, 128, 2)
       */


      /*
       * WL_END__OFFSET( SACp_inl_4577_res, 4, SACp_inl_4592__flat_52_iv, 4)
       */
    }

  SAC_PF_END_WITH( genarray)
  SAC_ND_DEC_RC_FREE_ARRAY( SACl_a, 1)
  SAC_ND_DEC_RC_FREE_ARRAY( SACp_inl_4592__flat_52_iv, 1)
  /*
   * ND_FUN_AP( SACf_FFT1d_Slice__d___MAIN__cpx_32_128_128___MAIN__cpx_64, , 4, out_rc, SACl_b, in, 1.0, in_rc, SACp_inl_4577_res, in_rc, SACl_rofu)
   */
  SACf_FFT1d_Slice__d___MAIN__cpx_32_128_128___MAIN__cpx_64( SAC_ND_ARG_out_rc( SACl_b), SAC_ND_ARG_in( 1.0), SAC_ND_ARG_in_rc( SACp_inl_4577_res), SAC_ND_ARG_in_rc( SACl_rofu));

  SAC_ND_ALLOC_ARRAY( double, SACp_inl_4629_res, 1)
  SAC_ND_ALLOC_ARRAY( int, SACp_inl_4644__flat_52_iv, 1)
  SAC_PF_BEGIN_WITH( genarray)
    /*
     * WL_BEGIN__OFFSET( SACp_inl_4629_res, 4, SACp_inl_4644__flat_52_iv, 4)
     */
    { int SAC_WL_OFFSET( SACp_inl_4629_res);
      int SAC_WL_MT_SCHEDULE_START( 0);
      int SAC_WL_MT_SCHEDULE_STOP( 0);
      int SAC_WL_MT_SCHEDULE_START( 1);
      int SAC_WL_MT_SCHEDULE_STOP( 1);
      int SAC_WL_MT_SCHEDULE_START( 2);
      int SAC_WL_MT_SCHEDULE_STOP( 2);
      int SAC_WL_MT_SCHEDULE_START( 3);
      int SAC_WL_MT_SCHEDULE_STOP( 3);
      int SAC_i;
      int SAC_WL_SHAPE_FACTOR( SACp_inl_4629_res, 0) = 1 * SAC_ND_A_SHAPE( SACp_inl_4629_res, 1) * SAC_ND_A_SHAPE( SACp_inl_4629_res, 2) * SAC_ND_A_SHAPE( SACp_inl_4629_res, 3);
      int SAC_WL_SHAPE_FACTOR( SACp_inl_4629_res, 1) = 1 * SAC_ND_A_SHAPE( SACp_inl_4629_res, 2) * SAC_ND_A_SHAPE( SACp_inl_4629_res, 3);
      int SAC_WL_SHAPE_FACTOR( SACp_inl_4629_res, 2) = 1 * SAC_ND_A_SHAPE( SACp_inl_4629_res, 3);
      int SAC_WL_SHAPE_FACTOR( SACp_inl_4629_res, 3) = 1;

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
       * WL_INIT_OFFSET( SACp_inl_4629_res, 4, SACp_inl_4644__flat_52_iv, 4)
       */
      SAC_WL_OFFSET( SACp_inl_4629_res)
        = SAC_WL_MT_SCHEDULE_START( 0) * SAC_WL_SHAPE_FACTOR( SACp_inl_4629_res, 0)
        + SAC_WL_MT_SCHEDULE_START( 1) * SAC_WL_SHAPE_FACTOR( SACp_inl_4629_res, 1)
        + SAC_WL_MT_SCHEDULE_START( 2) * SAC_WL_SHAPE_FACTOR( SACp_inl_4629_res, 2)
        + SAC_WL_MT_SCHEDULE_START( 3) * SAC_WL_SHAPE_FACTOR( SACp_inl_4629_res, 3);

      SAC_WL_STRIDE_LOOP0_BEGIN( 0, SACp_inl_4644__flat_52_iv, SACp_inl_4643__type_546, 0, 32, 1)
        SAC_WL_GRID_UNROLL_BEGIN( 0, SACp_inl_4644__flat_52_iv, SACp_inl_4643__type_546, 0, 1)
          SAC_WL_SET_IDXVEC( 0, SACp_inl_4644__flat_52_iv, SACp_inl_4643__type_546, 0, 1)
          SAC_WL_STRIDE_LOOP0_BEGIN( 1, SACp_inl_4644__flat_52_iv, SACp_inl_4642__type_547, 0, 128, 1)
            SAC_WL_GRID_UNROLL_BEGIN( 1, SACp_inl_4644__flat_52_iv, SACp_inl_4642__type_547, 0, 1)
              SAC_WL_SET_IDXVEC( 1, SACp_inl_4644__flat_52_iv, SACp_inl_4642__type_547, 0, 1)
              SAC_WL_STRIDE_LOOP0_BEGIN( 2, SACp_inl_4644__flat_52_iv, SACp_inl_4641__type_548, 0, 128, 1)
                SAC_WL_GRID_UNROLL_BEGIN( 2, SACp_inl_4644__flat_52_iv, SACp_inl_4641__type_548, 0, 1)
                  SAC_WL_SET_IDXVEC( 2, SACp_inl_4644__flat_52_iv, SACp_inl_4641__type_548, 0, 1)
                  SAC_WL_STRIDE_LOOP0_BEGIN( 3, SACp_inl_4644__flat_52_iv, SACp_inl_4640__type_549, 0, 2, 1)
                    SAC_WL_GRID_UNROLL_BEGIN( 3, SACp_inl_4644__flat_52_iv, SACp_inl_4640__type_549, 0, 1)
                      SAC_WL_SET_IDXVEC( 3, SACp_inl_4644__flat_52_iv, SACp_inl_4640__type_549, 0, 1)
                      SAC_ND_ALLOC_ARRAY( int, SACp_inl_4650_res__SSA_1, 1)
                      SAC_ND_IDX_MODARRAY_AxVxS( int, SACp_inl_4650_res__SSA_1, SACp_inl_4644__flat_52_iv, 2, SACp_inl_4642__type_547)
                      SAC_ND_CHECK_REUSE_ARRAY( SACp_inl_4650_res__SSA_1, SACp_inl_4650_res__SSA_2)
                      SAC_ND_ALLOC_ARRAY( int, SACp_inl_4650_res__SSA_2, 0)
                      SAC_ND_INC_RC( SACp_inl_4650_res__SSA_2, 1)
                      SAC_ND_IDX_MODARRAY_AxVxS( int, SACp_inl_4650_res__SSA_2, SACp_inl_4650_res__SSA_1, 1, SACp_inl_4641__type_548)
                      SAC_ND_DEC_RC_FREE_ARRAY( SACp_inl_4650_res__SSA_1, 1)
                      SAC_ND_CHECK_REUSE_ARRAY( SACp_inl_4650_res__SSA_2, SACp_inl_4650_res__SSA_3)
                      SAC_ND_ALLOC_ARRAY( int, SACp_inl_4650_res__SSA_3, 0)
                      SAC_ND_INC_RC( SACp_inl_4650_res__SSA_3, 1)
                      SAC_ND_IDX_MODARRAY_AxVxS( int, SACp_inl_4650_res__SSA_3, SACp_inl_4650_res__SSA_2, 0, SACp_inl_4643__type_546)
                      SAC_ND_DEC_RC_FREE_ARRAY( SACp_inl_4650_res__SSA_2, 1)
                      SAC_ND_IDX_SEL_S( 3, SACp_inl_4650_res__SSA_3, SACp__ae_3_inl_4639_ivt)
                      SAC_ND_DEC_RC_FREE_ARRAY( SACp_inl_4650_res__SSA_3, 1)
                      SACp_inl_4639_ivt__SSA_1_32_128_128_2__ = ((((((SACp_inl_4643__type_546 * 128) + SACp_inl_4641__type_548) * 128) + SACp_inl_4642__type_547) * 2) + SACp__ae_3_inl_4639_ivt); 
                      SAC_ND_IDX_SEL_S( SACp_inl_4639_ivt__SSA_1_32_128_128_2__, SACl_b, SACp_inl_4630_val)
                      /*
                       * WL_ASSIGN( SACp_inl_4630_val, 0, SACp_inl_4629_res, 4, SACp_inl_4644__flat_52_iv, 4, SACp_inl_4643__type_546, SACp_inl_4642__type_547, SACp_inl_4641__type_548, SACp_inl_4640__type_549)
                       */
                      SAC_TR_WL_PRINT( ("index vector [%d, %d, %d, %d] (== offset %d) -- offset %d -- assign", SACp_inl_4643__type_546, SACp_inl_4642__type_547, SACp_inl_4641__type_548, SACp_inl_4640__type_549, ( SAC_ND_A_SHAPE( SACp_inl_4629_res, 3) * ( SAC_ND_A_SHAPE( SACp_inl_4629_res, 2) * ( SAC_ND_A_SHAPE( SACp_inl_4629_res, 1) * SACp_inl_4643__type_546 + SACp_inl_4642__type_547 )+ SACp_inl_4641__type_548 )+ SACp_inl_4640__type_549 ), SAC_WL_OFFSET( SACp_inl_4629_res)));
                      SAC_ASSURE_TYPE( (SAC_ND_A_DIM( SACp_inl_4630_val) == (SAC_ND_A_DIM( SACp_inl_4629_res) - 4)), ("WL expression with illegal dimension found!"));
                      SAC_ASSURE_TYPE( (SAC_ND_A_SIZE( SACp_inl_4630_val) == SAC_WL_SHAPE_FACTOR( SACp_inl_4629_res, 3)), ("WL expression with illegal size found!"));
                      SAC_ND_WRITE_ARRAY( SACp_inl_4629_res, SAC_WL_OFFSET( SACp_inl_4629_res)) = SACp_inl_4630_val;
                      SAC_WL_OFFSET( SACp_inl_4629_res)++;

                    SAC_WL_GRID_UNROLL_END( 3, SACp_inl_4644__flat_52_iv, SACp_inl_4640__type_549, 0, 1)
                  SAC_WL_STRIDE_LOOP_END( 3, SACp_inl_4644__flat_52_iv, SACp_inl_4640__type_549, 0, 2, 1)
                SAC_WL_GRID_UNROLL_END( 2, SACp_inl_4644__flat_52_iv, SACp_inl_4641__type_548, 0, 1)
              SAC_WL_STRIDE_LOOP_END( 2, SACp_inl_4644__flat_52_iv, SACp_inl_4641__type_548, 0, 128, 1)
            SAC_WL_GRID_UNROLL_END( 1, SACp_inl_4644__flat_52_iv, SACp_inl_4642__type_547, 0, 1)
          SAC_WL_STRIDE_LOOP_END( 1, SACp_inl_4644__flat_52_iv, SACp_inl_4642__type_547, 0, 128, 1)
        SAC_WL_GRID_UNROLL_END( 0, SACp_inl_4644__flat_52_iv, SACp_inl_4643__type_546, 0, 1)
      SAC_WL_STRIDE_LOOP_END( 0, SACp_inl_4644__flat_52_iv, SACp_inl_4643__type_546, 0, 32, 1)
      /*
       * MT_SCHEDULER_END( 0, 4, 0, 0, 0, 0, 32, 128, 128, 2)
       */


      /*
       * WL_END__OFFSET( SACp_inl_4629_res, 4, SACp_inl_4644__flat_52_iv, 4)
       */
    }

  SAC_PF_END_WITH( genarray)
  SAC_ND_DEC_RC_FREE_ARRAY( SACl_b, 1)
  SAC_ND_DEC_RC_FREE_ARRAY( SACp_inl_4644__flat_52_iv, 1)
  /*
   * ND_FUN_AP( SACf_FFT1d_Slice__d___MAIN__cpx_32_128_128___MAIN__cpx_64, , 4, out_rc, SACl_c, in, 1.0, in_rc, SACp_inl_4629_res, in_rc, SACl_rofu)
   */
  SACf_FFT1d_Slice__d___MAIN__cpx_32_128_128___MAIN__cpx_64( SAC_ND_ARG_out_rc( SACl_c), SAC_ND_ARG_in( 1.0), SAC_ND_ARG_in_rc( SACp_inl_4629_res), SAC_ND_ARG_in_rc( SACl_rofu));

  SAC_ND_ALLOC_ARRAY( double, SACp_inl_4681_res, 1)
  SAC_ND_ALLOC_ARRAY( int, SACp_inl_4696__flat_52_iv, 1)
  SAC_PF_BEGIN_WITH( genarray)
    /*
     * WL_BEGIN__OFFSET( SACp_inl_4681_res, 4, SACp_inl_4696__flat_52_iv, 4)
     */
    { int SAC_WL_OFFSET( SACp_inl_4681_res);
      int SAC_WL_MT_SCHEDULE_START( 0);
      int SAC_WL_MT_SCHEDULE_STOP( 0);
      int SAC_WL_MT_SCHEDULE_START( 1);
      int SAC_WL_MT_SCHEDULE_STOP( 1);
      int SAC_WL_MT_SCHEDULE_START( 2);
      int SAC_WL_MT_SCHEDULE_STOP( 2);
      int SAC_WL_MT_SCHEDULE_START( 3);
      int SAC_WL_MT_SCHEDULE_STOP( 3);
      int SAC_i;
      int SAC_WL_SHAPE_FACTOR( SACp_inl_4681_res, 0) = 1 * SAC_ND_A_SHAPE( SACp_inl_4681_res, 1) * SAC_ND_A_SHAPE( SACp_inl_4681_res, 2) * SAC_ND_A_SHAPE( SACp_inl_4681_res, 3);
      int SAC_WL_SHAPE_FACTOR( SACp_inl_4681_res, 1) = 1 * SAC_ND_A_SHAPE( SACp_inl_4681_res, 2) * SAC_ND_A_SHAPE( SACp_inl_4681_res, 3);
      int SAC_WL_SHAPE_FACTOR( SACp_inl_4681_res, 2) = 1 * SAC_ND_A_SHAPE( SACp_inl_4681_res, 3);
      int SAC_WL_SHAPE_FACTOR( SACp_inl_4681_res, 3) = 1;

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
       * WL_INIT_OFFSET( SACp_inl_4681_res, 4, SACp_inl_4696__flat_52_iv, 4)
       */
      SAC_WL_OFFSET( SACp_inl_4681_res)
        = SAC_WL_MT_SCHEDULE_START( 0) * SAC_WL_SHAPE_FACTOR( SACp_inl_4681_res, 0)
        + SAC_WL_MT_SCHEDULE_START( 1) * SAC_WL_SHAPE_FACTOR( SACp_inl_4681_res, 1)
        + SAC_WL_MT_SCHEDULE_START( 2) * SAC_WL_SHAPE_FACTOR( SACp_inl_4681_res, 2)
        + SAC_WL_MT_SCHEDULE_START( 3) * SAC_WL_SHAPE_FACTOR( SACp_inl_4681_res, 3);

      SAC_WL_STRIDE_LOOP0_BEGIN( 0, SACp_inl_4696__flat_52_iv, SACp_inl_4695__type_552, 0, 128, 1)
        SAC_WL_GRID_UNROLL_BEGIN( 0, SACp_inl_4696__flat_52_iv, SACp_inl_4695__type_552, 0, 1)
          SAC_WL_SET_IDXVEC( 0, SACp_inl_4696__flat_52_iv, SACp_inl_4695__type_552, 0, 1)
          SAC_WL_STRIDE_LOOP0_BEGIN( 1, SACp_inl_4696__flat_52_iv, SACp_inl_4694__type_553, 0, 128, 1)
            SAC_WL_GRID_UNROLL_BEGIN( 1, SACp_inl_4696__flat_52_iv, SACp_inl_4694__type_553, 0, 1)
              SAC_WL_SET_IDXVEC( 1, SACp_inl_4696__flat_52_iv, SACp_inl_4694__type_553, 0, 1)
              SAC_WL_STRIDE_LOOP0_BEGIN( 2, SACp_inl_4696__flat_52_iv, SACp_inl_4693__type_554, 0, 32, 1)
                SAC_WL_GRID_UNROLL_BEGIN( 2, SACp_inl_4696__flat_52_iv, SACp_inl_4693__type_554, 0, 1)
                  SAC_WL_SET_IDXVEC( 2, SACp_inl_4696__flat_52_iv, SACp_inl_4693__type_554, 0, 1)
                  SAC_WL_STRIDE_LOOP0_BEGIN( 3, SACp_inl_4696__flat_52_iv, SACp_inl_4692__type_555, 0, 2, 1)
                    SAC_WL_GRID_UNROLL_BEGIN( 3, SACp_inl_4696__flat_52_iv, SACp_inl_4692__type_555, 0, 1)
                      SAC_WL_SET_IDXVEC( 3, SACp_inl_4696__flat_52_iv, SACp_inl_4692__type_555, 0, 1)
                      SAC_ND_ALLOC_ARRAY( int, SACp_inl_4702_res__SSA_1, 1)
                      SAC_ND_IDX_MODARRAY_AxVxS( int, SACp_inl_4702_res__SSA_1, SACp_inl_4696__flat_52_iv, 2, SACp_inl_4694__type_553)
                      SAC_ND_CHECK_REUSE_ARRAY( SACp_inl_4702_res__SSA_1, SACp_inl_4702_res__SSA_2)
                      SAC_ND_ALLOC_ARRAY( int, SACp_inl_4702_res__SSA_2, 0)
                      SAC_ND_INC_RC( SACp_inl_4702_res__SSA_2, 1)
                      SAC_ND_IDX_MODARRAY_AxVxS( int, SACp_inl_4702_res__SSA_2, SACp_inl_4702_res__SSA_1, 1, SACp_inl_4695__type_552)
                      SAC_ND_DEC_RC_FREE_ARRAY( SACp_inl_4702_res__SSA_1, 1)
                      SAC_ND_CHECK_REUSE_ARRAY( SACp_inl_4702_res__SSA_2, SACp_inl_4702_res__SSA_3)
                      SAC_ND_ALLOC_ARRAY( int, SACp_inl_4702_res__SSA_3, 0)
                      SAC_ND_INC_RC( SACp_inl_4702_res__SSA_3, 1)
                      SAC_ND_IDX_MODARRAY_AxVxS( int, SACp_inl_4702_res__SSA_3, SACp_inl_4702_res__SSA_2, 0, SACp_inl_4693__type_554)
                      SAC_ND_DEC_RC_FREE_ARRAY( SACp_inl_4702_res__SSA_2, 1)
                      SAC_ND_IDX_SEL_S( 3, SACp_inl_4702_res__SSA_3, SACp__ae_3_inl_4691_ivt)
                      SAC_ND_DEC_RC_FREE_ARRAY( SACp_inl_4702_res__SSA_3, 1)
                      SACp_inl_4691_ivt__SSA_1_32_128_128_2__ = ((((((SACp_inl_4693__type_554 * 128) + SACp_inl_4695__type_552) * 128) + SACp_inl_4694__type_553) * 2) + SACp__ae_3_inl_4691_ivt); 
                      SAC_ND_IDX_SEL_S( SACp_inl_4691_ivt__SSA_1_32_128_128_2__, SACl_c, SACp_inl_4682_val)
                      /*
                       * WL_ASSIGN( SACp_inl_4682_val, 0, SACp_inl_4681_res, 4, SACp_inl_4696__flat_52_iv, 4, SACp_inl_4695__type_552, SACp_inl_4694__type_553, SACp_inl_4693__type_554, SACp_inl_4692__type_555)
                       */
                      SAC_TR_WL_PRINT( ("index vector [%d, %d, %d, %d] (== offset %d) -- offset %d -- assign", SACp_inl_4695__type_552, SACp_inl_4694__type_553, SACp_inl_4693__type_554, SACp_inl_4692__type_555, ( SAC_ND_A_SHAPE( SACp_inl_4681_res, 3) * ( SAC_ND_A_SHAPE( SACp_inl_4681_res, 2) * ( SAC_ND_A_SHAPE( SACp_inl_4681_res, 1) * SACp_inl_4695__type_552 + SACp_inl_4694__type_553 )+ SACp_inl_4693__type_554 )+ SACp_inl_4692__type_555 ), SAC_WL_OFFSET( SACp_inl_4681_res)));
                      SAC_ASSURE_TYPE( (SAC_ND_A_DIM( SACp_inl_4682_val) == (SAC_ND_A_DIM( SACp_inl_4681_res) - 4)), ("WL expression with illegal dimension found!"));
                      SAC_ASSURE_TYPE( (SAC_ND_A_SIZE( SACp_inl_4682_val) == SAC_WL_SHAPE_FACTOR( SACp_inl_4681_res, 3)), ("WL expression with illegal size found!"));
                      SAC_ND_WRITE_ARRAY( SACp_inl_4681_res, SAC_WL_OFFSET( SACp_inl_4681_res)) = SACp_inl_4682_val;
                      SAC_WL_OFFSET( SACp_inl_4681_res)++;

                    SAC_WL_GRID_UNROLL_END( 3, SACp_inl_4696__flat_52_iv, SACp_inl_4692__type_555, 0, 1)
                  SAC_WL_STRIDE_LOOP_END( 3, SACp_inl_4696__flat_52_iv, SACp_inl_4692__type_555, 0, 2, 1)
                SAC_WL_GRID_UNROLL_END( 2, SACp_inl_4696__flat_52_iv, SACp_inl_4693__type_554, 0, 1)
              SAC_WL_STRIDE_LOOP_END( 2, SACp_inl_4696__flat_52_iv, SACp_inl_4693__type_554, 0, 32, 1)
            SAC_WL_GRID_UNROLL_END( 1, SACp_inl_4696__flat_52_iv, SACp_inl_4694__type_553, 0, 1)
          SAC_WL_STRIDE_LOOP_END( 1, SACp_inl_4696__flat_52_iv, SACp_inl_4694__type_553, 0, 128, 1)
        SAC_WL_GRID_UNROLL_END( 0, SACp_inl_4696__flat_52_iv, SACp_inl_4695__type_552, 0, 1)
      SAC_WL_STRIDE_LOOP_END( 0, SACp_inl_4696__flat_52_iv, SACp_inl_4695__type_552, 0, 128, 1)
      /*
       * MT_SCHEDULER_END( 0, 4, 0, 0, 0, 0, 128, 128, 32, 2)
       */


      /*
       * WL_END__OFFSET( SACp_inl_4681_res, 4, SACp_inl_4696__flat_52_iv, 4)
       */
    }

  SAC_PF_END_WITH( genarray)
  SAC_ND_DEC_RC_FREE_ARRAY( SACl_c, 1)
  SAC_ND_DEC_RC_FREE_ARRAY( SACp_inl_4696__flat_52_iv, 1)
  /*
   * ND_FUN_AP( SACf_FFT1d_Slice__d___MAIN__cpx_128_128_32___MAIN__cpx_64, , 4, out_rc, SACl_d, in, 1.0, in_rc, SACp_inl_4681_res, in_rc, SACl_rofu)
   */
  SACf_FFT1d_Slice__d___MAIN__cpx_128_128_32___MAIN__cpx_64( SAC_ND_ARG_out_rc( SACl_d), SAC_ND_ARG_in( 1.0), SAC_ND_ARG_in_rc( SACp_inl_4681_res), SAC_ND_ARG_in_rc( SACl_rofu));

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
   * ND_KS_DECL_ARRAY( double, SACp_inl_8118_X, 4, 128, 128, 32, 2)
   */
  double *SACp_inl_8118_X;
  int SAC_ND_A_RC( SACp_inl_8118_X);
  const int SAC_ND_A_SIZE( SACp_inl_8118_X) = 128*128*32*2;
  const int SAC_ND_A_DIM( SACp_inl_8118_X) = 4;
  const int SAC_ND_A_SHAPE( SACp_inl_8118_X, 0) = 128;
  const int SAC_ND_A_SHAPE( SACp_inl_8118_X, 1) = 128;
  const int SAC_ND_A_SHAPE( SACp_inl_8118_X, 2) = 32;
  const int SAC_ND_A_SHAPE( SACp_inl_8118_X, 3) = 2;

  double SACp_inl_8117_result_r; 
  double SACp_inl_8116_result_i; 
  int SACp_inl_8115_j; 
  double SACp_inl_8114_result_r__SSA_3; 
  double SACp_inl_8113_result_i__SSA_3; 
  int SACp_inl_8112_j__SSA_1; 
  bool SACp_inl_8111__flat_211; 
  int SACp_inl_8110_q; 
  int SACp_inl_8109__flat_199; 
  int SACp_inl_8108_r; 
  int SACp_inl_8107__flat_203; 
  int SACp_inl_8106_s; 
  int SACp_inl_8105__flat_208_128_128_32_2__; 
  double SACp_inl_8104__flat_207; 
  int SACp_inl_8103__flat_210_128_128_32_2__; 
  double SACp_inl_8102__flat_209; 
  double SACp_inl_7277_result_r__SSA_1; 
  double SACp_inl_7276_result_i__SSA_1; 
  SAC_ND_DECL_RC( SACe_string, SACp_flat_326)
  /*
   * ND_KS_DECL_ARRAY( char, SACp_flat_327, 1, 2)
   */
  char *SACp_flat_327;
  int SAC_ND_A_RC( SACp_flat_327);
  const int SAC_ND_A_SIZE( SACp_flat_327) = 2;
  const int SAC_ND_A_DIM( SACp_flat_327) = 1;
  const int SAC_ND_A_SHAPE( SACp_flat_327, 0) = 2;

  SAC_ND_DECL_RC( SACe_string, SACp_flat_323)
  /*
   * ND_KS_DECL_ARRAY( char, SACp_flat_324, 1, 21)
   */
  char *SACp_flat_324;
  int SAC_ND_A_RC( SACp_flat_324);
  const int SAC_ND_A_SIZE( SACp_flat_324) = 21;
  const int SAC_ND_A_DIM( SACp_flat_324) = 1;
  const int SAC_ND_A_SHAPE( SACp_flat_324, 0) = 21;

  SAC_ND_DECL_RC( SACe_string, SACp_flat_320)
  /*
   * ND_KS_DECL_ARRAY( char, SACp_flat_321, 1, 20)
   */
  char *SACp_flat_321;
  int SAC_ND_A_RC( SACp_flat_321);
  const int SAC_ND_A_SIZE( SACp_flat_321) = 20;
  const int SAC_ND_A_DIM( SACp_flat_321) = 1;
  const int SAC_ND_A_SHAPE( SACp_flat_321, 0) = 20;

  /*
   * ND_KS_DECL_ARRAY( double, SACp_inl_4787_V, 2, 6, 2)
   */
  double *SACp_inl_4787_V;
  int SAC_ND_A_RC( SACp_inl_4787_V);
  const int SAC_ND_A_SIZE( SACp_inl_4787_V) = 6*2;
  const int SAC_ND_A_DIM( SACp_inl_4787_V) = 2;
  const int SAC_ND_A_SHAPE( SACp_inl_4787_V, 0) = 6;
  const int SAC_ND_A_SHAPE( SACp_inl_4787_V, 1) = 2;

  int SACp_inl_4786__flat_219; 
  int SACp_inl_4780__type_606_6_2__; 
  double SACp_inl_4779__type_605; 
  /*
   * ND_KS_DECL_ARRAY( char, SACp_inl_4766__flat_92, 1, 16)
   */
  char *SACp_inl_4766__flat_92;
  int SAC_ND_A_RC( SACp_inl_4766__flat_92);
  const int SAC_ND_A_SIZE( SACp_inl_4766__flat_92) = 16;
  const int SAC_ND_A_DIM( SACp_inl_4766__flat_92) = 1;
  const int SAC_ND_A_SHAPE( SACp_inl_4766__flat_92, 0) = 16;

  SAC_ND_DECL_RC( SACe_string, SACp_inl_4765__flat_91)
  double SACp_inl_4754_result_r; 
  int SACp_inl_4752_j; 
  int SACp_inl_4780__type_606__SSA_1_6_2__; 
  double SACp_inl_4779__type_605__SSA_1; 

  /*
   * ND_KS_DECL_ARRAY_ARG( SACl_X, 4, 128, 128, 32, 2)
   */
  const int SAC_ND_A_SIZE( SACl_X) = 128*128*32*2;
  const int SAC_ND_A_DIM( SACl_X) = 4;
  const int SAC_ND_A_SHAPE( SACl_X, 0) = 128;
  const int SAC_ND_A_SHAPE( SACl_X, 1) = 128;
  const int SAC_ND_A_SHAPE( SACl_X, 2) = 32;
  const int SAC_ND_A_SHAPE( SACl_X, 3) = 2;

  SAC_ND_ALLOC_ARRAY( char, SACp_flat_321, 1)
  SAC_ND_CREATE_CONST_ARRAY_C( SACp_flat_321, "Current checksum:  ")
  /*
   * ND_FUN_AP( to_string, , 3, out_rc, SACp_flat_320, in_rc, SACp_flat_321, in, 19)
   */
  to_string( SAC_ND_ARG_out_rc( SACp_flat_320), SAC_ND_ARG_in_rc( SACp_flat_321), SAC_ND_ARG_in( 19));

  /*
   * ND_FUN_AP( SACprintf, , 1, in, SACp_flat_320)
   */
  SACprintf( SAC_ND_ARG_in( SACp_flat_320));

  SAC_ND_DEC_RC_FREE_HIDDEN( SACp_flat_320, 1, free)
  SACp_inl_4754_result_r = 0.0; 
  SACp_inl_4752_j = 0; 
  SAC_ND_KS_ASSIGN_ARRAY( SACl_X, SACp_inl_8118_X)
  SACp_inl_8117_result_r = SACp_inl_4754_result_r; 
  SACp_inl_8116_result_i = SACp_inl_4754_result_r; 
  SACp_inl_8115_j = SACp_inl_4752_j; 
  SAC_ND_GOTO( _comp_8252_SAC__label)
  do 
  { 
    SAC_ND_LABEL( _comp_8252_SAC__label)
    SACp_inl_8110_q = (SACp_inl_8115_j % 128); 
    SACp_inl_8109__flat_199 = (3 * SACp_inl_8115_j); 
    SACp_inl_8108_r = (SACp_inl_8109__flat_199 % 128); 
    SACp_inl_8107__flat_203 = (5 * SACp_inl_8115_j); 
    SACp_inl_8106_s = (SACp_inl_8107__flat_203 % 32); 
    SACp_inl_8105__flat_208_128_128_32_2__ = ((((((SACp_inl_8110_q * 128) + SACp_inl_8108_r) * 32) + SACp_inl_8106_s) * 2) + 0); 
    SAC_ND_IDX_SEL_S( SACp_inl_8105__flat_208_128_128_32_2__, SACp_inl_8118_X, SACp_inl_8104__flat_207)
    SACp_inl_8114_result_r__SSA_3 = (SACp_inl_8117_result_r + SACp_inl_8104__flat_207); 
    SACp_inl_8103__flat_210_128_128_32_2__ = ((((((SACp_inl_8110_q * 128) + SACp_inl_8108_r) * 32) + SACp_inl_8106_s) * 2) + 1); 
    SAC_ND_IDX_SEL_S( SACp_inl_8103__flat_210_128_128_32_2__, SACp_inl_8118_X, SACp_inl_8102__flat_209)
    SACp_inl_8113_result_i__SSA_3 = (SACp_inl_8116_result_i + SACp_inl_8102__flat_209); 
    SACp_inl_8112_j__SSA_1 = (SACp_inl_8115_j + 1); 
    SACp_inl_8111__flat_211 = (SACp_inl_8112_j__SSA_1 < 1024); 
    SACp_inl_8115_j = SACp_inl_8112_j__SSA_1; 
    SACp_inl_8116_result_i = SACp_inl_8113_result_i__SSA_3; 
    SACp_inl_8117_result_r = SACp_inl_8114_result_r__SSA_3; 
  }
  while (SACp_inl_8111__flat_211);
  SAC_ND_DEC_RC_FREE_ARRAY( SACp_inl_8118_X, 1)
  SACp_inl_7277_result_r__SSA_1 = SACp_inl_8114_result_r__SSA_3; 
  SACp_inl_7276_result_i__SSA_1 = SACp_inl_8113_result_i__SSA_3; 
  SAC_ND_ALLOC_ARRAY( char, SACp_inl_4766__flat_92, 1)
  SAC_ND_CREATE_CONST_ARRAY_C( SACp_inl_4766__flat_92, "(%.10g , %.10g)")
  /*
   * ND_FUN_AP( to_string, , 3, out_rc, SACp_inl_4765__flat_91, in_rc, SACp_inl_4766__flat_92, in, 15)
   */
  to_string( SAC_ND_ARG_out_rc( SACp_inl_4765__flat_91), SAC_ND_ARG_in_rc( SACp_inl_4766__flat_92), SAC_ND_ARG_in( 15));

  SAC_ND_INC_RC( SACp_inl_4765__flat_91, 1)
  /*
   * ND_FUN_AP( SACprintf, , 3, in, SACp_inl_4765__flat_91, in, SACp_inl_7277_result_r__SSA_1, in, SACp_inl_7276_result_i__SSA_1)
   */
  SACprintf( SAC_ND_ARG_in( SACp_inl_4765__flat_91), SAC_ND_ARG_in( SACp_inl_7277_result_r__SSA_1), SAC_ND_ARG_in( SACp_inl_7276_result_i__SSA_1));

  SAC_ND_DEC_RC( SACp_inl_4765__flat_91, 1)
  SAC_ND_ALLOC_ARRAY( char, SACp_flat_324, 1)
  SAC_ND_CREATE_CONST_ARRAY_C( SACp_flat_324, "\nRequired checksum: ")
  /*
   * ND_FUN_AP( to_string, , 3, out_rc, SACp_flat_323, in_rc, SACp_flat_324, in, 20)
   */
  to_string( SAC_ND_ARG_out_rc( SACp_flat_323), SAC_ND_ARG_in_rc( SACp_flat_324), SAC_ND_ARG_in( 20));

  /*
   * ND_FUN_AP( SACprintf, , 1, in, SACp_flat_323)
   */
  SACprintf( SAC_ND_ARG_in( SACp_flat_323));

  SAC_ND_DEC_RC_FREE_HIDDEN( SACp_flat_323, 1, free)
  SAC_ND_ALLOC_ARRAY( double, SACp_inl_4787_V, 1)
  /*
   * ND_CREATE_CONST_ARRAY_S( SACp_inl_4787_V, 12, 567.3612178944000561386928893625736236572265625, 529.324684917500007941271178424358367919921875, 563.14368852710003920947201550006866455078125, 528.2149986629000295579317025840282440185546875, 559.4024089969999522509169764816761016845703125, 527.09965580369998860987834632396697998046875, 556.06980470200005584047175943851470947265625, 526.0027904925000257208012044429779052734375, 553.0898991249999880892573855817317962646484375, 524.9400845633000471934792585670948028564453125, 550.415973453800006609526462852954864501953125, 523.921224708599993391544558107852935791015625)
   */
  SAC_ND_WRITE_ARRAY( SACp_inl_4787_V, 0) = 567.3612178944000561386928893625736236572265625;
  SAC_ND_WRITE_ARRAY( SACp_inl_4787_V, 1) = 529.324684917500007941271178424358367919921875;
  SAC_ND_WRITE_ARRAY( SACp_inl_4787_V, 2) = 563.14368852710003920947201550006866455078125;
  SAC_ND_WRITE_ARRAY( SACp_inl_4787_V, 3) = 528.2149986629000295579317025840282440185546875;
  SAC_ND_WRITE_ARRAY( SACp_inl_4787_V, 4) = 559.4024089969999522509169764816761016845703125;
  SAC_ND_WRITE_ARRAY( SACp_inl_4787_V, 5) = 527.09965580369998860987834632396697998046875;
  SAC_ND_WRITE_ARRAY( SACp_inl_4787_V, 6) = 556.06980470200005584047175943851470947265625;
  SAC_ND_WRITE_ARRAY( SACp_inl_4787_V, 7) = 526.0027904925000257208012044429779052734375;
  SAC_ND_WRITE_ARRAY( SACp_inl_4787_V, 8) = 553.0898991249999880892573855817317962646484375;
  SAC_ND_WRITE_ARRAY( SACp_inl_4787_V, 9) = 524.9400845633000471934792585670948028564453125;
  SAC_ND_WRITE_ARRAY( SACp_inl_4787_V, 10) = 550.415973453800006609526462852954864501953125;
  SAC_ND_WRITE_ARRAY( SACp_inl_4787_V, 11) = 523.921224708599993391544558107852935791015625;

  SACp_inl_4786__flat_219 = (SACl_iter + -1); 
  SACp_inl_4780__type_606_6_2__ = ((SACp_inl_4786__flat_219 * 2) + 1); 
  SAC_ND_IDX_SEL_S( SACp_inl_4780__type_606_6_2__, SACp_inl_4787_V, SACp_inl_4779__type_605)
  SACp_inl_4780__type_606__SSA_1_6_2__ = ((SACp_inl_4786__flat_219 * 2) + 0); 
  SAC_ND_IDX_SEL_S( SACp_inl_4780__type_606__SSA_1_6_2__, SACp_inl_4787_V, SACp_inl_4779__type_605__SSA_1)
  SAC_ND_DEC_RC_FREE_ARRAY( SACp_inl_4787_V, 1)
  /*
   * ND_FUN_AP( SACprintf, , 3, in, SACp_inl_4765__flat_91, in, SACp_inl_4779__type_605__SSA_1, in, SACp_inl_4779__type_605)
   */
  SACprintf( SAC_ND_ARG_in( SACp_inl_4765__flat_91), SAC_ND_ARG_in( SACp_inl_4779__type_605__SSA_1), SAC_ND_ARG_in( SACp_inl_4779__type_605));

  SAC_ND_DEC_RC_FREE_HIDDEN( SACp_inl_4765__flat_91, 1, free)
  SAC_ND_ALLOC_ARRAY( char, SACp_flat_327, 1)
  SAC_ND_CREATE_CONST_ARRAY_C( SACp_flat_327, "\n")
  /*
   * ND_FUN_AP( to_string, , 3, out_rc, SACp_flat_326, in_rc, SACp_flat_327, in, 1)
   */
  to_string( SAC_ND_ARG_out_rc( SACp_flat_326), SAC_ND_ARG_in_rc( SACp_flat_327), SAC_ND_ARG_in( 1));

  /*
   * ND_FUN_AP( SACprintf, , 1, in, SACp_flat_326)
   */
  SACprintf( SAC_ND_ARG_in( SACp_flat_326));

  SAC_ND_DEC_RC_FREE_HIDDEN( SACp_flat_326, 1, free)
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
  int SACp_inl_8247_t; 
  /*
   * ND_KS_DECL_ARRAY( double, SACp_inl_8246_V, 4, 128, 128, 32, 2)
   */
  double *SACp_inl_8246_V;
  int SAC_ND_A_RC( SACp_inl_8246_V);
  const int SAC_ND_A_SIZE( SACp_inl_8246_V) = 128*128*32*2;
  const int SAC_ND_A_DIM( SACp_inl_8246_V) = 4;
  const int SAC_ND_A_SHAPE( SACp_inl_8246_V, 0) = 128;
  const int SAC_ND_A_SHAPE( SACp_inl_8246_V, 1) = 128;
  const int SAC_ND_A_SHAPE( SACp_inl_8246_V, 2) = 32;
  const int SAC_ND_A_SHAPE( SACp_inl_8246_V, 3) = 2;

  /*
   * ND_KS_DECL_ARRAY( double, SACp_inl_8245_rofu, 2, 64, 2)
   */
  double *SACp_inl_8245_rofu;
  int SAC_ND_A_RC( SACp_inl_8245_rofu);
  const int SAC_ND_A_SIZE( SACp_inl_8245_rofu) = 64*2;
  const int SAC_ND_A_DIM( SACp_inl_8245_rofu) = 2;
  const int SAC_ND_A_SHAPE( SACp_inl_8245_rofu, 0) = 64;
  const int SAC_ND_A_SHAPE( SACp_inl_8245_rofu, 1) = 2;

  /*
   * ND_KS_DECL_ARRAY( double, SACp_inl_8244_expomap, 1, 50689)
   */
  double *SACp_inl_8244_expomap;
  int SAC_ND_A_RC( SACp_inl_8244_expomap);
  const int SAC_ND_A_SIZE( SACp_inl_8244_expomap) = 50689;
  const int SAC_ND_A_DIM( SACp_inl_8244_expomap) = 1;
  const int SAC_ND_A_SHAPE( SACp_inl_8244_expomap, 0) = 50689;

  /*
   * ND_KS_DECL_ARRAY( int, SACp_inl_8243_indexmap, 3, 128, 128, 32)
   */
  int *SACp_inl_8243_indexmap;
  int SAC_ND_A_RC( SACp_inl_8243_indexmap);
  const int SAC_ND_A_SIZE( SACp_inl_8243_indexmap) = 128*128*32;
  const int SAC_ND_A_DIM( SACp_inl_8243_indexmap) = 3;
  const int SAC_ND_A_SHAPE( SACp_inl_8243_indexmap, 0) = 128;
  const int SAC_ND_A_SHAPE( SACp_inl_8243_indexmap, 1) = 128;
  const int SAC_ND_A_SHAPE( SACp_inl_8243_indexmap, 2) = 32;

  int SACp_inl_8242_t__SSA_1; 
  int SACp_inl_8241_ivt__SSA_1_128_32_128_2__; 
  int SACp_inl_8240_ivt__SSA_1_128_32_128_2__; 
  int SACp_inl_8239_ivt__SSA_1_128_128_32_2__; 
  bool SACp_inl_8238__flat_333; 
  /*
   * ND_KS_DECL_ARRAY( int, SACp_inl_8237__flat_64_iv, 1, 4)
   */
  int *SACp_inl_8237__flat_64_iv;
  int SAC_ND_A_RC( SACp_inl_8237__flat_64_iv);
  const int SAC_ND_A_SIZE( SACp_inl_8237__flat_64_iv) = 4;
  const int SAC_ND_A_DIM( SACp_inl_8237__flat_64_iv) = 1;
  const int SAC_ND_A_SHAPE( SACp_inl_8237__flat_64_iv, 0) = 4;

  double SACp_inl_8236__flat_65; 
  /*
   * ND_KS_DECL_ARRAY( double, SACp_inl_8235_result, 4, 128, 128, 32, 2)
   */
  double *SACp_inl_8235_result;
  int SAC_ND_A_RC( SACp_inl_8235_result);
  const int SAC_ND_A_SIZE( SACp_inl_8235_result) = 128*128*32*2;
  const int SAC_ND_A_DIM( SACp_inl_8235_result) = 4;
  const int SAC_ND_A_SHAPE( SACp_inl_8235_result, 0) = 128;
  const int SAC_ND_A_SHAPE( SACp_inl_8235_result, 1) = 128;
  const int SAC_ND_A_SHAPE( SACp_inl_8235_result, 2) = 32;
  const int SAC_ND_A_SHAPE( SACp_inl_8235_result, 3) = 2;

  int SACp_inl_8234__type_601; 
  int SACp_inl_8233__type_602; 
  int SACp_inl_8232__type_603; 
  int SACp_inl_8231__type_604; 
  double SACp_inl_8230_val; 
  /*
   * ND_KS_DECL_ARRAY( int, SACp_inl_8229__flat_52_iv, 1, 4)
   */
  int *SACp_inl_8229__flat_52_iv;
  int SAC_ND_A_RC( SACp_inl_8229__flat_52_iv);
  const int SAC_ND_A_SIZE( SACp_inl_8229__flat_52_iv) = 4;
  const int SAC_ND_A_DIM( SACp_inl_8229__flat_52_iv) = 1;
  const int SAC_ND_A_SHAPE( SACp_inl_8229__flat_52_iv, 0) = 4;

  int SACp_inl_8228__type_590; 
  int SACp_inl_8227__type_591; 
  int SACp_inl_8226__type_592; 
  int SACp_inl_8225__type_593; 
  double SACp_inl_8224_val; 
  /*
   * ND_KS_DECL_ARRAY( double, SACp_inl_8223_res, 4, 128, 32, 128, 2)
   */
  double *SACp_inl_8223_res;
  int SAC_ND_A_RC( SACp_inl_8223_res);
  const int SAC_ND_A_SIZE( SACp_inl_8223_res) = 128*32*128*2;
  const int SAC_ND_A_DIM( SACp_inl_8223_res) = 4;
  const int SAC_ND_A_SHAPE( SACp_inl_8223_res, 0) = 128;
  const int SAC_ND_A_SHAPE( SACp_inl_8223_res, 1) = 32;
  const int SAC_ND_A_SHAPE( SACp_inl_8223_res, 2) = 128;
  const int SAC_ND_A_SHAPE( SACp_inl_8223_res, 3) = 2;

  /*
   * ND_KS_DECL_ARRAY( int, SACp_inl_8222__flat_52_iv, 1, 4)
   */
  int *SACp_inl_8222__flat_52_iv;
  int SAC_ND_A_RC( SACp_inl_8222__flat_52_iv);
  const int SAC_ND_A_SIZE( SACp_inl_8222__flat_52_iv) = 4;
  const int SAC_ND_A_DIM( SACp_inl_8222__flat_52_iv) = 1;
  const int SAC_ND_A_SHAPE( SACp_inl_8222__flat_52_iv, 0) = 4;

  int SACp_inl_8221__type_571; 
  int SACp_inl_8220__type_572; 
  int SACp_inl_8219__type_573; 
  int SACp_inl_8218__type_574; 
  double SACp_inl_8217_val; 
  /*
   * ND_KS_DECL_ARRAY( double, SACp_inl_8216_res, 4, 128, 32, 128, 2)
   */
  double *SACp_inl_8216_res;
  int SAC_ND_A_RC( SACp_inl_8216_res);
  const int SAC_ND_A_SIZE( SACp_inl_8216_res) = 128*32*128*2;
  const int SAC_ND_A_DIM( SACp_inl_8216_res) = 4;
  const int SAC_ND_A_SHAPE( SACp_inl_8216_res, 0) = 128;
  const int SAC_ND_A_SHAPE( SACp_inl_8216_res, 1) = 32;
  const int SAC_ND_A_SHAPE( SACp_inl_8216_res, 2) = 128;
  const int SAC_ND_A_SHAPE( SACp_inl_8216_res, 3) = 2;

  /*
   * ND_KS_DECL_ARRAY( double, SACp_inl_8215_u, 4, 128, 128, 32, 2)
   */
  double *SACp_inl_8215_u;
  int SAC_ND_A_RC( SACp_inl_8215_u);
  const int SAC_ND_A_SIZE( SACp_inl_8215_u) = 128*128*32*2;
  const int SAC_ND_A_DIM( SACp_inl_8215_u) = 4;
  const int SAC_ND_A_SHAPE( SACp_inl_8215_u, 0) = 128;
  const int SAC_ND_A_SHAPE( SACp_inl_8215_u, 1) = 128;
  const int SAC_ND_A_SHAPE( SACp_inl_8215_u, 2) = 32;
  const int SAC_ND_A_SHAPE( SACp_inl_8215_u, 3) = 2;

  /*
   * ND_KS_DECL_ARRAY( double, SACp_inl_8214_v, 4, 128, 32, 128, 2)
   */
  double *SACp_inl_8214_v;
  int SAC_ND_A_RC( SACp_inl_8214_v);
  const int SAC_ND_A_SIZE( SACp_inl_8214_v) = 128*32*128*2;
  const int SAC_ND_A_DIM( SACp_inl_8214_v) = 4;
  const int SAC_ND_A_SHAPE( SACp_inl_8214_v, 0) = 128;
  const int SAC_ND_A_SHAPE( SACp_inl_8214_v, 1) = 32;
  const int SAC_ND_A_SHAPE( SACp_inl_8214_v, 2) = 128;
  const int SAC_ND_A_SHAPE( SACp_inl_8214_v, 3) = 2;

  /*
   * ND_KS_DECL_ARRAY( double, SACp_inl_8213_w, 4, 128, 32, 128, 2)
   */
  double *SACp_inl_8213_w;
  int SAC_ND_A_RC( SACp_inl_8213_w);
  const int SAC_ND_A_SIZE( SACp_inl_8213_w) = 128*32*128*2;
  const int SAC_ND_A_DIM( SACp_inl_8213_w) = 4;
  const int SAC_ND_A_SHAPE( SACp_inl_8213_w, 0) = 128;
  const int SAC_ND_A_SHAPE( SACp_inl_8213_w, 1) = 32;
  const int SAC_ND_A_SHAPE( SACp_inl_8213_w, 2) = 128;
  const int SAC_ND_A_SHAPE( SACp_inl_8213_w, 3) = 2;

  /*
   * ND_KS_DECL_ARRAY( int, SACp_inl_8212__flat_191_iv, 1, 4)
   */
  int *SACp_inl_8212__flat_191_iv;
  int SAC_ND_A_RC( SACp_inl_8212__flat_191_iv);
  const int SAC_ND_A_SIZE( SACp_inl_8212__flat_191_iv) = 4;
  const int SAC_ND_A_DIM( SACp_inl_8212__flat_191_iv) = 1;
  const int SAC_ND_A_SHAPE( SACp_inl_8212__flat_191_iv, 0) = 4;

  int SACp_inl_8212__flat_191_iv_128_128_32_2__; 
  int SACp_inl_8211__flat_187_i; 
  int SACp_inl_8210__flat_188_j; 
  int SACp_inl_8209__flat_189_k; 
  int SACp_inl_8208__flat_190_l; 
  int SACp_inl_8207__flat_193_128_128_32__; 
  int SACp_inl_8206__flat_192; 
  int SACp_inl_8205_newindex; 
  int SACp_inl_8204__flat_194_50689__; 
  double SACp_inl_8203_exponent; 
  double SACp_inl_8202__flat_195; 
  double SACp_inl_8201_val; 
  /*
   * ND_KS_DECL_ARRAY( double, SACp_inl_8200_res, 4, 128, 128, 32, 2)
   */
  double *SACp_inl_8200_res;
  int SAC_ND_A_RC( SACp_inl_8200_res);
  const int SAC_ND_A_SIZE( SACp_inl_8200_res) = 128*128*32*2;
  const int SAC_ND_A_DIM( SACp_inl_8200_res) = 4;
  const int SAC_ND_A_SHAPE( SACp_inl_8200_res, 0) = 128;
  const int SAC_ND_A_SHAPE( SACp_inl_8200_res, 1) = 128;
  const int SAC_ND_A_SHAPE( SACp_inl_8200_res, 2) = 32;
  const int SAC_ND_A_SHAPE( SACp_inl_8200_res, 3) = 2;

  /*
   * ND_KS_DECL_ARRAY( double, SACp_inl_8199_A, 4, 128, 128, 32, 2)
   */
  double *SACp_inl_8199_A;
  int SAC_ND_A_RC( SACp_inl_8199_A);
  const int SAC_ND_A_SIZE( SACp_inl_8199_A) = 128*128*32*2;
  const int SAC_ND_A_DIM( SACp_inl_8199_A) = 4;
  const int SAC_ND_A_SHAPE( SACp_inl_8199_A, 0) = 128;
  const int SAC_ND_A_SHAPE( SACp_inl_8199_A, 1) = 128;
  const int SAC_ND_A_SHAPE( SACp_inl_8199_A, 2) = 32;
  const int SAC_ND_A_SHAPE( SACp_inl_8199_A, 3) = 2;

  double SACp_inl_8198_rand; 
  int SACp_inl_8197_x; 
  int SACp_inl_8196__lir_8022__inl_7468_y__SSA_1; 
  int SACp_inl_8195__lir_8023__inl_7469_z__SSA_1; 
  double SACp_inl_8194__lir_8024__inl_7470_const3__SSA_1; 
  double SACp_inl_8193__lir_8025__inl_7471_const2__SSA_1; 
  double SACp_inl_8192__lir_8026__inl_7472_const1__SSA_1; 
  double SACp_inl_8191__lir_8029__inl_7477_a1__SSA_1; 
  double SACp_inl_8190__lir_8031__inl_7479_a2__SSA_1; 
  /*
   * ND_KS_DECL_ARRAY( double, SACp_inl_8189_A__SSA_3, 4, 128, 128, 32, 2)
   */
  double *SACp_inl_8189_A__SSA_3;
  int SAC_ND_A_RC( SACp_inl_8189_A__SSA_3);
  const int SAC_ND_A_SIZE( SACp_inl_8189_A__SSA_3) = 128*128*32*2;
  const int SAC_ND_A_DIM( SACp_inl_8189_A__SSA_3) = 4;
  const int SAC_ND_A_SHAPE( SACp_inl_8189_A__SSA_3, 0) = 128;
  const int SAC_ND_A_SHAPE( SACp_inl_8189_A__SSA_3, 1) = 128;
  const int SAC_ND_A_SHAPE( SACp_inl_8189_A__SSA_3, 2) = 32;
  const int SAC_ND_A_SHAPE( SACp_inl_8189_A__SSA_3, 3) = 2;

  double SACp_inl_8188_rand__SSA_3; 
  int SACp_inl_8187_x__SSA_1; 
  bool SACp_inl_8186__flat_116; 
  int SACp_inl_8185__flat_113_128_128_32_2__; 
  double SACp_inl_8184__flat_114; 
  double SACp_inl_8183_c; 
  double SACp_inl_8182__flat_108; 
  double SACp_inl_8181_t5; 
  double SACp_inl_8180__flat_107; 
  double SACp_inl_8179_t4; 
  double SACp_inl_8178__flat_105; 
  double SACp_inl_8177__flat_106; 
  double SACp_inl_8176_t3; 
  double SACp_inl_8175__flat_104; 
  double SACp_inl_8174_t2; 
  double SACp_inl_8173__flat_103; 
  double SACp_inl_8172_t1; 
  double SACp_inl_8171__flat_101; 
  double SACp_inl_8170__flat_102; 
  double SACp_inl_8169_b2; 
  double SACp_inl_8168__flat_100; 
  double SACp_inl_8167_b1; 
  double SACp_inl_8166__flat_99; 
  /*
   * ND_KS_DECL_ARRAY( double, SACp_inl_8165_A__SSA_1, 4, 128, 128, 32, 2)
   */
  double *SACp_inl_8165_A__SSA_1;
  int SAC_ND_A_RC( SACp_inl_8165_A__SSA_1);
  const int SAC_ND_A_SIZE( SACp_inl_8165_A__SSA_1) = 128*128*32*2;
  const int SAC_ND_A_DIM( SACp_inl_8165_A__SSA_1) = 4;
  const int SAC_ND_A_SHAPE( SACp_inl_8165_A__SSA_1, 0) = 128;
  const int SAC_ND_A_SHAPE( SACp_inl_8165_A__SSA_1, 1) = 128;
  const int SAC_ND_A_SHAPE( SACp_inl_8165_A__SSA_1, 2) = 32;
  const int SAC_ND_A_SHAPE( SACp_inl_8165_A__SSA_1, 3) = 2;

  double SACp_inl_8164__flat_99__SSA_1; 
  double SACp_inl_8163_b1__SSA_1; 
  double SACp_inl_8162__flat_100__SSA_1; 
  double SACp_inl_8161_b2__SSA_1; 
  double SACp_inl_8160__flat_102__SSA_1; 
  double SACp_inl_8159__flat_101__SSA_1; 
  double SACp_inl_8158_t1__SSA_1; 
  double SACp_inl_8157__flat_103__SSA_1; 
  double SACp_inl_8156_t2__SSA_1; 
  double SACp_inl_8155__flat_104__SSA_1; 
  double SACp_inl_8154_t3__SSA_1; 
  double SACp_inl_8153__flat_106__SSA_1; 
  double SACp_inl_8152__flat_105__SSA_1; 
  double SACp_inl_8151_t4__SSA_1; 
  double SACp_inl_8150__flat_107__SSA_1; 
  double SACp_inl_8149_t5__SSA_1; 
  double SACp_inl_8148__flat_108__SSA_1; 
  double SACp_inl_8147__flat_114__SSA_1; 
  int SACp_inl_8146__flat_113__SSA_1_128_128_32_2__; 
  /*
   * ND_KS_DECL_ARRAY( double, SACp_inl_8145_A, 4, 128, 128, 32, 2)
   */
  double *SACp_inl_8145_A;
  int SAC_ND_A_RC( SACp_inl_8145_A);
  const int SAC_ND_A_SIZE( SACp_inl_8145_A) = 128*128*32*2;
  const int SAC_ND_A_DIM( SACp_inl_8145_A) = 4;
  const int SAC_ND_A_SHAPE( SACp_inl_8145_A, 0) = 128;
  const int SAC_ND_A_SHAPE( SACp_inl_8145_A, 1) = 128;
  const int SAC_ND_A_SHAPE( SACp_inl_8145_A, 2) = 32;
  const int SAC_ND_A_SHAPE( SACp_inl_8145_A, 3) = 2;

  double SACp_inl_8144_rand; 
  int SACp_inl_8143_y; 
  double SACp_inl_8142__lir_8043__inl_7322_const1; 
  double SACp_inl_8141__lir_8044__inl_7321_const2; 
  double SACp_inl_8140__lir_8045__inl_7320_const3; 
  int SACp_inl_8139__lir_8046__inl_7318_z; 
  int SACp_inl_8138__lir_8047__inl_7316_x; 
  double SACp_inl_8137__lir_8058__inl_7458_a1; 
  double SACp_inl_8136__lir_8060__inl_7456_a2; 
  /*
   * ND_KS_DECL_ARRAY( double, SACp_inl_8135_A__SSA_3, 4, 128, 128, 32, 2)
   */
  double *SACp_inl_8135_A__SSA_3;
  int SAC_ND_A_RC( SACp_inl_8135_A__SSA_3);
  const int SAC_ND_A_SIZE( SACp_inl_8135_A__SSA_3) = 128*128*32*2;
  const int SAC_ND_A_DIM( SACp_inl_8135_A__SSA_3) = 4;
  const int SAC_ND_A_SHAPE( SACp_inl_8135_A__SSA_3, 0) = 128;
  const int SAC_ND_A_SHAPE( SACp_inl_8135_A__SSA_3, 1) = 128;
  const int SAC_ND_A_SHAPE( SACp_inl_8135_A__SSA_3, 2) = 32;
  const int SAC_ND_A_SHAPE( SACp_inl_8135_A__SSA_3, 3) = 2;

  double SACp_inl_8134_rand__SSA_3; 
  int SACp_inl_8133_y__SSA_1; 
  bool SACp_inl_8132__flat_117; 
  /*
   * ND_KS_DECL_ARRAY( double, SACp_inl_8131_A, 4, 128, 128, 32, 2)
   */
  double *SACp_inl_8131_A;
  int SAC_ND_A_RC( SACp_inl_8131_A);
  const int SAC_ND_A_SIZE( SACp_inl_8131_A) = 128*128*32*2;
  const int SAC_ND_A_DIM( SACp_inl_8131_A) = 4;
  const int SAC_ND_A_SHAPE( SACp_inl_8131_A, 0) = 128;
  const int SAC_ND_A_SHAPE( SACp_inl_8131_A, 1) = 128;
  const int SAC_ND_A_SHAPE( SACp_inl_8131_A, 2) = 32;
  const int SAC_ND_A_SHAPE( SACp_inl_8131_A, 3) = 2;

  double SACp_inl_8130_rand; 
  int SACp_inl_8129_z; 
  double SACp_inl_8128__lir_8050__inl_7339_const1; 
  double SACp_inl_8127__lir_8051__inl_7338_const2; 
  double SACp_inl_8126__lir_8052__inl_7337_const3; 
  int SACp_inl_8125__lir_8061__inl_4811_x; 
  double SACp_inl_8124__lir_8063__inl_7458_a1; 
  double SACp_inl_8123__lir_8065__inl_7456_a2; 
  /*
   * ND_KS_DECL_ARRAY( double, SACp_inl_8122_A__SSA_3, 4, 128, 128, 32, 2)
   */
  double *SACp_inl_8122_A__SSA_3;
  int SAC_ND_A_RC( SACp_inl_8122_A__SSA_3);
  const int SAC_ND_A_SIZE( SACp_inl_8122_A__SSA_3) = 128*128*32*2;
  const int SAC_ND_A_DIM( SACp_inl_8122_A__SSA_3) = 4;
  const int SAC_ND_A_SHAPE( SACp_inl_8122_A__SSA_3, 0) = 128;
  const int SAC_ND_A_SHAPE( SACp_inl_8122_A__SSA_3, 1) = 128;
  const int SAC_ND_A_SHAPE( SACp_inl_8122_A__SSA_3, 2) = 32;
  const int SAC_ND_A_SHAPE( SACp_inl_8122_A__SSA_3, 3) = 2;

  int SACp_inl_8121_z__SSA_1; 
  bool SACp_inl_8120__flat_118; 
  double SACp_inl_8119_rand__SSA_1; 
  double SACp_esd_8067; 
  double SACp_esd_8066; 
  /*
   * ND_KS_DECL_ARRAY( double, SACp_inl_7346_A__SSA_1, 4, 128, 128, 32, 2)
   */
  double *SACp_inl_7346_A__SSA_1;
  int SAC_ND_A_RC( SACp_inl_7346_A__SSA_1);
  const int SAC_ND_A_SIZE( SACp_inl_7346_A__SSA_1) = 128*128*32*2;
  const int SAC_ND_A_DIM( SACp_inl_7346_A__SSA_1) = 4;
  const int SAC_ND_A_SHAPE( SACp_inl_7346_A__SSA_1, 0) = 128;
  const int SAC_ND_A_SHAPE( SACp_inl_7346_A__SSA_1, 1) = 128;
  const int SAC_ND_A_SHAPE( SACp_inl_7346_A__SSA_1, 2) = 32;
  const int SAC_ND_A_SHAPE( SACp_inl_7346_A__SSA_1, 3) = 2;

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

  SAC_ND_DECL_RC( SACe_string, SACp_flat_329)
  /*
   * ND_KS_DECL_ARRAY( char, SACp_flat_330, 1, 62)
   */
  char *SACp_flat_330;
  int SAC_ND_A_RC( SACp_flat_330);
  const int SAC_ND_A_SIZE( SACp_flat_330) = 62;
  const int SAC_ND_A_DIM( SACp_flat_330) = 1;
  const int SAC_ND_A_SHAPE( SACp_flat_330, 0) = 62;

  int SACp_inl_4842_idx; 
  int SACp_inl_4838_idx; 
  /*
   * ND_KS_DECL_ARRAY( int, SACp_inl_4834__type_348, 1, 4)
   */
  int *SACp_inl_4834__type_348;
  int SAC_ND_A_RC( SACp_inl_4834__type_348);
  const int SAC_ND_A_SIZE( SACp_inl_4834__type_348) = 4;
  const int SAC_ND_A_DIM( SACp_inl_4834__type_348) = 1;
  const int SAC_ND_A_SHAPE( SACp_inl_4834__type_348, 0) = 4;

  int SACp_inl_4833__type_350; 
  int SACp_inl_4832__type_351; 
  int SACp_inl_4831__type_352; 
  int SACp_inl_4830__type_353; 
  double SACp_inl_4829__type_349; 
  /*
   * ND_KS_DECL_ARRAY( double, SACp_inl_4828_A, 4, 128, 128, 32, 2)
   */
  double *SACp_inl_4828_A;
  int SAC_ND_A_RC( SACp_inl_4828_A);
  const int SAC_ND_A_SIZE( SACp_inl_4828_A) = 128*128*32*2;
  const int SAC_ND_A_DIM( SACp_inl_4828_A) = 4;
  const int SAC_ND_A_SHAPE( SACp_inl_4828_A, 0) = 128;
  const int SAC_ND_A_SHAPE( SACp_inl_4828_A, 1) = 128;
  const int SAC_ND_A_SHAPE( SACp_inl_4828_A, 2) = 32;
  const int SAC_ND_A_SHAPE( SACp_inl_4828_A, 3) = 2;

  double SACp_inl_4827_seed; 
  double SACp_inl_4825_a; 
  double SACp_inl_4824_const1; 
  double SACp_inl_4823_const2; 
  double SACp_inl_4822_const3; 
  /*
   * ND_KS_DECL_ARRAY( double, SACl_rofu__SSA_1, 2, 64, 2)
   */
  double *SACl_rofu__SSA_1;
  int SAC_ND_A_RC( SACl_rofu__SSA_1);
  const int SAC_ND_A_SIZE( SACl_rofu__SSA_1) = 64*2;
  const int SAC_ND_A_DIM( SACl_rofu__SSA_1) = 2;
  const int SAC_ND_A_SHAPE( SACl_rofu__SSA_1, 0) = 64;
  const int SAC_ND_A_SHAPE( SACl_rofu__SSA_1, 1) = 2;

  double SACp_lir_8062__inl_7459__flat_97; 
  double SACp_lir_8063__inl_7458_a1; 
  double SACp_lir_8064__inl_7457__flat_98; 
  double SACp_lir_8065__inl_7456_a2; 

  SAC_ND_ALLOC_ARRAY( char, SACp_flat_330, 1)
  SAC_ND_CREATE_CONST_ARRAY_C( SACp_flat_330, " Dimension: %d x %d x %d, N-Iter: %d  Total Size: %d Complex\n")
  /*
   * ND_FUN_AP( to_string, , 3, out_rc, SACp_flat_329, in_rc, SACp_flat_330, in, 61)
   */
  to_string( SAC_ND_ARG_out_rc( SACp_flat_329), SAC_ND_ARG_in_rc( SACp_flat_330), SAC_ND_ARG_in( 61));

  /*
   * ND_FUN_AP( SACprintf, , 6, in, SACp_flat_329, in, 128, in, 128, in, 32, in, 6, in, 524288)
   */
  SACprintf( SAC_ND_ARG_in( SACp_flat_329), SAC_ND_ARG_in( 128), SAC_ND_ARG_in( 128), SAC_ND_ARG_in( 32), SAC_ND_ARG_in( 6), SAC_ND_ARG_in( 524288));

  SAC_ND_DEC_RC_FREE_HIDDEN( SACp_flat_329, 1, free)
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

  SACp_inl_4829__type_349 = 0.0; 
  SAC_ND_ALLOC_ARRAY( double, SACp_inl_4828_A, 1)
  SAC_PF_BEGIN_WITH( genarray)
    /*
     * WL_BEGIN__OFFSET( SACp_inl_4828_A, 4, SACp_inl_4834__type_348, 4)
     */
    { int SAC_WL_OFFSET( SACp_inl_4828_A);
      int SAC_WL_MT_SCHEDULE_START( 0);
      int SAC_WL_MT_SCHEDULE_STOP( 0);
      int SAC_WL_MT_SCHEDULE_START( 1);
      int SAC_WL_MT_SCHEDULE_STOP( 1);
      int SAC_WL_MT_SCHEDULE_START( 2);
      int SAC_WL_MT_SCHEDULE_STOP( 2);
      int SAC_WL_MT_SCHEDULE_START( 3);
      int SAC_WL_MT_SCHEDULE_STOP( 3);
      int SAC_i;
      int SAC_WL_SHAPE_FACTOR( SACp_inl_4828_A, 0) = 1 * SAC_ND_A_SHAPE( SACp_inl_4828_A, 1) * SAC_ND_A_SHAPE( SACp_inl_4828_A, 2) * SAC_ND_A_SHAPE( SACp_inl_4828_A, 3);
      int SAC_WL_SHAPE_FACTOR( SACp_inl_4828_A, 1) = 1 * SAC_ND_A_SHAPE( SACp_inl_4828_A, 2) * SAC_ND_A_SHAPE( SACp_inl_4828_A, 3);
      int SAC_WL_SHAPE_FACTOR( SACp_inl_4828_A, 2) = 1 * SAC_ND_A_SHAPE( SACp_inl_4828_A, 3);
      int SAC_WL_SHAPE_FACTOR( SACp_inl_4828_A, 3) = 1;

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
       * WL_INIT_OFFSET( SACp_inl_4828_A, 4, SACp_inl_4834__type_348, 4)
       */
      SAC_WL_OFFSET( SACp_inl_4828_A)
        = SAC_WL_MT_SCHEDULE_START( 0) * SAC_WL_SHAPE_FACTOR( SACp_inl_4828_A, 0)
        + SAC_WL_MT_SCHEDULE_START( 1) * SAC_WL_SHAPE_FACTOR( SACp_inl_4828_A, 1)
        + SAC_WL_MT_SCHEDULE_START( 2) * SAC_WL_SHAPE_FACTOR( SACp_inl_4828_A, 2)
        + SAC_WL_MT_SCHEDULE_START( 3) * SAC_WL_SHAPE_FACTOR( SACp_inl_4828_A, 3);

      SAC_WL_STRIDE_LOOP0_BEGIN( 0, SACp_inl_4834__type_348, SACp_inl_4833__type_350, 0, 128, 1)
        SAC_WL_GRID_UNROLL_BEGIN( 0, SACp_inl_4834__type_348, SACp_inl_4833__type_350, 0, 1)
          SAC_WL_STRIDE_LOOP0_BEGIN( 1, SACp_inl_4834__type_348, SACp_inl_4832__type_351, 0, 128, 1)
            SAC_WL_GRID_UNROLL_BEGIN( 1, SACp_inl_4834__type_348, SACp_inl_4832__type_351, 0, 1)
              SAC_WL_STRIDE_LOOP0_BEGIN( 2, SACp_inl_4834__type_348, SACp_inl_4831__type_352, 0, 32, 1)
                SAC_WL_GRID_UNROLL_BEGIN( 2, SACp_inl_4834__type_348, SACp_inl_4831__type_352, 0, 1)
                  SAC_WL_STRIDE_LOOP0_BEGIN( 3, SACp_inl_4834__type_348, SACp_inl_4830__type_353, 0, 2, 1)
                    SAC_WL_GRID_UNROLL_BEGIN( 3, SACp_inl_4834__type_348, SACp_inl_4830__type_353, 0, 1)
                      /*
                       * WL_ASSIGN( SACp_inl_4829__type_349, 0, SACp_inl_4828_A, 4, SACp_inl_4834__type_348, 4, SACp_inl_4833__type_350, SACp_inl_4832__type_351, SACp_inl_4831__type_352, SACp_inl_4830__type_353)
                       */
                      SAC_TR_WL_PRINT( ("index vector [%d, %d, %d, %d] (== offset %d) -- offset %d -- assign", SACp_inl_4833__type_350, SACp_inl_4832__type_351, SACp_inl_4831__type_352, SACp_inl_4830__type_353, ( SAC_ND_A_SHAPE( SACp_inl_4828_A, 3) * ( SAC_ND_A_SHAPE( SACp_inl_4828_A, 2) * ( SAC_ND_A_SHAPE( SACp_inl_4828_A, 1) * SACp_inl_4833__type_350 + SACp_inl_4832__type_351 )+ SACp_inl_4831__type_352 )+ SACp_inl_4830__type_353 ), SAC_WL_OFFSET( SACp_inl_4828_A)));
                      SAC_ASSURE_TYPE( (SAC_ND_A_DIM( SACp_inl_4829__type_349) == (SAC_ND_A_DIM( SACp_inl_4828_A) - 4)), ("WL expression with illegal dimension found!"));
                      SAC_ASSURE_TYPE( (SAC_ND_A_SIZE( SACp_inl_4829__type_349) == SAC_WL_SHAPE_FACTOR( SACp_inl_4828_A, 3)), ("WL expression with illegal size found!"));
                      SAC_ND_WRITE_ARRAY( SACp_inl_4828_A, SAC_WL_OFFSET( SACp_inl_4828_A)) = SACp_inl_4829__type_349;
                      SAC_WL_OFFSET( SACp_inl_4828_A)++;

                    SAC_WL_GRID_UNROLL_END( 3, SACp_inl_4834__type_348, SACp_inl_4830__type_353, 0, 1)
                  SAC_WL_STRIDE_LOOP_END( 3, SACp_inl_4834__type_348, SACp_inl_4830__type_353, 0, 2, 1)
                SAC_WL_GRID_UNROLL_END( 2, SACp_inl_4834__type_348, SACp_inl_4831__type_352, 0, 1)
              SAC_WL_STRIDE_LOOP_END( 2, SACp_inl_4834__type_348, SACp_inl_4831__type_352, 0, 32, 1)
            SAC_WL_GRID_UNROLL_END( 1, SACp_inl_4834__type_348, SACp_inl_4832__type_351, 0, 1)
          SAC_WL_STRIDE_LOOP_END( 1, SACp_inl_4834__type_348, SACp_inl_4832__type_351, 0, 128, 1)
        SAC_WL_GRID_UNROLL_END( 0, SACp_inl_4834__type_348, SACp_inl_4833__type_350, 0, 1)
      SAC_WL_STRIDE_LOOP_END( 0, SACp_inl_4834__type_348, SACp_inl_4833__type_350, 0, 128, 1)
      /*
       * MT_SCHEDULER_END( 0, 4, 0, 0, 0, 0, 128, 128, 32, 2)
       */


      /*
       * WL_END__OFFSET( SACp_inl_4828_A, 4, SACp_inl_4834__type_348, 4)
       */
    }

  SAC_PF_END_WITH( genarray)
  SACp_inl_4827_seed = 314159265.0; 
  /*
   * ND_FUN_AP( pow, SACp_inl_4825_a, 2, in, 5.0, in, 13.0)
   */
  SACp_inl_4825_a = pow( SAC_ND_ARG_in( 5.0), SAC_ND_ARG_in( 13.0));

  /*
   * ND_FUN_AP( pow, SACp_inl_4824_const1, 2, in, 2.0, in, 46.0)
   */
  SACp_inl_4824_const1 = pow( SAC_ND_ARG_in( 2.0), SAC_ND_ARG_in( 46.0));

  /*
   * ND_FUN_AP( pow, SACp_inl_4823_const2, 2, in, 2.0, in, -46.0)
   */
  SACp_inl_4823_const2 = pow( SAC_ND_ARG_in( 2.0), SAC_ND_ARG_in( -46.0));

  /*
   * ND_FUN_AP( pow, SACp_inl_4822_const3, 2, in, 2.0, in, 23.0)
   */
  SACp_inl_4822_const3 = pow( SAC_ND_ARG_in( 2.0), SAC_ND_ARG_in( 23.0));

  SACp_inl_4838_idx = 0; 
  SACp_inl_4842_idx = 1; 
  SACp_lir_8062__inl_7459__flat_97 = (SACp_inl_4825_a / SACp_inl_4822_const3); 
  /*
   * ND_FUN_AP( floor, SACp_lir_8063__inl_7458_a1, 1, in, SACp_lir_8062__inl_7459__flat_97)
   */
  SACp_lir_8063__inl_7458_a1 = floor( SAC_ND_ARG_in( SACp_lir_8062__inl_7459__flat_97));

  SACp_lir_8064__inl_7457__flat_98 = (SACp_inl_4822_const3 * SACp_lir_8063__inl_7458_a1); 
  SACp_lir_8065__inl_7456_a2 = (SACp_inl_4825_a - SACp_lir_8064__inl_7457__flat_98); 
  SAC_ND_KS_ASSIGN_ARRAY( SACp_inl_4828_A, SACp_inl_8131_A)
  SACp_inl_8130_rand = SACp_inl_4827_seed; 
  SACp_inl_8129_z = SACp_inl_4838_idx; 
  SACp_inl_8128__lir_8050__inl_7339_const1 = SACp_inl_4824_const1; 
  SACp_inl_8127__lir_8051__inl_7338_const2 = SACp_inl_4823_const2; 
  SACp_inl_8126__lir_8052__inl_7337_const3 = SACp_inl_4822_const3; 
  SACp_inl_8125__lir_8061__inl_4811_x = SACp_inl_4838_idx; 
  SACp_inl_8124__lir_8063__inl_7458_a1 = SACp_lir_8063__inl_7458_a1; 
  SACp_inl_8123__lir_8065__inl_7456_a2 = SACp_lir_8065__inl_7456_a2; 
  SAC_ND_GOTO( _comp_8255_SAC__label)
  do 
  { 
    SAC_ND_DEC_RC_FREE_ARRAY( SACp_inl_8122_A__SSA_3, 1)
    SAC_ND_LABEL( _comp_8255_SAC__label)
    SAC_ND_KS_ASSIGN_ARRAY( SACp_inl_8131_A, SACp_inl_8145_A)
    SACp_inl_8144_rand = SACp_inl_8130_rand; 
    SACp_inl_8143_y = SACp_inl_8125__lir_8061__inl_4811_x; 
    SACp_inl_8142__lir_8043__inl_7322_const1 = SACp_inl_8128__lir_8050__inl_7339_const1; 
    SACp_inl_8141__lir_8044__inl_7321_const2 = SACp_inl_8127__lir_8051__inl_7338_const2; 
    SACp_inl_8140__lir_8045__inl_7320_const3 = SACp_inl_8126__lir_8052__inl_7337_const3; 
    SACp_inl_8139__lir_8046__inl_7318_z = SACp_inl_8129_z; 
    SACp_inl_8138__lir_8047__inl_7316_x = SACp_inl_8125__lir_8061__inl_4811_x; 
    SACp_inl_8137__lir_8058__inl_7458_a1 = SACp_inl_8124__lir_8063__inl_7458_a1; 
    SACp_inl_8136__lir_8060__inl_7456_a2 = SACp_inl_8123__lir_8065__inl_7456_a2; 
    SAC_ND_GOTO( _comp_8254_SAC__label)
    do 
    { 
      SAC_ND_DEC_RC_FREE_ARRAY( SACp_inl_8135_A__SSA_3, 1)
      SAC_ND_LABEL( _comp_8254_SAC__label)
      SAC_ND_KS_ASSIGN_ARRAY( SACp_inl_8145_A, SACp_inl_8199_A)
      SACp_inl_8198_rand = SACp_inl_8144_rand; 
      SACp_inl_8197_x = SACp_inl_8138__lir_8047__inl_7316_x; 
      SACp_inl_8196__lir_8022__inl_7468_y__SSA_1 = SACp_inl_8143_y; 
      SACp_inl_8195__lir_8023__inl_7469_z__SSA_1 = SACp_inl_8139__lir_8046__inl_7318_z; 
      SACp_inl_8194__lir_8024__inl_7470_const3__SSA_1 = SACp_inl_8140__lir_8045__inl_7320_const3; 
      SACp_inl_8193__lir_8025__inl_7471_const2__SSA_1 = SACp_inl_8141__lir_8044__inl_7321_const2; 
      SACp_inl_8192__lir_8026__inl_7472_const1__SSA_1 = SACp_inl_8142__lir_8043__inl_7322_const1; 
      SACp_inl_8191__lir_8029__inl_7477_a1__SSA_1 = SACp_inl_8137__lir_8058__inl_7458_a1; 
      SACp_inl_8190__lir_8031__inl_7479_a2__SSA_1 = SACp_inl_8136__lir_8060__inl_7456_a2; 
      SAC_ND_GOTO( _comp_8253_SAC__label)
      do 
      { 
        SAC_ND_DEC_RC_FREE_ARRAY( SACp_inl_8189_A__SSA_3, 1)
        SAC_ND_LABEL( _comp_8253_SAC__label)
        SACp_inl_8166__flat_99 = (SACp_inl_8198_rand / SACp_inl_8194__lir_8024__inl_7470_const3__SSA_1); 
        /*
         * ND_FUN_AP( floor, SACp_inl_8167_b1, 1, in, SACp_inl_8166__flat_99)
         */
        SACp_inl_8167_b1 = floor( SAC_ND_ARG_in( SACp_inl_8166__flat_99));

        SACp_inl_8168__flat_100 = (SACp_inl_8194__lir_8024__inl_7470_const3__SSA_1 * SACp_inl_8167_b1); 
        SACp_inl_8169_b2 = (SACp_inl_8198_rand - SACp_inl_8168__flat_100); 
        SACp_inl_8170__flat_102 = (SACp_inl_8190__lir_8031__inl_7479_a2__SSA_1 * SACp_inl_8167_b1); 
        SACp_inl_8171__flat_101 = (SACp_inl_8191__lir_8029__inl_7477_a1__SSA_1 * SACp_inl_8169_b2); 
        SACp_inl_8172_t1 = (SACp_inl_8171__flat_101 + SACp_inl_8170__flat_102); 
        SACp_inl_8173__flat_103 = (SACp_inl_8172_t1 / SACp_inl_8194__lir_8024__inl_7470_const3__SSA_1); 
        /*
         * ND_FUN_AP( floor, SACp_inl_8174_t2, 1, in, SACp_inl_8173__flat_103)
         */
        SACp_inl_8174_t2 = floor( SAC_ND_ARG_in( SACp_inl_8173__flat_103));

        SACp_inl_8175__flat_104 = (SACp_inl_8194__lir_8024__inl_7470_const3__SSA_1 * SACp_inl_8174_t2); 
        SACp_inl_8176_t3 = (SACp_inl_8172_t1 - SACp_inl_8175__flat_104); 
        SACp_inl_8177__flat_106 = (SACp_inl_8190__lir_8031__inl_7479_a2__SSA_1 * SACp_inl_8169_b2); 
        SACp_inl_8178__flat_105 = (SACp_inl_8194__lir_8024__inl_7470_const3__SSA_1 * SACp_inl_8176_t3); 
        SACp_inl_8179_t4 = (SACp_inl_8178__flat_105 + SACp_inl_8177__flat_106); 
        SACp_inl_8180__flat_107 = (SACp_inl_8179_t4 / SACp_inl_8192__lir_8026__inl_7472_const1__SSA_1); 
        /*
         * ND_FUN_AP( floor, SACp_inl_8181_t5, 1, in, SACp_inl_8180__flat_107)
         */
        SACp_inl_8181_t5 = floor( SAC_ND_ARG_in( SACp_inl_8180__flat_107));

        SACp_inl_8182__flat_108 = (SACp_inl_8192__lir_8026__inl_7472_const1__SSA_1 * SACp_inl_8181_t5); 
        SACp_inl_8183_c = (SACp_inl_8179_t4 - SACp_inl_8182__flat_108); 
        SACp_inl_8184__flat_114 = (SACp_inl_8183_c * SACp_inl_8193__lir_8025__inl_7471_const2__SSA_1); 
        SACp_inl_8185__flat_113_128_128_32_2__ = ((((((SACp_inl_8197_x * 128) + SACp_inl_8196__lir_8022__inl_7468_y__SSA_1) * 32) + SACp_inl_8195__lir_8023__inl_7469_z__SSA_1) * 2) + 0); 
        SAC_ND_CHECK_REUSE_ARRAY( SACp_inl_8199_A, SACp_inl_8165_A__SSA_1)
        SAC_ND_ALLOC_ARRAY( double, SACp_inl_8165_A__SSA_1, 0)
        SAC_ND_INC_RC( SACp_inl_8165_A__SSA_1, 1)
        SAC_ND_IDX_MODARRAY_AxVxS( double, SACp_inl_8165_A__SSA_1, SACp_inl_8199_A, SACp_inl_8185__flat_113_128_128_32_2__, SACp_inl_8184__flat_114)
        SAC_ND_DEC_RC_FREE_ARRAY( SACp_inl_8199_A, 1)
        SACp_inl_8164__flat_99__SSA_1 = (SACp_inl_8183_c / SACp_inl_8194__lir_8024__inl_7470_const3__SSA_1); 
        /*
         * ND_FUN_AP( floor, SACp_inl_8163_b1__SSA_1, 1, in, SACp_inl_8164__flat_99__SSA_1)
         */
        SACp_inl_8163_b1__SSA_1 = floor( SAC_ND_ARG_in( SACp_inl_8164__flat_99__SSA_1));

        SACp_inl_8162__flat_100__SSA_1 = (SACp_inl_8194__lir_8024__inl_7470_const3__SSA_1 * SACp_inl_8163_b1__SSA_1); 
        SACp_inl_8161_b2__SSA_1 = (SACp_inl_8183_c - SACp_inl_8162__flat_100__SSA_1); 
        SACp_inl_8160__flat_102__SSA_1 = (SACp_inl_8190__lir_8031__inl_7479_a2__SSA_1 * SACp_inl_8163_b1__SSA_1); 
        SACp_inl_8159__flat_101__SSA_1 = (SACp_inl_8191__lir_8029__inl_7477_a1__SSA_1 * SACp_inl_8161_b2__SSA_1); 
        SACp_inl_8158_t1__SSA_1 = (SACp_inl_8159__flat_101__SSA_1 + SACp_inl_8160__flat_102__SSA_1); 
        SACp_inl_8157__flat_103__SSA_1 = (SACp_inl_8158_t1__SSA_1 / SACp_inl_8194__lir_8024__inl_7470_const3__SSA_1); 
        /*
         * ND_FUN_AP( floor, SACp_inl_8156_t2__SSA_1, 1, in, SACp_inl_8157__flat_103__SSA_1)
         */
        SACp_inl_8156_t2__SSA_1 = floor( SAC_ND_ARG_in( SACp_inl_8157__flat_103__SSA_1));

        SACp_inl_8155__flat_104__SSA_1 = (SACp_inl_8194__lir_8024__inl_7470_const3__SSA_1 * SACp_inl_8156_t2__SSA_1); 
        SACp_inl_8154_t3__SSA_1 = (SACp_inl_8158_t1__SSA_1 - SACp_inl_8155__flat_104__SSA_1); 
        SACp_inl_8153__flat_106__SSA_1 = (SACp_inl_8190__lir_8031__inl_7479_a2__SSA_1 * SACp_inl_8161_b2__SSA_1); 
        SACp_inl_8152__flat_105__SSA_1 = (SACp_inl_8194__lir_8024__inl_7470_const3__SSA_1 * SACp_inl_8154_t3__SSA_1); 
        SACp_inl_8151_t4__SSA_1 = (SACp_inl_8152__flat_105__SSA_1 + SACp_inl_8153__flat_106__SSA_1); 
        SACp_inl_8150__flat_107__SSA_1 = (SACp_inl_8151_t4__SSA_1 / SACp_inl_8192__lir_8026__inl_7472_const1__SSA_1); 
        /*
         * ND_FUN_AP( floor, SACp_inl_8149_t5__SSA_1, 1, in, SACp_inl_8150__flat_107__SSA_1)
         */
        SACp_inl_8149_t5__SSA_1 = floor( SAC_ND_ARG_in( SACp_inl_8150__flat_107__SSA_1));

        SACp_inl_8148__flat_108__SSA_1 = (SACp_inl_8192__lir_8026__inl_7472_const1__SSA_1 * SACp_inl_8149_t5__SSA_1); 
        SACp_inl_8188_rand__SSA_3 = (SACp_inl_8151_t4__SSA_1 - SACp_inl_8148__flat_108__SSA_1); 
        SACp_inl_8147__flat_114__SSA_1 = (SACp_inl_8188_rand__SSA_3 * SACp_inl_8193__lir_8025__inl_7471_const2__SSA_1); 
        SACp_inl_8146__flat_113__SSA_1_128_128_32_2__ = ((((((SACp_inl_8197_x * 128) + SACp_inl_8196__lir_8022__inl_7468_y__SSA_1) * 32) + SACp_inl_8195__lir_8023__inl_7469_z__SSA_1) * 2) + 1); 
        SAC_ND_CHECK_REUSE_ARRAY( SACp_inl_8165_A__SSA_1, SACp_inl_8189_A__SSA_3)
        SAC_ND_ALLOC_ARRAY( double, SACp_inl_8189_A__SSA_3, 0)
        SAC_ND_INC_RC( SACp_inl_8189_A__SSA_3, 1)
        SAC_ND_IDX_MODARRAY_AxVxS( double, SACp_inl_8189_A__SSA_3, SACp_inl_8165_A__SSA_1, SACp_inl_8146__flat_113__SSA_1_128_128_32_2__, SACp_inl_8147__flat_114__SSA_1)
        SAC_ND_DEC_RC_FREE_ARRAY( SACp_inl_8165_A__SSA_1, 1)
        SAC_ND_INC_RC( SACp_inl_8189_A__SSA_3, 1)
        SACp_inl_8187_x__SSA_1 = (SACp_inl_8197_x + 1); 
        SACp_inl_8186__flat_116 = (SACp_inl_8187_x__SSA_1 < 128); 
        SACp_inl_8197_x = SACp_inl_8187_x__SSA_1; 
        SACp_inl_8198_rand = SACp_inl_8188_rand__SSA_3; 
        SAC_ND_KS_ASSIGN_ARRAY( SACp_inl_8189_A__SSA_3, SACp_inl_8199_A)
      }
      while (SACp_inl_8186__flat_116);
      SAC_ND_DEC_RC_FREE_ARRAY( SACp_inl_8199_A, 1)
      SAC_ND_KS_ASSIGN_ARRAY( SACp_inl_8189_A__SSA_3, SACp_inl_8135_A__SSA_3)
      SAC_ND_INC_RC( SACp_inl_8135_A__SSA_3, 1)
      SACp_inl_8134_rand__SSA_3 = SACp_inl_8188_rand__SSA_3; 
      SACp_inl_8133_y__SSA_1 = (SACp_inl_8143_y + 1); 
      SACp_inl_8132__flat_117 = (SACp_inl_8133_y__SSA_1 < 128); 
      SACp_inl_8143_y = SACp_inl_8133_y__SSA_1; 
      SACp_inl_8144_rand = SACp_inl_8134_rand__SSA_3; 
      SAC_ND_KS_ASSIGN_ARRAY( SACp_inl_8135_A__SSA_3, SACp_inl_8145_A)
    }
    while (SACp_inl_8132__flat_117);
    SAC_ND_DEC_RC_FREE_ARRAY( SACp_inl_8145_A, 1)
    SAC_ND_KS_ASSIGN_ARRAY( SACp_inl_8135_A__SSA_3, SACp_inl_8122_A__SSA_3)
    SAC_ND_INC_RC( SACp_inl_8122_A__SSA_3, 1)
    SACp_inl_8119_rand__SSA_1 = SACp_inl_8134_rand__SSA_3; 
    SACp_inl_8121_z__SSA_1 = (SACp_inl_8129_z + 1); 
    SACp_inl_8120__flat_118 = (SACp_inl_8121_z__SSA_1 < 32); 
    SACp_inl_8129_z = SACp_inl_8121_z__SSA_1; 
    SACp_inl_8130_rand = SACp_inl_8119_rand__SSA_1; 
    SAC_ND_KS_ASSIGN_ARRAY( SACp_inl_8122_A__SSA_3, SACp_inl_8131_A)
  }
  while (SACp_inl_8120__flat_118);
  SAC_ND_DEC_RC_FREE_ARRAY( SACp_inl_8131_A, 1)
  SAC_ND_KS_ASSIGN_ARRAY( SACp_inl_8122_A__SSA_3, SACp_inl_7346_A__SSA_1)
  /*
   * ND_FUN_AP( SACf_FFT3d_forward___MAIN__cpx_128_128_32___MAIN__cpx_64, , 3, out_rc, SACl_V, in_rc, SACp_inl_7346_A__SSA_1, in_rc, SACl_rofu)
   */
  SACf_FFT3d_forward___MAIN__cpx_128_128_32___MAIN__cpx_64( SAC_ND_ARG_out_rc( SACl_V), SAC_ND_ARG_in_rc( SACp_inl_7346_A__SSA_1), SAC_ND_ARG_in_rc( SACl_rofu));

  /*
   * ND_FUN_AP( SACf_RootsOfUnity__d, , 2, out_rc, SACl_rofu__SSA_1, in, -1.0)
   */
  SACf_RootsOfUnity__d( SAC_ND_ARG_out_rc( SACl_rofu__SSA_1), SAC_ND_ARG_in( -1.0));

  SACp_inl_8247_t = SACp_inl_4842_idx; 
  SAC_ND_KS_ASSIGN_ARRAY( SACl_V, SACp_inl_8246_V)
  SAC_ND_KS_ASSIGN_ARRAY( SACl_rofu__SSA_1, SACp_inl_8245_rofu)
  SAC_ND_KS_ASSIGN_ARRAY( SACl_expomap, SACp_inl_8244_expomap)
  SAC_ND_KS_ASSIGN_ARRAY( SACl_indexmap, SACp_inl_8243_indexmap)
  SAC_ND_GOTO( _comp_8256_SAC__label)
  do 
  { 
    SAC_ND_LABEL( _comp_8256_SAC__label)
    SAC_ND_INC_RC( SACp_inl_8245_rofu, 3)
    SAC_ND_ALLOC_ARRAY( double, SACp_inl_8200_res, 1)
    SAC_PF_BEGIN_WITH( modarray)
      /*
       * WL_BEGIN__OFFSET( SACp_inl_8200_res, 4, SACp_inl_8212__flat_191_iv, 4)
       */
      { int SAC_WL_OFFSET( SACp_inl_8200_res);
        int SAC_WL_MT_SCHEDULE_START( 0);
        int SAC_WL_MT_SCHEDULE_STOP( 0);
        int SAC_WL_MT_SCHEDULE_START( 1);
        int SAC_WL_MT_SCHEDULE_STOP( 1);
        int SAC_WL_MT_SCHEDULE_START( 2);
        int SAC_WL_MT_SCHEDULE_STOP( 2);
        int SAC_WL_MT_SCHEDULE_START( 3);
        int SAC_WL_MT_SCHEDULE_STOP( 3);
        int SAC_i;
        int SAC_WL_SHAPE_FACTOR( SACp_inl_8200_res, 0) = 1 * SAC_ND_A_SHAPE( SACp_inl_8200_res, 1) * SAC_ND_A_SHAPE( SACp_inl_8200_res, 2) * SAC_ND_A_SHAPE( SACp_inl_8200_res, 3);
        int SAC_WL_SHAPE_FACTOR( SACp_inl_8200_res, 1) = 1 * SAC_ND_A_SHAPE( SACp_inl_8200_res, 2) * SAC_ND_A_SHAPE( SACp_inl_8200_res, 3);
        int SAC_WL_SHAPE_FACTOR( SACp_inl_8200_res, 2) = 1 * SAC_ND_A_SHAPE( SACp_inl_8200_res, 3);
        int SAC_WL_SHAPE_FACTOR( SACp_inl_8200_res, 3) = 1;

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
         * WL_INIT_OFFSET( SACp_inl_8200_res, 4, SACp_inl_8212__flat_191_iv, 4)
         */
        SAC_WL_OFFSET( SACp_inl_8200_res)
          = SAC_WL_MT_SCHEDULE_START( 0) * SAC_WL_SHAPE_FACTOR( SACp_inl_8200_res, 0)
          + SAC_WL_MT_SCHEDULE_START( 1) * SAC_WL_SHAPE_FACTOR( SACp_inl_8200_res, 1)
          + SAC_WL_MT_SCHEDULE_START( 2) * SAC_WL_SHAPE_FACTOR( SACp_inl_8200_res, 2)
          + SAC_WL_MT_SCHEDULE_START( 3) * SAC_WL_SHAPE_FACTOR( SACp_inl_8200_res, 3);

        SAC_WL_STRIDE_LOOP0_BEGIN( 0, SACp_inl_8212__flat_191_iv, SACp_inl_8211__flat_187_i, 0, 128, 1)
          SAC_WL_GRID_UNROLL_BEGIN( 0, SACp_inl_8212__flat_191_iv, SACp_inl_8211__flat_187_i, 0, 1)
            SAC_WL_STRIDE_LOOP0_BEGIN( 1, SACp_inl_8212__flat_191_iv, SACp_inl_8210__flat_188_j, 0, 128, 1)
              SAC_WL_GRID_UNROLL_BEGIN( 1, SACp_inl_8212__flat_191_iv, SACp_inl_8210__flat_188_j, 0, 1)
                SAC_WL_STRIDE_LOOP0_BEGIN( 2, SACp_inl_8212__flat_191_iv, SACp_inl_8209__flat_189_k, 0, 32, 1)
                  SAC_WL_GRID_UNROLL_BEGIN( 2, SACp_inl_8212__flat_191_iv, SACp_inl_8209__flat_189_k, 0, 1)
                    SAC_WL_STRIDE_LOOP0_BEGIN( 3, SACp_inl_8212__flat_191_iv, SACp_inl_8208__flat_190_l, 0, 2, 1)
                      SAC_WL_GRID_UNROLL_BEGIN( 3, SACp_inl_8212__flat_191_iv, SACp_inl_8208__flat_190_l, 0, 1)
                        SAC_ND_KS_USE_GENVAR_OFFSET( SACp_inl_8212__flat_191_iv_128_128_32_2__, SACp_inl_8200_res)
                        SACp_inl_8207__flat_193_128_128_32__ = ((((SACp_inl_8211__flat_187_i * 128) + SACp_inl_8210__flat_188_j) * 32) + SACp_inl_8209__flat_189_k); 
                        SAC_ND_IDX_SEL_S( SACp_inl_8207__flat_193_128_128_32__, SACp_inl_8243_indexmap, SACp_inl_8206__flat_192)
                        SACp_inl_8205_newindex = (SACp_inl_8247_t * SACp_inl_8206__flat_192); 
                        SACp_inl_8204__flat_194_50689__ = SACp_inl_8205_newindex; 
                        SAC_ND_IDX_SEL_S( SACp_inl_8204__flat_194_50689__, SACp_inl_8244_expomap, SACp_inl_8203_exponent)
                        SAC_ND_IDX_SEL_S( SACp_inl_8212__flat_191_iv_128_128_32_2__, SACp_inl_8246_V, SACp_inl_8202__flat_195)
                        SACp_inl_8201_val = (SACp_inl_8202__flat_195 * SACp_inl_8203_exponent); 
                        /*
                         * WL_ASSIGN( SACp_inl_8201_val, 0, SACp_inl_8200_res, 4, SACp_inl_8212__flat_191_iv, 4, SACp_inl_8211__flat_187_i, SACp_inl_8210__flat_188_j, SACp_inl_8209__flat_189_k, SACp_inl_8208__flat_190_l)
                         */
                        SAC_TR_WL_PRINT( ("index vector [%d, %d, %d, %d] (== offset %d) -- offset %d -- assign", SACp_inl_8211__flat_187_i, SACp_inl_8210__flat_188_j, SACp_inl_8209__flat_189_k, SACp_inl_8208__flat_190_l, ( SAC_ND_A_SHAPE( SACp_inl_8200_res, 3) * ( SAC_ND_A_SHAPE( SACp_inl_8200_res, 2) * ( SAC_ND_A_SHAPE( SACp_inl_8200_res, 1) * SACp_inl_8211__flat_187_i + SACp_inl_8210__flat_188_j )+ SACp_inl_8209__flat_189_k )+ SACp_inl_8208__flat_190_l ), SAC_WL_OFFSET( SACp_inl_8200_res)));
                        SAC_ASSURE_TYPE( (SAC_ND_A_DIM( SACp_inl_8201_val) == (SAC_ND_A_DIM( SACp_inl_8200_res) - 4)), ("WL expression with illegal dimension found!"));
                        SAC_ASSURE_TYPE( (SAC_ND_A_SIZE( SACp_inl_8201_val) == SAC_WL_SHAPE_FACTOR( SACp_inl_8200_res, 3)), ("WL expression with illegal size found!"));
                        SAC_ND_WRITE_ARRAY( SACp_inl_8200_res, SAC_WL_OFFSET( SACp_inl_8200_res)) = SACp_inl_8201_val;
                        SAC_WL_OFFSET( SACp_inl_8200_res)++;

                      SAC_WL_GRID_UNROLL_END( 3, SACp_inl_8212__flat_191_iv, SACp_inl_8208__flat_190_l, 0, 1)
                    SAC_WL_STRIDE_LOOP_END( 3, SACp_inl_8212__flat_191_iv, SACp_inl_8208__flat_190_l, 0, 2, 1)
                  SAC_WL_GRID_UNROLL_END( 2, SACp_inl_8212__flat_191_iv, SACp_inl_8209__flat_189_k, 0, 1)
                SAC_WL_STRIDE_LOOP_END( 2, SACp_inl_8212__flat_191_iv, SACp_inl_8209__flat_189_k, 0, 32, 1)
              SAC_WL_GRID_UNROLL_END( 1, SACp_inl_8212__flat_191_iv, SACp_inl_8210__flat_188_j, 0, 1)
            SAC_WL_STRIDE_LOOP_END( 1, SACp_inl_8212__flat_191_iv, SACp_inl_8210__flat_188_j, 0, 128, 1)
          SAC_WL_GRID_UNROLL_END( 0, SACp_inl_8212__flat_191_iv, SACp_inl_8211__flat_187_i, 0, 1)
        SAC_WL_STRIDE_LOOP_END( 0, SACp_inl_8212__flat_191_iv, SACp_inl_8211__flat_187_i, 0, 128, 1)
        /*
         * MT_SCHEDULER_END( 0, 4, 0, 0, 0, 0, 128, 128, 32, 2)
         */


        /*
         * WL_END__OFFSET( SACp_inl_8200_res, 4, SACp_inl_8212__flat_191_iv, 4)
         */
      }

    SAC_PF_END_WITH( modarray)
    /*
     * ND_FUN_AP( SACf_FFT1d_Slice__d___MAIN__cpx_128_128_32___MAIN__cpx_64, , 4, out_rc, SACp_inl_8215_u, in, -1.0, in_rc, SACp_inl_8200_res, in_rc, SACp_inl_8245_rofu)
     */
    SACf_FFT1d_Slice__d___MAIN__cpx_128_128_32___MAIN__cpx_64( SAC_ND_ARG_out_rc( SACp_inl_8215_u), SAC_ND_ARG_in( -1.0), SAC_ND_ARG_in_rc( SACp_inl_8200_res), SAC_ND_ARG_in_rc( SACp_inl_8245_rofu));

    SAC_ND_ALLOC_ARRAY( double, SACp_inl_8216_res, 1)
    SAC_PF_BEGIN_WITH( genarray)
      /*
       * WL_BEGIN__OFFSET( SACp_inl_8216_res, 4, SACp_inl_8222__flat_52_iv, 4)
       */
      { int SAC_WL_OFFSET( SACp_inl_8216_res);
        int SAC_WL_MT_SCHEDULE_START( 0);
        int SAC_WL_MT_SCHEDULE_STOP( 0);
        int SAC_WL_MT_SCHEDULE_START( 1);
        int SAC_WL_MT_SCHEDULE_STOP( 1);
        int SAC_WL_MT_SCHEDULE_START( 2);
        int SAC_WL_MT_SCHEDULE_STOP( 2);
        int SAC_WL_MT_SCHEDULE_START( 3);
        int SAC_WL_MT_SCHEDULE_STOP( 3);
        int SAC_i;
        int SAC_WL_SHAPE_FACTOR( SACp_inl_8216_res, 0) = 1 * SAC_ND_A_SHAPE( SACp_inl_8216_res, 1) * SAC_ND_A_SHAPE( SACp_inl_8216_res, 2) * SAC_ND_A_SHAPE( SACp_inl_8216_res, 3);
        int SAC_WL_SHAPE_FACTOR( SACp_inl_8216_res, 1) = 1 * SAC_ND_A_SHAPE( SACp_inl_8216_res, 2) * SAC_ND_A_SHAPE( SACp_inl_8216_res, 3);
        int SAC_WL_SHAPE_FACTOR( SACp_inl_8216_res, 2) = 1 * SAC_ND_A_SHAPE( SACp_inl_8216_res, 3);
        int SAC_WL_SHAPE_FACTOR( SACp_inl_8216_res, 3) = 1;

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
         * WL_INIT_OFFSET( SACp_inl_8216_res, 4, SACp_inl_8222__flat_52_iv, 4)
         */
        SAC_WL_OFFSET( SACp_inl_8216_res)
          = SAC_WL_MT_SCHEDULE_START( 0) * SAC_WL_SHAPE_FACTOR( SACp_inl_8216_res, 0)
          + SAC_WL_MT_SCHEDULE_START( 1) * SAC_WL_SHAPE_FACTOR( SACp_inl_8216_res, 1)
          + SAC_WL_MT_SCHEDULE_START( 2) * SAC_WL_SHAPE_FACTOR( SACp_inl_8216_res, 2)
          + SAC_WL_MT_SCHEDULE_START( 3) * SAC_WL_SHAPE_FACTOR( SACp_inl_8216_res, 3);

        SAC_WL_STRIDE_LOOP0_BEGIN( 0, SACp_inl_8222__flat_52_iv, SACp_inl_8221__type_571, 0, 128, 1)
          SAC_WL_GRID_UNROLL_BEGIN( 0, SACp_inl_8222__flat_52_iv, SACp_inl_8221__type_571, 0, 1)
            SAC_WL_STRIDE_LOOP0_BEGIN( 1, SACp_inl_8222__flat_52_iv, SACp_inl_8220__type_572, 0, 32, 1)
              SAC_WL_GRID_UNROLL_BEGIN( 1, SACp_inl_8222__flat_52_iv, SACp_inl_8220__type_572, 0, 1)
                SAC_WL_STRIDE_LOOP0_BEGIN( 2, SACp_inl_8222__flat_52_iv, SACp_inl_8219__type_573, 0, 128, 1)
                  SAC_WL_GRID_UNROLL_BEGIN( 2, SACp_inl_8222__flat_52_iv, SACp_inl_8219__type_573, 0, 1)
                    SAC_WL_STRIDE_LOOP0_BEGIN( 3, SACp_inl_8222__flat_52_iv, SACp_inl_8218__type_574, 0, 2, 1)
                      SAC_WL_GRID_UNROLL_BEGIN( 3, SACp_inl_8222__flat_52_iv, SACp_inl_8218__type_574, 0, 1)
                        SACp_inl_8239_ivt__SSA_1_128_128_32_2__ = ((((((SACp_inl_8221__type_571 * 128) + SACp_inl_8219__type_573) * 32) + SACp_inl_8220__type_572) * 2) + SACp_inl_8218__type_574); 
                        SAC_ND_IDX_SEL_S( SACp_inl_8239_ivt__SSA_1_128_128_32_2__, SACp_inl_8215_u, SACp_inl_8217_val)
                        /*
                         * WL_ASSIGN( SACp_inl_8217_val, 0, SACp_inl_8216_res, 4, SACp_inl_8222__flat_52_iv, 4, SACp_inl_8221__type_571, SACp_inl_8220__type_572, SACp_inl_8219__type_573, SACp_inl_8218__type_574)
                         */
                        SAC_TR_WL_PRINT( ("index vector [%d, %d, %d, %d] (== offset %d) -- offset %d -- assign", SACp_inl_8221__type_571, SACp_inl_8220__type_572, SACp_inl_8219__type_573, SACp_inl_8218__type_574, ( SAC_ND_A_SHAPE( SACp_inl_8216_res, 3) * ( SAC_ND_A_SHAPE( SACp_inl_8216_res, 2) * ( SAC_ND_A_SHAPE( SACp_inl_8216_res, 1) * SACp_inl_8221__type_571 + SACp_inl_8220__type_572 )+ SACp_inl_8219__type_573 )+ SACp_inl_8218__type_574 ), SAC_WL_OFFSET( SACp_inl_8216_res)));
                        SAC_ASSURE_TYPE( (SAC_ND_A_DIM( SACp_inl_8217_val) == (SAC_ND_A_DIM( SACp_inl_8216_res) - 4)), ("WL expression with illegal dimension found!"));
                        SAC_ASSURE_TYPE( (SAC_ND_A_SIZE( SACp_inl_8217_val) == SAC_WL_SHAPE_FACTOR( SACp_inl_8216_res, 3)), ("WL expression with illegal size found!"));
                        SAC_ND_WRITE_ARRAY( SACp_inl_8216_res, SAC_WL_OFFSET( SACp_inl_8216_res)) = SACp_inl_8217_val;
                        SAC_WL_OFFSET( SACp_inl_8216_res)++;

                      SAC_WL_GRID_UNROLL_END( 3, SACp_inl_8222__flat_52_iv, SACp_inl_8218__type_574, 0, 1)
                    SAC_WL_STRIDE_LOOP_END( 3, SACp_inl_8222__flat_52_iv, SACp_inl_8218__type_574, 0, 2, 1)
                  SAC_WL_GRID_UNROLL_END( 2, SACp_inl_8222__flat_52_iv, SACp_inl_8219__type_573, 0, 1)
                SAC_WL_STRIDE_LOOP_END( 2, SACp_inl_8222__flat_52_iv, SACp_inl_8219__type_573, 0, 128, 1)
              SAC_WL_GRID_UNROLL_END( 1, SACp_inl_8222__flat_52_iv, SACp_inl_8220__type_572, 0, 1)
            SAC_WL_STRIDE_LOOP_END( 1, SACp_inl_8222__flat_52_iv, SACp_inl_8220__type_572, 0, 32, 1)
          SAC_WL_GRID_UNROLL_END( 0, SACp_inl_8222__flat_52_iv, SACp_inl_8221__type_571, 0, 1)
        SAC_WL_STRIDE_LOOP_END( 0, SACp_inl_8222__flat_52_iv, SACp_inl_8221__type_571, 0, 128, 1)
        /*
         * MT_SCHEDULER_END( 0, 4, 0, 0, 0, 0, 128, 32, 128, 2)
         */


        /*
         * WL_END__OFFSET( SACp_inl_8216_res, 4, SACp_inl_8222__flat_52_iv, 4)
         */
      }

    SAC_PF_END_WITH( genarray)
    SAC_ND_DEC_RC_FREE_ARRAY( SACp_inl_8215_u, 1)
    /*
     * ND_FUN_AP( SACf_FFT1d_Slice__d___MAIN__cpx_128_32_128___MAIN__cpx_64, , 4, out_rc, SACp_inl_8214_v, in, -1.0, in_rc, SACp_inl_8216_res, in_rc, SACp_inl_8245_rofu)
     */
    SACf_FFT1d_Slice__d___MAIN__cpx_128_32_128___MAIN__cpx_64( SAC_ND_ARG_out_rc( SACp_inl_8214_v), SAC_ND_ARG_in( -1.0), SAC_ND_ARG_in_rc( SACp_inl_8216_res), SAC_ND_ARG_in_rc( SACp_inl_8245_rofu));

    SAC_ND_ALLOC_ARRAY( double, SACp_inl_8223_res, 1)
    SAC_PF_BEGIN_WITH( genarray)
      /*
       * WL_BEGIN__OFFSET( SACp_inl_8223_res, 4, SACp_inl_8229__flat_52_iv, 4)
       */
      { int SAC_WL_OFFSET( SACp_inl_8223_res);
        int SAC_WL_MT_SCHEDULE_START( 0);
        int SAC_WL_MT_SCHEDULE_STOP( 0);
        int SAC_WL_MT_SCHEDULE_START( 1);
        int SAC_WL_MT_SCHEDULE_STOP( 1);
        int SAC_WL_MT_SCHEDULE_START( 2);
        int SAC_WL_MT_SCHEDULE_STOP( 2);
        int SAC_WL_MT_SCHEDULE_START( 3);
        int SAC_WL_MT_SCHEDULE_STOP( 3);
        int SAC_i;
        int SAC_WL_SHAPE_FACTOR( SACp_inl_8223_res, 0) = 1 * SAC_ND_A_SHAPE( SACp_inl_8223_res, 1) * SAC_ND_A_SHAPE( SACp_inl_8223_res, 2) * SAC_ND_A_SHAPE( SACp_inl_8223_res, 3);
        int SAC_WL_SHAPE_FACTOR( SACp_inl_8223_res, 1) = 1 * SAC_ND_A_SHAPE( SACp_inl_8223_res, 2) * SAC_ND_A_SHAPE( SACp_inl_8223_res, 3);
        int SAC_WL_SHAPE_FACTOR( SACp_inl_8223_res, 2) = 1 * SAC_ND_A_SHAPE( SACp_inl_8223_res, 3);
        int SAC_WL_SHAPE_FACTOR( SACp_inl_8223_res, 3) = 1;

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
         * WL_INIT_OFFSET( SACp_inl_8223_res, 4, SACp_inl_8229__flat_52_iv, 4)
         */
        SAC_WL_OFFSET( SACp_inl_8223_res)
          = SAC_WL_MT_SCHEDULE_START( 0) * SAC_WL_SHAPE_FACTOR( SACp_inl_8223_res, 0)
          + SAC_WL_MT_SCHEDULE_START( 1) * SAC_WL_SHAPE_FACTOR( SACp_inl_8223_res, 1)
          + SAC_WL_MT_SCHEDULE_START( 2) * SAC_WL_SHAPE_FACTOR( SACp_inl_8223_res, 2)
          + SAC_WL_MT_SCHEDULE_START( 3) * SAC_WL_SHAPE_FACTOR( SACp_inl_8223_res, 3);

        SAC_WL_STRIDE_LOOP0_BEGIN( 0, SACp_inl_8229__flat_52_iv, SACp_inl_8228__type_590, 0, 128, 1)
          SAC_WL_GRID_UNROLL_BEGIN( 0, SACp_inl_8229__flat_52_iv, SACp_inl_8228__type_590, 0, 1)
            SAC_WL_STRIDE_LOOP0_BEGIN( 1, SACp_inl_8229__flat_52_iv, SACp_inl_8227__type_591, 0, 32, 1)
              SAC_WL_GRID_UNROLL_BEGIN( 1, SACp_inl_8229__flat_52_iv, SACp_inl_8227__type_591, 0, 1)
                SAC_WL_STRIDE_LOOP0_BEGIN( 2, SACp_inl_8229__flat_52_iv, SACp_inl_8226__type_592, 0, 128, 1)
                  SAC_WL_GRID_UNROLL_BEGIN( 2, SACp_inl_8229__flat_52_iv, SACp_inl_8226__type_592, 0, 1)
                    SAC_WL_STRIDE_LOOP0_BEGIN( 3, SACp_inl_8229__flat_52_iv, SACp_inl_8225__type_593, 0, 2, 1)
                      SAC_WL_GRID_UNROLL_BEGIN( 3, SACp_inl_8229__flat_52_iv, SACp_inl_8225__type_593, 0, 1)
                        SACp_inl_8240_ivt__SSA_1_128_32_128_2__ = ((((((SACp_inl_8226__type_592 * 32) + SACp_inl_8227__type_591) * 128) + SACp_inl_8228__type_590) * 2) + SACp_inl_8225__type_593); 
                        SAC_ND_IDX_SEL_S( SACp_inl_8240_ivt__SSA_1_128_32_128_2__, SACp_inl_8214_v, SACp_inl_8224_val)
                        /*
                         * WL_ASSIGN( SACp_inl_8224_val, 0, SACp_inl_8223_res, 4, SACp_inl_8229__flat_52_iv, 4, SACp_inl_8228__type_590, SACp_inl_8227__type_591, SACp_inl_8226__type_592, SACp_inl_8225__type_593)
                         */
                        SAC_TR_WL_PRINT( ("index vector [%d, %d, %d, %d] (== offset %d) -- offset %d -- assign", SACp_inl_8228__type_590, SACp_inl_8227__type_591, SACp_inl_8226__type_592, SACp_inl_8225__type_593, ( SAC_ND_A_SHAPE( SACp_inl_8223_res, 3) * ( SAC_ND_A_SHAPE( SACp_inl_8223_res, 2) * ( SAC_ND_A_SHAPE( SACp_inl_8223_res, 1) * SACp_inl_8228__type_590 + SACp_inl_8227__type_591 )+ SACp_inl_8226__type_592 )+ SACp_inl_8225__type_593 ), SAC_WL_OFFSET( SACp_inl_8223_res)));
                        SAC_ASSURE_TYPE( (SAC_ND_A_DIM( SACp_inl_8224_val) == (SAC_ND_A_DIM( SACp_inl_8223_res) - 4)), ("WL expression with illegal dimension found!"));
                        SAC_ASSURE_TYPE( (SAC_ND_A_SIZE( SACp_inl_8224_val) == SAC_WL_SHAPE_FACTOR( SACp_inl_8223_res, 3)), ("WL expression with illegal size found!"));
                        SAC_ND_WRITE_ARRAY( SACp_inl_8223_res, SAC_WL_OFFSET( SACp_inl_8223_res)) = SACp_inl_8224_val;
                        SAC_WL_OFFSET( SACp_inl_8223_res)++;

                      SAC_WL_GRID_UNROLL_END( 3, SACp_inl_8229__flat_52_iv, SACp_inl_8225__type_593, 0, 1)
                    SAC_WL_STRIDE_LOOP_END( 3, SACp_inl_8229__flat_52_iv, SACp_inl_8225__type_593, 0, 2, 1)
                  SAC_WL_GRID_UNROLL_END( 2, SACp_inl_8229__flat_52_iv, SACp_inl_8226__type_592, 0, 1)
                SAC_WL_STRIDE_LOOP_END( 2, SACp_inl_8229__flat_52_iv, SACp_inl_8226__type_592, 0, 128, 1)
              SAC_WL_GRID_UNROLL_END( 1, SACp_inl_8229__flat_52_iv, SACp_inl_8227__type_591, 0, 1)
            SAC_WL_STRIDE_LOOP_END( 1, SACp_inl_8229__flat_52_iv, SACp_inl_8227__type_591, 0, 32, 1)
          SAC_WL_GRID_UNROLL_END( 0, SACp_inl_8229__flat_52_iv, SACp_inl_8228__type_590, 0, 1)
        SAC_WL_STRIDE_LOOP_END( 0, SACp_inl_8229__flat_52_iv, SACp_inl_8228__type_590, 0, 128, 1)
        /*
         * MT_SCHEDULER_END( 0, 4, 0, 0, 0, 0, 128, 32, 128, 2)
         */


        /*
         * WL_END__OFFSET( SACp_inl_8223_res, 4, SACp_inl_8229__flat_52_iv, 4)
         */
      }

    SAC_PF_END_WITH( genarray)
    SAC_ND_DEC_RC_FREE_ARRAY( SACp_inl_8214_v, 1)
    /*
     * ND_FUN_AP( SACf_FFT1d_Slice__d___MAIN__cpx_128_32_128___MAIN__cpx_64, , 4, out_rc, SACp_inl_8213_w, in, -1.0, in_rc, SACp_inl_8223_res, in_rc, SACp_inl_8245_rofu)
     */
    SACf_FFT1d_Slice__d___MAIN__cpx_128_32_128___MAIN__cpx_64( SAC_ND_ARG_out_rc( SACp_inl_8213_w), SAC_ND_ARG_in( -1.0), SAC_ND_ARG_in_rc( SACp_inl_8223_res), SAC_ND_ARG_in_rc( SACp_inl_8245_rofu));

    SAC_ND_ALLOC_ARRAY( double, SACp_inl_8235_result, 1)
    SAC_PF_BEGIN_WITH( genarray)
      /*
       * WL_BEGIN__OFFSET( SACp_inl_8235_result, 4, SACp_inl_8237__flat_64_iv, 4)
       */
      { int SAC_WL_OFFSET( SACp_inl_8235_result);
        int SAC_WL_MT_SCHEDULE_START( 0);
        int SAC_WL_MT_SCHEDULE_STOP( 0);
        int SAC_WL_MT_SCHEDULE_START( 1);
        int SAC_WL_MT_SCHEDULE_STOP( 1);
        int SAC_WL_MT_SCHEDULE_START( 2);
        int SAC_WL_MT_SCHEDULE_STOP( 2);
        int SAC_WL_MT_SCHEDULE_START( 3);
        int SAC_WL_MT_SCHEDULE_STOP( 3);
        int SAC_i;
        int SAC_WL_SHAPE_FACTOR( SACp_inl_8235_result, 0) = 1 * SAC_ND_A_SHAPE( SACp_inl_8235_result, 1) * SAC_ND_A_SHAPE( SACp_inl_8235_result, 2) * SAC_ND_A_SHAPE( SACp_inl_8235_result, 3);
        int SAC_WL_SHAPE_FACTOR( SACp_inl_8235_result, 1) = 1 * SAC_ND_A_SHAPE( SACp_inl_8235_result, 2) * SAC_ND_A_SHAPE( SACp_inl_8235_result, 3);
        int SAC_WL_SHAPE_FACTOR( SACp_inl_8235_result, 2) = 1 * SAC_ND_A_SHAPE( SACp_inl_8235_result, 3);
        int SAC_WL_SHAPE_FACTOR( SACp_inl_8235_result, 3) = 1;

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
         * WL_INIT_OFFSET( SACp_inl_8235_result, 4, SACp_inl_8237__flat_64_iv, 4)
         */
        SAC_WL_OFFSET( SACp_inl_8235_result)
          = SAC_WL_MT_SCHEDULE_START( 0) * SAC_WL_SHAPE_FACTOR( SACp_inl_8235_result, 0)
          + SAC_WL_MT_SCHEDULE_START( 1) * SAC_WL_SHAPE_FACTOR( SACp_inl_8235_result, 1)
          + SAC_WL_MT_SCHEDULE_START( 2) * SAC_WL_SHAPE_FACTOR( SACp_inl_8235_result, 2)
          + SAC_WL_MT_SCHEDULE_START( 3) * SAC_WL_SHAPE_FACTOR( SACp_inl_8235_result, 3);

        SAC_WL_STRIDE_LOOP0_BEGIN( 0, SACp_inl_8237__flat_64_iv, SACp_inl_8234__type_601, 0, 128, 1)
          SAC_WL_GRID_UNROLL_BEGIN( 0, SACp_inl_8237__flat_64_iv, SACp_inl_8234__type_601, 0, 1)
            SAC_WL_STRIDE_LOOP0_BEGIN( 1, SACp_inl_8237__flat_64_iv, SACp_inl_8233__type_602, 0, 128, 1)
              SAC_WL_GRID_UNROLL_BEGIN( 1, SACp_inl_8237__flat_64_iv, SACp_inl_8233__type_602, 0, 1)
                SAC_WL_STRIDE_LOOP0_BEGIN( 2, SACp_inl_8237__flat_64_iv, SACp_inl_8232__type_603, 0, 32, 1)
                  SAC_WL_GRID_UNROLL_BEGIN( 2, SACp_inl_8237__flat_64_iv, SACp_inl_8232__type_603, 0, 1)
                    SAC_WL_STRIDE_LOOP0_BEGIN( 3, SACp_inl_8237__flat_64_iv, SACp_inl_8231__type_604, 0, 2, 1)
                      SAC_WL_GRID_UNROLL_BEGIN( 3, SACp_inl_8237__flat_64_iv, SACp_inl_8231__type_604, 0, 1)
                        SACp_inl_8241_ivt__SSA_1_128_32_128_2__ = ((((((SACp_inl_8233__type_602 * 32) + SACp_inl_8232__type_603) * 128) + SACp_inl_8234__type_601) * 2) + SACp_inl_8231__type_604); 
                        SAC_ND_IDX_SEL_S( SACp_inl_8241_ivt__SSA_1_128_32_128_2__, SACp_inl_8213_w, SACp_inl_8230_val)
                        SACp_inl_8236__flat_65 = (SACp_inl_8230_val / 524288.0); 
                        /*
                         * WL_ASSIGN( SACp_inl_8236__flat_65, 0, SACp_inl_8235_result, 4, SACp_inl_8237__flat_64_iv, 4, SACp_inl_8234__type_601, SACp_inl_8233__type_602, SACp_inl_8232__type_603, SACp_inl_8231__type_604)
                         */
                        SAC_TR_WL_PRINT( ("index vector [%d, %d, %d, %d] (== offset %d) -- offset %d -- assign", SACp_inl_8234__type_601, SACp_inl_8233__type_602, SACp_inl_8232__type_603, SACp_inl_8231__type_604, ( SAC_ND_A_SHAPE( SACp_inl_8235_result, 3) * ( SAC_ND_A_SHAPE( SACp_inl_8235_result, 2) * ( SAC_ND_A_SHAPE( SACp_inl_8235_result, 1) * SACp_inl_8234__type_601 + SACp_inl_8233__type_602 )+ SACp_inl_8232__type_603 )+ SACp_inl_8231__type_604 ), SAC_WL_OFFSET( SACp_inl_8235_result)));
                        SAC_ASSURE_TYPE( (SAC_ND_A_DIM( SACp_inl_8236__flat_65) == (SAC_ND_A_DIM( SACp_inl_8235_result) - 4)), ("WL expression with illegal dimension found!"));
                        SAC_ASSURE_TYPE( (SAC_ND_A_SIZE( SACp_inl_8236__flat_65) == SAC_WL_SHAPE_FACTOR( SACp_inl_8235_result, 3)), ("WL expression with illegal size found!"));
                        SAC_ND_WRITE_ARRAY( SACp_inl_8235_result, SAC_WL_OFFSET( SACp_inl_8235_result)) = SACp_inl_8236__flat_65;
                        SAC_WL_OFFSET( SACp_inl_8235_result)++;

                      SAC_WL_GRID_UNROLL_END( 3, SACp_inl_8237__flat_64_iv, SACp_inl_8231__type_604, 0, 1)
                    SAC_WL_STRIDE_LOOP_END( 3, SACp_inl_8237__flat_64_iv, SACp_inl_8231__type_604, 0, 2, 1)
                  SAC_WL_GRID_UNROLL_END( 2, SACp_inl_8237__flat_64_iv, SACp_inl_8232__type_603, 0, 1)
                SAC_WL_STRIDE_LOOP_END( 2, SACp_inl_8237__flat_64_iv, SACp_inl_8232__type_603, 0, 32, 1)
              SAC_WL_GRID_UNROLL_END( 1, SACp_inl_8237__flat_64_iv, SACp_inl_8233__type_602, 0, 1)
            SAC_WL_STRIDE_LOOP_END( 1, SACp_inl_8237__flat_64_iv, SACp_inl_8233__type_602, 0, 128, 1)
          SAC_WL_GRID_UNROLL_END( 0, SACp_inl_8237__flat_64_iv, SACp_inl_8234__type_601, 0, 1)
        SAC_WL_STRIDE_LOOP_END( 0, SACp_inl_8237__flat_64_iv, SACp_inl_8234__type_601, 0, 128, 1)
        /*
         * MT_SCHEDULER_END( 0, 4, 0, 0, 0, 0, 128, 128, 32, 2)
         */


        /*
         * WL_END__OFFSET( SACp_inl_8235_result, 4, SACp_inl_8237__flat_64_iv, 4)
         */
      }

    SAC_PF_END_WITH( genarray)
    SAC_ND_DEC_RC_FREE_ARRAY( SACp_inl_8213_w, 1)
    /*
     * ND_FUN_AP( SACf_CheckResult__i___MAIN__cpx_128_128_32, , 2, in, SACp_inl_8247_t, in_rc, SACp_inl_8235_result)
     */
    SACf_CheckResult__i___MAIN__cpx_128_128_32( SAC_ND_ARG_in( SACp_inl_8247_t), SAC_ND_ARG_in_rc( SACp_inl_8235_result));

    SACp_inl_8242_t__SSA_1 = (SACp_inl_8247_t + 1); 
    SACp_inl_8238__flat_333 = (SACp_inl_8242_t__SSA_1 <= 6); 
    SACp_inl_8247_t = SACp_inl_8242_t__SSA_1; 
  }
  while (SACp_inl_8238__flat_333);
  SAC_ND_DEC_RC_FREE_ARRAY( SACp_inl_8243_indexmap, 1)
  SAC_ND_DEC_RC_FREE_ARRAY( SACp_inl_8244_expomap, 1)
  SAC_ND_DEC_RC( SACp_inl_8245_rofu, 1)
  SAC_ND_DEC_RC_FREE_ARRAY( SACp_inl_8246_V, 1)
  /*
   * ND_FUN_RET( SACp_inl_4838_idx, 0)
   */
  return( SACp_inl_4838_idx);
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
