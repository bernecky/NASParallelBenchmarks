/*
 *  Target Platform
 */

#define SAC_FOR_SOLARIS_SPARC


/*
 *  Global Switches
 */

#define SAC_DO_CHECK           0
#define SAC_DO_CHECK_MALLOC    0
#define SAC_DO_CHECK_BOUNDARY  0
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
#define SAC_DO_TRACE_OWL       0
#define SAC_DO_TRACE_WL        0
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

#define SAC_SET_CACHE_1_SIZE         16
#define SAC_SET_CACHE_1_LINE         32
#define SAC_SET_CACHE_1_ASSOC        1
#define SAC_SET_CACHE_1_WRITEPOL     SAC_CS_default
#define SAC_SET_CACHE_1_MSCA_FACTOR  0.25

#define SAC_SET_CACHE_2_SIZE         1024
#define SAC_SET_CACHE_2_LINE         64
#define SAC_SET_CACHE_2_ASSOC        1
#define SAC_SET_CACHE_2_WRITEPOL     SAC_CS_default
#define SAC_SET_CACHE_2_MSCA_FACTOR  0.03

#define SAC_SET_CACHE_3_SIZE         0
#define SAC_SET_CACHE_3_LINE         4
#define SAC_SET_CACHE_3_ASSOC        1
#define SAC_SET_CACHE_3_WRITEPOL     SAC_CS_default
#define SAC_SET_CACHE_3_MSCA_FACTOR  0.00

#define SAC_SET_CACHESIM_HOST        ""
#define SAC_SET_CACHESIM_FILE        "fft.W.cs"
#define SAC_SET_CACHESIM_DIR         "/var/tmp"
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

SAC_ND_TYPEDEF_ARRAY( double, SACt_Complex__complex);
SAC_ND_TYPEDEF_HIDDEN( SACe_list);

extern SACe_list copy_list( SACe_list);
extern void free_list( SACe_list);

SAC_ND_TYPEDEF_HIDDEN( SACe_Terminal);
SAC_ND_TYPEDEF_HIDDEN( SACe_TermFile);
typedef int SACe_syserr;
SAC_ND_TYPEDEF_HIDDEN( SACe_string);

extern SACe_string copy_string( SACe_string);
extern void free( SACe_string);

SAC_ND_TYPEDEF_HIDDEN( SACe_FileSystem);
SAC_ND_TYPEDEF_HIDDEN( SACe_World);
SAC_ND_TYPEDEF_HIDDEN( SACe_File);
SAC_ND_TYPEDEF_ARRAY( double, SACt_cpx);


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
 * ND_FUN_DEC( SACf_GlobalObjInit_for_, void, 0)
 */
void SACf_GlobalObjInit_for_( int __argc, char *__argv[]);

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
double cos( double SACl_X);

extern 
/*
 * ND_FUN_DEC( sin, double, 1, in, double, SACl_X)
 */
double sin( double SACl_X);

extern 
/*
 * ND_FUN_DEC( exp, double, 1, in, double, SACl_X)
 */
double exp( double SACl_X);

extern 
/*
 * ND_FUN_DEC( pow, double, 2, in, double, SACl_X, in, double, SACl_Y)
 */
double pow( double SACl_X, double SACl_Y);

extern 
/*
 * ND_FUN_DEC( floor, double, 1, in, double, SACl_X)
 */
double floor( double SACl_X);

extern 
/*
 * ND_FUN_DEC( printf, void, 2, in, SACe_string, SACl_FORMAT, in, ..., )
 */
void printf( SACe_string SACl_FORMAT, ... );

extern 
/*
 * ND_FUN_DEC( SACf__mul___MAIN__cpx_64___MAIN__cpx_64_, void, 3, out_rc, double *, SACp_flat_90, in_rc, double *, SACl_a, in_rc, double *, SACl_b)
 */
void SACf__mul___MAIN__cpx_64___MAIN__cpx_64_( SAC_ND_KS_DEC_OUT_RC(double *, SACp_flat_90), SAC_ND_KS_DEC_IN_RC( double *, SACl_a), SAC_ND_KS_DEC_IN_RC( double *, SACl_b));

extern 
/*
 * ND_FUN_DEC( SACf__mul___MAIN__cpx_32___MAIN__cpx_32_, void, 3, out_rc, double *, SACp_flat_90, in_rc, double *, SACl_a, in_rc, double *, SACl_b)
 */
void SACf__mul___MAIN__cpx_32___MAIN__cpx_32_( SAC_ND_KS_DEC_OUT_RC(double *, SACp_flat_90), SAC_ND_KS_DEC_IN_RC( double *, SACl_a), SAC_ND_KS_DEC_IN_RC( double *, SACl_b));

extern 
/*
 * ND_FUN_DEC( SACf__mul___MAIN__cpx_16___MAIN__cpx_16_, void, 3, out_rc, double *, SACp_flat_90, in_rc, double *, SACl_a, in_rc, double *, SACl_b)
 */
void SACf__mul___MAIN__cpx_16___MAIN__cpx_16_( SAC_ND_KS_DEC_OUT_RC(double *, SACp_flat_90), SAC_ND_KS_DEC_IN_RC( double *, SACl_a), SAC_ND_KS_DEC_IN_RC( double *, SACl_b));

extern 
/*
 * ND_FUN_DEC( SACf__mul___MAIN__cpx_8___MAIN__cpx_8_, void, 3, out_rc, double *, SACp_flat_90, in_rc, double *, SACl_a, in_rc, double *, SACl_b)
 */
void SACf__mul___MAIN__cpx_8___MAIN__cpx_8_( SAC_ND_KS_DEC_OUT_RC(double *, SACp_flat_90), SAC_ND_KS_DEC_IN_RC( double *, SACl_a), SAC_ND_KS_DEC_IN_RC( double *, SACl_b));

extern 
/*
 * ND_FUN_DEC( SACf__mul___MAIN__cpx_4___MAIN__cpx_4_, void, 3, out_rc, double *, SACp_flat_90, in_rc, double *, SACl_a, in_rc, double *, SACl_b)
 */
void SACf__mul___MAIN__cpx_4___MAIN__cpx_4_( SAC_ND_KS_DEC_OUT_RC(double *, SACp_flat_90), SAC_ND_KS_DEC_IN_RC( double *, SACl_a), SAC_ND_KS_DEC_IN_RC( double *, SACl_b));

extern 
/*
 * ND_FUN_DEC( SACf_ComputeIndexMap_, void, 1, out_rc, int *, SACl_map)
 */
void SACf_ComputeIndexMap_( SAC_ND_KS_DEC_OUT_RC(int *, SACl_map));

extern 
/*
 * ND_FUN_DEC( SACf_ComputeExponentialMap_, void, 1, out_rc, double *, SACl_map)
 */
void SACf_ComputeExponentialMap_( SAC_ND_KS_DEC_OUT_RC(double *, SACl_map));

extern 
/*
 * ND_FUN_DEC( SACf_RootsOfUnity__d, void, 2, out_rc, double *, SACp_flat_226, in, double, SACl_dir)
 */
void SACf_RootsOfUnity__d( SAC_ND_KS_DEC_OUT_RC(double *, SACp_flat_226), double SACl_dir);

extern 
/*
 * ND_FUN_DEC( SACf_FFT1d__d__MAIN__cpx_8___MAIN__cpx_4_, void, 4, out_rc, double *, SACl_res, in, double, SACl_dir, in_rc, double *, SACl_v, in_rc, double *, SACl_rofu)
 */
void SACf_FFT1d__d__MAIN__cpx_8___MAIN__cpx_4_( SAC_ND_KS_DEC_OUT_RC(double *, SACl_res), double SACl_dir, SAC_ND_KS_DEC_IN_RC( double *, SACl_v), SAC_ND_KS_DEC_IN_RC( double *, SACl_rofu));

extern 
/*
 * ND_FUN_DEC( SACf_FFT1d__d__MAIN__cpx_16___MAIN__cpx_8_, void, 4, out_rc, double *, SACl_res, in, double, SACl_dir, in_rc, double *, SACl_v, in_rc, double *, SACl_rofu)
 */
void SACf_FFT1d__d__MAIN__cpx_16___MAIN__cpx_8_( SAC_ND_KS_DEC_OUT_RC(double *, SACl_res), double SACl_dir, SAC_ND_KS_DEC_IN_RC( double *, SACl_v), SAC_ND_KS_DEC_IN_RC( double *, SACl_rofu));

extern 
/*
 * ND_FUN_DEC( SACf_FFT1d__d__MAIN__cpx_32___MAIN__cpx_16_, void, 4, out_rc, double *, SACl_res, in, double, SACl_dir, in_rc, double *, SACl_v, in_rc, double *, SACl_rofu)
 */
void SACf_FFT1d__d__MAIN__cpx_32___MAIN__cpx_16_( SAC_ND_KS_DEC_OUT_RC(double *, SACl_res), double SACl_dir, SAC_ND_KS_DEC_IN_RC( double *, SACl_v), SAC_ND_KS_DEC_IN_RC( double *, SACl_rofu));

extern 
/*
 * ND_FUN_DEC( SACf_FFT1d__d__MAIN__cpx_64___MAIN__cpx_32_, void, 4, out_rc, double *, SACl_res, in, double, SACl_dir, in_rc, double *, SACl_v, in_rc, double *, SACl_rofu)
 */
void SACf_FFT1d__d__MAIN__cpx_64___MAIN__cpx_32_( SAC_ND_KS_DEC_OUT_RC(double *, SACl_res), double SACl_dir, SAC_ND_KS_DEC_IN_RC( double *, SACl_v), SAC_ND_KS_DEC_IN_RC( double *, SACl_rofu));

extern 
/*
 * ND_FUN_DEC( SACf_FFT1d__d__MAIN__cpx_128___MAIN__cpx_64_, void, 4, out_rc, double *, SACl_res, in, double, SACl_dir, in_rc, double *, SACl_v, in_rc, double *, SACl_rofu)
 */
void SACf_FFT1d__d__MAIN__cpx_128___MAIN__cpx_64_( SAC_ND_KS_DEC_OUT_RC(double *, SACl_res), double SACl_dir, SAC_ND_KS_DEC_IN_RC( double *, SACl_v), SAC_ND_KS_DEC_IN_RC( double *, SACl_rofu));

extern 
/*
 * ND_FUN_DEC( SACf_FFT1d_Slice__d__MAIN__cpx_128_32_128___MAIN__cpx_64_, void, 4, out_rc, double *, SACl_result, in, double, SACl_dir, in_rc, double *, SACl_a, in_rc, double *, SACl_rofu)
 */
void SACf_FFT1d_Slice__d__MAIN__cpx_128_32_128___MAIN__cpx_64_( SAC_ND_KS_DEC_OUT_RC(double *, SACl_result), double SACl_dir, SAC_ND_KS_DEC_IN_RC( double *, SACl_a), SAC_ND_KS_DEC_IN_RC( double *, SACl_rofu));

extern 
/*
 * ND_FUN_DEC( SACf_FFT1d_Slice__d__MAIN__cpx_128_128_32___MAIN__cpx_64_, void, 4, out_rc, double *, SACl_result, in, double, SACl_dir, in_rc, double *, SACl_a, in_rc, double *, SACl_rofu)
 */
void SACf_FFT1d_Slice__d__MAIN__cpx_128_128_32___MAIN__cpx_64_( SAC_ND_KS_DEC_OUT_RC(double *, SACl_result), double SACl_dir, SAC_ND_KS_DEC_IN_RC( double *, SACl_a), SAC_ND_KS_DEC_IN_RC( double *, SACl_rofu));

extern 
/*
 * ND_FUN_DEC( SACf_FFT1d_Slice__d__MAIN__cpx_32_128_128___MAIN__cpx_64_, void, 4, out_rc, double *, SACl_result, in, double, SACl_dir, in_rc, double *, SACl_a, in_rc, double *, SACl_rofu)
 */
void SACf_FFT1d_Slice__d__MAIN__cpx_32_128_128___MAIN__cpx_64_( SAC_ND_KS_DEC_OUT_RC(double *, SACl_result), double SACl_dir, SAC_ND_KS_DEC_IN_RC( double *, SACl_a), SAC_ND_KS_DEC_IN_RC( double *, SACl_rofu));

extern 
/*
 * ND_FUN_DEC( SACf_FFT3d_forward___MAIN__cpx_128_128_32___MAIN__cpx_64_, void, 3, out_rc, double *, SACl_d, in_rc, double *, SACl_a, in_rc, double *, SACl_rofu)
 */
void SACf_FFT3d_forward___MAIN__cpx_128_128_32___MAIN__cpx_64_( SAC_ND_KS_DEC_OUT_RC(double *, SACl_d), SAC_ND_KS_DEC_IN_RC( double *, SACl_a), SAC_ND_KS_DEC_IN_RC( double *, SACl_rofu));

extern 
/*
 * ND_FUN_DEC( SACf_CheckResult__i__MAIN__cpx_128_128_32_, void, 2, in, int, SACl_iter, in_rc, double *, SACl_X)
 */
void SACf_CheckResult__i__MAIN__cpx_128_128_32_( int SACl_iter, SAC_ND_KS_DEC_IN_RC( double *, SACl_X));

extern 
/*
 * ND_FUN_DEC( to_string, void, 3, out_rc, SACe_string, , in_rc, char *, SACl_A, in, int, SACl_LENGTH)
 */
void to_string(SAC_ND_KS_DEC_IMPORT_OUT_RC(SACe_string), SAC_ND_KS_DEC_IN_RC( char *, SACl_A), int SACl_LENGTH);



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
 * ND_FUN_DEC( SACf_GlobalObjInit_for_, void, 0)
 */
void SACf_GlobalObjInit_for_( int __argc, char *__argv[])
{ 
  SAC_INITGLOBALOBJECT_BEGIN( SAC_INIT_FLAG_TheWorld)
    
    /*
     * ND_FUN_AP( create_TheWorld, TheWorld, 0)
     */
    TheWorld = create_TheWorld();

  SAC_INITGLOBALOBJECT_END( );
  SAC_INITGLOBALOBJECT_BEGIN( SAC_INIT_FLAG_TheTerminal)
    
    /*
     * ND_FUN_AP( create_TheTerminal, TheTerminal, 0)
     */
    TheTerminal = create_TheTerminal();

  SAC_INITGLOBALOBJECT_END( );
  SAC_INITGLOBALOBJECT_BEGIN( SAC_INIT_FLAG_SACstdin)
    
    /*
     * ND_FUN_AP( create_stdin, SACstdin, 0)
     */
    SACstdin = create_stdin();

  SAC_INITGLOBALOBJECT_END( );
  SAC_INITGLOBALOBJECT_BEGIN( SAC_INIT_FLAG_SACstdout)
    
    /*
     * ND_FUN_AP( create_stdout, SACstdout, 0)
     */
    SACstdout = create_stdout();

  SAC_INITGLOBALOBJECT_END( );
  SAC_INITGLOBALOBJECT_BEGIN( SAC_INIT_FLAG_SACstderr)
    
    /*
     * ND_FUN_AP( create_stderr, SACstderr, 0)
     */
    SACstderr = create_stderr();

  SAC_INITGLOBALOBJECT_END( );
  SAC_INITGLOBALOBJECT_BEGIN( SAC_INIT_FLAG_TheFileSystem)
    
    /*
     * ND_FUN_AP( create_TheFileSystem, TheFileSystem, 0)
     */
    TheFileSystem = create_TheFileSystem();

  SAC_INITGLOBALOBJECT_END( );
  /* noop */
}


/*
 * ND_FUN_DEC( SACf__mul___MAIN__cpx_64___MAIN__cpx_64_, void, 3, out_rc, double *, SACp_flat_90, in_rc, double *, SACl_a, in_rc, double *, SACl_b)
 */
void SACf__mul___MAIN__cpx_64___MAIN__cpx_64_( SAC_ND_KS_DEC_OUT_RC(double *, SACp_flat_90), SAC_ND_KS_DEC_IN_RC( double *, SACl_a), SAC_ND_KS_DEC_IN_RC( double *, SACl_b))
{ 
  double SACp_wlt_769;
  
  /*
   * ND_KS_DECL_ARRAY( double, SACp_flat_90, 2, 64, 2)
   */
  double *SACp_flat_90;
  int SAC_ND_A_RC( SACp_flat_90);
  const int SAC_ND_A_SIZE( SACp_flat_90) = 64*2;
  const int SAC_ND_A_DIM( SACp_flat_90) = 2;
  const int SAC_ND_A_SHAPE( SACp_flat_90, 0) = 64;
  const int SAC_ND_A_SHAPE( SACp_flat_90, 1) = 2;

  
  /*
   * ND_KS_DECL_ARRAY( double, SACp_flat_89, 2, 64, 2)
   */
  double *SACp_flat_89;
  int SAC_ND_A_RC( SACp_flat_89);
  const int SAC_ND_A_SIZE( SACp_flat_89) = 64*2;
  const int SAC_ND_A_DIM( SACp_flat_89) = 2;
  const int SAC_ND_A_SHAPE( SACp_flat_89, 0) = 64;
  const int SAC_ND_A_SHAPE( SACp_flat_89, 1) = 2;

  double SACp_flat_81;
  double SACp_flat_82;
  double SACp_flat_84;
  double SACp_flat_85;
  double SACp_flat_86;
  double SACp_flat_87;
  int SACp_flat_88_64_2__;
  int SACp_type_564;
  int SACp_type_563;
  
  /*
   * ND_KS_DECL_ARRAY( int, SACp_flat_80_iv, 1, 2)
   */
  int *SACp_flat_80_iv;
  int SAC_ND_A_RC( SACp_flat_80_iv);
  const int SAC_ND_A_SIZE( SACp_flat_80_iv) = 2;
  const int SAC_ND_A_DIM( SACp_flat_80_iv) = 1;
  const int SAC_ND_A_SHAPE( SACp_flat_80_iv, 0) = 2;

  int SACp_flat_80_iv_64_2__;
  double SACl_val;
  double SACp_flat_72;
  double SACp_flat_73;
  double SACp_flat_74;
  double SACp_flat_75;
  double SACp_flat_76;
  double SACp_flat_78;
  int SACp_flat_79_64_2__;
  int SACl_lb_imag_64_2__;

  
  /*
   * ND_KS_DECL_ARRAY_ARG( SACl_a, 2, 64, 2)
   */
  const int SAC_ND_A_SIZE(SACl_a)=64*2;
  const int SAC_ND_A_DIM(SACl_a)=2;
  const int SAC_ND_A_SHAPE(SACl_a, 0)=64;
  const int SAC_ND_A_SHAPE(SACl_a, 1)=2;

  
  /*
   * ND_KS_DECL_ARRAY_ARG( SACl_b, 2, 64, 2)
   */
  const int SAC_ND_A_SIZE(SACl_b)=64*2;
  const int SAC_ND_A_DIM(SACl_b)=2;
  const int SAC_ND_A_SHAPE(SACl_b, 0)=64;
  const int SAC_ND_A_SHAPE(SACl_b, 1)=2;

  SACl_lb_imag_64_2__ = ((0 * 2) + 1); 
  SAC_ND_ALLOC_ARRAY( double, SACp_flat_89, 0)
  SAC_ND_INC_RC( SACp_flat_89, 1)
  SAC_PF_BEGIN_WITH( genarray)
    
    /*
     * WL_BEGIN__OFFSET( SACp_flat_89, SACp_flat_80_iv, 2)
     */
    {
      int SAC_WL_OFFSET( SACp_flat_89);
      int SAC_WL_MT_SCHEDULE_START( 0);
      int SAC_WL_MT_SCHEDULE_STOP( 0);
      int SAC_WL_MT_SCHEDULE_START( 1);
      int SAC_WL_MT_SCHEDULE_STOP( 1);

      
      /*
       * MT_SCHEDULER_BEGIN( 0, 2, 0, 0, 64, 2)
       */
      SAC_WL_MT_SCHEDULE_START( 0) = 0;
      SAC_WL_MT_SCHEDULE_STOP( 0) = 64;
      SAC_WL_MT_SCHEDULE_START( 1) = 0;
      SAC_WL_MT_SCHEDULE_STOP( 1) = 2;

      
      /*
       * WL_INIT_OFFSET( 2, SACp_flat_89, SACp_flat_80_iv, 2)
       */
      SAC_WL_OFFSET( SACp_flat_89)
        = SAC_WL_MT_SCHEDULE_START( 0) * SAC_ND_A_SHAPE( SACp_flat_89, 1)
        + SAC_WL_MT_SCHEDULE_START( 1);

      SAC_WL_STRIDE_LOOP0_BEGIN( 0, SACp_flat_80_iv, SACp_type_563, 0, 64, 1)
        SAC_WL_GRID_UNROLL_BEGIN( 0, SACp_flat_80_iv, SACp_type_563, 0, 1)
          SAC_WL_STRIDE_LOOP0_BEGIN( 1, SACp_flat_80_iv, SACp_type_564, 0, 1, 1)
            SAC_WL_GRID_UNROLL_BEGIN( 1, SACp_flat_80_iv, SACp_type_564, 0, 1)
              SAC_ND_KS_USE_GENVAR_OFFSET( SACp_flat_80_iv_64_2__, SACp_flat_89)
              SACp_flat_79_64_2__ = (SACp_flat_80_iv_64_2__ + SACl_lb_imag_64_2__); 
              SAC_ND_IDX_PSI_S( SACp_flat_79_64_2__, SACl_b, SACp_flat_78)
              SAC_ND_IDX_PSI_S( SACp_flat_79_64_2__, SACl_a, SACp_flat_76)
              SACp_flat_75 = (SACp_flat_76 * SACp_flat_78); 
              SAC_ND_IDX_PSI_S( SACp_flat_80_iv_64_2__, SACl_b, SACp_flat_74)
              SAC_ND_IDX_PSI_S( SACp_flat_80_iv_64_2__, SACl_a, SACp_flat_73)
              SACp_flat_72 = (SACp_flat_73 * SACp_flat_74); 
              SACl_val = (SACp_flat_72 - SACp_flat_75); 
              SACp_wlt_769 = SACl_val; 
              
              /*
               * WL_ASSIGN( 0, SACp_wlt_769, 2, SACp_flat_89, SACp_flat_80_iv, 2, SACp_type_563, SACp_type_564)
               */
              SAC_TR_WL_PRINT( ("index vector [%d, %d] (== offset %d) -- offset %d -- assign", SACp_type_563, SACp_type_564, ( SAC_ND_A_SHAPE( SACp_flat_89, 1) * SACp_type_563 + SACp_type_564 ), SAC_WL_OFFSET( SACp_flat_89)));
              SAC_ND_WRITE_ARRAY( SACp_flat_89, SAC_WL_OFFSET( SACp_flat_89)) = SACp_wlt_769;
              SAC_WL_OFFSET( SACp_flat_89)++;

            SAC_WL_GRID_UNROLL_END( 1, SACp_flat_80_iv, SACp_type_564, 0, 1)
          SAC_WL_STRIDE_LOOP_END( 1, SACp_flat_80_iv, SACp_type_564, 0, 1, 1)
          SAC_WL_STRIDE_LOOP0_BEGIN( 1, SACp_flat_80_iv, SACp_type_564, 1, 2, 1)
            SAC_WL_GRID_UNROLL_BEGIN( 1, SACp_flat_80_iv, SACp_type_564, 0, 1)
              SAC_ND_KS_USE_GENVAR_OFFSET( SACp_flat_80_iv_64_2__, SACp_flat_89)
              SACp_flat_88_64_2__ = (SACp_flat_80_iv_64_2__ - SACl_lb_imag_64_2__); 
              SAC_ND_IDX_PSI_S( SACp_flat_88_64_2__, SACl_b, SACp_flat_87)
              SAC_ND_IDX_PSI_S( SACp_flat_80_iv_64_2__, SACl_a, SACp_flat_86)
              SACp_flat_85 = (SACp_flat_86 * SACp_flat_87); 
              SAC_ND_IDX_PSI_S( SACp_flat_80_iv_64_2__, SACl_b, SACp_flat_84)
              SAC_ND_IDX_PSI_S( SACp_flat_88_64_2__, SACl_a, SACp_flat_82)
              SACp_flat_81 = (SACp_flat_82 * SACp_flat_84); 
              SACl_val = (SACp_flat_81 + SACp_flat_85); 
              
              /*
               * WL_ASSIGN( 0, SACl_val, 2, SACp_flat_89, SACp_flat_80_iv, 2, SACp_type_563, SACp_type_564)
               */
              SAC_TR_WL_PRINT( ("index vector [%d, %d] (== offset %d) -- offset %d -- assign", SACp_type_563, SACp_type_564, ( SAC_ND_A_SHAPE( SACp_flat_89, 1) * SACp_type_563 + SACp_type_564 ), SAC_WL_OFFSET( SACp_flat_89)));
              SAC_ND_WRITE_ARRAY( SACp_flat_89, SAC_WL_OFFSET( SACp_flat_89)) = SACl_val;
              SAC_WL_OFFSET( SACp_flat_89)++;

            SAC_WL_GRID_UNROLL_END( 1, SACp_flat_80_iv, SACp_type_564, 0, 1)
          SAC_WL_STRIDE_LOOP_END( 1, SACp_flat_80_iv, SACp_type_564, 1, 2, 1)
        SAC_WL_GRID_UNROLL_END( 0, SACp_flat_80_iv, SACp_type_563, 0, 1)
      SAC_WL_STRIDE_LOOP_END( 0, SACp_flat_80_iv, SACp_type_563, 0, 64, 1)
    
      /*
       * MT_SCHEDULER_END( 0, 2, 0, 0, 64, 2)
       */


    
      /*
       * WL_END__OFFSET( SACp_flat_89, SACp_flat_80_iv, 2)
       */
    }

  SAC_PF_END_WITH( genarray)
  SAC_ND_DEC_RC_FREE_ARRAY( SACl_a, 1)
  SAC_ND_DEC_RC_FREE_ARRAY( SACl_b, 1)
  SAC_ND_KS_ASSIGN_ARRAY( SACp_flat_89, SACp_flat_90)
  
  /*
   * ND_FUN_RET( , 1, out_rc, SACp_flat_90, SACp_flat_90)
   */
  SAC_ND_KS_RET_OUT_RC( SACp_flat_90, SACp_flat_90);
  

}


/*
 * ND_FUN_DEC( SACf__mul___MAIN__cpx_32___MAIN__cpx_32_, void, 3, out_rc, double *, SACp_flat_90, in_rc, double *, SACl_a, in_rc, double *, SACl_b)
 */
void SACf__mul___MAIN__cpx_32___MAIN__cpx_32_( SAC_ND_KS_DEC_OUT_RC(double *, SACp_flat_90), SAC_ND_KS_DEC_IN_RC( double *, SACl_a), SAC_ND_KS_DEC_IN_RC( double *, SACl_b))
{ 
  double SACp_wlt_771;
  
  /*
   * ND_KS_DECL_ARRAY( double, SACp_flat_90, 2, 32, 2)
   */
  double *SACp_flat_90;
  int SAC_ND_A_RC( SACp_flat_90);
  const int SAC_ND_A_SIZE( SACp_flat_90) = 32*2;
  const int SAC_ND_A_DIM( SACp_flat_90) = 2;
  const int SAC_ND_A_SHAPE( SACp_flat_90, 0) = 32;
  const int SAC_ND_A_SHAPE( SACp_flat_90, 1) = 2;

  
  /*
   * ND_KS_DECL_ARRAY( double, SACp_flat_89, 2, 32, 2)
   */
  double *SACp_flat_89;
  int SAC_ND_A_RC( SACp_flat_89);
  const int SAC_ND_A_SIZE( SACp_flat_89) = 32*2;
  const int SAC_ND_A_DIM( SACp_flat_89) = 2;
  const int SAC_ND_A_SHAPE( SACp_flat_89, 0) = 32;
  const int SAC_ND_A_SHAPE( SACp_flat_89, 1) = 2;

  double SACp_flat_81;
  double SACp_flat_82;
  double SACp_flat_84;
  double SACp_flat_85;
  double SACp_flat_86;
  double SACp_flat_87;
  int SACp_flat_88_32_2__;
  int SACp_type_545;
  int SACp_type_544;
  
  /*
   * ND_KS_DECL_ARRAY( int, SACp_flat_80_iv, 1, 2)
   */
  int *SACp_flat_80_iv;
  int SAC_ND_A_RC( SACp_flat_80_iv);
  const int SAC_ND_A_SIZE( SACp_flat_80_iv) = 2;
  const int SAC_ND_A_DIM( SACp_flat_80_iv) = 1;
  const int SAC_ND_A_SHAPE( SACp_flat_80_iv, 0) = 2;

  int SACp_flat_80_iv_32_2__;
  double SACl_val;
  double SACp_flat_72;
  double SACp_flat_73;
  double SACp_flat_74;
  double SACp_flat_75;
  double SACp_flat_76;
  double SACp_flat_78;
  int SACp_flat_79_32_2__;
  int SACl_lb_imag_32_2__;

  
  /*
   * ND_KS_DECL_ARRAY_ARG( SACl_a, 2, 32, 2)
   */
  const int SAC_ND_A_SIZE(SACl_a)=32*2;
  const int SAC_ND_A_DIM(SACl_a)=2;
  const int SAC_ND_A_SHAPE(SACl_a, 0)=32;
  const int SAC_ND_A_SHAPE(SACl_a, 1)=2;

  
  /*
   * ND_KS_DECL_ARRAY_ARG( SACl_b, 2, 32, 2)
   */
  const int SAC_ND_A_SIZE(SACl_b)=32*2;
  const int SAC_ND_A_DIM(SACl_b)=2;
  const int SAC_ND_A_SHAPE(SACl_b, 0)=32;
  const int SAC_ND_A_SHAPE(SACl_b, 1)=2;

  SACl_lb_imag_32_2__ = ((0 * 2) + 1); 
  SAC_ND_ALLOC_ARRAY( double, SACp_flat_89, 0)
  SAC_ND_INC_RC( SACp_flat_89, 1)
  SAC_PF_BEGIN_WITH( genarray)
    
    /*
     * WL_BEGIN__OFFSET( SACp_flat_89, SACp_flat_80_iv, 2)
     */
    {
      int SAC_WL_OFFSET( SACp_flat_89);
      int SAC_WL_MT_SCHEDULE_START( 0);
      int SAC_WL_MT_SCHEDULE_STOP( 0);
      int SAC_WL_MT_SCHEDULE_START( 1);
      int SAC_WL_MT_SCHEDULE_STOP( 1);

      
      /*
       * MT_SCHEDULER_BEGIN( 0, 2, 0, 0, 32, 2)
       */
      SAC_WL_MT_SCHEDULE_START( 0) = 0;
      SAC_WL_MT_SCHEDULE_STOP( 0) = 32;
      SAC_WL_MT_SCHEDULE_START( 1) = 0;
      SAC_WL_MT_SCHEDULE_STOP( 1) = 2;

      
      /*
       * WL_INIT_OFFSET( 2, SACp_flat_89, SACp_flat_80_iv, 2)
       */
      SAC_WL_OFFSET( SACp_flat_89)
        = SAC_WL_MT_SCHEDULE_START( 0) * SAC_ND_A_SHAPE( SACp_flat_89, 1)
        + SAC_WL_MT_SCHEDULE_START( 1);

      SAC_WL_STRIDE_LOOP0_BEGIN( 0, SACp_flat_80_iv, SACp_type_544, 0, 32, 1)
        SAC_WL_GRID_UNROLL_BEGIN( 0, SACp_flat_80_iv, SACp_type_544, 0, 1)
          SAC_WL_STRIDE_LOOP0_BEGIN( 1, SACp_flat_80_iv, SACp_type_545, 0, 1, 1)
            SAC_WL_GRID_UNROLL_BEGIN( 1, SACp_flat_80_iv, SACp_type_545, 0, 1)
              SAC_ND_KS_USE_GENVAR_OFFSET( SACp_flat_80_iv_32_2__, SACp_flat_89)
              SACp_flat_79_32_2__ = (SACp_flat_80_iv_32_2__ + SACl_lb_imag_32_2__); 
              SAC_ND_IDX_PSI_S( SACp_flat_79_32_2__, SACl_b, SACp_flat_78)
              SAC_ND_IDX_PSI_S( SACp_flat_79_32_2__, SACl_a, SACp_flat_76)
              SACp_flat_75 = (SACp_flat_76 * SACp_flat_78); 
              SAC_ND_IDX_PSI_S( SACp_flat_80_iv_32_2__, SACl_b, SACp_flat_74)
              SAC_ND_IDX_PSI_S( SACp_flat_80_iv_32_2__, SACl_a, SACp_flat_73)
              SACp_flat_72 = (SACp_flat_73 * SACp_flat_74); 
              SACl_val = (SACp_flat_72 - SACp_flat_75); 
              SACp_wlt_771 = SACl_val; 
              
              /*
               * WL_ASSIGN( 0, SACp_wlt_771, 2, SACp_flat_89, SACp_flat_80_iv, 2, SACp_type_544, SACp_type_545)
               */
              SAC_TR_WL_PRINT( ("index vector [%d, %d] (== offset %d) -- offset %d -- assign", SACp_type_544, SACp_type_545, ( SAC_ND_A_SHAPE( SACp_flat_89, 1) * SACp_type_544 + SACp_type_545 ), SAC_WL_OFFSET( SACp_flat_89)));
              SAC_ND_WRITE_ARRAY( SACp_flat_89, SAC_WL_OFFSET( SACp_flat_89)) = SACp_wlt_771;
              SAC_WL_OFFSET( SACp_flat_89)++;

            SAC_WL_GRID_UNROLL_END( 1, SACp_flat_80_iv, SACp_type_545, 0, 1)
          SAC_WL_STRIDE_LOOP_END( 1, SACp_flat_80_iv, SACp_type_545, 0, 1, 1)
          SAC_WL_STRIDE_LOOP0_BEGIN( 1, SACp_flat_80_iv, SACp_type_545, 1, 2, 1)
            SAC_WL_GRID_UNROLL_BEGIN( 1, SACp_flat_80_iv, SACp_type_545, 0, 1)
              SAC_ND_KS_USE_GENVAR_OFFSET( SACp_flat_80_iv_32_2__, SACp_flat_89)
              SACp_flat_88_32_2__ = (SACp_flat_80_iv_32_2__ - SACl_lb_imag_32_2__); 
              SAC_ND_IDX_PSI_S( SACp_flat_88_32_2__, SACl_b, SACp_flat_87)
              SAC_ND_IDX_PSI_S( SACp_flat_80_iv_32_2__, SACl_a, SACp_flat_86)
              SACp_flat_85 = (SACp_flat_86 * SACp_flat_87); 
              SAC_ND_IDX_PSI_S( SACp_flat_80_iv_32_2__, SACl_b, SACp_flat_84)
              SAC_ND_IDX_PSI_S( SACp_flat_88_32_2__, SACl_a, SACp_flat_82)
              SACp_flat_81 = (SACp_flat_82 * SACp_flat_84); 
              SACl_val = (SACp_flat_81 + SACp_flat_85); 
              
              /*
               * WL_ASSIGN( 0, SACl_val, 2, SACp_flat_89, SACp_flat_80_iv, 2, SACp_type_544, SACp_type_545)
               */
              SAC_TR_WL_PRINT( ("index vector [%d, %d] (== offset %d) -- offset %d -- assign", SACp_type_544, SACp_type_545, ( SAC_ND_A_SHAPE( SACp_flat_89, 1) * SACp_type_544 + SACp_type_545 ), SAC_WL_OFFSET( SACp_flat_89)));
              SAC_ND_WRITE_ARRAY( SACp_flat_89, SAC_WL_OFFSET( SACp_flat_89)) = SACl_val;
              SAC_WL_OFFSET( SACp_flat_89)++;

            SAC_WL_GRID_UNROLL_END( 1, SACp_flat_80_iv, SACp_type_545, 0, 1)
          SAC_WL_STRIDE_LOOP_END( 1, SACp_flat_80_iv, SACp_type_545, 1, 2, 1)
        SAC_WL_GRID_UNROLL_END( 0, SACp_flat_80_iv, SACp_type_544, 0, 1)
      SAC_WL_STRIDE_LOOP_END( 0, SACp_flat_80_iv, SACp_type_544, 0, 32, 1)
    
      /*
       * MT_SCHEDULER_END( 0, 2, 0, 0, 32, 2)
       */


    
      /*
       * WL_END__OFFSET( SACp_flat_89, SACp_flat_80_iv, 2)
       */
    }

  SAC_PF_END_WITH( genarray)
  SAC_ND_DEC_RC_FREE_ARRAY( SACl_a, 1)
  SAC_ND_DEC_RC_FREE_ARRAY( SACl_b, 1)
  SAC_ND_KS_ASSIGN_ARRAY( SACp_flat_89, SACp_flat_90)
  
  /*
   * ND_FUN_RET( , 1, out_rc, SACp_flat_90, SACp_flat_90)
   */
  SAC_ND_KS_RET_OUT_RC( SACp_flat_90, SACp_flat_90);
  

}


/*
 * ND_FUN_DEC( SACf__mul___MAIN__cpx_16___MAIN__cpx_16_, void, 3, out_rc, double *, SACp_flat_90, in_rc, double *, SACl_a, in_rc, double *, SACl_b)
 */
void SACf__mul___MAIN__cpx_16___MAIN__cpx_16_( SAC_ND_KS_DEC_OUT_RC(double *, SACp_flat_90), SAC_ND_KS_DEC_IN_RC( double *, SACl_a), SAC_ND_KS_DEC_IN_RC( double *, SACl_b))
{ 
  double SACp_wlt_773;
  
  /*
   * ND_KS_DECL_ARRAY( double, SACp_flat_90, 2, 16, 2)
   */
  double *SACp_flat_90;
  int SAC_ND_A_RC( SACp_flat_90);
  const int SAC_ND_A_SIZE( SACp_flat_90) = 16*2;
  const int SAC_ND_A_DIM( SACp_flat_90) = 2;
  const int SAC_ND_A_SHAPE( SACp_flat_90, 0) = 16;
  const int SAC_ND_A_SHAPE( SACp_flat_90, 1) = 2;

  
  /*
   * ND_KS_DECL_ARRAY( double, SACp_flat_89, 2, 16, 2)
   */
  double *SACp_flat_89;
  int SAC_ND_A_RC( SACp_flat_89);
  const int SAC_ND_A_SIZE( SACp_flat_89) = 16*2;
  const int SAC_ND_A_DIM( SACp_flat_89) = 2;
  const int SAC_ND_A_SHAPE( SACp_flat_89, 0) = 16;
  const int SAC_ND_A_SHAPE( SACp_flat_89, 1) = 2;

  double SACp_flat_81;
  double SACp_flat_82;
  double SACp_flat_84;
  double SACp_flat_85;
  double SACp_flat_86;
  double SACp_flat_87;
  int SACp_flat_88_16_2__;
  int SACp_type_526;
  int SACp_type_525;
  
  /*
   * ND_KS_DECL_ARRAY( int, SACp_flat_80_iv, 1, 2)
   */
  int *SACp_flat_80_iv;
  int SAC_ND_A_RC( SACp_flat_80_iv);
  const int SAC_ND_A_SIZE( SACp_flat_80_iv) = 2;
  const int SAC_ND_A_DIM( SACp_flat_80_iv) = 1;
  const int SAC_ND_A_SHAPE( SACp_flat_80_iv, 0) = 2;

  int SACp_flat_80_iv_16_2__;
  double SACl_val;
  double SACp_flat_72;
  double SACp_flat_73;
  double SACp_flat_74;
  double SACp_flat_75;
  double SACp_flat_76;
  double SACp_flat_78;
  int SACp_flat_79_16_2__;
  int SACl_lb_imag_16_2__;

  
  /*
   * ND_KS_DECL_ARRAY_ARG( SACl_a, 2, 16, 2)
   */
  const int SAC_ND_A_SIZE(SACl_a)=16*2;
  const int SAC_ND_A_DIM(SACl_a)=2;
  const int SAC_ND_A_SHAPE(SACl_a, 0)=16;
  const int SAC_ND_A_SHAPE(SACl_a, 1)=2;

  
  /*
   * ND_KS_DECL_ARRAY_ARG( SACl_b, 2, 16, 2)
   */
  const int SAC_ND_A_SIZE(SACl_b)=16*2;
  const int SAC_ND_A_DIM(SACl_b)=2;
  const int SAC_ND_A_SHAPE(SACl_b, 0)=16;
  const int SAC_ND_A_SHAPE(SACl_b, 1)=2;

  SACl_lb_imag_16_2__ = ((0 * 2) + 1); 
  SAC_ND_ALLOC_ARRAY( double, SACp_flat_89, 0)
  SAC_ND_INC_RC( SACp_flat_89, 1)
  SAC_PF_BEGIN_WITH( genarray)
    
    /*
     * WL_BEGIN__OFFSET( SACp_flat_89, SACp_flat_80_iv, 2)
     */
    {
      int SAC_WL_OFFSET( SACp_flat_89);
      int SAC_WL_MT_SCHEDULE_START( 0);
      int SAC_WL_MT_SCHEDULE_STOP( 0);
      int SAC_WL_MT_SCHEDULE_START( 1);
      int SAC_WL_MT_SCHEDULE_STOP( 1);

      
      /*
       * MT_SCHEDULER_BEGIN( 0, 2, 0, 0, 16, 2)
       */
      SAC_WL_MT_SCHEDULE_START( 0) = 0;
      SAC_WL_MT_SCHEDULE_STOP( 0) = 16;
      SAC_WL_MT_SCHEDULE_START( 1) = 0;
      SAC_WL_MT_SCHEDULE_STOP( 1) = 2;

      
      /*
       * WL_INIT_OFFSET( 2, SACp_flat_89, SACp_flat_80_iv, 2)
       */
      SAC_WL_OFFSET( SACp_flat_89)
        = SAC_WL_MT_SCHEDULE_START( 0) * SAC_ND_A_SHAPE( SACp_flat_89, 1)
        + SAC_WL_MT_SCHEDULE_START( 1);

      SAC_WL_STRIDE_LOOP0_BEGIN( 0, SACp_flat_80_iv, SACp_type_525, 0, 16, 1)
        SAC_WL_GRID_UNROLL_BEGIN( 0, SACp_flat_80_iv, SACp_type_525, 0, 1)
          SAC_WL_STRIDE_LOOP0_BEGIN( 1, SACp_flat_80_iv, SACp_type_526, 0, 1, 1)
            SAC_WL_GRID_UNROLL_BEGIN( 1, SACp_flat_80_iv, SACp_type_526, 0, 1)
              SAC_ND_KS_USE_GENVAR_OFFSET( SACp_flat_80_iv_16_2__, SACp_flat_89)
              SACp_flat_79_16_2__ = (SACp_flat_80_iv_16_2__ + SACl_lb_imag_16_2__); 
              SAC_ND_IDX_PSI_S( SACp_flat_79_16_2__, SACl_b, SACp_flat_78)
              SAC_ND_IDX_PSI_S( SACp_flat_79_16_2__, SACl_a, SACp_flat_76)
              SACp_flat_75 = (SACp_flat_76 * SACp_flat_78); 
              SAC_ND_IDX_PSI_S( SACp_flat_80_iv_16_2__, SACl_b, SACp_flat_74)
              SAC_ND_IDX_PSI_S( SACp_flat_80_iv_16_2__, SACl_a, SACp_flat_73)
              SACp_flat_72 = (SACp_flat_73 * SACp_flat_74); 
              SACl_val = (SACp_flat_72 - SACp_flat_75); 
              SACp_wlt_773 = SACl_val; 
              
              /*
               * WL_ASSIGN( 0, SACp_wlt_773, 2, SACp_flat_89, SACp_flat_80_iv, 2, SACp_type_525, SACp_type_526)
               */
              SAC_TR_WL_PRINT( ("index vector [%d, %d] (== offset %d) -- offset %d -- assign", SACp_type_525, SACp_type_526, ( SAC_ND_A_SHAPE( SACp_flat_89, 1) * SACp_type_525 + SACp_type_526 ), SAC_WL_OFFSET( SACp_flat_89)));
              SAC_ND_WRITE_ARRAY( SACp_flat_89, SAC_WL_OFFSET( SACp_flat_89)) = SACp_wlt_773;
              SAC_WL_OFFSET( SACp_flat_89)++;

            SAC_WL_GRID_UNROLL_END( 1, SACp_flat_80_iv, SACp_type_526, 0, 1)
          SAC_WL_STRIDE_LOOP_END( 1, SACp_flat_80_iv, SACp_type_526, 0, 1, 1)
          SAC_WL_STRIDE_LOOP0_BEGIN( 1, SACp_flat_80_iv, SACp_type_526, 1, 2, 1)
            SAC_WL_GRID_UNROLL_BEGIN( 1, SACp_flat_80_iv, SACp_type_526, 0, 1)
              SAC_ND_KS_USE_GENVAR_OFFSET( SACp_flat_80_iv_16_2__, SACp_flat_89)
              SACp_flat_88_16_2__ = (SACp_flat_80_iv_16_2__ - SACl_lb_imag_16_2__); 
              SAC_ND_IDX_PSI_S( SACp_flat_88_16_2__, SACl_b, SACp_flat_87)
              SAC_ND_IDX_PSI_S( SACp_flat_80_iv_16_2__, SACl_a, SACp_flat_86)
              SACp_flat_85 = (SACp_flat_86 * SACp_flat_87); 
              SAC_ND_IDX_PSI_S( SACp_flat_80_iv_16_2__, SACl_b, SACp_flat_84)
              SAC_ND_IDX_PSI_S( SACp_flat_88_16_2__, SACl_a, SACp_flat_82)
              SACp_flat_81 = (SACp_flat_82 * SACp_flat_84); 
              SACl_val = (SACp_flat_81 + SACp_flat_85); 
              
              /*
               * WL_ASSIGN( 0, SACl_val, 2, SACp_flat_89, SACp_flat_80_iv, 2, SACp_type_525, SACp_type_526)
               */
              SAC_TR_WL_PRINT( ("index vector [%d, %d] (== offset %d) -- offset %d -- assign", SACp_type_525, SACp_type_526, ( SAC_ND_A_SHAPE( SACp_flat_89, 1) * SACp_type_525 + SACp_type_526 ), SAC_WL_OFFSET( SACp_flat_89)));
              SAC_ND_WRITE_ARRAY( SACp_flat_89, SAC_WL_OFFSET( SACp_flat_89)) = SACl_val;
              SAC_WL_OFFSET( SACp_flat_89)++;

            SAC_WL_GRID_UNROLL_END( 1, SACp_flat_80_iv, SACp_type_526, 0, 1)
          SAC_WL_STRIDE_LOOP_END( 1, SACp_flat_80_iv, SACp_type_526, 1, 2, 1)
        SAC_WL_GRID_UNROLL_END( 0, SACp_flat_80_iv, SACp_type_525, 0, 1)
      SAC_WL_STRIDE_LOOP_END( 0, SACp_flat_80_iv, SACp_type_525, 0, 16, 1)
    
      /*
       * MT_SCHEDULER_END( 0, 2, 0, 0, 16, 2)
       */


    
      /*
       * WL_END__OFFSET( SACp_flat_89, SACp_flat_80_iv, 2)
       */
    }

  SAC_PF_END_WITH( genarray)
  SAC_ND_DEC_RC_FREE_ARRAY( SACl_a, 1)
  SAC_ND_DEC_RC_FREE_ARRAY( SACl_b, 1)
  SAC_ND_KS_ASSIGN_ARRAY( SACp_flat_89, SACp_flat_90)
  
  /*
   * ND_FUN_RET( , 1, out_rc, SACp_flat_90, SACp_flat_90)
   */
  SAC_ND_KS_RET_OUT_RC( SACp_flat_90, SACp_flat_90);
  

}


/*
 * ND_FUN_DEC( SACf__mul___MAIN__cpx_8___MAIN__cpx_8_, void, 3, out_rc, double *, SACp_flat_90, in_rc, double *, SACl_a, in_rc, double *, SACl_b)
 */
void SACf__mul___MAIN__cpx_8___MAIN__cpx_8_( SAC_ND_KS_DEC_OUT_RC(double *, SACp_flat_90), SAC_ND_KS_DEC_IN_RC( double *, SACl_a), SAC_ND_KS_DEC_IN_RC( double *, SACl_b))
{ 
  double SACp_wlt_775;
  
  /*
   * ND_KS_DECL_ARRAY( double, SACp_flat_90, 2, 8, 2)
   */
  double *SACp_flat_90;
  int SAC_ND_A_RC( SACp_flat_90);
  const int SAC_ND_A_SIZE( SACp_flat_90) = 8*2;
  const int SAC_ND_A_DIM( SACp_flat_90) = 2;
  const int SAC_ND_A_SHAPE( SACp_flat_90, 0) = 8;
  const int SAC_ND_A_SHAPE( SACp_flat_90, 1) = 2;

  
  /*
   * ND_KS_DECL_ARRAY( double, SACp_flat_89, 2, 8, 2)
   */
  double *SACp_flat_89;
  int SAC_ND_A_RC( SACp_flat_89);
  const int SAC_ND_A_SIZE( SACp_flat_89) = 8*2;
  const int SAC_ND_A_DIM( SACp_flat_89) = 2;
  const int SAC_ND_A_SHAPE( SACp_flat_89, 0) = 8;
  const int SAC_ND_A_SHAPE( SACp_flat_89, 1) = 2;

  double SACp_flat_81;
  double SACp_flat_82;
  double SACp_flat_84;
  double SACp_flat_85;
  double SACp_flat_86;
  double SACp_flat_87;
  int SACp_flat_88_8_2__;
  int SACp_type_507;
  int SACp_type_506;
  
  /*
   * ND_KS_DECL_ARRAY( int, SACp_flat_80_iv, 1, 2)
   */
  int *SACp_flat_80_iv;
  int SAC_ND_A_RC( SACp_flat_80_iv);
  const int SAC_ND_A_SIZE( SACp_flat_80_iv) = 2;
  const int SAC_ND_A_DIM( SACp_flat_80_iv) = 1;
  const int SAC_ND_A_SHAPE( SACp_flat_80_iv, 0) = 2;

  int SACp_flat_80_iv_8_2__;
  double SACl_val;
  double SACp_flat_72;
  double SACp_flat_73;
  double SACp_flat_74;
  double SACp_flat_75;
  double SACp_flat_76;
  double SACp_flat_78;
  int SACp_flat_79_8_2__;
  int SACl_lb_imag_8_2__;

  
  /*
   * ND_KS_DECL_ARRAY_ARG( SACl_a, 2, 8, 2)
   */
  const int SAC_ND_A_SIZE(SACl_a)=8*2;
  const int SAC_ND_A_DIM(SACl_a)=2;
  const int SAC_ND_A_SHAPE(SACl_a, 0)=8;
  const int SAC_ND_A_SHAPE(SACl_a, 1)=2;

  
  /*
   * ND_KS_DECL_ARRAY_ARG( SACl_b, 2, 8, 2)
   */
  const int SAC_ND_A_SIZE(SACl_b)=8*2;
  const int SAC_ND_A_DIM(SACl_b)=2;
  const int SAC_ND_A_SHAPE(SACl_b, 0)=8;
  const int SAC_ND_A_SHAPE(SACl_b, 1)=2;

  SACl_lb_imag_8_2__ = ((0 * 2) + 1); 
  SAC_ND_ALLOC_ARRAY( double, SACp_flat_89, 0)
  SAC_ND_INC_RC( SACp_flat_89, 1)
  SAC_PF_BEGIN_WITH( genarray)
    
    /*
     * WL_BEGIN__OFFSET( SACp_flat_89, SACp_flat_80_iv, 2)
     */
    {
      int SAC_WL_OFFSET( SACp_flat_89);
      int SAC_WL_MT_SCHEDULE_START( 0);
      int SAC_WL_MT_SCHEDULE_STOP( 0);
      int SAC_WL_MT_SCHEDULE_START( 1);
      int SAC_WL_MT_SCHEDULE_STOP( 1);

      
      /*
       * MT_SCHEDULER_BEGIN( 0, 2, 0, 0, 8, 2)
       */
      SAC_WL_MT_SCHEDULE_START( 0) = 0;
      SAC_WL_MT_SCHEDULE_STOP( 0) = 8;
      SAC_WL_MT_SCHEDULE_START( 1) = 0;
      SAC_WL_MT_SCHEDULE_STOP( 1) = 2;

      
      /*
       * WL_INIT_OFFSET( 2, SACp_flat_89, SACp_flat_80_iv, 2)
       */
      SAC_WL_OFFSET( SACp_flat_89)
        = SAC_WL_MT_SCHEDULE_START( 0) * SAC_ND_A_SHAPE( SACp_flat_89, 1)
        + SAC_WL_MT_SCHEDULE_START( 1);

      SAC_WL_STRIDE_LOOP0_BEGIN( 0, SACp_flat_80_iv, SACp_type_506, 0, 8, 1)
        SAC_WL_GRID_UNROLL_BEGIN( 0, SACp_flat_80_iv, SACp_type_506, 0, 1)
          SAC_WL_STRIDE_LOOP0_BEGIN( 1, SACp_flat_80_iv, SACp_type_507, 0, 1, 1)
            SAC_WL_GRID_UNROLL_BEGIN( 1, SACp_flat_80_iv, SACp_type_507, 0, 1)
              SAC_ND_KS_USE_GENVAR_OFFSET( SACp_flat_80_iv_8_2__, SACp_flat_89)
              SACp_flat_79_8_2__ = (SACp_flat_80_iv_8_2__ + SACl_lb_imag_8_2__); 
              SAC_ND_IDX_PSI_S( SACp_flat_79_8_2__, SACl_b, SACp_flat_78)
              SAC_ND_IDX_PSI_S( SACp_flat_79_8_2__, SACl_a, SACp_flat_76)
              SACp_flat_75 = (SACp_flat_76 * SACp_flat_78); 
              SAC_ND_IDX_PSI_S( SACp_flat_80_iv_8_2__, SACl_b, SACp_flat_74)
              SAC_ND_IDX_PSI_S( SACp_flat_80_iv_8_2__, SACl_a, SACp_flat_73)
              SACp_flat_72 = (SACp_flat_73 * SACp_flat_74); 
              SACl_val = (SACp_flat_72 - SACp_flat_75); 
              SACp_wlt_775 = SACl_val; 
              
              /*
               * WL_ASSIGN( 0, SACp_wlt_775, 2, SACp_flat_89, SACp_flat_80_iv, 2, SACp_type_506, SACp_type_507)
               */
              SAC_TR_WL_PRINT( ("index vector [%d, %d] (== offset %d) -- offset %d -- assign", SACp_type_506, SACp_type_507, ( SAC_ND_A_SHAPE( SACp_flat_89, 1) * SACp_type_506 + SACp_type_507 ), SAC_WL_OFFSET( SACp_flat_89)));
              SAC_ND_WRITE_ARRAY( SACp_flat_89, SAC_WL_OFFSET( SACp_flat_89)) = SACp_wlt_775;
              SAC_WL_OFFSET( SACp_flat_89)++;

            SAC_WL_GRID_UNROLL_END( 1, SACp_flat_80_iv, SACp_type_507, 0, 1)
          SAC_WL_STRIDE_LOOP_END( 1, SACp_flat_80_iv, SACp_type_507, 0, 1, 1)
          SAC_WL_STRIDE_LOOP0_BEGIN( 1, SACp_flat_80_iv, SACp_type_507, 1, 2, 1)
            SAC_WL_GRID_UNROLL_BEGIN( 1, SACp_flat_80_iv, SACp_type_507, 0, 1)
              SAC_ND_KS_USE_GENVAR_OFFSET( SACp_flat_80_iv_8_2__, SACp_flat_89)
              SACp_flat_88_8_2__ = (SACp_flat_80_iv_8_2__ - SACl_lb_imag_8_2__); 
              SAC_ND_IDX_PSI_S( SACp_flat_88_8_2__, SACl_b, SACp_flat_87)
              SAC_ND_IDX_PSI_S( SACp_flat_80_iv_8_2__, SACl_a, SACp_flat_86)
              SACp_flat_85 = (SACp_flat_86 * SACp_flat_87); 
              SAC_ND_IDX_PSI_S( SACp_flat_80_iv_8_2__, SACl_b, SACp_flat_84)
              SAC_ND_IDX_PSI_S( SACp_flat_88_8_2__, SACl_a, SACp_flat_82)
              SACp_flat_81 = (SACp_flat_82 * SACp_flat_84); 
              SACl_val = (SACp_flat_81 + SACp_flat_85); 
              
              /*
               * WL_ASSIGN( 0, SACl_val, 2, SACp_flat_89, SACp_flat_80_iv, 2, SACp_type_506, SACp_type_507)
               */
              SAC_TR_WL_PRINT( ("index vector [%d, %d] (== offset %d) -- offset %d -- assign", SACp_type_506, SACp_type_507, ( SAC_ND_A_SHAPE( SACp_flat_89, 1) * SACp_type_506 + SACp_type_507 ), SAC_WL_OFFSET( SACp_flat_89)));
              SAC_ND_WRITE_ARRAY( SACp_flat_89, SAC_WL_OFFSET( SACp_flat_89)) = SACl_val;
              SAC_WL_OFFSET( SACp_flat_89)++;

            SAC_WL_GRID_UNROLL_END( 1, SACp_flat_80_iv, SACp_type_507, 0, 1)
          SAC_WL_STRIDE_LOOP_END( 1, SACp_flat_80_iv, SACp_type_507, 1, 2, 1)
        SAC_WL_GRID_UNROLL_END( 0, SACp_flat_80_iv, SACp_type_506, 0, 1)
      SAC_WL_STRIDE_LOOP_END( 0, SACp_flat_80_iv, SACp_type_506, 0, 8, 1)
    
      /*
       * MT_SCHEDULER_END( 0, 2, 0, 0, 8, 2)
       */


    
      /*
       * WL_END__OFFSET( SACp_flat_89, SACp_flat_80_iv, 2)
       */
    }

  SAC_PF_END_WITH( genarray)
  SAC_ND_DEC_RC_FREE_ARRAY( SACl_a, 1)
  SAC_ND_DEC_RC_FREE_ARRAY( SACl_b, 1)
  SAC_ND_KS_ASSIGN_ARRAY( SACp_flat_89, SACp_flat_90)
  
  /*
   * ND_FUN_RET( , 1, out_rc, SACp_flat_90, SACp_flat_90)
   */
  SAC_ND_KS_RET_OUT_RC( SACp_flat_90, SACp_flat_90);
  

}


/*
 * ND_FUN_DEC( SACf__mul___MAIN__cpx_4___MAIN__cpx_4_, void, 3, out_rc, double *, SACp_flat_90, in_rc, double *, SACl_a, in_rc, double *, SACl_b)
 */
void SACf__mul___MAIN__cpx_4___MAIN__cpx_4_( SAC_ND_KS_DEC_OUT_RC(double *, SACp_flat_90), SAC_ND_KS_DEC_IN_RC( double *, SACl_a), SAC_ND_KS_DEC_IN_RC( double *, SACl_b))
{ 
  
  /*
   * ND_KS_DECL_ARRAY( double, SACp_pcomp_928__flat_89, 2, 4, 2)
   */
  double *SACp_pcomp_928__flat_89;
  int SAC_ND_A_RC( SACp_pcomp_928__flat_89);
  const int SAC_ND_A_SIZE( SACp_pcomp_928__flat_89) = 4*2;
  const int SAC_ND_A_DIM( SACp_pcomp_928__flat_89) = 2;
  const int SAC_ND_A_SHAPE( SACp_pcomp_928__flat_89, 0) = 4;
  const int SAC_ND_A_SHAPE( SACp_pcomp_928__flat_89, 1) = 2;

  
  /*
   * ND_KS_DECL_ARRAY( double, SACp_pcomp_927__flat_89, 2, 4, 2)
   */
  double *SACp_pcomp_927__flat_89;
  int SAC_ND_A_RC( SACp_pcomp_927__flat_89);
  const int SAC_ND_A_SIZE( SACp_pcomp_927__flat_89) = 4*2;
  const int SAC_ND_A_DIM( SACp_pcomp_927__flat_89) = 2;
  const int SAC_ND_A_SHAPE( SACp_pcomp_927__flat_89, 0) = 4;
  const int SAC_ND_A_SHAPE( SACp_pcomp_927__flat_89, 1) = 2;

  
  /*
   * ND_KS_DECL_ARRAY( double, SACp_pcomp_926__flat_89, 2, 4, 2)
   */
  double *SACp_pcomp_926__flat_89;
  int SAC_ND_A_RC( SACp_pcomp_926__flat_89);
  const int SAC_ND_A_SIZE( SACp_pcomp_926__flat_89) = 4*2;
  const int SAC_ND_A_DIM( SACp_pcomp_926__flat_89) = 2;
  const int SAC_ND_A_SHAPE( SACp_pcomp_926__flat_89, 0) = 4;
  const int SAC_ND_A_SHAPE( SACp_pcomp_926__flat_89, 1) = 2;

  
  /*
   * ND_KS_DECL_ARRAY( double, SACp_pcomp_925__flat_89, 2, 4, 2)
   */
  double *SACp_pcomp_925__flat_89;
  int SAC_ND_A_RC( SACp_pcomp_925__flat_89);
  const int SAC_ND_A_SIZE( SACp_pcomp_925__flat_89) = 4*2;
  const int SAC_ND_A_DIM( SACp_pcomp_925__flat_89) = 2;
  const int SAC_ND_A_SHAPE( SACp_pcomp_925__flat_89, 0) = 4;
  const int SAC_ND_A_SHAPE( SACp_pcomp_925__flat_89, 1) = 2;

  
  /*
   * ND_KS_DECL_ARRAY( double, SACp_pcomp_924__flat_89, 2, 4, 2)
   */
  double *SACp_pcomp_924__flat_89;
  int SAC_ND_A_RC( SACp_pcomp_924__flat_89);
  const int SAC_ND_A_SIZE( SACp_pcomp_924__flat_89) = 4*2;
  const int SAC_ND_A_DIM( SACp_pcomp_924__flat_89) = 2;
  const int SAC_ND_A_SHAPE( SACp_pcomp_924__flat_89, 0) = 4;
  const int SAC_ND_A_SHAPE( SACp_pcomp_924__flat_89, 1) = 2;

  
  /*
   * ND_KS_DECL_ARRAY( double, SACp_pcomp_923__flat_89, 2, 4, 2)
   */
  double *SACp_pcomp_923__flat_89;
  int SAC_ND_A_RC( SACp_pcomp_923__flat_89);
  const int SAC_ND_A_SIZE( SACp_pcomp_923__flat_89) = 4*2;
  const int SAC_ND_A_DIM( SACp_pcomp_923__flat_89) = 2;
  const int SAC_ND_A_SHAPE( SACp_pcomp_923__flat_89, 0) = 4;
  const int SAC_ND_A_SHAPE( SACp_pcomp_923__flat_89, 1) = 2;

  
  /*
   * ND_KS_DECL_ARRAY( double, SACp_pcomp_922__flat_89, 2, 4, 2)
   */
  double *SACp_pcomp_922__flat_89;
  int SAC_ND_A_RC( SACp_pcomp_922__flat_89);
  const int SAC_ND_A_SIZE( SACp_pcomp_922__flat_89) = 4*2;
  const int SAC_ND_A_DIM( SACp_pcomp_922__flat_89) = 2;
  const int SAC_ND_A_SHAPE( SACp_pcomp_922__flat_89, 0) = 4;
  const int SAC_ND_A_SHAPE( SACp_pcomp_922__flat_89, 1) = 2;

  
  /*
   * ND_KS_DECL_ARRAY( double, SACp_pcomp_921__flat_89, 2, 4, 2)
   */
  double *SACp_pcomp_921__flat_89;
  int SAC_ND_A_RC( SACp_pcomp_921__flat_89);
  const int SAC_ND_A_SIZE( SACp_pcomp_921__flat_89) = 4*2;
  const int SAC_ND_A_DIM( SACp_pcomp_921__flat_89) = 2;
  const int SAC_ND_A_SHAPE( SACp_pcomp_921__flat_89, 0) = 4;
  const int SAC_ND_A_SHAPE( SACp_pcomp_921__flat_89, 1) = 2;

  
  /*
   * ND_KS_DECL_ARRAY( double, SACp_flat_90, 2, 4, 2)
   */
  double *SACp_flat_90;
  int SAC_ND_A_RC( SACp_flat_90);
  const int SAC_ND_A_SIZE( SACp_flat_90) = 4*2;
  const int SAC_ND_A_DIM( SACp_flat_90) = 2;
  const int SAC_ND_A_SHAPE( SACp_flat_90, 0) = 4;
  const int SAC_ND_A_SHAPE( SACp_flat_90, 1) = 2;

  
  /*
   * ND_KS_DECL_ARRAY( double, SACp_flat_89, 2, 4, 2)
   */
  double *SACp_flat_89;
  int SAC_ND_A_RC( SACp_flat_89);
  const int SAC_ND_A_SIZE( SACp_flat_89) = 4*2;
  const int SAC_ND_A_DIM( SACp_flat_89) = 2;
  const int SAC_ND_A_SHAPE( SACp_flat_89, 0) = 4;
  const int SAC_ND_A_SHAPE( SACp_flat_89, 1) = 2;

  double SACp_flat_81;
  double SACp_flat_82;
  double SACp_flat_84;
  double SACp_flat_85;
  double SACp_flat_86;
  double SACp_flat_87;
  int SACp_flat_88_4_2__;
  int SACp_flat_80_iv_4_2__;
  double SACl_val;
  double SACp_flat_72;
  double SACp_flat_73;
  double SACp_flat_74;
  double SACp_flat_75;
  double SACp_flat_76;
  double SACp_flat_78;
  int SACp_flat_79_4_2__;

  
  /*
   * ND_KS_DECL_ARRAY_ARG( SACl_a, 2, 4, 2)
   */
  const int SAC_ND_A_SIZE(SACl_a)=4*2;
  const int SAC_ND_A_DIM(SACl_a)=2;
  const int SAC_ND_A_SHAPE(SACl_a, 0)=4;
  const int SAC_ND_A_SHAPE(SACl_a, 1)=2;

  
  /*
   * ND_KS_DECL_ARRAY_ARG( SACl_b, 2, 4, 2)
   */
  const int SAC_ND_A_SIZE(SACl_b)=4*2;
  const int SAC_ND_A_DIM(SACl_b)=2;
  const int SAC_ND_A_SHAPE(SACl_b, 0)=4;
  const int SAC_ND_A_SHAPE(SACl_b, 1)=2;

  SAC_ND_ALLOC_ARRAY( double, SACp_flat_89, 1)
  
  /*
   * ND_CREATE_CONST_ARRAY_S( SACp_flat_89, 8, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0)
   */
  SAC_ND_WRITE_ARRAY( SACp_flat_89, 0) = 0.0;
  SAC_ND_WRITE_ARRAY( SACp_flat_89, 1) = 0.0;
  SAC_ND_WRITE_ARRAY( SACp_flat_89, 2) = 0.0;
  SAC_ND_WRITE_ARRAY( SACp_flat_89, 3) = 0.0;
  SAC_ND_WRITE_ARRAY( SACp_flat_89, 4) = 0.0;
  SAC_ND_WRITE_ARRAY( SACp_flat_89, 5) = 0.0;
  SAC_ND_WRITE_ARRAY( SACp_flat_89, 6) = 0.0;
  SAC_ND_WRITE_ARRAY( SACp_flat_89, 7) = 0.0;

  SACp_flat_80_iv_4_2__ = ((3 * 2) + 1); 
  SACp_flat_88_4_2__ = ((3 * 2) + 0); 
  SAC_ND_IDX_PSI_S( SACp_flat_88_4_2__, SACl_b, SACp_flat_87)
  SAC_ND_IDX_PSI_S( SACp_flat_80_iv_4_2__, SACl_a, SACp_flat_86)
  SACp_flat_85 = (SACp_flat_86 * SACp_flat_87); 
  SAC_ND_IDX_PSI_S( SACp_flat_80_iv_4_2__, SACl_b, SACp_flat_84)
  SAC_ND_IDX_PSI_S( SACp_flat_88_4_2__, SACl_a, SACp_flat_82)
  SACp_flat_81 = (SACp_flat_82 * SACp_flat_84); 
  SACl_val = (SACp_flat_81 + SACp_flat_85); 
  SAC_ND_KS_ASSIGN_ARRAY( SACp_flat_89, SACp_pcomp_921__flat_89)
  SAC_ND_IDX_MODARRAY_AxVxS_CHECK_REUSE( double, SACp_flat_89, SACp_pcomp_921__flat_89, ((3 * 2) + 1), SACl_val)
  SAC_ND_INC_RC( SACp_flat_89, 1)
  SAC_ND_DEC_RC_FREE_ARRAY( SACp_pcomp_921__flat_89, 1)
  SACp_flat_80_iv_4_2__ = ((2 * 2) + 1); 
  SACp_flat_88_4_2__ = ((2 * 2) + 0); 
  SAC_ND_IDX_PSI_S( SACp_flat_88_4_2__, SACl_b, SACp_flat_87)
  SAC_ND_IDX_PSI_S( SACp_flat_80_iv_4_2__, SACl_a, SACp_flat_86)
  SACp_flat_85 = (SACp_flat_86 * SACp_flat_87); 
  SAC_ND_IDX_PSI_S( SACp_flat_80_iv_4_2__, SACl_b, SACp_flat_84)
  SAC_ND_IDX_PSI_S( SACp_flat_88_4_2__, SACl_a, SACp_flat_82)
  SACp_flat_81 = (SACp_flat_82 * SACp_flat_84); 
  SACl_val = (SACp_flat_81 + SACp_flat_85); 
  SAC_ND_KS_ASSIGN_ARRAY( SACp_flat_89, SACp_pcomp_922__flat_89)
  SAC_ND_IDX_MODARRAY_AxVxS_CHECK_REUSE( double, SACp_flat_89, SACp_pcomp_922__flat_89, ((2 * 2) + 1), SACl_val)
  SAC_ND_INC_RC( SACp_flat_89, 1)
  SAC_ND_DEC_RC_FREE_ARRAY( SACp_pcomp_922__flat_89, 1)
  SACp_flat_80_iv_4_2__ = ((1 * 2) + 1); 
  SACp_flat_88_4_2__ = ((1 * 2) + 0); 
  SAC_ND_IDX_PSI_S( SACp_flat_88_4_2__, SACl_b, SACp_flat_87)
  SAC_ND_IDX_PSI_S( SACp_flat_80_iv_4_2__, SACl_a, SACp_flat_86)
  SACp_flat_85 = (SACp_flat_86 * SACp_flat_87); 
  SAC_ND_IDX_PSI_S( SACp_flat_80_iv_4_2__, SACl_b, SACp_flat_84)
  SAC_ND_IDX_PSI_S( SACp_flat_88_4_2__, SACl_a, SACp_flat_82)
  SACp_flat_81 = (SACp_flat_82 * SACp_flat_84); 
  SACl_val = (SACp_flat_81 + SACp_flat_85); 
  SAC_ND_KS_ASSIGN_ARRAY( SACp_flat_89, SACp_pcomp_923__flat_89)
  SAC_ND_IDX_MODARRAY_AxVxS_CHECK_REUSE( double, SACp_flat_89, SACp_pcomp_923__flat_89, ((1 * 2) + 1), SACl_val)
  SAC_ND_INC_RC( SACp_flat_89, 1)
  SAC_ND_DEC_RC_FREE_ARRAY( SACp_pcomp_923__flat_89, 1)
  SACp_flat_80_iv_4_2__ = ((0 * 2) + 1); 
  SACp_flat_88_4_2__ = ((0 * 2) + 0); 
  SAC_ND_IDX_PSI_S( SACp_flat_88_4_2__, SACl_b, SACp_flat_87)
  SAC_ND_IDX_PSI_S( SACp_flat_80_iv_4_2__, SACl_a, SACp_flat_86)
  SACp_flat_85 = (SACp_flat_86 * SACp_flat_87); 
  SAC_ND_IDX_PSI_S( SACp_flat_80_iv_4_2__, SACl_b, SACp_flat_84)
  SAC_ND_IDX_PSI_S( SACp_flat_88_4_2__, SACl_a, SACp_flat_82)
  SACp_flat_81 = (SACp_flat_82 * SACp_flat_84); 
  SACl_val = (SACp_flat_81 + SACp_flat_85); 
  SAC_ND_KS_ASSIGN_ARRAY( SACp_flat_89, SACp_pcomp_924__flat_89)
  SAC_ND_IDX_MODARRAY_AxVxS_CHECK_REUSE( double, SACp_flat_89, SACp_pcomp_924__flat_89, ((0 * 2) + 1), SACl_val)
  SAC_ND_INC_RC( SACp_flat_89, 1)
  SAC_ND_DEC_RC_FREE_ARRAY( SACp_pcomp_924__flat_89, 1)
  SACp_flat_80_iv_4_2__ = ((3 * 2) + 0); 
  SACp_flat_79_4_2__ = ((3 * 2) + 1); 
  SAC_ND_IDX_PSI_S( SACp_flat_79_4_2__, SACl_b, SACp_flat_78)
  SAC_ND_IDX_PSI_S( SACp_flat_79_4_2__, SACl_a, SACp_flat_76)
  SACp_flat_75 = (SACp_flat_76 * SACp_flat_78); 
  SAC_ND_IDX_PSI_S( SACp_flat_80_iv_4_2__, SACl_b, SACp_flat_74)
  SAC_ND_IDX_PSI_S( SACp_flat_80_iv_4_2__, SACl_a, SACp_flat_73)
  SACp_flat_72 = (SACp_flat_73 * SACp_flat_74); 
  SACl_val = (SACp_flat_72 - SACp_flat_75); 
  SAC_ND_KS_ASSIGN_ARRAY( SACp_flat_89, SACp_pcomp_925__flat_89)
  SAC_ND_IDX_MODARRAY_AxVxS_CHECK_REUSE( double, SACp_flat_89, SACp_pcomp_925__flat_89, ((3 * 2) + 0), SACl_val)
  SAC_ND_INC_RC( SACp_flat_89, 1)
  SAC_ND_DEC_RC_FREE_ARRAY( SACp_pcomp_925__flat_89, 1)
  SACp_flat_80_iv_4_2__ = ((2 * 2) + 0); 
  SACp_flat_79_4_2__ = ((2 * 2) + 1); 
  SAC_ND_IDX_PSI_S( SACp_flat_79_4_2__, SACl_b, SACp_flat_78)
  SAC_ND_IDX_PSI_S( SACp_flat_79_4_2__, SACl_a, SACp_flat_76)
  SACp_flat_75 = (SACp_flat_76 * SACp_flat_78); 
  SAC_ND_IDX_PSI_S( SACp_flat_80_iv_4_2__, SACl_b, SACp_flat_74)
  SAC_ND_IDX_PSI_S( SACp_flat_80_iv_4_2__, SACl_a, SACp_flat_73)
  SACp_flat_72 = (SACp_flat_73 * SACp_flat_74); 
  SACl_val = (SACp_flat_72 - SACp_flat_75); 
  SAC_ND_KS_ASSIGN_ARRAY( SACp_flat_89, SACp_pcomp_926__flat_89)
  SAC_ND_IDX_MODARRAY_AxVxS_CHECK_REUSE( double, SACp_flat_89, SACp_pcomp_926__flat_89, ((2 * 2) + 0), SACl_val)
  SAC_ND_INC_RC( SACp_flat_89, 1)
  SAC_ND_DEC_RC_FREE_ARRAY( SACp_pcomp_926__flat_89, 1)
  SACp_flat_80_iv_4_2__ = ((1 * 2) + 0); 
  SACp_flat_79_4_2__ = ((1 * 2) + 1); 
  SAC_ND_IDX_PSI_S( SACp_flat_79_4_2__, SACl_b, SACp_flat_78)
  SAC_ND_IDX_PSI_S( SACp_flat_79_4_2__, SACl_a, SACp_flat_76)
  SACp_flat_75 = (SACp_flat_76 * SACp_flat_78); 
  SAC_ND_IDX_PSI_S( SACp_flat_80_iv_4_2__, SACl_b, SACp_flat_74)
  SAC_ND_IDX_PSI_S( SACp_flat_80_iv_4_2__, SACl_a, SACp_flat_73)
  SACp_flat_72 = (SACp_flat_73 * SACp_flat_74); 
  SACl_val = (SACp_flat_72 - SACp_flat_75); 
  SAC_ND_KS_ASSIGN_ARRAY( SACp_flat_89, SACp_pcomp_927__flat_89)
  SAC_ND_IDX_MODARRAY_AxVxS_CHECK_REUSE( double, SACp_flat_89, SACp_pcomp_927__flat_89, ((1 * 2) + 0), SACl_val)
  SAC_ND_INC_RC( SACp_flat_89, 1)
  SAC_ND_DEC_RC_FREE_ARRAY( SACp_pcomp_927__flat_89, 1)
  SACp_flat_80_iv_4_2__ = ((0 * 2) + 0); 
  SACp_flat_79_4_2__ = ((0 * 2) + 1); 
  SAC_ND_IDX_PSI_S( SACp_flat_79_4_2__, SACl_b, SACp_flat_78)
  SAC_ND_IDX_PSI_S( SACp_flat_79_4_2__, SACl_a, SACp_flat_76)
  SACp_flat_75 = (SACp_flat_76 * SACp_flat_78); 
  SAC_ND_IDX_PSI_S( SACp_flat_80_iv_4_2__, SACl_b, SACp_flat_74)
  SAC_ND_DEC_RC_FREE_ARRAY( SACl_b, 1)
  SAC_ND_IDX_PSI_S( SACp_flat_80_iv_4_2__, SACl_a, SACp_flat_73)
  SAC_ND_DEC_RC_FREE_ARRAY( SACl_a, 1)
  SACp_flat_72 = (SACp_flat_73 * SACp_flat_74); 
  SACl_val = (SACp_flat_72 - SACp_flat_75); 
  SAC_ND_KS_ASSIGN_ARRAY( SACp_flat_89, SACp_pcomp_928__flat_89)
  SAC_ND_IDX_MODARRAY_AxVxS_CHECK_REUSE( double, SACp_flat_89, SACp_pcomp_928__flat_89, ((0 * 2) + 0), SACl_val)
  SAC_ND_INC_RC( SACp_flat_89, 1)
  SAC_ND_DEC_RC_FREE_ARRAY( SACp_pcomp_928__flat_89, 1)
  SAC_ND_KS_ASSIGN_ARRAY( SACp_flat_89, SACp_flat_90)
  
  /*
   * ND_FUN_RET( , 1, out_rc, SACp_flat_90, SACp_flat_90)
   */
  SAC_ND_KS_RET_OUT_RC( SACp_flat_90, SACp_flat_90);
  

}


/*
 * ND_FUN_DEC( SACf_ComputeIndexMap_, void, 1, out_rc, int *, SACl_map)
 */
void SACf_ComputeIndexMap_( SAC_ND_KS_DEC_OUT_RC(int *, SACl_map))
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
  int SACp_flat_176;
  int SACp_flat_177;
  int SACp_flat_178;
  int SACp_flat_179;
  int SACl_kk;
  int SACp_flat_172;
  int SACp_flat_173;
  int SACl_jj;
  int SACp_flat_168;
  int SACp_flat_169;
  int SACl_ii;
  int SACp_flat_164;
  int SACp_flat_165;
  int SACp_flat_162_k;
  int SACp_flat_161_j;
  int SACp_flat_160_i;
  
  /*
   * ND_KS_DECL_ARRAY( int, SACp_flat_163_iv, 1, 3)
   */
  int *SACp_flat_163_iv;
  int SAC_ND_A_RC( SACp_flat_163_iv);
  const int SAC_ND_A_SIZE( SACp_flat_163_iv) = 3;
  const int SAC_ND_A_DIM( SACp_flat_163_iv) = 1;
  const int SAC_ND_A_SHAPE( SACp_flat_163_iv, 0) = 3;


  SAC_ND_ALLOC_ARRAY( int, SACl_map, 0)
  SAC_ND_INC_RC( SACl_map, 1)
  SAC_PF_BEGIN_WITH( genarray)
    
    /*
     * WL_BEGIN__OFFSET( SACl_map, SACp_flat_163_iv, 3)
     */
    {
      int SAC_WL_OFFSET( SACl_map);
      int SAC_WL_MT_SCHEDULE_START( 0);
      int SAC_WL_MT_SCHEDULE_STOP( 0);
      int SAC_WL_MT_SCHEDULE_START( 1);
      int SAC_WL_MT_SCHEDULE_STOP( 1);
      int SAC_WL_MT_SCHEDULE_START( 2);
      int SAC_WL_MT_SCHEDULE_STOP( 2);

      
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
       * WL_INIT_OFFSET( 3, SACl_map, SACp_flat_163_iv, 3)
       */
      SAC_WL_OFFSET( SACl_map)
        = SAC_WL_MT_SCHEDULE_START( 0) * SAC_ND_A_SHAPE( SACl_map, 1) * SAC_ND_A_SHAPE( SACl_map, 2)
        + SAC_WL_MT_SCHEDULE_START( 1) * SAC_ND_A_SHAPE( SACl_map, 2)
        + SAC_WL_MT_SCHEDULE_START( 2);

      SAC_WL_STRIDE_LOOP0_BEGIN( 0, SACp_flat_163_iv, SACp_flat_160_i, 0, 128, 1)
        SAC_WL_GRID_UNROLL_BEGIN( 0, SACp_flat_163_iv, SACp_flat_160_i, 0, 1)
          SAC_WL_STRIDE_LOOP0_BEGIN( 1, SACp_flat_163_iv, SACp_flat_161_j, 0, 128, 1)
            SAC_WL_GRID_UNROLL_BEGIN( 1, SACp_flat_163_iv, SACp_flat_161_j, 0, 1)
              SAC_WL_STRIDE_LOOP0_BEGIN( 2, SACp_flat_163_iv, SACp_flat_162_k, 0, 32, 1)
                SAC_WL_GRID_UNROLL_BEGIN( 2, SACp_flat_163_iv, SACp_flat_162_k, 0, 1)
                  SACp_flat_165 = (SACp_flat_160_i + 64); 
                  SACp_flat_164 = (SACp_flat_165 % 128); 
                  SACl_ii = (SACp_flat_164 - 64); 
                  SACp_flat_169 = (SACp_flat_161_j + 64); 
                  SACp_flat_168 = (SACp_flat_169 % 128); 
                  SACl_jj = (SACp_flat_168 - 64); 
                  SACp_flat_173 = (SACp_flat_162_k + 16); 
                  SACp_flat_172 = (SACp_flat_173 % 32); 
                  SACl_kk = (SACp_flat_172 - 16); 
                  SACp_flat_179 = (SACl_kk * SACl_kk); 
                  SACp_flat_178 = (SACl_jj * SACl_jj); 
                  SACp_flat_177 = (SACl_ii * SACl_ii); 
                  SACp_flat_176 = (SACp_flat_177 + SACp_flat_178); 
                  SACl_ttt = (SACp_flat_176 + SACp_flat_179); 
                  
                  /*
                   * WL_ASSIGN( 0, SACl_ttt, 3, SACl_map, SACp_flat_163_iv, 3, SACp_flat_160_i, SACp_flat_161_j, SACp_flat_162_k)
                   */
                  SAC_TR_WL_PRINT( ("index vector [%d, %d, %d] (== offset %d) -- offset %d -- assign", SACp_flat_160_i, SACp_flat_161_j, SACp_flat_162_k, ( SAC_ND_A_SHAPE( SACl_map, 2) * ( SAC_ND_A_SHAPE( SACl_map, 1) * SACp_flat_160_i + SACp_flat_161_j )+ SACp_flat_162_k ), SAC_WL_OFFSET( SACl_map)));
                  SAC_ND_WRITE_ARRAY( SACl_map, SAC_WL_OFFSET( SACl_map)) = SACl_ttt;
                  SAC_WL_OFFSET( SACl_map)++;

                SAC_WL_GRID_UNROLL_END( 2, SACp_flat_163_iv, SACp_flat_162_k, 0, 1)
              SAC_WL_STRIDE_LOOP_END( 2, SACp_flat_163_iv, SACp_flat_162_k, 0, 32, 1)
            SAC_WL_GRID_UNROLL_END( 1, SACp_flat_163_iv, SACp_flat_161_j, 0, 1)
          SAC_WL_STRIDE_LOOP_END( 1, SACp_flat_163_iv, SACp_flat_161_j, 0, 128, 1)
        SAC_WL_GRID_UNROLL_END( 0, SACp_flat_163_iv, SACp_flat_160_i, 0, 1)
      SAC_WL_STRIDE_LOOP_END( 0, SACp_flat_163_iv, SACp_flat_160_i, 0, 128, 1)
    
      /*
       * MT_SCHEDULER_END( 0, 3, 0, 0, 0, 128, 128, 32)
       */


    
      /*
       * WL_END__OFFSET( SACl_map, SACp_flat_163_iv, 3)
       */
    }

  SAC_PF_END_WITH( genarray)
  
  /*
   * ND_FUN_RET( , 1, out_rc, SACl_map, SACl_map)
   */
  SAC_ND_KS_RET_OUT_RC( SACl_map, SACl_map);
  

}


/*
 * ND_FUN_DEC( SACf_ComputeExponentialMap_, void, 1, out_rc, double *, SACl_map)
 */
void SACf_ComputeExponentialMap_( SAC_ND_KS_DEC_OUT_RC(double *, SACl_map))
{ 
  
  /*
   * ND_KS_DECL_ARRAY( double, SACp_pcomp_931_map, 1, 50689)
   */
  double *SACp_pcomp_931_map;
  int SAC_ND_A_RC( SACp_pcomp_931_map);
  const int SAC_ND_A_SIZE( SACp_pcomp_931_map) = 50689;
  const int SAC_ND_A_DIM( SACp_pcomp_931_map) = 1;
  const int SAC_ND_A_SHAPE( SACp_pcomp_931_map, 0) = 50689;

  
  /*
   * ND_KS_DECL_ARRAY( double, SACp_pcomp_930_map, 1, 50689)
   */
  double *SACp_pcomp_930_map;
  int SAC_ND_A_RC( SACp_pcomp_930_map);
  const int SAC_ND_A_SIZE( SACp_pcomp_930_map) = 50689;
  const int SAC_ND_A_DIM( SACp_pcomp_930_map) = 1;
  const int SAC_ND_A_SHAPE( SACp_pcomp_930_map, 0) = 50689;

  
  /*
   * ND_KS_DECL_ARRAY( double, SACp_pcomp_929_map, 1, 50689)
   */
  double *SACp_pcomp_929_map;
  int SAC_ND_A_RC( SACp_pcomp_929_map);
  const int SAC_ND_A_SIZE( SACp_pcomp_929_map) = 50689;
  const int SAC_ND_A_DIM( SACp_pcomp_929_map) = 1;
  const int SAC_ND_A_SHAPE( SACp_pcomp_929_map, 0) = 50689;

  int SACp_flat_189_50689__;
  double SACp_flat_190;
  double SACp_flat_191;
  int SACp_flat_192_50689__;
  int SACp_flat_193;
  double SACp_flat_194;
  int SACp_flat_195_50689__;
  bool SACp_flat_196;
  int SACl_i;
  int SACp_flat_187_50689__;
  double SACp_flat_188;
  int SACp_flat_186_50689__;
  double SACl_alpha;
  double SACp_flat_181;
  double SACp_flat_182;
  double SACp_flat_183;
  
  /*
   * ND_KS_DECL_ARRAY( double, SACl_map, 1, 50689)
   */
  double *SACl_map;
  int SAC_ND_A_RC( SACl_map);
  const int SAC_ND_A_SIZE( SACl_map) = 50689;
  const int SAC_ND_A_DIM( SACl_map) = 1;
  const int SAC_ND_A_SHAPE( SACl_map, 0) = 50689;

  double SACp_type_376;
  int SACp_type_377;
  
  /*
   * ND_KS_DECL_ARRAY( int, SACp_type_375, 1, 1)
   */
  int *SACp_type_375;
  int SAC_ND_A_RC( SACp_type_375);
  const int SAC_ND_A_SIZE( SACp_type_375) = 1;
  const int SAC_ND_A_DIM( SACp_type_375) = 1;
  const int SAC_ND_A_SHAPE( SACp_type_375, 0) = 1;


  SAC_ND_ALLOC_ARRAY( double, SACl_map, 0)
  SAC_ND_INC_RC( SACl_map, 1)
  SAC_PF_BEGIN_WITH( genarray)
    
    /*
     * WL_BEGIN__OFFSET( SACl_map, SACp_type_375, 1)
     */
    {
      int SAC_WL_OFFSET( SACl_map);
      int SAC_WL_MT_SCHEDULE_START( 0);
      int SAC_WL_MT_SCHEDULE_STOP( 0);

      
      /*
       * MT_SCHEDULER_BEGIN( 0, 1, 0, 50689)
       */
      SAC_WL_MT_SCHEDULE_START( 0) = 0;
      SAC_WL_MT_SCHEDULE_STOP( 0) = 50689;

      
      /*
       * WL_INIT_OFFSET( 1, SACl_map, SACp_type_375, 1)
       */
      SAC_WL_OFFSET( SACl_map)
        = SAC_WL_MT_SCHEDULE_START( 0);

      SAC_WL_STRIDE_LOOP0_BEGIN( 0, SACp_type_375, SACp_type_377, 0, 50689, 1)
        SAC_WL_GRID_UNROLL_BEGIN( 0, SACp_type_375, SACp_type_377, 0, 1)
          SACp_type_376 = 0.0; 
          
          /*
           * WL_ASSIGN( 0, SACp_type_376, 1, SACl_map, SACp_type_375, 1, SACp_type_377)
           */
          SAC_TR_WL_PRINT( ("index vector [%d] (== offset %d) -- offset %d -- assign", SACp_type_377, SACp_type_377 , SAC_WL_OFFSET( SACl_map)));
          SAC_ND_WRITE_ARRAY( SACl_map, SAC_WL_OFFSET( SACl_map)) = SACp_type_376;
          SAC_WL_OFFSET( SACl_map)++;

        SAC_WL_GRID_UNROLL_END( 0, SACp_type_375, SACp_type_377, 0, 1)
      SAC_WL_STRIDE_LOOP_END( 0, SACp_type_375, SACp_type_377, 0, 50689, 1)
    
      /*
       * MT_SCHEDULER_END( 0, 1, 0, 50689)
       */


    
      /*
       * WL_END__OFFSET( SACl_map, SACp_type_375, 1)
       */
    }

  SAC_PF_END_WITH( genarray)
  
  /*
   * ND_FUN_AP( pow, SACp_flat_183, 2, in, 10.0, in, -6.0)
   */
  SACp_flat_183 = pow( 10.0, -6.0);

  SACp_flat_182 = (-4.0 * SACp_flat_183); 
  SACp_flat_181 = (SACp_flat_182 * 3.141592653589793115997963468544185161590576171875); 
  SACl_alpha = (SACp_flat_181 * 3.141592653589793115997963468544185161590576171875); 
  SACp_flat_186_50689__ = 0; 
  SAC_ND_KS_ASSIGN_ARRAY( SACl_map, SACp_pcomp_929_map)
  SAC_ND_IDX_MODARRAY_AxVxS_CHECK_REUSE( double, SACl_map, SACp_pcomp_929_map, SACp_flat_186_50689__, 1.0)
  SAC_ND_INC_RC( SACl_map, 1)
  SAC_ND_DEC_RC_FREE_ARRAY( SACp_pcomp_929_map, 1)
  
  /*
   * ND_FUN_AP( exp, SACp_flat_188, 1, in, SACl_alpha)
   */
  SACp_flat_188 = exp( SACl_alpha);

  SACp_flat_187_50689__ = 1; 
  SAC_ND_KS_ASSIGN_ARRAY( SACl_map, SACp_pcomp_930_map)
  SAC_ND_IDX_MODARRAY_AxVxS_CHECK_REUSE( double, SACl_map, SACp_pcomp_930_map, SACp_flat_187_50689__, SACp_flat_188)
  SAC_ND_INC_RC( SACl_map, 1)
  SAC_ND_DEC_RC_FREE_ARRAY( SACp_pcomp_930_map, 1)
  SACl_i = 2; 
  SAC_ND_GOTO( _comp_943_SAC__label)
  do 
  { 
    SAC_ND_LABEL( _comp_943_SAC__label)
    SACp_flat_195_50689__ = 1; 
    SAC_ND_IDX_PSI_S( SACp_flat_195_50689__, SACl_map, SACp_flat_194)
    SACp_flat_193 = (SACl_i - 1); 
    SACp_flat_192_50689__ = SACp_flat_193; 
    SAC_ND_IDX_PSI_S( SACp_flat_192_50689__, SACl_map, SACp_flat_191)
    SACp_flat_190 = (SACp_flat_191 * SACp_flat_194); 
    SACp_flat_189_50689__ = SACl_i; 
    SAC_ND_KS_ASSIGN_ARRAY( SACl_map, SACp_pcomp_931_map)
    SAC_ND_IDX_MODARRAY_AxVxS_CHECK_REUSE( double, SACl_map, SACp_pcomp_931_map, SACp_flat_189_50689__, SACp_flat_190)
    SAC_ND_INC_RC( SACl_map, 1)
    SAC_ND_DEC_RC_FREE_ARRAY( SACp_pcomp_931_map, 1)
    SACl_i = (SACl_i + 1); 
    SACp_flat_196 = (SACl_i < 50689); 
  }
  while (SACp_flat_196);
  
  /*
   * ND_FUN_RET( , 1, out_rc, SACl_map, SACl_map)
   */
  SAC_ND_KS_RET_OUT_RC( SACl_map, SACl_map);
  

}


/*
 * ND_FUN_DEC( SACf_RootsOfUnity__d, void, 2, out_rc, double *, SACp_flat_226, in, double, SACl_dir)
 */
void SACf_RootsOfUnity__d( SAC_ND_KS_DEC_OUT_RC(double *, SACp_flat_226), double SACl_dir)
{ 
  
  /*
   * ND_KS_DECL_ARRAY( double, SACp_pcomp_932_u, 2, 64, 2)
   */
  double *SACp_pcomp_932_u;
  int SAC_ND_A_RC( SACp_pcomp_932_u);
  const int SAC_ND_A_SIZE( SACp_pcomp_932_u) = 64*2;
  const int SAC_ND_A_DIM( SACp_pcomp_932_u) = 2;
  const int SAC_ND_A_SHAPE( SACp_pcomp_932_u, 0) = 64;
  const int SAC_ND_A_SHAPE( SACp_pcomp_932_u, 1) = 2;

  
  /*
   * ND_KS_DECL_ARRAY( double, SACp_flat_226, 2, 64, 2)
   */
  double *SACp_flat_226;
  int SAC_ND_A_RC( SACp_flat_226);
  const int SAC_ND_A_SIZE( SACp_flat_226) = 64*2;
  const int SAC_ND_A_DIM( SACp_flat_226) = 2;
  const int SAC_ND_A_SHAPE( SACp_flat_226, 0) = 64;
  const int SAC_ND_A_SHAPE( SACp_flat_226, 1) = 2;

  int SACp_flat_219_64_2__;
  double SACp_cf_778;
  double SACp_type_382;
  int SACp_type_383_64_2__;
  int SACp_flat_217;
  bool SACp_flat_221;
  int SACl_i;
  
  /*
   * ND_KS_DECL_ARRAY( double, SACp_flat_214, 1, 2)
   */
  double *SACp_flat_214;
  int SAC_ND_A_RC( SACp_flat_214);
  const int SAC_ND_A_SIZE( SACp_flat_214) = 2;
  const int SAC_ND_A_DIM( SACp_flat_214) = 1;
  const int SAC_ND_A_SHAPE( SACp_flat_214, 0) = 2;

  double SACp_flat_211;
  double SACp_flat_212;
  double SACp_flat_213;
  double SACl_theta;
  double SACp_flat_204;
  double SACp_flat_206;
  
  /*
   * ND_KS_DECL_ARRAY( double, SACl_u, 2, 64, 2)
   */
  double *SACl_u;
  int SAC_ND_A_RC( SACl_u);
  const int SAC_ND_A_SIZE( SACl_u) = 64*2;
  const int SAC_ND_A_DIM( SACl_u) = 2;
  const int SAC_ND_A_SHAPE( SACl_u, 0) = 64;
  const int SAC_ND_A_SHAPE( SACl_u, 1) = 2;

  double SACp_type_379;
  int SACp_type_381;
  int SACp_type_380;
  
  /*
   * ND_KS_DECL_ARRAY( int, SACp_type_378, 1, 2)
   */
  int *SACp_type_378;
  int SAC_ND_A_RC( SACp_type_378);
  const int SAC_ND_A_SIZE( SACp_type_378) = 2;
  const int SAC_ND_A_DIM( SACp_type_378) = 1;
  const int SAC_ND_A_SHAPE( SACp_type_378, 0) = 2;

  double SACp__inl32__flat_11;
  double SACp__inl32__flat_6;
  
  /*
   * ND_KS_DECL_ARRAY( double, SACp__inl32_res, 1, 2)
   */
  double *SACp__inl32_res;
  int SAC_ND_A_RC( SACp__inl32_res);
  const int SAC_ND_A_SIZE( SACp__inl32_res) = 2;
  const int SAC_ND_A_DIM( SACp__inl32_res) = 1;
  const int SAC_ND_A_SHAPE( SACp__inl32_res, 0) = 2;

  double SACp__inl31__flat_45;
  double SACp__inl31__flat_40;
  double SACp__inl31__flat_39;
  double SACp__inl31__flat_34;
  double SACp__inl31__flat_29;
  double SACp__inl31__flat_28;
  int SACp__inl28__flat_713_64_2__;
  
  /*
   * ND_KS_DECL_ARRAY( double, SACp__inl28__flat_712, 2, 64, 2)
   */
  double *SACp__inl28__flat_712;
  int SAC_ND_A_RC( SACp__inl28__flat_712);
  const int SAC_ND_A_SIZE( SACp__inl28__flat_712) = 64*2;
  const int SAC_ND_A_DIM( SACp__inl28__flat_712) = 2;
  const int SAC_ND_A_SHAPE( SACp__inl28__flat_712, 0) = 64;
  const int SAC_ND_A_SHAPE( SACp__inl28__flat_712, 1) = 2;


  SAC_ND_ALLOC_ARRAY( double, SACl_u, 0)
  SAC_ND_INC_RC( SACl_u, 1)
  SAC_PF_BEGIN_WITH( genarray)
    
    /*
     * WL_BEGIN__OFFSET( SACl_u, SACp_type_378, 2)
     */
    {
      int SAC_WL_OFFSET( SACl_u);
      int SAC_WL_MT_SCHEDULE_START( 0);
      int SAC_WL_MT_SCHEDULE_STOP( 0);
      int SAC_WL_MT_SCHEDULE_START( 1);
      int SAC_WL_MT_SCHEDULE_STOP( 1);

      
      /*
       * MT_SCHEDULER_BEGIN( 0, 2, 0, 0, 64, 2)
       */
      SAC_WL_MT_SCHEDULE_START( 0) = 0;
      SAC_WL_MT_SCHEDULE_STOP( 0) = 64;
      SAC_WL_MT_SCHEDULE_START( 1) = 0;
      SAC_WL_MT_SCHEDULE_STOP( 1) = 2;

      
      /*
       * WL_INIT_OFFSET( 2, SACl_u, SACp_type_378, 2)
       */
      SAC_WL_OFFSET( SACl_u)
        = SAC_WL_MT_SCHEDULE_START( 0) * SAC_ND_A_SHAPE( SACl_u, 1)
        + SAC_WL_MT_SCHEDULE_START( 1);

      SAC_WL_STRIDE_LOOP0_BEGIN( 0, SACp_type_378, SACp_type_380, 0, 64, 1)
        SAC_WL_GRID_UNROLL_BEGIN( 0, SACp_type_378, SACp_type_380, 0, 1)
          SAC_WL_STRIDE_LOOP0_BEGIN( 1, SACp_type_378, SACp_type_381, 0, 2, 1)
            SAC_WL_GRID_UNROLL_BEGIN( 1, SACp_type_378, SACp_type_381, 0, 1)
              SACp_type_379 = 0.0; 
              
              /*
               * WL_ASSIGN( 0, SACp_type_379, 2, SACl_u, SACp_type_378, 2, SACp_type_380, SACp_type_381)
               */
              SAC_TR_WL_PRINT( ("index vector [%d, %d] (== offset %d) -- offset %d -- assign", SACp_type_380, SACp_type_381, ( SAC_ND_A_SHAPE( SACl_u, 1) * SACp_type_380 + SACp_type_381 ), SAC_WL_OFFSET( SACl_u)));
              SAC_ND_WRITE_ARRAY( SACl_u, SAC_WL_OFFSET( SACl_u)) = SACp_type_379;
              SAC_WL_OFFSET( SACl_u)++;

            SAC_WL_GRID_UNROLL_END( 1, SACp_type_378, SACp_type_381, 0, 1)
          SAC_WL_STRIDE_LOOP_END( 1, SACp_type_378, SACp_type_381, 0, 2, 1)
        SAC_WL_GRID_UNROLL_END( 0, SACp_type_378, SACp_type_380, 0, 1)
      SAC_WL_STRIDE_LOOP_END( 0, SACp_type_378, SACp_type_380, 0, 64, 1)
    
      /*
       * MT_SCHEDULER_END( 0, 2, 0, 0, 64, 2)
       */


    
      /*
       * WL_END__OFFSET( SACl_u, SACp_type_378, 2)
       */
    }

  SAC_PF_END_WITH( genarray)
  SACp_flat_206 = 64; 
  SACp_flat_204 = (SACl_dir * 3.141592653589793115997963468544185161590576171875); 
  SACl_theta = (SACp_flat_204 / SACp_flat_206); 
  
  /*
   * ND_FUN_AP( sin, SACp_flat_213, 1, in, SACl_theta)
   */
  SACp_flat_213 = sin( SACl_theta);

  
  /*
   * ND_FUN_AP( cos, SACp_flat_212, 1, in, SACl_theta)
   */
  SACp_flat_212 = cos( SACl_theta);

  SACp_flat_211 = (SACp_flat_212 - 1.0); 
  SAC_ND_ALLOC_ARRAY( double, SACp_flat_214, 1)
  
  /*
   * ND_CREATE_CONST_ARRAY_S( SACp_flat_214, 2, 1.0, 0.0)
   */
  SAC_ND_WRITE_ARRAY( SACp_flat_214, 0) = 1.0;
  SAC_ND_WRITE_ARRAY( SACp_flat_214, 1) = 0.0;

  SACp__inl28__flat_713_64_2__ = (0 * 2); 
  SAC_ND_IDX_MODARRAY_AxVxA_CHECK_REUSE( double, SACp__inl28__flat_712, SACl_u, SACp__inl28__flat_713_64_2__, SACp_flat_214)
  SAC_ND_INC_RC( SACp__inl28__flat_712, 1)
  SAC_ND_DEC_RC_FREE_ARRAY( SACp_flat_214, 1)
  SAC_ND_DEC_RC_FREE_ARRAY( SACl_u, 1)
  SAC_ND_KS_ASSIGN_ARRAY( SACp__inl28__flat_712, SACl_u)
  SACl_i = 1; 
  SAC_ND_GOTO( _comp_944_SAC__label)
  do 
  { 
    SAC_ND_LABEL( _comp_944_SAC__label)
    SACp_flat_217 = (SACl_i - 1); 
    SACp_type_383_64_2__ = ((SACp_flat_217 * 2) + 1); 
    SAC_ND_IDX_PSI_S( SACp_type_383_64_2__, SACl_u, SACp_type_382)
    SACp_cf_778 = SACp_type_382; 
    SACp_type_383_64_2__ = ((SACp_flat_217 * 2) + 0); 
    SAC_ND_IDX_PSI_S( SACp_type_383_64_2__, SACl_u, SACp_type_382)
    SACp__inl31__flat_45 = (SACp_cf_778 * SACp_flat_211); 
    SACp__inl31__flat_40 = (SACp_type_382 * SACp_flat_213); 
    SACp__inl31__flat_39 = (SACp__inl31__flat_40 + SACp__inl31__flat_45); 
    SACp__inl31__flat_34 = (SACp_cf_778 * SACp_flat_213); 
    SACp__inl31__flat_29 = (SACp_type_382 * SACp_flat_211); 
    SACp__inl31__flat_28 = (SACp__inl31__flat_29 - SACp__inl31__flat_34); 
    SACp__inl32__flat_11 = (SACp__inl31__flat_39 + SACp_cf_778); 
    SACp__inl32__flat_6 = (SACp__inl31__flat_28 + SACp_type_382); 
    SAC_ND_ALLOC_ARRAY( double, SACp__inl32_res, 1)
    
    /*
     * ND_CREATE_CONST_ARRAY_S( SACp__inl32_res, 2, SACp__inl32__flat_6, SACp__inl32__flat_11)
     */
    SAC_ND_WRITE_ARRAY( SACp__inl32_res, 0) = SACp__inl32__flat_6;
    SAC_ND_WRITE_ARRAY( SACp__inl32_res, 1) = SACp__inl32__flat_11;

    SACp_flat_219_64_2__ = (SACl_i * 2); 
    SAC_ND_KS_ASSIGN_ARRAY( SACl_u, SACp_pcomp_932_u)
    SAC_ND_IDX_MODARRAY_AxVxA_CHECK_REUSE( double, SACl_u, SACp_pcomp_932_u, SACp_flat_219_64_2__, SACp__inl32_res)
    SAC_ND_INC_RC( SACl_u, 1)
    SAC_ND_DEC_RC_FREE_ARRAY( SACp__inl32_res, 1)
    SAC_ND_DEC_RC_FREE_ARRAY( SACp_pcomp_932_u, 1)
    SACl_i = (SACl_i + 1); 
    SACp_flat_221 = (SACl_i < 64); 
  }
  while (SACp_flat_221);
  SAC_ND_KS_ASSIGN_ARRAY( SACl_u, SACp_flat_226)
  
  /*
   * ND_FUN_RET( , 1, out_rc, SACp_flat_226, SACp_flat_226)
   */
  SAC_ND_KS_RET_OUT_RC( SACp_flat_226, SACp_flat_226);
  

}


/*
 * ND_FUN_DEC( SACf_FFT1d__d__MAIN__cpx_8___MAIN__cpx_4_, void, 4, out_rc, double *, SACl_res, in, double, SACl_dir, in_rc, double *, SACl_v, in_rc, double *, SACl_rofu)
 */
void SACf_FFT1d__d__MAIN__cpx_8___MAIN__cpx_4_( SAC_ND_KS_DEC_OUT_RC(double *, SACl_res), double SACl_dir, SAC_ND_KS_DEC_IN_RC( double *, SACl_v), SAC_ND_KS_DEC_IN_RC( double *, SACl_rofu))
{ 
  double SACp_wlt_794;
  
  /*
   * ND_KS_DECL_ARRAY( double, SACl_res, 2, 8, 2)
   */
  double *SACl_res;
  int SAC_ND_A_RC( SACl_res);
  const int SAC_ND_A_SIZE( SACl_res) = 8*2;
  const int SAC_ND_A_DIM( SACl_res) = 2;
  const int SAC_ND_A_SHAPE( SACl_res, 0) = 8;
  const int SAC_ND_A_SHAPE( SACl_res, 1) = 2;

  
  /*
   * ND_KS_DECL_ARRAY( double, SACl_fft_right, 2, 4, 2)
   */
  double *SACl_fft_right;
  int SAC_ND_A_RC( SACl_fft_right);
  const int SAC_ND_A_SIZE( SACl_fft_right) = 4*2;
  const int SAC_ND_A_DIM( SACl_fft_right) = 2;
  const int SAC_ND_A_SHAPE( SACl_fft_right, 0) = 4;
  const int SAC_ND_A_SHAPE( SACl_fft_right, 1) = 2;

  
  /*
   * ND_KS_DECL_ARRAY( int, SACp__inl157__type_500, 1, 2)
   */
  int *SACp__inl157__type_500;
  int SAC_ND_A_RC( SACp__inl157__type_500);
  const int SAC_ND_A_SIZE( SACp__inl157__type_500) = 2;
  const int SAC_ND_A_DIM( SACp__inl157__type_500) = 1;
  const int SAC_ND_A_SHAPE( SACp__inl157__type_500, 0) = 2;

  int SACp__inl157__type_500_4_2__;
  int SACp__inl157__type_502;
  int SACp__inl157__type_503;
  int SACp__inl157__type_499_4_2__;
  int SACp__inl157__type_497_4_2__;
  double SACp__inl157__type_498;
  
  /*
   * ND_KS_DECL_ARRAY( double, SACp__inl157__type_501, 2, 8, 2)
   */
  double *SACp__inl157__type_501;
  int SAC_ND_A_RC( SACp__inl157__type_501);
  const int SAC_ND_A_SIZE( SACp__inl157__type_501) = 8*2;
  const int SAC_ND_A_DIM( SACp__inl157__type_501) = 2;
  const int SAC_ND_A_SHAPE( SACp__inl157__type_501, 0) = 8;
  const int SAC_ND_A_SHAPE( SACp__inl157__type_501, 1) = 2;

  double SACp__inl156__flat_55;
  double SACp__inl156__flat_53;
  double SACp__inl156__flat_52;
  double SACp__inl155__flat_62;
  double SACp__inl155__flat_60;
  double SACp__inl155__flat_59;
  double SACp__inl152__flat_22;
  double SACp__inl152__flat_17;
  double SACp__inl150__flat_22;
  double SACp__inl150__flat_17;
  double SACp__inl148__flat_11;
  double SACp__inl148__flat_6;
  double SACp__inl146__flat_11;
  double SACp__inl146__flat_6;
  double SACp__inl145__flat_45;
  double SACp__inl145__flat_34;
  double SACp__inl145__flat_28;
  double SACp__inl138__flat_22;
  double SACp__inl138__flat_17;
  double SACp__inl137__flat_11;
  double SACp__inl137__flat_6;
  double SACp__inl136__flat_22;
  double SACp__inl136__flat_17;
  double SACp__inl135__flat_11;
  double SACp__inl135__flat_6;
  double SACp_cf_803;
  double SACp_cf_802;
  double SACp_cf_807;
  double SACp_cf_806;
  double SACp_cf_805;
  double SACp_cf_804;
  double SACp_cf_808;
  
  /*
   * ND_KS_DECL_ARRAY( double, SACp__inl129__flat_276, 1, 8)
   */
  double *SACp__inl129__flat_276;
  int SAC_ND_A_RC( SACp__inl129__flat_276);
  const int SAC_ND_A_SIZE( SACp__inl129__flat_276) = 8;
  const int SAC_ND_A_DIM( SACp__inl129__flat_276) = 1;
  const int SAC_ND_A_SHAPE( SACp__inl129__flat_276, 0) = 8;

  
  /*
   * ND_KS_DECL_ARRAY( int, SACp__inl129__flat_275, 1, 2)
   */
  int *SACp__inl129__flat_275;
  int SAC_ND_A_RC( SACp__inl129__flat_275);
  const int SAC_ND_A_SIZE( SACp__inl129__flat_275) = 2;
  const int SAC_ND_A_DIM( SACp__inl129__flat_275) = 1;
  const int SAC_ND_A_SHAPE( SACp__inl129__flat_275, 0) = 2;

  
  /*
   * ND_KS_DECL_ARRAY( double, SACp__inl129_t, 2, 4, 2)
   */
  double *SACp__inl129_t;
  int SAC_ND_A_RC( SACp__inl129_t);
  const int SAC_ND_A_SIZE( SACp__inl129_t) = 4*2;
  const int SAC_ND_A_DIM( SACp__inl129_t) = 2;
  const int SAC_ND_A_SHAPE( SACp__inl129_t, 0) = 4;
  const int SAC_ND_A_SHAPE( SACp__inl129_t, 1) = 2;

  double SACp__inl126__flat_22;
  double SACp__inl126__flat_17;
  double SACp__inl124__flat_22;
  double SACp__inl124__flat_17;
  double SACp__inl122__flat_11;
  double SACp__inl122__flat_6;
  double SACp__inl120__flat_11;
  double SACp__inl120__flat_6;
  double SACp__inl119__flat_45;
  double SACp__inl119__flat_34;
  double SACp__inl119__flat_28;
  double SACp__inl112__flat_22;
  double SACp__inl112__flat_17;
  double SACp__inl111__flat_11;
  double SACp__inl111__flat_6;
  double SACp__inl110__flat_22;
  double SACp__inl110__flat_17;
  double SACp__inl109__flat_11;
  double SACp__inl109__flat_6;
  double SACp_cf_796;
  double SACp_cf_795;
  double SACp_cf_800;
  double SACp_cf_799;
  double SACp_cf_798;
  double SACp_cf_797;
  double SACp_cf_801;
  
  /*
   * ND_KS_DECL_ARRAY( double, SACp__inl103__flat_276, 1, 8)
   */
  double *SACp__inl103__flat_276;
  int SAC_ND_A_RC( SACp__inl103__flat_276);
  const int SAC_ND_A_SIZE( SACp__inl103__flat_276) = 8;
  const int SAC_ND_A_DIM( SACp__inl103__flat_276) = 1;
  const int SAC_ND_A_SHAPE( SACp__inl103__flat_276, 0) = 8;

  
  /*
   * ND_KS_DECL_ARRAY( int, SACp__inl103__flat_275, 1, 2)
   */
  int *SACp__inl103__flat_275;
  int SAC_ND_A_RC( SACp__inl103__flat_275);
  const int SAC_ND_A_SIZE( SACp__inl103__flat_275) = 2;
  const int SAC_ND_A_DIM( SACp__inl103__flat_275) = 1;
  const int SAC_ND_A_SHAPE( SACp__inl103__flat_275, 0) = 2;

  
  /*
   * ND_KS_DECL_ARRAY( double, SACp__inl103_t, 2, 4, 2)
   */
  double *SACp__inl103_t;
  int SAC_ND_A_RC( SACp__inl103_t);
  const int SAC_ND_A_SIZE( SACp__inl103_t) = 4*2;
  const int SAC_ND_A_DIM( SACp__inl103_t) = 2;
  const int SAC_ND_A_SHAPE( SACp__inl103_t, 0) = 4;
  const int SAC_ND_A_SHAPE( SACp__inl103_t, 1) = 2;

  double SACp__inl95_array_elem;
  int SACp__inl95__flat_393_8_2__;
  int SACp__inl90__flat_123_8_2__;
  double SACp__inl90__flat_122;

  
  /*
   * ND_KS_DECL_ARRAY_ARG( SACl_v, 2, 8, 2)
   */
  const int SAC_ND_A_SIZE(SACl_v)=8*2;
  const int SAC_ND_A_DIM(SACl_v)=2;
  const int SAC_ND_A_SHAPE(SACl_v, 0)=8;
  const int SAC_ND_A_SHAPE(SACl_v, 1)=2;

  
  /*
   * ND_KS_DECL_ARRAY_ARG( SACl_rofu, 2, 4, 2)
   */
  const int SAC_ND_A_SIZE(SACl_rofu)=4*2;
  const int SAC_ND_A_DIM(SACl_rofu)=2;
  const int SAC_ND_A_SHAPE(SACl_rofu, 0)=4;
  const int SAC_ND_A_SHAPE(SACl_rofu, 1)=2;

  SACp__inl90__flat_123_8_2__ = ((0 * 2) + 1); 
  SAC_ND_IDX_PSI_S( SACp__inl90__flat_123_8_2__, SACl_v, SACp__inl90__flat_122)
  SACp_cf_796 = SACp__inl90__flat_122; 
  SACp__inl90__flat_123_8_2__ = ((0 * 2) + 0); 
  SAC_ND_IDX_PSI_S( SACp__inl90__flat_123_8_2__, SACl_v, SACp__inl90__flat_122)
  SACp_cf_795 = SACp__inl90__flat_122; 
  SACp__inl90__flat_123_8_2__ = ((2 * 2) + 1); 
  SAC_ND_IDX_PSI_S( SACp__inl90__flat_123_8_2__, SACl_v, SACp__inl90__flat_122)
  SACp_cf_800 = SACp__inl90__flat_122; 
  SACp__inl90__flat_123_8_2__ = ((2 * 2) + 0); 
  SAC_ND_IDX_PSI_S( SACp__inl90__flat_123_8_2__, SACl_v, SACp__inl90__flat_122)
  SACp_cf_799 = SACp__inl90__flat_122; 
  SACp__inl90__flat_123_8_2__ = ((4 * 2) + 1); 
  SAC_ND_IDX_PSI_S( SACp__inl90__flat_123_8_2__, SACl_v, SACp__inl90__flat_122)
  SACp_cf_798 = SACp__inl90__flat_122; 
  SACp__inl90__flat_123_8_2__ = ((4 * 2) + 0); 
  SAC_ND_IDX_PSI_S( SACp__inl90__flat_123_8_2__, SACl_v, SACp__inl90__flat_122)
  SACp_cf_797 = SACp__inl90__flat_122; 
  SACp__inl90__flat_123_8_2__ = ((6 * 2) + 1); 
  SAC_ND_IDX_PSI_S( SACp__inl90__flat_123_8_2__, SACl_v, SACp__inl90__flat_122)
  SACp_cf_801 = SACp__inl90__flat_122; 
  SACp__inl90__flat_123_8_2__ = ((6 * 2) + 0); 
  SAC_ND_IDX_PSI_S( SACp__inl90__flat_123_8_2__, SACl_v, SACp__inl90__flat_122)
  SACp__inl109__flat_11 = (SACp_cf_796 + SACp_cf_798); 
  SACp__inl109__flat_6 = (SACp_cf_795 + SACp_cf_797); 
  SACp__inl110__flat_22 = (SACp_cf_796 - SACp_cf_798); 
  SACp__inl110__flat_17 = (SACp_cf_795 - SACp_cf_797); 
  SACp__inl111__flat_11 = (SACp_cf_800 + SACp_cf_801); 
  SACp__inl111__flat_6 = (SACp_cf_799 + SACp__inl90__flat_122); 
  SACp__inl112__flat_22 = (SACp_cf_800 - SACp_cf_801); 
  SACp__inl112__flat_17 = (SACp_cf_799 - SACp__inl90__flat_122); 
  SACp__inl119__flat_45 = (SACl_dir * SACp__inl112__flat_17); 
  SACp__inl119__flat_34 = (SACl_dir * SACp__inl112__flat_22); 
  SACp__inl119__flat_28 = (0.0 - SACp__inl119__flat_34); 
  SACp__inl120__flat_11 = (SACp__inl109__flat_11 + SACp__inl111__flat_11); 
  SACp__inl120__flat_6 = (SACp__inl109__flat_6 + SACp__inl111__flat_6); 
  SACp__inl122__flat_11 = (SACp__inl110__flat_22 + SACp__inl119__flat_45); 
  SACp__inl122__flat_6 = (SACp__inl110__flat_17 + SACp__inl119__flat_28); 
  SACp__inl124__flat_22 = (SACp__inl109__flat_11 - SACp__inl111__flat_11); 
  SACp__inl124__flat_17 = (SACp__inl109__flat_6 - SACp__inl111__flat_6); 
  SACp__inl126__flat_22 = (SACp__inl110__flat_22 - SACp__inl119__flat_45); 
  SACp__inl126__flat_17 = (SACp__inl110__flat_17 - SACp__inl119__flat_28); 
  SAC_ND_ALLOC_ARRAY( double, SACp__inl103__flat_276, 1)
  
  /*
   * ND_CREATE_CONST_ARRAY_S( SACp__inl103__flat_276, 8, SACp__inl120__flat_6, SACp__inl120__flat_11, SACp__inl122__flat_6, SACp__inl122__flat_11, SACp__inl124__flat_17, SACp__inl124__flat_22, SACp__inl126__flat_17, SACp__inl126__flat_22)
   */
  SAC_ND_WRITE_ARRAY( SACp__inl103__flat_276, 0) = SACp__inl120__flat_6;
  SAC_ND_WRITE_ARRAY( SACp__inl103__flat_276, 1) = SACp__inl120__flat_11;
  SAC_ND_WRITE_ARRAY( SACp__inl103__flat_276, 2) = SACp__inl122__flat_6;
  SAC_ND_WRITE_ARRAY( SACp__inl103__flat_276, 3) = SACp__inl122__flat_11;
  SAC_ND_WRITE_ARRAY( SACp__inl103__flat_276, 4) = SACp__inl124__flat_17;
  SAC_ND_WRITE_ARRAY( SACp__inl103__flat_276, 5) = SACp__inl124__flat_22;
  SAC_ND_WRITE_ARRAY( SACp__inl103__flat_276, 6) = SACp__inl126__flat_17;
  SAC_ND_WRITE_ARRAY( SACp__inl103__flat_276, 7) = SACp__inl126__flat_22;

  SAC_ND_ALLOC_ARRAY( int, SACp__inl103__flat_275, 1)
  
  /*
   * ND_CREATE_CONST_ARRAY_S( SACp__inl103__flat_275, 2, 4, 2)
   */
  SAC_ND_WRITE_ARRAY( SACp__inl103__flat_275, 0) = 4;
  SAC_ND_WRITE_ARRAY( SACp__inl103__flat_275, 1) = 2;

  SAC_ND_DEC_RC_FREE_ARRAY( SACp__inl103__flat_275, 1)
  SAC_ND_KS_ASSIGN_ARRAY( SACp__inl103__flat_276, SACp__inl103_t)
  SACp__inl95__flat_393_8_2__ = ((1 * 2) + 1); 
  SAC_ND_IDX_PSI_S( SACp__inl95__flat_393_8_2__, SACl_v, SACp__inl95_array_elem)
  SACp_cf_803 = SACp__inl95_array_elem; 
  SACp__inl95__flat_393_8_2__ = ((1 * 2) + 0); 
  SAC_ND_IDX_PSI_S( SACp__inl95__flat_393_8_2__, SACl_v, SACp__inl95_array_elem)
  SACp_cf_802 = SACp__inl95_array_elem; 
  SACp__inl95__flat_393_8_2__ = ((3 * 2) + 1); 
  SAC_ND_IDX_PSI_S( SACp__inl95__flat_393_8_2__, SACl_v, SACp__inl95_array_elem)
  SACp_cf_807 = SACp__inl95_array_elem; 
  SACp__inl95__flat_393_8_2__ = ((3 * 2) + 0); 
  SAC_ND_IDX_PSI_S( SACp__inl95__flat_393_8_2__, SACl_v, SACp__inl95_array_elem)
  SACp_cf_806 = SACp__inl95_array_elem; 
  SACp__inl95__flat_393_8_2__ = ((5 * 2) + 1); 
  SAC_ND_IDX_PSI_S( SACp__inl95__flat_393_8_2__, SACl_v, SACp__inl95_array_elem)
  SACp_cf_805 = SACp__inl95_array_elem; 
  SACp__inl95__flat_393_8_2__ = ((5 * 2) + 0); 
  SAC_ND_IDX_PSI_S( SACp__inl95__flat_393_8_2__, SACl_v, SACp__inl95_array_elem)
  SACp_cf_804 = SACp__inl95_array_elem; 
  SACp__inl95__flat_393_8_2__ = ((7 * 2) + 1); 
  SAC_ND_IDX_PSI_S( SACp__inl95__flat_393_8_2__, SACl_v, SACp__inl95_array_elem)
  SACp_cf_808 = SACp__inl95_array_elem; 
  SACp__inl95__flat_393_8_2__ = ((7 * 2) + 0); 
  SAC_ND_IDX_PSI_S( SACp__inl95__flat_393_8_2__, SACl_v, SACp__inl95_array_elem)
  SAC_ND_DEC_RC_FREE_ARRAY( SACl_v, 1)
  SACp__inl135__flat_11 = (SACp_cf_803 + SACp_cf_805); 
  SACp__inl135__flat_6 = (SACp_cf_802 + SACp_cf_804); 
  SACp__inl136__flat_22 = (SACp_cf_803 - SACp_cf_805); 
  SACp__inl136__flat_17 = (SACp_cf_802 - SACp_cf_804); 
  SACp__inl137__flat_11 = (SACp_cf_807 + SACp_cf_808); 
  SACp__inl137__flat_6 = (SACp_cf_806 + SACp__inl95_array_elem); 
  SACp__inl138__flat_22 = (SACp_cf_807 - SACp_cf_808); 
  SACp__inl138__flat_17 = (SACp_cf_806 - SACp__inl95_array_elem); 
  SACp__inl145__flat_45 = (SACl_dir * SACp__inl138__flat_17); 
  SACp__inl145__flat_34 = (SACl_dir * SACp__inl138__flat_22); 
  SACp__inl145__flat_28 = (0.0 - SACp__inl145__flat_34); 
  SACp__inl146__flat_11 = (SACp__inl135__flat_11 + SACp__inl137__flat_11); 
  SACp__inl146__flat_6 = (SACp__inl135__flat_6 + SACp__inl137__flat_6); 
  SACp__inl148__flat_11 = (SACp__inl136__flat_22 + SACp__inl145__flat_45); 
  SACp__inl148__flat_6 = (SACp__inl136__flat_17 + SACp__inl145__flat_28); 
  SACp__inl150__flat_22 = (SACp__inl135__flat_11 - SACp__inl137__flat_11); 
  SACp__inl150__flat_17 = (SACp__inl135__flat_6 - SACp__inl137__flat_6); 
  SACp__inl152__flat_22 = (SACp__inl136__flat_22 - SACp__inl145__flat_45); 
  SACp__inl152__flat_17 = (SACp__inl136__flat_17 - SACp__inl145__flat_28); 
  SAC_ND_ALLOC_ARRAY( double, SACp__inl129__flat_276, 1)
  
  /*
   * ND_CREATE_CONST_ARRAY_S( SACp__inl129__flat_276, 8, SACp__inl146__flat_6, SACp__inl146__flat_11, SACp__inl148__flat_6, SACp__inl148__flat_11, SACp__inl150__flat_17, SACp__inl150__flat_22, SACp__inl152__flat_17, SACp__inl152__flat_22)
   */
  SAC_ND_WRITE_ARRAY( SACp__inl129__flat_276, 0) = SACp__inl146__flat_6;
  SAC_ND_WRITE_ARRAY( SACp__inl129__flat_276, 1) = SACp__inl146__flat_11;
  SAC_ND_WRITE_ARRAY( SACp__inl129__flat_276, 2) = SACp__inl148__flat_6;
  SAC_ND_WRITE_ARRAY( SACp__inl129__flat_276, 3) = SACp__inl148__flat_11;
  SAC_ND_WRITE_ARRAY( SACp__inl129__flat_276, 4) = SACp__inl150__flat_17;
  SAC_ND_WRITE_ARRAY( SACp__inl129__flat_276, 5) = SACp__inl150__flat_22;
  SAC_ND_WRITE_ARRAY( SACp__inl129__flat_276, 6) = SACp__inl152__flat_17;
  SAC_ND_WRITE_ARRAY( SACp__inl129__flat_276, 7) = SACp__inl152__flat_22;

  SAC_ND_ALLOC_ARRAY( int, SACp__inl129__flat_275, 1)
  
  /*
   * ND_CREATE_CONST_ARRAY_S( SACp__inl129__flat_275, 2, 4, 2)
   */
  SAC_ND_WRITE_ARRAY( SACp__inl129__flat_275, 0) = 4;
  SAC_ND_WRITE_ARRAY( SACp__inl129__flat_275, 1) = 2;

  SAC_ND_DEC_RC_FREE_ARRAY( SACp__inl129__flat_275, 1)
  SAC_ND_KS_ASSIGN_ARRAY( SACp__inl129__flat_276, SACp__inl129_t)
  SAC_ND_KS_ASSIGN_ARRAY( SACp__inl129_t, SACl_fft_right)
  
  /*
   * ND_FUN_AP( SACf__mul___MAIN__cpx_4___MAIN__cpx_4_, , 3, out_rc, SACl_fft_right, in_rc, SACl_fft_right, in_rc, SACl_rofu)
   */
  SACf__mul___MAIN__cpx_4___MAIN__cpx_4_( SAC_ND_KS_AP_OUT_RC(SACl_fft_right), SAC_ND_KS_AP_IN_RC(SACl_fft_right), SAC_ND_KS_AP_IN_RC(SACl_rofu));

  SAC_ND_ALLOC_ARRAY( double, SACp__inl157__type_501, 0)
  SAC_ND_INC_RC( SACp__inl157__type_501, 1)
  SAC_ND_ALLOC_ARRAY( int, SACp__inl157__type_500, 1)
  SAC_PF_BEGIN_WITH( genarray)
    
    /*
     * WL_BEGIN__OFFSET( SACp__inl157__type_501, SACp__inl157__type_500, 2)
     */
    {
      int SAC_WL_OFFSET( SACp__inl157__type_501);
      int SAC_WL_MT_SCHEDULE_START( 0);
      int SAC_WL_MT_SCHEDULE_STOP( 0);
      int SAC_WL_MT_SCHEDULE_START( 1);
      int SAC_WL_MT_SCHEDULE_STOP( 1);

      
      /*
       * MT_SCHEDULER_BEGIN( 0, 2, 0, 0, 8, 2)
       */
      SAC_WL_MT_SCHEDULE_START( 0) = 0;
      SAC_WL_MT_SCHEDULE_STOP( 0) = 8;
      SAC_WL_MT_SCHEDULE_START( 1) = 0;
      SAC_WL_MT_SCHEDULE_STOP( 1) = 2;

      
      /*
       * WL_INIT_OFFSET( 2, SACp__inl157__type_501, SACp__inl157__type_500, 2)
       */
      SAC_WL_OFFSET( SACp__inl157__type_501)
        = SAC_WL_MT_SCHEDULE_START( 0) * SAC_ND_A_SHAPE( SACp__inl157__type_501, 1)
        + SAC_WL_MT_SCHEDULE_START( 1);

      SAC_WL_STRIDE_LOOP0_BEGIN( 0, SACp__inl157__type_500, SACp__inl157__type_502, 0, 4, 1)
        SAC_WL_GRID_UNROLL_BEGIN( 0, SACp__inl157__type_500, SACp__inl157__type_502, 0, 1)
          SAC_WL_SET_IDXVEC( 0, SACp__inl157__type_500, SACp__inl157__type_502, 0, 1)
          SAC_WL_STRIDE_LOOP0_BEGIN( 1, SACp__inl157__type_500, SACp__inl157__type_503, 0, 2, 1)
            SAC_WL_GRID_UNROLL_BEGIN( 1, SACp__inl157__type_500, SACp__inl157__type_503, 0, 1)
              SAC_WL_SET_IDXVEC( 1, SACp__inl157__type_500, SACp__inl157__type_503, 0, 1)
              
              /*
               * ND_KS_VECT2OFFSET( SACp__inl157__type_500_4_2__, SACp__inl157__type_500, 2, 2, 4, 2)
               */
              SACp__inl157__type_500_4_2__ = ( 2* SAC_ND_READ_ARRAY( SACp__inl157__type_500, 0)+SAC_ND_READ_ARRAY( SACp__inl157__type_500, 1)) ;

              SAC_ND_IDX_PSI_S( SACp__inl157__type_500_4_2__, SACl_fft_right, SACp__inl156__flat_55)
              SAC_ND_IDX_PSI_S( SACp__inl157__type_500_4_2__, SACp__inl103_t, SACp__inl156__flat_53)
              SACp__inl156__flat_52 = (SACp__inl156__flat_53 + SACp__inl156__flat_55); 
              SACp_wlt_794 = SACp__inl156__flat_52; 
              
              /*
               * WL_ASSIGN( 0, SACp_wlt_794, 2, SACp__inl157__type_501, SACp__inl157__type_500, 2, SACp__inl157__type_502, SACp__inl157__type_503)
               */
              SAC_TR_WL_PRINT( ("index vector [%d, %d] (== offset %d) -- offset %d -- assign", SACp__inl157__type_502, SACp__inl157__type_503, ( SAC_ND_A_SHAPE( SACp__inl157__type_501, 1) * SACp__inl157__type_502 + SACp__inl157__type_503 ), SAC_WL_OFFSET( SACp__inl157__type_501)));
              SAC_ND_WRITE_ARRAY( SACp__inl157__type_501, SAC_WL_OFFSET( SACp__inl157__type_501)) = SACp_wlt_794;
              SAC_WL_OFFSET( SACp__inl157__type_501)++;

            SAC_WL_GRID_UNROLL_END( 1, SACp__inl157__type_500, SACp__inl157__type_503, 0, 1)
          SAC_WL_STRIDE_LOOP_END( 1, SACp__inl157__type_500, SACp__inl157__type_503, 0, 2, 1)
        SAC_WL_GRID_UNROLL_END( 0, SACp__inl157__type_500, SACp__inl157__type_502, 0, 1)
      SAC_WL_STRIDE_LOOP_END( 0, SACp__inl157__type_500, SACp__inl157__type_502, 0, 4, 1)
      SAC_WL_STRIDE_LOOP0_BEGIN( 0, SACp__inl157__type_500, SACp__inl157__type_502, 4, 8, 1)
        SAC_WL_GRID_UNROLL_BEGIN( 0, SACp__inl157__type_500, SACp__inl157__type_502, 0, 1)
          SAC_WL_SET_IDXVEC( 0, SACp__inl157__type_500, SACp__inl157__type_502, 0, 1)
          SAC_WL_STRIDE_LOOP0_BEGIN( 1, SACp__inl157__type_500, SACp__inl157__type_503, 0, 2, 1)
            SAC_WL_GRID_UNROLL_BEGIN( 1, SACp__inl157__type_500, SACp__inl157__type_503, 0, 1)
              SAC_WL_SET_IDXVEC( 1, SACp__inl157__type_500, SACp__inl157__type_503, 0, 1)
              
              /*
               * ND_KS_VECT2OFFSET( SACp__inl157__type_500_4_2__, SACp__inl157__type_500, 2, 2, 4, 2)
               */
              SACp__inl157__type_500_4_2__ = ( 2* SAC_ND_READ_ARRAY( SACp__inl157__type_500, 0)+SAC_ND_READ_ARRAY( SACp__inl157__type_500, 1)) ;

              SACp__inl157__type_499_4_2__ = ((4 * 2) + 0); 
              SACp__inl157__type_497_4_2__ = (SACp__inl157__type_500_4_2__ - SACp__inl157__type_499_4_2__); 
              SAC_ND_IDX_PSI_S( SACp__inl157__type_497_4_2__, SACl_fft_right, SACp__inl155__flat_62)
              SAC_ND_IDX_PSI_S( SACp__inl157__type_497_4_2__, SACp__inl103_t, SACp__inl155__flat_60)
              SACp__inl155__flat_59 = (SACp__inl155__flat_60 - SACp__inl155__flat_62); 
              SACp__inl157__type_498 = SACp__inl155__flat_59; 
              
              /*
               * WL_ASSIGN( 0, SACp__inl157__type_498, 2, SACp__inl157__type_501, SACp__inl157__type_500, 2, SACp__inl157__type_502, SACp__inl157__type_503)
               */
              SAC_TR_WL_PRINT( ("index vector [%d, %d] (== offset %d) -- offset %d -- assign", SACp__inl157__type_502, SACp__inl157__type_503, ( SAC_ND_A_SHAPE( SACp__inl157__type_501, 1) * SACp__inl157__type_502 + SACp__inl157__type_503 ), SAC_WL_OFFSET( SACp__inl157__type_501)));
              SAC_ND_WRITE_ARRAY( SACp__inl157__type_501, SAC_WL_OFFSET( SACp__inl157__type_501)) = SACp__inl157__type_498;
              SAC_WL_OFFSET( SACp__inl157__type_501)++;

            SAC_WL_GRID_UNROLL_END( 1, SACp__inl157__type_500, SACp__inl157__type_503, 0, 1)
          SAC_WL_STRIDE_LOOP_END( 1, SACp__inl157__type_500, SACp__inl157__type_503, 0, 2, 1)
        SAC_WL_GRID_UNROLL_END( 0, SACp__inl157__type_500, SACp__inl157__type_502, 0, 1)
      SAC_WL_STRIDE_LOOP_END( 0, SACp__inl157__type_500, SACp__inl157__type_502, 4, 8, 1)
    
      /*
       * MT_SCHEDULER_END( 0, 2, 0, 0, 8, 2)
       */


    
      /*
       * WL_END__OFFSET( SACp__inl157__type_501, SACp__inl157__type_500, 2)
       */
    }

  SAC_PF_END_WITH( genarray)
  SAC_ND_DEC_RC_FREE_ARRAY( SACl_fft_right, 1)
  SAC_ND_DEC_RC_FREE_ARRAY( SACp__inl103_t, 1)
  SAC_ND_DEC_RC_FREE_ARRAY( SACp__inl157__type_500, 1)
  SAC_ND_KS_ASSIGN_ARRAY( SACp__inl157__type_501, SACl_res)
  
  /*
   * ND_FUN_RET( , 1, out_rc, SACl_res, SACl_res)
   */
  SAC_ND_KS_RET_OUT_RC( SACl_res, SACl_res);
  

}


/*
 * ND_FUN_DEC( SACf_FFT1d__d__MAIN__cpx_16___MAIN__cpx_8_, void, 4, out_rc, double *, SACl_res, in, double, SACl_dir, in_rc, double *, SACl_v, in_rc, double *, SACl_rofu)
 */
void SACf_FFT1d__d__MAIN__cpx_16___MAIN__cpx_8_( SAC_ND_KS_DEC_OUT_RC(double *, SACl_res), double SACl_dir, SAC_ND_KS_DEC_IN_RC( double *, SACl_v), SAC_ND_KS_DEC_IN_RC( double *, SACl_rofu))
{ 
  
  /*
   * ND_KS_DECL_ARRAY( double, SACp_pcomp_940___inl170_rn, 2, 4, 2)
   */
  double *SACp_pcomp_940___inl170_rn;
  int SAC_ND_A_RC( SACp_pcomp_940___inl170_rn);
  const int SAC_ND_A_SIZE( SACp_pcomp_940___inl170_rn) = 4*2;
  const int SAC_ND_A_DIM( SACp_pcomp_940___inl170_rn) = 2;
  const int SAC_ND_A_SHAPE( SACp_pcomp_940___inl170_rn, 0) = 4;
  const int SAC_ND_A_SHAPE( SACp_pcomp_940___inl170_rn, 1) = 2;

  
  /*
   * ND_KS_DECL_ARRAY( double, SACp_pcomp_939___inl170_rn, 2, 4, 2)
   */
  double *SACp_pcomp_939___inl170_rn;
  int SAC_ND_A_RC( SACp_pcomp_939___inl170_rn);
  const int SAC_ND_A_SIZE( SACp_pcomp_939___inl170_rn) = 4*2;
  const int SAC_ND_A_DIM( SACp_pcomp_939___inl170_rn) = 2;
  const int SAC_ND_A_SHAPE( SACp_pcomp_939___inl170_rn, 0) = 4;
  const int SAC_ND_A_SHAPE( SACp_pcomp_939___inl170_rn, 1) = 2;

  
  /*
   * ND_KS_DECL_ARRAY( double, SACp_pcomp_938___inl170_rn, 2, 4, 2)
   */
  double *SACp_pcomp_938___inl170_rn;
  int SAC_ND_A_RC( SACp_pcomp_938___inl170_rn);
  const int SAC_ND_A_SIZE( SACp_pcomp_938___inl170_rn) = 4*2;
  const int SAC_ND_A_DIM( SACp_pcomp_938___inl170_rn) = 2;
  const int SAC_ND_A_SHAPE( SACp_pcomp_938___inl170_rn, 0) = 4;
  const int SAC_ND_A_SHAPE( SACp_pcomp_938___inl170_rn, 1) = 2;

  
  /*
   * ND_KS_DECL_ARRAY( double, SACp_pcomp_937___inl170_rn, 2, 4, 2)
   */
  double *SACp_pcomp_937___inl170_rn;
  int SAC_ND_A_RC( SACp_pcomp_937___inl170_rn);
  const int SAC_ND_A_SIZE( SACp_pcomp_937___inl170_rn) = 4*2;
  const int SAC_ND_A_DIM( SACp_pcomp_937___inl170_rn) = 2;
  const int SAC_ND_A_SHAPE( SACp_pcomp_937___inl170_rn, 0) = 4;
  const int SAC_ND_A_SHAPE( SACp_pcomp_937___inl170_rn, 1) = 2;

  
  /*
   * ND_KS_DECL_ARRAY( double, SACp_pcomp_936___inl170_rn, 2, 4, 2)
   */
  double *SACp_pcomp_936___inl170_rn;
  int SAC_ND_A_RC( SACp_pcomp_936___inl170_rn);
  const int SAC_ND_A_SIZE( SACp_pcomp_936___inl170_rn) = 4*2;
  const int SAC_ND_A_DIM( SACp_pcomp_936___inl170_rn) = 2;
  const int SAC_ND_A_SHAPE( SACp_pcomp_936___inl170_rn, 0) = 4;
  const int SAC_ND_A_SHAPE( SACp_pcomp_936___inl170_rn, 1) = 2;

  
  /*
   * ND_KS_DECL_ARRAY( double, SACp_pcomp_935___inl170_rn, 2, 4, 2)
   */
  double *SACp_pcomp_935___inl170_rn;
  int SAC_ND_A_RC( SACp_pcomp_935___inl170_rn);
  const int SAC_ND_A_SIZE( SACp_pcomp_935___inl170_rn) = 4*2;
  const int SAC_ND_A_DIM( SACp_pcomp_935___inl170_rn) = 2;
  const int SAC_ND_A_SHAPE( SACp_pcomp_935___inl170_rn, 0) = 4;
  const int SAC_ND_A_SHAPE( SACp_pcomp_935___inl170_rn, 1) = 2;

  
  /*
   * ND_KS_DECL_ARRAY( double, SACp_pcomp_934___inl170_rn, 2, 4, 2)
   */
  double *SACp_pcomp_934___inl170_rn;
  int SAC_ND_A_RC( SACp_pcomp_934___inl170_rn);
  const int SAC_ND_A_SIZE( SACp_pcomp_934___inl170_rn) = 4*2;
  const int SAC_ND_A_DIM( SACp_pcomp_934___inl170_rn) = 2;
  const int SAC_ND_A_SHAPE( SACp_pcomp_934___inl170_rn, 0) = 4;
  const int SAC_ND_A_SHAPE( SACp_pcomp_934___inl170_rn, 1) = 2;

  
  /*
   * ND_KS_DECL_ARRAY( double, SACp_pcomp_933___inl170_rn, 2, 4, 2)
   */
  double *SACp_pcomp_933___inl170_rn;
  int SAC_ND_A_RC( SACp_pcomp_933___inl170_rn);
  const int SAC_ND_A_SIZE( SACp_pcomp_933___inl170_rn) = 4*2;
  const int SAC_ND_A_DIM( SACp_pcomp_933___inl170_rn) = 2;
  const int SAC_ND_A_SHAPE( SACp_pcomp_933___inl170_rn, 0) = 4;
  const int SAC_ND_A_SHAPE( SACp_pcomp_933___inl170_rn, 1) = 2;

  double SACp_wlt_812;
  
  /*
   * ND_KS_DECL_ARRAY( double, SACl_res, 2, 16, 2)
   */
  double *SACl_res;
  int SAC_ND_A_RC( SACl_res);
  const int SAC_ND_A_SIZE( SACl_res) = 16*2;
  const int SAC_ND_A_DIM( SACl_res) = 2;
  const int SAC_ND_A_SHAPE( SACl_res, 0) = 16;
  const int SAC_ND_A_SHAPE( SACl_res, 1) = 2;

  
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
   * ND_KS_DECL_ARRAY( double, SACl_rofu_select, 2, 4, 2)
   */
  double *SACl_rofu_select;
  int SAC_ND_A_RC( SACl_rofu_select);
  const int SAC_ND_A_SIZE( SACl_rofu_select) = 4*2;
  const int SAC_ND_A_DIM( SACl_rofu_select) = 2;
  const int SAC_ND_A_SHAPE( SACl_rofu_select, 0) = 4;
  const int SAC_ND_A_SHAPE( SACl_rofu_select, 1) = 2;

  
  /*
   * ND_KS_DECL_ARRAY( double, SACl_right_v, 2, 8, 2)
   */
  double *SACl_right_v;
  int SAC_ND_A_RC( SACl_right_v);
  const int SAC_ND_A_SIZE( SACl_right_v) = 8*2;
  const int SAC_ND_A_DIM( SACl_right_v) = 2;
  const int SAC_ND_A_SHAPE( SACl_right_v, 0) = 8;
  const int SAC_ND_A_SHAPE( SACl_right_v, 1) = 2;

  
  /*
   * ND_KS_DECL_ARRAY( double, SACl_left_v, 2, 8, 2)
   */
  double *SACl_left_v;
  int SAC_ND_A_RC( SACl_left_v);
  const int SAC_ND_A_SIZE( SACl_left_v) = 8*2;
  const int SAC_ND_A_DIM( SACl_left_v) = 2;
  const int SAC_ND_A_SHAPE( SACl_left_v, 0) = 8;
  const int SAC_ND_A_SHAPE( SACl_left_v, 1) = 2;

  
  /*
   * ND_KS_DECL_ARRAY( int, SACp__inl175__type_519, 1, 2)
   */
  int *SACp__inl175__type_519;
  int SAC_ND_A_RC( SACp__inl175__type_519);
  const int SAC_ND_A_SIZE( SACp__inl175__type_519) = 2;
  const int SAC_ND_A_DIM( SACp__inl175__type_519) = 1;
  const int SAC_ND_A_SHAPE( SACp__inl175__type_519, 0) = 2;

  int SACp__inl175__type_519_8_2__;
  int SACp__inl175__type_521;
  int SACp__inl175__type_522;
  int SACp__inl175__type_518_8_2__;
  int SACp__inl175__type_516_8_2__;
  double SACp__inl175__type_517;
  
  /*
   * ND_KS_DECL_ARRAY( double, SACp__inl175__type_520, 2, 16, 2)
   */
  double *SACp__inl175__type_520;
  int SAC_ND_A_RC( SACp__inl175__type_520);
  const int SAC_ND_A_SIZE( SACp__inl175__type_520) = 16*2;
  const int SAC_ND_A_DIM( SACp__inl175__type_520) = 2;
  const int SAC_ND_A_SHAPE( SACp__inl175__type_520, 0) = 16;
  const int SAC_ND_A_SHAPE( SACp__inl175__type_520, 1) = 2;

  double SACp__inl174__flat_55;
  double SACp__inl174__flat_53;
  double SACp__inl174__flat_52;
  double SACp__inl173__flat_62;
  double SACp__inl173__flat_60;
  double SACp__inl173__flat_59;
  int SACp__inl170__flat_123_8_2__;
  double SACp__inl170__flat_122;
  
  /*
   * ND_KS_DECL_ARRAY( double, SACp__inl170_rn, 2, 4, 2)
   */
  double *SACp__inl170_rn;
  int SAC_ND_A_RC( SACp__inl170_rn);
  const int SAC_ND_A_SIZE( SACp__inl170_rn) = 4*2;
  const int SAC_ND_A_DIM( SACp__inl170_rn) = 2;
  const int SAC_ND_A_SHAPE( SACp__inl170_rn, 0) = 4;
  const int SAC_ND_A_SHAPE( SACp__inl170_rn, 1) = 2;

  
  /*
   * ND_KS_DECL_ARRAY( int, SACp__inl167__flat_121_iv, 1, 2)
   */
  int *SACp__inl167__flat_121_iv;
  int SAC_ND_A_RC( SACp__inl167__flat_121_iv);
  const int SAC_ND_A_SIZE( SACp__inl167__flat_121_iv) = 2;
  const int SAC_ND_A_DIM( SACp__inl167__flat_121_iv) = 1;
  const int SAC_ND_A_SHAPE( SACp__inl167__flat_121_iv, 0) = 2;

  int SACp__inl167__type_446;
  int SACp__inl167__type_447;
  int SACp__inl167__flat_124;
  int SACp__inl167__flat_123_16_2__;
  double SACp__inl167__flat_122;
  
  /*
   * ND_KS_DECL_ARRAY( double, SACp__inl167_rn, 2, 8, 2)
   */
  double *SACp__inl167_rn;
  int SAC_ND_A_RC( SACp__inl167_rn);
  const int SAC_ND_A_SIZE( SACp__inl167_rn) = 8*2;
  const int SAC_ND_A_DIM( SACp__inl167_rn) = 2;
  const int SAC_ND_A_SHAPE( SACp__inl167_rn, 0) = 8;
  const int SAC_ND_A_SHAPE( SACp__inl167_rn, 1) = 2;

  double SACp__inl165_array_elem;
  int SACp__inl165__flat_394_16_2__;
  int SACp__inl165__flat_393_16_2__;
  
  /*
   * ND_KS_DECL_ARRAY( int, SACp__inl160__flat_121_iv, 1, 2)
   */
  int *SACp__inl160__flat_121_iv;
  int SAC_ND_A_RC( SACp__inl160__flat_121_iv);
  const int SAC_ND_A_SIZE( SACp__inl160__flat_121_iv) = 2;
  const int SAC_ND_A_DIM( SACp__inl160__flat_121_iv) = 1;
  const int SAC_ND_A_SHAPE( SACp__inl160__flat_121_iv, 0) = 2;

  int SACp__inl160__type_443;
  int SACp__inl160__type_444;
  int SACp__inl160__flat_124;
  int SACp__inl160__flat_123_16_2__;
  double SACp__inl160__flat_122;
  
  /*
   * ND_KS_DECL_ARRAY( double, SACp__inl160_rn, 2, 8, 2)
   */
  double *SACp__inl160_rn;
  int SAC_ND_A_RC( SACp__inl160_rn);
  const int SAC_ND_A_SIZE( SACp__inl160_rn) = 8*2;
  const int SAC_ND_A_DIM( SACp__inl160_rn) = 2;
  const int SAC_ND_A_SHAPE( SACp__inl160_rn, 0) = 8;
  const int SAC_ND_A_SHAPE( SACp__inl160_rn, 1) = 2;


  
  /*
   * ND_KS_DECL_ARRAY_ARG( SACl_v, 2, 16, 2)
   */
  const int SAC_ND_A_SIZE(SACl_v)=16*2;
  const int SAC_ND_A_DIM(SACl_v)=2;
  const int SAC_ND_A_SHAPE(SACl_v, 0)=16;
  const int SAC_ND_A_SHAPE(SACl_v, 1)=2;

  
  /*
   * ND_KS_DECL_ARRAY_ARG( SACl_rofu, 2, 8, 2)
   */
  const int SAC_ND_A_SIZE(SACl_rofu)=8*2;
  const int SAC_ND_A_DIM(SACl_rofu)=2;
  const int SAC_ND_A_SHAPE(SACl_rofu, 0)=8;
  const int SAC_ND_A_SHAPE(SACl_rofu, 1)=2;

  SAC_ND_ALLOC_ARRAY( double, SACp__inl160_rn, 0)
  SAC_ND_INC_RC( SACp__inl160_rn, 1)
  SAC_PF_BEGIN_WITH( genarray)
    
    /*
     * WL_BEGIN__OFFSET( SACp__inl160_rn, SACp__inl160__flat_121_iv, 2)
     */
    {
      int SAC_WL_OFFSET( SACp__inl160_rn);
      int SAC_WL_MT_SCHEDULE_START( 0);
      int SAC_WL_MT_SCHEDULE_STOP( 0);
      int SAC_WL_MT_SCHEDULE_START( 1);
      int SAC_WL_MT_SCHEDULE_STOP( 1);

      
      /*
       * MT_SCHEDULER_BEGIN( 0, 2, 0, 0, 8, 2)
       */
      SAC_WL_MT_SCHEDULE_START( 0) = 0;
      SAC_WL_MT_SCHEDULE_STOP( 0) = 8;
      SAC_WL_MT_SCHEDULE_START( 1) = 0;
      SAC_WL_MT_SCHEDULE_STOP( 1) = 2;

      
      /*
       * WL_INIT_OFFSET( 2, SACp__inl160_rn, SACp__inl160__flat_121_iv, 2)
       */
      SAC_WL_OFFSET( SACp__inl160_rn)
        = SAC_WL_MT_SCHEDULE_START( 0) * SAC_ND_A_SHAPE( SACp__inl160_rn, 1)
        + SAC_WL_MT_SCHEDULE_START( 1);

      SAC_WL_STRIDE_LOOP0_BEGIN( 0, SACp__inl160__flat_121_iv, SACp__inl160__type_443, 0, 8, 1)
        SAC_WL_GRID_UNROLL_BEGIN( 0, SACp__inl160__flat_121_iv, SACp__inl160__type_443, 0, 1)
          SAC_WL_STRIDE_LOOP0_BEGIN( 1, SACp__inl160__flat_121_iv, SACp__inl160__type_444, 0, 2, 1)
            SAC_WL_GRID_UNROLL_BEGIN( 1, SACp__inl160__flat_121_iv, SACp__inl160__type_444, 0, 1)
              SACp__inl160__flat_124 = (2 * SACp__inl160__type_443); 
              SACp__inl160__flat_123_16_2__ = ((SACp__inl160__flat_124 * 2) + SACp__inl160__type_444); 
              SAC_ND_IDX_PSI_S( SACp__inl160__flat_123_16_2__, SACl_v, SACp__inl160__flat_122)
              
              /*
               * WL_ASSIGN( 0, SACp__inl160__flat_122, 2, SACp__inl160_rn, SACp__inl160__flat_121_iv, 2, SACp__inl160__type_443, SACp__inl160__type_444)
               */
              SAC_TR_WL_PRINT( ("index vector [%d, %d] (== offset %d) -- offset %d -- assign", SACp__inl160__type_443, SACp__inl160__type_444, ( SAC_ND_A_SHAPE( SACp__inl160_rn, 1) * SACp__inl160__type_443 + SACp__inl160__type_444 ), SAC_WL_OFFSET( SACp__inl160_rn)));
              SAC_ND_WRITE_ARRAY( SACp__inl160_rn, SAC_WL_OFFSET( SACp__inl160_rn)) = SACp__inl160__flat_122;
              SAC_WL_OFFSET( SACp__inl160_rn)++;

            SAC_WL_GRID_UNROLL_END( 1, SACp__inl160__flat_121_iv, SACp__inl160__type_444, 0, 1)
          SAC_WL_STRIDE_LOOP_END( 1, SACp__inl160__flat_121_iv, SACp__inl160__type_444, 0, 2, 1)
        SAC_WL_GRID_UNROLL_END( 0, SACp__inl160__flat_121_iv, SACp__inl160__type_443, 0, 1)
      SAC_WL_STRIDE_LOOP_END( 0, SACp__inl160__flat_121_iv, SACp__inl160__type_443, 0, 8, 1)
    
      /*
       * MT_SCHEDULER_END( 0, 2, 0, 0, 8, 2)
       */


    
      /*
       * WL_END__OFFSET( SACp__inl160_rn, SACp__inl160__flat_121_iv, 2)
       */
    }

  SAC_PF_END_WITH( genarray)
  SAC_ND_KS_ASSIGN_ARRAY( SACp__inl160_rn, SACl_left_v)
  SAC_ND_ALLOC_ARRAY( double, SACp__inl167_rn, 0)
  SAC_ND_INC_RC( SACp__inl167_rn, 1)
  SAC_PF_BEGIN_WITH( genarray)
    
    /*
     * WL_BEGIN__OFFSET( SACp__inl167_rn, SACp__inl167__flat_121_iv, 2)
     */
    {
      int SAC_WL_OFFSET( SACp__inl167_rn);
      int SAC_WL_MT_SCHEDULE_START( 0);
      int SAC_WL_MT_SCHEDULE_STOP( 0);
      int SAC_WL_MT_SCHEDULE_START( 1);
      int SAC_WL_MT_SCHEDULE_STOP( 1);

      
      /*
       * MT_SCHEDULER_BEGIN( 0, 2, 0, 0, 8, 2)
       */
      SAC_WL_MT_SCHEDULE_START( 0) = 0;
      SAC_WL_MT_SCHEDULE_STOP( 0) = 8;
      SAC_WL_MT_SCHEDULE_START( 1) = 0;
      SAC_WL_MT_SCHEDULE_STOP( 1) = 2;

      
      /*
       * WL_INIT_OFFSET( 2, SACp__inl167_rn, SACp__inl167__flat_121_iv, 2)
       */
      SAC_WL_OFFSET( SACp__inl167_rn)
        = SAC_WL_MT_SCHEDULE_START( 0) * SAC_ND_A_SHAPE( SACp__inl167_rn, 1)
        + SAC_WL_MT_SCHEDULE_START( 1);

      SAC_WL_STRIDE_LOOP0_BEGIN( 0, SACp__inl167__flat_121_iv, SACp__inl167__type_446, 0, 8, 1)
        SAC_WL_GRID_UNROLL_BEGIN( 0, SACp__inl167__flat_121_iv, SACp__inl167__type_446, 0, 1)
          SAC_WL_STRIDE_LOOP0_BEGIN( 1, SACp__inl167__flat_121_iv, SACp__inl167__type_447, 0, 2, 1)
            SAC_WL_GRID_UNROLL_BEGIN( 1, SACp__inl167__flat_121_iv, SACp__inl167__type_447, 0, 1)
              SACp__inl167__flat_124 = (2 * SACp__inl167__type_446); 
              SACp__inl167__flat_123_16_2__ = ((SACp__inl167__flat_124 * 2) + SACp__inl167__type_447); 
              SACp__inl165__flat_394_16_2__ = ((1 * 2) + 0); 
              SACp__inl165__flat_393_16_2__ = (SACp__inl165__flat_394_16_2__ + SACp__inl167__flat_123_16_2__); 
              SAC_ND_IDX_PSI_S( SACp__inl165__flat_393_16_2__, SACl_v, SACp__inl165_array_elem)
              SACp__inl167__flat_122 = SACp__inl165_array_elem; 
              
              /*
               * WL_ASSIGN( 0, SACp__inl167__flat_122, 2, SACp__inl167_rn, SACp__inl167__flat_121_iv, 2, SACp__inl167__type_446, SACp__inl167__type_447)
               */
              SAC_TR_WL_PRINT( ("index vector [%d, %d] (== offset %d) -- offset %d -- assign", SACp__inl167__type_446, SACp__inl167__type_447, ( SAC_ND_A_SHAPE( SACp__inl167_rn, 1) * SACp__inl167__type_446 + SACp__inl167__type_447 ), SAC_WL_OFFSET( SACp__inl167_rn)));
              SAC_ND_WRITE_ARRAY( SACp__inl167_rn, SAC_WL_OFFSET( SACp__inl167_rn)) = SACp__inl167__flat_122;
              SAC_WL_OFFSET( SACp__inl167_rn)++;

            SAC_WL_GRID_UNROLL_END( 1, SACp__inl167__flat_121_iv, SACp__inl167__type_447, 0, 1)
          SAC_WL_STRIDE_LOOP_END( 1, SACp__inl167__flat_121_iv, SACp__inl167__type_447, 0, 2, 1)
        SAC_WL_GRID_UNROLL_END( 0, SACp__inl167__flat_121_iv, SACp__inl167__type_446, 0, 1)
      SAC_WL_STRIDE_LOOP_END( 0, SACp__inl167__flat_121_iv, SACp__inl167__type_446, 0, 8, 1)
    
      /*
       * MT_SCHEDULER_END( 0, 2, 0, 0, 8, 2)
       */


    
      /*
       * WL_END__OFFSET( SACp__inl167_rn, SACp__inl167__flat_121_iv, 2)
       */
    }

  SAC_PF_END_WITH( genarray)
  SAC_ND_DEC_RC_FREE_ARRAY( SACl_v, 1)
  SAC_ND_KS_ASSIGN_ARRAY( SACp__inl167_rn, SACl_right_v)
  SAC_ND_ALLOC_ARRAY( double, SACp__inl170_rn, 1)
  
  /*
   * ND_CREATE_CONST_ARRAY_S( SACp__inl170_rn, 8, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0)
   */
  SAC_ND_WRITE_ARRAY( SACp__inl170_rn, 0) = 0.0;
  SAC_ND_WRITE_ARRAY( SACp__inl170_rn, 1) = 0.0;
  SAC_ND_WRITE_ARRAY( SACp__inl170_rn, 2) = 0.0;
  SAC_ND_WRITE_ARRAY( SACp__inl170_rn, 3) = 0.0;
  SAC_ND_WRITE_ARRAY( SACp__inl170_rn, 4) = 0.0;
  SAC_ND_WRITE_ARRAY( SACp__inl170_rn, 5) = 0.0;
  SAC_ND_WRITE_ARRAY( SACp__inl170_rn, 6) = 0.0;
  SAC_ND_WRITE_ARRAY( SACp__inl170_rn, 7) = 0.0;

  SACp__inl170__flat_123_8_2__ = ((6 * 2) + 1); 
  SAC_ND_IDX_PSI_S( SACp__inl170__flat_123_8_2__, SACl_rofu, SACp__inl170__flat_122)
  SAC_ND_KS_ASSIGN_ARRAY( SACp__inl170_rn, SACp_pcomp_933___inl170_rn)
  SAC_ND_IDX_MODARRAY_AxVxS_CHECK_REUSE( double, SACp__inl170_rn, SACp_pcomp_933___inl170_rn, ((3 * 2) + 1), SACp__inl170__flat_122)
  SAC_ND_INC_RC( SACp__inl170_rn, 1)
  SAC_ND_DEC_RC_FREE_ARRAY( SACp_pcomp_933___inl170_rn, 1)
  SACp__inl170__flat_123_8_2__ = ((6 * 2) + 0); 
  SAC_ND_IDX_PSI_S( SACp__inl170__flat_123_8_2__, SACl_rofu, SACp__inl170__flat_122)
  SAC_ND_KS_ASSIGN_ARRAY( SACp__inl170_rn, SACp_pcomp_934___inl170_rn)
  SAC_ND_IDX_MODARRAY_AxVxS_CHECK_REUSE( double, SACp__inl170_rn, SACp_pcomp_934___inl170_rn, ((3 * 2) + 0), SACp__inl170__flat_122)
  SAC_ND_INC_RC( SACp__inl170_rn, 1)
  SAC_ND_DEC_RC_FREE_ARRAY( SACp_pcomp_934___inl170_rn, 1)
  SACp__inl170__flat_123_8_2__ = ((4 * 2) + 1); 
  SAC_ND_IDX_PSI_S( SACp__inl170__flat_123_8_2__, SACl_rofu, SACp__inl170__flat_122)
  SAC_ND_KS_ASSIGN_ARRAY( SACp__inl170_rn, SACp_pcomp_935___inl170_rn)
  SAC_ND_IDX_MODARRAY_AxVxS_CHECK_REUSE( double, SACp__inl170_rn, SACp_pcomp_935___inl170_rn, ((2 * 2) + 1), SACp__inl170__flat_122)
  SAC_ND_INC_RC( SACp__inl170_rn, 1)
  SAC_ND_DEC_RC_FREE_ARRAY( SACp_pcomp_935___inl170_rn, 1)
  SACp__inl170__flat_123_8_2__ = ((4 * 2) + 0); 
  SAC_ND_IDX_PSI_S( SACp__inl170__flat_123_8_2__, SACl_rofu, SACp__inl170__flat_122)
  SAC_ND_KS_ASSIGN_ARRAY( SACp__inl170_rn, SACp_pcomp_936___inl170_rn)
  SAC_ND_IDX_MODARRAY_AxVxS_CHECK_REUSE( double, SACp__inl170_rn, SACp_pcomp_936___inl170_rn, ((2 * 2) + 0), SACp__inl170__flat_122)
  SAC_ND_INC_RC( SACp__inl170_rn, 1)
  SAC_ND_DEC_RC_FREE_ARRAY( SACp_pcomp_936___inl170_rn, 1)
  SACp__inl170__flat_123_8_2__ = ((2 * 2) + 1); 
  SAC_ND_IDX_PSI_S( SACp__inl170__flat_123_8_2__, SACl_rofu, SACp__inl170__flat_122)
  SAC_ND_KS_ASSIGN_ARRAY( SACp__inl170_rn, SACp_pcomp_937___inl170_rn)
  SAC_ND_IDX_MODARRAY_AxVxS_CHECK_REUSE( double, SACp__inl170_rn, SACp_pcomp_937___inl170_rn, ((1 * 2) + 1), SACp__inl170__flat_122)
  SAC_ND_INC_RC( SACp__inl170_rn, 1)
  SAC_ND_DEC_RC_FREE_ARRAY( SACp_pcomp_937___inl170_rn, 1)
  SACp__inl170__flat_123_8_2__ = ((2 * 2) + 0); 
  SAC_ND_IDX_PSI_S( SACp__inl170__flat_123_8_2__, SACl_rofu, SACp__inl170__flat_122)
  SAC_ND_KS_ASSIGN_ARRAY( SACp__inl170_rn, SACp_pcomp_938___inl170_rn)
  SAC_ND_IDX_MODARRAY_AxVxS_CHECK_REUSE( double, SACp__inl170_rn, SACp_pcomp_938___inl170_rn, ((1 * 2) + 0), SACp__inl170__flat_122)
  SAC_ND_INC_RC( SACp__inl170_rn, 1)
  SAC_ND_DEC_RC_FREE_ARRAY( SACp_pcomp_938___inl170_rn, 1)
  SACp__inl170__flat_123_8_2__ = ((0 * 2) + 1); 
  SAC_ND_IDX_PSI_S( SACp__inl170__flat_123_8_2__, SACl_rofu, SACp__inl170__flat_122)
  SAC_ND_KS_ASSIGN_ARRAY( SACp__inl170_rn, SACp_pcomp_939___inl170_rn)
  SAC_ND_IDX_MODARRAY_AxVxS_CHECK_REUSE( double, SACp__inl170_rn, SACp_pcomp_939___inl170_rn, ((0 * 2) + 1), SACp__inl170__flat_122)
  SAC_ND_INC_RC( SACp__inl170_rn, 1)
  SAC_ND_DEC_RC_FREE_ARRAY( SACp_pcomp_939___inl170_rn, 1)
  SACp__inl170__flat_123_8_2__ = ((0 * 2) + 0); 
  SAC_ND_IDX_PSI_S( SACp__inl170__flat_123_8_2__, SACl_rofu, SACp__inl170__flat_122)
  SAC_ND_KS_ASSIGN_ARRAY( SACp__inl170_rn, SACp_pcomp_940___inl170_rn)
  SAC_ND_IDX_MODARRAY_AxVxS_CHECK_REUSE( double, SACp__inl170_rn, SACp_pcomp_940___inl170_rn, ((0 * 2) + 0), SACp__inl170__flat_122)
  SAC_ND_INC_RC( SACp__inl170_rn, 1)
  SAC_ND_DEC_RC_FREE_ARRAY( SACp_pcomp_940___inl170_rn, 1)
  SAC_ND_KS_ASSIGN_ARRAY( SACp__inl170_rn, SACl_rofu_select)
  SAC_ND_INC_RC( SACl_rofu_select, 1)
  
  /*
   * ND_FUN_AP( SACf_FFT1d__d__MAIN__cpx_8___MAIN__cpx_4_, , 4, out_rc, SACl_fft_left, in, SACl_dir, in_rc, SACl_left_v, in_rc, SACl_rofu_select)
   */
  SACf_FFT1d__d__MAIN__cpx_8___MAIN__cpx_4_( SAC_ND_KS_AP_OUT_RC(SACl_fft_left), SACl_dir, SAC_ND_KS_AP_IN_RC(SACl_left_v), SAC_ND_KS_AP_IN_RC(SACl_rofu_select));

  
  /*
   * ND_FUN_AP( SACf_FFT1d__d__MAIN__cpx_8___MAIN__cpx_4_, , 4, out_rc, SACl_fft_right, in, SACl_dir, in_rc, SACl_right_v, in_rc, SACl_rofu_select)
   */
  SACf_FFT1d__d__MAIN__cpx_8___MAIN__cpx_4_( SAC_ND_KS_AP_OUT_RC(SACl_fft_right), SACl_dir, SAC_ND_KS_AP_IN_RC(SACl_right_v), SAC_ND_KS_AP_IN_RC(SACl_rofu_select));

  
  /*
   * ND_FUN_AP( SACf__mul___MAIN__cpx_8___MAIN__cpx_8_, , 3, out_rc, SACl_fft_right, in_rc, SACl_fft_right, in_rc, SACl_rofu)
   */
  SACf__mul___MAIN__cpx_8___MAIN__cpx_8_( SAC_ND_KS_AP_OUT_RC(SACl_fft_right), SAC_ND_KS_AP_IN_RC(SACl_fft_right), SAC_ND_KS_AP_IN_RC(SACl_rofu));

  SAC_ND_ALLOC_ARRAY( double, SACp__inl175__type_520, 0)
  SAC_ND_INC_RC( SACp__inl175__type_520, 1)
  SAC_ND_ALLOC_ARRAY( int, SACp__inl175__type_519, 1)
  SAC_PF_BEGIN_WITH( genarray)
    
    /*
     * WL_BEGIN__OFFSET( SACp__inl175__type_520, SACp__inl175__type_519, 2)
     */
    {
      int SAC_WL_OFFSET( SACp__inl175__type_520);
      int SAC_WL_MT_SCHEDULE_START( 0);
      int SAC_WL_MT_SCHEDULE_STOP( 0);
      int SAC_WL_MT_SCHEDULE_START( 1);
      int SAC_WL_MT_SCHEDULE_STOP( 1);

      
      /*
       * MT_SCHEDULER_BEGIN( 0, 2, 0, 0, 16, 2)
       */
      SAC_WL_MT_SCHEDULE_START( 0) = 0;
      SAC_WL_MT_SCHEDULE_STOP( 0) = 16;
      SAC_WL_MT_SCHEDULE_START( 1) = 0;
      SAC_WL_MT_SCHEDULE_STOP( 1) = 2;

      
      /*
       * WL_INIT_OFFSET( 2, SACp__inl175__type_520, SACp__inl175__type_519, 2)
       */
      SAC_WL_OFFSET( SACp__inl175__type_520)
        = SAC_WL_MT_SCHEDULE_START( 0) * SAC_ND_A_SHAPE( SACp__inl175__type_520, 1)
        + SAC_WL_MT_SCHEDULE_START( 1);

      SAC_WL_STRIDE_LOOP0_BEGIN( 0, SACp__inl175__type_519, SACp__inl175__type_521, 0, 8, 1)
        SAC_WL_GRID_UNROLL_BEGIN( 0, SACp__inl175__type_519, SACp__inl175__type_521, 0, 1)
          SAC_WL_SET_IDXVEC( 0, SACp__inl175__type_519, SACp__inl175__type_521, 0, 1)
          SAC_WL_STRIDE_LOOP0_BEGIN( 1, SACp__inl175__type_519, SACp__inl175__type_522, 0, 2, 1)
            SAC_WL_GRID_UNROLL_BEGIN( 1, SACp__inl175__type_519, SACp__inl175__type_522, 0, 1)
              SAC_WL_SET_IDXVEC( 1, SACp__inl175__type_519, SACp__inl175__type_522, 0, 1)
              
              /*
               * ND_KS_VECT2OFFSET( SACp__inl175__type_519_8_2__, SACp__inl175__type_519, 2, 2, 8, 2)
               */
              SACp__inl175__type_519_8_2__ = ( 2* SAC_ND_READ_ARRAY( SACp__inl175__type_519, 0)+SAC_ND_READ_ARRAY( SACp__inl175__type_519, 1)) ;

              SAC_ND_IDX_PSI_S( SACp__inl175__type_519_8_2__, SACl_fft_right, SACp__inl174__flat_55)
              SAC_ND_IDX_PSI_S( SACp__inl175__type_519_8_2__, SACl_fft_left, SACp__inl174__flat_53)
              SACp__inl174__flat_52 = (SACp__inl174__flat_53 + SACp__inl174__flat_55); 
              SACp_wlt_812 = SACp__inl174__flat_52; 
              
              /*
               * WL_ASSIGN( 0, SACp_wlt_812, 2, SACp__inl175__type_520, SACp__inl175__type_519, 2, SACp__inl175__type_521, SACp__inl175__type_522)
               */
              SAC_TR_WL_PRINT( ("index vector [%d, %d] (== offset %d) -- offset %d -- assign", SACp__inl175__type_521, SACp__inl175__type_522, ( SAC_ND_A_SHAPE( SACp__inl175__type_520, 1) * SACp__inl175__type_521 + SACp__inl175__type_522 ), SAC_WL_OFFSET( SACp__inl175__type_520)));
              SAC_ND_WRITE_ARRAY( SACp__inl175__type_520, SAC_WL_OFFSET( SACp__inl175__type_520)) = SACp_wlt_812;
              SAC_WL_OFFSET( SACp__inl175__type_520)++;

            SAC_WL_GRID_UNROLL_END( 1, SACp__inl175__type_519, SACp__inl175__type_522, 0, 1)
          SAC_WL_STRIDE_LOOP_END( 1, SACp__inl175__type_519, SACp__inl175__type_522, 0, 2, 1)
        SAC_WL_GRID_UNROLL_END( 0, SACp__inl175__type_519, SACp__inl175__type_521, 0, 1)
      SAC_WL_STRIDE_LOOP_END( 0, SACp__inl175__type_519, SACp__inl175__type_521, 0, 8, 1)
      SAC_WL_STRIDE_LOOP0_BEGIN( 0, SACp__inl175__type_519, SACp__inl175__type_521, 8, 16, 1)
        SAC_WL_GRID_UNROLL_BEGIN( 0, SACp__inl175__type_519, SACp__inl175__type_521, 0, 1)
          SAC_WL_SET_IDXVEC( 0, SACp__inl175__type_519, SACp__inl175__type_521, 0, 1)
          SAC_WL_STRIDE_LOOP0_BEGIN( 1, SACp__inl175__type_519, SACp__inl175__type_522, 0, 2, 1)
            SAC_WL_GRID_UNROLL_BEGIN( 1, SACp__inl175__type_519, SACp__inl175__type_522, 0, 1)
              SAC_WL_SET_IDXVEC( 1, SACp__inl175__type_519, SACp__inl175__type_522, 0, 1)
              
              /*
               * ND_KS_VECT2OFFSET( SACp__inl175__type_519_8_2__, SACp__inl175__type_519, 2, 2, 8, 2)
               */
              SACp__inl175__type_519_8_2__ = ( 2* SAC_ND_READ_ARRAY( SACp__inl175__type_519, 0)+SAC_ND_READ_ARRAY( SACp__inl175__type_519, 1)) ;

              SACp__inl175__type_518_8_2__ = ((8 * 2) + 0); 
              SACp__inl175__type_516_8_2__ = (SACp__inl175__type_519_8_2__ - SACp__inl175__type_518_8_2__); 
              SAC_ND_IDX_PSI_S( SACp__inl175__type_516_8_2__, SACl_fft_right, SACp__inl173__flat_62)
              SAC_ND_IDX_PSI_S( SACp__inl175__type_516_8_2__, SACl_fft_left, SACp__inl173__flat_60)
              SACp__inl173__flat_59 = (SACp__inl173__flat_60 - SACp__inl173__flat_62); 
              SACp__inl175__type_517 = SACp__inl173__flat_59; 
              
              /*
               * WL_ASSIGN( 0, SACp__inl175__type_517, 2, SACp__inl175__type_520, SACp__inl175__type_519, 2, SACp__inl175__type_521, SACp__inl175__type_522)
               */
              SAC_TR_WL_PRINT( ("index vector [%d, %d] (== offset %d) -- offset %d -- assign", SACp__inl175__type_521, SACp__inl175__type_522, ( SAC_ND_A_SHAPE( SACp__inl175__type_520, 1) * SACp__inl175__type_521 + SACp__inl175__type_522 ), SAC_WL_OFFSET( SACp__inl175__type_520)));
              SAC_ND_WRITE_ARRAY( SACp__inl175__type_520, SAC_WL_OFFSET( SACp__inl175__type_520)) = SACp__inl175__type_517;
              SAC_WL_OFFSET( SACp__inl175__type_520)++;

            SAC_WL_GRID_UNROLL_END( 1, SACp__inl175__type_519, SACp__inl175__type_522, 0, 1)
          SAC_WL_STRIDE_LOOP_END( 1, SACp__inl175__type_519, SACp__inl175__type_522, 0, 2, 1)
        SAC_WL_GRID_UNROLL_END( 0, SACp__inl175__type_519, SACp__inl175__type_521, 0, 1)
      SAC_WL_STRIDE_LOOP_END( 0, SACp__inl175__type_519, SACp__inl175__type_521, 8, 16, 1)
    
      /*
       * MT_SCHEDULER_END( 0, 2, 0, 0, 16, 2)
       */


    
      /*
       * WL_END__OFFSET( SACp__inl175__type_520, SACp__inl175__type_519, 2)
       */
    }

  SAC_PF_END_WITH( genarray)
  SAC_ND_DEC_RC_FREE_ARRAY( SACl_fft_right, 1)
  SAC_ND_DEC_RC_FREE_ARRAY( SACl_fft_left, 1)
  SAC_ND_DEC_RC_FREE_ARRAY( SACp__inl175__type_519, 1)
  SAC_ND_KS_ASSIGN_ARRAY( SACp__inl175__type_520, SACl_res)
  
  /*
   * ND_FUN_RET( , 1, out_rc, SACl_res, SACl_res)
   */
  SAC_ND_KS_RET_OUT_RC( SACl_res, SACl_res);
  

}


/*
 * ND_FUN_DEC( SACf_FFT1d__d__MAIN__cpx_32___MAIN__cpx_16_, void, 4, out_rc, double *, SACl_res, in, double, SACl_dir, in_rc, double *, SACl_v, in_rc, double *, SACl_rofu)
 */
void SACf_FFT1d__d__MAIN__cpx_32___MAIN__cpx_16_( SAC_ND_KS_DEC_OUT_RC(double *, SACl_res), double SACl_dir, SAC_ND_KS_DEC_IN_RC( double *, SACl_v), SAC_ND_KS_DEC_IN_RC( double *, SACl_rofu))
{ 
  double SACp_wlt_816;
  
  /*
   * ND_KS_DECL_ARRAY( double, SACl_res, 2, 32, 2)
   */
  double *SACl_res;
  int SAC_ND_A_RC( SACl_res);
  const int SAC_ND_A_SIZE( SACl_res) = 32*2;
  const int SAC_ND_A_DIM( SACl_res) = 2;
  const int SAC_ND_A_SHAPE( SACl_res, 0) = 32;
  const int SAC_ND_A_SHAPE( SACl_res, 1) = 2;

  
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
   * ND_KS_DECL_ARRAY( double, SACl_rofu_select, 2, 8, 2)
   */
  double *SACl_rofu_select;
  int SAC_ND_A_RC( SACl_rofu_select);
  const int SAC_ND_A_SIZE( SACl_rofu_select) = 8*2;
  const int SAC_ND_A_DIM( SACl_rofu_select) = 2;
  const int SAC_ND_A_SHAPE( SACl_rofu_select, 0) = 8;
  const int SAC_ND_A_SHAPE( SACl_rofu_select, 1) = 2;

  
  /*
   * ND_KS_DECL_ARRAY( double, SACl_right_v, 2, 16, 2)
   */
  double *SACl_right_v;
  int SAC_ND_A_RC( SACl_right_v);
  const int SAC_ND_A_SIZE( SACl_right_v) = 16*2;
  const int SAC_ND_A_DIM( SACl_right_v) = 2;
  const int SAC_ND_A_SHAPE( SACl_right_v, 0) = 16;
  const int SAC_ND_A_SHAPE( SACl_right_v, 1) = 2;

  
  /*
   * ND_KS_DECL_ARRAY( double, SACl_left_v, 2, 16, 2)
   */
  double *SACl_left_v;
  int SAC_ND_A_RC( SACl_left_v);
  const int SAC_ND_A_SIZE( SACl_left_v) = 16*2;
  const int SAC_ND_A_DIM( SACl_left_v) = 2;
  const int SAC_ND_A_SHAPE( SACl_left_v, 0) = 16;
  const int SAC_ND_A_SHAPE( SACl_left_v, 1) = 2;

  
  /*
   * ND_KS_DECL_ARRAY( int, SACp__inl193__type_538, 1, 2)
   */
  int *SACp__inl193__type_538;
  int SAC_ND_A_RC( SACp__inl193__type_538);
  const int SAC_ND_A_SIZE( SACp__inl193__type_538) = 2;
  const int SAC_ND_A_DIM( SACp__inl193__type_538) = 1;
  const int SAC_ND_A_SHAPE( SACp__inl193__type_538, 0) = 2;

  int SACp__inl193__type_538_16_2__;
  int SACp__inl193__type_540;
  int SACp__inl193__type_541;
  int SACp__inl193__type_537_16_2__;
  int SACp__inl193__type_535_16_2__;
  double SACp__inl193__type_536;
  
  /*
   * ND_KS_DECL_ARRAY( double, SACp__inl193__type_539, 2, 32, 2)
   */
  double *SACp__inl193__type_539;
  int SAC_ND_A_RC( SACp__inl193__type_539);
  const int SAC_ND_A_SIZE( SACp__inl193__type_539) = 32*2;
  const int SAC_ND_A_DIM( SACp__inl193__type_539) = 2;
  const int SAC_ND_A_SHAPE( SACp__inl193__type_539, 0) = 32;
  const int SAC_ND_A_SHAPE( SACp__inl193__type_539, 1) = 2;

  double SACp__inl192__flat_55;
  double SACp__inl192__flat_53;
  double SACp__inl192__flat_52;
  double SACp__inl191__flat_62;
  double SACp__inl191__flat_60;
  double SACp__inl191__flat_59;
  
  /*
   * ND_KS_DECL_ARRAY( int, SACp__inl188__flat_121_iv, 1, 2)
   */
  int *SACp__inl188__flat_121_iv;
  int SAC_ND_A_RC( SACp__inl188__flat_121_iv);
  const int SAC_ND_A_SIZE( SACp__inl188__flat_121_iv) = 2;
  const int SAC_ND_A_DIM( SACp__inl188__flat_121_iv) = 1;
  const int SAC_ND_A_SHAPE( SACp__inl188__flat_121_iv, 0) = 2;

  int SACp__inl188__type_440;
  int SACp__inl188__type_441;
  int SACp__inl188__flat_124;
  int SACp__inl188__flat_123_16_2__;
  double SACp__inl188__flat_122;
  
  /*
   * ND_KS_DECL_ARRAY( double, SACp__inl188_rn, 2, 8, 2)
   */
  double *SACp__inl188_rn;
  int SAC_ND_A_RC( SACp__inl188_rn);
  const int SAC_ND_A_SIZE( SACp__inl188_rn) = 8*2;
  const int SAC_ND_A_DIM( SACp__inl188_rn) = 2;
  const int SAC_ND_A_SHAPE( SACp__inl188_rn, 0) = 8;
  const int SAC_ND_A_SHAPE( SACp__inl188_rn, 1) = 2;

  
  /*
   * ND_KS_DECL_ARRAY( int, SACp__inl185__flat_121_iv, 1, 2)
   */
  int *SACp__inl185__flat_121_iv;
  int SAC_ND_A_RC( SACp__inl185__flat_121_iv);
  const int SAC_ND_A_SIZE( SACp__inl185__flat_121_iv) = 2;
  const int SAC_ND_A_DIM( SACp__inl185__flat_121_iv) = 1;
  const int SAC_ND_A_SHAPE( SACp__inl185__flat_121_iv, 0) = 2;

  int SACp__inl185__type_437;
  int SACp__inl185__type_438;
  int SACp__inl185__flat_124;
  int SACp__inl185__flat_123_32_2__;
  double SACp__inl185__flat_122;
  
  /*
   * ND_KS_DECL_ARRAY( double, SACp__inl185_rn, 2, 16, 2)
   */
  double *SACp__inl185_rn;
  int SAC_ND_A_RC( SACp__inl185_rn);
  const int SAC_ND_A_SIZE( SACp__inl185_rn) = 16*2;
  const int SAC_ND_A_DIM( SACp__inl185_rn) = 2;
  const int SAC_ND_A_SHAPE( SACp__inl185_rn, 0) = 16;
  const int SAC_ND_A_SHAPE( SACp__inl185_rn, 1) = 2;

  double SACp__inl183_array_elem;
  int SACp__inl183__flat_394_32_2__;
  int SACp__inl183__flat_393_32_2__;
  
  /*
   * ND_KS_DECL_ARRAY( int, SACp__inl178__flat_121_iv, 1, 2)
   */
  int *SACp__inl178__flat_121_iv;
  int SAC_ND_A_RC( SACp__inl178__flat_121_iv);
  const int SAC_ND_A_SIZE( SACp__inl178__flat_121_iv) = 2;
  const int SAC_ND_A_DIM( SACp__inl178__flat_121_iv) = 1;
  const int SAC_ND_A_SHAPE( SACp__inl178__flat_121_iv, 0) = 2;

  int SACp__inl178__type_434;
  int SACp__inl178__type_435;
  int SACp__inl178__flat_124;
  int SACp__inl178__flat_123_32_2__;
  double SACp__inl178__flat_122;
  
  /*
   * ND_KS_DECL_ARRAY( double, SACp__inl178_rn, 2, 16, 2)
   */
  double *SACp__inl178_rn;
  int SAC_ND_A_RC( SACp__inl178_rn);
  const int SAC_ND_A_SIZE( SACp__inl178_rn) = 16*2;
  const int SAC_ND_A_DIM( SACp__inl178_rn) = 2;
  const int SAC_ND_A_SHAPE( SACp__inl178_rn, 0) = 16;
  const int SAC_ND_A_SHAPE( SACp__inl178_rn, 1) = 2;


  
  /*
   * ND_KS_DECL_ARRAY_ARG( SACl_v, 2, 32, 2)
   */
  const int SAC_ND_A_SIZE(SACl_v)=32*2;
  const int SAC_ND_A_DIM(SACl_v)=2;
  const int SAC_ND_A_SHAPE(SACl_v, 0)=32;
  const int SAC_ND_A_SHAPE(SACl_v, 1)=2;

  
  /*
   * ND_KS_DECL_ARRAY_ARG( SACl_rofu, 2, 16, 2)
   */
  const int SAC_ND_A_SIZE(SACl_rofu)=16*2;
  const int SAC_ND_A_DIM(SACl_rofu)=2;
  const int SAC_ND_A_SHAPE(SACl_rofu, 0)=16;
  const int SAC_ND_A_SHAPE(SACl_rofu, 1)=2;

  SAC_ND_ALLOC_ARRAY( double, SACp__inl178_rn, 0)
  SAC_ND_INC_RC( SACp__inl178_rn, 1)
  SAC_PF_BEGIN_WITH( genarray)
    
    /*
     * WL_BEGIN__OFFSET( SACp__inl178_rn, SACp__inl178__flat_121_iv, 2)
     */
    {
      int SAC_WL_OFFSET( SACp__inl178_rn);
      int SAC_WL_MT_SCHEDULE_START( 0);
      int SAC_WL_MT_SCHEDULE_STOP( 0);
      int SAC_WL_MT_SCHEDULE_START( 1);
      int SAC_WL_MT_SCHEDULE_STOP( 1);

      
      /*
       * MT_SCHEDULER_BEGIN( 0, 2, 0, 0, 16, 2)
       */
      SAC_WL_MT_SCHEDULE_START( 0) = 0;
      SAC_WL_MT_SCHEDULE_STOP( 0) = 16;
      SAC_WL_MT_SCHEDULE_START( 1) = 0;
      SAC_WL_MT_SCHEDULE_STOP( 1) = 2;

      
      /*
       * WL_INIT_OFFSET( 2, SACp__inl178_rn, SACp__inl178__flat_121_iv, 2)
       */
      SAC_WL_OFFSET( SACp__inl178_rn)
        = SAC_WL_MT_SCHEDULE_START( 0) * SAC_ND_A_SHAPE( SACp__inl178_rn, 1)
        + SAC_WL_MT_SCHEDULE_START( 1);

      SAC_WL_STRIDE_LOOP0_BEGIN( 0, SACp__inl178__flat_121_iv, SACp__inl178__type_434, 0, 16, 1)
        SAC_WL_GRID_UNROLL_BEGIN( 0, SACp__inl178__flat_121_iv, SACp__inl178__type_434, 0, 1)
          SAC_WL_STRIDE_LOOP0_BEGIN( 1, SACp__inl178__flat_121_iv, SACp__inl178__type_435, 0, 2, 1)
            SAC_WL_GRID_UNROLL_BEGIN( 1, SACp__inl178__flat_121_iv, SACp__inl178__type_435, 0, 1)
              SACp__inl178__flat_124 = (2 * SACp__inl178__type_434); 
              SACp__inl178__flat_123_32_2__ = ((SACp__inl178__flat_124 * 2) + SACp__inl178__type_435); 
              SAC_ND_IDX_PSI_S( SACp__inl178__flat_123_32_2__, SACl_v, SACp__inl178__flat_122)
              
              /*
               * WL_ASSIGN( 0, SACp__inl178__flat_122, 2, SACp__inl178_rn, SACp__inl178__flat_121_iv, 2, SACp__inl178__type_434, SACp__inl178__type_435)
               */
              SAC_TR_WL_PRINT( ("index vector [%d, %d] (== offset %d) -- offset %d -- assign", SACp__inl178__type_434, SACp__inl178__type_435, ( SAC_ND_A_SHAPE( SACp__inl178_rn, 1) * SACp__inl178__type_434 + SACp__inl178__type_435 ), SAC_WL_OFFSET( SACp__inl178_rn)));
              SAC_ND_WRITE_ARRAY( SACp__inl178_rn, SAC_WL_OFFSET( SACp__inl178_rn)) = SACp__inl178__flat_122;
              SAC_WL_OFFSET( SACp__inl178_rn)++;

            SAC_WL_GRID_UNROLL_END( 1, SACp__inl178__flat_121_iv, SACp__inl178__type_435, 0, 1)
          SAC_WL_STRIDE_LOOP_END( 1, SACp__inl178__flat_121_iv, SACp__inl178__type_435, 0, 2, 1)
        SAC_WL_GRID_UNROLL_END( 0, SACp__inl178__flat_121_iv, SACp__inl178__type_434, 0, 1)
      SAC_WL_STRIDE_LOOP_END( 0, SACp__inl178__flat_121_iv, SACp__inl178__type_434, 0, 16, 1)
    
      /*
       * MT_SCHEDULER_END( 0, 2, 0, 0, 16, 2)
       */


    
      /*
       * WL_END__OFFSET( SACp__inl178_rn, SACp__inl178__flat_121_iv, 2)
       */
    }

  SAC_PF_END_WITH( genarray)
  SAC_ND_KS_ASSIGN_ARRAY( SACp__inl178_rn, SACl_left_v)
  SAC_ND_ALLOC_ARRAY( double, SACp__inl185_rn, 0)
  SAC_ND_INC_RC( SACp__inl185_rn, 1)
  SAC_PF_BEGIN_WITH( genarray)
    
    /*
     * WL_BEGIN__OFFSET( SACp__inl185_rn, SACp__inl185__flat_121_iv, 2)
     */
    {
      int SAC_WL_OFFSET( SACp__inl185_rn);
      int SAC_WL_MT_SCHEDULE_START( 0);
      int SAC_WL_MT_SCHEDULE_STOP( 0);
      int SAC_WL_MT_SCHEDULE_START( 1);
      int SAC_WL_MT_SCHEDULE_STOP( 1);

      
      /*
       * MT_SCHEDULER_BEGIN( 0, 2, 0, 0, 16, 2)
       */
      SAC_WL_MT_SCHEDULE_START( 0) = 0;
      SAC_WL_MT_SCHEDULE_STOP( 0) = 16;
      SAC_WL_MT_SCHEDULE_START( 1) = 0;
      SAC_WL_MT_SCHEDULE_STOP( 1) = 2;

      
      /*
       * WL_INIT_OFFSET( 2, SACp__inl185_rn, SACp__inl185__flat_121_iv, 2)
       */
      SAC_WL_OFFSET( SACp__inl185_rn)
        = SAC_WL_MT_SCHEDULE_START( 0) * SAC_ND_A_SHAPE( SACp__inl185_rn, 1)
        + SAC_WL_MT_SCHEDULE_START( 1);

      SAC_WL_STRIDE_LOOP0_BEGIN( 0, SACp__inl185__flat_121_iv, SACp__inl185__type_437, 0, 16, 1)
        SAC_WL_GRID_UNROLL_BEGIN( 0, SACp__inl185__flat_121_iv, SACp__inl185__type_437, 0, 1)
          SAC_WL_STRIDE_LOOP0_BEGIN( 1, SACp__inl185__flat_121_iv, SACp__inl185__type_438, 0, 2, 1)
            SAC_WL_GRID_UNROLL_BEGIN( 1, SACp__inl185__flat_121_iv, SACp__inl185__type_438, 0, 1)
              SACp__inl185__flat_124 = (2 * SACp__inl185__type_437); 
              SACp__inl185__flat_123_32_2__ = ((SACp__inl185__flat_124 * 2) + SACp__inl185__type_438); 
              SACp__inl183__flat_394_32_2__ = ((1 * 2) + 0); 
              SACp__inl183__flat_393_32_2__ = (SACp__inl183__flat_394_32_2__ + SACp__inl185__flat_123_32_2__); 
              SAC_ND_IDX_PSI_S( SACp__inl183__flat_393_32_2__, SACl_v, SACp__inl183_array_elem)
              SACp__inl185__flat_122 = SACp__inl183_array_elem; 
              
              /*
               * WL_ASSIGN( 0, SACp__inl185__flat_122, 2, SACp__inl185_rn, SACp__inl185__flat_121_iv, 2, SACp__inl185__type_437, SACp__inl185__type_438)
               */
              SAC_TR_WL_PRINT( ("index vector [%d, %d] (== offset %d) -- offset %d -- assign", SACp__inl185__type_437, SACp__inl185__type_438, ( SAC_ND_A_SHAPE( SACp__inl185_rn, 1) * SACp__inl185__type_437 + SACp__inl185__type_438 ), SAC_WL_OFFSET( SACp__inl185_rn)));
              SAC_ND_WRITE_ARRAY( SACp__inl185_rn, SAC_WL_OFFSET( SACp__inl185_rn)) = SACp__inl185__flat_122;
              SAC_WL_OFFSET( SACp__inl185_rn)++;

            SAC_WL_GRID_UNROLL_END( 1, SACp__inl185__flat_121_iv, SACp__inl185__type_438, 0, 1)
          SAC_WL_STRIDE_LOOP_END( 1, SACp__inl185__flat_121_iv, SACp__inl185__type_438, 0, 2, 1)
        SAC_WL_GRID_UNROLL_END( 0, SACp__inl185__flat_121_iv, SACp__inl185__type_437, 0, 1)
      SAC_WL_STRIDE_LOOP_END( 0, SACp__inl185__flat_121_iv, SACp__inl185__type_437, 0, 16, 1)
    
      /*
       * MT_SCHEDULER_END( 0, 2, 0, 0, 16, 2)
       */


    
      /*
       * WL_END__OFFSET( SACp__inl185_rn, SACp__inl185__flat_121_iv, 2)
       */
    }

  SAC_PF_END_WITH( genarray)
  SAC_ND_DEC_RC_FREE_ARRAY( SACl_v, 1)
  SAC_ND_KS_ASSIGN_ARRAY( SACp__inl185_rn, SACl_right_v)
  SAC_ND_ALLOC_ARRAY( double, SACp__inl188_rn, 0)
  SAC_ND_INC_RC( SACp__inl188_rn, 1)
  SAC_PF_BEGIN_WITH( genarray)
    
    /*
     * WL_BEGIN__OFFSET( SACp__inl188_rn, SACp__inl188__flat_121_iv, 2)
     */
    {
      int SAC_WL_OFFSET( SACp__inl188_rn);
      int SAC_WL_MT_SCHEDULE_START( 0);
      int SAC_WL_MT_SCHEDULE_STOP( 0);
      int SAC_WL_MT_SCHEDULE_START( 1);
      int SAC_WL_MT_SCHEDULE_STOP( 1);

      
      /*
       * MT_SCHEDULER_BEGIN( 0, 2, 0, 0, 8, 2)
       */
      SAC_WL_MT_SCHEDULE_START( 0) = 0;
      SAC_WL_MT_SCHEDULE_STOP( 0) = 8;
      SAC_WL_MT_SCHEDULE_START( 1) = 0;
      SAC_WL_MT_SCHEDULE_STOP( 1) = 2;

      
      /*
       * WL_INIT_OFFSET( 2, SACp__inl188_rn, SACp__inl188__flat_121_iv, 2)
       */
      SAC_WL_OFFSET( SACp__inl188_rn)
        = SAC_WL_MT_SCHEDULE_START( 0) * SAC_ND_A_SHAPE( SACp__inl188_rn, 1)
        + SAC_WL_MT_SCHEDULE_START( 1);

      SAC_WL_STRIDE_LOOP0_BEGIN( 0, SACp__inl188__flat_121_iv, SACp__inl188__type_440, 0, 8, 1)
        SAC_WL_GRID_UNROLL_BEGIN( 0, SACp__inl188__flat_121_iv, SACp__inl188__type_440, 0, 1)
          SAC_WL_STRIDE_LOOP0_BEGIN( 1, SACp__inl188__flat_121_iv, SACp__inl188__type_441, 0, 2, 1)
            SAC_WL_GRID_UNROLL_BEGIN( 1, SACp__inl188__flat_121_iv, SACp__inl188__type_441, 0, 1)
              SACp__inl188__flat_124 = (2 * SACp__inl188__type_440); 
              SACp__inl188__flat_123_16_2__ = ((SACp__inl188__flat_124 * 2) + SACp__inl188__type_441); 
              SAC_ND_IDX_PSI_S( SACp__inl188__flat_123_16_2__, SACl_rofu, SACp__inl188__flat_122)
              
              /*
               * WL_ASSIGN( 0, SACp__inl188__flat_122, 2, SACp__inl188_rn, SACp__inl188__flat_121_iv, 2, SACp__inl188__type_440, SACp__inl188__type_441)
               */
              SAC_TR_WL_PRINT( ("index vector [%d, %d] (== offset %d) -- offset %d -- assign", SACp__inl188__type_440, SACp__inl188__type_441, ( SAC_ND_A_SHAPE( SACp__inl188_rn, 1) * SACp__inl188__type_440 + SACp__inl188__type_441 ), SAC_WL_OFFSET( SACp__inl188_rn)));
              SAC_ND_WRITE_ARRAY( SACp__inl188_rn, SAC_WL_OFFSET( SACp__inl188_rn)) = SACp__inl188__flat_122;
              SAC_WL_OFFSET( SACp__inl188_rn)++;

            SAC_WL_GRID_UNROLL_END( 1, SACp__inl188__flat_121_iv, SACp__inl188__type_441, 0, 1)
          SAC_WL_STRIDE_LOOP_END( 1, SACp__inl188__flat_121_iv, SACp__inl188__type_441, 0, 2, 1)
        SAC_WL_GRID_UNROLL_END( 0, SACp__inl188__flat_121_iv, SACp__inl188__type_440, 0, 1)
      SAC_WL_STRIDE_LOOP_END( 0, SACp__inl188__flat_121_iv, SACp__inl188__type_440, 0, 8, 1)
    
      /*
       * MT_SCHEDULER_END( 0, 2, 0, 0, 8, 2)
       */


    
      /*
       * WL_END__OFFSET( SACp__inl188_rn, SACp__inl188__flat_121_iv, 2)
       */
    }

  SAC_PF_END_WITH( genarray)
  SAC_ND_KS_ASSIGN_ARRAY( SACp__inl188_rn, SACl_rofu_select)
  SAC_ND_INC_RC( SACl_rofu_select, 1)
  
  /*
   * ND_FUN_AP( SACf_FFT1d__d__MAIN__cpx_16___MAIN__cpx_8_, , 4, out_rc, SACl_fft_left, in, SACl_dir, in_rc, SACl_left_v, in_rc, SACl_rofu_select)
   */
  SACf_FFT1d__d__MAIN__cpx_16___MAIN__cpx_8_( SAC_ND_KS_AP_OUT_RC(SACl_fft_left), SACl_dir, SAC_ND_KS_AP_IN_RC(SACl_left_v), SAC_ND_KS_AP_IN_RC(SACl_rofu_select));

  
  /*
   * ND_FUN_AP( SACf_FFT1d__d__MAIN__cpx_16___MAIN__cpx_8_, , 4, out_rc, SACl_fft_right, in, SACl_dir, in_rc, SACl_right_v, in_rc, SACl_rofu_select)
   */
  SACf_FFT1d__d__MAIN__cpx_16___MAIN__cpx_8_( SAC_ND_KS_AP_OUT_RC(SACl_fft_right), SACl_dir, SAC_ND_KS_AP_IN_RC(SACl_right_v), SAC_ND_KS_AP_IN_RC(SACl_rofu_select));

  
  /*
   * ND_FUN_AP( SACf__mul___MAIN__cpx_16___MAIN__cpx_16_, , 3, out_rc, SACl_fft_right, in_rc, SACl_fft_right, in_rc, SACl_rofu)
   */
  SACf__mul___MAIN__cpx_16___MAIN__cpx_16_( SAC_ND_KS_AP_OUT_RC(SACl_fft_right), SAC_ND_KS_AP_IN_RC(SACl_fft_right), SAC_ND_KS_AP_IN_RC(SACl_rofu));

  SAC_ND_ALLOC_ARRAY( double, SACp__inl193__type_539, 0)
  SAC_ND_INC_RC( SACp__inl193__type_539, 1)
  SAC_ND_ALLOC_ARRAY( int, SACp__inl193__type_538, 1)
  SAC_PF_BEGIN_WITH( genarray)
    
    /*
     * WL_BEGIN__OFFSET( SACp__inl193__type_539, SACp__inl193__type_538, 2)
     */
    {
      int SAC_WL_OFFSET( SACp__inl193__type_539);
      int SAC_WL_MT_SCHEDULE_START( 0);
      int SAC_WL_MT_SCHEDULE_STOP( 0);
      int SAC_WL_MT_SCHEDULE_START( 1);
      int SAC_WL_MT_SCHEDULE_STOP( 1);

      
      /*
       * MT_SCHEDULER_BEGIN( 0, 2, 0, 0, 32, 2)
       */
      SAC_WL_MT_SCHEDULE_START( 0) = 0;
      SAC_WL_MT_SCHEDULE_STOP( 0) = 32;
      SAC_WL_MT_SCHEDULE_START( 1) = 0;
      SAC_WL_MT_SCHEDULE_STOP( 1) = 2;

      
      /*
       * WL_INIT_OFFSET( 2, SACp__inl193__type_539, SACp__inl193__type_538, 2)
       */
      SAC_WL_OFFSET( SACp__inl193__type_539)
        = SAC_WL_MT_SCHEDULE_START( 0) * SAC_ND_A_SHAPE( SACp__inl193__type_539, 1)
        + SAC_WL_MT_SCHEDULE_START( 1);

      SAC_WL_STRIDE_LOOP0_BEGIN( 0, SACp__inl193__type_538, SACp__inl193__type_540, 0, 16, 1)
        SAC_WL_GRID_UNROLL_BEGIN( 0, SACp__inl193__type_538, SACp__inl193__type_540, 0, 1)
          SAC_WL_SET_IDXVEC( 0, SACp__inl193__type_538, SACp__inl193__type_540, 0, 1)
          SAC_WL_STRIDE_LOOP0_BEGIN( 1, SACp__inl193__type_538, SACp__inl193__type_541, 0, 2, 1)
            SAC_WL_GRID_UNROLL_BEGIN( 1, SACp__inl193__type_538, SACp__inl193__type_541, 0, 1)
              SAC_WL_SET_IDXVEC( 1, SACp__inl193__type_538, SACp__inl193__type_541, 0, 1)
              
              /*
               * ND_KS_VECT2OFFSET( SACp__inl193__type_538_16_2__, SACp__inl193__type_538, 2, 2, 16, 2)
               */
              SACp__inl193__type_538_16_2__ = ( 2* SAC_ND_READ_ARRAY( SACp__inl193__type_538, 0)+SAC_ND_READ_ARRAY( SACp__inl193__type_538, 1)) ;

              SAC_ND_IDX_PSI_S( SACp__inl193__type_538_16_2__, SACl_fft_right, SACp__inl192__flat_55)
              SAC_ND_IDX_PSI_S( SACp__inl193__type_538_16_2__, SACl_fft_left, SACp__inl192__flat_53)
              SACp__inl192__flat_52 = (SACp__inl192__flat_53 + SACp__inl192__flat_55); 
              SACp_wlt_816 = SACp__inl192__flat_52; 
              
              /*
               * WL_ASSIGN( 0, SACp_wlt_816, 2, SACp__inl193__type_539, SACp__inl193__type_538, 2, SACp__inl193__type_540, SACp__inl193__type_541)
               */
              SAC_TR_WL_PRINT( ("index vector [%d, %d] (== offset %d) -- offset %d -- assign", SACp__inl193__type_540, SACp__inl193__type_541, ( SAC_ND_A_SHAPE( SACp__inl193__type_539, 1) * SACp__inl193__type_540 + SACp__inl193__type_541 ), SAC_WL_OFFSET( SACp__inl193__type_539)));
              SAC_ND_WRITE_ARRAY( SACp__inl193__type_539, SAC_WL_OFFSET( SACp__inl193__type_539)) = SACp_wlt_816;
              SAC_WL_OFFSET( SACp__inl193__type_539)++;

            SAC_WL_GRID_UNROLL_END( 1, SACp__inl193__type_538, SACp__inl193__type_541, 0, 1)
          SAC_WL_STRIDE_LOOP_END( 1, SACp__inl193__type_538, SACp__inl193__type_541, 0, 2, 1)
        SAC_WL_GRID_UNROLL_END( 0, SACp__inl193__type_538, SACp__inl193__type_540, 0, 1)
      SAC_WL_STRIDE_LOOP_END( 0, SACp__inl193__type_538, SACp__inl193__type_540, 0, 16, 1)
      SAC_WL_STRIDE_LOOP0_BEGIN( 0, SACp__inl193__type_538, SACp__inl193__type_540, 16, 32, 1)
        SAC_WL_GRID_UNROLL_BEGIN( 0, SACp__inl193__type_538, SACp__inl193__type_540, 0, 1)
          SAC_WL_SET_IDXVEC( 0, SACp__inl193__type_538, SACp__inl193__type_540, 0, 1)
          SAC_WL_STRIDE_LOOP0_BEGIN( 1, SACp__inl193__type_538, SACp__inl193__type_541, 0, 2, 1)
            SAC_WL_GRID_UNROLL_BEGIN( 1, SACp__inl193__type_538, SACp__inl193__type_541, 0, 1)
              SAC_WL_SET_IDXVEC( 1, SACp__inl193__type_538, SACp__inl193__type_541, 0, 1)
              
              /*
               * ND_KS_VECT2OFFSET( SACp__inl193__type_538_16_2__, SACp__inl193__type_538, 2, 2, 16, 2)
               */
              SACp__inl193__type_538_16_2__ = ( 2* SAC_ND_READ_ARRAY( SACp__inl193__type_538, 0)+SAC_ND_READ_ARRAY( SACp__inl193__type_538, 1)) ;

              SACp__inl193__type_537_16_2__ = ((16 * 2) + 0); 
              SACp__inl193__type_535_16_2__ = (SACp__inl193__type_538_16_2__ - SACp__inl193__type_537_16_2__); 
              SAC_ND_IDX_PSI_S( SACp__inl193__type_535_16_2__, SACl_fft_right, SACp__inl191__flat_62)
              SAC_ND_IDX_PSI_S( SACp__inl193__type_535_16_2__, SACl_fft_left, SACp__inl191__flat_60)
              SACp__inl191__flat_59 = (SACp__inl191__flat_60 - SACp__inl191__flat_62); 
              SACp__inl193__type_536 = SACp__inl191__flat_59; 
              
              /*
               * WL_ASSIGN( 0, SACp__inl193__type_536, 2, SACp__inl193__type_539, SACp__inl193__type_538, 2, SACp__inl193__type_540, SACp__inl193__type_541)
               */
              SAC_TR_WL_PRINT( ("index vector [%d, %d] (== offset %d) -- offset %d -- assign", SACp__inl193__type_540, SACp__inl193__type_541, ( SAC_ND_A_SHAPE( SACp__inl193__type_539, 1) * SACp__inl193__type_540 + SACp__inl193__type_541 ), SAC_WL_OFFSET( SACp__inl193__type_539)));
              SAC_ND_WRITE_ARRAY( SACp__inl193__type_539, SAC_WL_OFFSET( SACp__inl193__type_539)) = SACp__inl193__type_536;
              SAC_WL_OFFSET( SACp__inl193__type_539)++;

            SAC_WL_GRID_UNROLL_END( 1, SACp__inl193__type_538, SACp__inl193__type_541, 0, 1)
          SAC_WL_STRIDE_LOOP_END( 1, SACp__inl193__type_538, SACp__inl193__type_541, 0, 2, 1)
        SAC_WL_GRID_UNROLL_END( 0, SACp__inl193__type_538, SACp__inl193__type_540, 0, 1)
      SAC_WL_STRIDE_LOOP_END( 0, SACp__inl193__type_538, SACp__inl193__type_540, 16, 32, 1)
    
      /*
       * MT_SCHEDULER_END( 0, 2, 0, 0, 32, 2)
       */


    
      /*
       * WL_END__OFFSET( SACp__inl193__type_539, SACp__inl193__type_538, 2)
       */
    }

  SAC_PF_END_WITH( genarray)
  SAC_ND_DEC_RC_FREE_ARRAY( SACl_fft_right, 1)
  SAC_ND_DEC_RC_FREE_ARRAY( SACl_fft_left, 1)
  SAC_ND_DEC_RC_FREE_ARRAY( SACp__inl193__type_538, 1)
  SAC_ND_KS_ASSIGN_ARRAY( SACp__inl193__type_539, SACl_res)
  
  /*
   * ND_FUN_RET( , 1, out_rc, SACl_res, SACl_res)
   */
  SAC_ND_KS_RET_OUT_RC( SACl_res, SACl_res);
  

}


/*
 * ND_FUN_DEC( SACf_FFT1d__d__MAIN__cpx_64___MAIN__cpx_32_, void, 4, out_rc, double *, SACl_res, in, double, SACl_dir, in_rc, double *, SACl_v, in_rc, double *, SACl_rofu)
 */
void SACf_FFT1d__d__MAIN__cpx_64___MAIN__cpx_32_( SAC_ND_KS_DEC_OUT_RC(double *, SACl_res), double SACl_dir, SAC_ND_KS_DEC_IN_RC( double *, SACl_v), SAC_ND_KS_DEC_IN_RC( double *, SACl_rofu))
{ 
  double SACp_wlt_820;
  
  /*
   * ND_KS_DECL_ARRAY( double, SACl_res, 2, 64, 2)
   */
  double *SACl_res;
  int SAC_ND_A_RC( SACl_res);
  const int SAC_ND_A_SIZE( SACl_res) = 64*2;
  const int SAC_ND_A_DIM( SACl_res) = 2;
  const int SAC_ND_A_SHAPE( SACl_res, 0) = 64;
  const int SAC_ND_A_SHAPE( SACl_res, 1) = 2;

  
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
   * ND_KS_DECL_ARRAY( double, SACl_rofu_select, 2, 16, 2)
   */
  double *SACl_rofu_select;
  int SAC_ND_A_RC( SACl_rofu_select);
  const int SAC_ND_A_SIZE( SACl_rofu_select) = 16*2;
  const int SAC_ND_A_DIM( SACl_rofu_select) = 2;
  const int SAC_ND_A_SHAPE( SACl_rofu_select, 0) = 16;
  const int SAC_ND_A_SHAPE( SACl_rofu_select, 1) = 2;

  
  /*
   * ND_KS_DECL_ARRAY( double, SACl_right_v, 2, 32, 2)
   */
  double *SACl_right_v;
  int SAC_ND_A_RC( SACl_right_v);
  const int SAC_ND_A_SIZE( SACl_right_v) = 32*2;
  const int SAC_ND_A_DIM( SACl_right_v) = 2;
  const int SAC_ND_A_SHAPE( SACl_right_v, 0) = 32;
  const int SAC_ND_A_SHAPE( SACl_right_v, 1) = 2;

  
  /*
   * ND_KS_DECL_ARRAY( double, SACl_left_v, 2, 32, 2)
   */
  double *SACl_left_v;
  int SAC_ND_A_RC( SACl_left_v);
  const int SAC_ND_A_SIZE( SACl_left_v) = 32*2;
  const int SAC_ND_A_DIM( SACl_left_v) = 2;
  const int SAC_ND_A_SHAPE( SACl_left_v, 0) = 32;
  const int SAC_ND_A_SHAPE( SACl_left_v, 1) = 2;

  
  /*
   * ND_KS_DECL_ARRAY( int, SACp__inl211__type_557, 1, 2)
   */
  int *SACp__inl211__type_557;
  int SAC_ND_A_RC( SACp__inl211__type_557);
  const int SAC_ND_A_SIZE( SACp__inl211__type_557) = 2;
  const int SAC_ND_A_DIM( SACp__inl211__type_557) = 1;
  const int SAC_ND_A_SHAPE( SACp__inl211__type_557, 0) = 2;

  int SACp__inl211__type_557_32_2__;
  int SACp__inl211__type_559;
  int SACp__inl211__type_560;
  int SACp__inl211__type_556_32_2__;
  int SACp__inl211__type_554_32_2__;
  double SACp__inl211__type_555;
  
  /*
   * ND_KS_DECL_ARRAY( double, SACp__inl211__type_558, 2, 64, 2)
   */
  double *SACp__inl211__type_558;
  int SAC_ND_A_RC( SACp__inl211__type_558);
  const int SAC_ND_A_SIZE( SACp__inl211__type_558) = 64*2;
  const int SAC_ND_A_DIM( SACp__inl211__type_558) = 2;
  const int SAC_ND_A_SHAPE( SACp__inl211__type_558, 0) = 64;
  const int SAC_ND_A_SHAPE( SACp__inl211__type_558, 1) = 2;

  double SACp__inl210__flat_55;
  double SACp__inl210__flat_53;
  double SACp__inl210__flat_52;
  double SACp__inl209__flat_62;
  double SACp__inl209__flat_60;
  double SACp__inl209__flat_59;
  
  /*
   * ND_KS_DECL_ARRAY( int, SACp__inl206__flat_121_iv, 1, 2)
   */
  int *SACp__inl206__flat_121_iv;
  int SAC_ND_A_RC( SACp__inl206__flat_121_iv);
  const int SAC_ND_A_SIZE( SACp__inl206__flat_121_iv) = 2;
  const int SAC_ND_A_DIM( SACp__inl206__flat_121_iv) = 1;
  const int SAC_ND_A_SHAPE( SACp__inl206__flat_121_iv, 0) = 2;

  int SACp__inl206__type_431;
  int SACp__inl206__type_432;
  int SACp__inl206__flat_124;
  int SACp__inl206__flat_123_32_2__;
  double SACp__inl206__flat_122;
  
  /*
   * ND_KS_DECL_ARRAY( double, SACp__inl206_rn, 2, 16, 2)
   */
  double *SACp__inl206_rn;
  int SAC_ND_A_RC( SACp__inl206_rn);
  const int SAC_ND_A_SIZE( SACp__inl206_rn) = 16*2;
  const int SAC_ND_A_DIM( SACp__inl206_rn) = 2;
  const int SAC_ND_A_SHAPE( SACp__inl206_rn, 0) = 16;
  const int SAC_ND_A_SHAPE( SACp__inl206_rn, 1) = 2;

  
  /*
   * ND_KS_DECL_ARRAY( int, SACp__inl203__flat_121_iv, 1, 2)
   */
  int *SACp__inl203__flat_121_iv;
  int SAC_ND_A_RC( SACp__inl203__flat_121_iv);
  const int SAC_ND_A_SIZE( SACp__inl203__flat_121_iv) = 2;
  const int SAC_ND_A_DIM( SACp__inl203__flat_121_iv) = 1;
  const int SAC_ND_A_SHAPE( SACp__inl203__flat_121_iv, 0) = 2;

  int SACp__inl203__type_428;
  int SACp__inl203__type_429;
  int SACp__inl203__flat_124;
  int SACp__inl203__flat_123_64_2__;
  double SACp__inl203__flat_122;
  
  /*
   * ND_KS_DECL_ARRAY( double, SACp__inl203_rn, 2, 32, 2)
   */
  double *SACp__inl203_rn;
  int SAC_ND_A_RC( SACp__inl203_rn);
  const int SAC_ND_A_SIZE( SACp__inl203_rn) = 32*2;
  const int SAC_ND_A_DIM( SACp__inl203_rn) = 2;
  const int SAC_ND_A_SHAPE( SACp__inl203_rn, 0) = 32;
  const int SAC_ND_A_SHAPE( SACp__inl203_rn, 1) = 2;

  double SACp__inl201_array_elem;
  int SACp__inl201__flat_394_64_2__;
  int SACp__inl201__flat_393_64_2__;
  
  /*
   * ND_KS_DECL_ARRAY( int, SACp__inl196__flat_121_iv, 1, 2)
   */
  int *SACp__inl196__flat_121_iv;
  int SAC_ND_A_RC( SACp__inl196__flat_121_iv);
  const int SAC_ND_A_SIZE( SACp__inl196__flat_121_iv) = 2;
  const int SAC_ND_A_DIM( SACp__inl196__flat_121_iv) = 1;
  const int SAC_ND_A_SHAPE( SACp__inl196__flat_121_iv, 0) = 2;

  int SACp__inl196__type_425;
  int SACp__inl196__type_426;
  int SACp__inl196__flat_124;
  int SACp__inl196__flat_123_64_2__;
  double SACp__inl196__flat_122;
  
  /*
   * ND_KS_DECL_ARRAY( double, SACp__inl196_rn, 2, 32, 2)
   */
  double *SACp__inl196_rn;
  int SAC_ND_A_RC( SACp__inl196_rn);
  const int SAC_ND_A_SIZE( SACp__inl196_rn) = 32*2;
  const int SAC_ND_A_DIM( SACp__inl196_rn) = 2;
  const int SAC_ND_A_SHAPE( SACp__inl196_rn, 0) = 32;
  const int SAC_ND_A_SHAPE( SACp__inl196_rn, 1) = 2;


  
  /*
   * ND_KS_DECL_ARRAY_ARG( SACl_v, 2, 64, 2)
   */
  const int SAC_ND_A_SIZE(SACl_v)=64*2;
  const int SAC_ND_A_DIM(SACl_v)=2;
  const int SAC_ND_A_SHAPE(SACl_v, 0)=64;
  const int SAC_ND_A_SHAPE(SACl_v, 1)=2;

  
  /*
   * ND_KS_DECL_ARRAY_ARG( SACl_rofu, 2, 32, 2)
   */
  const int SAC_ND_A_SIZE(SACl_rofu)=32*2;
  const int SAC_ND_A_DIM(SACl_rofu)=2;
  const int SAC_ND_A_SHAPE(SACl_rofu, 0)=32;
  const int SAC_ND_A_SHAPE(SACl_rofu, 1)=2;

  SAC_ND_ALLOC_ARRAY( double, SACp__inl196_rn, 0)
  SAC_ND_INC_RC( SACp__inl196_rn, 1)
  SAC_PF_BEGIN_WITH( genarray)
    
    /*
     * WL_BEGIN__OFFSET( SACp__inl196_rn, SACp__inl196__flat_121_iv, 2)
     */
    {
      int SAC_WL_OFFSET( SACp__inl196_rn);
      int SAC_WL_MT_SCHEDULE_START( 0);
      int SAC_WL_MT_SCHEDULE_STOP( 0);
      int SAC_WL_MT_SCHEDULE_START( 1);
      int SAC_WL_MT_SCHEDULE_STOP( 1);

      
      /*
       * MT_SCHEDULER_BEGIN( 0, 2, 0, 0, 32, 2)
       */
      SAC_WL_MT_SCHEDULE_START( 0) = 0;
      SAC_WL_MT_SCHEDULE_STOP( 0) = 32;
      SAC_WL_MT_SCHEDULE_START( 1) = 0;
      SAC_WL_MT_SCHEDULE_STOP( 1) = 2;

      
      /*
       * WL_INIT_OFFSET( 2, SACp__inl196_rn, SACp__inl196__flat_121_iv, 2)
       */
      SAC_WL_OFFSET( SACp__inl196_rn)
        = SAC_WL_MT_SCHEDULE_START( 0) * SAC_ND_A_SHAPE( SACp__inl196_rn, 1)
        + SAC_WL_MT_SCHEDULE_START( 1);

      SAC_WL_STRIDE_LOOP0_BEGIN( 0, SACp__inl196__flat_121_iv, SACp__inl196__type_425, 0, 32, 1)
        SAC_WL_GRID_UNROLL_BEGIN( 0, SACp__inl196__flat_121_iv, SACp__inl196__type_425, 0, 1)
          SAC_WL_STRIDE_LOOP0_BEGIN( 1, SACp__inl196__flat_121_iv, SACp__inl196__type_426, 0, 2, 1)
            SAC_WL_GRID_UNROLL_BEGIN( 1, SACp__inl196__flat_121_iv, SACp__inl196__type_426, 0, 1)
              SACp__inl196__flat_124 = (2 * SACp__inl196__type_425); 
              SACp__inl196__flat_123_64_2__ = ((SACp__inl196__flat_124 * 2) + SACp__inl196__type_426); 
              SAC_ND_IDX_PSI_S( SACp__inl196__flat_123_64_2__, SACl_v, SACp__inl196__flat_122)
              
              /*
               * WL_ASSIGN( 0, SACp__inl196__flat_122, 2, SACp__inl196_rn, SACp__inl196__flat_121_iv, 2, SACp__inl196__type_425, SACp__inl196__type_426)
               */
              SAC_TR_WL_PRINT( ("index vector [%d, %d] (== offset %d) -- offset %d -- assign", SACp__inl196__type_425, SACp__inl196__type_426, ( SAC_ND_A_SHAPE( SACp__inl196_rn, 1) * SACp__inl196__type_425 + SACp__inl196__type_426 ), SAC_WL_OFFSET( SACp__inl196_rn)));
              SAC_ND_WRITE_ARRAY( SACp__inl196_rn, SAC_WL_OFFSET( SACp__inl196_rn)) = SACp__inl196__flat_122;
              SAC_WL_OFFSET( SACp__inl196_rn)++;

            SAC_WL_GRID_UNROLL_END( 1, SACp__inl196__flat_121_iv, SACp__inl196__type_426, 0, 1)
          SAC_WL_STRIDE_LOOP_END( 1, SACp__inl196__flat_121_iv, SACp__inl196__type_426, 0, 2, 1)
        SAC_WL_GRID_UNROLL_END( 0, SACp__inl196__flat_121_iv, SACp__inl196__type_425, 0, 1)
      SAC_WL_STRIDE_LOOP_END( 0, SACp__inl196__flat_121_iv, SACp__inl196__type_425, 0, 32, 1)
    
      /*
       * MT_SCHEDULER_END( 0, 2, 0, 0, 32, 2)
       */


    
      /*
       * WL_END__OFFSET( SACp__inl196_rn, SACp__inl196__flat_121_iv, 2)
       */
    }

  SAC_PF_END_WITH( genarray)
  SAC_ND_KS_ASSIGN_ARRAY( SACp__inl196_rn, SACl_left_v)
  SAC_ND_ALLOC_ARRAY( double, SACp__inl203_rn, 0)
  SAC_ND_INC_RC( SACp__inl203_rn, 1)
  SAC_PF_BEGIN_WITH( genarray)
    
    /*
     * WL_BEGIN__OFFSET( SACp__inl203_rn, SACp__inl203__flat_121_iv, 2)
     */
    {
      int SAC_WL_OFFSET( SACp__inl203_rn);
      int SAC_WL_MT_SCHEDULE_START( 0);
      int SAC_WL_MT_SCHEDULE_STOP( 0);
      int SAC_WL_MT_SCHEDULE_START( 1);
      int SAC_WL_MT_SCHEDULE_STOP( 1);

      
      /*
       * MT_SCHEDULER_BEGIN( 0, 2, 0, 0, 32, 2)
       */
      SAC_WL_MT_SCHEDULE_START( 0) = 0;
      SAC_WL_MT_SCHEDULE_STOP( 0) = 32;
      SAC_WL_MT_SCHEDULE_START( 1) = 0;
      SAC_WL_MT_SCHEDULE_STOP( 1) = 2;

      
      /*
       * WL_INIT_OFFSET( 2, SACp__inl203_rn, SACp__inl203__flat_121_iv, 2)
       */
      SAC_WL_OFFSET( SACp__inl203_rn)
        = SAC_WL_MT_SCHEDULE_START( 0) * SAC_ND_A_SHAPE( SACp__inl203_rn, 1)
        + SAC_WL_MT_SCHEDULE_START( 1);

      SAC_WL_STRIDE_LOOP0_BEGIN( 0, SACp__inl203__flat_121_iv, SACp__inl203__type_428, 0, 32, 1)
        SAC_WL_GRID_UNROLL_BEGIN( 0, SACp__inl203__flat_121_iv, SACp__inl203__type_428, 0, 1)
          SAC_WL_STRIDE_LOOP0_BEGIN( 1, SACp__inl203__flat_121_iv, SACp__inl203__type_429, 0, 2, 1)
            SAC_WL_GRID_UNROLL_BEGIN( 1, SACp__inl203__flat_121_iv, SACp__inl203__type_429, 0, 1)
              SACp__inl203__flat_124 = (2 * SACp__inl203__type_428); 
              SACp__inl203__flat_123_64_2__ = ((SACp__inl203__flat_124 * 2) + SACp__inl203__type_429); 
              SACp__inl201__flat_394_64_2__ = ((1 * 2) + 0); 
              SACp__inl201__flat_393_64_2__ = (SACp__inl201__flat_394_64_2__ + SACp__inl203__flat_123_64_2__); 
              SAC_ND_IDX_PSI_S( SACp__inl201__flat_393_64_2__, SACl_v, SACp__inl201_array_elem)
              SACp__inl203__flat_122 = SACp__inl201_array_elem; 
              
              /*
               * WL_ASSIGN( 0, SACp__inl203__flat_122, 2, SACp__inl203_rn, SACp__inl203__flat_121_iv, 2, SACp__inl203__type_428, SACp__inl203__type_429)
               */
              SAC_TR_WL_PRINT( ("index vector [%d, %d] (== offset %d) -- offset %d -- assign", SACp__inl203__type_428, SACp__inl203__type_429, ( SAC_ND_A_SHAPE( SACp__inl203_rn, 1) * SACp__inl203__type_428 + SACp__inl203__type_429 ), SAC_WL_OFFSET( SACp__inl203_rn)));
              SAC_ND_WRITE_ARRAY( SACp__inl203_rn, SAC_WL_OFFSET( SACp__inl203_rn)) = SACp__inl203__flat_122;
              SAC_WL_OFFSET( SACp__inl203_rn)++;

            SAC_WL_GRID_UNROLL_END( 1, SACp__inl203__flat_121_iv, SACp__inl203__type_429, 0, 1)
          SAC_WL_STRIDE_LOOP_END( 1, SACp__inl203__flat_121_iv, SACp__inl203__type_429, 0, 2, 1)
        SAC_WL_GRID_UNROLL_END( 0, SACp__inl203__flat_121_iv, SACp__inl203__type_428, 0, 1)
      SAC_WL_STRIDE_LOOP_END( 0, SACp__inl203__flat_121_iv, SACp__inl203__type_428, 0, 32, 1)
    
      /*
       * MT_SCHEDULER_END( 0, 2, 0, 0, 32, 2)
       */


    
      /*
       * WL_END__OFFSET( SACp__inl203_rn, SACp__inl203__flat_121_iv, 2)
       */
    }

  SAC_PF_END_WITH( genarray)
  SAC_ND_DEC_RC_FREE_ARRAY( SACl_v, 1)
  SAC_ND_KS_ASSIGN_ARRAY( SACp__inl203_rn, SACl_right_v)
  SAC_ND_ALLOC_ARRAY( double, SACp__inl206_rn, 0)
  SAC_ND_INC_RC( SACp__inl206_rn, 1)
  SAC_PF_BEGIN_WITH( genarray)
    
    /*
     * WL_BEGIN__OFFSET( SACp__inl206_rn, SACp__inl206__flat_121_iv, 2)
     */
    {
      int SAC_WL_OFFSET( SACp__inl206_rn);
      int SAC_WL_MT_SCHEDULE_START( 0);
      int SAC_WL_MT_SCHEDULE_STOP( 0);
      int SAC_WL_MT_SCHEDULE_START( 1);
      int SAC_WL_MT_SCHEDULE_STOP( 1);

      
      /*
       * MT_SCHEDULER_BEGIN( 0, 2, 0, 0, 16, 2)
       */
      SAC_WL_MT_SCHEDULE_START( 0) = 0;
      SAC_WL_MT_SCHEDULE_STOP( 0) = 16;
      SAC_WL_MT_SCHEDULE_START( 1) = 0;
      SAC_WL_MT_SCHEDULE_STOP( 1) = 2;

      
      /*
       * WL_INIT_OFFSET( 2, SACp__inl206_rn, SACp__inl206__flat_121_iv, 2)
       */
      SAC_WL_OFFSET( SACp__inl206_rn)
        = SAC_WL_MT_SCHEDULE_START( 0) * SAC_ND_A_SHAPE( SACp__inl206_rn, 1)
        + SAC_WL_MT_SCHEDULE_START( 1);

      SAC_WL_STRIDE_LOOP0_BEGIN( 0, SACp__inl206__flat_121_iv, SACp__inl206__type_431, 0, 16, 1)
        SAC_WL_GRID_UNROLL_BEGIN( 0, SACp__inl206__flat_121_iv, SACp__inl206__type_431, 0, 1)
          SAC_WL_STRIDE_LOOP0_BEGIN( 1, SACp__inl206__flat_121_iv, SACp__inl206__type_432, 0, 2, 1)
            SAC_WL_GRID_UNROLL_BEGIN( 1, SACp__inl206__flat_121_iv, SACp__inl206__type_432, 0, 1)
              SACp__inl206__flat_124 = (2 * SACp__inl206__type_431); 
              SACp__inl206__flat_123_32_2__ = ((SACp__inl206__flat_124 * 2) + SACp__inl206__type_432); 
              SAC_ND_IDX_PSI_S( SACp__inl206__flat_123_32_2__, SACl_rofu, SACp__inl206__flat_122)
              
              /*
               * WL_ASSIGN( 0, SACp__inl206__flat_122, 2, SACp__inl206_rn, SACp__inl206__flat_121_iv, 2, SACp__inl206__type_431, SACp__inl206__type_432)
               */
              SAC_TR_WL_PRINT( ("index vector [%d, %d] (== offset %d) -- offset %d -- assign", SACp__inl206__type_431, SACp__inl206__type_432, ( SAC_ND_A_SHAPE( SACp__inl206_rn, 1) * SACp__inl206__type_431 + SACp__inl206__type_432 ), SAC_WL_OFFSET( SACp__inl206_rn)));
              SAC_ND_WRITE_ARRAY( SACp__inl206_rn, SAC_WL_OFFSET( SACp__inl206_rn)) = SACp__inl206__flat_122;
              SAC_WL_OFFSET( SACp__inl206_rn)++;

            SAC_WL_GRID_UNROLL_END( 1, SACp__inl206__flat_121_iv, SACp__inl206__type_432, 0, 1)
          SAC_WL_STRIDE_LOOP_END( 1, SACp__inl206__flat_121_iv, SACp__inl206__type_432, 0, 2, 1)
        SAC_WL_GRID_UNROLL_END( 0, SACp__inl206__flat_121_iv, SACp__inl206__type_431, 0, 1)
      SAC_WL_STRIDE_LOOP_END( 0, SACp__inl206__flat_121_iv, SACp__inl206__type_431, 0, 16, 1)
    
      /*
       * MT_SCHEDULER_END( 0, 2, 0, 0, 16, 2)
       */


    
      /*
       * WL_END__OFFSET( SACp__inl206_rn, SACp__inl206__flat_121_iv, 2)
       */
    }

  SAC_PF_END_WITH( genarray)
  SAC_ND_KS_ASSIGN_ARRAY( SACp__inl206_rn, SACl_rofu_select)
  SAC_ND_INC_RC( SACl_rofu_select, 1)
  
  /*
   * ND_FUN_AP( SACf_FFT1d__d__MAIN__cpx_32___MAIN__cpx_16_, , 4, out_rc, SACl_fft_left, in, SACl_dir, in_rc, SACl_left_v, in_rc, SACl_rofu_select)
   */
  SACf_FFT1d__d__MAIN__cpx_32___MAIN__cpx_16_( SAC_ND_KS_AP_OUT_RC(SACl_fft_left), SACl_dir, SAC_ND_KS_AP_IN_RC(SACl_left_v), SAC_ND_KS_AP_IN_RC(SACl_rofu_select));

  
  /*
   * ND_FUN_AP( SACf_FFT1d__d__MAIN__cpx_32___MAIN__cpx_16_, , 4, out_rc, SACl_fft_right, in, SACl_dir, in_rc, SACl_right_v, in_rc, SACl_rofu_select)
   */
  SACf_FFT1d__d__MAIN__cpx_32___MAIN__cpx_16_( SAC_ND_KS_AP_OUT_RC(SACl_fft_right), SACl_dir, SAC_ND_KS_AP_IN_RC(SACl_right_v), SAC_ND_KS_AP_IN_RC(SACl_rofu_select));

  
  /*
   * ND_FUN_AP( SACf__mul___MAIN__cpx_32___MAIN__cpx_32_, , 3, out_rc, SACl_fft_right, in_rc, SACl_fft_right, in_rc, SACl_rofu)
   */
  SACf__mul___MAIN__cpx_32___MAIN__cpx_32_( SAC_ND_KS_AP_OUT_RC(SACl_fft_right), SAC_ND_KS_AP_IN_RC(SACl_fft_right), SAC_ND_KS_AP_IN_RC(SACl_rofu));

  SAC_ND_ALLOC_ARRAY( double, SACp__inl211__type_558, 0)
  SAC_ND_INC_RC( SACp__inl211__type_558, 1)
  SAC_ND_ALLOC_ARRAY( int, SACp__inl211__type_557, 1)
  SAC_PF_BEGIN_WITH( genarray)
    
    /*
     * WL_BEGIN__OFFSET( SACp__inl211__type_558, SACp__inl211__type_557, 2)
     */
    {
      int SAC_WL_OFFSET( SACp__inl211__type_558);
      int SAC_WL_MT_SCHEDULE_START( 0);
      int SAC_WL_MT_SCHEDULE_STOP( 0);
      int SAC_WL_MT_SCHEDULE_START( 1);
      int SAC_WL_MT_SCHEDULE_STOP( 1);

      
      /*
       * MT_SCHEDULER_BEGIN( 0, 2, 0, 0, 64, 2)
       */
      SAC_WL_MT_SCHEDULE_START( 0) = 0;
      SAC_WL_MT_SCHEDULE_STOP( 0) = 64;
      SAC_WL_MT_SCHEDULE_START( 1) = 0;
      SAC_WL_MT_SCHEDULE_STOP( 1) = 2;

      
      /*
       * WL_INIT_OFFSET( 2, SACp__inl211__type_558, SACp__inl211__type_557, 2)
       */
      SAC_WL_OFFSET( SACp__inl211__type_558)
        = SAC_WL_MT_SCHEDULE_START( 0) * SAC_ND_A_SHAPE( SACp__inl211__type_558, 1)
        + SAC_WL_MT_SCHEDULE_START( 1);

      SAC_WL_STRIDE_LOOP0_BEGIN( 0, SACp__inl211__type_557, SACp__inl211__type_559, 0, 32, 1)
        SAC_WL_GRID_UNROLL_BEGIN( 0, SACp__inl211__type_557, SACp__inl211__type_559, 0, 1)
          SAC_WL_SET_IDXVEC( 0, SACp__inl211__type_557, SACp__inl211__type_559, 0, 1)
          SAC_WL_STRIDE_LOOP0_BEGIN( 1, SACp__inl211__type_557, SACp__inl211__type_560, 0, 2, 1)
            SAC_WL_GRID_UNROLL_BEGIN( 1, SACp__inl211__type_557, SACp__inl211__type_560, 0, 1)
              SAC_WL_SET_IDXVEC( 1, SACp__inl211__type_557, SACp__inl211__type_560, 0, 1)
              
              /*
               * ND_KS_VECT2OFFSET( SACp__inl211__type_557_32_2__, SACp__inl211__type_557, 2, 2, 32, 2)
               */
              SACp__inl211__type_557_32_2__ = ( 2* SAC_ND_READ_ARRAY( SACp__inl211__type_557, 0)+SAC_ND_READ_ARRAY( SACp__inl211__type_557, 1)) ;

              SAC_ND_IDX_PSI_S( SACp__inl211__type_557_32_2__, SACl_fft_right, SACp__inl210__flat_55)
              SAC_ND_IDX_PSI_S( SACp__inl211__type_557_32_2__, SACl_fft_left, SACp__inl210__flat_53)
              SACp__inl210__flat_52 = (SACp__inl210__flat_53 + SACp__inl210__flat_55); 
              SACp_wlt_820 = SACp__inl210__flat_52; 
              
              /*
               * WL_ASSIGN( 0, SACp_wlt_820, 2, SACp__inl211__type_558, SACp__inl211__type_557, 2, SACp__inl211__type_559, SACp__inl211__type_560)
               */
              SAC_TR_WL_PRINT( ("index vector [%d, %d] (== offset %d) -- offset %d -- assign", SACp__inl211__type_559, SACp__inl211__type_560, ( SAC_ND_A_SHAPE( SACp__inl211__type_558, 1) * SACp__inl211__type_559 + SACp__inl211__type_560 ), SAC_WL_OFFSET( SACp__inl211__type_558)));
              SAC_ND_WRITE_ARRAY( SACp__inl211__type_558, SAC_WL_OFFSET( SACp__inl211__type_558)) = SACp_wlt_820;
              SAC_WL_OFFSET( SACp__inl211__type_558)++;

            SAC_WL_GRID_UNROLL_END( 1, SACp__inl211__type_557, SACp__inl211__type_560, 0, 1)
          SAC_WL_STRIDE_LOOP_END( 1, SACp__inl211__type_557, SACp__inl211__type_560, 0, 2, 1)
        SAC_WL_GRID_UNROLL_END( 0, SACp__inl211__type_557, SACp__inl211__type_559, 0, 1)
      SAC_WL_STRIDE_LOOP_END( 0, SACp__inl211__type_557, SACp__inl211__type_559, 0, 32, 1)
      SAC_WL_STRIDE_LOOP0_BEGIN( 0, SACp__inl211__type_557, SACp__inl211__type_559, 32, 64, 1)
        SAC_WL_GRID_UNROLL_BEGIN( 0, SACp__inl211__type_557, SACp__inl211__type_559, 0, 1)
          SAC_WL_SET_IDXVEC( 0, SACp__inl211__type_557, SACp__inl211__type_559, 0, 1)
          SAC_WL_STRIDE_LOOP0_BEGIN( 1, SACp__inl211__type_557, SACp__inl211__type_560, 0, 2, 1)
            SAC_WL_GRID_UNROLL_BEGIN( 1, SACp__inl211__type_557, SACp__inl211__type_560, 0, 1)
              SAC_WL_SET_IDXVEC( 1, SACp__inl211__type_557, SACp__inl211__type_560, 0, 1)
              
              /*
               * ND_KS_VECT2OFFSET( SACp__inl211__type_557_32_2__, SACp__inl211__type_557, 2, 2, 32, 2)
               */
              SACp__inl211__type_557_32_2__ = ( 2* SAC_ND_READ_ARRAY( SACp__inl211__type_557, 0)+SAC_ND_READ_ARRAY( SACp__inl211__type_557, 1)) ;

              SACp__inl211__type_556_32_2__ = ((32 * 2) + 0); 
              SACp__inl211__type_554_32_2__ = (SACp__inl211__type_557_32_2__ - SACp__inl211__type_556_32_2__); 
              SAC_ND_IDX_PSI_S( SACp__inl211__type_554_32_2__, SACl_fft_right, SACp__inl209__flat_62)
              SAC_ND_IDX_PSI_S( SACp__inl211__type_554_32_2__, SACl_fft_left, SACp__inl209__flat_60)
              SACp__inl209__flat_59 = (SACp__inl209__flat_60 - SACp__inl209__flat_62); 
              SACp__inl211__type_555 = SACp__inl209__flat_59; 
              
              /*
               * WL_ASSIGN( 0, SACp__inl211__type_555, 2, SACp__inl211__type_558, SACp__inl211__type_557, 2, SACp__inl211__type_559, SACp__inl211__type_560)
               */
              SAC_TR_WL_PRINT( ("index vector [%d, %d] (== offset %d) -- offset %d -- assign", SACp__inl211__type_559, SACp__inl211__type_560, ( SAC_ND_A_SHAPE( SACp__inl211__type_558, 1) * SACp__inl211__type_559 + SACp__inl211__type_560 ), SAC_WL_OFFSET( SACp__inl211__type_558)));
              SAC_ND_WRITE_ARRAY( SACp__inl211__type_558, SAC_WL_OFFSET( SACp__inl211__type_558)) = SACp__inl211__type_555;
              SAC_WL_OFFSET( SACp__inl211__type_558)++;

            SAC_WL_GRID_UNROLL_END( 1, SACp__inl211__type_557, SACp__inl211__type_560, 0, 1)
          SAC_WL_STRIDE_LOOP_END( 1, SACp__inl211__type_557, SACp__inl211__type_560, 0, 2, 1)
        SAC_WL_GRID_UNROLL_END( 0, SACp__inl211__type_557, SACp__inl211__type_559, 0, 1)
      SAC_WL_STRIDE_LOOP_END( 0, SACp__inl211__type_557, SACp__inl211__type_559, 32, 64, 1)
    
      /*
       * MT_SCHEDULER_END( 0, 2, 0, 0, 64, 2)
       */


    
      /*
       * WL_END__OFFSET( SACp__inl211__type_558, SACp__inl211__type_557, 2)
       */
    }

  SAC_PF_END_WITH( genarray)
  SAC_ND_DEC_RC_FREE_ARRAY( SACl_fft_right, 1)
  SAC_ND_DEC_RC_FREE_ARRAY( SACl_fft_left, 1)
  SAC_ND_DEC_RC_FREE_ARRAY( SACp__inl211__type_557, 1)
  SAC_ND_KS_ASSIGN_ARRAY( SACp__inl211__type_558, SACl_res)
  
  /*
   * ND_FUN_RET( , 1, out_rc, SACl_res, SACl_res)
   */
  SAC_ND_KS_RET_OUT_RC( SACl_res, SACl_res);
  

}


/*
 * ND_FUN_DEC( SACf_FFT1d__d__MAIN__cpx_128___MAIN__cpx_64_, void, 4, out_rc, double *, SACl_res, in, double, SACl_dir, in_rc, double *, SACl_v, in_rc, double *, SACl_rofu)
 */
void SACf_FFT1d__d__MAIN__cpx_128___MAIN__cpx_64_( SAC_ND_KS_DEC_OUT_RC(double *, SACl_res), double SACl_dir, SAC_ND_KS_DEC_IN_RC( double *, SACl_v), SAC_ND_KS_DEC_IN_RC( double *, SACl_rofu))
{ 
  double SACp_wlt_824;
  
  /*
   * ND_KS_DECL_ARRAY( double, SACl_res, 2, 128, 2)
   */
  double *SACl_res;
  int SAC_ND_A_RC( SACl_res);
  const int SAC_ND_A_SIZE( SACl_res) = 128*2;
  const int SAC_ND_A_DIM( SACl_res) = 2;
  const int SAC_ND_A_SHAPE( SACl_res, 0) = 128;
  const int SAC_ND_A_SHAPE( SACl_res, 1) = 2;

  
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
   * ND_KS_DECL_ARRAY( double, SACl_rofu_select, 2, 32, 2)
   */
  double *SACl_rofu_select;
  int SAC_ND_A_RC( SACl_rofu_select);
  const int SAC_ND_A_SIZE( SACl_rofu_select) = 32*2;
  const int SAC_ND_A_DIM( SACl_rofu_select) = 2;
  const int SAC_ND_A_SHAPE( SACl_rofu_select, 0) = 32;
  const int SAC_ND_A_SHAPE( SACl_rofu_select, 1) = 2;

  
  /*
   * ND_KS_DECL_ARRAY( double, SACl_right_v, 2, 64, 2)
   */
  double *SACl_right_v;
  int SAC_ND_A_RC( SACl_right_v);
  const int SAC_ND_A_SIZE( SACl_right_v) = 64*2;
  const int SAC_ND_A_DIM( SACl_right_v) = 2;
  const int SAC_ND_A_SHAPE( SACl_right_v, 0) = 64;
  const int SAC_ND_A_SHAPE( SACl_right_v, 1) = 2;

  
  /*
   * ND_KS_DECL_ARRAY( double, SACl_left_v, 2, 64, 2)
   */
  double *SACl_left_v;
  int SAC_ND_A_RC( SACl_left_v);
  const int SAC_ND_A_SIZE( SACl_left_v) = 64*2;
  const int SAC_ND_A_DIM( SACl_left_v) = 2;
  const int SAC_ND_A_SHAPE( SACl_left_v, 0) = 64;
  const int SAC_ND_A_SHAPE( SACl_left_v, 1) = 2;

  
  /*
   * ND_KS_DECL_ARRAY( int, SACp__inl229__type_576, 1, 2)
   */
  int *SACp__inl229__type_576;
  int SAC_ND_A_RC( SACp__inl229__type_576);
  const int SAC_ND_A_SIZE( SACp__inl229__type_576) = 2;
  const int SAC_ND_A_DIM( SACp__inl229__type_576) = 1;
  const int SAC_ND_A_SHAPE( SACp__inl229__type_576, 0) = 2;

  int SACp__inl229__type_576_64_2__;
  int SACp__inl229__type_578;
  int SACp__inl229__type_579;
  int SACp__inl229__type_575_64_2__;
  int SACp__inl229__type_573_64_2__;
  double SACp__inl229__type_574;
  
  /*
   * ND_KS_DECL_ARRAY( double, SACp__inl229__type_577, 2, 128, 2)
   */
  double *SACp__inl229__type_577;
  int SAC_ND_A_RC( SACp__inl229__type_577);
  const int SAC_ND_A_SIZE( SACp__inl229__type_577) = 128*2;
  const int SAC_ND_A_DIM( SACp__inl229__type_577) = 2;
  const int SAC_ND_A_SHAPE( SACp__inl229__type_577, 0) = 128;
  const int SAC_ND_A_SHAPE( SACp__inl229__type_577, 1) = 2;

  double SACp__inl228__flat_55;
  double SACp__inl228__flat_53;
  double SACp__inl228__flat_52;
  double SACp__inl227__flat_62;
  double SACp__inl227__flat_60;
  double SACp__inl227__flat_59;
  
  /*
   * ND_KS_DECL_ARRAY( int, SACp__inl224__flat_121_iv, 1, 2)
   */
  int *SACp__inl224__flat_121_iv;
  int SAC_ND_A_RC( SACp__inl224__flat_121_iv);
  const int SAC_ND_A_SIZE( SACp__inl224__flat_121_iv) = 2;
  const int SAC_ND_A_DIM( SACp__inl224__flat_121_iv) = 1;
  const int SAC_ND_A_SHAPE( SACp__inl224__flat_121_iv, 0) = 2;

  int SACp__inl224__type_422;
  int SACp__inl224__type_423;
  int SACp__inl224__flat_124;
  int SACp__inl224__flat_123_64_2__;
  double SACp__inl224__flat_122;
  
  /*
   * ND_KS_DECL_ARRAY( double, SACp__inl224_rn, 2, 32, 2)
   */
  double *SACp__inl224_rn;
  int SAC_ND_A_RC( SACp__inl224_rn);
  const int SAC_ND_A_SIZE( SACp__inl224_rn) = 32*2;
  const int SAC_ND_A_DIM( SACp__inl224_rn) = 2;
  const int SAC_ND_A_SHAPE( SACp__inl224_rn, 0) = 32;
  const int SAC_ND_A_SHAPE( SACp__inl224_rn, 1) = 2;

  
  /*
   * ND_KS_DECL_ARRAY( int, SACp__inl221__flat_121_iv, 1, 2)
   */
  int *SACp__inl221__flat_121_iv;
  int SAC_ND_A_RC( SACp__inl221__flat_121_iv);
  const int SAC_ND_A_SIZE( SACp__inl221__flat_121_iv) = 2;
  const int SAC_ND_A_DIM( SACp__inl221__flat_121_iv) = 1;
  const int SAC_ND_A_SHAPE( SACp__inl221__flat_121_iv, 0) = 2;

  int SACp__inl221__type_419;
  int SACp__inl221__type_420;
  int SACp__inl221__flat_124;
  int SACp__inl221__flat_123_128_2__;
  double SACp__inl221__flat_122;
  
  /*
   * ND_KS_DECL_ARRAY( double, SACp__inl221_rn, 2, 64, 2)
   */
  double *SACp__inl221_rn;
  int SAC_ND_A_RC( SACp__inl221_rn);
  const int SAC_ND_A_SIZE( SACp__inl221_rn) = 64*2;
  const int SAC_ND_A_DIM( SACp__inl221_rn) = 2;
  const int SAC_ND_A_SHAPE( SACp__inl221_rn, 0) = 64;
  const int SAC_ND_A_SHAPE( SACp__inl221_rn, 1) = 2;

  double SACp__inl219_array_elem;
  int SACp__inl219__flat_394_128_2__;
  int SACp__inl219__flat_393_128_2__;
  
  /*
   * ND_KS_DECL_ARRAY( int, SACp__inl214__flat_121_iv, 1, 2)
   */
  int *SACp__inl214__flat_121_iv;
  int SAC_ND_A_RC( SACp__inl214__flat_121_iv);
  const int SAC_ND_A_SIZE( SACp__inl214__flat_121_iv) = 2;
  const int SAC_ND_A_DIM( SACp__inl214__flat_121_iv) = 1;
  const int SAC_ND_A_SHAPE( SACp__inl214__flat_121_iv, 0) = 2;

  int SACp__inl214__type_416;
  int SACp__inl214__type_417;
  int SACp__inl214__flat_124;
  int SACp__inl214__flat_123_128_2__;
  double SACp__inl214__flat_122;
  
  /*
   * ND_KS_DECL_ARRAY( double, SACp__inl214_rn, 2, 64, 2)
   */
  double *SACp__inl214_rn;
  int SAC_ND_A_RC( SACp__inl214_rn);
  const int SAC_ND_A_SIZE( SACp__inl214_rn) = 64*2;
  const int SAC_ND_A_DIM( SACp__inl214_rn) = 2;
  const int SAC_ND_A_SHAPE( SACp__inl214_rn, 0) = 64;
  const int SAC_ND_A_SHAPE( SACp__inl214_rn, 1) = 2;


  
  /*
   * ND_KS_DECL_ARRAY_ARG( SACl_v, 2, 128, 2)
   */
  const int SAC_ND_A_SIZE(SACl_v)=128*2;
  const int SAC_ND_A_DIM(SACl_v)=2;
  const int SAC_ND_A_SHAPE(SACl_v, 0)=128;
  const int SAC_ND_A_SHAPE(SACl_v, 1)=2;

  
  /*
   * ND_KS_DECL_ARRAY_ARG( SACl_rofu, 2, 64, 2)
   */
  const int SAC_ND_A_SIZE(SACl_rofu)=64*2;
  const int SAC_ND_A_DIM(SACl_rofu)=2;
  const int SAC_ND_A_SHAPE(SACl_rofu, 0)=64;
  const int SAC_ND_A_SHAPE(SACl_rofu, 1)=2;

  SAC_ND_ALLOC_ARRAY( double, SACp__inl214_rn, 0)
  SAC_ND_INC_RC( SACp__inl214_rn, 1)
  SAC_PF_BEGIN_WITH( genarray)
    
    /*
     * WL_BEGIN__OFFSET( SACp__inl214_rn, SACp__inl214__flat_121_iv, 2)
     */
    {
      int SAC_WL_OFFSET( SACp__inl214_rn);
      int SAC_WL_MT_SCHEDULE_START( 0);
      int SAC_WL_MT_SCHEDULE_STOP( 0);
      int SAC_WL_MT_SCHEDULE_START( 1);
      int SAC_WL_MT_SCHEDULE_STOP( 1);

      
      /*
       * MT_SCHEDULER_BEGIN( 0, 2, 0, 0, 64, 2)
       */
      SAC_WL_MT_SCHEDULE_START( 0) = 0;
      SAC_WL_MT_SCHEDULE_STOP( 0) = 64;
      SAC_WL_MT_SCHEDULE_START( 1) = 0;
      SAC_WL_MT_SCHEDULE_STOP( 1) = 2;

      
      /*
       * WL_INIT_OFFSET( 2, SACp__inl214_rn, SACp__inl214__flat_121_iv, 2)
       */
      SAC_WL_OFFSET( SACp__inl214_rn)
        = SAC_WL_MT_SCHEDULE_START( 0) * SAC_ND_A_SHAPE( SACp__inl214_rn, 1)
        + SAC_WL_MT_SCHEDULE_START( 1);

      SAC_WL_STRIDE_LOOP0_BEGIN( 0, SACp__inl214__flat_121_iv, SACp__inl214__type_416, 0, 64, 1)
        SAC_WL_GRID_UNROLL_BEGIN( 0, SACp__inl214__flat_121_iv, SACp__inl214__type_416, 0, 1)
          SAC_WL_STRIDE_LOOP0_BEGIN( 1, SACp__inl214__flat_121_iv, SACp__inl214__type_417, 0, 2, 1)
            SAC_WL_GRID_UNROLL_BEGIN( 1, SACp__inl214__flat_121_iv, SACp__inl214__type_417, 0, 1)
              SACp__inl214__flat_124 = (2 * SACp__inl214__type_416); 
              SACp__inl214__flat_123_128_2__ = ((SACp__inl214__flat_124 * 2) + SACp__inl214__type_417); 
              SAC_ND_IDX_PSI_S( SACp__inl214__flat_123_128_2__, SACl_v, SACp__inl214__flat_122)
              
              /*
               * WL_ASSIGN( 0, SACp__inl214__flat_122, 2, SACp__inl214_rn, SACp__inl214__flat_121_iv, 2, SACp__inl214__type_416, SACp__inl214__type_417)
               */
              SAC_TR_WL_PRINT( ("index vector [%d, %d] (== offset %d) -- offset %d -- assign", SACp__inl214__type_416, SACp__inl214__type_417, ( SAC_ND_A_SHAPE( SACp__inl214_rn, 1) * SACp__inl214__type_416 + SACp__inl214__type_417 ), SAC_WL_OFFSET( SACp__inl214_rn)));
              SAC_ND_WRITE_ARRAY( SACp__inl214_rn, SAC_WL_OFFSET( SACp__inl214_rn)) = SACp__inl214__flat_122;
              SAC_WL_OFFSET( SACp__inl214_rn)++;

            SAC_WL_GRID_UNROLL_END( 1, SACp__inl214__flat_121_iv, SACp__inl214__type_417, 0, 1)
          SAC_WL_STRIDE_LOOP_END( 1, SACp__inl214__flat_121_iv, SACp__inl214__type_417, 0, 2, 1)
        SAC_WL_GRID_UNROLL_END( 0, SACp__inl214__flat_121_iv, SACp__inl214__type_416, 0, 1)
      SAC_WL_STRIDE_LOOP_END( 0, SACp__inl214__flat_121_iv, SACp__inl214__type_416, 0, 64, 1)
    
      /*
       * MT_SCHEDULER_END( 0, 2, 0, 0, 64, 2)
       */


    
      /*
       * WL_END__OFFSET( SACp__inl214_rn, SACp__inl214__flat_121_iv, 2)
       */
    }

  SAC_PF_END_WITH( genarray)
  SAC_ND_KS_ASSIGN_ARRAY( SACp__inl214_rn, SACl_left_v)
  SAC_ND_ALLOC_ARRAY( double, SACp__inl221_rn, 0)
  SAC_ND_INC_RC( SACp__inl221_rn, 1)
  SAC_PF_BEGIN_WITH( genarray)
    
    /*
     * WL_BEGIN__OFFSET( SACp__inl221_rn, SACp__inl221__flat_121_iv, 2)
     */
    {
      int SAC_WL_OFFSET( SACp__inl221_rn);
      int SAC_WL_MT_SCHEDULE_START( 0);
      int SAC_WL_MT_SCHEDULE_STOP( 0);
      int SAC_WL_MT_SCHEDULE_START( 1);
      int SAC_WL_MT_SCHEDULE_STOP( 1);

      
      /*
       * MT_SCHEDULER_BEGIN( 0, 2, 0, 0, 64, 2)
       */
      SAC_WL_MT_SCHEDULE_START( 0) = 0;
      SAC_WL_MT_SCHEDULE_STOP( 0) = 64;
      SAC_WL_MT_SCHEDULE_START( 1) = 0;
      SAC_WL_MT_SCHEDULE_STOP( 1) = 2;

      
      /*
       * WL_INIT_OFFSET( 2, SACp__inl221_rn, SACp__inl221__flat_121_iv, 2)
       */
      SAC_WL_OFFSET( SACp__inl221_rn)
        = SAC_WL_MT_SCHEDULE_START( 0) * SAC_ND_A_SHAPE( SACp__inl221_rn, 1)
        + SAC_WL_MT_SCHEDULE_START( 1);

      SAC_WL_STRIDE_LOOP0_BEGIN( 0, SACp__inl221__flat_121_iv, SACp__inl221__type_419, 0, 64, 1)
        SAC_WL_GRID_UNROLL_BEGIN( 0, SACp__inl221__flat_121_iv, SACp__inl221__type_419, 0, 1)
          SAC_WL_STRIDE_LOOP0_BEGIN( 1, SACp__inl221__flat_121_iv, SACp__inl221__type_420, 0, 2, 1)
            SAC_WL_GRID_UNROLL_BEGIN( 1, SACp__inl221__flat_121_iv, SACp__inl221__type_420, 0, 1)
              SACp__inl221__flat_124 = (2 * SACp__inl221__type_419); 
              SACp__inl221__flat_123_128_2__ = ((SACp__inl221__flat_124 * 2) + SACp__inl221__type_420); 
              SACp__inl219__flat_394_128_2__ = ((1 * 2) + 0); 
              SACp__inl219__flat_393_128_2__ = (SACp__inl219__flat_394_128_2__ + SACp__inl221__flat_123_128_2__); 
              SAC_ND_IDX_PSI_S( SACp__inl219__flat_393_128_2__, SACl_v, SACp__inl219_array_elem)
              SACp__inl221__flat_122 = SACp__inl219_array_elem; 
              
              /*
               * WL_ASSIGN( 0, SACp__inl221__flat_122, 2, SACp__inl221_rn, SACp__inl221__flat_121_iv, 2, SACp__inl221__type_419, SACp__inl221__type_420)
               */
              SAC_TR_WL_PRINT( ("index vector [%d, %d] (== offset %d) -- offset %d -- assign", SACp__inl221__type_419, SACp__inl221__type_420, ( SAC_ND_A_SHAPE( SACp__inl221_rn, 1) * SACp__inl221__type_419 + SACp__inl221__type_420 ), SAC_WL_OFFSET( SACp__inl221_rn)));
              SAC_ND_WRITE_ARRAY( SACp__inl221_rn, SAC_WL_OFFSET( SACp__inl221_rn)) = SACp__inl221__flat_122;
              SAC_WL_OFFSET( SACp__inl221_rn)++;

            SAC_WL_GRID_UNROLL_END( 1, SACp__inl221__flat_121_iv, SACp__inl221__type_420, 0, 1)
          SAC_WL_STRIDE_LOOP_END( 1, SACp__inl221__flat_121_iv, SACp__inl221__type_420, 0, 2, 1)
        SAC_WL_GRID_UNROLL_END( 0, SACp__inl221__flat_121_iv, SACp__inl221__type_419, 0, 1)
      SAC_WL_STRIDE_LOOP_END( 0, SACp__inl221__flat_121_iv, SACp__inl221__type_419, 0, 64, 1)
    
      /*
       * MT_SCHEDULER_END( 0, 2, 0, 0, 64, 2)
       */


    
      /*
       * WL_END__OFFSET( SACp__inl221_rn, SACp__inl221__flat_121_iv, 2)
       */
    }

  SAC_PF_END_WITH( genarray)
  SAC_ND_DEC_RC_FREE_ARRAY( SACl_v, 1)
  SAC_ND_KS_ASSIGN_ARRAY( SACp__inl221_rn, SACl_right_v)
  SAC_ND_ALLOC_ARRAY( double, SACp__inl224_rn, 0)
  SAC_ND_INC_RC( SACp__inl224_rn, 1)
  SAC_PF_BEGIN_WITH( genarray)
    
    /*
     * WL_BEGIN__OFFSET( SACp__inl224_rn, SACp__inl224__flat_121_iv, 2)
     */
    {
      int SAC_WL_OFFSET( SACp__inl224_rn);
      int SAC_WL_MT_SCHEDULE_START( 0);
      int SAC_WL_MT_SCHEDULE_STOP( 0);
      int SAC_WL_MT_SCHEDULE_START( 1);
      int SAC_WL_MT_SCHEDULE_STOP( 1);

      
      /*
       * MT_SCHEDULER_BEGIN( 0, 2, 0, 0, 32, 2)
       */
      SAC_WL_MT_SCHEDULE_START( 0) = 0;
      SAC_WL_MT_SCHEDULE_STOP( 0) = 32;
      SAC_WL_MT_SCHEDULE_START( 1) = 0;
      SAC_WL_MT_SCHEDULE_STOP( 1) = 2;

      
      /*
       * WL_INIT_OFFSET( 2, SACp__inl224_rn, SACp__inl224__flat_121_iv, 2)
       */
      SAC_WL_OFFSET( SACp__inl224_rn)
        = SAC_WL_MT_SCHEDULE_START( 0) * SAC_ND_A_SHAPE( SACp__inl224_rn, 1)
        + SAC_WL_MT_SCHEDULE_START( 1);

      SAC_WL_STRIDE_LOOP0_BEGIN( 0, SACp__inl224__flat_121_iv, SACp__inl224__type_422, 0, 32, 1)
        SAC_WL_GRID_UNROLL_BEGIN( 0, SACp__inl224__flat_121_iv, SACp__inl224__type_422, 0, 1)
          SAC_WL_STRIDE_LOOP0_BEGIN( 1, SACp__inl224__flat_121_iv, SACp__inl224__type_423, 0, 2, 1)
            SAC_WL_GRID_UNROLL_BEGIN( 1, SACp__inl224__flat_121_iv, SACp__inl224__type_423, 0, 1)
              SACp__inl224__flat_124 = (2 * SACp__inl224__type_422); 
              SACp__inl224__flat_123_64_2__ = ((SACp__inl224__flat_124 * 2) + SACp__inl224__type_423); 
              SAC_ND_IDX_PSI_S( SACp__inl224__flat_123_64_2__, SACl_rofu, SACp__inl224__flat_122)
              
              /*
               * WL_ASSIGN( 0, SACp__inl224__flat_122, 2, SACp__inl224_rn, SACp__inl224__flat_121_iv, 2, SACp__inl224__type_422, SACp__inl224__type_423)
               */
              SAC_TR_WL_PRINT( ("index vector [%d, %d] (== offset %d) -- offset %d -- assign", SACp__inl224__type_422, SACp__inl224__type_423, ( SAC_ND_A_SHAPE( SACp__inl224_rn, 1) * SACp__inl224__type_422 + SACp__inl224__type_423 ), SAC_WL_OFFSET( SACp__inl224_rn)));
              SAC_ND_WRITE_ARRAY( SACp__inl224_rn, SAC_WL_OFFSET( SACp__inl224_rn)) = SACp__inl224__flat_122;
              SAC_WL_OFFSET( SACp__inl224_rn)++;

            SAC_WL_GRID_UNROLL_END( 1, SACp__inl224__flat_121_iv, SACp__inl224__type_423, 0, 1)
          SAC_WL_STRIDE_LOOP_END( 1, SACp__inl224__flat_121_iv, SACp__inl224__type_423, 0, 2, 1)
        SAC_WL_GRID_UNROLL_END( 0, SACp__inl224__flat_121_iv, SACp__inl224__type_422, 0, 1)
      SAC_WL_STRIDE_LOOP_END( 0, SACp__inl224__flat_121_iv, SACp__inl224__type_422, 0, 32, 1)
    
      /*
       * MT_SCHEDULER_END( 0, 2, 0, 0, 32, 2)
       */


    
      /*
       * WL_END__OFFSET( SACp__inl224_rn, SACp__inl224__flat_121_iv, 2)
       */
    }

  SAC_PF_END_WITH( genarray)
  SAC_ND_KS_ASSIGN_ARRAY( SACp__inl224_rn, SACl_rofu_select)
  SAC_ND_INC_RC( SACl_rofu_select, 1)
  
  /*
   * ND_FUN_AP( SACf_FFT1d__d__MAIN__cpx_64___MAIN__cpx_32_, , 4, out_rc, SACl_fft_left, in, SACl_dir, in_rc, SACl_left_v, in_rc, SACl_rofu_select)
   */
  SACf_FFT1d__d__MAIN__cpx_64___MAIN__cpx_32_( SAC_ND_KS_AP_OUT_RC(SACl_fft_left), SACl_dir, SAC_ND_KS_AP_IN_RC(SACl_left_v), SAC_ND_KS_AP_IN_RC(SACl_rofu_select));

  
  /*
   * ND_FUN_AP( SACf_FFT1d__d__MAIN__cpx_64___MAIN__cpx_32_, , 4, out_rc, SACl_fft_right, in, SACl_dir, in_rc, SACl_right_v, in_rc, SACl_rofu_select)
   */
  SACf_FFT1d__d__MAIN__cpx_64___MAIN__cpx_32_( SAC_ND_KS_AP_OUT_RC(SACl_fft_right), SACl_dir, SAC_ND_KS_AP_IN_RC(SACl_right_v), SAC_ND_KS_AP_IN_RC(SACl_rofu_select));

  
  /*
   * ND_FUN_AP( SACf__mul___MAIN__cpx_64___MAIN__cpx_64_, , 3, out_rc, SACl_fft_right, in_rc, SACl_fft_right, in_rc, SACl_rofu)
   */
  SACf__mul___MAIN__cpx_64___MAIN__cpx_64_( SAC_ND_KS_AP_OUT_RC(SACl_fft_right), SAC_ND_KS_AP_IN_RC(SACl_fft_right), SAC_ND_KS_AP_IN_RC(SACl_rofu));

  SAC_ND_ALLOC_ARRAY( double, SACp__inl229__type_577, 0)
  SAC_ND_INC_RC( SACp__inl229__type_577, 1)
  SAC_ND_ALLOC_ARRAY( int, SACp__inl229__type_576, 1)
  SAC_PF_BEGIN_WITH( genarray)
    
    /*
     * WL_BEGIN__OFFSET( SACp__inl229__type_577, SACp__inl229__type_576, 2)
     */
    {
      int SAC_WL_OFFSET( SACp__inl229__type_577);
      int SAC_WL_MT_SCHEDULE_START( 0);
      int SAC_WL_MT_SCHEDULE_STOP( 0);
      int SAC_WL_MT_SCHEDULE_START( 1);
      int SAC_WL_MT_SCHEDULE_STOP( 1);

      
      /*
       * MT_SCHEDULER_BEGIN( 0, 2, 0, 0, 128, 2)
       */
      SAC_WL_MT_SCHEDULE_START( 0) = 0;
      SAC_WL_MT_SCHEDULE_STOP( 0) = 128;
      SAC_WL_MT_SCHEDULE_START( 1) = 0;
      SAC_WL_MT_SCHEDULE_STOP( 1) = 2;

      
      /*
       * WL_INIT_OFFSET( 2, SACp__inl229__type_577, SACp__inl229__type_576, 2)
       */
      SAC_WL_OFFSET( SACp__inl229__type_577)
        = SAC_WL_MT_SCHEDULE_START( 0) * SAC_ND_A_SHAPE( SACp__inl229__type_577, 1)
        + SAC_WL_MT_SCHEDULE_START( 1);

      SAC_WL_STRIDE_LOOP0_BEGIN( 0, SACp__inl229__type_576, SACp__inl229__type_578, 0, 64, 1)
        SAC_WL_GRID_UNROLL_BEGIN( 0, SACp__inl229__type_576, SACp__inl229__type_578, 0, 1)
          SAC_WL_SET_IDXVEC( 0, SACp__inl229__type_576, SACp__inl229__type_578, 0, 1)
          SAC_WL_STRIDE_LOOP0_BEGIN( 1, SACp__inl229__type_576, SACp__inl229__type_579, 0, 2, 1)
            SAC_WL_GRID_UNROLL_BEGIN( 1, SACp__inl229__type_576, SACp__inl229__type_579, 0, 1)
              SAC_WL_SET_IDXVEC( 1, SACp__inl229__type_576, SACp__inl229__type_579, 0, 1)
              
              /*
               * ND_KS_VECT2OFFSET( SACp__inl229__type_576_64_2__, SACp__inl229__type_576, 2, 2, 64, 2)
               */
              SACp__inl229__type_576_64_2__ = ( 2* SAC_ND_READ_ARRAY( SACp__inl229__type_576, 0)+SAC_ND_READ_ARRAY( SACp__inl229__type_576, 1)) ;

              SAC_ND_IDX_PSI_S( SACp__inl229__type_576_64_2__, SACl_fft_right, SACp__inl228__flat_55)
              SAC_ND_IDX_PSI_S( SACp__inl229__type_576_64_2__, SACl_fft_left, SACp__inl228__flat_53)
              SACp__inl228__flat_52 = (SACp__inl228__flat_53 + SACp__inl228__flat_55); 
              SACp_wlt_824 = SACp__inl228__flat_52; 
              
              /*
               * WL_ASSIGN( 0, SACp_wlt_824, 2, SACp__inl229__type_577, SACp__inl229__type_576, 2, SACp__inl229__type_578, SACp__inl229__type_579)
               */
              SAC_TR_WL_PRINT( ("index vector [%d, %d] (== offset %d) -- offset %d -- assign", SACp__inl229__type_578, SACp__inl229__type_579, ( SAC_ND_A_SHAPE( SACp__inl229__type_577, 1) * SACp__inl229__type_578 + SACp__inl229__type_579 ), SAC_WL_OFFSET( SACp__inl229__type_577)));
              SAC_ND_WRITE_ARRAY( SACp__inl229__type_577, SAC_WL_OFFSET( SACp__inl229__type_577)) = SACp_wlt_824;
              SAC_WL_OFFSET( SACp__inl229__type_577)++;

            SAC_WL_GRID_UNROLL_END( 1, SACp__inl229__type_576, SACp__inl229__type_579, 0, 1)
          SAC_WL_STRIDE_LOOP_END( 1, SACp__inl229__type_576, SACp__inl229__type_579, 0, 2, 1)
        SAC_WL_GRID_UNROLL_END( 0, SACp__inl229__type_576, SACp__inl229__type_578, 0, 1)
      SAC_WL_STRIDE_LOOP_END( 0, SACp__inl229__type_576, SACp__inl229__type_578, 0, 64, 1)
      SAC_WL_STRIDE_LOOP0_BEGIN( 0, SACp__inl229__type_576, SACp__inl229__type_578, 64, 128, 1)
        SAC_WL_GRID_UNROLL_BEGIN( 0, SACp__inl229__type_576, SACp__inl229__type_578, 0, 1)
          SAC_WL_SET_IDXVEC( 0, SACp__inl229__type_576, SACp__inl229__type_578, 0, 1)
          SAC_WL_STRIDE_LOOP0_BEGIN( 1, SACp__inl229__type_576, SACp__inl229__type_579, 0, 2, 1)
            SAC_WL_GRID_UNROLL_BEGIN( 1, SACp__inl229__type_576, SACp__inl229__type_579, 0, 1)
              SAC_WL_SET_IDXVEC( 1, SACp__inl229__type_576, SACp__inl229__type_579, 0, 1)
              
              /*
               * ND_KS_VECT2OFFSET( SACp__inl229__type_576_64_2__, SACp__inl229__type_576, 2, 2, 64, 2)
               */
              SACp__inl229__type_576_64_2__ = ( 2* SAC_ND_READ_ARRAY( SACp__inl229__type_576, 0)+SAC_ND_READ_ARRAY( SACp__inl229__type_576, 1)) ;

              SACp__inl229__type_575_64_2__ = ((64 * 2) + 0); 
              SACp__inl229__type_573_64_2__ = (SACp__inl229__type_576_64_2__ - SACp__inl229__type_575_64_2__); 
              SAC_ND_IDX_PSI_S( SACp__inl229__type_573_64_2__, SACl_fft_right, SACp__inl227__flat_62)
              SAC_ND_IDX_PSI_S( SACp__inl229__type_573_64_2__, SACl_fft_left, SACp__inl227__flat_60)
              SACp__inl227__flat_59 = (SACp__inl227__flat_60 - SACp__inl227__flat_62); 
              SACp__inl229__type_574 = SACp__inl227__flat_59; 
              
              /*
               * WL_ASSIGN( 0, SACp__inl229__type_574, 2, SACp__inl229__type_577, SACp__inl229__type_576, 2, SACp__inl229__type_578, SACp__inl229__type_579)
               */
              SAC_TR_WL_PRINT( ("index vector [%d, %d] (== offset %d) -- offset %d -- assign", SACp__inl229__type_578, SACp__inl229__type_579, ( SAC_ND_A_SHAPE( SACp__inl229__type_577, 1) * SACp__inl229__type_578 + SACp__inl229__type_579 ), SAC_WL_OFFSET( SACp__inl229__type_577)));
              SAC_ND_WRITE_ARRAY( SACp__inl229__type_577, SAC_WL_OFFSET( SACp__inl229__type_577)) = SACp__inl229__type_574;
              SAC_WL_OFFSET( SACp__inl229__type_577)++;

            SAC_WL_GRID_UNROLL_END( 1, SACp__inl229__type_576, SACp__inl229__type_579, 0, 1)
          SAC_WL_STRIDE_LOOP_END( 1, SACp__inl229__type_576, SACp__inl229__type_579, 0, 2, 1)
        SAC_WL_GRID_UNROLL_END( 0, SACp__inl229__type_576, SACp__inl229__type_578, 0, 1)
      SAC_WL_STRIDE_LOOP_END( 0, SACp__inl229__type_576, SACp__inl229__type_578, 64, 128, 1)
    
      /*
       * MT_SCHEDULER_END( 0, 2, 0, 0, 128, 2)
       */


    
      /*
       * WL_END__OFFSET( SACp__inl229__type_577, SACp__inl229__type_576, 2)
       */
    }

  SAC_PF_END_WITH( genarray)
  SAC_ND_DEC_RC_FREE_ARRAY( SACl_fft_right, 1)
  SAC_ND_DEC_RC_FREE_ARRAY( SACl_fft_left, 1)
  SAC_ND_DEC_RC_FREE_ARRAY( SACp__inl229__type_576, 1)
  SAC_ND_KS_ASSIGN_ARRAY( SACp__inl229__type_577, SACl_res)
  
  /*
   * ND_FUN_RET( , 1, out_rc, SACl_res, SACl_res)
   */
  SAC_ND_KS_RET_OUT_RC( SACl_res, SACl_res);
  

}


/*
 * ND_FUN_DEC( SACf_FFT1d_Slice__d__MAIN__cpx_128_32_128___MAIN__cpx_64_, void, 4, out_rc, double *, SACl_result, in, double, SACl_dir, in_rc, double *, SACl_a, in_rc, double *, SACl_rofu)
 */
void SACf_FFT1d_Slice__d__MAIN__cpx_128_32_128___MAIN__cpx_64_( SAC_ND_KS_DEC_OUT_RC(double *, SACl_result), double SACl_dir, SAC_ND_KS_DEC_IN_RC( double *, SACl_a), SAC_ND_KS_DEC_IN_RC( double *, SACl_rofu))
{ 
  
  /*
   * ND_KS_DECL_ARRAY( double, SACp_flat_353, 2, 128, 2)
   */
  double *SACp_flat_353;
  int SAC_ND_A_RC( SACp_flat_353);
  const int SAC_ND_A_SIZE( SACp_flat_353) = 128*2;
  const int SAC_ND_A_DIM( SACp_flat_353) = 2;
  const int SAC_ND_A_SHAPE( SACp_flat_353, 0) = 128;
  const int SAC_ND_A_SHAPE( SACp_flat_353, 1) = 2;

  int SACp_type_696;
  int SACp_type_695;
  
  /*
   * ND_KS_DECL_ARRAY( int, SACp_flat_352_iv, 1, 2)
   */
  int *SACp_flat_352_iv;
  int SAC_ND_A_RC( SACp_flat_352_iv);
  const int SAC_ND_A_SIZE( SACp_flat_352_iv) = 2;
  const int SAC_ND_A_DIM( SACp_flat_352_iv) = 1;
  const int SAC_ND_A_SHAPE( SACp_flat_352_iv, 0) = 2;

  
  /*
   * ND_KS_DECL_ARRAY( double, SACl_result, 4, 128, 32, 128, 2)
   */
  double *SACl_result;
  int SAC_ND_A_RC( SACl_result);
  const int SAC_ND_A_SIZE( SACl_result) = 128*32*128*2;
  const int SAC_ND_A_DIM( SACl_result) = 4;
  const int SAC_ND_A_SHAPE( SACl_result, 0) = 128;
  const int SAC_ND_A_SHAPE( SACl_result, 1) = 32;
  const int SAC_ND_A_SHAPE( SACl_result, 2) = 128;
  const int SAC_ND_A_SHAPE( SACl_result, 3) = 2;

  
  /*
   * ND_KS_DECL_ARRAY( double, SACl_slice, 2, 128, 2)
   */
  double *SACl_slice;
  int SAC_ND_A_RC( SACl_slice);
  const int SAC_ND_A_SIZE( SACl_slice) = 128*2;
  const int SAC_ND_A_DIM( SACl_slice) = 2;
  const int SAC_ND_A_SHAPE( SACl_slice, 0) = 128;
  const int SAC_ND_A_SHAPE( SACl_slice, 1) = 2;

  
  /*
   * ND_KS_DECL_ARRAY( int, SACp__inl237__type_623, 1, 2)
   */
  int *SACp__inl237__type_623;
  int SAC_ND_A_RC( SACp__inl237__type_623);
  const int SAC_ND_A_SIZE( SACp__inl237__type_623) = 2;
  const int SAC_ND_A_DIM( SACp__inl237__type_623) = 1;
  const int SAC_ND_A_SHAPE( SACp__inl237__type_623, 0) = 2;

  int SACp__inl237__type_618;
  int SACp__inl237__type_617;
  int SACp__inl237__type_616_128_32_128_2__;
  double SACp__inl237__type_615;
  
  /*
   * ND_KS_DECL_ARRAY( double, SACp__inl237_rd, 2, 128, 2)
   */
  double *SACp__inl237_rd;
  int SAC_ND_A_RC( SACp__inl237_rd);
  const int SAC_ND_A_SIZE( SACp__inl237_rd) = 128*2;
  const int SAC_ND_A_DIM( SACp__inl237_rd) = 2;
  const int SAC_ND_A_SHAPE( SACp__inl237_rd, 0) = 128;
  const int SAC_ND_A_SHAPE( SACp__inl237_rd, 1) = 2;


  
  /*
   * ND_KS_DECL_ARRAY_ARG( SACl_a, 4, 128, 32, 128, 2)
   */
  const int SAC_ND_A_SIZE(SACl_a)=128*32*128*2;
  const int SAC_ND_A_DIM(SACl_a)=4;
  const int SAC_ND_A_SHAPE(SACl_a, 0)=128;
  const int SAC_ND_A_SHAPE(SACl_a, 1)=32;
  const int SAC_ND_A_SHAPE(SACl_a, 2)=128;
  const int SAC_ND_A_SHAPE(SACl_a, 3)=2;

  
  /*
   * ND_KS_DECL_ARRAY_ARG( SACl_rofu, 2, 64, 2)
   */
  const int SAC_ND_A_SIZE(SACl_rofu)=64*2;
  const int SAC_ND_A_DIM(SACl_rofu)=2;
  const int SAC_ND_A_SHAPE(SACl_rofu, 0)=64;
  const int SAC_ND_A_SHAPE(SACl_rofu, 1)=2;

  SAC_ND_ALLOC_ARRAY( double, SACl_result, 0)
  SAC_ND_INC_RC( SACl_result, 1)
  SAC_PF_BEGIN_WITH( modarray)
    
    /*
     * WL_BEGIN__OFFSET( SACl_result, SACp_flat_352_iv, 2)
     */
    {
      int SAC_WL_OFFSET( SACl_result);
      int SAC_WL_MT_SCHEDULE_START( 0);
      int SAC_WL_MT_SCHEDULE_STOP( 0);
      int SAC_WL_MT_SCHEDULE_START( 1);
      int SAC_WL_MT_SCHEDULE_STOP( 1);

      
      /*
       * MT_SCHEDULER_BEGIN( 0, 2, 0, 0, 128, 32)
       */
      SAC_WL_MT_SCHEDULE_START( 0) = 0;
      SAC_WL_MT_SCHEDULE_STOP( 0) = 128;
      SAC_WL_MT_SCHEDULE_START( 1) = 0;
      SAC_WL_MT_SCHEDULE_STOP( 1) = 32;

      
      /*
       * WL_INIT_OFFSET( 4, SACl_result, SACp_flat_352_iv, 2)
       */
      SAC_WL_OFFSET( SACl_result)
        = SAC_WL_MT_SCHEDULE_START( 0) * SAC_ND_A_SHAPE( SACl_result, 1) * SAC_ND_A_SHAPE( SACl_result, 2) * SAC_ND_A_SHAPE( SACl_result, 3)
        + SAC_WL_MT_SCHEDULE_START( 1) * SAC_ND_A_SHAPE( SACl_result, 2) * SAC_ND_A_SHAPE( SACl_result, 3);

      SAC_WL_STRIDE_LOOP0_BEGIN( 0, SACp_flat_352_iv, SACp_type_695, 0, 128, 1)
        SAC_WL_GRID_UNROLL_BEGIN( 0, SACp_flat_352_iv, SACp_type_695, 0, 1)
          SAC_WL_STRIDE_LOOP0_BEGIN( 1, SACp_flat_352_iv, SACp_type_696, 0, 32, 1)
            SAC_WL_GRID_UNROLL_BEGIN( 1, SACp_flat_352_iv, SACp_type_696, 0, 1)
              SAC_ND_INC_RC( SACl_rofu, 1)
              SAC_ND_ALLOC_ARRAY( double, SACp__inl237_rd, 0)
              SAC_ND_INC_RC( SACp__inl237_rd, 1)
              SAC_PF_BEGIN_WITH( genarray)
                
                /*
                 * WL_BEGIN__OFFSET( SACp__inl237_rd, SACp__inl237__type_623, 2)
                 */
                {
                  int SAC_WL_OFFSET( SACp__inl237_rd);
                  int SAC_WL_MT_SCHEDULE_START( 0);
                  int SAC_WL_MT_SCHEDULE_STOP( 0);
                  int SAC_WL_MT_SCHEDULE_START( 1);
                  int SAC_WL_MT_SCHEDULE_STOP( 1);

                  
                  /*
                   * MT_SCHEDULER_BEGIN( 0, 2, 0, 0, 128, 2)
                   */
                  SAC_WL_MT_SCHEDULE_START( 0) = 0;
                  SAC_WL_MT_SCHEDULE_STOP( 0) = 128;
                  SAC_WL_MT_SCHEDULE_START( 1) = 0;
                  SAC_WL_MT_SCHEDULE_STOP( 1) = 2;

                  
                  /*
                   * WL_INIT_OFFSET( 2, SACp__inl237_rd, SACp__inl237__type_623, 2)
                   */
                  SAC_WL_OFFSET( SACp__inl237_rd)
                    = SAC_WL_MT_SCHEDULE_START( 0) * SAC_ND_A_SHAPE( SACp__inl237_rd, 1)
                    + SAC_WL_MT_SCHEDULE_START( 1);

                  SAC_WL_STRIDE_LOOP0_BEGIN( 0, SACp__inl237__type_623, SACp__inl237__type_618, 0, 128, 1)
                    SAC_WL_GRID_UNROLL_BEGIN( 0, SACp__inl237__type_623, SACp__inl237__type_618, 0, 1)
                      SAC_WL_STRIDE_LOOP0_BEGIN( 1, SACp__inl237__type_623, SACp__inl237__type_617, 0, 2, 1)
                        SAC_WL_GRID_UNROLL_BEGIN( 1, SACp__inl237__type_623, SACp__inl237__type_617, 0, 1)
                          SACp__inl237__type_616_128_32_128_2__ = ((((((SACp_type_695 * 32) + SACp_type_696) * 128) + SACp__inl237__type_618) * 2) + SACp__inl237__type_617); 
                          SAC_ND_IDX_PSI_S( SACp__inl237__type_616_128_32_128_2__, SACl_a, SACp__inl237__type_615)
                          
                          /*
                           * WL_ASSIGN( 0, SACp__inl237__type_615, 2, SACp__inl237_rd, SACp__inl237__type_623, 2, SACp__inl237__type_618, SACp__inl237__type_617)
                           */
                          SAC_TR_WL_PRINT( ("index vector [%d, %d] (== offset %d) -- offset %d -- assign", SACp__inl237__type_618, SACp__inl237__type_617, ( SAC_ND_A_SHAPE( SACp__inl237_rd, 1) * SACp__inl237__type_618 + SACp__inl237__type_617 ), SAC_WL_OFFSET( SACp__inl237_rd)));
                          SAC_ND_WRITE_ARRAY( SACp__inl237_rd, SAC_WL_OFFSET( SACp__inl237_rd)) = SACp__inl237__type_615;
                          SAC_WL_OFFSET( SACp__inl237_rd)++;

                        SAC_WL_GRID_UNROLL_END( 1, SACp__inl237__type_623, SACp__inl237__type_617, 0, 1)
                      SAC_WL_STRIDE_LOOP_END( 1, SACp__inl237__type_623, SACp__inl237__type_617, 0, 2, 1)
                    SAC_WL_GRID_UNROLL_END( 0, SACp__inl237__type_623, SACp__inl237__type_618, 0, 1)
                  SAC_WL_STRIDE_LOOP_END( 0, SACp__inl237__type_623, SACp__inl237__type_618, 0, 128, 1)
                
                  /*
                   * MT_SCHEDULER_END( 0, 2, 0, 0, 128, 2)
                   */


                
                  /*
                   * WL_END__OFFSET( SACp__inl237_rd, SACp__inl237__type_623, 2)
                   */
                }

              SAC_PF_END_WITH( genarray)
              SAC_ND_KS_ASSIGN_ARRAY( SACp__inl237_rd, SACp_flat_353)
              
              /*
               * ND_FUN_AP( SACf_FFT1d__d__MAIN__cpx_128___MAIN__cpx_64_, , 4, out_rc, SACl_slice, in, SACl_dir, in_rc, SACp_flat_353, in_rc, SACl_rofu)
               */
              SACf_FFT1d__d__MAIN__cpx_128___MAIN__cpx_64_( SAC_ND_KS_AP_OUT_RC(SACl_slice), SACl_dir, SAC_ND_KS_AP_IN_RC(SACp_flat_353), SAC_ND_KS_AP_IN_RC(SACl_rofu));

              
              /*
               * WL_ASSIGN( 2, SACl_slice, 4, SACl_result, SACp_flat_352_iv, 2, SACp_type_695, SACp_type_696)
               */
              SAC_TR_WL_PRINT( ("index vector [%d, %d] (== offset %d) -- offset %d -- assign", SACp_type_695, SACp_type_696, ( SAC_ND_A_SHAPE( SACl_result, 1) * SACp_type_695 + SACp_type_696 ), SAC_WL_OFFSET( SACl_result)));
              {
                int SAC_i;
                for (SAC_i = 0; SAC_i < SAC_ND_A_SIZE( SACl_slice); SAC_i++) {
                  SAC_ND_WRITE_ARRAY( SACl_result, SAC_WL_OFFSET( SACl_result)) = SAC_ND_READ_ARRAY( SACl_slice, SAC_i);
                  SAC_WL_OFFSET( SACl_result)++;
                }
              }

              SAC_ND_DEC_RC_FREE_ARRAY( SACl_slice, 1)
            SAC_WL_GRID_UNROLL_END( 1, SACp_flat_352_iv, SACp_type_696, 0, 1)
          SAC_WL_STRIDE_LOOP_END( 1, SACp_flat_352_iv, SACp_type_696, 0, 32, 1)
        SAC_WL_GRID_UNROLL_END( 0, SACp_flat_352_iv, SACp_type_695, 0, 1)
      SAC_WL_STRIDE_LOOP_END( 0, SACp_flat_352_iv, SACp_type_695, 0, 128, 1)
    
      /*
       * MT_SCHEDULER_END( 0, 2, 0, 0, 128, 32)
       */


    
      /*
       * WL_END__OFFSET( SACl_result, SACp_flat_352_iv, 2)
       */
    }

  SAC_PF_END_WITH( modarray)
  SAC_ND_DEC_RC_FREE_ARRAY( SACl_a, 1)
  SAC_ND_DEC_RC_FREE_ARRAY( SACl_rofu, 1)
  
  /*
   * ND_FUN_RET( , 1, out_rc, SACl_result, SACl_result)
   */
  SAC_ND_KS_RET_OUT_RC( SACl_result, SACl_result);
  

}


/*
 * ND_FUN_DEC( SACf_FFT1d_Slice__d__MAIN__cpx_128_128_32___MAIN__cpx_64_, void, 4, out_rc, double *, SACl_result, in, double, SACl_dir, in_rc, double *, SACl_a, in_rc, double *, SACl_rofu)
 */
void SACf_FFT1d_Slice__d__MAIN__cpx_128_128_32___MAIN__cpx_64_( SAC_ND_KS_DEC_OUT_RC(double *, SACl_result), double SACl_dir, SAC_ND_KS_DEC_IN_RC( double *, SACl_a), SAC_ND_KS_DEC_IN_RC( double *, SACl_rofu))
{ 
  
  /*
   * ND_KS_DECL_ARRAY( double, SACl_result, 4, 128, 128, 32, 2)
   */
  double *SACl_result;
  int SAC_ND_A_RC( SACl_result);
  const int SAC_ND_A_SIZE( SACl_result) = 128*128*32*2;
  const int SAC_ND_A_DIM( SACl_result) = 4;
  const int SAC_ND_A_SHAPE( SACl_result, 0) = 128;
  const int SAC_ND_A_SHAPE( SACl_result, 1) = 128;
  const int SAC_ND_A_SHAPE( SACl_result, 2) = 32;
  const int SAC_ND_A_SHAPE( SACl_result, 3) = 2;

  
  /*
   * ND_KS_DECL_ARRAY( double, SACl_slice, 2, 32, 2)
   */
  double *SACl_slice;
  int SAC_ND_A_RC( SACl_slice);
  const int SAC_ND_A_SIZE( SACl_slice) = 32*2;
  const int SAC_ND_A_DIM( SACl_slice) = 2;
  const int SAC_ND_A_SHAPE( SACl_slice, 0) = 32;
  const int SAC_ND_A_SHAPE( SACl_slice, 1) = 2;

  
  /*
   * ND_KS_DECL_ARRAY( double, SACp_flat_343, 2, 32, 2)
   */
  double *SACp_flat_343;
  int SAC_ND_A_RC( SACp_flat_343);
  const int SAC_ND_A_SIZE( SACp_flat_343) = 32*2;
  const int SAC_ND_A_DIM( SACp_flat_343) = 2;
  const int SAC_ND_A_SHAPE( SACp_flat_343, 0) = 32;
  const int SAC_ND_A_SHAPE( SACp_flat_343, 1) = 2;

  int SACp_type_595;
  int SACp_type_594;
  
  /*
   * ND_KS_DECL_ARRAY( int, SACp_flat_342_iv, 1, 2)
   */
  int *SACp_flat_342_iv;
  int SAC_ND_A_RC( SACp_flat_342_iv);
  const int SAC_ND_A_SIZE( SACp_flat_342_iv) = 2;
  const int SAC_ND_A_DIM( SACp_flat_342_iv) = 1;
  const int SAC_ND_A_SHAPE( SACp_flat_342_iv, 0) = 2;

  
  /*
   * ND_KS_DECL_ARRAY( double, SACl_rofu_select, 2, 16, 2)
   */
  double *SACl_rofu_select;
  int SAC_ND_A_RC( SACl_rofu_select);
  const int SAC_ND_A_SIZE( SACl_rofu_select) = 16*2;
  const int SAC_ND_A_DIM( SACl_rofu_select) = 2;
  const int SAC_ND_A_SHAPE( SACl_rofu_select, 0) = 16;
  const int SAC_ND_A_SHAPE( SACl_rofu_select, 1) = 2;

  
  /*
   * ND_KS_DECL_ARRAY( double, SACp_flat_311, 2, 16, 2)
   */
  double *SACp_flat_311;
  int SAC_ND_A_RC( SACp_flat_311);
  const int SAC_ND_A_SIZE( SACp_flat_311) = 16*2;
  const int SAC_ND_A_DIM( SACp_flat_311) = 2;
  const int SAC_ND_A_SHAPE( SACp_flat_311, 0) = 16;
  const int SAC_ND_A_SHAPE( SACp_flat_311, 1) = 2;

  double SACp_flat_313;
  int SACp_flat_314_64_2__;
  int SACp_flat_315;
  int SACp_type_593;
  int SACp_type_592;
  
  /*
   * ND_KS_DECL_ARRAY( int, SACp_flat_312_iv, 1, 2)
   */
  int *SACp_flat_312_iv;
  int SAC_ND_A_RC( SACp_flat_312_iv);
  const int SAC_ND_A_SIZE( SACp_flat_312_iv) = 2;
  const int SAC_ND_A_DIM( SACp_flat_312_iv) = 1;
  const int SAC_ND_A_SHAPE( SACp_flat_312_iv, 0) = 2;

  
  /*
   * ND_KS_DECL_ARRAY( int, SACp__inl242__type_604, 1, 2)
   */
  int *SACp__inl242__type_604;
  int SAC_ND_A_RC( SACp__inl242__type_604);
  const int SAC_ND_A_SIZE( SACp__inl242__type_604) = 2;
  const int SAC_ND_A_DIM( SACp__inl242__type_604) = 1;
  const int SAC_ND_A_SHAPE( SACp__inl242__type_604, 0) = 2;

  int SACp__inl242__type_599;
  int SACp__inl242__type_598;
  int SACp__inl242__type_597_128_128_32_2__;
  double SACp__inl242__type_596;
  
  /*
   * ND_KS_DECL_ARRAY( double, SACp__inl242_rd, 2, 32, 2)
   */
  double *SACp__inl242_rd;
  int SAC_ND_A_RC( SACp__inl242_rd);
  const int SAC_ND_A_SIZE( SACp__inl242_rd) = 32*2;
  const int SAC_ND_A_DIM( SACp__inl242_rd) = 2;
  const int SAC_ND_A_SHAPE( SACp__inl242_rd, 0) = 32;
  const int SAC_ND_A_SHAPE( SACp__inl242_rd, 1) = 2;


  
  /*
   * ND_KS_DECL_ARRAY_ARG( SACl_a, 4, 128, 128, 32, 2)
   */
  const int SAC_ND_A_SIZE(SACl_a)=128*128*32*2;
  const int SAC_ND_A_DIM(SACl_a)=4;
  const int SAC_ND_A_SHAPE(SACl_a, 0)=128;
  const int SAC_ND_A_SHAPE(SACl_a, 1)=128;
  const int SAC_ND_A_SHAPE(SACl_a, 2)=32;
  const int SAC_ND_A_SHAPE(SACl_a, 3)=2;

  
  /*
   * ND_KS_DECL_ARRAY_ARG( SACl_rofu, 2, 64, 2)
   */
  const int SAC_ND_A_SIZE(SACl_rofu)=64*2;
  const int SAC_ND_A_DIM(SACl_rofu)=2;
  const int SAC_ND_A_SHAPE(SACl_rofu, 0)=64;
  const int SAC_ND_A_SHAPE(SACl_rofu, 1)=2;

  SAC_ND_ALLOC_ARRAY( double, SACp_flat_311, 0)
  SAC_ND_INC_RC( SACp_flat_311, 1)
  SAC_PF_BEGIN_WITH( genarray)
    
    /*
     * WL_BEGIN__OFFSET( SACp_flat_311, SACp_flat_312_iv, 2)
     */
    {
      int SAC_WL_OFFSET( SACp_flat_311);
      int SAC_WL_MT_SCHEDULE_START( 0);
      int SAC_WL_MT_SCHEDULE_STOP( 0);
      int SAC_WL_MT_SCHEDULE_START( 1);
      int SAC_WL_MT_SCHEDULE_STOP( 1);

      
      /*
       * MT_SCHEDULER_BEGIN( 0, 2, 0, 0, 16, 2)
       */
      SAC_WL_MT_SCHEDULE_START( 0) = 0;
      SAC_WL_MT_SCHEDULE_STOP( 0) = 16;
      SAC_WL_MT_SCHEDULE_START( 1) = 0;
      SAC_WL_MT_SCHEDULE_STOP( 1) = 2;

      
      /*
       * WL_INIT_OFFSET( 2, SACp_flat_311, SACp_flat_312_iv, 2)
       */
      SAC_WL_OFFSET( SACp_flat_311)
        = SAC_WL_MT_SCHEDULE_START( 0) * SAC_ND_A_SHAPE( SACp_flat_311, 1)
        + SAC_WL_MT_SCHEDULE_START( 1);

      SAC_WL_STRIDE_LOOP0_BEGIN( 0, SACp_flat_312_iv, SACp_type_592, 0, 16, 1)
        SAC_WL_GRID_UNROLL_BEGIN( 0, SACp_flat_312_iv, SACp_type_592, 0, 1)
          SAC_WL_STRIDE_LOOP0_BEGIN( 1, SACp_flat_312_iv, SACp_type_593, 0, 2, 1)
            SAC_WL_GRID_UNROLL_BEGIN( 1, SACp_flat_312_iv, SACp_type_593, 0, 1)
              SACp_flat_315 = (4 * SACp_type_592); 
              SACp_flat_314_64_2__ = ((SACp_flat_315 * 2) + SACp_type_593); 
              SAC_ND_IDX_PSI_S( SACp_flat_314_64_2__, SACl_rofu, SACp_flat_313)
              
              /*
               * WL_ASSIGN( 0, SACp_flat_313, 2, SACp_flat_311, SACp_flat_312_iv, 2, SACp_type_592, SACp_type_593)
               */
              SAC_TR_WL_PRINT( ("index vector [%d, %d] (== offset %d) -- offset %d -- assign", SACp_type_592, SACp_type_593, ( SAC_ND_A_SHAPE( SACp_flat_311, 1) * SACp_type_592 + SACp_type_593 ), SAC_WL_OFFSET( SACp_flat_311)));
              SAC_ND_WRITE_ARRAY( SACp_flat_311, SAC_WL_OFFSET( SACp_flat_311)) = SACp_flat_313;
              SAC_WL_OFFSET( SACp_flat_311)++;

            SAC_WL_GRID_UNROLL_END( 1, SACp_flat_312_iv, SACp_type_593, 0, 1)
          SAC_WL_STRIDE_LOOP_END( 1, SACp_flat_312_iv, SACp_type_593, 0, 2, 1)
        SAC_WL_GRID_UNROLL_END( 0, SACp_flat_312_iv, SACp_type_592, 0, 1)
      SAC_WL_STRIDE_LOOP_END( 0, SACp_flat_312_iv, SACp_type_592, 0, 16, 1)
    
      /*
       * MT_SCHEDULER_END( 0, 2, 0, 0, 16, 2)
       */


    
      /*
       * WL_END__OFFSET( SACp_flat_311, SACp_flat_312_iv, 2)
       */
    }

  SAC_PF_END_WITH( genarray)
  SAC_ND_DEC_RC_FREE_ARRAY( SACl_rofu, 1)
  SAC_ND_KS_ASSIGN_ARRAY( SACp_flat_311, SACl_rofu_select)
  SAC_ND_ALLOC_ARRAY( double, SACl_result, 0)
  SAC_ND_INC_RC( SACl_result, 1)
  SAC_PF_BEGIN_WITH( modarray)
    
    /*
     * WL_BEGIN__OFFSET( SACl_result, SACp_flat_342_iv, 2)
     */
    {
      int SAC_WL_OFFSET( SACl_result);
      int SAC_WL_MT_SCHEDULE_START( 0);
      int SAC_WL_MT_SCHEDULE_STOP( 0);
      int SAC_WL_MT_SCHEDULE_START( 1);
      int SAC_WL_MT_SCHEDULE_STOP( 1);

      
      /*
       * MT_SCHEDULER_BEGIN( 0, 2, 0, 0, 128, 128)
       */
      SAC_WL_MT_SCHEDULE_START( 0) = 0;
      SAC_WL_MT_SCHEDULE_STOP( 0) = 128;
      SAC_WL_MT_SCHEDULE_START( 1) = 0;
      SAC_WL_MT_SCHEDULE_STOP( 1) = 128;

      
      /*
       * WL_INIT_OFFSET( 4, SACl_result, SACp_flat_342_iv, 2)
       */
      SAC_WL_OFFSET( SACl_result)
        = SAC_WL_MT_SCHEDULE_START( 0) * SAC_ND_A_SHAPE( SACl_result, 1) * SAC_ND_A_SHAPE( SACl_result, 2) * SAC_ND_A_SHAPE( SACl_result, 3)
        + SAC_WL_MT_SCHEDULE_START( 1) * SAC_ND_A_SHAPE( SACl_result, 2) * SAC_ND_A_SHAPE( SACl_result, 3);

      SAC_WL_STRIDE_LOOP0_BEGIN( 0, SACp_flat_342_iv, SACp_type_594, 0, 128, 1)
        SAC_WL_GRID_UNROLL_BEGIN( 0, SACp_flat_342_iv, SACp_type_594, 0, 1)
          SAC_WL_STRIDE_LOOP0_BEGIN( 1, SACp_flat_342_iv, SACp_type_595, 0, 128, 1)
            SAC_WL_GRID_UNROLL_BEGIN( 1, SACp_flat_342_iv, SACp_type_595, 0, 1)
              SAC_ND_INC_RC( SACl_rofu_select, 1)
              SAC_ND_ALLOC_ARRAY( double, SACp__inl242_rd, 0)
              SAC_ND_INC_RC( SACp__inl242_rd, 1)
              SAC_PF_BEGIN_WITH( genarray)
                
                /*
                 * WL_BEGIN__OFFSET( SACp__inl242_rd, SACp__inl242__type_604, 2)
                 */
                {
                  int SAC_WL_OFFSET( SACp__inl242_rd);
                  int SAC_WL_MT_SCHEDULE_START( 0);
                  int SAC_WL_MT_SCHEDULE_STOP( 0);
                  int SAC_WL_MT_SCHEDULE_START( 1);
                  int SAC_WL_MT_SCHEDULE_STOP( 1);

                  
                  /*
                   * MT_SCHEDULER_BEGIN( 0, 2, 0, 0, 32, 2)
                   */
                  SAC_WL_MT_SCHEDULE_START( 0) = 0;
                  SAC_WL_MT_SCHEDULE_STOP( 0) = 32;
                  SAC_WL_MT_SCHEDULE_START( 1) = 0;
                  SAC_WL_MT_SCHEDULE_STOP( 1) = 2;

                  
                  /*
                   * WL_INIT_OFFSET( 2, SACp__inl242_rd, SACp__inl242__type_604, 2)
                   */
                  SAC_WL_OFFSET( SACp__inl242_rd)
                    = SAC_WL_MT_SCHEDULE_START( 0) * SAC_ND_A_SHAPE( SACp__inl242_rd, 1)
                    + SAC_WL_MT_SCHEDULE_START( 1);

                  SAC_WL_STRIDE_LOOP0_BEGIN( 0, SACp__inl242__type_604, SACp__inl242__type_599, 0, 32, 1)
                    SAC_WL_GRID_UNROLL_BEGIN( 0, SACp__inl242__type_604, SACp__inl242__type_599, 0, 1)
                      SAC_WL_STRIDE_LOOP0_BEGIN( 1, SACp__inl242__type_604, SACp__inl242__type_598, 0, 2, 1)
                        SAC_WL_GRID_UNROLL_BEGIN( 1, SACp__inl242__type_604, SACp__inl242__type_598, 0, 1)
                          SACp__inl242__type_597_128_128_32_2__ = ((((((SACp_type_594 * 128) + SACp_type_595) * 32) + SACp__inl242__type_599) * 2) + SACp__inl242__type_598); 
                          SAC_ND_IDX_PSI_S( SACp__inl242__type_597_128_128_32_2__, SACl_a, SACp__inl242__type_596)
                          
                          /*
                           * WL_ASSIGN( 0, SACp__inl242__type_596, 2, SACp__inl242_rd, SACp__inl242__type_604, 2, SACp__inl242__type_599, SACp__inl242__type_598)
                           */
                          SAC_TR_WL_PRINT( ("index vector [%d, %d] (== offset %d) -- offset %d -- assign", SACp__inl242__type_599, SACp__inl242__type_598, ( SAC_ND_A_SHAPE( SACp__inl242_rd, 1) * SACp__inl242__type_599 + SACp__inl242__type_598 ), SAC_WL_OFFSET( SACp__inl242_rd)));
                          SAC_ND_WRITE_ARRAY( SACp__inl242_rd, SAC_WL_OFFSET( SACp__inl242_rd)) = SACp__inl242__type_596;
                          SAC_WL_OFFSET( SACp__inl242_rd)++;

                        SAC_WL_GRID_UNROLL_END( 1, SACp__inl242__type_604, SACp__inl242__type_598, 0, 1)
                      SAC_WL_STRIDE_LOOP_END( 1, SACp__inl242__type_604, SACp__inl242__type_598, 0, 2, 1)
                    SAC_WL_GRID_UNROLL_END( 0, SACp__inl242__type_604, SACp__inl242__type_599, 0, 1)
                  SAC_WL_STRIDE_LOOP_END( 0, SACp__inl242__type_604, SACp__inl242__type_599, 0, 32, 1)
                
                  /*
                   * MT_SCHEDULER_END( 0, 2, 0, 0, 32, 2)
                   */


                
                  /*
                   * WL_END__OFFSET( SACp__inl242_rd, SACp__inl242__type_604, 2)
                   */
                }

              SAC_PF_END_WITH( genarray)
              SAC_ND_KS_ASSIGN_ARRAY( SACp__inl242_rd, SACp_flat_343)
              
              /*
               * ND_FUN_AP( SACf_FFT1d__d__MAIN__cpx_32___MAIN__cpx_16_, , 4, out_rc, SACl_slice, in, SACl_dir, in_rc, SACp_flat_343, in_rc, SACl_rofu_select)
               */
              SACf_FFT1d__d__MAIN__cpx_32___MAIN__cpx_16_( SAC_ND_KS_AP_OUT_RC(SACl_slice), SACl_dir, SAC_ND_KS_AP_IN_RC(SACp_flat_343), SAC_ND_KS_AP_IN_RC(SACl_rofu_select));

              
              /*
               * WL_ASSIGN( 2, SACl_slice, 4, SACl_result, SACp_flat_342_iv, 2, SACp_type_594, SACp_type_595)
               */
              SAC_TR_WL_PRINT( ("index vector [%d, %d] (== offset %d) -- offset %d -- assign", SACp_type_594, SACp_type_595, ( SAC_ND_A_SHAPE( SACl_result, 1) * SACp_type_594 + SACp_type_595 ), SAC_WL_OFFSET( SACl_result)));
              {
                int SAC_i;
                for (SAC_i = 0; SAC_i < SAC_ND_A_SIZE( SACl_slice); SAC_i++) {
                  SAC_ND_WRITE_ARRAY( SACl_result, SAC_WL_OFFSET( SACl_result)) = SAC_ND_READ_ARRAY( SACl_slice, SAC_i);
                  SAC_WL_OFFSET( SACl_result)++;
                }
              }

              SAC_ND_DEC_RC_FREE_ARRAY( SACl_slice, 1)
            SAC_WL_GRID_UNROLL_END( 1, SACp_flat_342_iv, SACp_type_595, 0, 1)
          SAC_WL_STRIDE_LOOP_END( 1, SACp_flat_342_iv, SACp_type_595, 0, 128, 1)
        SAC_WL_GRID_UNROLL_END( 0, SACp_flat_342_iv, SACp_type_594, 0, 1)
      SAC_WL_STRIDE_LOOP_END( 0, SACp_flat_342_iv, SACp_type_594, 0, 128, 1)
    
      /*
       * MT_SCHEDULER_END( 0, 2, 0, 0, 128, 128)
       */


    
      /*
       * WL_END__OFFSET( SACl_result, SACp_flat_342_iv, 2)
       */
    }

  SAC_PF_END_WITH( modarray)
  SAC_ND_DEC_RC_FREE_ARRAY( SACl_a, 1)
  SAC_ND_DEC_RC_FREE_ARRAY( SACl_rofu_select, 1)
  
  /*
   * ND_FUN_RET( , 1, out_rc, SACl_result, SACl_result)
   */
  SAC_ND_KS_RET_OUT_RC( SACl_result, SACl_result);
  

}


/*
 * ND_FUN_DEC( SACf_FFT1d_Slice__d__MAIN__cpx_32_128_128___MAIN__cpx_64_, void, 4, out_rc, double *, SACl_result, in, double, SACl_dir, in_rc, double *, SACl_a, in_rc, double *, SACl_rofu)
 */
void SACf_FFT1d_Slice__d__MAIN__cpx_32_128_128___MAIN__cpx_64_( SAC_ND_KS_DEC_OUT_RC(double *, SACl_result), double SACl_dir, SAC_ND_KS_DEC_IN_RC( double *, SACl_a), SAC_ND_KS_DEC_IN_RC( double *, SACl_rofu))
{ 
  
  /*
   * ND_KS_DECL_ARRAY( double, SACp_flat_353, 2, 128, 2)
   */
  double *SACp_flat_353;
  int SAC_ND_A_RC( SACp_flat_353);
  const int SAC_ND_A_SIZE( SACp_flat_353) = 128*2;
  const int SAC_ND_A_DIM( SACp_flat_353) = 2;
  const int SAC_ND_A_SHAPE( SACp_flat_353, 0) = 128;
  const int SAC_ND_A_SHAPE( SACp_flat_353, 1) = 2;

  int SACp_type_653;
  int SACp_type_652;
  
  /*
   * ND_KS_DECL_ARRAY( int, SACp_flat_352_iv, 1, 2)
   */
  int *SACp_flat_352_iv;
  int SAC_ND_A_RC( SACp_flat_352_iv);
  const int SAC_ND_A_SIZE( SACp_flat_352_iv) = 2;
  const int SAC_ND_A_DIM( SACp_flat_352_iv) = 1;
  const int SAC_ND_A_SHAPE( SACp_flat_352_iv, 0) = 2;

  
  /*
   * ND_KS_DECL_ARRAY( double, SACl_result, 4, 32, 128, 128, 2)
   */
  double *SACl_result;
  int SAC_ND_A_RC( SACl_result);
  const int SAC_ND_A_SIZE( SACl_result) = 32*128*128*2;
  const int SAC_ND_A_DIM( SACl_result) = 4;
  const int SAC_ND_A_SHAPE( SACl_result, 0) = 32;
  const int SAC_ND_A_SHAPE( SACl_result, 1) = 128;
  const int SAC_ND_A_SHAPE( SACl_result, 2) = 128;
  const int SAC_ND_A_SHAPE( SACl_result, 3) = 2;

  
  /*
   * ND_KS_DECL_ARRAY( double, SACl_slice, 2, 128, 2)
   */
  double *SACl_slice;
  int SAC_ND_A_RC( SACl_slice);
  const int SAC_ND_A_SIZE( SACl_slice) = 128*2;
  const int SAC_ND_A_DIM( SACl_slice) = 2;
  const int SAC_ND_A_SHAPE( SACl_slice, 0) = 128;
  const int SAC_ND_A_SHAPE( SACl_slice, 1) = 2;

  
  /*
   * ND_KS_DECL_ARRAY( int, SACp__inl253__type_414, 1, 2)
   */
  int *SACp__inl253__type_414;
  int SAC_ND_A_RC( SACp__inl253__type_414);
  const int SAC_ND_A_SIZE( SACp__inl253__type_414) = 2;
  const int SAC_ND_A_DIM( SACp__inl253__type_414) = 1;
  const int SAC_ND_A_SHAPE( SACp__inl253__type_414, 0) = 2;

  int SACp__inl253__type_409;
  int SACp__inl253__type_408;
  int SACp__inl253__type_407_32_128_128_2__;
  double SACp__inl253__type_406;
  
  /*
   * ND_KS_DECL_ARRAY( double, SACp__inl253_rd, 2, 128, 2)
   */
  double *SACp__inl253_rd;
  int SAC_ND_A_RC( SACp__inl253_rd);
  const int SAC_ND_A_SIZE( SACp__inl253_rd) = 128*2;
  const int SAC_ND_A_DIM( SACp__inl253_rd) = 2;
  const int SAC_ND_A_SHAPE( SACp__inl253_rd, 0) = 128;
  const int SAC_ND_A_SHAPE( SACp__inl253_rd, 1) = 2;


  
  /*
   * ND_KS_DECL_ARRAY_ARG( SACl_a, 4, 32, 128, 128, 2)
   */
  const int SAC_ND_A_SIZE(SACl_a)=32*128*128*2;
  const int SAC_ND_A_DIM(SACl_a)=4;
  const int SAC_ND_A_SHAPE(SACl_a, 0)=32;
  const int SAC_ND_A_SHAPE(SACl_a, 1)=128;
  const int SAC_ND_A_SHAPE(SACl_a, 2)=128;
  const int SAC_ND_A_SHAPE(SACl_a, 3)=2;

  
  /*
   * ND_KS_DECL_ARRAY_ARG( SACl_rofu, 2, 64, 2)
   */
  const int SAC_ND_A_SIZE(SACl_rofu)=64*2;
  const int SAC_ND_A_DIM(SACl_rofu)=2;
  const int SAC_ND_A_SHAPE(SACl_rofu, 0)=64;
  const int SAC_ND_A_SHAPE(SACl_rofu, 1)=2;

  SAC_ND_ALLOC_ARRAY( double, SACl_result, 0)
  SAC_ND_INC_RC( SACl_result, 1)
  SAC_PF_BEGIN_WITH( modarray)
    
    /*
     * WL_BEGIN__OFFSET( SACl_result, SACp_flat_352_iv, 2)
     */
    {
      int SAC_WL_OFFSET( SACl_result);
      int SAC_WL_MT_SCHEDULE_START( 0);
      int SAC_WL_MT_SCHEDULE_STOP( 0);
      int SAC_WL_MT_SCHEDULE_START( 1);
      int SAC_WL_MT_SCHEDULE_STOP( 1);

      
      /*
       * MT_SCHEDULER_BEGIN( 0, 2, 0, 0, 32, 128)
       */
      SAC_WL_MT_SCHEDULE_START( 0) = 0;
      SAC_WL_MT_SCHEDULE_STOP( 0) = 32;
      SAC_WL_MT_SCHEDULE_START( 1) = 0;
      SAC_WL_MT_SCHEDULE_STOP( 1) = 128;

      
      /*
       * WL_INIT_OFFSET( 4, SACl_result, SACp_flat_352_iv, 2)
       */
      SAC_WL_OFFSET( SACl_result)
        = SAC_WL_MT_SCHEDULE_START( 0) * SAC_ND_A_SHAPE( SACl_result, 1) * SAC_ND_A_SHAPE( SACl_result, 2) * SAC_ND_A_SHAPE( SACl_result, 3)
        + SAC_WL_MT_SCHEDULE_START( 1) * SAC_ND_A_SHAPE( SACl_result, 2) * SAC_ND_A_SHAPE( SACl_result, 3);

      SAC_WL_STRIDE_LOOP0_BEGIN( 0, SACp_flat_352_iv, SACp_type_652, 0, 32, 1)
        SAC_WL_GRID_UNROLL_BEGIN( 0, SACp_flat_352_iv, SACp_type_652, 0, 1)
          SAC_WL_STRIDE_LOOP0_BEGIN( 1, SACp_flat_352_iv, SACp_type_653, 0, 128, 1)
            SAC_WL_GRID_UNROLL_BEGIN( 1, SACp_flat_352_iv, SACp_type_653, 0, 1)
              SAC_ND_INC_RC( SACl_rofu, 1)
              SAC_ND_ALLOC_ARRAY( double, SACp__inl253_rd, 0)
              SAC_ND_INC_RC( SACp__inl253_rd, 1)
              SAC_PF_BEGIN_WITH( genarray)
                
                /*
                 * WL_BEGIN__OFFSET( SACp__inl253_rd, SACp__inl253__type_414, 2)
                 */
                {
                  int SAC_WL_OFFSET( SACp__inl253_rd);
                  int SAC_WL_MT_SCHEDULE_START( 0);
                  int SAC_WL_MT_SCHEDULE_STOP( 0);
                  int SAC_WL_MT_SCHEDULE_START( 1);
                  int SAC_WL_MT_SCHEDULE_STOP( 1);

                  
                  /*
                   * MT_SCHEDULER_BEGIN( 0, 2, 0, 0, 128, 2)
                   */
                  SAC_WL_MT_SCHEDULE_START( 0) = 0;
                  SAC_WL_MT_SCHEDULE_STOP( 0) = 128;
                  SAC_WL_MT_SCHEDULE_START( 1) = 0;
                  SAC_WL_MT_SCHEDULE_STOP( 1) = 2;

                  
                  /*
                   * WL_INIT_OFFSET( 2, SACp__inl253_rd, SACp__inl253__type_414, 2)
                   */
                  SAC_WL_OFFSET( SACp__inl253_rd)
                    = SAC_WL_MT_SCHEDULE_START( 0) * SAC_ND_A_SHAPE( SACp__inl253_rd, 1)
                    + SAC_WL_MT_SCHEDULE_START( 1);

                  SAC_WL_STRIDE_LOOP0_BEGIN( 0, SACp__inl253__type_414, SACp__inl253__type_409, 0, 128, 1)
                    SAC_WL_GRID_UNROLL_BEGIN( 0, SACp__inl253__type_414, SACp__inl253__type_409, 0, 1)
                      SAC_WL_STRIDE_LOOP0_BEGIN( 1, SACp__inl253__type_414, SACp__inl253__type_408, 0, 2, 1)
                        SAC_WL_GRID_UNROLL_BEGIN( 1, SACp__inl253__type_414, SACp__inl253__type_408, 0, 1)
                          SACp__inl253__type_407_32_128_128_2__ = ((((((SACp_type_652 * 128) + SACp_type_653) * 128) + SACp__inl253__type_409) * 2) + SACp__inl253__type_408); 
                          SAC_ND_IDX_PSI_S( SACp__inl253__type_407_32_128_128_2__, SACl_a, SACp__inl253__type_406)
                          
                          /*
                           * WL_ASSIGN( 0, SACp__inl253__type_406, 2, SACp__inl253_rd, SACp__inl253__type_414, 2, SACp__inl253__type_409, SACp__inl253__type_408)
                           */
                          SAC_TR_WL_PRINT( ("index vector [%d, %d] (== offset %d) -- offset %d -- assign", SACp__inl253__type_409, SACp__inl253__type_408, ( SAC_ND_A_SHAPE( SACp__inl253_rd, 1) * SACp__inl253__type_409 + SACp__inl253__type_408 ), SAC_WL_OFFSET( SACp__inl253_rd)));
                          SAC_ND_WRITE_ARRAY( SACp__inl253_rd, SAC_WL_OFFSET( SACp__inl253_rd)) = SACp__inl253__type_406;
                          SAC_WL_OFFSET( SACp__inl253_rd)++;

                        SAC_WL_GRID_UNROLL_END( 1, SACp__inl253__type_414, SACp__inl253__type_408, 0, 1)
                      SAC_WL_STRIDE_LOOP_END( 1, SACp__inl253__type_414, SACp__inl253__type_408, 0, 2, 1)
                    SAC_WL_GRID_UNROLL_END( 0, SACp__inl253__type_414, SACp__inl253__type_409, 0, 1)
                  SAC_WL_STRIDE_LOOP_END( 0, SACp__inl253__type_414, SACp__inl253__type_409, 0, 128, 1)
                
                  /*
                   * MT_SCHEDULER_END( 0, 2, 0, 0, 128, 2)
                   */


                
                  /*
                   * WL_END__OFFSET( SACp__inl253_rd, SACp__inl253__type_414, 2)
                   */
                }

              SAC_PF_END_WITH( genarray)
              SAC_ND_KS_ASSIGN_ARRAY( SACp__inl253_rd, SACp_flat_353)
              
              /*
               * ND_FUN_AP( SACf_FFT1d__d__MAIN__cpx_128___MAIN__cpx_64_, , 4, out_rc, SACl_slice, in, SACl_dir, in_rc, SACp_flat_353, in_rc, SACl_rofu)
               */
              SACf_FFT1d__d__MAIN__cpx_128___MAIN__cpx_64_( SAC_ND_KS_AP_OUT_RC(SACl_slice), SACl_dir, SAC_ND_KS_AP_IN_RC(SACp_flat_353), SAC_ND_KS_AP_IN_RC(SACl_rofu));

              
              /*
               * WL_ASSIGN( 2, SACl_slice, 4, SACl_result, SACp_flat_352_iv, 2, SACp_type_652, SACp_type_653)
               */
              SAC_TR_WL_PRINT( ("index vector [%d, %d] (== offset %d) -- offset %d -- assign", SACp_type_652, SACp_type_653, ( SAC_ND_A_SHAPE( SACl_result, 1) * SACp_type_652 + SACp_type_653 ), SAC_WL_OFFSET( SACl_result)));
              {
                int SAC_i;
                for (SAC_i = 0; SAC_i < SAC_ND_A_SIZE( SACl_slice); SAC_i++) {
                  SAC_ND_WRITE_ARRAY( SACl_result, SAC_WL_OFFSET( SACl_result)) = SAC_ND_READ_ARRAY( SACl_slice, SAC_i);
                  SAC_WL_OFFSET( SACl_result)++;
                }
              }

              SAC_ND_DEC_RC_FREE_ARRAY( SACl_slice, 1)
            SAC_WL_GRID_UNROLL_END( 1, SACp_flat_352_iv, SACp_type_653, 0, 1)
          SAC_WL_STRIDE_LOOP_END( 1, SACp_flat_352_iv, SACp_type_653, 0, 128, 1)
        SAC_WL_GRID_UNROLL_END( 0, SACp_flat_352_iv, SACp_type_652, 0, 1)
      SAC_WL_STRIDE_LOOP_END( 0, SACp_flat_352_iv, SACp_type_652, 0, 32, 1)
    
      /*
       * MT_SCHEDULER_END( 0, 2, 0, 0, 32, 128)
       */


    
      /*
       * WL_END__OFFSET( SACl_result, SACp_flat_352_iv, 2)
       */
    }

  SAC_PF_END_WITH( modarray)
  SAC_ND_DEC_RC_FREE_ARRAY( SACl_a, 1)
  SAC_ND_DEC_RC_FREE_ARRAY( SACl_rofu, 1)
  
  /*
   * ND_FUN_RET( , 1, out_rc, SACl_result, SACl_result)
   */
  SAC_ND_KS_RET_OUT_RC( SACl_result, SACl_result);
  

}


/*
 * ND_FUN_DEC( SACf_FFT3d_forward___MAIN__cpx_128_128_32___MAIN__cpx_64_, void, 3, out_rc, double *, SACl_d, in_rc, double *, SACl_a, in_rc, double *, SACl_rofu)
 */
void SACf_FFT3d_forward___MAIN__cpx_128_128_32___MAIN__cpx_64_( SAC_ND_KS_DEC_OUT_RC(double *, SACl_d), SAC_ND_KS_DEC_IN_RC( double *, SACl_a), SAC_ND_KS_DEC_IN_RC( double *, SACl_rofu))
{ 
  
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
   * ND_KS_DECL_ARRAY( double, SACl_c_t, 4, 128, 128, 32, 2)
   */
  double *SACl_c_t;
  int SAC_ND_A_RC( SACl_c_t);
  const int SAC_ND_A_SIZE( SACl_c_t) = 128*128*32*2;
  const int SAC_ND_A_DIM( SACl_c_t) = 4;
  const int SAC_ND_A_SHAPE( SACl_c_t, 0) = 128;
  const int SAC_ND_A_SHAPE( SACl_c_t, 1) = 128;
  const int SAC_ND_A_SHAPE( SACl_c_t, 2) = 32;
  const int SAC_ND_A_SHAPE( SACl_c_t, 3) = 2;

  
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
   * ND_KS_DECL_ARRAY( double, SACl_b_t, 4, 32, 128, 128, 2)
   */
  double *SACl_b_t;
  int SAC_ND_A_RC( SACl_b_t);
  const int SAC_ND_A_SIZE( SACl_b_t) = 32*128*128*2;
  const int SAC_ND_A_DIM( SACl_b_t) = 4;
  const int SAC_ND_A_SHAPE( SACl_b_t, 0) = 32;
  const int SAC_ND_A_SHAPE( SACl_b_t, 1) = 128;
  const int SAC_ND_A_SHAPE( SACl_b_t, 2) = 128;
  const int SAC_ND_A_SHAPE( SACl_b_t, 3) = 2;

  
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
   * ND_KS_DECL_ARRAY( double, SACl_a_t, 4, 32, 128, 128, 2)
   */
  double *SACl_a_t;
  int SAC_ND_A_RC( SACl_a_t);
  const int SAC_ND_A_SIZE( SACl_a_t) = 32*128*128*2;
  const int SAC_ND_A_DIM( SACl_a_t) = 4;
  const int SAC_ND_A_SHAPE( SACl_a_t, 0) = 32;
  const int SAC_ND_A_SHAPE( SACl_a_t, 1) = 128;
  const int SAC_ND_A_SHAPE( SACl_a_t, 2) = 128;
  const int SAC_ND_A_SHAPE( SACl_a_t, 3) = 2;

  
  /*
   * ND_KS_DECL_ARRAY( int, SACp__inl266__flat_92_iv, 1, 4)
   */
  int *SACp__inl266__flat_92_iv;
  int SAC_ND_A_RC( SACp__inl266__flat_92_iv);
  const int SAC_ND_A_SIZE( SACp__inl266__flat_92_iv) = 4;
  const int SAC_ND_A_DIM( SACp__inl266__flat_92_iv) = 1;
  const int SAC_ND_A_SHAPE( SACp__inl266__flat_92_iv, 0) = 4;

  int SACp__inl266__type_587;
  int SACp__inl266__type_588;
  int SACp__inl266__type_589;
  int SACp__inl266__type_590;
  int SACp__inl266_ivt_32_128_128_2__;
  double SACp__inl266_val;
  
  /*
   * ND_KS_DECL_ARRAY( double, SACp__inl266_res, 4, 128, 128, 32, 2)
   */
  double *SACp__inl266_res;
  int SAC_ND_A_RC( SACp__inl266_res);
  const int SAC_ND_A_SIZE( SACp__inl266_res) = 128*128*32*2;
  const int SAC_ND_A_DIM( SACp__inl266_res) = 4;
  const int SAC_ND_A_SHAPE( SACp__inl266_res, 0) = 128;
  const int SAC_ND_A_SHAPE( SACp__inl266_res, 1) = 128;
  const int SAC_ND_A_SHAPE( SACp__inl266_res, 2) = 32;
  const int SAC_ND_A_SHAPE( SACp__inl266_res, 3) = 2;

  
  /*
   * ND_KS_DECL_ARRAY( int, SACp__inl261__flat_92_iv, 1, 4)
   */
  int *SACp__inl261__flat_92_iv;
  int SAC_ND_A_RC( SACp__inl261__flat_92_iv);
  const int SAC_ND_A_SIZE( SACp__inl261__flat_92_iv) = 4;
  const int SAC_ND_A_DIM( SACp__inl261__flat_92_iv) = 1;
  const int SAC_ND_A_SHAPE( SACp__inl261__flat_92_iv, 0) = 4;

  int SACp__inl261__type_581;
  int SACp__inl261__type_582;
  int SACp__inl261__type_583;
  int SACp__inl261__type_584;
  int SACp__inl261_ivt_32_128_128_2__;
  double SACp__inl261_val;
  
  /*
   * ND_KS_DECL_ARRAY( double, SACp__inl261_res, 4, 32, 128, 128, 2)
   */
  double *SACp__inl261_res;
  int SAC_ND_A_RC( SACp__inl261_res);
  const int SAC_ND_A_SIZE( SACp__inl261_res) = 32*128*128*2;
  const int SAC_ND_A_DIM( SACp__inl261_res) = 4;
  const int SAC_ND_A_SHAPE( SACp__inl261_res, 0) = 32;
  const int SAC_ND_A_SHAPE( SACp__inl261_res, 1) = 128;
  const int SAC_ND_A_SHAPE( SACp__inl261_res, 2) = 128;
  const int SAC_ND_A_SHAPE( SACp__inl261_res, 3) = 2;

  
  /*
   * ND_KS_DECL_ARRAY( int, SACp__inl256__flat_92_iv, 1, 4)
   */
  int *SACp__inl256__flat_92_iv;
  int SAC_ND_A_RC( SACp__inl256__flat_92_iv);
  const int SAC_ND_A_SIZE( SACp__inl256__flat_92_iv) = 4;
  const int SAC_ND_A_DIM( SACp__inl256__flat_92_iv) = 1;
  const int SAC_ND_A_SHAPE( SACp__inl256__flat_92_iv, 0) = 4;

  int SACp__inl256__type_395;
  int SACp__inl256__type_396;
  int SACp__inl256__type_397;
  int SACp__inl256__type_398;
  int SACp__inl256_ivt_128_128_32_2__;
  double SACp__inl256_val;
  
  /*
   * ND_KS_DECL_ARRAY( double, SACp__inl256_res, 4, 32, 128, 128, 2)
   */
  double *SACp__inl256_res;
  int SAC_ND_A_RC( SACp__inl256_res);
  const int SAC_ND_A_SIZE( SACp__inl256_res) = 32*128*128*2;
  const int SAC_ND_A_DIM( SACp__inl256_res) = 4;
  const int SAC_ND_A_SHAPE( SACp__inl256_res, 0) = 32;
  const int SAC_ND_A_SHAPE( SACp__inl256_res, 1) = 128;
  const int SAC_ND_A_SHAPE( SACp__inl256_res, 2) = 128;
  const int SAC_ND_A_SHAPE( SACp__inl256_res, 3) = 2;


  
  /*
   * ND_KS_DECL_ARRAY_ARG( SACl_a, 4, 128, 128, 32, 2)
   */
  const int SAC_ND_A_SIZE(SACl_a)=128*128*32*2;
  const int SAC_ND_A_DIM(SACl_a)=4;
  const int SAC_ND_A_SHAPE(SACl_a, 0)=128;
  const int SAC_ND_A_SHAPE(SACl_a, 1)=128;
  const int SAC_ND_A_SHAPE(SACl_a, 2)=32;
  const int SAC_ND_A_SHAPE(SACl_a, 3)=2;

  
  /*
   * ND_KS_DECL_ARRAY_ARG( SACl_rofu, 2, 64, 2)
   */
  const int SAC_ND_A_SIZE(SACl_rofu)=64*2;
  const int SAC_ND_A_DIM(SACl_rofu)=2;
  const int SAC_ND_A_SHAPE(SACl_rofu, 0)=64;
  const int SAC_ND_A_SHAPE(SACl_rofu, 1)=2;

  SAC_ND_INC_RC( SACl_rofu, 2)
  SAC_ND_ALLOC_ARRAY( double, SACp__inl256_res, 0)
  SAC_ND_INC_RC( SACp__inl256_res, 1)
  SAC_PF_BEGIN_WITH( genarray)
    
    /*
     * WL_BEGIN__OFFSET( SACp__inl256_res, SACp__inl256__flat_92_iv, 4)
     */
    {
      int SAC_WL_OFFSET( SACp__inl256_res);
      int SAC_WL_MT_SCHEDULE_START( 0);
      int SAC_WL_MT_SCHEDULE_STOP( 0);
      int SAC_WL_MT_SCHEDULE_START( 1);
      int SAC_WL_MT_SCHEDULE_STOP( 1);
      int SAC_WL_MT_SCHEDULE_START( 2);
      int SAC_WL_MT_SCHEDULE_STOP( 2);
      int SAC_WL_MT_SCHEDULE_START( 3);
      int SAC_WL_MT_SCHEDULE_STOP( 3);

      
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
       * WL_INIT_OFFSET( 4, SACp__inl256_res, SACp__inl256__flat_92_iv, 4)
       */
      SAC_WL_OFFSET( SACp__inl256_res)
        = SAC_WL_MT_SCHEDULE_START( 0) * SAC_ND_A_SHAPE( SACp__inl256_res, 1) * SAC_ND_A_SHAPE( SACp__inl256_res, 2) * SAC_ND_A_SHAPE( SACp__inl256_res, 3)
        + SAC_WL_MT_SCHEDULE_START( 1) * SAC_ND_A_SHAPE( SACp__inl256_res, 2) * SAC_ND_A_SHAPE( SACp__inl256_res, 3)
        + SAC_WL_MT_SCHEDULE_START( 2) * SAC_ND_A_SHAPE( SACp__inl256_res, 3)
        + SAC_WL_MT_SCHEDULE_START( 3);

      SAC_WL_STRIDE_LOOP0_BEGIN( 0, SACp__inl256__flat_92_iv, SACp__inl256__type_395, 0, 32, 1)
        SAC_WL_GRID_UNROLL_BEGIN( 0, SACp__inl256__flat_92_iv, SACp__inl256__type_395, 0, 1)
          SAC_WL_STRIDE_LOOP0_BEGIN( 1, SACp__inl256__flat_92_iv, SACp__inl256__type_396, 0, 128, 1)
            SAC_WL_GRID_UNROLL_BEGIN( 1, SACp__inl256__flat_92_iv, SACp__inl256__type_396, 0, 1)
              SAC_WL_STRIDE_LOOP0_BEGIN( 2, SACp__inl256__flat_92_iv, SACp__inl256__type_397, 0, 128, 1)
                SAC_WL_GRID_UNROLL_BEGIN( 2, SACp__inl256__flat_92_iv, SACp__inl256__type_397, 0, 1)
                  SAC_WL_STRIDE_LOOP0_BEGIN( 3, SACp__inl256__flat_92_iv, SACp__inl256__type_398, 0, 2, 1)
                    SAC_WL_GRID_UNROLL_BEGIN( 3, SACp__inl256__flat_92_iv, SACp__inl256__type_398, 0, 1)
                      SACp__inl256_ivt_128_128_32_2__ = ((((((SACp__inl256__type_397 * 128) + SACp__inl256__type_396) * 32) + SACp__inl256__type_395) * 2) + SACp__inl256__type_398); 
                      SAC_ND_IDX_PSI_S( SACp__inl256_ivt_128_128_32_2__, SACl_a, SACp__inl256_val)
                      
                      /*
                       * WL_ASSIGN( 0, SACp__inl256_val, 4, SACp__inl256_res, SACp__inl256__flat_92_iv, 4, SACp__inl256__type_395, SACp__inl256__type_396, SACp__inl256__type_397, SACp__inl256__type_398)
                       */
                      SAC_TR_WL_PRINT( ("index vector [%d, %d, %d, %d] (== offset %d) -- offset %d -- assign", SACp__inl256__type_395, SACp__inl256__type_396, SACp__inl256__type_397, SACp__inl256__type_398, ( SAC_ND_A_SHAPE( SACp__inl256_res, 3) * ( SAC_ND_A_SHAPE( SACp__inl256_res, 2) * ( SAC_ND_A_SHAPE( SACp__inl256_res, 1) * SACp__inl256__type_395 + SACp__inl256__type_396 )+ SACp__inl256__type_397 )+ SACp__inl256__type_398 ), SAC_WL_OFFSET( SACp__inl256_res)));
                      SAC_ND_WRITE_ARRAY( SACp__inl256_res, SAC_WL_OFFSET( SACp__inl256_res)) = SACp__inl256_val;
                      SAC_WL_OFFSET( SACp__inl256_res)++;

                    SAC_WL_GRID_UNROLL_END( 3, SACp__inl256__flat_92_iv, SACp__inl256__type_398, 0, 1)
                  SAC_WL_STRIDE_LOOP_END( 3, SACp__inl256__flat_92_iv, SACp__inl256__type_398, 0, 2, 1)
                SAC_WL_GRID_UNROLL_END( 2, SACp__inl256__flat_92_iv, SACp__inl256__type_397, 0, 1)
              SAC_WL_STRIDE_LOOP_END( 2, SACp__inl256__flat_92_iv, SACp__inl256__type_397, 0, 128, 1)
            SAC_WL_GRID_UNROLL_END( 1, SACp__inl256__flat_92_iv, SACp__inl256__type_396, 0, 1)
          SAC_WL_STRIDE_LOOP_END( 1, SACp__inl256__flat_92_iv, SACp__inl256__type_396, 0, 128, 1)
        SAC_WL_GRID_UNROLL_END( 0, SACp__inl256__flat_92_iv, SACp__inl256__type_395, 0, 1)
      SAC_WL_STRIDE_LOOP_END( 0, SACp__inl256__flat_92_iv, SACp__inl256__type_395, 0, 32, 1)
    
      /*
       * MT_SCHEDULER_END( 0, 4, 0, 0, 0, 0, 32, 128, 128, 2)
       */


    
      /*
       * WL_END__OFFSET( SACp__inl256_res, SACp__inl256__flat_92_iv, 4)
       */
    }

  SAC_PF_END_WITH( genarray)
  SAC_ND_DEC_RC_FREE_ARRAY( SACl_a, 1)
  SAC_ND_KS_ASSIGN_ARRAY( SACp__inl256_res, SACl_a_t)
  
  /*
   * ND_FUN_AP( SACf_FFT1d_Slice__d__MAIN__cpx_32_128_128___MAIN__cpx_64_, , 4, out_rc, SACl_b, in, 1.0, in_rc, SACl_a_t, in_rc, SACl_rofu)
   */
  SACf_FFT1d_Slice__d__MAIN__cpx_32_128_128___MAIN__cpx_64_( SAC_ND_KS_AP_OUT_RC(SACl_b), 1.0, SAC_ND_KS_AP_IN_RC(SACl_a_t), SAC_ND_KS_AP_IN_RC(SACl_rofu));

  SAC_ND_ALLOC_ARRAY( double, SACp__inl261_res, 0)
  SAC_ND_INC_RC( SACp__inl261_res, 1)
  SAC_PF_BEGIN_WITH( genarray)
    
    /*
     * WL_BEGIN__OFFSET( SACp__inl261_res, SACp__inl261__flat_92_iv, 4)
     */
    {
      int SAC_WL_OFFSET( SACp__inl261_res);
      int SAC_WL_MT_SCHEDULE_START( 0);
      int SAC_WL_MT_SCHEDULE_STOP( 0);
      int SAC_WL_MT_SCHEDULE_START( 1);
      int SAC_WL_MT_SCHEDULE_STOP( 1);
      int SAC_WL_MT_SCHEDULE_START( 2);
      int SAC_WL_MT_SCHEDULE_STOP( 2);
      int SAC_WL_MT_SCHEDULE_START( 3);
      int SAC_WL_MT_SCHEDULE_STOP( 3);

      
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
       * WL_INIT_OFFSET( 4, SACp__inl261_res, SACp__inl261__flat_92_iv, 4)
       */
      SAC_WL_OFFSET( SACp__inl261_res)
        = SAC_WL_MT_SCHEDULE_START( 0) * SAC_ND_A_SHAPE( SACp__inl261_res, 1) * SAC_ND_A_SHAPE( SACp__inl261_res, 2) * SAC_ND_A_SHAPE( SACp__inl261_res, 3)
        + SAC_WL_MT_SCHEDULE_START( 1) * SAC_ND_A_SHAPE( SACp__inl261_res, 2) * SAC_ND_A_SHAPE( SACp__inl261_res, 3)
        + SAC_WL_MT_SCHEDULE_START( 2) * SAC_ND_A_SHAPE( SACp__inl261_res, 3)
        + SAC_WL_MT_SCHEDULE_START( 3);

      SAC_WL_STRIDE_LOOP0_BEGIN( 0, SACp__inl261__flat_92_iv, SACp__inl261__type_581, 0, 32, 1)
        SAC_WL_GRID_UNROLL_BEGIN( 0, SACp__inl261__flat_92_iv, SACp__inl261__type_581, 0, 1)
          SAC_WL_STRIDE_LOOP0_BEGIN( 1, SACp__inl261__flat_92_iv, SACp__inl261__type_582, 0, 128, 1)
            SAC_WL_GRID_UNROLL_BEGIN( 1, SACp__inl261__flat_92_iv, SACp__inl261__type_582, 0, 1)
              SAC_WL_STRIDE_LOOP0_BEGIN( 2, SACp__inl261__flat_92_iv, SACp__inl261__type_583, 0, 128, 1)
                SAC_WL_GRID_UNROLL_BEGIN( 2, SACp__inl261__flat_92_iv, SACp__inl261__type_583, 0, 1)
                  SAC_WL_STRIDE_LOOP0_BEGIN( 3, SACp__inl261__flat_92_iv, SACp__inl261__type_584, 0, 2, 1)
                    SAC_WL_GRID_UNROLL_BEGIN( 3, SACp__inl261__flat_92_iv, SACp__inl261__type_584, 0, 1)
                      SACp__inl261_ivt_32_128_128_2__ = ((((((SACp__inl261__type_581 * 128) + SACp__inl261__type_583) * 128) + SACp__inl261__type_582) * 2) + SACp__inl261__type_584); 
                      SAC_ND_IDX_PSI_S( SACp__inl261_ivt_32_128_128_2__, SACl_b, SACp__inl261_val)
                      
                      /*
                       * WL_ASSIGN( 0, SACp__inl261_val, 4, SACp__inl261_res, SACp__inl261__flat_92_iv, 4, SACp__inl261__type_581, SACp__inl261__type_582, SACp__inl261__type_583, SACp__inl261__type_584)
                       */
                      SAC_TR_WL_PRINT( ("index vector [%d, %d, %d, %d] (== offset %d) -- offset %d -- assign", SACp__inl261__type_581, SACp__inl261__type_582, SACp__inl261__type_583, SACp__inl261__type_584, ( SAC_ND_A_SHAPE( SACp__inl261_res, 3) * ( SAC_ND_A_SHAPE( SACp__inl261_res, 2) * ( SAC_ND_A_SHAPE( SACp__inl261_res, 1) * SACp__inl261__type_581 + SACp__inl261__type_582 )+ SACp__inl261__type_583 )+ SACp__inl261__type_584 ), SAC_WL_OFFSET( SACp__inl261_res)));
                      SAC_ND_WRITE_ARRAY( SACp__inl261_res, SAC_WL_OFFSET( SACp__inl261_res)) = SACp__inl261_val;
                      SAC_WL_OFFSET( SACp__inl261_res)++;

                    SAC_WL_GRID_UNROLL_END( 3, SACp__inl261__flat_92_iv, SACp__inl261__type_584, 0, 1)
                  SAC_WL_STRIDE_LOOP_END( 3, SACp__inl261__flat_92_iv, SACp__inl261__type_584, 0, 2, 1)
                SAC_WL_GRID_UNROLL_END( 2, SACp__inl261__flat_92_iv, SACp__inl261__type_583, 0, 1)
              SAC_WL_STRIDE_LOOP_END( 2, SACp__inl261__flat_92_iv, SACp__inl261__type_583, 0, 128, 1)
            SAC_WL_GRID_UNROLL_END( 1, SACp__inl261__flat_92_iv, SACp__inl261__type_582, 0, 1)
          SAC_WL_STRIDE_LOOP_END( 1, SACp__inl261__flat_92_iv, SACp__inl261__type_582, 0, 128, 1)
        SAC_WL_GRID_UNROLL_END( 0, SACp__inl261__flat_92_iv, SACp__inl261__type_581, 0, 1)
      SAC_WL_STRIDE_LOOP_END( 0, SACp__inl261__flat_92_iv, SACp__inl261__type_581, 0, 32, 1)
    
      /*
       * MT_SCHEDULER_END( 0, 4, 0, 0, 0, 0, 32, 128, 128, 2)
       */


    
      /*
       * WL_END__OFFSET( SACp__inl261_res, SACp__inl261__flat_92_iv, 4)
       */
    }

  SAC_PF_END_WITH( genarray)
  SAC_ND_DEC_RC_FREE_ARRAY( SACl_b, 1)
  SAC_ND_KS_ASSIGN_ARRAY( SACp__inl261_res, SACl_b_t)
  
  /*
   * ND_FUN_AP( SACf_FFT1d_Slice__d__MAIN__cpx_32_128_128___MAIN__cpx_64_, , 4, out_rc, SACl_c, in, 1.0, in_rc, SACl_b_t, in_rc, SACl_rofu)
   */
  SACf_FFT1d_Slice__d__MAIN__cpx_32_128_128___MAIN__cpx_64_( SAC_ND_KS_AP_OUT_RC(SACl_c), 1.0, SAC_ND_KS_AP_IN_RC(SACl_b_t), SAC_ND_KS_AP_IN_RC(SACl_rofu));

  SAC_ND_ALLOC_ARRAY( double, SACp__inl266_res, 0)
  SAC_ND_INC_RC( SACp__inl266_res, 1)
  SAC_PF_BEGIN_WITH( genarray)
    
    /*
     * WL_BEGIN__OFFSET( SACp__inl266_res, SACp__inl266__flat_92_iv, 4)
     */
    {
      int SAC_WL_OFFSET( SACp__inl266_res);
      int SAC_WL_MT_SCHEDULE_START( 0);
      int SAC_WL_MT_SCHEDULE_STOP( 0);
      int SAC_WL_MT_SCHEDULE_START( 1);
      int SAC_WL_MT_SCHEDULE_STOP( 1);
      int SAC_WL_MT_SCHEDULE_START( 2);
      int SAC_WL_MT_SCHEDULE_STOP( 2);
      int SAC_WL_MT_SCHEDULE_START( 3);
      int SAC_WL_MT_SCHEDULE_STOP( 3);

      
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
       * WL_INIT_OFFSET( 4, SACp__inl266_res, SACp__inl266__flat_92_iv, 4)
       */
      SAC_WL_OFFSET( SACp__inl266_res)
        = SAC_WL_MT_SCHEDULE_START( 0) * SAC_ND_A_SHAPE( SACp__inl266_res, 1) * SAC_ND_A_SHAPE( SACp__inl266_res, 2) * SAC_ND_A_SHAPE( SACp__inl266_res, 3)
        + SAC_WL_MT_SCHEDULE_START( 1) * SAC_ND_A_SHAPE( SACp__inl266_res, 2) * SAC_ND_A_SHAPE( SACp__inl266_res, 3)
        + SAC_WL_MT_SCHEDULE_START( 2) * SAC_ND_A_SHAPE( SACp__inl266_res, 3)
        + SAC_WL_MT_SCHEDULE_START( 3);

      SAC_WL_STRIDE_LOOP0_BEGIN( 0, SACp__inl266__flat_92_iv, SACp__inl266__type_587, 0, 128, 1)
        SAC_WL_GRID_UNROLL_BEGIN( 0, SACp__inl266__flat_92_iv, SACp__inl266__type_587, 0, 1)
          SAC_WL_STRIDE_LOOP0_BEGIN( 1, SACp__inl266__flat_92_iv, SACp__inl266__type_588, 0, 128, 1)
            SAC_WL_GRID_UNROLL_BEGIN( 1, SACp__inl266__flat_92_iv, SACp__inl266__type_588, 0, 1)
              SAC_WL_STRIDE_LOOP0_BEGIN( 2, SACp__inl266__flat_92_iv, SACp__inl266__type_589, 0, 32, 1)
                SAC_WL_GRID_UNROLL_BEGIN( 2, SACp__inl266__flat_92_iv, SACp__inl266__type_589, 0, 1)
                  SAC_WL_STRIDE_LOOP0_BEGIN( 3, SACp__inl266__flat_92_iv, SACp__inl266__type_590, 0, 2, 1)
                    SAC_WL_GRID_UNROLL_BEGIN( 3, SACp__inl266__flat_92_iv, SACp__inl266__type_590, 0, 1)
                      SACp__inl266_ivt_32_128_128_2__ = ((((((SACp__inl266__type_589 * 128) + SACp__inl266__type_587) * 128) + SACp__inl266__type_588) * 2) + SACp__inl266__type_590); 
                      SAC_ND_IDX_PSI_S( SACp__inl266_ivt_32_128_128_2__, SACl_c, SACp__inl266_val)
                      
                      /*
                       * WL_ASSIGN( 0, SACp__inl266_val, 4, SACp__inl266_res, SACp__inl266__flat_92_iv, 4, SACp__inl266__type_587, SACp__inl266__type_588, SACp__inl266__type_589, SACp__inl266__type_590)
                       */
                      SAC_TR_WL_PRINT( ("index vector [%d, %d, %d, %d] (== offset %d) -- offset %d -- assign", SACp__inl266__type_587, SACp__inl266__type_588, SACp__inl266__type_589, SACp__inl266__type_590, ( SAC_ND_A_SHAPE( SACp__inl266_res, 3) * ( SAC_ND_A_SHAPE( SACp__inl266_res, 2) * ( SAC_ND_A_SHAPE( SACp__inl266_res, 1) * SACp__inl266__type_587 + SACp__inl266__type_588 )+ SACp__inl266__type_589 )+ SACp__inl266__type_590 ), SAC_WL_OFFSET( SACp__inl266_res)));
                      SAC_ND_WRITE_ARRAY( SACp__inl266_res, SAC_WL_OFFSET( SACp__inl266_res)) = SACp__inl266_val;
                      SAC_WL_OFFSET( SACp__inl266_res)++;

                    SAC_WL_GRID_UNROLL_END( 3, SACp__inl266__flat_92_iv, SACp__inl266__type_590, 0, 1)
                  SAC_WL_STRIDE_LOOP_END( 3, SACp__inl266__flat_92_iv, SACp__inl266__type_590, 0, 2, 1)
                SAC_WL_GRID_UNROLL_END( 2, SACp__inl266__flat_92_iv, SACp__inl266__type_589, 0, 1)
              SAC_WL_STRIDE_LOOP_END( 2, SACp__inl266__flat_92_iv, SACp__inl266__type_589, 0, 32, 1)
            SAC_WL_GRID_UNROLL_END( 1, SACp__inl266__flat_92_iv, SACp__inl266__type_588, 0, 1)
          SAC_WL_STRIDE_LOOP_END( 1, SACp__inl266__flat_92_iv, SACp__inl266__type_588, 0, 128, 1)
        SAC_WL_GRID_UNROLL_END( 0, SACp__inl266__flat_92_iv, SACp__inl266__type_587, 0, 1)
      SAC_WL_STRIDE_LOOP_END( 0, SACp__inl266__flat_92_iv, SACp__inl266__type_587, 0, 128, 1)
    
      /*
       * MT_SCHEDULER_END( 0, 4, 0, 0, 0, 0, 128, 128, 32, 2)
       */


    
      /*
       * WL_END__OFFSET( SACp__inl266_res, SACp__inl266__flat_92_iv, 4)
       */
    }

  SAC_PF_END_WITH( genarray)
  SAC_ND_DEC_RC_FREE_ARRAY( SACl_c, 1)
  SAC_ND_KS_ASSIGN_ARRAY( SACp__inl266_res, SACl_c_t)
  
  /*
   * ND_FUN_AP( SACf_FFT1d_Slice__d__MAIN__cpx_128_128_32___MAIN__cpx_64_, , 4, out_rc, SACl_d, in, 1.0, in_rc, SACl_c_t, in_rc, SACl_rofu)
   */
  SACf_FFT1d_Slice__d__MAIN__cpx_128_128_32___MAIN__cpx_64_( SAC_ND_KS_AP_OUT_RC(SACl_d), 1.0, SAC_ND_KS_AP_IN_RC(SACl_c_t), SAC_ND_KS_AP_IN_RC(SACl_rofu));

  
  /*
   * ND_FUN_RET( , 1, out_rc, SACl_d, SACl_d)
   */
  SAC_ND_KS_RET_OUT_RC( SACl_d, SACl_d);
  

}


/*
 * ND_FUN_DEC( SACf_CheckResult__i__MAIN__cpx_128_128_32_, void, 2, in, int, SACl_iter, in_rc, double *, SACl_X)
 */
void SACf_CheckResult__i__MAIN__cpx_128_128_32_( int SACl_iter, SAC_ND_KS_DEC_IN_RC( double *, SACl_X))
{ 
  SAC_ND_DECL_RC( SACe_string, SACp_flat_366)
  
  /*
   * ND_KS_DECL_ARRAY( char, SACp_flat_367, 1, 2)
   */
  char *SACp_flat_367;
  int SAC_ND_A_RC( SACp_flat_367);
  const int SAC_ND_A_SIZE( SACp_flat_367) = 2;
  const int SAC_ND_A_DIM( SACp_flat_367) = 1;
  const int SAC_ND_A_SHAPE( SACp_flat_367, 0) = 2;

  SAC_ND_DECL_RC( SACe_string, SACp_flat_363)
  
  /*
   * ND_KS_DECL_ARRAY( char, SACp_flat_364, 1, 21)
   */
  char *SACp_flat_364;
  int SAC_ND_A_RC( SACp_flat_364);
  const int SAC_ND_A_SIZE( SACp_flat_364) = 21;
  const int SAC_ND_A_DIM( SACp_flat_364) = 1;
  const int SAC_ND_A_SHAPE( SACp_flat_364, 0) = 21;

  SAC_ND_DECL_RC( SACe_string, SACp_flat_360)
  
  /*
   * ND_KS_DECL_ARRAY( char, SACp_flat_361, 1, 20)
   */
  char *SACp_flat_361;
  int SAC_ND_A_RC( SACp_flat_361);
  const int SAC_ND_A_SIZE( SACp_flat_361) = 20;
  const int SAC_ND_A_DIM( SACp_flat_361) = 1;
  const int SAC_ND_A_SHAPE( SACp_flat_361, 0) = 20;

  double SACp__inl279__flat_135;
  double SACp__inl279__flat_133;
  
  /*
   * ND_KS_DECL_ARRAY( char, SACp__inl279__flat_132, 1, 16)
   */
  char *SACp__inl279__flat_132;
  int SAC_ND_A_RC( SACp__inl279__flat_132);
  const int SAC_ND_A_SIZE( SACp__inl279__flat_132) = 16;
  const int SAC_ND_A_DIM( SACp__inl279__flat_132) = 1;
  const int SAC_ND_A_SHAPE( SACp__inl279__flat_132, 0) = 16;

  SAC_ND_DECL_RC( SACe_string, SACp__inl279__flat_131)
  
  /*
   * ND_KS_DECL_ARRAY( double, SACp__inl277__flat_255, 1, 12)
   */
  double *SACp__inl277__flat_255;
  int SAC_ND_A_RC( SACp__inl277__flat_255);
  const int SAC_ND_A_SIZE( SACp__inl277__flat_255) = 12;
  const int SAC_ND_A_DIM( SACp__inl277__flat_255) = 1;
  const int SAC_ND_A_SHAPE( SACp__inl277__flat_255, 0) = 12;

  
  /*
   * ND_KS_DECL_ARRAY( int, SACp__inl277__flat_254, 1, 2)
   */
  int *SACp__inl277__flat_254;
  int SAC_ND_A_RC( SACp__inl277__flat_254);
  const int SAC_ND_A_SIZE( SACp__inl277__flat_254) = 2;
  const int SAC_ND_A_DIM( SACp__inl277__flat_254) = 1;
  const int SAC_ND_A_SHAPE( SACp__inl277__flat_254, 0) = 2;

  
  /*
   * ND_KS_DECL_ARRAY( double, SACp__inl277_V, 2, 6, 2)
   */
  double *SACp__inl277_V;
  int SAC_ND_A_RC( SACp__inl277_V);
  const int SAC_ND_A_SIZE( SACp__inl277_V) = 6*2;
  const int SAC_ND_A_DIM( SACp__inl277_V) = 2;
  const int SAC_ND_A_SHAPE( SACp__inl277_V, 0) = 6;
  const int SAC_ND_A_SHAPE( SACp__inl277_V, 1) = 2;

  int SACp__inl277__flat_259;
  int SACp__inl277__type_641_6_2__;
  double SACp__inl277__type_640;
  double SACp_cf_840;
  double SACp__inl275__flat_135;
  double SACp__inl275__flat_133;
  
  /*
   * ND_KS_DECL_ARRAY( char, SACp__inl275__flat_132, 1, 16)
   */
  char *SACp__inl275__flat_132;
  int SAC_ND_A_RC( SACp__inl275__flat_132);
  const int SAC_ND_A_SIZE( SACp__inl275__flat_132) = 16;
  const int SAC_ND_A_DIM( SACp__inl275__flat_132) = 1;
  const int SAC_ND_A_SHAPE( SACp__inl275__flat_132, 0) = 16;

  SAC_ND_DECL_RC( SACe_string, SACp__inl275__flat_131)
  double SACp__inl271_result_r;
  double SACp__inl271_result_i;
  int SACp__inl271_j;
  bool SACp__inl271__flat_251;
  int SACp__inl271_q;
  int SACp__inl271__flat_239;
  int SACp__inl271_r;
  int SACp__inl271__flat_243;
  int SACp__inl271_s;
  int SACp__inl271__flat_248_128_128_32_2__;
  double SACp__inl271__flat_247;
  int SACp__inl271__flat_250_128_128_32_2__;
  double SACp__inl271__flat_249;

  
  /*
   * ND_KS_DECL_ARRAY_ARG( SACl_X, 4, 128, 128, 32, 2)
   */
  const int SAC_ND_A_SIZE(SACl_X)=128*128*32*2;
  const int SAC_ND_A_DIM(SACl_X)=4;
  const int SAC_ND_A_SHAPE(SACl_X, 0)=128;
  const int SAC_ND_A_SHAPE(SACl_X, 1)=128;
  const int SAC_ND_A_SHAPE(SACl_X, 2)=32;
  const int SAC_ND_A_SHAPE(SACl_X, 3)=2;

  SAC_ND_ALLOC_ARRAY( char, SACp_flat_361, 1)
  SAC_ND_CREATE_CONST_ARRAY_C( SACp_flat_361, "Current checksum:  ")
  
  /*
   * ND_FUN_AP( to_string, , 3, out_rc, SACp_flat_360, in_rc, SACp_flat_361, in, 19)
   */
  to_string( SAC_ND_KS_AP_OUT_RC(SACp_flat_360), SAC_ND_KS_AP_IN_RC(SACp_flat_361), 19);

  
  /*
   * ND_FUN_AP( printf, , 1, in, SACp_flat_360)
   */
  printf( SACp_flat_360);

  SAC_ND_DEC_RC_FREE_HIDDEN( SACp_flat_360, 1, free)
  SACp__inl271_result_r = 0.0; 
  SACp__inl271_result_i = 0.0; 
  SACp__inl271_j = 0; 
  SAC_ND_GOTO( _comp_945_SAC__label)
  do 
  { 
    SAC_ND_LABEL( _comp_945_SAC__label)
    SACp__inl271_q = (SACp__inl271_j % 128); 
    SACp__inl271__flat_239 = (3 * SACp__inl271_j); 
    SACp__inl271_r = (SACp__inl271__flat_239 % 128); 
    SACp__inl271__flat_243 = (5 * SACp__inl271_j); 
    SACp__inl271_s = (SACp__inl271__flat_243 % 32); 
    SACp__inl271__flat_248_128_128_32_2__ = ((((((SACp__inl271_q * 128) + SACp__inl271_r) * 32) + SACp__inl271_s) * 2) + 0); 
    SAC_ND_IDX_PSI_S( SACp__inl271__flat_248_128_128_32_2__, SACl_X, SACp__inl271__flat_247)
    SACp__inl271_result_r = (SACp__inl271_result_r + SACp__inl271__flat_247); 
    SACp__inl271__flat_250_128_128_32_2__ = ((((((SACp__inl271_q * 128) + SACp__inl271_r) * 32) + SACp__inl271_s) * 2) + 1); 
    SAC_ND_IDX_PSI_S( SACp__inl271__flat_250_128_128_32_2__, SACl_X, SACp__inl271__flat_249)
    SACp__inl271_result_i = (SACp__inl271_result_i + SACp__inl271__flat_249); 
    SACp__inl271_j = (SACp__inl271_j + 1); 
    SACp__inl271__flat_251 = (SACp__inl271_j < 1024); 
  }
  while (SACp__inl271__flat_251);
  SAC_ND_DEC_RC_FREE_ARRAY( SACl_X, 1)
  SACp__inl275__flat_135 = SACp__inl271_result_i; 
  SACp__inl275__flat_133 = SACp__inl271_result_r; 
  SAC_ND_ALLOC_ARRAY( char, SACp__inl275__flat_132, 1)
  SAC_ND_CREATE_CONST_ARRAY_C( SACp__inl275__flat_132, "(%.10g , %.10g)")
  
  /*
   * ND_FUN_AP( to_string, , 3, out_rc, SACp__inl275__flat_131, in_rc, SACp__inl275__flat_132, in, 15)
   */
  to_string( SAC_ND_KS_AP_OUT_RC(SACp__inl275__flat_131), SAC_ND_KS_AP_IN_RC(SACp__inl275__flat_132), 15);

  
  /*
   * ND_FUN_AP( printf, , 3, in, SACp__inl275__flat_131, in, SACp__inl275__flat_133, in, SACp__inl275__flat_135)
   */
  printf( SACp__inl275__flat_131, SACp__inl275__flat_133, SACp__inl275__flat_135);

  SAC_ND_DEC_RC_FREE_HIDDEN( SACp__inl275__flat_131, 1, free)
  SAC_ND_ALLOC_ARRAY( char, SACp_flat_364, 1)
  SAC_ND_CREATE_CONST_ARRAY_C( SACp_flat_364, "\nRequired checksum: ")
  
  /*
   * ND_FUN_AP( to_string, , 3, out_rc, SACp_flat_363, in_rc, SACp_flat_364, in, 20)
   */
  to_string( SAC_ND_KS_AP_OUT_RC(SACp_flat_363), SAC_ND_KS_AP_IN_RC(SACp_flat_364), 20);

  
  /*
   * ND_FUN_AP( printf, , 1, in, SACp_flat_363)
   */
  printf( SACp_flat_363);

  SAC_ND_DEC_RC_FREE_HIDDEN( SACp_flat_363, 1, free)
  SAC_ND_ALLOC_ARRAY( double, SACp__inl277__flat_255, 1)
  
  /*
   * ND_CREATE_CONST_ARRAY_S( SACp__inl277__flat_255, 12, 567.3612178944000561386928893625736236572265625, 529.324684917500007941271178424358367919921875, 563.14368852710003920947201550006866455078125, 528.2149986629000295579317025840282440185546875, 559.4024089969999522509169764816761016845703125, 527.09965580369998860987834632396697998046875, 556.06980470200005584047175943851470947265625, 526.0027904925000257208012044429779052734375, 553.0898991249999880892573855817317962646484375, 524.9400845633000471934792585670948028564453125, 550.415973453800006609526462852954864501953125, 523.921224708599993391544558107852935791015625)
   */
  SAC_ND_WRITE_ARRAY( SACp__inl277__flat_255, 0) = 567.3612178944000561386928893625736236572265625;
  SAC_ND_WRITE_ARRAY( SACp__inl277__flat_255, 1) = 529.324684917500007941271178424358367919921875;
  SAC_ND_WRITE_ARRAY( SACp__inl277__flat_255, 2) = 563.14368852710003920947201550006866455078125;
  SAC_ND_WRITE_ARRAY( SACp__inl277__flat_255, 3) = 528.2149986629000295579317025840282440185546875;
  SAC_ND_WRITE_ARRAY( SACp__inl277__flat_255, 4) = 559.4024089969999522509169764816761016845703125;
  SAC_ND_WRITE_ARRAY( SACp__inl277__flat_255, 5) = 527.09965580369998860987834632396697998046875;
  SAC_ND_WRITE_ARRAY( SACp__inl277__flat_255, 6) = 556.06980470200005584047175943851470947265625;
  SAC_ND_WRITE_ARRAY( SACp__inl277__flat_255, 7) = 526.0027904925000257208012044429779052734375;
  SAC_ND_WRITE_ARRAY( SACp__inl277__flat_255, 8) = 553.0898991249999880892573855817317962646484375;
  SAC_ND_WRITE_ARRAY( SACp__inl277__flat_255, 9) = 524.9400845633000471934792585670948028564453125;
  SAC_ND_WRITE_ARRAY( SACp__inl277__flat_255, 10) = 550.415973453800006609526462852954864501953125;
  SAC_ND_WRITE_ARRAY( SACp__inl277__flat_255, 11) = 523.921224708599993391544558107852935791015625;

  SAC_ND_ALLOC_ARRAY( int, SACp__inl277__flat_254, 1)
  
  /*
   * ND_CREATE_CONST_ARRAY_S( SACp__inl277__flat_254, 2, 6, 2)
   */
  SAC_ND_WRITE_ARRAY( SACp__inl277__flat_254, 0) = 6;
  SAC_ND_WRITE_ARRAY( SACp__inl277__flat_254, 1) = 2;

  SAC_ND_DEC_RC_FREE_ARRAY( SACp__inl277__flat_254, 1)
  SAC_ND_KS_ASSIGN_ARRAY( SACp__inl277__flat_255, SACp__inl277_V)
  SACp__inl277__flat_259 = (SACl_iter - 1); 
  SACp__inl277__type_641_6_2__ = ((SACp__inl277__flat_259 * 2) + 1); 
  SAC_ND_IDX_PSI_S( SACp__inl277__type_641_6_2__, SACp__inl277_V, SACp__inl277__type_640)
  SACp_cf_840 = SACp__inl277__type_640; 
  SACp__inl277__type_641_6_2__ = ((SACp__inl277__flat_259 * 2) + 0); 
  SAC_ND_IDX_PSI_S( SACp__inl277__type_641_6_2__, SACp__inl277_V, SACp__inl277__type_640)
  SAC_ND_DEC_RC_FREE_ARRAY( SACp__inl277_V, 1)
  SACp__inl279__flat_135 = SACp_cf_840; 
  SACp__inl279__flat_133 = SACp__inl277__type_640; 
  SAC_ND_ALLOC_ARRAY( char, SACp__inl279__flat_132, 1)
  SAC_ND_CREATE_CONST_ARRAY_C( SACp__inl279__flat_132, "(%.10g , %.10g)")
  
  /*
   * ND_FUN_AP( to_string, , 3, out_rc, SACp__inl279__flat_131, in_rc, SACp__inl279__flat_132, in, 15)
   */
  to_string( SAC_ND_KS_AP_OUT_RC(SACp__inl279__flat_131), SAC_ND_KS_AP_IN_RC(SACp__inl279__flat_132), 15);

  
  /*
   * ND_FUN_AP( printf, , 3, in, SACp__inl279__flat_131, in, SACp__inl279__flat_133, in, SACp__inl279__flat_135)
   */
  printf( SACp__inl279__flat_131, SACp__inl279__flat_133, SACp__inl279__flat_135);

  SAC_ND_DEC_RC_FREE_HIDDEN( SACp__inl279__flat_131, 1, free)
  SAC_ND_ALLOC_ARRAY( char, SACp_flat_367, 1)
  SAC_ND_CREATE_CONST_ARRAY_C( SACp_flat_367, "\n")
  
  /*
   * ND_FUN_AP( to_string, , 3, out_rc, SACp_flat_366, in_rc, SACp_flat_367, in, 1)
   */
  to_string( SAC_ND_KS_AP_OUT_RC(SACp_flat_366), SAC_ND_KS_AP_IN_RC(SACp_flat_367), 1);

  
  /*
   * ND_FUN_AP( printf, , 1, in, SACp_flat_366)
   */
  printf( SACp_flat_366);

  SAC_ND_DEC_RC_FREE_HIDDEN( SACp_flat_366, 1, free)
  /* noop */
}


/*
 * ND_FUN_DEC( main, int, 0)
 */
int main( int __argc, char *__argv[])
{ 
  
  /*
   * ND_KS_DECL_ARRAY( double, SACp_pcomp_942___inl281_A, 4, 128, 128, 32, 2)
   */
  double *SACp_pcomp_942___inl281_A;
  int SAC_ND_A_RC( SACp_pcomp_942___inl281_A);
  const int SAC_ND_A_SIZE( SACp_pcomp_942___inl281_A) = 128*128*32*2;
  const int SAC_ND_A_DIM( SACp_pcomp_942___inl281_A) = 4;
  const int SAC_ND_A_SHAPE( SACp_pcomp_942___inl281_A, 0) = 128;
  const int SAC_ND_A_SHAPE( SACp_pcomp_942___inl281_A, 1) = 128;
  const int SAC_ND_A_SHAPE( SACp_pcomp_942___inl281_A, 2) = 32;
  const int SAC_ND_A_SHAPE( SACp_pcomp_942___inl281_A, 3) = 2;

  
  /*
   * ND_KS_DECL_ARRAY( double, SACp_pcomp_941___inl281_A, 4, 128, 128, 32, 2)
   */
  double *SACp_pcomp_941___inl281_A;
  int SAC_ND_A_RC( SACp_pcomp_941___inl281_A);
  const int SAC_ND_A_SIZE( SACp_pcomp_941___inl281_A) = 128*128*32*2;
  const int SAC_ND_A_DIM( SACp_pcomp_941___inl281_A) = 4;
  const int SAC_ND_A_SHAPE( SACp_pcomp_941___inl281_A, 0) = 128;
  const int SAC_ND_A_SHAPE( SACp_pcomp_941___inl281_A, 1) = 128;
  const int SAC_ND_A_SHAPE( SACp_pcomp_941___inl281_A, 2) = 32;
  const int SAC_ND_A_SHAPE( SACp_pcomp_941___inl281_A, 3) = 2;

  int SACp_wlf_906___inl301_ivt_128_32_128_2__;
  double SACp_wlf_893___inl301_val;
  int SACp_flat_374;
  
  /*
   * ND_KS_DECL_ARRAY( double, SACl_X, 4, 128, 128, 32, 2)
   */
  double *SACl_X;
  int SAC_ND_A_RC( SACl_X);
  const int SAC_ND_A_SIZE( SACl_X) = 128*128*32*2;
  const int SAC_ND_A_DIM( SACl_X) = 4;
  const int SAC_ND_A_SHAPE( SACl_X, 0) = 128;
  const int SAC_ND_A_SHAPE( SACl_X, 1) = 128;
  const int SAC_ND_A_SHAPE( SACl_X, 2) = 32;
  const int SAC_ND_A_SHAPE( SACl_X, 3) = 2;

  double SACp_flat_372;
  bool SACp_flat_373;
  int SACl_t;
  
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
   * ND_KS_DECL_ARRAY( double, SACl_U, 4, 128, 128, 32, 2)
   */
  double *SACl_U;
  int SAC_ND_A_RC( SACl_U);
  const int SAC_ND_A_SIZE( SACl_U) = 128*128*32*2;
  const int SAC_ND_A_DIM( SACl_U) = 4;
  const int SAC_ND_A_SHAPE( SACl_U, 0) = 128;
  const int SAC_ND_A_SHAPE( SACl_U, 1) = 128;
  const int SAC_ND_A_SHAPE( SACl_U, 2) = 32;
  const int SAC_ND_A_SHAPE( SACl_U, 3) = 2;

  
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

  SAC_ND_DECL_RC( SACe_string, SACp_flat_369)
  
  /*
   * ND_KS_DECL_ARRAY( char, SACp_flat_370, 1, 62)
   */
  char *SACp_flat_370;
  int SAC_ND_A_RC( SACp_flat_370);
  const int SAC_ND_A_SIZE( SACp_flat_370) = 62;
  const int SAC_ND_A_DIM( SACp_flat_370) = 1;
  const int SAC_ND_A_SHAPE( SACp_flat_370, 0) = 62;

  int SACl_total_size;
  
  /*
   * ND_KS_DECL_ARRAY( int, SACp__inl306__flat_64_iv, 1, 4)
   */
  int *SACp__inl306__flat_64_iv;
  int SAC_ND_A_RC( SACp__inl306__flat_64_iv);
  const int SAC_ND_A_SIZE( SACp__inl306__flat_64_iv) = 4;
  const int SAC_ND_A_DIM( SACp__inl306__flat_64_iv) = 1;
  const int SAC_ND_A_SHAPE( SACp__inl306__flat_64_iv, 0) = 4;

  double SACp__inl306__flat_65;
  
  /*
   * ND_KS_DECL_ARRAY( double, SACp__inl306_result, 4, 128, 128, 32, 2)
   */
  double *SACp__inl306_result;
  int SAC_ND_A_RC( SACp__inl306_result);
  const int SAC_ND_A_SIZE( SACp__inl306_result) = 128*128*32*2;
  const int SAC_ND_A_DIM( SACp__inl306_result) = 4;
  const int SAC_ND_A_SHAPE( SACp__inl306_result, 0) = 128;
  const int SAC_ND_A_SHAPE( SACp__inl306_result, 1) = 128;
  const int SAC_ND_A_SHAPE( SACp__inl306_result, 2) = 32;
  const int SAC_ND_A_SHAPE( SACp__inl306_result, 3) = 2;

  int SACp__inl306__type_636;
  int SACp__inl306__type_637;
  int SACp__inl306__type_638;
  int SACp__inl306__type_639;
  
  /*
   * ND_KS_DECL_ARRAY( int, SACp__inl296__flat_92_iv, 1, 4)
   */
  int *SACp__inl296__flat_92_iv;
  int SAC_ND_A_RC( SACp__inl296__flat_92_iv);
  const int SAC_ND_A_SIZE( SACp__inl296__flat_92_iv) = 4;
  const int SAC_ND_A_DIM( SACp__inl296__flat_92_iv) = 1;
  const int SAC_ND_A_SHAPE( SACp__inl296__flat_92_iv, 0) = 4;

  int SACp__inl296__type_625;
  int SACp__inl296__type_626;
  int SACp__inl296__type_627;
  int SACp__inl296__type_628;
  int SACp__inl296_ivt_128_32_128_2__;
  double SACp__inl296_val;
  
  /*
   * ND_KS_DECL_ARRAY( double, SACp__inl296_res, 4, 128, 32, 128, 2)
   */
  double *SACp__inl296_res;
  int SAC_ND_A_RC( SACp__inl296_res);
  const int SAC_ND_A_SIZE( SACp__inl296_res) = 128*32*128*2;
  const int SAC_ND_A_DIM( SACp__inl296_res) = 4;
  const int SAC_ND_A_SHAPE( SACp__inl296_res, 0) = 128;
  const int SAC_ND_A_SHAPE( SACp__inl296_res, 1) = 32;
  const int SAC_ND_A_SHAPE( SACp__inl296_res, 2) = 128;
  const int SAC_ND_A_SHAPE( SACp__inl296_res, 3) = 2;

  
  /*
   * ND_KS_DECL_ARRAY( int, SACp__inl291__flat_92_iv, 1, 4)
   */
  int *SACp__inl291__flat_92_iv;
  int SAC_ND_A_RC( SACp__inl291__flat_92_iv);
  const int SAC_ND_A_SIZE( SACp__inl291__flat_92_iv) = 4;
  const int SAC_ND_A_DIM( SACp__inl291__flat_92_iv) = 1;
  const int SAC_ND_A_SHAPE( SACp__inl291__flat_92_iv, 0) = 4;

  int SACp__inl291__type_606;
  int SACp__inl291__type_607;
  int SACp__inl291__type_608;
  int SACp__inl291__type_609;
  int SACp__inl291_ivt_128_128_32_2__;
  double SACp__inl291_val;
  
  /*
   * ND_KS_DECL_ARRAY( double, SACp__inl291_res, 4, 128, 32, 128, 2)
   */
  double *SACp__inl291_res;
  int SAC_ND_A_RC( SACp__inl291_res);
  const int SAC_ND_A_SIZE( SACp__inl291_res) = 128*32*128*2;
  const int SAC_ND_A_DIM( SACp__inl291_res) = 4;
  const int SAC_ND_A_SHAPE( SACp__inl291_res, 0) = 128;
  const int SAC_ND_A_SHAPE( SACp__inl291_res, 1) = 32;
  const int SAC_ND_A_SHAPE( SACp__inl291_res, 2) = 128;
  const int SAC_ND_A_SHAPE( SACp__inl291_res, 3) = 2;

  
  /*
   * ND_KS_DECL_ARRAY( double, SACp__inl290_rofu, 2, 64, 2)
   */
  double *SACp__inl290_rofu;
  int SAC_ND_A_RC( SACp__inl290_rofu);
  const int SAC_ND_A_SIZE( SACp__inl290_rofu) = 64*2;
  const int SAC_ND_A_DIM( SACp__inl290_rofu) = 2;
  const int SAC_ND_A_SHAPE( SACp__inl290_rofu, 0) = 64;
  const int SAC_ND_A_SHAPE( SACp__inl290_rofu, 1) = 2;

  
  /*
   * ND_KS_DECL_ARRAY( double, SACp__inl290_a, 4, 128, 128, 32, 2)
   */
  double *SACp__inl290_a;
  int SAC_ND_A_RC( SACp__inl290_a);
  const int SAC_ND_A_SIZE( SACp__inl290_a) = 128*128*32*2;
  const int SAC_ND_A_DIM( SACp__inl290_a) = 4;
  const int SAC_ND_A_SHAPE( SACp__inl290_a, 0) = 128;
  const int SAC_ND_A_SHAPE( SACp__inl290_a, 1) = 128;
  const int SAC_ND_A_SHAPE( SACp__inl290_a, 2) = 32;
  const int SAC_ND_A_SHAPE( SACp__inl290_a, 3) = 2;

  
  /*
   * ND_KS_DECL_ARRAY( double, SACp__inl290_u, 4, 128, 128, 32, 2)
   */
  double *SACp__inl290_u;
  int SAC_ND_A_RC( SACp__inl290_u);
  const int SAC_ND_A_SIZE( SACp__inl290_u) = 128*128*32*2;
  const int SAC_ND_A_DIM( SACp__inl290_u) = 4;
  const int SAC_ND_A_SHAPE( SACp__inl290_u, 0) = 128;
  const int SAC_ND_A_SHAPE( SACp__inl290_u, 1) = 128;
  const int SAC_ND_A_SHAPE( SACp__inl290_u, 2) = 32;
  const int SAC_ND_A_SHAPE( SACp__inl290_u, 3) = 2;

  
  /*
   * ND_KS_DECL_ARRAY( double, SACp__inl290_u_t, 4, 128, 32, 128, 2)
   */
  double *SACp__inl290_u_t;
  int SAC_ND_A_RC( SACp__inl290_u_t);
  const int SAC_ND_A_SIZE( SACp__inl290_u_t) = 128*32*128*2;
  const int SAC_ND_A_DIM( SACp__inl290_u_t) = 4;
  const int SAC_ND_A_SHAPE( SACp__inl290_u_t, 0) = 128;
  const int SAC_ND_A_SHAPE( SACp__inl290_u_t, 1) = 32;
  const int SAC_ND_A_SHAPE( SACp__inl290_u_t, 2) = 128;
  const int SAC_ND_A_SHAPE( SACp__inl290_u_t, 3) = 2;

  
  /*
   * ND_KS_DECL_ARRAY( double, SACp__inl290_v, 4, 128, 32, 128, 2)
   */
  double *SACp__inl290_v;
  int SAC_ND_A_RC( SACp__inl290_v);
  const int SAC_ND_A_SIZE( SACp__inl290_v) = 128*32*128*2;
  const int SAC_ND_A_DIM( SACp__inl290_v) = 4;
  const int SAC_ND_A_SHAPE( SACp__inl290_v, 0) = 128;
  const int SAC_ND_A_SHAPE( SACp__inl290_v, 1) = 32;
  const int SAC_ND_A_SHAPE( SACp__inl290_v, 2) = 128;
  const int SAC_ND_A_SHAPE( SACp__inl290_v, 3) = 2;

  
  /*
   * ND_KS_DECL_ARRAY( double, SACp__inl290_v_t, 4, 128, 32, 128, 2)
   */
  double *SACp__inl290_v_t;
  int SAC_ND_A_RC( SACp__inl290_v_t);
  const int SAC_ND_A_SIZE( SACp__inl290_v_t) = 128*32*128*2;
  const int SAC_ND_A_DIM( SACp__inl290_v_t) = 4;
  const int SAC_ND_A_SHAPE( SACp__inl290_v_t, 0) = 128;
  const int SAC_ND_A_SHAPE( SACp__inl290_v_t, 1) = 32;
  const int SAC_ND_A_SHAPE( SACp__inl290_v_t, 2) = 128;
  const int SAC_ND_A_SHAPE( SACp__inl290_v_t, 3) = 2;

  
  /*
   * ND_KS_DECL_ARRAY( double, SACp__inl290_w, 4, 128, 32, 128, 2)
   */
  double *SACp__inl290_w;
  int SAC_ND_A_RC( SACp__inl290_w);
  const int SAC_ND_A_SIZE( SACp__inl290_w) = 128*32*128*2;
  const int SAC_ND_A_DIM( SACp__inl290_w) = 4;
  const int SAC_ND_A_SHAPE( SACp__inl290_w, 0) = 128;
  const int SAC_ND_A_SHAPE( SACp__inl290_w, 1) = 32;
  const int SAC_ND_A_SHAPE( SACp__inl290_w, 2) = 128;
  const int SAC_ND_A_SHAPE( SACp__inl290_w, 3) = 2;

  
  /*
   * ND_KS_DECL_ARRAY( double, SACp__inl287_Vd, 4, 128, 128, 32, 2)
   */
  double *SACp__inl287_Vd;
  int SAC_ND_A_RC( SACp__inl287_Vd);
  const int SAC_ND_A_SIZE( SACp__inl287_Vd) = 128*128*32*2;
  const int SAC_ND_A_DIM( SACp__inl287_Vd) = 4;
  const int SAC_ND_A_SHAPE( SACp__inl287_Vd, 0) = 128;
  const int SAC_ND_A_SHAPE( SACp__inl287_Vd, 1) = 128;
  const int SAC_ND_A_SHAPE( SACp__inl287_Vd, 2) = 32;
  const int SAC_ND_A_SHAPE( SACp__inl287_Vd, 3) = 2;

  
  /*
   * ND_KS_DECL_ARRAY( int, SACp__inl287__flat_231_iv, 1, 4)
   */
  int *SACp__inl287__flat_231_iv;
  int SAC_ND_A_RC( SACp__inl287__flat_231_iv);
  const int SAC_ND_A_SIZE( SACp__inl287__flat_231_iv) = 4;
  const int SAC_ND_A_DIM( SACp__inl287__flat_231_iv) = 1;
  const int SAC_ND_A_SHAPE( SACp__inl287__flat_231_iv, 0) = 4;

  int SACp__inl287__flat_231_iv_128_128_32_2__;
  int SACp__inl287__flat_227_i;
  int SACp__inl287__flat_228_j;
  int SACp__inl287__flat_229_k;
  int SACp__inl287__flat_230_l;
  int SACp__inl287__flat_233_128_128_32__;
  int SACp__inl287__flat_232;
  int SACp__inl287_newindex;
  int SACp__inl287__flat_234_50689__;
  double SACp__inl287_exponent;
  double SACp__inl287__flat_235;
  double SACp__inl287_val;
  
  /*
   * ND_KS_DECL_ARRAY( double, SACp__inl287_res, 4, 128, 128, 32, 2)
   */
  double *SACp__inl287_res;
  int SAC_ND_A_RC( SACp__inl287_res);
  const int SAC_ND_A_SIZE( SACp__inl287_res) = 128*128*32*2;
  const int SAC_ND_A_DIM( SACp__inl287_res) = 4;
  const int SAC_ND_A_SHAPE( SACp__inl287_res, 0) = 128;
  const int SAC_ND_A_SHAPE( SACp__inl287_res, 1) = 128;
  const int SAC_ND_A_SHAPE( SACp__inl287_res, 2) = 32;
  const int SAC_ND_A_SHAPE( SACp__inl287_res, 3) = 2;

  double SACp__inl285__flat_137;
  double SACp__inl285_a1;
  double SACp__inl285__flat_138;
  double SACp__inl285_a2;
  double SACp__inl285__flat_139;
  double SACp__inl285_b1;
  double SACp__inl285__flat_140;
  double SACp__inl285_b2;
  double SACp__inl285__flat_142;
  double SACp__inl285__flat_141;
  double SACp__inl285_t1;
  double SACp__inl285__flat_143;
  double SACp__inl285_t2;
  double SACp__inl285__flat_144;
  double SACp__inl285_t3;
  double SACp__inl285__flat_146;
  double SACp__inl285__flat_145;
  double SACp__inl285_t4;
  double SACp__inl285__flat_147;
  double SACp__inl285_t5;
  double SACp__inl285__flat_148;
  double SACp__inl285_c;
  
  /*
   * ND_KS_DECL_ARRAY( int, SACp__inl281__type_388, 1, 4)
   */
  int *SACp__inl281__type_388;
  int SAC_ND_A_RC( SACp__inl281__type_388);
  const int SAC_ND_A_SIZE( SACp__inl281__type_388) = 4;
  const int SAC_ND_A_DIM( SACp__inl281__type_388) = 1;
  const int SAC_ND_A_SHAPE( SACp__inl281__type_388, 0) = 4;

  int SACp__inl281__type_390;
  int SACp__inl281__type_391;
  int SACp__inl281__type_392;
  int SACp__inl281__type_393;
  double SACp__inl281__type_389;
  
  /*
   * ND_KS_DECL_ARRAY( double, SACp__inl281_A, 4, 128, 128, 32, 2)
   */
  double *SACp__inl281_A;
  int SAC_ND_A_RC( SACp__inl281_A);
  const int SAC_ND_A_SIZE( SACp__inl281_A) = 128*128*32*2;
  const int SAC_ND_A_DIM( SACp__inl281_A) = 4;
  const int SAC_ND_A_SHAPE( SACp__inl281_A, 0) = 128;
  const int SAC_ND_A_SHAPE( SACp__inl281_A, 1) = 128;
  const int SAC_ND_A_SHAPE( SACp__inl281_A, 2) = 32;
  const int SAC_ND_A_SHAPE( SACp__inl281_A, 3) = 2;

  double SACp__inl281_rand;
  double SACp__inl281_a;
  double SACp__inl281_const1;
  double SACp__inl281_const2;
  double SACp__inl281_const3;
  int SACp__inl281_z;
  bool SACp__inl281__flat_158;
  int SACp__inl281_y;
  bool SACp__inl281__flat_157;
  int SACp__inl281_x;
  bool SACp__inl281__flat_156;
  double SACp__inl281__flat_154;
  int SACp__inl281__flat_153_128_128_32_2__;

  SAC_MT_SETUP_INITIAL();
  SAC_PF_SETUP();
  SAC_HM_SETUP();
  SAC_MT_SETUP();
  SAC_CS_SETUP();
  SACf_GlobalObjInit_for_( __argc, __argv);

  SACl_total_size = 524288; 
  SAC_ND_ALLOC_ARRAY( char, SACp_flat_370, 1)
  SAC_ND_CREATE_CONST_ARRAY_C( SACp_flat_370, " Dimension: %d x %d x %d, N-Iter: %d  Total Size: %d Complex\n")
  
  /*
   * ND_FUN_AP( to_string, , 3, out_rc, SACp_flat_369, in_rc, SACp_flat_370, in, 61)
   */
  to_string( SAC_ND_KS_AP_OUT_RC(SACp_flat_369), SAC_ND_KS_AP_IN_RC(SACp_flat_370), 61);

  
  /*
   * ND_FUN_AP( printf, , 6, in, SACp_flat_369, in, 128, in, 128, in, 32, in, 6, in, SACl_total_size)
   */
  printf( SACp_flat_369, 128, 128, 32, 6, SACl_total_size);

  SAC_ND_DEC_RC_FREE_HIDDEN( SACp_flat_369, 1, free)
  
  /*
   * ND_FUN_AP( SACf_ComputeIndexMap_, , 1, out_rc, SACl_indexmap)
   */
  SACf_ComputeIndexMap_( SAC_ND_KS_AP_OUT_RC(SACl_indexmap));

  
  /*
   * ND_FUN_AP( SACf_ComputeExponentialMap_, , 1, out_rc, SACl_expomap)
   */
  SACf_ComputeExponentialMap_( SAC_ND_KS_AP_OUT_RC(SACl_expomap));

  
  /*
   * ND_FUN_AP( SACf_RootsOfUnity__d, , 2, out_rc, SACl_rofu, in, 1.0)
   */
  SACf_RootsOfUnity__d( SAC_ND_KS_AP_OUT_RC(SACl_rofu), 1.0);

  SAC_ND_ALLOC_ARRAY( double, SACp__inl281_A, 0)
  SAC_ND_INC_RC( SACp__inl281_A, 1)
  SAC_PF_BEGIN_WITH( genarray)
    
    /*
     * WL_BEGIN__OFFSET( SACp__inl281_A, SACp__inl281__type_388, 4)
     */
    {
      int SAC_WL_OFFSET( SACp__inl281_A);
      int SAC_WL_MT_SCHEDULE_START( 0);
      int SAC_WL_MT_SCHEDULE_STOP( 0);
      int SAC_WL_MT_SCHEDULE_START( 1);
      int SAC_WL_MT_SCHEDULE_STOP( 1);
      int SAC_WL_MT_SCHEDULE_START( 2);
      int SAC_WL_MT_SCHEDULE_STOP( 2);
      int SAC_WL_MT_SCHEDULE_START( 3);
      int SAC_WL_MT_SCHEDULE_STOP( 3);

      
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
       * WL_INIT_OFFSET( 4, SACp__inl281_A, SACp__inl281__type_388, 4)
       */
      SAC_WL_OFFSET( SACp__inl281_A)
        = SAC_WL_MT_SCHEDULE_START( 0) * SAC_ND_A_SHAPE( SACp__inl281_A, 1) * SAC_ND_A_SHAPE( SACp__inl281_A, 2) * SAC_ND_A_SHAPE( SACp__inl281_A, 3)
        + SAC_WL_MT_SCHEDULE_START( 1) * SAC_ND_A_SHAPE( SACp__inl281_A, 2) * SAC_ND_A_SHAPE( SACp__inl281_A, 3)
        + SAC_WL_MT_SCHEDULE_START( 2) * SAC_ND_A_SHAPE( SACp__inl281_A, 3)
        + SAC_WL_MT_SCHEDULE_START( 3);

      SAC_WL_STRIDE_LOOP0_BEGIN( 0, SACp__inl281__type_388, SACp__inl281__type_390, 0, 128, 1)
        SAC_WL_GRID_UNROLL_BEGIN( 0, SACp__inl281__type_388, SACp__inl281__type_390, 0, 1)
          SAC_WL_STRIDE_LOOP0_BEGIN( 1, SACp__inl281__type_388, SACp__inl281__type_391, 0, 128, 1)
            SAC_WL_GRID_UNROLL_BEGIN( 1, SACp__inl281__type_388, SACp__inl281__type_391, 0, 1)
              SAC_WL_STRIDE_LOOP0_BEGIN( 2, SACp__inl281__type_388, SACp__inl281__type_392, 0, 32, 1)
                SAC_WL_GRID_UNROLL_BEGIN( 2, SACp__inl281__type_388, SACp__inl281__type_392, 0, 1)
                  SAC_WL_STRIDE_LOOP0_BEGIN( 3, SACp__inl281__type_388, SACp__inl281__type_393, 0, 2, 1)
                    SAC_WL_GRID_UNROLL_BEGIN( 3, SACp__inl281__type_388, SACp__inl281__type_393, 0, 1)
                      SACp__inl281__type_389 = 0.0; 
                      
                      /*
                       * WL_ASSIGN( 0, SACp__inl281__type_389, 4, SACp__inl281_A, SACp__inl281__type_388, 4, SACp__inl281__type_390, SACp__inl281__type_391, SACp__inl281__type_392, SACp__inl281__type_393)
                       */
                      SAC_TR_WL_PRINT( ("index vector [%d, %d, %d, %d] (== offset %d) -- offset %d -- assign", SACp__inl281__type_390, SACp__inl281__type_391, SACp__inl281__type_392, SACp__inl281__type_393, ( SAC_ND_A_SHAPE( SACp__inl281_A, 3) * ( SAC_ND_A_SHAPE( SACp__inl281_A, 2) * ( SAC_ND_A_SHAPE( SACp__inl281_A, 1) * SACp__inl281__type_390 + SACp__inl281__type_391 )+ SACp__inl281__type_392 )+ SACp__inl281__type_393 ), SAC_WL_OFFSET( SACp__inl281_A)));
                      SAC_ND_WRITE_ARRAY( SACp__inl281_A, SAC_WL_OFFSET( SACp__inl281_A)) = SACp__inl281__type_389;
                      SAC_WL_OFFSET( SACp__inl281_A)++;

                    SAC_WL_GRID_UNROLL_END( 3, SACp__inl281__type_388, SACp__inl281__type_393, 0, 1)
                  SAC_WL_STRIDE_LOOP_END( 3, SACp__inl281__type_388, SACp__inl281__type_393, 0, 2, 1)
                SAC_WL_GRID_UNROLL_END( 2, SACp__inl281__type_388, SACp__inl281__type_392, 0, 1)
              SAC_WL_STRIDE_LOOP_END( 2, SACp__inl281__type_388, SACp__inl281__type_392, 0, 32, 1)
            SAC_WL_GRID_UNROLL_END( 1, SACp__inl281__type_388, SACp__inl281__type_391, 0, 1)
          SAC_WL_STRIDE_LOOP_END( 1, SACp__inl281__type_388, SACp__inl281__type_391, 0, 128, 1)
        SAC_WL_GRID_UNROLL_END( 0, SACp__inl281__type_388, SACp__inl281__type_390, 0, 1)
      SAC_WL_STRIDE_LOOP_END( 0, SACp__inl281__type_388, SACp__inl281__type_390, 0, 128, 1)
    
      /*
       * MT_SCHEDULER_END( 0, 4, 0, 0, 0, 0, 128, 128, 32, 2)
       */


    
      /*
       * WL_END__OFFSET( SACp__inl281_A, SACp__inl281__type_388, 4)
       */
    }

  SAC_PF_END_WITH( genarray)
  SACp__inl281_rand = 314159265.0; 
  
  /*
   * ND_FUN_AP( pow, SACp__inl281_a, 2, in, 5.0, in, 13.0)
   */
  SACp__inl281_a = pow( 5.0, 13.0);

  
  /*
   * ND_FUN_AP( pow, SACp__inl281_const1, 2, in, 2.0, in, 46.0)
   */
  SACp__inl281_const1 = pow( 2.0, 46.0);

  
  /*
   * ND_FUN_AP( pow, SACp__inl281_const2, 2, in, 2.0, in, -46.0)
   */
  SACp__inl281_const2 = pow( 2.0, -46.0);

  
  /*
   * ND_FUN_AP( pow, SACp__inl281_const3, 2, in, 2.0, in, 23.0)
   */
  SACp__inl281_const3 = pow( 2.0, 23.0);

  SACp__inl281_z = 0; 
  SAC_ND_GOTO( _comp_948_SAC__label)
  do 
  { 
    SAC_ND_LABEL( _comp_948_SAC__label)
    SACp__inl281_y = 0; 
    SAC_ND_GOTO( _comp_947_SAC__label)
    do 
    { 
      SAC_ND_LABEL( _comp_947_SAC__label)
      SACp__inl281_x = 0; 
      SAC_ND_GOTO( _comp_946_SAC__label)
      do 
      { 
        SAC_ND_LABEL( _comp_946_SAC__label)
        SACp__inl285__flat_137 = (SACp__inl281_a / SACp__inl281_const3); 
        
        /*
         * ND_FUN_AP( floor, SACp__inl285_a1, 1, in, SACp__inl285__flat_137)
         */
        SACp__inl285_a1 = floor( SACp__inl285__flat_137);

        SACp__inl285__flat_138 = (SACp__inl281_const3 * SACp__inl285_a1); 
        SACp__inl285_a2 = (SACp__inl281_a - SACp__inl285__flat_138); 
        SACp__inl285__flat_139 = (SACp__inl281_rand / SACp__inl281_const3); 
        
        /*
         * ND_FUN_AP( floor, SACp__inl285_b1, 1, in, SACp__inl285__flat_139)
         */
        SACp__inl285_b1 = floor( SACp__inl285__flat_139);

        SACp__inl285__flat_140 = (SACp__inl281_const3 * SACp__inl285_b1); 
        SACp__inl285_b2 = (SACp__inl281_rand - SACp__inl285__flat_140); 
        SACp__inl285__flat_142 = (SACp__inl285_a2 * SACp__inl285_b1); 
        SACp__inl285__flat_141 = (SACp__inl285_a1 * SACp__inl285_b2); 
        SACp__inl285_t1 = (SACp__inl285__flat_141 + SACp__inl285__flat_142); 
        SACp__inl285__flat_143 = (SACp__inl285_t1 / SACp__inl281_const3); 
        
        /*
         * ND_FUN_AP( floor, SACp__inl285_t2, 1, in, SACp__inl285__flat_143)
         */
        SACp__inl285_t2 = floor( SACp__inl285__flat_143);

        SACp__inl285__flat_144 = (SACp__inl281_const3 * SACp__inl285_t2); 
        SACp__inl285_t3 = (SACp__inl285_t1 - SACp__inl285__flat_144); 
        SACp__inl285__flat_146 = (SACp__inl285_a2 * SACp__inl285_b2); 
        SACp__inl285__flat_145 = (SACp__inl281_const3 * SACp__inl285_t3); 
        SACp__inl285_t4 = (SACp__inl285__flat_145 + SACp__inl285__flat_146); 
        SACp__inl285__flat_147 = (SACp__inl285_t4 / SACp__inl281_const1); 
        
        /*
         * ND_FUN_AP( floor, SACp__inl285_t5, 1, in, SACp__inl285__flat_147)
         */
        SACp__inl285_t5 = floor( SACp__inl285__flat_147);

        SACp__inl285__flat_148 = (SACp__inl281_const1 * SACp__inl285_t5); 
        SACp__inl285_c = (SACp__inl285_t4 - SACp__inl285__flat_148); 
        SACp__inl281__flat_154 = (SACp__inl285_c * SACp__inl281_const2); 
        SACp__inl281__flat_153_128_128_32_2__ = ((((((SACp__inl281_x * 128) + SACp__inl281_y) * 32) + SACp__inl281_z) * 2) + 0); 
        SAC_ND_KS_ASSIGN_ARRAY( SACp__inl281_A, SACp_pcomp_941___inl281_A)
        SAC_ND_IDX_MODARRAY_AxVxS_CHECK_REUSE( double, SACp__inl281_A, SACp_pcomp_941___inl281_A, SACp__inl281__flat_153_128_128_32_2__, SACp__inl281__flat_154)
        SAC_ND_INC_RC( SACp__inl281_A, 1)
        SAC_ND_DEC_RC_FREE_ARRAY( SACp_pcomp_941___inl281_A, 1)
        SACp__inl285__flat_139 = (SACp__inl285_c / SACp__inl281_const3); 
        
        /*
         * ND_FUN_AP( floor, SACp__inl285_b1, 1, in, SACp__inl285__flat_139)
         */
        SACp__inl285_b1 = floor( SACp__inl285__flat_139);

        SACp__inl285__flat_140 = (SACp__inl281_const3 * SACp__inl285_b1); 
        SACp__inl285_b2 = (SACp__inl285_c - SACp__inl285__flat_140); 
        SACp__inl285__flat_142 = (SACp__inl285_a2 * SACp__inl285_b1); 
        SACp__inl285__flat_141 = (SACp__inl285_a1 * SACp__inl285_b2); 
        SACp__inl285_t1 = (SACp__inl285__flat_141 + SACp__inl285__flat_142); 
        SACp__inl285__flat_143 = (SACp__inl285_t1 / SACp__inl281_const3); 
        
        /*
         * ND_FUN_AP( floor, SACp__inl285_t2, 1, in, SACp__inl285__flat_143)
         */
        SACp__inl285_t2 = floor( SACp__inl285__flat_143);

        SACp__inl285__flat_144 = (SACp__inl281_const3 * SACp__inl285_t2); 
        SACp__inl285_t3 = (SACp__inl285_t1 - SACp__inl285__flat_144); 
        SACp__inl285__flat_146 = (SACp__inl285_a2 * SACp__inl285_b2); 
        SACp__inl285__flat_145 = (SACp__inl281_const3 * SACp__inl285_t3); 
        SACp__inl285_t4 = (SACp__inl285__flat_145 + SACp__inl285__flat_146); 
        SACp__inl285__flat_147 = (SACp__inl285_t4 / SACp__inl281_const1); 
        
        /*
         * ND_FUN_AP( floor, SACp__inl285_t5, 1, in, SACp__inl285__flat_147)
         */
        SACp__inl285_t5 = floor( SACp__inl285__flat_147);

        SACp__inl285__flat_148 = (SACp__inl281_const1 * SACp__inl285_t5); 
        SACp__inl285_c = (SACp__inl285_t4 - SACp__inl285__flat_148); 
        SACp__inl281_rand = SACp__inl285_c; 
        SACp__inl281__flat_154 = (SACp__inl285_c * SACp__inl281_const2); 
        SACp__inl281__flat_153_128_128_32_2__ = ((((((SACp__inl281_x * 128) + SACp__inl281_y) * 32) + SACp__inl281_z) * 2) + 1); 
        SAC_ND_KS_ASSIGN_ARRAY( SACp__inl281_A, SACp_pcomp_942___inl281_A)
        SAC_ND_IDX_MODARRAY_AxVxS_CHECK_REUSE( double, SACp__inl281_A, SACp_pcomp_942___inl281_A, SACp__inl281__flat_153_128_128_32_2__, SACp__inl281__flat_154)
        SAC_ND_INC_RC( SACp__inl281_A, 1)
        SAC_ND_DEC_RC_FREE_ARRAY( SACp_pcomp_942___inl281_A, 1)
        SACp__inl281_x = (SACp__inl281_x + 1); 
        SACp__inl281__flat_156 = (SACp__inl281_x < 128); 
      }
      while (SACp__inl281__flat_156);
      SACp__inl281_y = (SACp__inl281_y + 1); 
      SACp__inl281__flat_157 = (SACp__inl281_y < 128); 
    }
    while (SACp__inl281__flat_157);
    SACp__inl281_z = (SACp__inl281_z + 1); 
    SACp__inl281__flat_158 = (SACp__inl281_z < 32); 
  }
  while (SACp__inl281__flat_158);
  SAC_ND_KS_ASSIGN_ARRAY( SACp__inl281_A, SACl_U)
  
  /*
   * ND_FUN_AP( SACf_FFT3d_forward___MAIN__cpx_128_128_32___MAIN__cpx_64_, , 3, out_rc, SACl_V, in_rc, SACl_U, in_rc, SACl_rofu)
   */
  SACf_FFT3d_forward___MAIN__cpx_128_128_32___MAIN__cpx_64_( SAC_ND_KS_AP_OUT_RC(SACl_V), SAC_ND_KS_AP_IN_RC(SACl_U), SAC_ND_KS_AP_IN_RC(SACl_rofu));

  
  /*
   * ND_FUN_AP( SACf_RootsOfUnity__d, , 2, out_rc, SACl_rofu, in, -1.0)
   */
  SACf_RootsOfUnity__d( SAC_ND_KS_AP_OUT_RC(SACl_rofu), -1.0);

  SACl_t = 1; 
  SAC_ND_GOTO( _comp_949_SAC__label)
  do 
  { 
    SAC_ND_LABEL( _comp_949_SAC__label)
    SAC_ND_INC_RC( SACl_rofu, 1)
    SAC_ND_INC_RC( SACl_V, 1)
    SAC_ND_KS_ASSIGN_ARRAY( SACl_V, SACp__inl287_Vd)
    SAC_ND_CHECK_REUSE_ARRAY( SACp__inl287_Vd, SACp__inl287_res)
    SAC_ND_ALLOC_ARRAY( double, SACp__inl287_res, 0)
    SAC_ND_INC_RC( SACp__inl287_res, 1)
    SAC_PF_BEGIN_WITH( modarray)
      
      /*
       * WL_BEGIN__OFFSET( SACp__inl287_res, SACp__inl287__flat_231_iv, 4)
       */
      {
        int SAC_WL_OFFSET( SACp__inl287_res);
        int SAC_WL_MT_SCHEDULE_START( 0);
        int SAC_WL_MT_SCHEDULE_STOP( 0);
        int SAC_WL_MT_SCHEDULE_START( 1);
        int SAC_WL_MT_SCHEDULE_STOP( 1);
        int SAC_WL_MT_SCHEDULE_START( 2);
        int SAC_WL_MT_SCHEDULE_STOP( 2);
        int SAC_WL_MT_SCHEDULE_START( 3);
        int SAC_WL_MT_SCHEDULE_STOP( 3);

        
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
         * WL_INIT_OFFSET( 4, SACp__inl287_res, SACp__inl287__flat_231_iv, 4)
         */
        SAC_WL_OFFSET( SACp__inl287_res)
          = SAC_WL_MT_SCHEDULE_START( 0) * SAC_ND_A_SHAPE( SACp__inl287_res, 1) * SAC_ND_A_SHAPE( SACp__inl287_res, 2) * SAC_ND_A_SHAPE( SACp__inl287_res, 3)
          + SAC_WL_MT_SCHEDULE_START( 1) * SAC_ND_A_SHAPE( SACp__inl287_res, 2) * SAC_ND_A_SHAPE( SACp__inl287_res, 3)
          + SAC_WL_MT_SCHEDULE_START( 2) * SAC_ND_A_SHAPE( SACp__inl287_res, 3)
          + SAC_WL_MT_SCHEDULE_START( 3);

        SAC_WL_STRIDE_LOOP0_BEGIN( 0, SACp__inl287__flat_231_iv, SACp__inl287__flat_227_i, 0, 128, 1)
          SAC_WL_GRID_UNROLL_BEGIN( 0, SACp__inl287__flat_231_iv, SACp__inl287__flat_227_i, 0, 1)
            SAC_WL_STRIDE_LOOP0_BEGIN( 1, SACp__inl287__flat_231_iv, SACp__inl287__flat_228_j, 0, 128, 1)
              SAC_WL_GRID_UNROLL_BEGIN( 1, SACp__inl287__flat_231_iv, SACp__inl287__flat_228_j, 0, 1)
                SAC_WL_STRIDE_LOOP0_BEGIN( 2, SACp__inl287__flat_231_iv, SACp__inl287__flat_229_k, 0, 32, 1)
                  SAC_WL_GRID_UNROLL_BEGIN( 2, SACp__inl287__flat_231_iv, SACp__inl287__flat_229_k, 0, 1)
                    SAC_WL_STRIDE_LOOP0_BEGIN( 3, SACp__inl287__flat_231_iv, SACp__inl287__flat_230_l, 0, 2, 1)
                      SAC_WL_GRID_UNROLL_BEGIN( 3, SACp__inl287__flat_231_iv, SACp__inl287__flat_230_l, 0, 1)
                        SAC_ND_KS_USE_GENVAR_OFFSET( SACp__inl287__flat_231_iv_128_128_32_2__, SACp__inl287_res)
                        SACp__inl287__flat_233_128_128_32__ = ((((SACp__inl287__flat_227_i * 128) + SACp__inl287__flat_228_j) * 32) + SACp__inl287__flat_229_k); 
                        SAC_ND_IDX_PSI_S( SACp__inl287__flat_233_128_128_32__, SACl_indexmap, SACp__inl287__flat_232)
                        SACp__inl287_newindex = (SACl_t * SACp__inl287__flat_232); 
                        SACp__inl287__flat_234_50689__ = SACp__inl287_newindex; 
                        SAC_ND_IDX_PSI_S( SACp__inl287__flat_234_50689__, SACl_expomap, SACp__inl287_exponent)
                        SAC_ND_IDX_PSI_S( SACp__inl287__flat_231_iv_128_128_32_2__, SACl_V, SACp__inl287__flat_235)
                        SACp__inl287_val = (SACp__inl287__flat_235 * SACp__inl287_exponent); 
                        
                        /*
                         * WL_ASSIGN( 0, SACp__inl287_val, 4, SACp__inl287_res, SACp__inl287__flat_231_iv, 4, SACp__inl287__flat_227_i, SACp__inl287__flat_228_j, SACp__inl287__flat_229_k, SACp__inl287__flat_230_l)
                         */
                        SAC_TR_WL_PRINT( ("index vector [%d, %d, %d, %d] (== offset %d) -- offset %d -- assign", SACp__inl287__flat_227_i, SACp__inl287__flat_228_j, SACp__inl287__flat_229_k, SACp__inl287__flat_230_l, ( SAC_ND_A_SHAPE( SACp__inl287_res, 3) * ( SAC_ND_A_SHAPE( SACp__inl287_res, 2) * ( SAC_ND_A_SHAPE( SACp__inl287_res, 1) * SACp__inl287__flat_227_i + SACp__inl287__flat_228_j )+ SACp__inl287__flat_229_k )+ SACp__inl287__flat_230_l ), SAC_WL_OFFSET( SACp__inl287_res)));
                        SAC_ND_WRITE_ARRAY( SACp__inl287_res, SAC_WL_OFFSET( SACp__inl287_res)) = SACp__inl287_val;
                        SAC_WL_OFFSET( SACp__inl287_res)++;

                      SAC_WL_GRID_UNROLL_END( 3, SACp__inl287__flat_231_iv, SACp__inl287__flat_230_l, 0, 1)
                    SAC_WL_STRIDE_LOOP_END( 3, SACp__inl287__flat_231_iv, SACp__inl287__flat_230_l, 0, 2, 1)
                  SAC_WL_GRID_UNROLL_END( 2, SACp__inl287__flat_231_iv, SACp__inl287__flat_229_k, 0, 1)
                SAC_WL_STRIDE_LOOP_END( 2, SACp__inl287__flat_231_iv, SACp__inl287__flat_229_k, 0, 32, 1)
              SAC_WL_GRID_UNROLL_END( 1, SACp__inl287__flat_231_iv, SACp__inl287__flat_228_j, 0, 1)
            SAC_WL_STRIDE_LOOP_END( 1, SACp__inl287__flat_231_iv, SACp__inl287__flat_228_j, 0, 128, 1)
          SAC_WL_GRID_UNROLL_END( 0, SACp__inl287__flat_231_iv, SACp__inl287__flat_227_i, 0, 1)
        SAC_WL_STRIDE_LOOP_END( 0, SACp__inl287__flat_231_iv, SACp__inl287__flat_227_i, 0, 128, 1)
      
        /*
         * MT_SCHEDULER_END( 0, 4, 0, 0, 0, 0, 128, 128, 32, 2)
         */


      
        /*
         * WL_END__OFFSET( SACp__inl287_res, SACp__inl287__flat_231_iv, 4)
         */
      }

    SAC_PF_END_WITH( modarray)
    SAC_ND_DEC_RC_FREE_ARRAY( SACp__inl287_Vd, 1)
    SACp_flat_372 = 524288; 
    SAC_ND_KS_ASSIGN_ARRAY( SACl_rofu, SACp__inl290_rofu)
    SAC_ND_INC_RC( SACp__inl290_rofu, 2)
    SAC_ND_KS_ASSIGN_ARRAY( SACp__inl287_res, SACp__inl290_a)
    
    /*
     * ND_FUN_AP( SACf_FFT1d_Slice__d__MAIN__cpx_128_128_32___MAIN__cpx_64_, , 4, out_rc, SACp__inl290_u, in, -1.0, in_rc, SACp__inl290_a, in_rc, SACp__inl290_rofu)
     */
    SACf_FFT1d_Slice__d__MAIN__cpx_128_128_32___MAIN__cpx_64_( SAC_ND_KS_AP_OUT_RC(SACp__inl290_u), -1.0, SAC_ND_KS_AP_IN_RC(SACp__inl290_a), SAC_ND_KS_AP_IN_RC(SACp__inl290_rofu));

    SAC_ND_ALLOC_ARRAY( double, SACp__inl291_res, 0)
    SAC_ND_INC_RC( SACp__inl291_res, 1)
    SAC_PF_BEGIN_WITH( genarray)
      
      /*
       * WL_BEGIN__OFFSET( SACp__inl291_res, SACp__inl291__flat_92_iv, 4)
       */
      {
        int SAC_WL_OFFSET( SACp__inl291_res);
        int SAC_WL_MT_SCHEDULE_START( 0);
        int SAC_WL_MT_SCHEDULE_STOP( 0);
        int SAC_WL_MT_SCHEDULE_START( 1);
        int SAC_WL_MT_SCHEDULE_STOP( 1);
        int SAC_WL_MT_SCHEDULE_START( 2);
        int SAC_WL_MT_SCHEDULE_STOP( 2);
        int SAC_WL_MT_SCHEDULE_START( 3);
        int SAC_WL_MT_SCHEDULE_STOP( 3);

        
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
         * WL_INIT_OFFSET( 4, SACp__inl291_res, SACp__inl291__flat_92_iv, 4)
         */
        SAC_WL_OFFSET( SACp__inl291_res)
          = SAC_WL_MT_SCHEDULE_START( 0) * SAC_ND_A_SHAPE( SACp__inl291_res, 1) * SAC_ND_A_SHAPE( SACp__inl291_res, 2) * SAC_ND_A_SHAPE( SACp__inl291_res, 3)
          + SAC_WL_MT_SCHEDULE_START( 1) * SAC_ND_A_SHAPE( SACp__inl291_res, 2) * SAC_ND_A_SHAPE( SACp__inl291_res, 3)
          + SAC_WL_MT_SCHEDULE_START( 2) * SAC_ND_A_SHAPE( SACp__inl291_res, 3)
          + SAC_WL_MT_SCHEDULE_START( 3);

        SAC_WL_STRIDE_LOOP0_BEGIN( 0, SACp__inl291__flat_92_iv, SACp__inl291__type_606, 0, 128, 1)
          SAC_WL_GRID_UNROLL_BEGIN( 0, SACp__inl291__flat_92_iv, SACp__inl291__type_606, 0, 1)
            SAC_WL_STRIDE_LOOP0_BEGIN( 1, SACp__inl291__flat_92_iv, SACp__inl291__type_607, 0, 32, 1)
              SAC_WL_GRID_UNROLL_BEGIN( 1, SACp__inl291__flat_92_iv, SACp__inl291__type_607, 0, 1)
                SAC_WL_STRIDE_LOOP0_BEGIN( 2, SACp__inl291__flat_92_iv, SACp__inl291__type_608, 0, 128, 1)
                  SAC_WL_GRID_UNROLL_BEGIN( 2, SACp__inl291__flat_92_iv, SACp__inl291__type_608, 0, 1)
                    SAC_WL_STRIDE_LOOP0_BEGIN( 3, SACp__inl291__flat_92_iv, SACp__inl291__type_609, 0, 2, 1)
                      SAC_WL_GRID_UNROLL_BEGIN( 3, SACp__inl291__flat_92_iv, SACp__inl291__type_609, 0, 1)
                        SACp__inl291_ivt_128_128_32_2__ = ((((((SACp__inl291__type_606 * 128) + SACp__inl291__type_608) * 32) + SACp__inl291__type_607) * 2) + SACp__inl291__type_609); 
                        SAC_ND_IDX_PSI_S( SACp__inl291_ivt_128_128_32_2__, SACp__inl290_u, SACp__inl291_val)
                        
                        /*
                         * WL_ASSIGN( 0, SACp__inl291_val, 4, SACp__inl291_res, SACp__inl291__flat_92_iv, 4, SACp__inl291__type_606, SACp__inl291__type_607, SACp__inl291__type_608, SACp__inl291__type_609)
                         */
                        SAC_TR_WL_PRINT( ("index vector [%d, %d, %d, %d] (== offset %d) -- offset %d -- assign", SACp__inl291__type_606, SACp__inl291__type_607, SACp__inl291__type_608, SACp__inl291__type_609, ( SAC_ND_A_SHAPE( SACp__inl291_res, 3) * ( SAC_ND_A_SHAPE( SACp__inl291_res, 2) * ( SAC_ND_A_SHAPE( SACp__inl291_res, 1) * SACp__inl291__type_606 + SACp__inl291__type_607 )+ SACp__inl291__type_608 )+ SACp__inl291__type_609 ), SAC_WL_OFFSET( SACp__inl291_res)));
                        SAC_ND_WRITE_ARRAY( SACp__inl291_res, SAC_WL_OFFSET( SACp__inl291_res)) = SACp__inl291_val;
                        SAC_WL_OFFSET( SACp__inl291_res)++;

                      SAC_WL_GRID_UNROLL_END( 3, SACp__inl291__flat_92_iv, SACp__inl291__type_609, 0, 1)
                    SAC_WL_STRIDE_LOOP_END( 3, SACp__inl291__flat_92_iv, SACp__inl291__type_609, 0, 2, 1)
                  SAC_WL_GRID_UNROLL_END( 2, SACp__inl291__flat_92_iv, SACp__inl291__type_608, 0, 1)
                SAC_WL_STRIDE_LOOP_END( 2, SACp__inl291__flat_92_iv, SACp__inl291__type_608, 0, 128, 1)
              SAC_WL_GRID_UNROLL_END( 1, SACp__inl291__flat_92_iv, SACp__inl291__type_607, 0, 1)
            SAC_WL_STRIDE_LOOP_END( 1, SACp__inl291__flat_92_iv, SACp__inl291__type_607, 0, 32, 1)
          SAC_WL_GRID_UNROLL_END( 0, SACp__inl291__flat_92_iv, SACp__inl291__type_606, 0, 1)
        SAC_WL_STRIDE_LOOP_END( 0, SACp__inl291__flat_92_iv, SACp__inl291__type_606, 0, 128, 1)
      
        /*
         * MT_SCHEDULER_END( 0, 4, 0, 0, 0, 0, 128, 32, 128, 2)
         */


      
        /*
         * WL_END__OFFSET( SACp__inl291_res, SACp__inl291__flat_92_iv, 4)
         */
      }

    SAC_PF_END_WITH( genarray)
    SAC_ND_DEC_RC_FREE_ARRAY( SACp__inl290_u, 1)
    SAC_ND_KS_ASSIGN_ARRAY( SACp__inl291_res, SACp__inl290_u_t)
    
    /*
     * ND_FUN_AP( SACf_FFT1d_Slice__d__MAIN__cpx_128_32_128___MAIN__cpx_64_, , 4, out_rc, SACp__inl290_v, in, -1.0, in_rc, SACp__inl290_u_t, in_rc, SACp__inl290_rofu)
     */
    SACf_FFT1d_Slice__d__MAIN__cpx_128_32_128___MAIN__cpx_64_( SAC_ND_KS_AP_OUT_RC(SACp__inl290_v), -1.0, SAC_ND_KS_AP_IN_RC(SACp__inl290_u_t), SAC_ND_KS_AP_IN_RC(SACp__inl290_rofu));

    SAC_ND_ALLOC_ARRAY( double, SACp__inl296_res, 0)
    SAC_ND_INC_RC( SACp__inl296_res, 1)
    SAC_PF_BEGIN_WITH( genarray)
      
      /*
       * WL_BEGIN__OFFSET( SACp__inl296_res, SACp__inl296__flat_92_iv, 4)
       */
      {
        int SAC_WL_OFFSET( SACp__inl296_res);
        int SAC_WL_MT_SCHEDULE_START( 0);
        int SAC_WL_MT_SCHEDULE_STOP( 0);
        int SAC_WL_MT_SCHEDULE_START( 1);
        int SAC_WL_MT_SCHEDULE_STOP( 1);
        int SAC_WL_MT_SCHEDULE_START( 2);
        int SAC_WL_MT_SCHEDULE_STOP( 2);
        int SAC_WL_MT_SCHEDULE_START( 3);
        int SAC_WL_MT_SCHEDULE_STOP( 3);

        
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
         * WL_INIT_OFFSET( 4, SACp__inl296_res, SACp__inl296__flat_92_iv, 4)
         */
        SAC_WL_OFFSET( SACp__inl296_res)
          = SAC_WL_MT_SCHEDULE_START( 0) * SAC_ND_A_SHAPE( SACp__inl296_res, 1) * SAC_ND_A_SHAPE( SACp__inl296_res, 2) * SAC_ND_A_SHAPE( SACp__inl296_res, 3)
          + SAC_WL_MT_SCHEDULE_START( 1) * SAC_ND_A_SHAPE( SACp__inl296_res, 2) * SAC_ND_A_SHAPE( SACp__inl296_res, 3)
          + SAC_WL_MT_SCHEDULE_START( 2) * SAC_ND_A_SHAPE( SACp__inl296_res, 3)
          + SAC_WL_MT_SCHEDULE_START( 3);

        SAC_WL_STRIDE_LOOP0_BEGIN( 0, SACp__inl296__flat_92_iv, SACp__inl296__type_625, 0, 128, 1)
          SAC_WL_GRID_UNROLL_BEGIN( 0, SACp__inl296__flat_92_iv, SACp__inl296__type_625, 0, 1)
            SAC_WL_STRIDE_LOOP0_BEGIN( 1, SACp__inl296__flat_92_iv, SACp__inl296__type_626, 0, 32, 1)
              SAC_WL_GRID_UNROLL_BEGIN( 1, SACp__inl296__flat_92_iv, SACp__inl296__type_626, 0, 1)
                SAC_WL_STRIDE_LOOP0_BEGIN( 2, SACp__inl296__flat_92_iv, SACp__inl296__type_627, 0, 128, 1)
                  SAC_WL_GRID_UNROLL_BEGIN( 2, SACp__inl296__flat_92_iv, SACp__inl296__type_627, 0, 1)
                    SAC_WL_STRIDE_LOOP0_BEGIN( 3, SACp__inl296__flat_92_iv, SACp__inl296__type_628, 0, 2, 1)
                      SAC_WL_GRID_UNROLL_BEGIN( 3, SACp__inl296__flat_92_iv, SACp__inl296__type_628, 0, 1)
                        SACp__inl296_ivt_128_32_128_2__ = ((((((SACp__inl296__type_627 * 32) + SACp__inl296__type_626) * 128) + SACp__inl296__type_625) * 2) + SACp__inl296__type_628); 
                        SAC_ND_IDX_PSI_S( SACp__inl296_ivt_128_32_128_2__, SACp__inl290_v, SACp__inl296_val)
                        
                        /*
                         * WL_ASSIGN( 0, SACp__inl296_val, 4, SACp__inl296_res, SACp__inl296__flat_92_iv, 4, SACp__inl296__type_625, SACp__inl296__type_626, SACp__inl296__type_627, SACp__inl296__type_628)
                         */
                        SAC_TR_WL_PRINT( ("index vector [%d, %d, %d, %d] (== offset %d) -- offset %d -- assign", SACp__inl296__type_625, SACp__inl296__type_626, SACp__inl296__type_627, SACp__inl296__type_628, ( SAC_ND_A_SHAPE( SACp__inl296_res, 3) * ( SAC_ND_A_SHAPE( SACp__inl296_res, 2) * ( SAC_ND_A_SHAPE( SACp__inl296_res, 1) * SACp__inl296__type_625 + SACp__inl296__type_626 )+ SACp__inl296__type_627 )+ SACp__inl296__type_628 ), SAC_WL_OFFSET( SACp__inl296_res)));
                        SAC_ND_WRITE_ARRAY( SACp__inl296_res, SAC_WL_OFFSET( SACp__inl296_res)) = SACp__inl296_val;
                        SAC_WL_OFFSET( SACp__inl296_res)++;

                      SAC_WL_GRID_UNROLL_END( 3, SACp__inl296__flat_92_iv, SACp__inl296__type_628, 0, 1)
                    SAC_WL_STRIDE_LOOP_END( 3, SACp__inl296__flat_92_iv, SACp__inl296__type_628, 0, 2, 1)
                  SAC_WL_GRID_UNROLL_END( 2, SACp__inl296__flat_92_iv, SACp__inl296__type_627, 0, 1)
                SAC_WL_STRIDE_LOOP_END( 2, SACp__inl296__flat_92_iv, SACp__inl296__type_627, 0, 128, 1)
              SAC_WL_GRID_UNROLL_END( 1, SACp__inl296__flat_92_iv, SACp__inl296__type_626, 0, 1)
            SAC_WL_STRIDE_LOOP_END( 1, SACp__inl296__flat_92_iv, SACp__inl296__type_626, 0, 32, 1)
          SAC_WL_GRID_UNROLL_END( 0, SACp__inl296__flat_92_iv, SACp__inl296__type_625, 0, 1)
        SAC_WL_STRIDE_LOOP_END( 0, SACp__inl296__flat_92_iv, SACp__inl296__type_625, 0, 128, 1)
      
        /*
         * MT_SCHEDULER_END( 0, 4, 0, 0, 0, 0, 128, 32, 128, 2)
         */


      
        /*
         * WL_END__OFFSET( SACp__inl296_res, SACp__inl296__flat_92_iv, 4)
         */
      }

    SAC_PF_END_WITH( genarray)
    SAC_ND_DEC_RC_FREE_ARRAY( SACp__inl290_v, 1)
    SAC_ND_KS_ASSIGN_ARRAY( SACp__inl296_res, SACp__inl290_v_t)
    
    /*
     * ND_FUN_AP( SACf_FFT1d_Slice__d__MAIN__cpx_128_32_128___MAIN__cpx_64_, , 4, out_rc, SACp__inl290_w, in, -1.0, in_rc, SACp__inl290_v_t, in_rc, SACp__inl290_rofu)
     */
    SACf_FFT1d_Slice__d__MAIN__cpx_128_32_128___MAIN__cpx_64_( SAC_ND_KS_AP_OUT_RC(SACp__inl290_w), -1.0, SAC_ND_KS_AP_IN_RC(SACp__inl290_v_t), SAC_ND_KS_AP_IN_RC(SACp__inl290_rofu));

    SAC_ND_ALLOC_ARRAY( double, SACp__inl306_result, 0)
    SAC_ND_INC_RC( SACp__inl306_result, 1)
    SAC_PF_BEGIN_WITH( genarray)
      
      /*
       * WL_BEGIN__OFFSET( SACp__inl306_result, SACp__inl306__flat_64_iv, 4)
       */
      {
        int SAC_WL_OFFSET( SACp__inl306_result);
        int SAC_WL_MT_SCHEDULE_START( 0);
        int SAC_WL_MT_SCHEDULE_STOP( 0);
        int SAC_WL_MT_SCHEDULE_START( 1);
        int SAC_WL_MT_SCHEDULE_STOP( 1);
        int SAC_WL_MT_SCHEDULE_START( 2);
        int SAC_WL_MT_SCHEDULE_STOP( 2);
        int SAC_WL_MT_SCHEDULE_START( 3);
        int SAC_WL_MT_SCHEDULE_STOP( 3);

        
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
         * WL_INIT_OFFSET( 4, SACp__inl306_result, SACp__inl306__flat_64_iv, 4)
         */
        SAC_WL_OFFSET( SACp__inl306_result)
          = SAC_WL_MT_SCHEDULE_START( 0) * SAC_ND_A_SHAPE( SACp__inl306_result, 1) * SAC_ND_A_SHAPE( SACp__inl306_result, 2) * SAC_ND_A_SHAPE( SACp__inl306_result, 3)
          + SAC_WL_MT_SCHEDULE_START( 1) * SAC_ND_A_SHAPE( SACp__inl306_result, 2) * SAC_ND_A_SHAPE( SACp__inl306_result, 3)
          + SAC_WL_MT_SCHEDULE_START( 2) * SAC_ND_A_SHAPE( SACp__inl306_result, 3)
          + SAC_WL_MT_SCHEDULE_START( 3);

        SAC_WL_STRIDE_LOOP0_BEGIN( 0, SACp__inl306__flat_64_iv, SACp__inl306__type_636, 0, 128, 1)
          SAC_WL_GRID_UNROLL_BEGIN( 0, SACp__inl306__flat_64_iv, SACp__inl306__type_636, 0, 1)
            SAC_WL_STRIDE_LOOP0_BEGIN( 1, SACp__inl306__flat_64_iv, SACp__inl306__type_637, 0, 128, 1)
              SAC_WL_GRID_UNROLL_BEGIN( 1, SACp__inl306__flat_64_iv, SACp__inl306__type_637, 0, 1)
                SAC_WL_STRIDE_LOOP0_BEGIN( 2, SACp__inl306__flat_64_iv, SACp__inl306__type_638, 0, 32, 1)
                  SAC_WL_GRID_UNROLL_BEGIN( 2, SACp__inl306__flat_64_iv, SACp__inl306__type_638, 0, 1)
                    SAC_WL_STRIDE_LOOP0_BEGIN( 3, SACp__inl306__flat_64_iv, SACp__inl306__type_639, 0, 2, 1)
                      SAC_WL_GRID_UNROLL_BEGIN( 3, SACp__inl306__flat_64_iv, SACp__inl306__type_639, 0, 1)
                        SACp_wlf_906___inl301_ivt_128_32_128_2__ = ((((((SACp__inl306__type_637 * 32) + SACp__inl306__type_638) * 128) + SACp__inl306__type_636) * 2) + SACp__inl306__type_639); 
                        SAC_ND_IDX_PSI_S( SACp_wlf_906___inl301_ivt_128_32_128_2__, SACp__inl290_w, SACp_wlf_893___inl301_val)
                        SACp__inl306__flat_65 = (SACp_wlf_893___inl301_val / SACp_flat_372); 
                        
                        /*
                         * WL_ASSIGN( 0, SACp__inl306__flat_65, 4, SACp__inl306_result, SACp__inl306__flat_64_iv, 4, SACp__inl306__type_636, SACp__inl306__type_637, SACp__inl306__type_638, SACp__inl306__type_639)
                         */
                        SAC_TR_WL_PRINT( ("index vector [%d, %d, %d, %d] (== offset %d) -- offset %d -- assign", SACp__inl306__type_636, SACp__inl306__type_637, SACp__inl306__type_638, SACp__inl306__type_639, ( SAC_ND_A_SHAPE( SACp__inl306_result, 3) * ( SAC_ND_A_SHAPE( SACp__inl306_result, 2) * ( SAC_ND_A_SHAPE( SACp__inl306_result, 1) * SACp__inl306__type_636 + SACp__inl306__type_637 )+ SACp__inl306__type_638 )+ SACp__inl306__type_639 ), SAC_WL_OFFSET( SACp__inl306_result)));
                        SAC_ND_WRITE_ARRAY( SACp__inl306_result, SAC_WL_OFFSET( SACp__inl306_result)) = SACp__inl306__flat_65;
                        SAC_WL_OFFSET( SACp__inl306_result)++;

                      SAC_WL_GRID_UNROLL_END( 3, SACp__inl306__flat_64_iv, SACp__inl306__type_639, 0, 1)
                    SAC_WL_STRIDE_LOOP_END( 3, SACp__inl306__flat_64_iv, SACp__inl306__type_639, 0, 2, 1)
                  SAC_WL_GRID_UNROLL_END( 2, SACp__inl306__flat_64_iv, SACp__inl306__type_638, 0, 1)
                SAC_WL_STRIDE_LOOP_END( 2, SACp__inl306__flat_64_iv, SACp__inl306__type_638, 0, 32, 1)
              SAC_WL_GRID_UNROLL_END( 1, SACp__inl306__flat_64_iv, SACp__inl306__type_637, 0, 1)
            SAC_WL_STRIDE_LOOP_END( 1, SACp__inl306__flat_64_iv, SACp__inl306__type_637, 0, 128, 1)
          SAC_WL_GRID_UNROLL_END( 0, SACp__inl306__flat_64_iv, SACp__inl306__type_636, 0, 1)
        SAC_WL_STRIDE_LOOP_END( 0, SACp__inl306__flat_64_iv, SACp__inl306__type_636, 0, 128, 1)
      
        /*
         * MT_SCHEDULER_END( 0, 4, 0, 0, 0, 0, 128, 128, 32, 2)
         */


      
        /*
         * WL_END__OFFSET( SACp__inl306_result, SACp__inl306__flat_64_iv, 4)
         */
      }

    SAC_PF_END_WITH( genarray)
    SAC_ND_DEC_RC_FREE_ARRAY( SACp__inl290_w, 1)
    SAC_ND_KS_ASSIGN_ARRAY( SACp__inl306_result, SACl_X)
    
    /*
     * ND_FUN_AP( SACf_CheckResult__i__MAIN__cpx_128_128_32_, , 2, in, SACl_t, in_rc, SACl_X)
     */
    SACf_CheckResult__i__MAIN__cpx_128_128_32_( SACl_t, SAC_ND_KS_AP_IN_RC(SACl_X));

    SACl_t = (SACl_t + 1); 
    SACp_flat_373 = (SACl_t <= 6); 
  }
  while (SACp_flat_373);
  SAC_ND_DEC_RC_FREE_ARRAY( SACl_indexmap, 1)
  SAC_ND_DEC_RC_FREE_ARRAY( SACl_expomap, 1)
  SAC_ND_DEC_RC( SACl_rofu, 1)
  SAC_ND_DEC_RC( SACl_V, 1)
  SACp_flat_374 = 0; 
  
  /*
   * ND_FUN_RET( SACp_flat_374, 0)
   */
  
  SAC_PF_PRINT();
  SAC_CS_FINALIZE();
  SAC_HM_PRINT();

  return( SACp_flat_374);

}

