#define nx_struct struct
#define nx_union union
#define dbg(mode, format, ...) ((void)0)
#define dbg_clear(mode, format, ...) ((void)0)
#define dbg_active(mode) 0
# 147 "/usr/lib/gcc/x86_64-linux-gnu/4.8/include/stddef.h" 3
typedef long int ptrdiff_t;
#line 212
typedef long unsigned int size_t;
#line 324
typedef int wchar_t;
# 8 "/home/tinyos/local/compilers/lib/ncc/deputy_nodeputy.h"
struct __nesc_attr_nonnull {
#line 8
  int dummy;
}  ;
#line 9
struct __nesc_attr_bnd {
#line 9
  void *lo, *hi;
}  ;
#line 10
struct __nesc_attr_bnd_nok {
#line 10
  void *lo, *hi;
}  ;
#line 11
struct __nesc_attr_count {
#line 11
  int n;
}  ;
#line 12
struct __nesc_attr_count_nok {
#line 12
  int n;
}  ;
#line 13
struct __nesc_attr_one {
#line 13
  int dummy;
}  ;
#line 14
struct __nesc_attr_one_nok {
#line 14
  int dummy;
}  ;
#line 15
struct __nesc_attr_dmemset {
#line 15
  int a1, a2, a3;
}  ;
#line 16
struct __nesc_attr_dmemcpy {
#line 16
  int a1, a2, a3;
}  ;
#line 17
struct __nesc_attr_nts {
#line 17
  int dummy;
}  ;
# 36 "/usr/include/stdint.h" 3
typedef signed char int8_t;
typedef short int int16_t;
typedef int int32_t;

typedef long int int64_t;







typedef unsigned char uint8_t;
typedef unsigned short int uint16_t;

typedef unsigned int uint32_t;



typedef unsigned long int uint64_t;









typedef signed char int_least8_t;
typedef short int int_least16_t;
typedef int int_least32_t;

typedef long int int_least64_t;






typedef unsigned char uint_least8_t;
typedef unsigned short int uint_least16_t;
typedef unsigned int uint_least32_t;

typedef unsigned long int uint_least64_t;









typedef signed char int_fast8_t;

typedef long int int_fast16_t;
typedef long int int_fast32_t;
typedef long int int_fast64_t;








typedef unsigned char uint_fast8_t;

typedef unsigned long int uint_fast16_t;
typedef unsigned long int uint_fast32_t;
typedef unsigned long int uint_fast64_t;
#line 119
typedef long int intptr_t;


typedef unsigned long int uintptr_t;
#line 134
typedef long int intmax_t;
typedef unsigned long int uintmax_t;
# 34 "/usr/include/inttypes.h" 3
typedef int __gwchar_t;
#line 275
#line 271
typedef struct __nesc_unnamed4242 {

  long int quot;
  long int rem;
} imaxdiv_t;
# 281 "/home/tinyos/local/compilers/lib/ncc/nesc_nx.h"
static __inline uint8_t __nesc_ntoh_uint8(const void * source)  ;




static __inline uint8_t __nesc_hton_uint8(void * target, uint8_t value)  ;
#line 303
static __inline int8_t __nesc_hton_int8(void * target, int8_t value)  ;






static __inline uint16_t __nesc_ntoh_uint16(const void * source)  ;




static __inline uint16_t __nesc_hton_uint16(void * target, uint16_t value)  ;
#line 334
static __inline int16_t __nesc_ntoh_int16(const void * source)  ;
#line 334
static __inline int16_t __nesc_hton_int16(void * target, int16_t value)  ;
#line 431
typedef struct { unsigned char nxdata[1]; } __attribute__((packed)) nx_int8_t;typedef int8_t __nesc_nxbase_nx_int8_t  ;
typedef struct { unsigned char nxdata[2]; } __attribute__((packed)) nx_int16_t;typedef int16_t __nesc_nxbase_nx_int16_t  ;
typedef struct { unsigned char nxdata[4]; } __attribute__((packed)) nx_int32_t;typedef int32_t __nesc_nxbase_nx_int32_t  ;
typedef struct { unsigned char nxdata[8]; } __attribute__((packed)) nx_int64_t;typedef int64_t __nesc_nxbase_nx_int64_t  ;
typedef struct { unsigned char nxdata[1]; } __attribute__((packed)) nx_uint8_t;typedef uint8_t __nesc_nxbase_nx_uint8_t  ;
typedef struct { unsigned char nxdata[2]; } __attribute__((packed)) nx_uint16_t;typedef uint16_t __nesc_nxbase_nx_uint16_t  ;
typedef struct { unsigned char nxdata[4]; } __attribute__((packed)) nx_uint32_t;typedef uint32_t __nesc_nxbase_nx_uint32_t  ;
typedef struct { unsigned char nxdata[8]; } __attribute__((packed)) nx_uint64_t;typedef uint64_t __nesc_nxbase_nx_uint64_t  ;


typedef struct { unsigned char nxdata[1]; } __attribute__((packed)) nxle_int8_t;typedef int8_t __nesc_nxbase_nxle_int8_t  ;
typedef struct { unsigned char nxdata[2]; } __attribute__((packed)) nxle_int16_t;typedef int16_t __nesc_nxbase_nxle_int16_t  ;
typedef struct { unsigned char nxdata[4]; } __attribute__((packed)) nxle_int32_t;typedef int32_t __nesc_nxbase_nxle_int32_t  ;
typedef struct { unsigned char nxdata[8]; } __attribute__((packed)) nxle_int64_t;typedef int64_t __nesc_nxbase_nxle_int64_t  ;
typedef struct { unsigned char nxdata[1]; } __attribute__((packed)) nxle_uint8_t;typedef uint8_t __nesc_nxbase_nxle_uint8_t  ;
typedef struct { unsigned char nxdata[2]; } __attribute__((packed)) nxle_uint16_t;typedef uint16_t __nesc_nxbase_nxle_uint16_t  ;
typedef struct { unsigned char nxdata[4]; } __attribute__((packed)) nxle_uint32_t;typedef uint32_t __nesc_nxbase_nxle_uint32_t  ;
typedef struct { unsigned char nxdata[8]; } __attribute__((packed)) nxle_uint64_t;typedef uint64_t __nesc_nxbase_nxle_uint64_t  ;
# 42 "/usr/include/string.h" 3
extern void *memcpy(void *__restrict __dest, const void *__restrict __src, 
size_t __n) __attribute((__leaf__)) __attribute((__nothrow__)) __attribute((__nonnull__(1, 2))) ;
#line 62
extern void *memset(void *__s, int __c, size_t __n) __attribute((__leaf__)) __attribute((__nothrow__)) __attribute((__nonnull__(1))) ;


extern int memcmp(const void *__s1, const void *__s2, size_t __n) 
__attribute((__leaf__)) __attribute((__nothrow__)) __attribute((__pure__)) __attribute((__nonnull__(1, 2))) ;
#line 125
extern char *strcpy(char *__restrict __dest, const char *__restrict __src) 
__attribute((__leaf__)) __attribute((__nothrow__)) __attribute((__nonnull__(1, 2))) ;
#line 140
extern int strcmp(const char *__s1, const char *__s2) 
__attribute((__leaf__)) __attribute((__nothrow__)) __attribute((__pure__)) __attribute((__nonnull__(1, 2))) ;
# 39 "/usr/include/xlocale.h" 3
#line 27
typedef struct __locale_struct {


  struct __locale_data *__locales[13];


  const unsigned short int *__ctype_b;
  const int *__ctype_tolower;
  const int *__ctype_toupper;


  const char *__names[13];
} *__locale_t;


typedef __locale_t locale_t;
# 258 "/usr/include/string.h"
extern char *strrchr(const char *__s, int __c) 
__attribute((__leaf__)) __attribute((__nothrow__)) __attribute((__pure__)) __attribute((__nonnull__(1))) ;
#line 394
extern size_t strlen(const char *__s) 
__attribute((__leaf__)) __attribute((__nothrow__)) __attribute((__pure__)) __attribute((__nonnull__(1))) ;
# 55 "/usr/include/x86_64-linux-gnu/bits/waitflags.h" 3
#line 50
typedef enum __nesc_unnamed4243 {

  P_ALL, 
  P_PID, 
  P_PGID
} idtype_t;
# 30 "/usr/include/x86_64-linux-gnu/bits/types.h" 3
typedef unsigned char __u_char;
typedef unsigned short int __u_short;
typedef unsigned int __u_int;
typedef unsigned long int __u_long;


typedef signed char __int8_t;
typedef unsigned char __uint8_t;
typedef signed short int __int16_t;
typedef unsigned short int __uint16_t;
typedef signed int __int32_t;
typedef unsigned int __uint32_t;

typedef signed long int __int64_t;
typedef unsigned long int __uint64_t;







typedef long int __quad_t;
typedef unsigned long int __u_quad_t;
#line 124
typedef unsigned long int __dev_t;
typedef unsigned int __uid_t;
typedef unsigned int __gid_t;
typedef unsigned long int __ino_t;
typedef unsigned long int __ino64_t;
typedef unsigned int __mode_t;
typedef unsigned long int __nlink_t;
typedef long int __off_t;
typedef long int __off64_t;
typedef int __pid_t;
typedef struct __nesc_unnamed4244 {
#line 134
  int __val[2];
} 
#line 134
__fsid_t;
typedef long int __clock_t;
typedef unsigned long int __rlim_t;
typedef unsigned long int __rlim64_t;
typedef unsigned int __id_t;
typedef long int __time_t;
typedef unsigned int __useconds_t;
typedef long int __suseconds_t;

typedef int __daddr_t;
typedef int __key_t;


typedef int __clockid_t;


typedef void *__timer_t;


typedef long int __blksize_t;




typedef long int __blkcnt_t;
typedef long int __blkcnt64_t;


typedef unsigned long int __fsblkcnt_t;
typedef unsigned long int __fsblkcnt64_t;


typedef unsigned long int __fsfilcnt_t;
typedef unsigned long int __fsfilcnt64_t;


typedef long int __fsword_t;

typedef long int __ssize_t;


typedef long int __syscall_slong_t;

typedef unsigned long int __syscall_ulong_t;



typedef __off64_t __loff_t;
typedef __quad_t *__qaddr_t;
typedef char *__caddr_t;


typedef long int __intptr_t;


typedef unsigned int __socklen_t;
# 66 "/usr/include/x86_64-linux-gnu/bits/waitstatus.h" 3
union wait {

  int w_status;
  struct __nesc_unnamed4245 {


    unsigned int __w_termsig : 7;
    unsigned int __w_coredump : 1;
    unsigned int __w_retcode : 8;
    unsigned int  : 16;
  } 






  __wait_terminated;
  struct __nesc_unnamed4246 {


    unsigned int __w_stopval : 8;
    unsigned int __w_stopsig : 8;
    unsigned int  : 16;
  } 





  __wait_stopped;
};
# 71 "/usr/include/stdlib.h" 3
#line 67
typedef union __nesc_unnamed4247 {

  union wait *__uptr;
  int *__iptr;
} __WAIT_STATUS __attribute((__transparent_union__)) ;
#line 101
#line 97
typedef struct __nesc_unnamed4248 {

  int quot;
  int rem;
} div_t;







#line 105
typedef struct __nesc_unnamed4249 {

  long int quot;
  long int rem;
} ldiv_t;







__extension__ 



#line 117
typedef struct __nesc_unnamed4250 {

  long long int quot;
  long long int rem;
} lldiv_t;
#line 157
__extension__ 
#line 194
__extension__ 




__extension__ 








__extension__ 




__extension__ 
# 33 "/usr/include/x86_64-linux-gnu/sys/types.h" 3
typedef __u_char u_char;
typedef __u_short u_short;
typedef __u_int u_int;
typedef __u_long u_long;
typedef __quad_t quad_t;
typedef __u_quad_t u_quad_t;
typedef __fsid_t fsid_t;




typedef __loff_t loff_t;



typedef __ino_t ino_t;
#line 60
typedef __dev_t dev_t;




typedef __gid_t gid_t;




typedef __mode_t mode_t;




typedef __nlink_t nlink_t;




typedef __uid_t uid_t;





typedef __off_t off_t;
#line 98
typedef __pid_t pid_t;





typedef __id_t id_t;




typedef __ssize_t ssize_t;





typedef __daddr_t daddr_t;
typedef __caddr_t caddr_t;





typedef __key_t key_t;
# 59 "/usr/include/time.h" 3
typedef __clock_t clock_t;
#line 75
typedef __time_t time_t;
#line 91
typedef __clockid_t clockid_t;
#line 103
typedef __timer_t timer_t;
# 150 "/usr/include/x86_64-linux-gnu/sys/types.h" 3
typedef unsigned long int ulong;
typedef unsigned short int ushort;
typedef unsigned int uint;
#line 200
typedef unsigned int u_int8_t __attribute((__mode__(__QI__))) ;
typedef unsigned int u_int16_t __attribute((__mode__(__HI__))) ;
typedef unsigned int u_int32_t __attribute((__mode__(__SI__))) ;
typedef unsigned int u_int64_t __attribute((__mode__(__DI__))) ;

typedef int register_t __attribute((__mode__(__word__))) ;
# 22 "/usr/include/x86_64-linux-gnu/bits/sigset.h" 3
typedef int __sig_atomic_t;







#line 27
typedef struct __nesc_unnamed4251 {

  unsigned long int __val[1024 / (8 * sizeof(unsigned long int ))];
} __sigset_t;
# 37 "/usr/include/x86_64-linux-gnu/sys/select.h" 3
typedef __sigset_t sigset_t;
# 120 "/usr/include/time.h" 3
struct timespec {

  __time_t tv_sec;
  __syscall_slong_t tv_nsec;
};
# 30 "/usr/include/x86_64-linux-gnu/bits/time.h" 3
struct timeval {

  __time_t tv_sec;
  __suseconds_t tv_usec;
};
# 48 "/usr/include/x86_64-linux-gnu/sys/select.h" 3
typedef __suseconds_t suseconds_t;





typedef long int __fd_mask;
#line 75
#line 64
typedef struct __nesc_unnamed4252 {







  __fd_mask __fds_bits[1024 / (8 * (int )sizeof(__fd_mask ))];
} 

fd_set;






typedef __fd_mask fd_mask;
# 26 "/usr/include/x86_64-linux-gnu/sys/sysmacros.h" 3
__extension__ 


__extension__ 


__extension__ 
# 228 "/usr/include/x86_64-linux-gnu/sys/types.h" 3
typedef __blksize_t blksize_t;






typedef __blkcnt_t blkcnt_t;



typedef __fsblkcnt_t fsblkcnt_t;



typedef __fsfilcnt_t fsfilcnt_t;
# 60 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 3
typedef unsigned long int pthread_t;


union pthread_attr_t {

  char __size[56];
  long int __align;
};

typedef union pthread_attr_t pthread_attr_t;









#line 75
typedef struct __pthread_internal_list {

  struct __pthread_internal_list *__prev;
  struct __pthread_internal_list *__next;
} __pthread_list_t;
#line 128
#line 90
typedef union __nesc_unnamed4253 {

  struct __pthread_mutex_s {

    int __lock;
    unsigned int __count;
    int __owner;

    unsigned int __nusers;



    int __kind;

    short __spins;
    short __elision;
    __pthread_list_t __list;
  } 
#line 125
  __data;
  char __size[40];
  long int __align;
} pthread_mutex_t;





#line 130
typedef union __nesc_unnamed4254 {

  char __size[4];
  int __align;
} pthread_mutexattr_t;
#line 154
#line 139
typedef union __nesc_unnamed4255 {

  struct __nesc_unnamed4256 {

    int __lock;
    unsigned int __futex;
    __extension__ unsigned long long int __total_seq;
    __extension__ unsigned long long int __wakeup_seq;
    __extension__ unsigned long long int __woken_seq;
    void *__mutex;
    unsigned int __nwaiters;
    unsigned int __broadcast_seq;
  } __data;
  char __size[48];
  __extension__ long long int __align;
} pthread_cond_t;





#line 156
typedef union __nesc_unnamed4257 {

  char __size[4];
  int __align;
} pthread_condattr_t;



typedef unsigned int pthread_key_t;



typedef int pthread_once_t;
#line 222
#line 174
typedef union __nesc_unnamed4258 {


  struct __nesc_unnamed4259 {

    int __lock;
    unsigned int __nr_readers;
    unsigned int __readers_wakeup;
    unsigned int __writer_wakeup;
    unsigned int __nr_readers_queued;
    unsigned int __nr_writers_queued;
    int __writer;
    int __shared;
    signed char __rwelision;




    unsigned char __pad1[7];


    unsigned long int __pad2;


    unsigned int __flags;
  } 
  __data;
#line 220
  char __size[56];
  long int __align;
} pthread_rwlock_t;





#line 224
typedef union __nesc_unnamed4260 {

  char __size[8];
  long int __align;
} pthread_rwlockattr_t;





typedef volatile int pthread_spinlock_t;








#line 239
typedef union __nesc_unnamed4261 {

  char __size[32];
  long int __align;
} pthread_barrier_t;





#line 245
typedef union __nesc_unnamed4262 {

  char __size[4];
  int __align;
} pthread_barrierattr_t;
# 343 "/usr/include/stdlib.h" 3
struct random_data {

  int32_t *fptr;
  int32_t *rptr;
  int32_t *state;
  int rand_type;
  int rand_deg;
  int rand_sep;
  int32_t *end_ptr;
};
#line 412
struct drand48_data {

  unsigned short int __x[3];
  unsigned short int __old_x[3];
  unsigned short int __c;
  unsigned short int __init;
  __extension__ unsigned long long int __a;
};
#line 466
extern void *malloc(size_t __size) __attribute((__leaf__)) __attribute((__nothrow__)) __attribute((__malloc__)) ;
#line 483
extern void free(void *__ptr) __attribute((__leaf__)) __attribute((__nothrow__)) ;
#line 741
typedef int (*__compar_fn_t)(const void *arg_0x7f65b6c8ecf8, const void *arg_0x7f65b6c8d020);
#line 779
__extension__ 
#line 796
__extension__ 
# 28 "/usr/include/x86_64-linux-gnu/bits/mathdef.h" 3
typedef float float_t;
typedef double double_t;
# 109 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern double log(double __x) __attribute((__leaf__)) __attribute((__nothrow__)) ;
#line 153
extern double pow(double __x, double __y) __attribute((__leaf__)) __attribute((__nothrow__)) ;


extern double sqrt(double __x) __attribute((__leaf__)) __attribute((__nothrow__)) ;
#line 181
extern double fabs(double __x) __attribute((__leaf__)) __attribute((__nothrow__)) __attribute((const)) ;


extern double floor(double __x) __attribute((__leaf__)) __attribute((__nothrow__)) __attribute((const)) ;
#line 260
extern double erfc(double arg_0x7f65b6c0d618) __attribute((__leaf__)) __attribute((__nothrow__)) ;
#line 336
__extension__ 





__extension__ 
#line 336
__extension__ 





__extension__ 
#line 336
__extension__ 





__extension__ 
# 209 "/usr/include/math.h" 3
enum __nesc_unnamed4263 {

  FP_NAN = 

  0, 
  FP_INFINITE = 

  1, 
  FP_ZERO = 

  2, 
  FP_SUBNORMAL = 

  3, 
  FP_NORMAL = 

  4
};
#line 354
#line 347
typedef enum __nesc_unnamed4264 {

  _IEEE_ = -1, 
  _SVID_, 
  _XOPEN_, 
  _POSIX_, 
  _ISOC_
} _LIB_VERSION_TYPE;
#line 372
struct exception {


  int type;
  char *name;
  double arg1;
  double arg2;
  double retval;
};
# 46 "/usr/include/ctype.h" 3
enum __nesc_unnamed4265 {

  _ISupper = 0 < 8 ? (1 << 0) << 8 : (1 << 0) >> 8, 
  _ISlower = 1 < 8 ? (1 << 1) << 8 : (1 << 1) >> 8, 
  _ISalpha = 2 < 8 ? (1 << 2) << 8 : (1 << 2) >> 8, 
  _ISdigit = 3 < 8 ? (1 << 3) << 8 : (1 << 3) >> 8, 
  _ISxdigit = 4 < 8 ? (1 << 4) << 8 : (1 << 4) >> 8, 
  _ISspace = 5 < 8 ? (1 << 5) << 8 : (1 << 5) >> 8, 
  _ISprint = 6 < 8 ? (1 << 6) << 8 : (1 << 6) >> 8, 
  _ISgraph = 7 < 8 ? (1 << 7) << 8 : (1 << 7) >> 8, 
  _ISblank = 8 < 8 ? (1 << 8) << 8 : (1 << 8) >> 8, 
  _IScntrl = 9 < 8 ? (1 << 9) << 8 : (1 << 9) >> 8, 
  _ISpunct = 10 < 8 ? (1 << 10) << 8 : (1 << 10) >> 8, 
  _ISalnum = 11 < 8 ? (1 << 11) << 8 : (1 << 11) >> 8
};
# 44 "/usr/include/stdio.h" 3
struct _IO_FILE;



typedef struct _IO_FILE FILE;
#line 64
typedef struct _IO_FILE __FILE;
# 94 "/usr/include/wchar.h" 3
#line 82
typedef struct __nesc_unnamed4266 {

  int __count;
  union __nesc_unnamed4267 {


    unsigned int __wch;



    char __wchb[4];
  } __value;
} __mbstate_t;
# 25 "/usr/include/_G_config.h" 3
#line 21
typedef struct __nesc_unnamed4268 {

  __off_t __pos;
  __mbstate_t __state;
} _G_fpos_t;




#line 26
typedef struct __nesc_unnamed4269 {

  __off64_t __pos;
  __mbstate_t __state;
} _G_fpos64_t;
# 40 "/usr/lib/gcc/x86_64-linux-gnu/4.8/include/stdarg.h" 3
typedef __builtin_va_list __gnuc_va_list;
# 144 "/usr/include/libio.h" 3
struct _IO_jump_t;
#line 144
struct _IO_FILE;





typedef void _IO_lock_t;





struct _IO_marker {
  struct _IO_marker *_next;
  struct _IO_FILE *_sbuf;



  int _pos;
};
#line 176
enum __codecvt_result {

  __codecvt_ok, 
  __codecvt_partial, 
  __codecvt_error, 
  __codecvt_noconv
};
#line 241
struct _IO_FILE {
  int _flags;




  char *_IO_read_ptr;
  char *_IO_read_end;
  char *_IO_read_base;
  char *_IO_write_base;
  char *_IO_write_ptr;
  char *_IO_write_end;
  char *_IO_buf_base;
  char *_IO_buf_end;

  char *_IO_save_base;
  char *_IO_backup_base;
  char *_IO_save_end;

  struct _IO_marker *_markers;

  struct _IO_FILE *_chain;

  int _fileno;



  int _flags2;

  __off_t _old_offset;



  unsigned short _cur_column;
  signed char _vtable_offset;
  char _shortbuf[1];



  _IO_lock_t *_lock;








  __off64_t _offset;







  void *__pad1;
  void *__pad2;
  void *__pad3;
  void *__pad4;

  size_t __pad5;
  int _mode;

  char _unused2[15 * sizeof(int ) - 4 * sizeof(void *) - sizeof(size_t )];
};



typedef struct _IO_FILE _IO_FILE;


struct _IO_FILE_plus;

struct _IO_FILE_plus;
struct _IO_FILE_plus;
struct _IO_FILE_plus;
#line 333
typedef __ssize_t __io_read_fn(void *__cookie, char *__buf, size_t __nbytes);







typedef __ssize_t __io_write_fn(void *__cookie, const char *__buf, 
size_t __n);







typedef int __io_seek_fn(void *__cookie, __off64_t *__pos, int __w);


typedef int __io_close_fn(void *__cookie);
# 79 "/usr/include/stdio.h" 3
typedef __gnuc_va_list va_list;
#line 110
typedef _G_fpos_t fpos_t;
#line 168
struct _IO_FILE;
struct _IO_FILE;
struct _IO_FILE;
#line 242
extern int fflush(FILE *__stream);
#line 306
extern FILE *fdopen(int __fd, const char *__modes) __attribute((__leaf__)) __attribute((__nothrow__)) ;
#line 356
extern int fprintf(FILE *__restrict __stream, 
const char *__restrict __format, ...);




extern int printf(const char *__restrict __format, ...);








extern int vfprintf(FILE *__restrict __s, const char *__restrict __format, 
__gnuc_va_list __arg);
#line 386
extern int snprintf(char *__restrict __s, size_t __maxlen, 
const char *__restrict __format, ...) 
__attribute((__nothrow__)) __attribute((__format__(__printf__, 3, 4))) ;
#line 858
extern int fileno(FILE *__stream) __attribute((__leaf__)) __attribute((__nothrow__)) ;
# 65 "/home/tinyos/local/src/tinyos-2x/tos/lib/tossim/tos.h"
typedef uint8_t bool;










enum __nesc_unnamed4270 {
#line 76
  FALSE = 0, TRUE = 1
};
extern uint16_t TOS_NODE_ID;
# 51 "/home/tinyos/local/src/tinyos-2x/tos/lib/tossim/sim_tossim.h"
typedef long long int sim_time_t;

void sim_init();

void sim_end();

void sim_random_seed(int seed);
int sim_random();

sim_time_t sim_time();
void sim_set_time(sim_time_t time);
sim_time_t sim_ticks_per_sec();

unsigned long sim_node();
void sim_set_node(unsigned long node);

int sim_print_time(char *buf, int bufLen, sim_time_t time);
int sim_print_now(char *buf, int bufLen);
char *sim_time_string();

void sim_add_channel(char *channel, FILE *file);
bool sim_remove_channel(char *channel, FILE *file);

bool sim_run_next_event();
# 50 "/home/tinyos/local/src/tinyos-2x/tos/lib/tossim/sim_event_queue.h"
struct sim_event;
typedef struct sim_event sim_event_t;

struct sim_event {
  sim_time_t time;
  unsigned long mote;
  bool force;

  bool cancelled;
  void *data;

  void (*handle)(sim_event_t *e);
  void (*cleanup)(sim_event_t *e);
};

static sim_event_t *sim_queue_allocate_event();

void sim_queue_init();
void sim_queue_insert(sim_event_t *event);
bool sim_queue_is_empty();
long long int sim_queue_peek_time();
sim_event_t *sim_queue_pop();

void sim_queue_cleanup_none(sim_event_t *e);
void sim_queue_cleanup_event(sim_event_t *e);
void sim_queue_cleanup_data(sim_event_t *e);
void sim_queue_cleanup_total(sim_event_t *e);
# 53 "/home/tinyos/local/src/tinyos-2x/tos/lib/tossim/sim_mote.h"
long long int sim_mote_euid(int mote);
void sim_mote_set_euid(int mote, long long int euid);

long long int sim_mote_start_time(int mote);
void sim_mote_set_start_time(int mote, long long int t);

bool sim_mote_is_on(int mote);
void sim_mote_turn_on(int mote);
void sim_mote_turn_off(int mote);
int sim_mote_get_variable_info(int mote, char *name, void **addr, size_t *len);
void sim_mote_enqueue_boot_event(int mote);

bool sim_mote_set_radio_channel(int mote, uint8_t newRadioChannel);
uint8_t sim_mote_get_radio_channel(int mote);
# 65 "/home/tinyos/local/src/tinyos-2x/tos/lib/tossim/sim_log.h"
static inline void sim_log_init();
static inline void sim_log_add_channel(char *output, FILE *file);
static inline bool sim_log_remove_channel(char *output, FILE *file);
static void sim_log_commit_change();

static void sim_log_debug(uint16_t id, char *string, const char *format, ...);
static void sim_log_error(uint16_t id, char *string, const char *format, ...);
static void sim_log_debug_clear(uint16_t id, char *string, const char *format, ...);
# 97 "/home/tinyos/local/src/tinyos-2x/tos/lib/tossim/tos.h"
struct __nesc_attr_atmostonce {
};
#line 98
struct __nesc_attr_atleastonce {
};
#line 99
struct __nesc_attr_exactlyonce {
};
# 9 "/home/tinyos/local/src/tinyos-2x/tos/lib/tossim/hashtable.h"
struct hashtable;
typedef struct hashtable hashtable_t;
#line 78
struct hashtable *
create_hashtable(unsigned int minsize, 
unsigned int (*hashfunction)(void *arg_0x7f65b69c4020), 
int (*key_eq_fn)(void *arg_0x7f65b69c4798, void *arg_0x7f65b69c4a38));
#line 103
#line 102
int 
hashtable_insert(struct hashtable *h, void *k, void *v);
#line 120
void *
hashtable_search(struct hashtable *h, void *k);
# 47 "/home/tinyos/local/src/tinyos-2x/tos/lib/tossim/sim_log.c"
enum __nesc_unnamed4271 {
  DEFAULT_CHANNEL_SIZE = 8
};




#line 51
typedef struct sim_log_output {
  int num;
  FILE **files;
} sim_log_output_t;






#line 56
typedef struct sim_log_channel {
  const char *name;
  int numOutputs;
  int size;
  FILE **outputs;
} sim_log_channel_t;

enum __nesc_unnamed4272 {
  SIM_LOG_OUTPUT_COUNT = 154U
};

sim_log_output_t outputs[SIM_LOG_OUTPUT_COUNT];
struct hashtable *channelTable = (void *)0;


inline static unsigned int sim_log_hash(void *key);
inline static int sim_log_eq(void *key1, void *key2);
#line 84
static void fillInOutput(int id, char *name);
#line 159
static inline void sim_log_init();
#line 172
static inline void sim_log_add_channel(char *name, FILE *file);
#line 212
static inline bool sim_log_remove_channel(char *output, FILE *file);
#line 234
static void sim_log_commit_change();
#line 246
static void sim_log_debug(uint16_t id, char *string, const char *format, ...);
#line 261
static void sim_log_error(uint16_t id, char *string, const char *format, ...);
#line 276
static void sim_log_debug_clear(uint16_t id, char *string, const char *format, ...);
#line 306
inline static unsigned int sim_log_hash(void *key);










inline static int sim_log_eq(void *key1, void *key2);
# 65 "/home/tinyos/local/src/tinyos-2x/tos/lib/tossim/heap.h"
#line 61
typedef struct heap {
  int size;
  void *data;
  int private_size;
} heap_t;

static inline void init_heap(heap_t *heap);

static inline int heap_is_empty(heap_t *heap);

static inline long long int heap_get_min_key(heap_t *heap);

static void *heap_pop_min_data(heap_t *heap, long long int *key);
static inline void heap_insert(heap_t *heap, void *data, long long int key);
# 58 "/home/tinyos/local/src/tinyos-2x/tos/lib/tossim/heap.c"
const int STARTING_SIZE = 511;






#line 62
typedef struct node {
  void *data;
  long long int key;
} node_t;

static void down_heap(heap_t *heap, int findex);
static void up_heap(heap_t *heap, int findex);
static void swap(node_t *first, node_t *second);










static inline void init_heap(heap_t *heap);









static inline int is_empty(heap_t *heap);



static inline int heap_is_empty(heap_t *heap);



static inline long long int heap_get_min_key(heap_t *heap);
#line 116
static void *heap_pop_min_data(heap_t *heap, long long int *key);
#line 132
static inline void expand_heap(heap_t *heap);
#line 146
static inline void heap_insert(heap_t *heap, void *data, long long int key);
#line 160
static void swap(node_t *first, node_t *second);
#line 173
static void down_heap(heap_t *heap, int findex);
#line 199
static void up_heap(heap_t *heap, int findex);
# 44 "/home/tinyos/local/src/tinyos-2x/tos/lib/tossim/sim_event_queue.c"
static heap_t eventHeap;

void sim_queue_init()   ;



void sim_queue_insert(sim_event_t *event)   ;




sim_event_t *sim_queue_pop()   ;




bool sim_queue_is_empty()   ;



long long int sim_queue_peek_time()   ;









void sim_queue_cleanup_none(sim_event_t *event)   ;




void sim_queue_cleanup_event(sim_event_t *event)   ;




void sim_queue_cleanup_data(sim_event_t *event)   ;





void sim_queue_cleanup_total(sim_event_t *event)   ;






static sim_event_t *sim_queue_allocate_event();
# 55 "/usr/include/x86_64-linux-gnu/sys/time.h" 3
struct timezone {

  int tz_minuteswest;
  int tz_dsttime;
};

typedef struct timezone *__restrict __timezone_ptr_t;









extern int gettimeofday(struct timeval *__restrict __tv, 
__timezone_ptr_t __tz) __attribute((__leaf__)) __attribute((__nothrow__)) __attribute((__nonnull__(1))) ;
#line 91
enum __itimer_which {


  ITIMER_REAL = 0, 


  ITIMER_VIRTUAL = 1, 



  ITIMER_PROF = 2
};




struct itimerval {


  struct timeval it_interval;

  struct timeval it_value;
};






typedef int __itimer_which_t;
# 51 "/home/tinyos/local/src/tinyos-2x/tos/lib/tossim/sim_noise.h"
enum __nesc_unnamed4273 {
  NOISE_MIN = -115, 
  NOISE_MAX = -5, 
  NOISE_MIN_QUANTIZE = -115, 
  NOISE_QUANTIZE_INTERVAL = 5, 
  NOISE_BIN_SIZE = (NOISE_MAX - NOISE_MIN) / NOISE_QUANTIZE_INTERVAL + 1, 
  NOISE_HISTORY = 20, 
  NOISE_DEFAULT_ELEMENT_SIZE = 8, 
  NOISE_HASHTABLE_SIZE = 128, 
  NOISE_MIN_TRACE = 128, 
  NOISE_NUM_VALUES = NOISE_MAX - NOISE_MIN + 1
};








#line 64
typedef struct sim_noise_hash_t {
  char key[NOISE_HISTORY];
  int numElements;
  int size;
  char *elements;
  char flag;
  float dist[NOISE_NUM_VALUES];
} sim_noise_hash_t;
#line 84
#line 73
typedef struct sim_noise_node_t {

  char *key[16];
  char freqKey[NOISE_HISTORY];
  char lastNoiseVal[16];
  uint32_t noiseGenTime[16];
  struct hashtable *noiseTable;
  char *noiseTrace;
  uint32_t noiseTraceLen;
  uint32_t noiseTraceIndex;
  bool generated;
} sim_noise_node_t;

void sim_noise_init();

char sim_noise_generate(uint16_t node_id, uint8_t channel, uint32_t cur_t);
void sim_noise_trace_add(uint16_t node_id, char val);
void sim_noise_create_model(uint16_t node_id);
# 51 "/home/tinyos/local/src/tinyos-2x/tos/lib/tossim/sim_tossim.c"
static sim_time_t sim_ticks;
static unsigned long current_node;
static int sim_seed;

static int __nesc_nido_resolve(int mote, char *varname, uintptr_t *addr, size_t *size);

void sim_init()   ;
#line 80
void sim_end()   ;





int sim_random()   ;
#line 102
void sim_random_seed(int seed)   ;







sim_time_t sim_time()   ;


void sim_set_time(sim_time_t t)   ;



sim_time_t sim_ticks_per_sec()   ;



unsigned long sim_node()   ;


void sim_set_node(unsigned long node)   ;




bool sim_run_next_event()   ;
#line 156
int sim_print_time(char *buf, int len, sim_time_t ftime)   ;
#line 179
int sim_print_now(char *buf, int len)   ;



char simTimeBuf[128];
char *sim_time_string()   ;




void sim_add_channel(char *channel, FILE *file)   ;



bool sim_remove_channel(char *channel, FILE *file)   ;
# 99 "/home/tinyos/local/src/tinyos-2x/tos/lib/tossim/sim_csma.h"
int sim_csma_init_high();
int sim_csma_init_low();
int sim_csma_high();
int sim_csma_low();
int sim_csma_symbols_per_sec();
int sim_csma_bits_per_symbol();
int sim_csma_preamble_length();
int sim_csma_exponent_base();
int sim_csma_max_iterations();
int sim_csma_min_free_samples();
int sim_csma_rxtx_delay();
int sim_csma_ack_time();

void sim_csma_set_init_high(int val);
void sim_csma_set_init_low(int val);
void sim_csma_set_high(int val);
void sim_csma_set_low(int val);
void sim_csma_set_symbols_per_sec(int val);
void sim_csma_set_bits_per_symbol(int val);
void sim_csma_set_preamble_length(int val);
void sim_csma_set_exponent_base(int val);
void sim_csma_set_max_iterations(int val);
void sim_csma_set_min_free_samples(int val);
void sim_csma_set_rxtx_delay(int val);
void sim_csma_set_ack_time(int val);
# 44 "/home/tinyos/local/src/tinyos-2x/tos/lib/tossim/sim_csma.c"
int csmaInitHigh = 640;
int csmaInitLow = 20;
int csmaHigh = 160;
int csmaLow = 20;
int csmaSymbolsPerSec = 65536;
int csmaBitsPerSymbol = 4;
int csmaPreambleLength = 12;
int csmaExponentBase = 1;
int csmaMaxIterations = 0;
int csmaMinFreeSamples = 1;
int csmaRxTxDelay = 11;
int csmaAckTime = 34;

int sim_csma_init_high()   ;


int sim_csma_init_low()   ;


int sim_csma_high()   ;


int sim_csma_low()   ;


int sim_csma_symbols_per_sec()   ;


int sim_csma_bits_per_symbol()   ;


int sim_csma_preamble_length()   ;


int sim_csma_exponent_base()   ;


int sim_csma_max_iterations()   ;


int sim_csma_min_free_samples()   ;


int sim_csma_rxtx_delay()   ;


int sim_csma_ack_time()   ;





void sim_csma_set_init_high(int val)   ;


void sim_csma_set_init_low(int val)   ;


void sim_csma_set_high(int val)   ;


void sim_csma_set_low(int val)   ;


void sim_csma_set_symbols_per_sec(int val)   ;


void sim_csma_set_bits_per_symbol(int val)   ;


void sim_csma_set_preamble_length(int val)   ;


void sim_csma_set_exponent_base(int val)   ;


void sim_csma_set_max_iterations(int val)   ;


void sim_csma_set_min_free_samples(int val)   ;


void sim_csma_set_rxtx_delay(int val)   ;


void sim_csma_set_ack_time(int val)   ;
# 57 "/home/tinyos/local/src/tinyos-2x/tos/lib/tossim/sim_gain.h"
#line 53
typedef struct gain_entry {
  int mote;
  double gain;
  struct gain_entry *next;
} gain_entry_t;

void sim_gain_add(int src, int dest, double gain);
double sim_gain_value(int src, int dest);
bool sim_gain_connected(int src, int dest);
void sim_gain_remove(int src, int dest);
void sim_gain_set_noise_floor(int node, double mean, double range);
double sim_gain_sample_noise(int node);



void sim_gain_set_sensitivity(double value);
double sim_gain_sensitivity();

gain_entry_t *sim_gain_first(int src);
gain_entry_t *sim_gain_next(gain_entry_t *e);
# 6 "/home/tinyos/local/src/tinyos-2x/tos/lib/tossim/sim_gain.c"
#line 3
typedef struct sim_gain_noise {
  double mean;
  double range;
} sim_gain_noise_t;


gain_entry_t *connectivity[1000 + 1];
sim_gain_noise_t localNoise[1000 + 1];
double sensitivity = 4.0;

static inline gain_entry_t *sim_gain_allocate_link(int mote);
void sim_gain_deallocate_link(gain_entry_t *linkToDelete);

gain_entry_t *sim_gain_first(int src)   ;






gain_entry_t *sim_gain_next(gain_entry_t *currentLink)   ;



void sim_gain_add(int src, int dest, double gain)   ;
#line 55
double sim_gain_value(int src, int dest)   ;
#line 73
bool sim_gain_connected(int src, int dest)   ;
#line 89
void sim_gain_remove(int src, int dest)   ;
#line 124
void sim_gain_set_noise_floor(int node, double mean, double range)   ;
#line 148
double sim_gain_sample_noise(int node)   ;
#line 161
static inline gain_entry_t *sim_gain_allocate_link(int mote);







void sim_gain_deallocate_link(gain_entry_t *linkToDelete)   ;



void sim_gain_set_sensitivity(double s)   ;



double sim_gain_sensitivity()   ;
# 39 "/home/tinyos/local/src/tinyos-2x/tos/lib/tossim/randomlib.c"
static double randU[97];
#line 39
static double randC;
#line 39
static double randCD;
#line 39
static double randCM;
static int i97;
#line 40
static int j97;
static int test = FALSE;
#line 55
static inline void RandomInitialise(int ij, int kl);
#line 103
static double RandomUniform(void );
# 133 "/usr/include/time.h" 3
struct tm {

  int tm_sec;
  int tm_min;
  int tm_hour;
  int tm_mday;
  int tm_mon;
  int tm_year;
  int tm_wday;
  int tm_yday;
  int tm_isdst;


  long int tm_gmtoff;
  const char *tm_zone;
};
#line 161
struct itimerspec {

  struct timespec it_interval;
  struct timespec it_value;
};


struct sigevent;
# 239 "/usr/include/time.h"
struct tm;



struct tm;





struct tm;




struct tm;
# 46 "/home/tinyos/local/src/tinyos-2x/tos/lib/tossim/randomlib.h"
static inline void RandomInitialise(int arg_0x7f65b67c0610, int arg_0x7f65b67c0878);
static double RandomUniform(void );
# 51 "/home/tinyos/local/src/tinyos-2x/tos/lib/tossim/sim_noise.c"
int numCase1 = 0;
int numCase2 = 0;
int numTotal = 0;


uint32_t FreqKeyNum = 0;

sim_noise_node_t noiseData[1000];

inline static unsigned int sim_noise_hash(void *key);
inline static int sim_noise_eq(void *key1, void *key2);

void makeNoiseModel(uint16_t node_id);
void makePmfDistr(uint16_t node_id);
uint8_t search_bin_num(char noise);

void sim_noise_init()   ;
#line 88
void sim_noise_create_model(uint16_t node_id)   ;
#line 107
void sim_noise_trace_add(uint16_t node_id, char noiseVal)   ;
#line 123
uint8_t search_bin_num(char noise)   ;









char search_noise_from_bin_num(int i)   ;






inline static unsigned int sim_noise_hash(void *key);









inline static int sim_noise_eq(void *key1, void *key2);



void sim_noise_add(uint16_t node_id, char noise)   ;
#line 206
void sim_noise_dist(uint16_t node_id)   ;
#line 259
void arrangeKey(uint16_t node_id, uint8_t channel)   ;










void makePmfDistr(uint16_t node_id)   ;
#line 298
int dummy;
static inline void sim_noise_alarm();



char sim_noise_gen(uint16_t node_id, uint8_t channel)   ;
#line 380
char sim_noise_generate(uint16_t node_id, uint8_t channel, uint32_t cur_t)   ;
#line 436
void makeNoiseModel(uint16_t node_id)   ;
# 59 "/home/tinyos/local/src/tinyos-2x/tos/lib/tossim/sim_packet.h"
typedef struct sim_packet {
} 
#line 59
sim_packet_t;

void sim_packet_set_source(sim_packet_t *msg, uint16_t src);
uint16_t sim_packet_source(sim_packet_t *msg);

void sim_packet_set_destination(sim_packet_t *msg, uint16_t dest);
uint16_t sim_packet_destination(sim_packet_t *msg);

void sim_packet_set_length(sim_packet_t *msg, uint8_t len);
uint16_t sim_packet_length(sim_packet_t *msg);

void sim_packet_set_type(sim_packet_t *msg, uint8_t type);
uint8_t sim_packet_type(sim_packet_t *msg);

uint8_t *sim_packet_data(sim_packet_t *msg);
void sim_packet_set_strength(sim_packet_t *msg, uint16_t str);

void sim_packet_deliver(int node, sim_packet_t *msg, sim_time_t t);
uint8_t sim_packet_max_length(sim_packet_t *msg);

sim_packet_t *sim_packet_allocate();
void sim_packet_free(sim_packet_t *m);

void sim_packet_set_dsn(sim_packet_t *msg, uint8_t dsn);
uint8_t sim_packet_dsn(sim_packet_t *msg);
# 6 "/home/tinyos/local/src/tinyos-2x/tos/types/AM.h"
typedef nx_uint8_t nx_am_id_t;
typedef nx_uint8_t nx_am_group_t;
typedef nx_uint16_t nx_am_addr_t;

typedef uint8_t am_id_t;
typedef uint8_t am_group_t;
typedef uint16_t am_addr_t;

enum __nesc_unnamed4274 {
  AM_BROADCAST_ADDR = 0xffff
};









enum __nesc_unnamed4275 {
  TOS_AM_GROUP = 0x22, 
  TOS_AM_ADDRESS = 1
};
# 18 "/home/tinyos/local/src/tinyos-2x/tos/lib/tossim/TossimRadioMsg.h"
#line 6
typedef nx_struct tossim_header {
  nx_uint8_t length;
  nx_uint16_t fcf;
  nx_uint8_t dsn;
  nx_am_addr_t dest;
  nx_am_addr_t src;
  nx_am_group_t group;


  nxle_uint8_t network;

  nx_am_id_t type;
} __attribute__((packed)) tossim_header_t;



#line 20
typedef nx_struct tossim_footer {
  nxle_uint16_t crc;
} __attribute__((packed)) tossim_footer_t;
#line 36
#line 24
typedef nx_struct tossim_metadata {
  nx_int8_t strength;
  nx_uint8_t lqi;
  nx_uint8_t tx_power;
  nx_uint8_t crc;
  nx_uint8_t ack;
  nx_uint16_t time;
} __attribute__((packed)) 




tossim_metadata_t;
# 83 "/home/tinyos/local/src/tinyos-2x/tos/lib/serial/Serial.h"
typedef uint8_t uart_id_t;



enum __nesc_unnamed4276 {
  HDLC_FLAG_BYTE = 0x7e, 
  HDLC_CTLESC_BYTE = 0x7d
};



enum __nesc_unnamed4277 {
  TOS_SERIAL_ACTIVE_MESSAGE_ID = 0, 
  TOS_SERIAL_CC1000_ID = 1, 
  TOS_SERIAL_802_15_4_ID = 2, 
  TOS_SERIAL_UNKNOWN_ID = 255
};


enum __nesc_unnamed4278 {
  SERIAL_PROTO_ACK = 67, 
  SERIAL_PROTO_PACKET_ACK = 68, 
  SERIAL_PROTO_PACKET_NOACK = 69, 
  SERIAL_PROTO_PACKET_UNKNOWN = 255
};
#line 121
#line 109
typedef struct radio_stats {
  uint8_t version;
  uint8_t flags;
  uint8_t reserved;
  uint8_t platform;
  uint16_t MTU;
  uint16_t radio_crc_fail;
  uint16_t radio_queue_drops;
  uint16_t serial_crc_fail;
  uint16_t serial_tx_fail;
  uint16_t serial_short_packets;
  uint16_t serial_proto_drops;
} radio_stats_t;







#line 123
typedef nx_struct serial_header {
  nx_am_addr_t dest;
  nx_am_addr_t src;
  nx_uint8_t length;
  nx_am_group_t group;
  nx_am_id_t type;
} __attribute__((packed)) serial_header_t;




#line 131
typedef nx_struct serial_packet {
  serial_header_t header;
  nx_uint8_t data[];
} __attribute__((packed)) serial_packet_t;



#line 136
typedef nx_struct serial_metadata {
  nx_uint8_t ack;
} __attribute__((packed)) serial_metadata_t;
# 53 "/home/tinyos/local/src/tinyos-2x/tos/lib/tossim/platform_message.h"
#line 50
typedef union message_header {
  tossim_header_t tossim;
  serial_header_t serial;
} message_header_t;



#line 55
typedef union message_footer {
  tossim_footer_t tossim;
} message_footer_t;



#line 59
typedef union message_metadata {
  tossim_metadata_t tossim;
} message_metadata_t;
# 19 "/home/tinyos/local/src/tinyos-2x/tos/types/message.h"
#line 14
typedef nx_struct message_t {
  nx_uint8_t header[sizeof(message_header_t )];
  nx_uint8_t data[70];
  nx_uint8_t footer[sizeof(message_footer_t )];
  nx_uint8_t metadata[sizeof(message_metadata_t )];
} __attribute__((packed)) message_t;
# 48 "/home/tinyos/local/src/tinyos-2x/tos/lib/tossim/sim_packet.c"
void active_message_deliver(int node, message_t *m, sim_time_t t);

inline static tossim_header_t *getHeader(message_t *msg);



void sim_packet_set_source(sim_packet_t *msg, uint16_t src)   ;




uint16_t sim_packet_source(sim_packet_t *msg)   ;




void sim_packet_set_destination(sim_packet_t *msg, uint16_t dest)   ;




uint16_t sim_packet_destination(sim_packet_t *msg)   ;




void sim_packet_set_length(sim_packet_t *msg, uint8_t length)   ;



uint16_t sim_packet_length(sim_packet_t *msg)   ;




void sim_packet_set_type(sim_packet_t *msg, uint8_t type)   ;




uint8_t sim_packet_type(sim_packet_t *msg)   ;




uint8_t *sim_packet_data(sim_packet_t *p)   ;



void sim_packet_set_strength(sim_packet_t *p, uint16_t str)   ;




void sim_packet_deliver(int node, sim_packet_t *msg, sim_time_t t)   ;







uint8_t sim_packet_max_length(sim_packet_t *msg)   ;



sim_packet_t *sim_packet_allocate()   ;



void sim_packet_free(sim_packet_t *p)   ;




void sim_packet_set_dsn(sim_packet_t *msg, uint8_t dsn)   ;




uint8_t sim_packet_dsn(sim_packet_t *msg)   ;
# 51 "/home/tinyos/local/src/tinyos-2x/tos/types/TinyError.h"
enum __nesc_unnamed4279 {
  SUCCESS = 0, 
  FAIL = 1, 
  ESIZE = 2, 
  ECANCEL = 3, 
  EOFF = 4, 
  EBUSY = 5, 
  EINVAL = 6, 
  ERETRY = 7, 
  ERESERVE = 8, 
  EALREADY = 9, 
  ENOMEM = 10, 
  ENOACK = 11, 
  ETIMEOUT = 12, 
  ELAST = 12
};

typedef uint8_t error_t  ;

static inline error_t ecombine(error_t r1, error_t r2)  ;
# 41 "/home/tinyos/local/src/tinyos-2x/tos/lib/timer/Timer.h"
typedef struct __nesc_unnamed4280 {
#line 41
  int notUsed;
} 
#line 41
TSecond;
typedef struct __nesc_unnamed4281 {
#line 42
  int notUsed;
} 
#line 42
TMilli;
typedef struct __nesc_unnamed4282 {
#line 43
  int notUsed;
} 
#line 43
T32khz;
typedef struct __nesc_unnamed4283 {
#line 44
  int notUsed;
} 
#line 44
TMicro;
# 9 "MYMSG.h"
#line 6
typedef nx_struct BasicSendReceiveMsg {
  nx_uint8_t nodeid;
  nx_int16_t data[16];
} __attribute__((packed)) BasicSendReceiveMsg;
# 25 "/home/tinyos/local/src/tinyos-2x/tos/chips/atm128/sim/atm128_sim.h"
enum __nesc_unnamed4284 {

  ATM128_PINF = 0x00, 


  ATM128_PINE = 0x01, 


  ATM128_DDRE = 0x02, 


  ATM128_PORTE = 0x03, 


  ATM128_ADCW = 0x04, 

  ATM128_ADC = 0x04, 

  ATM128_ADCL = 0x04, 
  ATM128_ADCH = 0x05, 


  ATM128_ADCSR = 0x06, 
  ATM128_ADCSRA = 0x06, 


  ATM128_ADMUX = 0x07, 


  ATM128_ACSR = 0x08, 


  ATM128_UBRR0L = 0x09, 


  ATM128_UCSR0B = 0x0A, 


  ATM128_UCSR0A = 0x0B, 


  ATM128_UDR0 = 0x0C, 


  ATM128_SPCR = 0x0D, 


  ATM128_SPSR = 0x0E, 


  ATM128_SPDR = 0x0F, 


  ATM128_PIND = 0x10, 


  ATM128_DDRD = 0x11, 


  ATM128_PORTD = 0x12, 


  ATM128_PINC = 0x13, 


  ATM128_DDRC = 0x14, 


  ATM128_PORTC = 0x15, 


  ATM128_PINB = 0x16, 


  ATM128_DDRB = 0x17, 


  ATM128_PORTB = 0x18, 


  ATM128_PINA = 0x19, 


  ATM128_DDRA = 0x1A, 


  ATM128_PORTA = 0x1B, 




  ATM128_SFIOR = 0x20, 


  ATM128_WDTCR = 0x21, 


  ATM128_OCDR = 0x22, 


  ATM128_OCR2 = 0x23, 


  ATM128_TCNT2 = 0x24, 


  ATM128_TCCR2 = 0x25, 


  ATM128_ICR1 = 0x26, 
  ATM128_ICR1L = 0x26, 
  ATM128_ICR1H = 0x27, 


  ATM128_OCR1B = 0x28, 
  ATM128_OCR1BL = 0x28, 
  ATM128_OCR1BH = 0x29, 


  ATM128_OCR1A = 0x2A, 
  ATM128_OCR1AL = 0x2A, 
  ATM128_OCR1AH = 0x2B, 


  ATM128_TCNT1 = 0x2C, 
  ATM128_TCNT1L = 0x2C, 
  ATM128_TCNT1H = 0x2D, 


  ATM128_TCCR1B = 0x2E, 


  ATM128_TCCR1A = 0x2F, 


  ATM128_ASSR = 0x30, 


  ATM128_OCR0 = 0x31, 


  ATM128_TCNT0 = 0x32, 


  ATM128_TCCR0 = 0x33, 


  ATM128_MCUSR = 0x34, 
  ATM128_MCUCSR = 0x34, 


  ATM128_MCUCR = 0x35, 


  ATM128_TIFR = 0x36, 


  ATM128_TIMSK = 0x37, 


  ATM128_EIFR = 0x38, 


  ATM128_EIMSK = 0x39, 


  ATM128_EICRB = 0x3A, 


  ATM128_RAMPZ = 0x3B, 


  ATM128_XDIV = 0x3C, 




  ATM128_SREG = 0x3F, 




  ATM128_DDRF = 0x61, 


  ATM128_PORTF = 0x62, 


  ATM128_PING = 0x63, 


  ATM128_DDRG = 0x64, 


  ATM128_PORTG = 0x65, 


  ATM128_SPMCR = 0x68, 
  ATM128_SPMCSR = 0x68, 


  ATM128_EICRA = 0x6A, 


  ATM128_XMCRB = 0x6C, 


  ATM128_XMCRA = 0x6D, 


  ATM128_OSCCAL = 0x6F, 


  ATM128_TWBR = 0x70, 


  ATM128_TWSR = 0x71, 


  ATM128_TWAR = 0x72, 


  ATM128_TWDR = 0x73, 


  ATM128_TWCR = 0x74, 


  ATM128_OCR1C = 0x78, 
  ATM128_OCR1CL = 0x78, 
  ATM128_OCR1CH = 0x79, 


  ATM128_TCCR1C = 0x7A, 


  ATM128_ETIFR = 0x7C, 


  ATM128_ETIMSK = 0x7D, 


  ATM128_ICR3 = 0x80, 
  ATM128_ICR3L = 0x80, 
  ATM128_ICR3H = 0x81, 


  ATM128_OCR3C = 0x82, 
  ATM128_OCR3CL = 0x82, 
  ATM128_OCR3CH = 0x83, 


  ATM128_OCR3B = 0x84, 
  ATM128_OCR3BL = 0x84, 
  ATM128_OCR3BH = 0x85, 


  ATM128_OCR3A = 0x86, 
  ATM128_OCR3AL = 0x86, 
  ATM128_OCR3AH = 0x87, 


  ATM128_TCNT3 = 0x88, 
  ATM128_TCNT3L = 0x88, 
  ATM128_TCNT3H = 0x89, 


  ATM128_TCCR3B = 0x8A, 


  ATM128_TCCR3A = 0x8B, 


  ATM128_TCCR3C = 0x8C, 


  ATM128_UBRR0H = 0x90, 


  ATM128_UCSR0C = 0x95, 


  ATM128_UBRR1H = 0x98, 


  ATM128_UBRR1L = 0x99, 


  ATM128_UCSR1B = 0x9A, 


  ATM128_UCSR1A = 0x9B, 


  ATM128_UDR1 = 0x9C, 


  ATM128_UCSR1C = 0x9D
};
#line 673
enum __nesc_unnamed4285 {

  TWINT = 7, 
  TWEA = 6, 
  TWSTA = 5, 
  TWSTO = 4, 
  TWWC = 3, 
  TWEN = 2, 
  TWIE = 0, 


  TWA6 = 7, 
  TWA5 = 6, 
  TWA4 = 5, 
  TWA3 = 4, 
  TWA2 = 3, 
  TWA1 = 2, 
  TWA0 = 1, 
  TWGCE = 0, 


  TWS7 = 7, 
  TWS6 = 6, 
  TWS5 = 5, 
  TWS4 = 4, 
  TWS3 = 3, 
  TWPS1 = 1, 
  TWPS0 = 0, 


  SRL2 = 6, 
  SRL1 = 5, 
  SRL0 = 4, 
  SRW01 = 3, 
  SRW00 = 2, 
  SRW11 = 1, 


  XMBK = 7, 
  XMM2 = 2, 
  XMM1 = 1, 
  XMM0 = 0, 


  XDIVEN = 7, 
  XDIV6 = 6, 
  XDIV5 = 5, 
  XDIV4 = 4, 
  XDIV3 = 3, 
  XDIV2 = 2, 
  XDIV1 = 1, 
  XDIV0 = 0, 


  RAMPZ0 = 0, 


  ISC31 = 7, 
  ISC30 = 6, 
  ISC21 = 5, 
  ISC20 = 4, 
  ISC11 = 3, 
  ISC10 = 2, 
  ISC01 = 1, 
  ISC00 = 0, 


  ISC71 = 7, 
  ISC70 = 6, 
  ISC61 = 5, 
  ISC60 = 4, 
  ISC51 = 3, 
  ISC50 = 2, 
  ISC41 = 1, 
  ISC40 = 0, 


  SPMIE = 7, 
  RWWSB = 6, 
  RWWSRE = 4, 
  BLBSET = 3, 
  PGWRT = 2, 
  PGERS = 1, 
  SPMEN = 0, 


  INT7 = 7, 
  INT6 = 6, 
  INT5 = 5, 
  INT4 = 4, 
  INT3 = 3, 
  INT2 = 2, 
  INT1 = 1, 
  INT0 = 0, 


  INTF7 = 7, 
  INTF6 = 6, 
  INTF5 = 5, 
  INTF4 = 4, 
  INTF3 = 3, 
  INTF2 = 2, 
  INTF1 = 1, 
  INTF0 = 0, 


  OCIE2 = 7, 
  TOIE2 = 6, 
  TICIE1 = 5, 
  OCIE1A = 4, 
  OCIE1B = 3, 
  TOIE1 = 2, 
  OCIE0 = 1, 
  TOIE0 = 0, 


  OCF2 = 7, 
  TOV2 = 6, 
  ICF1 = 5, 
  OCF1A = 4, 
  OCF1B = 3, 
  TOV1 = 2, 
  OCF0 = 1, 
  TOV0 = 0, 


  TICIE3 = 5, 
  OCIE3A = 4, 
  OCIE3B = 3, 
  TOIE3 = 2, 
  OCIE3C = 1, 
  OCIE1C = 0, 


  ICF3 = 5, 
  OCF3A = 4, 
  OCF3B = 3, 
  TOV3 = 2, 
  OCF3C = 1, 
  OCF1C = 0, 


  SRE = 7, 
  SRW = 6, 
  SRW10 = 6, 
  SE = 5, 
  SM1 = 4, 
  SM0 = 3, 
  SM2 = 2, 
  IVSEL = 1, 
  IVCE = 0, 


  JTD = 7, 
  JTRF = 4, 
  WDRF = 3, 
  BORF = 2, 
  EXTRF = 1, 
  PORF = 0, 


  FOC = 7, 
  WGM0 = 6, 
  COM1 = 5, 
  COM0 = 4, 
  WGM1 = 3, 
  CS2 = 2, 
  CS1 = 1, 
  CS0 = 0, 


  FOC0 = 7, 
  WGM00 = 6, 
  COM01 = 5, 
  COM00 = 4, 
  WGM01 = 3, 
  CS02 = 2, 
  CS01 = 1, 
  CS00 = 0, 


  FOC2 = 7, 
  WGM20 = 6, 
  COM21 = 5, 
  COM20 = 4, 
  WGM21 = 3, 
  CS22 = 2, 
  CS21 = 1, 
  CS20 = 0, 


  AS0 = 3, 
  TCN0UB = 2, 
  OCR0UB = 1, 
  TCR0UB = 0, 


  COMA1 = 7, 
  COMA0 = 6, 
  COMB1 = 5, 
  COMB0 = 4, 
  COMC1 = 3, 
  COMC0 = 2, 
  WGMA1 = 1, 
  WGMA0 = 0, 


  COM1A1 = 7, 
  COM1A0 = 6, 
  COM1B1 = 5, 
  COM1B0 = 4, 
  COM1C1 = 3, 
  COM1C0 = 2, 
  WGM11 = 1, 
  WGM10 = 0, 


  COM3A1 = 7, 
  COM3A0 = 6, 
  COM3B1 = 5, 
  COM3B0 = 4, 
  COM3C1 = 3, 
  COM3C0 = 2, 
  WGM31 = 1, 
  WGM30 = 0, 


  ICNC = 7, 
  ICES = 6, 
  WGMB3 = 4, 
  WGMB2 = 3, 
  CSB2 = 2, 
  CSB1 = 1, 
  CSB0 = 0, 


  ICNC1 = 7, 
  ICES1 = 6, 
  WGM13 = 4, 
  WGM12 = 3, 
  CS12 = 2, 
  CS11 = 1, 
  CS10 = 0, 


  ICNC3 = 7, 
  ICES3 = 6, 
  WGM33 = 4, 
  WGM32 = 3, 
  CS32 = 2, 
  CS31 = 1, 
  CS30 = 0, 


  FOCA = 7, 
  FOCB = 6, 
  FOCC = 5, 


  FOC3A = 7, 
  FOC3B = 6, 
  FOC3C = 5, 


  FOC1A = 7, 
  FOC1B = 6, 
  FOC1C = 5, 


  IDRD = 7, 
  OCDR7 = 7, 
  OCDR6 = 6, 
  OCDR5 = 5, 
  OCDR4 = 4, 
  OCDR3 = 3, 
  OCDR2 = 2, 
  OCDR1 = 1, 
  OCDR0 = 0, 


  WDCE = 4, 
  WDE = 3, 
  WDP2 = 2, 
  WDP1 = 1, 
  WDP0 = 0, 


  TSM = 7, 
  ADHSM = 4, 
  ACME = 3, 
  PUD = 2, 
  PSR0 = 1, 
  PSR321 = 0, 


  SPIF = 7, 
  WCOL = 6, 
  SPI2X = 0, 


  SPIE = 7, 
  SPE = 6, 
  DORD = 5, 
  MSTR = 4, 
  CPOL = 3, 
  CPHA = 2, 
  SPR1 = 1, 
  SPR0 = 0, 


  UMSEL = 6, 
  UPM1 = 5, 
  UPM0 = 4, 
  USBS = 3, 
  UCSZ1 = 2, 
  UCSZ0 = 1, 
  UCPOL = 0, 


  UMSEL1 = 6, 
  UPM11 = 5, 
  UPM10 = 4, 
  USBS1 = 3, 
  UCSZ11 = 2, 
  UCSZ10 = 1, 
  UCPOL1 = 0, 


  UMSEL0 = 6, 
  UPM01 = 5, 
  UPM00 = 4, 
  USBS0 = 3, 
  UCSZ01 = 2, 
  UCSZ00 = 1, 
  UCPOL0 = 0, 


  RXC = 7, 
  TXC = 6, 
  UDRE = 5, 
  FE = 4, 
  DOR = 3, 
  UPE = 2, 
  U2X = 1, 
  MPCM = 0, 


  RXC1 = 7, 
  TXC1 = 6, 
  UDRE1 = 5, 
  FE1 = 4, 
  DOR1 = 3, 
  UPE1 = 2, 
  U2X1 = 1, 
  MPCM1 = 0, 


  RXC0 = 7, 
  TXC0 = 6, 
  UDRE0 = 5, 
  FE0 = 4, 
  DOR0 = 3, 
  UPE0 = 2, 
  U2X0 = 1, 
  MPCM0 = 0, 


  RXCIE = 7, 
  TXCIE = 6, 
  UDRIE = 5, 
  RXEN = 4, 
  TXEN = 3, 
  UCSZ = 2, 
  UCSZ2 = 2, 
  RXB8 = 1, 
  TXB8 = 0, 


  RXCIE1 = 7, 
  TXCIE1 = 6, 
  UDRIE1 = 5, 
  RXEN1 = 4, 
  TXEN1 = 3, 
  UCSZ12 = 2, 
  RXB81 = 1, 
  TXB81 = 0, 


  RXCIE0 = 7, 
  TXCIE0 = 6, 
  UDRIE0 = 5, 
  RXEN0 = 4, 
  TXEN0 = 3, 
  UCSZ02 = 2, 
  RXB80 = 1, 
  TXB80 = 0, 


  ACD = 7, 
  ACBG = 6, 
  ACO = 5, 
  ACI = 4, 
  ACIE = 3, 
  ACIC = 2, 
  ACIS1 = 1, 
  ACIS0 = 0, 


  ADEN = 7, 
  ADSC = 6, 
  ADFR = 5, 
  ADIF = 4, 
  ADIE = 3, 
  ADPS2 = 2, 
  ADPS1 = 1, 
  ADPS0 = 0, 


  REFS1 = 7, 
  REFS0 = 6, 
  ADLAR = 5, 
  MUX4 = 4, 
  MUX3 = 3, 
  MUX2 = 2, 
  MUX1 = 1, 
  MUX0 = 0, 


  PA7 = 7, 
  PA6 = 6, 
  PA5 = 5, 
  PA4 = 4, 
  PA3 = 3, 
  PA2 = 2, 
  PA1 = 1, 
  PA0 = 0, 


  DDA7 = 7, 
  DDA6 = 6, 
  DDA5 = 5, 
  DDA4 = 4, 
  DDA3 = 3, 
  DDA2 = 2, 
  DDA1 = 1, 
  DDA0 = 0, 


  PINA7 = 7, 
  PINA6 = 6, 
  PINA5 = 5, 
  PINA4 = 4, 
  PINA3 = 3, 
  PINA2 = 2, 
  PINA1 = 1, 
  PINA0 = 0, 


  PB7 = 7, 
  PB6 = 6, 
  PB5 = 5, 
  PB4 = 4, 
  PB3 = 3, 
  PB2 = 2, 
  PB1 = 1, 
  PB0 = 0, 


  DDB7 = 7, 
  DDB6 = 6, 
  DDB5 = 5, 
  DDB4 = 4, 
  DDB3 = 3, 
  DDB2 = 2, 
  DDB1 = 1, 
  DDB0 = 0, 


  PINB7 = 7, 
  PINB6 = 6, 
  PINB5 = 5, 
  PINB4 = 4, 
  PINB3 = 3, 
  PINB2 = 2, 
  PINB1 = 1, 
  PINB0 = 0, 


  PC7 = 7, 
  PC6 = 6, 
  PC5 = 5, 
  PC4 = 4, 
  PC3 = 3, 
  PC2 = 2, 
  PC1 = 1, 
  PC0 = 0, 


  DDC7 = 7, 
  DDC6 = 6, 
  DDC5 = 5, 
  DDC4 = 4, 
  DDC3 = 3, 
  DDC2 = 2, 
  DDC1 = 1, 
  DDC0 = 0, 


  PINC7 = 7, 
  PINC6 = 6, 
  PINC5 = 5, 
  PINC4 = 4, 
  PINC3 = 3, 
  PINC2 = 2, 
  PINC1 = 1, 
  PINC0 = 0, 


  PD7 = 7, 
  PD6 = 6, 
  PD5 = 5, 
  PD4 = 4, 
  PD3 = 3, 
  PD2 = 2, 
  PD1 = 1, 
  PD0 = 0, 


  DDD7 = 7, 
  DDD6 = 6, 
  DDD5 = 5, 
  DDD4 = 4, 
  DDD3 = 3, 
  DDD2 = 2, 
  DDD1 = 1, 
  DDD0 = 0, 


  PIND7 = 7, 
  PIND6 = 6, 
  PIND5 = 5, 
  PIND4 = 4, 
  PIND3 = 3, 
  PIND2 = 2, 
  PIND1 = 1, 
  PIND0 = 0, 


  PE7 = 7, 
  PE6 = 6, 
  PE5 = 5, 
  PE4 = 4, 
  PE3 = 3, 
  PE2 = 2, 
  PE1 = 1, 
  PE0 = 0, 


  DDE7 = 7, 
  DDE6 = 6, 
  DDE5 = 5, 
  DDE4 = 4, 
  DDE3 = 3, 
  DDE2 = 2, 
  DDE1 = 1, 
  DDE0 = 0, 


  PINE7 = 7, 
  PINE6 = 6, 
  PINE5 = 5, 
  PINE4 = 4, 
  PINE3 = 3, 
  PINE2 = 2, 
  PINE1 = 1, 
  PINE0 = 0, 


  PF7 = 7, 
  PF6 = 6, 
  PF5 = 5, 
  PF4 = 4, 
  PF3 = 3, 
  PF2 = 2, 
  PF1 = 1, 
  PF0 = 0, 


  DDF7 = 7, 
  DDF6 = 6, 
  DDF5 = 5, 
  DDF4 = 4, 
  DDF3 = 3, 
  DDF2 = 2, 
  DDF1 = 1, 
  DDF0 = 0, 


  PINF7 = 7, 
  PINF6 = 6, 
  PINF5 = 5, 
  PINF4 = 4, 
  PINF3 = 3, 
  PINF2 = 2, 
  PINF1 = 1, 
  PINF0 = 0, 


  PG4 = 4, 
  PG3 = 3, 
  PG2 = 2, 
  PG1 = 1, 
  PG0 = 0, 


  DDG4 = 4, 
  DDG3 = 3, 
  DDG2 = 2, 
  DDG1 = 1, 
  DDG0 = 0, 


  PING4 = 4, 
  PING3 = 3, 
  PING2 = 2, 
  PING1 = 1, 
  PING0 = 0
};
# 51 "/home/tinyos/local/src/tinyos-2x/tos/chips/atm128/sim/atm128hardware.h"
uint8_t atm128RegFile[1000][0xa0];
#line 85
static __inline void __nesc_enable_interrupt();



static __inline void __nesc_disable_interrupt();




typedef uint8_t __nesc_atomic_t;



#line 97
__inline __nesc_atomic_t 
__nesc_atomic_start(void )  ;








#line 106
__inline void 
__nesc_atomic_end(__nesc_atomic_t original_SREG)  ;
#line 120
typedef uint8_t mcu_power_t  ;





enum __nesc_unnamed4286 {
  ATM128_POWER_IDLE = 0, 
  ATM128_POWER_ADC_NR = 1, 
  ATM128_POWER_EXT_STANDBY = 2, 
  ATM128_POWER_SAVE = 3, 
  ATM128_POWER_STANDBY = 4, 
  ATM128_POWER_DOWN = 5
};
# 43 "/home/tinyos/local/src/tinyos-2x/tos/chips/atm128/adc/Atm128Adc.h"
enum __nesc_unnamed4287 {
  ATM128_ADC_VREF_OFF = 0, 
  ATM128_ADC_VREF_AVCC = 1, 
  ATM128_ADC_VREF_RSVD, 
  ATM128_ADC_VREF_2_56 = 3
};


enum __nesc_unnamed4288 {
  ATM128_ADC_RIGHT_ADJUST = 0, 
  ATM128_ADC_LEFT_ADJUST = 1
};



enum __nesc_unnamed4289 {
  ATM128_ADC_SNGL_ADC0 = 0, 
  ATM128_ADC_SNGL_ADC1, 
  ATM128_ADC_SNGL_ADC2, 
  ATM128_ADC_SNGL_ADC3, 
  ATM128_ADC_SNGL_ADC4, 
  ATM128_ADC_SNGL_ADC5, 
  ATM128_ADC_SNGL_ADC6, 
  ATM128_ADC_SNGL_ADC7, 
  ATM128_ADC_DIFF_ADC00_10x, 
  ATM128_ADC_DIFF_ADC10_10x, 
  ATM128_ADC_DIFF_ADC00_200x, 
  ATM128_ADC_DIFF_ADC10_200x, 
  ATM128_ADC_DIFF_ADC22_10x, 
  ATM128_ADC_DIFF_ADC32_10x, 
  ATM128_ADC_DIFF_ADC22_200x, 
  ATM128_ADC_DIFF_ADC32_200x, 
  ATM128_ADC_DIFF_ADC01_1x, 
  ATM128_ADC_DIFF_ADC11_1x, 
  ATM128_ADC_DIFF_ADC21_1x, 
  ATM128_ADC_DIFF_ADC31_1x, 
  ATM128_ADC_DIFF_ADC41_1x, 
  ATM128_ADC_DIFF_ADC51_1x, 
  ATM128_ADC_DIFF_ADC61_1x, 
  ATM128_ADC_DIFF_ADC71_1x, 
  ATM128_ADC_DIFF_ADC02_1x, 
  ATM128_ADC_DIFF_ADC12_1x, 
  ATM128_ADC_DIFF_ADC22_1x, 
  ATM128_ADC_DIFF_ADC32_1x, 
  ATM128_ADC_DIFF_ADC42_1x, 
  ATM128_ADC_DIFF_ADC52_1x, 
  ATM128_ADC_SNGL_1_23, 
  ATM128_ADC_SNGL_GND
};







#line 94
typedef struct __nesc_unnamed4290 {

  uint8_t mux : 5;
  uint8_t adlar : 1;
  uint8_t refs : 2;
} Atm128Admux_t;




enum __nesc_unnamed4291 {
  ATM128_ADC_PRESCALE_2 = 0, 
  ATM128_ADC_PRESCALE_2b, 
  ATM128_ADC_PRESCALE_4, 
  ATM128_ADC_PRESCALE_8, 
  ATM128_ADC_PRESCALE_16, 
  ATM128_ADC_PRESCALE_32, 
  ATM128_ADC_PRESCALE_64, 
  ATM128_ADC_PRESCALE_128, 



  ATM128_ADC_PRESCALE
};


enum __nesc_unnamed4292 {
  ATM128_ADC_ENABLE_OFF = 0, 
  ATM128_ADC_ENABLE_ON
};


enum __nesc_unnamed4293 {
  ATM128_ADC_START_CONVERSION_OFF = 0, 
  ATM128_ADC_START_CONVERSION_ON
};


enum __nesc_unnamed4294 {
  ATM128_ADC_FREE_RUNNING_OFF = 0, 
  ATM128_ADC_FREE_RUNNING_ON
};


enum __nesc_unnamed4295 {
  ATM128_ADC_INT_FLAG_OFF = 0, 
  ATM128_ADC_INT_FLAG_ON
};


enum __nesc_unnamed4296 {
  ATM128_ADC_INT_ENABLE_OFF = 0, 
  ATM128_ADC_INT_ENABLE_ON
};










#line 150
typedef struct __nesc_unnamed4297 {

  uint8_t adps : 3;
  uint8_t adie : 1;
  uint8_t adif : 1;
  uint8_t adfr : 1;
  uint8_t adsc : 1;
  uint8_t aden : 1;
} Atm128Adcsra_t;

typedef uint8_t Atm128_ADCH_t;
typedef uint8_t Atm128_ADCL_t;
# 54 "/home/tinyos/local/src/tinyos-2x/tos/platforms/micaz/sim/platform_hardware.h"
enum __nesc_unnamed4298 {
  CHANNEL_RSSI = ATM128_ADC_SNGL_ADC0, 
  CHANNEL_THERMISTOR = ATM128_ADC_SNGL_ADC1, 
  CHANNEL_BATTERY = ATM128_ADC_SNGL_ADC7, 
  CHANNEL_BANDGAP = 30, 
  CHANNEL_GND = 31, 

  ATM128_TIMER0_TICKSPPS = 32768
};
# 41 "/home/tinyos/local/src/tinyos-2x/tos/lib/tossim/SimMainP.nc"
static void __nesc_nido_initialise(int node);
# 4 "/home/tinyos/local/src/tinyos-2x/tos/chips/cc2420/sim/CC2420.h"
typedef uint8_t cc2420_status_t;
#line 58
#line 52
typedef nx_struct security_header_t {
  unsigned char __nesc_filler0[1];


  nx_uint32_t frameCounter;
  nx_uint8_t keyID[1];
} __attribute__((packed)) security_header_t;
#line 78
#line 60
typedef nx_struct cc2420_header_t {
  nxle_uint8_t length;
  nxle_uint16_t fcf;
  nxle_uint8_t dsn;
  nxle_uint16_t destpan;
  nxle_uint16_t dest;
  nxle_uint16_t src;







  nxle_uint8_t network;


  nxle_uint8_t type;
} __attribute__((packed)) cc2420_header_t;





#line 83
typedef nx_struct cc2420_footer_t {
} __attribute__((packed)) cc2420_footer_t;
#line 108
#line 94
typedef nx_struct cc2420_metadata_t {
  nx_uint8_t rssi;
  nx_uint8_t lqi;
  nx_uint8_t tx_power;
  nx_int8_t crc;
  nx_int8_t ack;
  nx_int8_t timesync;
  nx_uint32_t timestamp;
  nx_uint16_t rxInterval;
} __attribute__((packed)) 




cc2420_metadata_t;





#line 111
typedef nx_struct cc2420_packet_t {
  cc2420_header_t packet;
  nx_uint8_t data[];
} __attribute__((packed)) cc2420_packet_t;
#line 144
enum __nesc_unnamed4299 {

  MAC_HEADER_SIZE = sizeof(cc2420_header_t ) - 1, 

  MAC_FOOTER_SIZE = sizeof(uint16_t ), 

  MAC_PACKET_SIZE = MAC_HEADER_SIZE + 70 + MAC_FOOTER_SIZE, 

  CC2420_SIZE = MAC_HEADER_SIZE + MAC_FOOTER_SIZE
};

enum cc2420_enums {
  CC2420_TIME_ACK_TURNAROUND = 7, 
  CC2420_TIME_VREN = 20, 
  CC2420_TIME_SYMBOL = 2, 
  CC2420_BACKOFF_PERIOD = 20 / CC2420_TIME_SYMBOL, 
  CC2420_MIN_BACKOFF = 20 / CC2420_TIME_SYMBOL, 
  CC2420_ACK_WAIT_DELAY = 256
};

enum cc2420_status_enums {
  CC2420_STATUS_RSSI_VALID = 1 << 1, 
  CC2420_STATUS_LOCK = 1 << 2, 
  CC2420_STATUS_TX_ACTIVE = 1 << 3, 
  CC2420_STATUS_ENC_BUSY = 1 << 4, 
  CC2420_STATUS_TX_UNDERFLOW = 1 << 5, 
  CC2420_STATUS_XOSC16M_STABLE = 1 << 6
};

enum cc2420_config_reg_enums {
  CC2420_SNOP = 0x00, 
  CC2420_SXOSCON = 0x01, 
  CC2420_STXCAL = 0x02, 
  CC2420_SRXON = 0x03, 
  CC2420_STXON = 0x04, 
  CC2420_STXONCCA = 0x05, 
  CC2420_SRFOFF = 0x06, 
  CC2420_SXOSCOFF = 0x07, 
  CC2420_SFLUSHRX = 0x08, 
  CC2420_SFLUSHTX = 0x09, 
  CC2420_SACK = 0x0a, 
  CC2420_SACKPEND = 0x0b, 
  CC2420_SRXDEC = 0x0c, 
  CC2420_STXENC = 0x0d, 
  CC2420_SAES = 0x0e, 
  CC2420_MAIN = 0x10, 
  CC2420_MDMCTRL0 = 0x11, 
  CC2420_MDMCTRL1 = 0x12, 
  CC2420_RSSI = 0x13, 
  CC2420_SYNCWORD = 0x14, 
  CC2420_TXCTRL = 0x15, 
  CC2420_RXCTRL0 = 0x16, 
  CC2420_RXCTRL1 = 0x17, 
  CC2420_FSCTRL = 0x18, 
  CC2420_SECCTRL0 = 0x19, 
  CC2420_SECCTRL1 = 0x1a, 
  CC2420_BATTMON = 0x1b, 
  CC2420_IOCFG0 = 0x1c, 
  CC2420_IOCFG1 = 0x1d, 
  CC2420_MANFIDL = 0x1e, 
  CC2420_MANFIDH = 0x1f, 
  CC2420_FSMTC = 0x20, 
  CC2420_MANAND = 0x21, 
  CC2420_MANOR = 0x22, 
  CC2420_AGCCTRL = 0x23, 
  CC2420_AGCTST0 = 0x24, 
  CC2420_AGCTST1 = 0x25, 
  CC2420_AGCTST2 = 0x26, 
  CC2420_FSTST0 = 0x27, 
  CC2420_FSTST1 = 0x28, 
  CC2420_FSTST2 = 0x29, 
  CC2420_FSTST3 = 0x2a, 
  CC2420_RXBPFTST = 0x2b, 
  CC2420_FMSTATE = 0x2c, 
  CC2420_ADCTST = 0x2d, 
  CC2420_DACTST = 0x2e, 
  CC2420_TOPTST = 0x2f, 
  CC2420_TXFIFO = 0x3e, 
  CC2420_RXFIFO = 0x3f
};

enum cc2420_ram_addr_enums {
  CC2420_RAM_TXFIFO = 0x000, 
  CC2420_RAM_RXFIFO = 0x080, 
  CC2420_RAM_KEY0 = 0x100, 
  CC2420_RAM_RXNONCE = 0x110, 
  CC2420_RAM_SABUF = 0x120, 
  CC2420_RAM_KEY1 = 0x130, 
  CC2420_RAM_TXNONCE = 0x140, 
  CC2420_RAM_CBCSTATE = 0x150, 
  CC2420_RAM_IEEEADR = 0x160, 
  CC2420_RAM_PANID = 0x168, 
  CC2420_RAM_SHORTADR = 0x16a
};

enum cc2420_nonce_enums {
  CC2420_NONCE_BLOCK_COUNTER = 0, 
  CC2420_NONCE_KEY_SEQ_COUNTER = 2, 
  CC2420_NONCE_FRAME_COUNTER = 3, 
  CC2420_NONCE_SOURCE_ADDRESS = 7, 
  CC2420_NONCE_FLAGS = 15
};

enum cc2420_main_enums {
  CC2420_MAIN_RESETn = 15, 
  CC2420_MAIN_ENC_RESETn = 14, 
  CC2420_MAIN_DEMOD_RESETn = 13, 
  CC2420_MAIN_MOD_RESETn = 12, 
  CC2420_MAIN_FS_RESETn = 11, 
  CC2420_MAIN_XOSC16M_BYPASS = 0
};

enum cc2420_mdmctrl0_enums {
  CC2420_MDMCTRL0_RESERVED_FRAME_MODE = 13, 
  CC2420_MDMCTRL0_PAN_COORDINATOR = 12, 
  CC2420_MDMCTRL0_ADR_DECODE = 11, 
  CC2420_MDMCTRL0_CCA_HYST = 8, 
  CC2420_MDMCTRL0_CCA_MOD = 6, 
  CC2420_MDMCTRL0_AUTOCRC = 5, 
  CC2420_MDMCTRL0_AUTOACK = 4, 
  CC2420_MDMCTRL0_PREAMBLE_LENGTH = 0
};

enum cc2420_mdmctrl1_enums {
  CC2420_MDMCTRL1_CORR_THR = 6, 
  CC2420_MDMCTRL1_DEMOD_AVG_MODE = 5, 
  CC2420_MDMCTRL1_MODULATION_MODE = 4, 
  CC2420_MDMCTRL1_TX_MODE = 2, 
  CC2420_MDMCTRL1_RX_MODE = 0
};

enum cc2420_rssi_enums {
  CC2420_RSSI_CCA_THR = 8, 
  CC2420_RSSI_RSSI_VAL = 0
};

enum cc2420_syncword_enums {
  CC2420_SYNCWORD_SYNCWORD = 0
};

enum cc2420_txctrl_enums {
  CC2420_TXCTRL_TXMIXBUF_CUR = 14, 
  CC2420_TXCTRL_TX_TURNAROUND = 13, 
  CC2420_TXCTRL_TXMIX_CAP_ARRAY = 11, 
  CC2420_TXCTRL_TXMIX_CURRENT = 9, 
  CC2420_TXCTRL_PA_CURRENT = 6, 
  CC2420_TXCTRL_RESERVED = 5, 
  CC2420_TXCTRL_PA_LEVEL = 0
};

enum cc2420_rxctrl0_enums {
  CC2420_RXCTRL0_RXMIXBUF_CUR = 12, 
  CC2420_RXCTRL0_HIGH_LNA_GAIN = 10, 
  CC2420_RXCTRL0_MED_LNA_GAIN = 8, 
  CC2420_RXCTRL0_LOW_LNA_GAIN = 6, 
  CC2420_RXCTRL0_HIGH_LNA_CURRENT = 4, 
  CC2420_RXCTRL0_MED_LNA_CURRENT = 2, 
  CC2420_RXCTRL0_LOW_LNA_CURRENT = 0
};

enum cc2420_rxctrl1_enums {
  CC2420_RXCTRL1_RXBPF_LOCUR = 13, 
  CC2420_RXCTRL1_RXBPF_MIDCUR = 12, 
  CC2420_RXCTRL1_LOW_LOWGAIN = 11, 
  CC2420_RXCTRL1_MED_LOWGAIN = 10, 
  CC2420_RXCTRL1_HIGH_HGM = 9, 
  CC2420_RXCTRL1_MED_HGM = 8, 
  CC2420_RXCTRL1_LNA_CAP_ARRAY = 6, 
  CC2420_RXCTRL1_RXMIX_TAIL = 4, 
  CC2420_RXCTRL1_RXMIX_VCM = 2, 
  CC2420_RXCTRL1_RXMIX_CURRENT = 0
};

enum cc2420_rsctrl_enums {
  CC2420_FSCTRL_LOCK_THR = 14, 
  CC2420_FSCTRL_CAL_DONE = 13, 
  CC2420_FSCTRL_CAL_RUNNING = 12, 
  CC2420_FSCTRL_LOCK_LENGTH = 11, 
  CC2420_FSCTRL_LOCK_STATUS = 10, 
  CC2420_FSCTRL_FREQ = 0
};

enum cc2420_secctrl0_enums {
  CC2420_SECCTRL0_RXFIFO_PROTECTION = 9, 
  CC2420_SECCTRL0_SEC_CBC_HEAD = 8, 
  CC2420_SECCTRL0_SEC_SAKEYSEL = 7, 
  CC2420_SECCTRL0_SEC_TXKEYSEL = 6, 
  CC2420_SECCTRL0_SEC_RXKEYSEL = 5, 
  CC2420_SECCTRL0_SEC_M = 2, 
  CC2420_SECCTRL0_SEC_MODE = 0
};

enum cc2420_secctrl1_enums {
  CC2420_SECCTRL1_SEC_TXL = 8, 
  CC2420_SECCTRL1_SEC_RXL = 0
};

enum cc2420_battmon_enums {
  CC2420_BATTMON_BATT_OK = 6, 
  CC2420_BATTMON_BATTMON_EN = 5, 
  CC2420_BATTMON_BATTMON_VOLTAGE = 0
};

enum cc2420_iocfg0_enums {
  CC2420_IOCFG0_BCN_ACCEPT = 11, 
  CC2420_IOCFG0_FIFO_POLARITY = 10, 
  CC2420_IOCFG0_FIFOP_POLARITY = 9, 
  CC2420_IOCFG0_SFD_POLARITY = 8, 
  CC2420_IOCFG0_CCA_POLARITY = 7, 
  CC2420_IOCFG0_FIFOP_THR = 0
};

enum cc2420_iocfg1_enums {
  CC2420_IOCFG1_HSSD_SRC = 10, 
  CC2420_IOCFG1_SFDMUX = 5, 
  CC2420_IOCFG1_CCAMUX = 0
};

enum cc2420_manfidl_enums {
  CC2420_MANFIDL_PARTNUM = 12, 
  CC2420_MANFIDL_MANFID = 0
};

enum cc2420_manfidh_enums {
  CC2420_MANFIDH_VERSION = 12, 
  CC2420_MANFIDH_PARTNUM = 0
};

enum cc2420_fsmtc_enums {
  CC2420_FSMTC_TC_RXCHAIN2RX = 13, 
  CC2420_FSMTC_TC_SWITCH2TX = 10, 
  CC2420_FSMTC_TC_PAON2TX = 6, 
  CC2420_FSMTC_TC_TXEND2SWITCH = 3, 
  CC2420_FSMTC_TC_TXEND2PAOFF = 0
};

enum cc2420_sfdmux_enums {
  CC2420_SFDMUX_SFD = 0, 
  CC2420_SFDMUX_XOSC16M_STABLE = 24
};

enum cc2420_security_enums {
  CC2420_NO_SEC = 0, 
  CC2420_CBC_MAC = 1, 
  CC2420_CTR = 2, 
  CC2420_CCM = 3, 
  NO_SEC = 0, 
  CBC_MAC_4 = 1, 
  CBC_MAC_8 = 2, 
  CBC_MAC_16 = 3, 
  CTR = 4, 
  CCM_4 = 5, 
  CCM_8 = 6, 
  CCM_16 = 7
};


enum __nesc_unnamed4300 {

  CC2420_INVALID_TIMESTAMP = 0x80000000L
};
# 7 "/home/tinyos/local/src/tinyos-2x/tos/lib/tossim/sim_lqi.h"
#line 4
typedef struct lqi_dist {
  uint8_t lqi;
  double cdf;
} lqi_dist_t;





#line 9
typedef struct snr_lqi {
  double snr;
  uint8_t numLqi;
  lqi_dist_t *lqi;
} snr_lqi_t;

lqi_dist_t snr24[8] = { { 108, 49.5481927711 }, { 102, 49.9397590361 }, { 103, 50.9036144578 }, { 101, 51.0542168675 }, { 106, 63.7951807229 }, { 107, 92.3192771084 }, { 104, 94.2168674699 }, { 105, 100.0 } };
lqi_dist_t snr25[10] = { { 98, 0.0320204931156 }, { 108, 48.9593339737 }, { 102, 49.1514569324 }, { 103, 49.8879282741 }, { 100, 49.9199487672 }, { 101, 49.9839897534 }, { 106, 64.3932116555 }, { 107, 93.5638808838 }, { 104, 95.58117195 }, { 105, 100.0 } };
lqi_dist_t snr26[8] = { { 108, 49.9569583931 }, { 102, 50.3586800574 }, { 103, 51.1047345768 }, { 101, 51.1334289813 }, { 106, 63.6441893831 }, { 107, 93.68723099 }, { 104, 95.4662840746 }, { 105, 100.0 } };
lqi_dist_t snr27[9] = { { 108, 51.0854243022 }, { 102, 51.2545813363 }, { 103, 51.7056667606 }, { 100, 51.7338595997 }, { 101, 51.7620524387 }, { 106, 64.223287285 }, { 107, 94.051310967 }, { 104, 96.1093882154 }, { 105, 100.0 } };
lqi_dist_t snr20[10] = { { 99, 0.0332667997339 }, { 108, 37.9906852961 }, { 102, 38.5562208916 }, { 103, 40.0864936793 }, { 100, 40.119760479 }, { 101, 40.252827678 }, { 106, 56.3872255489 }, { 107, 89.5542248836 }, { 104, 92.7811044578 }, { 105, 100.0 } };
lqi_dist_t snr21[9] = { { 108, 40.3826787513 }, { 102, 40.953340047 }, { 103, 41.9268210809 }, { 100, 42.061094327 }, { 101, 42.2289358845 }, { 106, 58.4424303458 }, { 107, 89.7616649883 }, { 104, 92.2457200403 }, { 105, 100.0 } };
lqi_dist_t snr22[9] = { { 108, 44.0018966335 }, { 102, 44.4760550024 }, { 103, 45.4243717402 }, { 100, 45.4717875771 }, { 101, 45.6377430062 }, { 106, 60.6685633001 }, { 107, 90.9198672357 }, { 104, 93.6699857752 }, { 105, 100.0 } };
lqi_dist_t snr23[9] = { { 108, 46.3674104826 }, { 102, 46.8085106383 }, { 103, 47.6647638817 }, { 100, 47.7166580176 }, { 101, 47.8204462896 }, { 106, 61.6761805916 }, { 107, 91.64504411 }, { 104, 93.8764919564 }, { 105, 100.0 } };
lqi_dist_t snr28[8] = { { 108, 51.1636636637 }, { 102, 51.4264264264 }, { 103, 51.9144144144 }, { 100, 52.027027027 }, { 106, 64.3393393393 }, { 107, 94.3318318318 }, { 104, 96.2837837838 }, { 105, 100.0 } };
lqi_dist_t snr29[8] = { { 108, 53.434225844 }, { 102, 53.7834691502 }, { 103, 54.4819557625 }, { 101, 54.5401629802 }, { 106, 65.9487776484 }, { 107, 94.3538998836 }, { 104, 95.983701979 }, { 105, 100.0 } };
lqi_dist_t snr0[25] = { { 82, 7.20720720721 }, { 63, 8.10810810811 }, { 64, 10.8108108108 }, { 66, 12.6126126126 }, { 69, 16.2162162162 }, { 68, 19.8198198198 }, { 83, 24.3243243243 }, { 80, 28.8288288288 }, { 81, 34.2342342342 }, { 86, 36.9369369369 }, { 87, 37.8378378378 }, { 84, 40.5405405405 }, { 85, 42.3423423423 }, { 77, 50.4504504505 }, { 76, 60.3603603604 }, { 75, 65.7657657658 }, { 74, 72.0720720721 }, { 73, 74.7747747748 }, { 72, 78.3783783784 }, { 71, 81.0810810811 }, { 70, 81.981981982 }, { 92, 82.8828828829 }, { 79, 90.990990991 }, { 78, 99.0990990991 }, { 52, 100.0 } };
lqi_dist_t snr3[45] = { { 62, 0.0711743772242 }, { 67, 0.391459074733 }, { 60, 0.462633451957 }, { 102, 0.569395017794 }, { 88, 5.62277580071 }, { 89, 10.3558718861 }, { 64, 10.5693950178 }, { 65, 10.7473309609 }, { 66, 10.9964412811 }, { 69, 11.5658362989 }, { 82, 17.0818505338 }, { 83, 22.8825622776 }, { 80, 27.7224199288 }, { 81, 32.4555160142 }, { 86, 37.9003558719 }, { 87, 42.9893238434 }, { 84, 47.9359430605 }, { 85, 53.4163701068 }, { 92, 56.6903914591 }, { 79, 60.7117437722 }, { 104, 60.7473309609 }, { 78, 64.9822064057 }, { 68, 65.6583629893 }, { 99, 66.4412811388 }, { 98, 67.0462633452 }, { 75, 70.0 }, { 74, 71.6370106762 }, { 73, 73.5231316726 }, { 72, 75.0177935943 }, { 71, 76.2989323843 }, { 70, 76.975088968 }, { 91, 80.462633452 }, { 90, 84.2348754448 }, { 100, 84.590747331 }, { 101, 84.6619217082 }, { 95, 86.1209964413 }, { 94, 88.3629893238 }, { 97, 89.3950177936 }, { 96, 90.8540925267 }, { 77, 94.590747331 }, { 59, 94.6263345196 }, { 76, 97.3309608541 }, { 61, 97.4021352313 }, { 93, 99.8932384342 }, { 63, 100.0 } };
lqi_dist_t snr2[42] = { { 67, 1.42984807864 }, { 60, 1.51921358356 }, { 68, 2.32350312779 }, { 88, 4.7363717605 }, { 89, 7.14924039321 }, { 64, 7.86416443253 }, { 65, 8.57908847185 }, { 66, 9.29401251117 }, { 69, 12.0643431635 }, { 82, 18.1411974978 }, { 83, 24.3967828418 }, { 80, 29.2225201072 }, { 81, 33.8695263628 }, { 93, 34.763181412 }, { 87, 38.1590705987 }, { 84, 43.4316353887 }, { 85, 48.436103664 }, { 86, 51.8319928508 }, { 97, 51.9213583557 }, { 96, 52.2788203753 }, { 77, 58.3556747096 }, { 76, 64.164432529 }, { 75, 67.7390527256 }, { 74, 72.3860589812 }, { 73, 75.6032171582 }, { 72, 78.4629133155 }, { 71, 81.8588025022 }, { 70, 83.6461126005 }, { 91, 84.8078641644 }, { 90, 86.6845397676 }, { 100, 86.7739052726 }, { 92, 88.2037533512 }, { 95, 88.5612153709 }, { 94, 88.7399463807 }, { 79, 93.3869526363 }, { 78, 98.927613941 }, { 59, 99.0169794459 }, { 98, 99.1063449508 }, { 56, 99.1957104558 }, { 61, 99.4638069705 }, { 62, 99.7319034853 }, { 63, 100.0 } };
lqi_dist_t snr5[46] = { { 67, 0.153468385513 }, { 102, 1.01289134438 }, { 88, 6.1387354205 }, { 89, 11.6942909761 }, { 64, 11.9091467158 }, { 65, 11.9398403929 }, { 66, 11.97053407 }, { 103, 12.5230202578 }, { 100, 14.4260282382 }, { 83, 18.3241252302 }, { 80, 20.9023941068 }, { 81, 23.6955187231 }, { 86, 28.2688766114 }, { 87, 32.9957028852 }, { 84, 36.4333947207 }, { 85, 40.730509515 }, { 101, 41.9582565991 }, { 63, 42.0196439533 }, { 79, 44.1375076734 }, { 106, 44.1682013505 }, { 82, 47.0841006753 }, { 104, 47.3910374463 }, { 96, 51.6574585635 }, { 68, 51.9950890117 }, { 78, 53.8060159607 }, { 99, 56.0773480663 }, { 98, 59.4536525476 }, { 75, 60.8041743401 }, { 74, 61.4487415592 }, { 73, 61.97053407 }, { 72, 62.6764886433 }, { 71, 63.2903621854 }, { 70, 63.5972989564 }, { 91, 68.9993861265 }, { 90, 74.6777163904 }, { 93, 79.8956414979 }, { 92, 85.8809085328 }, { 95, 90.0859422959 }, { 94, 94.2909760589 }, { 97, 97.6672805402 }, { 105, 97.7593615715 }, { 77, 98.9257213014 }, { 76, 99.7851442603 }, { 56, 99.8158379374 }, { 61, 99.8465316145 }, { 69, 100.0 } };
lqi_dist_t snr7[45] = { { 67, 0.0192012288786 }, { 102, 5.04992319508 }, { 88, 8.25652841782 }, { 89, 12.1927803379 }, { 64, 12.2119815668 }, { 65, 12.2311827957 }, { 66, 12.2503840246 }, { 103, 16.9162826421 }, { 100, 22.1966205837 }, { 83, 24.3855606759 }, { 80, 25.5184331797 }, { 81, 27.1505376344 }, { 86, 30.222734255 }, { 87, 33.2373271889 }, { 84, 35.4070660522 }, { 85, 37.6920122888 }, { 101, 43.1643625192 }, { 63, 43.1835637481 }, { 79, 44.2396313364 }, { 106, 44.8732718894 }, { 82, 46.1789554531 }, { 107, 46.2749615975 }, { 104, 49.5007680492 }, { 105, 51.3248847926 }, { 78, 52.380952381 }, { 99, 57.2196620584 }, { 98, 62.1543778802 }, { 75, 62.5 }, { 74, 62.7112135177 }, { 73, 62.9992319508 }, { 72, 63.2680491551 }, { 71, 63.3448540707 }, { 70, 63.4792626728 }, { 91, 67.7995391705 }, { 90, 72.1006144393 }, { 93, 76.3056835637 }, { 92, 80.2995391705 }, { 95, 84.8502304147 }, { 94, 89.1321044547 }, { 97, 93.9132104455 }, { 96, 98.732718894 }, { 77, 99.366359447 }, { 59, 99.3855606759 }, { 76, 99.9615975422 }, { 69, 100.0 } };
lqi_dist_t snr6[45] = { { 67, 0.128238009746 }, { 102, 3.35983585535 }, { 88, 6.82226211849 }, { 89, 10.0538599641 }, { 64, 10.1820979738 }, { 65, 10.3103359836 }, { 66, 10.4642215953 }, { 103, 12.8238009746 }, { 82, 15.1064375481 }, { 83, 17.5173121313 }, { 80, 19.4152346756 }, { 81, 21.9286996666 }, { 86, 24.4934598615 }, { 93, 28.5714285714 }, { 84, 30.7771223391 }, { 85, 33.7778917671 }, { 101, 37.4967940498 }, { 79, 39.2151833804 }, { 95, 44.3959989741 }, { 87, 46.8325211593 }, { 104, 47.986663247 }, { 105, 48.473967684 }, { 68, 48.6535008977 }, { 78, 50.2436522185 }, { 99, 55.5270582201 }, { 98, 60.2462169787 }, { 75, 61.2977686586 }, { 74, 62.144139523 }, { 73, 62.9905103873 }, { 72, 63.8112336497 }, { 71, 64.2472428828 }, { 70, 64.4780713003 }, { 91, 68.0430879713 }, { 90, 71.5055142344 }, { 100, 76.6093870223 }, { 92, 80.3795845088 }, { 106, 80.4821749166 }, { 94, 85.4321620928 }, { 97, 91.5106437548 }, { 96, 96.9222877661 }, { 77, 98.2816106694 }, { 76, 99.6665811747 }, { 61, 99.7178763786 }, { 62, 99.7435239805 }, { 69, 100.0 } };
lqi_dist_t snr8[34] = { { 102, 6.99633699634 }, { 88, 9.06593406593 }, { 89, 11.0073260073 }, { 103, 17.9304029304 }, { 82, 18.2783882784 }, { 83, 18.7912087912 }, { 80, 19.0476190476 }, { 81, 19.2857142857 }, { 86, 20.3663003663 }, { 87, 22.0146520147 }, { 84, 22.7106227106 }, { 85, 23.6813186813 }, { 101, 31.0805860806 }, { 79, 31.1721611722 }, { 106, 33.0769230769 }, { 107, 33.2967032967 }, { 104, 39.1941391941 }, { 105, 43.3882783883 }, { 78, 43.4615384615 }, { 100, 50.293040293 }, { 99, 57.2527472527 }, { 98, 64.0842490842 }, { 75, 64.1208791209 }, { 74, 64.1391941392 }, { 91, 67.3626373626 }, { 90, 70.4761904762 }, { 93, 74.4505494505 }, { 92, 77.9120879121 }, { 95, 83.4249084249 }, { 94, 88.3882783883 }, { 97, 94.1025641026 }, { 96, 99.8901098901 }, { 77, 99.9816849817 }, { 76, 100.0 } };
lqi_dist_t snr11[20] = { { 91, 0.0598444045482 }, { 92, 0.179533213645 }, { 108, 0.239377618193 }, { 95, 0.957510472771 }, { 93, 1.25673249551 }, { 94, 1.7354877319 }, { 99, 6.40335128665 }, { 98, 8.73728306403 }, { 96, 9.99401555955 }, { 97, 11.6696588869 }, { 88, 11.7295032914 }, { 90, 11.7594254937 }, { 102, 24.7755834829 }, { 103, 40.9634949132 }, { 100, 47.0676241771 }, { 101, 55.5954518253 }, { 106, 65.4398563734 }, { 107, 67.9533213645 }, { 104, 84.5302214243 }, { 105, 100.0 } };
lqi_dist_t snr10[26] = { { 102, 10.8441850022 }, { 88, 11.2258643916 }, { 89, 11.5401885945 }, { 103, 23.3497979344 }, { 100, 32.8244274809 }, { 83, 32.8693309385 }, { 86, 32.9591378536 }, { 87, 33.2734620566 }, { 84, 33.3857207005 }, { 85, 33.4979793444 }, { 101, 43.578805568 }, { 79, 43.6012572968 }, { 106, 47.4854063763 }, { 107, 48.1814099686 }, { 104, 57.7009429726 }, { 105, 65.626403233 }, { 99, 74.5172878312 }, { 98, 81.2079030085 }, { 91, 81.9712617872 }, { 90, 82.5774584643 }, { 93, 84.1041760216 }, { 92, 85.4737314773 }, { 95, 88.6394252357 }, { 94, 90.7498877414 }, { 97, 96.273013022 }, { 96, 100.0 } };
lqi_dist_t snr13[13] = { { 96, 0.0612745098039 }, { 99, 0.816993464052 }, { 98, 1.14379084967 }, { 108, 2.51225490196 }, { 97, 2.61437908497 }, { 102, 7.96568627451 }, { 103, 16.5645424837 }, { 100, 17.7696078431 }, { 101, 20.1593137255 }, { 106, 45.5882352941 }, { 107, 63.8684640523 }, { 104, 78.8807189542 }, { 105, 100.0 } };
lqi_dist_t snr12[16] = { { 108, 0.241911097672 }, { 95, 0.423344420925 }, { 93, 0.483822195343 }, { 94, 0.514061082552 }, { 99, 1.96552766858 }, { 98, 2.6912609616 }, { 96, 2.81221651043 }, { 97, 3.26579981857 }, { 102, 10.9767160568 }, { 103, 23.4351375869 }, { 100, 26.0659207741 }, { 101, 30.9948593892 }, { 106, 51.1944360448 }, { 107, 60.5080133051 }, { 104, 78.7420622921 }, { 105, 100.0 } };
lqi_dist_t snr15[11] = { { 99, 0.064116264159 }, { 98, 0.085488352212 }, { 108, 6.79632400085 }, { 102, 8.20688181235 }, { 103, 11.8615088694 }, { 100, 12.2462064544 }, { 101, 12.9728574482 }, { 106, 39.0468048728 }, { 107, 75.1870057705 }, { 104, 83.1160504381 }, { 105, 100.0 } };
lqi_dist_t snr14[14] = { { 96, 0.0368935620734 }, { 93, 0.0553403431101 }, { 99, 0.239808153477 }, { 98, 0.442722744881 }, { 108, 3.37576092972 }, { 97, 3.41265449179 }, { 102, 6.32724589559 }, { 103, 12.543811105 }, { 100, 13.3185759085 }, { 101, 14.7389780483 }, { 106, 41.8926397344 }, { 107, 69.9501936912 }, { 104, 81.0367090943 }, { 105, 100.0 } };
lqi_dist_t snr17[11] = { { 99, 0.0569962952408 }, { 98, 0.071245369051 }, { 108, 24.5654032488 }, { 102, 25.2208606441 }, { 103, 27.0732402394 }, { 100, 27.2014819037 }, { 101, 27.6004559704 }, { 106, 47.976631519 }, { 107, 87.1900826446 }, { 104, 91.1655742377 }, { 105, 100.0 } };
lqi_dist_t snr16[11] = { { 99, 0.0779271381259 }, { 98, 0.116890707189 }, { 108, 15.0983830119 }, { 102, 16.0335086694 }, { 103, 18.9362945646 }, { 100, 19.0726670563 }, { 101, 19.4038573933 }, { 106, 41.3987921294 }, { 107, 81.9793493084 }, { 104, 87.6680303916 }, { 105, 100.0 } };
lqi_dist_t snr19[10] = { { 99, 0.0210039907582 }, { 108, 35.1816845201 }, { 102, 35.622768326 }, { 103, 37.0930476791 }, { 100, 37.1560596513 }, { 101, 37.3871035497 }, { 106, 53.8542323041 }, { 107, 88.615837009 }, { 104, 91.8504515858 }, { 105, 100.0 } };
lqi_dist_t snr18[11] = { { 99, 0.0137080191912 }, { 98, 0.0274160383825 }, { 108, 30.4043865661 }, { 102, 31.1583276217 }, { 103, 32.7484578478 }, { 100, 32.8169979438 }, { 101, 32.9403701165 }, { 106, 50.6374228924 }, { 107, 88.2933516107 }, { 104, 91.8026045236 }, { 105, 100.0 } };
lqi_dist_t snr31[3] = { { 108, 52.9411764706 }, { 106, 70.5882352941 }, { 107, 100.0 } };
lqi_dist_t snr30[7] = { { 108, 55.9880239521 }, { 103, 56.4371257485 }, { 101, 56.5868263473 }, { 106, 69.6107784431 }, { 107, 94.4610778443 }, { 104, 96.2574850299 }, { 105, 100.0 } };

snr_lqi_t allSnr[29] = { { 24, 8, snr24 }, { 25, 10, snr25 }, { 26, 8, snr26 }, { 27, 9, snr27 }, { 20, 10, snr20 }, { 21, 9, snr21 }, { 22, 9, snr22 }, { 23, 9, snr23 }, { 28, 8, snr28 }, { 29, 8, snr29 }, { 0, 25, snr0 }, { 3, 45, snr3 }, { 2, 42, snr2 }, { 5, 46, snr5 }, { 7, 45, snr7 }, { 6, 45, snr6 }, { 8, 34, snr8 }, { 11, 20, snr11 }, { 10, 26, snr10 }, { 13, 13, snr13 }, { 12, 16, snr12 }, { 15, 11, snr15 }, { 14, 14, snr14 }, { 17, 11, snr17 }, { 16, 11, snr16 }, { 19, 10, snr19 }, { 18, 11, snr18 }, { 31, 3, snr31 }, { 30, 7, snr30 } };
uint8_t allSnr_len = 29;
# 5 "/home/tinyos/local/src/tinyos-2x/tos/lib/tossim/sim_lqi.c"
static uint8_t bi_search(lqi_dist_t *lqi, uint8_t low_i, uint8_t high_i, uint8_t coin);
#line 19
uint8_t sim_lqi_generate(double SNR)   ;
# 4 "DATA/TEMPDATA_FILE.h"
uint16_t TEMP_DATA[48][624] = { { 3712, 3712, 3004, 3050, 3069, 3117, 3122, 2136, 2140, 2173, 2180, 2228, 2489, 2579, 2573, 2540, 2647, 2477, 2475, 2094, 2030, 2027, 1995, 2581, 2572, 2193, 2182, 2182, 2183, 2188, 2138, 2136, 2084, 2051, 2006, 2393, 2678, 2741, 2739, 2778, 2682, 2608, 2558, 2651, 2294, 2281, 2236, 2177, 2153, 2121, 1771, 1772, 2323, 2354, 2456, 2607, 2663, 2595, 2834, 2809, 2618, 2563, 2522, 2508, 2461, 2403, 2403, 2300, 1935, 2658, 2698, 2806, 2520, 2565, 2477, 2469, 2489, 2381, 2369, 2356, 2338, 2340, 2340, 2333, 2302, 2282, 2228, 2213, 2210, 2193, 2190, 2178, 2169, 2166, 2165, 2160, 2150, 2137, 2133, 2117, 2102, 2090, 2086, 2076, 2081, 2070, 2061, 2061, 2038, 2025, 1885, 1880, 1879, 1879, 1872, 1871, 1893, 1924, 1997, 2198, 2259, 2307, 2332, 2334, 2332, 2453, 2508, 2516, 2565, 2581, 2773, 2777, 2782, 2782, 2756, 2711, 2715, 2711, 2709, 2691, 2684, 2693, 2664, 2662, 2672, 2651, 2576, 2403, 2384, 2302, 2264, 2252, 2233, 2232, 2232, 2233, 2217, 2213, 2207, 2201, 2187, 2181, 2181, 2177, 2162, 2163, 2159, 2148, 2128, 2122, 2115, 2110, 2089, 2083, 2072, 1972, 1975, 1975, 1963, 1965, 1953, 1973, 2033, 2042, 2092, 2123, 2364, 2422, 2432, 2456, 2480, 2507, 2577, 2581, 2624, 2635, 2900, 2906, 2914, 2906, 2894, 2907, 2892, 2890, 2885, 2862, 2838, 2839, 2831, 2838, 2826, 2820, 2782, 2754, 2726, 2692, 2666, 2626, 2555, 2543, 2535, 2530, 2523, 2517, 2502, 2499, 2494, 2492, 2485, 2467, 2463, 2464, 2457, 2453, 2445, 2439, 2434, 2428, 2428, 2425, 2423, 2418, 2409, 2408, 2410, 2396, 2392, 2390, 2377, 2377, 2371, 2368, 2361, 2361, 2351, 2350, 2349, 2348, 2349, 2346, 2335, 2338, 2335, 2331, 2328, 2329, 2324, 2320, 2321, 2324, 2315, 2312, 2311, 2313, 2314, 2313, 2311, 2302, 2300, 2300, 2297, 2298, 2292, 2292, 2289, 2288, 2290, 2288, 2281, 2279, 2279, 2275, 2271, 2270, 2269, 2267, 2268, 2268, 2259, 2258, 2259, 2259, 2262, 2255, 2256, 2250, 2250, 2245, 2241, 2239, 2239, 2237, 2238, 2240, 2235, 2233, 2232, 2229, 2227, 2224, 2220, 2222, 2222, 2220, 2223, 2219, 2214, 2213, 2209, 2210, 2209, 2206, 2206, 2208, 2207, 2205, 2202, 2200, 2198, 2196, 2194, 2190, 2189, 2190, 2188, 2183, 2185, 2181, 2180, 2180, 2179, 2174, 2174, 2172, 2171, 2171, 2167, 2167, 2164, 2161, 2162, 2160, 2159, 2156, 2153, 2153, 2151, 2148, 2149, 2147, 2147, 2148, 2149, 2149, 2149, 2147, 2142, 2143, 2141, 2142, 2138, 2138, 2137, 2138, 2138, 2136, 2133, 2132, 2137, 2134, 2133, 2132, 2138, 2183, 2282, 2316, 2342, 2398, 2394, 2400, 2446, 2529, 2542, 2616, 2636, 2613, 2653, 2626, 2612, 2656, 2696, 2697, 2712, 2729, 2765, 2789, 2808, 2800, 2802, 2768, 2801, 2837, 2864, 2853, 2864, 2917, 2957, 2941, 2461, 2380, 2322, 2329, 2381, 2380, 2364, 2307, 2342, 2328, 2334, 2312, 2278, 2246, 2204, 2183, 2181, 2181, 2181, 2171, 2161, 2145, 2140, 2162, 2173, 2267, 2309, 2340, 2378, 2395, 2395, 2413, 2432, 2427, 2431, 2432, 2432, 2433, 2428, 2426, 2419, 2376, 2341, 2335, 2308, 2299, 2244, 2090, 2266, 2130, 2139, 2189, 2203, 2224, 2188, 2190, 2223, 2228, 2290, 2314, 2307, 2277, 2276, 2276, 2270, 2233, 2208, 2214, 2195, 2183, 2198, 2196, 2179, 2183, 2169, 2158, 2158, 2141, 2130, 2199, 2258, 2281, 2284, 2290, 2292, 2294, 2295, 2297, 2296, 2296, 2302, 2302, 2302, 2305, 2308, 2310, 2312, 2310, 2311, 2306, 2300, 2304, 2307, 2306, 2301, 2301, 2300, 2295, 2293, 2293, 2292, 2292, 2294, 2296, 2294, 2294, 2295, 2289, 2285, 2285, 2284, 2281, 2280, 2279, 2279, 2277, 2273, 2272, 2271, 2268, 2271, 2269, 2267, 2265, 2262, 2262, 2258, 2258, 2263, 2262, 2262, 2262, 2261, 2260, 2259, 2265, 2263, 2261, 2258, 2259, 2255, 2253, 2256, 2260, 2262, 2251, 2255, 2253, 2245, 2248, 2249, 2249, 2244, 2249, 2247, 2113, 2112, 2114, 2113, 2113, 2113, 2114, 2117, 2116, 2118, 2254, 2283, 2288, 2247, 2224, 2194, 2145, 2138, 2141, 2138, 2158, 2162, 2155, 2155, 2165, 2167, 2173, 2188, 2205, 2212, 2210 }, 
{ 1633, 1622, 2057, 2115, 2121, 2177, 2181, 2192, 2202, 2244, 2241, 2316, 2553, 2726, 2737, 2749, 2776, 2706, 2671, 2047, 1979, 1977, 1942, 2791, 2729, 2219, 2194, 2196, 2188, 2194, 2115, 2116, 2045, 2009, 1943, 2570, 2855, 2866, 3049, 2918, 2882, 2855, 2830, 2862, 2293, 2273, 2226, 2134, 2123, 2078, 1742, 1739, 2615, 2615, 2771, 2873, 2972, 3132, 3355, 3291, 2778, 2720, 2653, 2647, 2582, 2478, 2461, 2385, 1857, 2882, 2906, 2998, 2596, 2690, 2597, 2581, 2580, 2427, 2415, 2406, 2397, 2401, 2396, 2388, 2372, 2331, 2285, 2180, 2164, 2144, 2143, 2116, 2106, 2104, 2100, 2094, 2083, 2049, 2049, 2023, 2006, 1987, 1985, 1983, 1979, 1975, 1973, 1972, 1950, 1942, 1808, 1804, 1803, 1804, 1798, 1800, 1840, 1871, 1977, 2261, 2328, 2388, 2418, 2417, 2412, 2569, 2644, 2659, 2707, 2730, 2913, 2928, 2929, 2943, 2888, 2850, 2848, 2865, 2857, 2825, 2833, 2824, 2761, 2757, 2756, 2712, 2581, 2356, 2331, 2261, 2207, 2192, 2167, 2169, 2157, 2157, 2139, 2130, 2128, 2120, 2120, 2109, 2109, 2109, 2095, 2090, 2091, 2066, 2040, 2039, 2026, 2024, 2005, 1998, 1991, 1904, 1906, 1905, 1897, 1900, 1895, 1908, 2000, 2022, 2103, 2150, 2467, 2554, 2572, 2583, 2611, 2655, 2726, 2731, 2778, 2790, 3094, 3099, 3110, 3117, 3098, 3105, 3080, 3057, 3043, 3021, 2983, 2979, 2945, 2906, 2898, 2880, 2802, 2759, 2714, 2675, 2647, 2594, 2501, 2496, 2485, 2478, 2473, 2467, 2451, 2448, 2445, 2436, 2437, 2409, 2408, 2409, 2403, 2398, 2385, 2378, 2375, 2372, 2371, 2366, 2363, 2358, 2355, 2353, 2353, 2337, 2335, 2331, 2322, 2321, 2314, 2312, 2304, 2301, 2295, 2293, 2290, 2289, 2288, 2283, 2277, 2277, 2274, 2271, 2269, 2267, 2261, 2258, 2259, 2261, 2255, 2253, 2256, 2257, 2256, 2256, 2253, 2250, 2245, 2247, 2241, 2237, 2234, 2233, 2227, 2230, 2226, 2224, 2214, 2214, 2212, 2206, 2203, 2202, 2200, 2199, 2200, 2199, 2191, 2190, 2190, 2191, 2192, 2187, 2186, 2181, 2180, 2175, 2171, 2170, 2171, 2169, 2168, 2170, 2160, 2157, 2156, 2154, 2150, 2151, 2147, 2146, 2146, 2147, 2150, 2147, 2143, 2143, 2141, 2139, 2138, 2136, 2135, 2136, 2137, 2136, 2131, 2131, 2127, 2124, 2124, 2116, 2113, 2115, 2114, 2109, 2107, 2102, 2099, 2101, 2102, 2092, 2090, 2090, 2090, 2089, 2076, 2075, 2074, 2074, 2080, 2081, 2081, 2073, 2070, 2067, 2071, 2065, 2063, 2061, 2061, 2066, 2067, 2068, 2067, 2062, 2057, 2061, 2065, 2063, 2054, 2054, 2053, 2054, 2051, 2050, 2047, 2047, 2050, 2047, 2049, 2049, 2127, 2280, 2357, 2488, 2540, 2623, 2631, 2666, 2705, 2739, 2792, 2795, 2829, 2840, 2849, 2858, 2873, 2888, 2926, 2936, 2978, 2985, 3021, 3063, 3057, 3062, 3070, 3065, 3058, 3096, 3152, 3171, 3175, 3265, 3256, 3247, 2394, 2324, 2263, 2281, 2370, 2358, 2326, 2335, 2331, 2309, 2347, 2290, 2222, 2201, 2168, 2077, 2047, 2032, 2020, 2010, 1977, 1956, 1960, 1933, 1940, 2243, 2304, 2330, 2362, 2392, 2396, 2416, 2428, 2430, 2429, 2424, 2422, 2422, 2421, 2414, 2407, 2375, 2344, 2338, 2308, 2294, 2231, 2043, 2247, 1897, 1828, 1965, 1927, 1978, 2069, 2076, 2191, 2181, 2278, 2265, 2339, 2275, 2274, 2301, 2269, 2210, 2200, 2207, 2164, 2173, 2136, 2114, 2096, 1974, 1955, 1939, 1932, 1901, 1885, 2195, 2241, 2274, 2288, 2286, 2275, 2273, 2273, 2271, 2273, 2276, 2279, 2275, 2275, 2281, 2284, 2286, 2289, 2283, 2285, 2279, 2275, 2281, 2278, 2275, 2275, 2273, 2271, 2268, 2263, 2264, 2264, 2268, 2258, 2259, 2258, 2259, 2261, 2253, 2251, 2247, 2247, 2245, 2242, 2239, 2239, 2236, 2236, 2232, 2231, 2232, 2230, 2224, 2225, 2218, 2218, 2220, 2214, 2215, 2222, 2226, 2226, 2227, 2226, 2222, 2221, 2217, 2216, 2215, 2217, 2217, 2212, 2214, 2217, 2219, 2219, 2209, 2213, 2213, 2211, 2209, 2204, 2202, 2200, 2215, 2216, 2107, 2110, 2112, 2110, 2109, 2110, 2109, 2112, 2113, 2114, 2335, 2305, 2218, 2054, 2042, 1992, 1909, 1846, 1873, 1845, 1851, 1877, 1869, 1874, 1888, 1870, 1905, 1975, 1910, 1929, 1936 }, 
{ 1651, 1648, 2537, 2579, 2581, 2657, 2650, 2690, 2672, 2695, 2695, 2785, 2940, 3377, 3351, 3354, 3394, 3326, 3219, 2226, 2143, 2135, 2083, 3292, 2788, 2315, 2309, 2343, 2338, 2326, 2265, 2255, 2160, 2122, 2055, 3005, 3159, 3455, 3600, 3538, 3533, 3536, 3528, 3518, 2437, 2406, 2375, 2303, 2277, 2221, 1793, 1793, 3139, 3159, 3345, 3335, 3395, 3452, 3589, 3618, 2651, 2610, 2591, 2582, 2526, 2435, 2430, 2389, 1893, 3461, 3503, 3572, 2803, 2519, 2502, 2504, 2508, 2450, 2446, 2435, 2433, 2430, 2433, 2430, 2420, 2379, 2353, 2339, 2321, 2301, 2296, 2283, 2267, 2260, 2255, 2251, 2251, 2240, 2216, 2209, 2188, 2179, 2175, 2172, 2163, 2129, 2123, 2123, 2098, 2076, 1892, 1883, 1883, 1883, 1873, 1875, 1968, 2055, 2130, 2321, 2371, 2410, 2424, 2426, 2421, 2470, 2513, 2527, 2553, 2566, 2657, 2659, 2663, 2671, 2660, 2637, 2638, 2639, 2634, 2628, 2625, 2626, 2610, 2604, 2594, 2581, 2530, 2393, 2389, 2324, 2284, 2278, 2249, 2245, 2236, 2236, 2218, 2210, 2204, 2198, 2193, 2187, 2185, 2182, 2177, 2171, 2168, 2143, 2123, 2118, 2112, 2103, 2036, 2026, 2018, 1889, 1885, 1884, 1879, 1877, 1875, 1895, 2108, 2137, 2191, 2217, 2411, 2448, 2452, 2457, 2464, 2477, 2497, 2504, 2549, 2557, 2708, 2717, 2712, 2711, 2725, 2746, 2773, 2777, 2778, 2785, 2771, 2771, 2757, 2747, 2744, 2736, 2709, 2681, 2660, 2637, 2622, 2600, 2552, 2548, 2536, 2520, 2511, 2508, 2494, 2490, 2485, 2484, 2481, 2465, 2463, 2459, 2456, 2450, 2445, 2439, 2437, 2433, 2432, 2428, 2425, 2422, 2418, 2414, 2412, 2403, 2402, 2394, 2386, 2381, 2376, 2376, 2366, 2365, 2361, 2360, 2358, 2357, 2353, 2353, 2348, 2347, 2342, 2341, 2341, 2337, 2335, 2334, 2334, 2333, 2332, 2332, 2331, 2330, 2330, 2328, 2327, 2320, 2321, 2321, 2315, 2314, 2312, 2311, 2310, 2308, 2304, 2302, 2298, 2298, 2296, 2285, 2284, 2283, 2282, 2281, 2280, 2278, 2273, 2273, 2273, 2271, 2271, 2267, 2266, 2262, 2263, 2255, 2252, 2248, 2247, 2245, 2245, 2243, 2237, 2237, 2235, 2232, 2228, 2227, 2226, 2224, 2225, 2222, 2222, 2218, 2216, 2212, 2210, 2208, 2208, 2206, 2203, 2200, 2200, 2199, 2199, 2195, 2194, 2192, 2188, 2185, 2181, 2181, 2181, 2179, 2178, 2170, 2169, 2167, 2164, 2163, 2161, 2158, 2156, 2156, 2151, 2151, 2149, 2145, 2143, 2140, 2141, 2138, 2138, 2137, 2132, 2132, 2131, 2130, 2130, 2128, 2127, 2126, 2127, 2126, 2126, 2125, 2126, 2124, 2123, 2124, 2122, 2122, 2122, 2122, 2121, 2122, 2121, 2121, 2121, 2122, 2126, 2343, 2810, 3109, 3197, 3347, 3352, 3358, 3358, 3379, 3421, 3401, 3427, 3439, 3438, 3449, 3440, 3455, 3497, 3507, 3548, 3565, 3631, 3615, 3609, 3632, 3631, 3650, 3656, 3683, 3716, 3702, 3701, 3750, 3588, 3546, 3400, 3356, 3245, 3040, 2925, 2914, 2909, 2913, 2906, 2991, 2959, 2912, 2940, 2923, 2976, 2824, 2668, 2643, 2609, 2581, 2531, 2508, 2495, 2484, 2474, 2430, 2445, 2463, 2491, 2520, 2525, 2549, 2551, 2556, 2553, 2553, 2554, 2553, 2552, 2551, 2547, 2528, 2506, 2500, 2477, 2467, 2387, 2183, 3086, 3149, 3173, 3295, 3291, 3351, 2533, 2543, 2530, 2530, 2535, 2531, 2521, 2579, 2567, 2561, 2559, 2553, 2555, 2546, 2533, 2531, 2526, 2521, 2508, 2467, 2439, 2414, 2411, 2393, 2388, 2346, 2380, 2397, 2397, 2401, 2401, 2403, 2404, 2406, 2407, 2408, 2416, 2412, 2416, 2424, 2426, 2426, 2422, 2426, 2427, 2424, 2425, 2424, 2425, 2422, 2413, 2413, 2412, 2408, 2407, 2408, 2410, 2411, 2412, 2410, 2412, 2413, 2414, 2404, 2403, 2404, 2401, 2402, 2400, 2398, 2397, 2396, 2393, 2392, 2391, 2390, 2386, 2386, 2384, 2383, 2379, 2379, 2380, 2381, 2378, 2387, 2384, 2382, 2378, 2377, 2369, 2364, 2363, 2364, 2359, 2357, 2358, 2359, 2357, 2356, 2356, 2355, 2353, 2353, 2354, 2352, 2348, 2346, 2345, 2348, 2348, 2227, 2223, 2225, 2225, 2226, 2225, 2225, 2226, 2226, 2226, 2973, 3090, 3165, 3226, 3213, 3167, 3145, 3168, 3127, 3165, 3188, 3226, 3232, 3236, 3212, 3225, 3265, 3264, 3291, 3329, 3342 }, 
{ 3795, 3789, 3208, 3239, 3271, 3296, 3296, 2314, 2316, 2356, 2351, 2383, 2439, 2580, 2586, 2588, 2600, 2600, 2558, 2119, 2041, 2039, 2012, 2388, 2250, 2096, 2102, 2102, 2112, 2112, 2081, 2085, 2047, 2028, 1990, 2437, 2450, 2545, 2192, 2381, 2334, 2382, 2419, 2346, 2233, 2220, 2198, 2186, 2181, 2156, 1869, 1870, 2396, 2385, 2445, 2463, 2518, 2320, 2241, 2304, 2234, 2209, 2181, 2187, 2219, 2130, 2120, 2138, 1941, 2330, 2334, 2254, 2164, 2206, 2160, 2171, 2181, 2151, 2151, 2154, 2153, 2154, 2155, 2157, 2162, 2158, 2143, 2181, 2173, 2169, 2169, 2155, 2147, 2141, 2140, 2139, 2136, 2132, 2118, 2114, 2107, 2100, 2099, 2096, 2090, 2082, 2078, 2077, 2061, 2053, 1932, 1924, 1924, 1924, 1914, 1915, 1922, 1932, 1962, 2052, 2085, 2118, 2132, 2138, 2142, 2222, 2260, 2270, 2305, 2318, 2496, 2501, 2503, 2507, 2519, 2502, 2502, 2502, 2508, 2508, 2508, 2509, 2499, 2497, 2496, 2486, 2444, 2334, 2323, 2271, 2239, 2229, 2214, 2211, 2206, 2205, 2190, 2186, 2181, 2180, 2169, 2162, 2159, 2157, 2148, 2145, 2143, 2126, 2108, 2105, 2100, 2097, 2084, 2075, 2071, 1984, 1983, 1981, 1977, 1975, 1971, 1973, 2007, 2013, 2036, 2046, 2180, 2222, 2228, 2238, 2251, 2274, 2319, 2324, 2357, 2361, 2582, 2585, 2590, 2592, 2608, 2616, 2631, 2630, 2628, 2628, 2623, 2624, 2618, 2616, 2614, 2610, 2592, 2581, 2560, 2540, 2525, 2498, 2449, 2444, 2434, 2428, 2424, 2422, 2408, 2408, 2403, 2401, 2399, 2384, 2383, 2382, 2379, 2374, 2370, 2367, 2364, 2361, 2359, 2355, 2355, 2352, 2347, 2345, 2343, 2335, 2334, 2330, 2324, 2319, 2318, 2316, 2310, 2307, 2307, 2304, 2302, 2301, 2300, 2298, 2292, 2290, 2289, 2288, 2284, 2283, 2283, 2280, 2279, 2279, 2275, 2275, 2275, 2275, 2273, 2273, 2273, 2269, 2269, 2267, 2264, 2264, 2263, 2261, 2259, 2258, 2258, 2255, 2252, 2251, 2251, 2245, 2243, 2242, 2240, 2241, 2238, 2238, 2234, 2234, 2233, 2234, 2233, 2232, 2231, 2230, 2228, 2226, 2223, 2220, 2219, 2216, 2215, 2214, 2211, 2210, 2208, 2204, 2203, 2202, 2201, 2200, 2198, 2197, 2198, 2196, 2192, 2192, 2192, 2191, 2187, 2185, 2183, 2184, 2183, 2183, 2181, 2181, 2181, 2180, 2175, 2172, 2169, 2167, 2167, 2166, 2166, 2159, 2158, 2156, 2155, 2153, 2151, 2151, 2149, 2146, 2145, 2143, 2144, 2141, 2141, 2139, 2138, 2138, 2136, 2134, 2132, 2129, 2131, 2128, 2128, 2128, 2127, 2126, 2127, 2126, 2124, 2124, 2124, 2124, 2123, 2122, 2123, 2122, 2121, 2121, 2120, 2118, 2119, 2118, 2120, 2118, 2121, 2156, 2287, 2418, 2437, 2497, 2504, 2521, 2530, 2465, 2414, 2374, 2330, 2312, 2283, 2283, 2278, 2276, 2273, 2275, 2290, 2289, 2300, 2303, 2310, 2311, 2312, 2263, 2269, 2291, 2302, 2314, 2321, 2370, 2283, 2258, 2150, 2110, 2063, 2174, 2099, 2118, 2124, 2153, 2151, 2136, 2145, 2147, 2177, 2177, 2146, 2172, 2172, 2172, 2175, 2181, 2171, 2157, 2153, 2186, 2213, 2226, 2235, 2259, 2284, 2312, 2314, 2334, 2348, 2351, 2355, 2358, 2361, 2361, 2362, 2360, 2358, 2345, 2328, 2322, 2305, 2298, 2259, 2123, 2443, 2458, 2462, 2523, 2497, 2418, 2177, 2171, 2182, 2187, 2144, 2179, 2184, 2110, 2165, 2172, 2176, 2181, 2181, 2181, 2177, 2171, 2168, 2169, 2168, 2186, 2214, 2216, 2215, 2206, 2191, 2165, 2195, 2208, 2210, 2224, 2220, 2222, 2222, 2225, 2222, 2226, 2231, 2232, 2231, 2231, 2231, 2233, 2234, 2234, 2236, 2235, 2235, 2234, 2235, 2234, 2232, 2231, 2232, 2230, 2229, 2229, 2229, 2230, 2233, 2233, 2234, 2232, 2232, 2232, 2229, 2228, 2226, 2227, 2224, 2224, 2224, 2224, 2222, 2222, 2220, 2220, 2219, 2218, 2217, 2214, 2213, 2214, 2212, 2212, 2212, 2211, 2211, 2211, 2211, 2213, 2211, 2208, 2210, 2211, 2210, 2212, 2210, 2207, 2207, 2207, 2210, 2206, 2208, 2208, 2202, 2202, 2201, 2201, 2200, 2200, 2199, 2117, 2116, 2116, 2118, 2118, 2118, 2119, 2119, 2120, 2121, 2395, 2447, 2466, 2481, 2482, 2482, 2468, 2473, 2460, 2461, 2469, 2469, 2473, 2490, 2490, 2494, 2512, 2524, 2506, 2505, 2500 }, 
{ 1532, 1524, 2113, 2178, 2182, 2224, 2227, 2237, 2247, 2301, 2333, 2426, 2652, 2741, 2768, 2786, 2765, 2732, 2695, 2135, 2042, 2042, 1999, 2867, 2770, 2342, 2324, 2294, 2271, 2252, 2191, 2191, 2100, 2061, 1991, 2639, 2938, 2899, 3072, 2923, 2878, 2858, 2849, 2822, 2377, 2337, 2296, 2217, 2198, 2151, 1736, 1737, 2611, 2616, 2773, 2892, 3007, 3141, 3307, 3216, 2761, 2732, 2662, 2659, 2604, 2520, 2507, 2445, 1857, 2861, 2892, 2998, 2565, 2710, 2612, 2606, 2589, 2463, 2446, 2442, 2444, 2444, 2434, 2432, 2408, 2373, 2315, 2254, 2243, 2215, 2212, 2190, 2181, 2173, 2171, 2163, 2159, 2139, 2117, 2108, 2090, 2074, 2076, 2069, 2063, 2026, 2013, 2010, 1996, 1965, 1798, 1792, 1790, 1790, 1790, 1789, 1882, 1947, 2039, 2334, 2418, 2489, 2512, 2511, 2507, 2674, 2751, 2773, 2802, 2799, 2862, 2870, 2862, 2871, 2835, 2803, 2804, 2794, 2794, 2823, 2786, 2802, 2749, 2735, 2738, 2705, 2581, 2354, 2336, 2269, 2230, 2218, 2199, 2194, 2182, 2181, 2157, 2149, 2143, 2133, 2127, 2119, 2118, 2114, 2102, 2100, 2099, 2077, 2051, 2042, 2036, 2025, 1978, 1961, 1942, 1812, 1806, 1808, 1800, 1798, 1798, 1820, 2025, 2056, 2147, 2198, 2526, 2615, 2628, 2646, 2670, 2723, 2804, 2807, 2851, 2866, 3012, 3016, 3039, 3007, 3020, 2998, 2973, 2965, 2959, 2958, 2925, 2935, 2891, 2899, 2906, 2880, 2812, 2727, 2680, 2644, 2621, 2581, 2511, 2500, 2490, 2481, 2471, 2469, 2452, 2448, 2440, 2438, 2437, 2413, 2410, 2409, 2405, 2400, 2392, 2389, 2382, 2376, 2376, 2373, 2370, 2369, 2363, 2358, 2356, 2345, 2343, 2335, 2330, 2322, 2319, 2320, 2308, 2305, 2300, 2300, 2296, 2294, 2293, 2291, 2285, 2283, 2281, 2279, 2277, 2275, 2275, 2274, 2268, 2267, 2267, 2269, 2268, 2267, 2268, 2267, 2267, 2261, 2261, 2259, 2255, 2253, 2248, 2247, 2245, 2245, 2236, 2230, 2226, 2226, 2224, 2208, 2208, 2205, 2204, 2205, 2206, 2204, 2199, 2198, 2195, 2195, 2191, 2188, 2187, 2185, 2184, 2179, 2176, 2174, 2175, 2171, 2170, 2167, 2160, 2160, 2155, 2152, 2147, 2148, 2144, 2143, 2143, 2145, 2141, 2140, 2140, 2138, 2135, 2134, 2134, 2132, 2125, 2124, 2124, 2124, 2121, 2120, 2121, 2116, 2111, 2106, 2102, 2100, 2100, 2096, 2094, 2080, 2079, 2082, 2079, 2078, 2077, 2076, 2071, 2068, 2065, 2063, 2061, 2059, 2058, 2058, 2058, 2056, 2053, 2053, 2050, 2045, 2046, 2045, 2044, 2043, 2042, 2041, 2043, 2041, 2040, 2041, 2039, 2039, 2034, 2035, 2034, 2034, 2034, 2032, 2032, 2030, 2032, 2031, 2033, 2034, 2039, 2122, 2337, 2510, 2545, 2637, 2645, 2676, 2708, 2766, 2816, 2820, 2852, 2878, 2879, 2894, 2919, 2933, 2963, 2977, 3033, 3030, 3074, 3086, 3097, 3098, 3102, 3081, 3082, 3117, 3179, 3195, 3196, 3293, 3270, 3255, 2747, 2709, 2704, 2667, 2677, 2691, 2695, 2657, 2663, 2674, 2657, 2643, 2572, 2559, 2497, 2421, 2364, 2351, 2340, 2322, 2283, 2251, 2245, 2226, 2219, 2307, 2349, 2383, 2424, 2453, 2456, 2474, 2481, 2484, 2484, 2484, 2483, 2482, 2480, 2475, 2474, 2446, 2421, 2417, 2389, 2381, 2315, 2121, 2422, 2227, 2248, 2345, 2373, 2430, 2421, 2447, 2541, 2574, 2582, 2609, 2584, 2581, 2555, 2555, 2551, 2488, 2482, 2475, 2434, 2416, 2393, 2394, 2375, 2287, 2243, 2209, 2199, 2189, 2174, 2247, 2312, 2332, 2334, 2339, 2348, 2345, 2345, 2346, 2347, 2346, 2349, 2351, 2349, 2351, 2358, 2360, 2361, 2345, 2345, 2348, 2350, 2354, 2356, 2355, 2352, 2348, 2344, 2339, 2339, 2339, 2337, 2337, 2334, 2332, 2331, 2331, 2331, 2321, 2318, 2315, 2316, 2315, 2314, 2314, 2315, 2307, 2304, 2308, 2306, 2304, 2298, 2298, 2297, 2294, 2295, 2294, 2292, 2292, 2293, 2296, 2297, 2296, 2296, 2290, 2288, 2286, 2286, 2283, 2285, 2285, 2285, 2283, 2283, 2283, 2282, 2279, 2278, 2277, 2275, 2275, 2271, 2271, 2270, 2273, 2275, 2175, 2175, 2175, 2175, 2175, 2171, 2171, 2176, 2175, 2174, 2457, 2474, 2484, 2396, 2343, 2276, 2220, 2206, 2206, 2213, 2240, 2244, 2255, 2266, 2279, 2286, 2311, 2329, 2352, 2357, 2383 }, 
{ 1641, 1644, 2221, 2266, 2275, 2320, 2320, 2341, 2345, 2407, 2428, 2498, 2617, 2265, 2242, 2255, 2254, 2249, 2255, 2157, 2072, 2068, 2014, 2321, 2296, 2203, 2206, 2275, 2268, 2257, 2200, 2185, 2106, 2069, 2008, 2702, 2921, 2234, 2391, 2305, 2269, 2281, 2273, 2309, 2355, 2330, 2306, 2240, 2215, 2161, 1751, 1754, 1996, 2006, 2094, 2163, 2196, 2217, 2396, 2422, 2278, 2236, 2221, 2224, 2188, 2139, 2141, 2115, 1872, 2212, 2218, 2263, 2216, 2215, 2222, 2226, 2220, 2175, 2168, 2159, 2161, 2149, 2158, 2163, 2145, 2129, 2083, 2236, 2227, 2216, 2214, 2197, 2184, 2180, 2178, 2175, 2174, 2157, 2140, 2135, 2114, 2101, 2099, 2098, 2096, 2066, 2056, 2055, 2031, 2012, 1857, 1853, 1849, 1850, 1844, 1845, 1962, 2061, 2163, 2380, 2425, 2452, 2464, 2460, 2453, 2489, 2510, 2517, 2514, 2512, 2569, 2570, 2575, 2581, 2580, 2566, 2568, 2571, 2568, 2565, 2562, 2559, 2533, 2533, 2530, 2512, 2458, 2333, 2318, 2247, 2212, 2197, 2181, 2177, 2167, 2168, 2146, 2139, 2136, 2132, 2122, 2116, 2116, 2109, 2095, 2096, 2094, 2072, 2054, 2051, 2047, 2041, 2008, 1999, 1995, 1868, 1867, 1867, 1859, 1857, 1855, 1886, 2176, 2207, 2285, 2317, 2511, 2552, 2555, 2563, 2569, 2581, 2584, 2584, 2581, 2581, 2632, 2624, 2632, 2637, 2649, 2661, 2681, 2680, 2682, 2656, 2652, 2646, 2637, 2623, 2619, 2615, 2599, 2581, 2559, 2533, 2522, 2489, 2438, 2432, 2425, 2418, 2412, 2407, 2401, 2400, 2390, 2388, 2386, 2376, 2374, 2368, 2366, 2360, 2358, 2354, 2351, 2347, 2345, 2339, 2336, 2334, 2331, 2325, 2322, 2313, 2313, 2304, 2296, 2290, 2289, 2287, 2275, 2275, 2274, 2270, 2269, 2267, 2267, 2266, 2263, 2261, 2258, 2253, 2255, 2257, 2255, 2252, 2250, 2250, 2249, 2245, 2244, 2244, 2243, 2244, 2242, 2234, 2234, 2231, 2228, 2228, 2228, 2226, 2226, 2221, 2218, 2219, 2220, 2217, 2216, 2210, 2208, 2204, 2204, 2205, 2205, 2200, 2196, 2194, 2193, 2193, 2193, 2188, 2186, 2187, 2185, 2181, 2181, 2179, 2178, 2177, 2178, 2174, 2173, 2173, 2171, 2166, 2160, 2157, 2158, 2158, 2155, 2157, 2154, 2150, 2147, 2138, 2139, 2136, 2134, 2132, 2129, 2129, 2128, 2125, 2124, 2125, 2123, 2121, 2118, 2114, 2111, 2110, 2110, 2109, 2110, 2107, 2107, 2101, 2099, 2095, 2091, 2091, 2093, 2093, 2090, 2089, 2089, 2083, 2079, 2078, 2074, 2072, 2067, 2068, 2069, 2069, 2067, 2067, 2067, 2067, 2066, 2065, 2067, 2067, 2063, 2065, 2066, 2066, 2068, 2068, 2068, 2067, 2065, 2067, 2065, 2065, 2068, 2067, 2067, 2071, 2081, 2192, 2220, 2201, 2200, 2184, 2187, 2213, 2238, 2266, 2308, 2328, 2334, 2338, 2360, 2370, 2383, 2391, 2429, 2441, 2468, 2472, 2496, 2509, 2526, 2525, 2526, 2489, 2486, 2508, 2535, 2548, 2557, 2610, 2444, 2431, 2374, 2340, 2328, 2266, 2265, 2270, 2267, 2275, 2272, 2273, 2277, 2261, 2260, 2254, 2239, 2198, 2146, 2143, 2139, 2128, 2095, 2085, 2071, 2069, 2057, 2244, 2283, 2332, 2383, 2417, 2421, 2443, 2449, 2457, 2457, 2466, 2465, 2465, 2465, 2465, 2463, 2451, 2432, 2429, 2407, 2399, 2342, 2168, 2318, 2092, 2114, 2204, 2209, 2252, 2205, 2201, 2167, 2166, 2181, 2173, 2151, 2187, 2176, 2172, 2151, 2174, 2163, 2157, 2135, 2140, 2134, 2118, 2124, 2074, 2047, 2029, 2019, 2001, 2002, 2215, 2266, 2287, 2290, 2299, 2302, 2304, 2308, 2308, 2308, 2313, 2318, 2321, 2320, 2323, 2325, 2328, 2329, 2333, 2331, 2330, 2332, 2333, 2330, 2330, 2330, 2328, 2324, 2320, 2320, 2321, 2323, 2322, 2318, 2319, 2318, 2317, 2318, 2312, 2310, 2307, 2308, 2307, 2304, 2304, 2302, 2299, 2298, 2298, 2298, 2296, 2293, 2291, 2290, 2292, 2291, 2290, 2288, 2287, 2290, 2294, 2293, 2291, 2292, 2287, 2283, 2285, 2284, 2286, 2286, 2285, 2287, 2286, 2285, 2286, 2285, 2281, 2279, 2277, 2275, 2274, 2273, 2271, 2269, 2283, 2282, 2194, 2194, 2198, 2194, 2197, 2197, 2196, 2199, 2200, 2198, 2371, 2367, 2328, 2189, 2173, 2148, 2102, 2072, 2073, 2079, 2094, 2106, 2103, 2118, 2134, 2141, 2166, 2181, 2181, 2196, 2205 }, 
{ 1776, 1773, 2108, 2148, 2187, 2205, 2209, 2223, 2233, 2275, 2278, 2286, 2335, 2439, 2423, 2432, 2439, 2434, 2420, 2139, 2076, 2067, 2039, 2401, 2324, 2159, 2155, 2156, 2161, 2161, 2138, 2136, 2096, 2071, 2021, 2369, 2440, 2509, 2349, 2349, 2289, 2305, 2346, 2280, 2255, 2246, 2235, 2185, 2187, 2153, 1861, 1862, 2345, 2350, 2408, 2447, 2488, 2377, 2436, 2452, 2323, 2298, 2279, 2274, 2259, 2211, 2206, 2181, 1979, 2300, 2302, 2330, 2243, 2288, 2254, 2255, 2259, 2206, 2203, 2202, 2199, 2201, 2202, 2200, 2200, 2187, 2173, 2212, 2208, 2201, 2197, 2185, 2181, 2180, 2180, 2175, 2171, 2159, 2150, 2141, 2133, 2122, 2121, 2118, 2115, 2116, 2112, 2109, 2090, 2080, 1955, 1949, 1947, 1948, 1941, 1940, 1950, 1967, 1994, 2128, 2171, 2213, 2228, 2235, 2236, 2328, 2369, 2382, 2415, 2433, 2598, 2605, 2613, 2615, 2605, 2557, 2546, 2545, 2551, 2555, 2551, 2562, 2549, 2549, 2541, 2545, 2502, 2380, 2362, 2308, 2277, 2265, 2249, 2247, 2242, 2241, 2226, 2224, 2220, 2217, 2202, 2194, 2193, 2193, 2182, 2181, 2181, 2160, 2143, 2138, 2135, 2133, 2119, 2114, 2107, 2018, 2017, 2018, 2010, 2014, 2005, 2008, 2046, 2055, 2077, 2100, 2279, 2338, 2339, 2346, 2357, 2392, 2436, 2444, 2480, 2494, 2715, 2714, 2726, 2723, 2738, 2740, 2676, 2695, 2692, 2708, 2698, 2697, 2688, 2700, 2695, 2698, 2684, 2665, 2643, 2620, 2604, 2577, 2511, 2500, 2491, 2488, 2483, 2481, 2469, 2466, 2460, 2456, 2456, 2441, 2438, 2437, 2431, 2426, 2422, 2419, 2416, 2410, 2409, 2406, 2406, 2403, 2400, 2395, 2394, 2386, 2387, 2379, 2373, 2369, 2364, 2363, 2357, 2357, 2352, 2353, 2349, 2351, 2347, 2346, 2338, 2339, 2337, 2334, 2332, 2332, 2331, 2327, 2324, 2326, 2322, 2321, 2319, 2320, 2318, 2316, 2316, 2312, 2310, 2309, 2306, 2305, 2302, 2303, 2300, 2300, 2298, 2297, 2294, 2294, 2292, 2288, 2285, 2285, 2283, 2283, 2283, 2283, 2277, 2276, 2275, 2278, 2277, 2273, 2273, 2270, 2269, 2275, 2262, 2261, 2261, 2258, 2257, 2256, 2252, 2252, 2249, 2246, 2244, 2245, 2241, 2239, 2240, 2238, 2240, 2237, 2235, 2234, 2232, 2230, 2228, 2226, 2225, 2225, 2224, 2224, 2223, 2220, 2219, 2218, 2214, 2210, 2206, 2207, 2206, 2203, 2203, 2197, 2193, 2192, 2191, 2187, 2187, 2185, 2185, 2184, 2181, 2181, 2181, 2180, 2180, 2178, 2179, 2173, 2175, 2171, 2170, 2166, 2166, 2165, 2163, 2164, 2165, 2163, 2164, 2163, 2158, 2158, 2161, 2159, 2158, 2156, 2157, 2158, 2157, 2155, 2155, 2154, 2153, 2152, 2153, 2152, 2155, 2181, 2272, 2372, 2393, 2453, 2454, 2448, 2431, 2383, 2355, 2322, 2316, 2310, 2314, 2312, 2307, 2314, 2335, 2339, 2355, 2367, 2370, 2384, 2401, 2409, 2408, 2386, 2394, 2416, 2425, 2423, 2441, 2475, 2440, 2423, 2283, 2251, 2230, 2249, 2261, 2270, 2271, 2269, 2271, 2265, 2258, 2261, 2281, 2278, 2224, 2215, 2217, 2214, 2219, 2212, 2204, 2194, 2189, 2205, 2221, 2241, 2255, 2294, 2324, 2351, 2349, 2372, 2393, 2396, 2400, 2401, 2401, 2401, 2401, 2397, 2392, 2371, 2347, 2343, 2319, 2310, 2268, 2151, 2363, 2349, 2335, 2340, 2344, 2310, 2204, 2205, 2232, 2241, 2236, 2251, 2274, 2238, 2244, 2247, 2247, 2255, 2261, 2251, 2243, 2246, 2236, 2236, 2208, 2204, 2200, 2195, 2190, 2187, 2185, 2230, 2266, 2274, 2274, 2292, 2290, 2290, 2293, 2294, 2291, 2286, 2294, 2296, 2295, 2294, 2297, 2296, 2299, 2298, 2300, 2299, 2295, 2292, 2293, 2292, 2288, 2287, 2286, 2286, 2284, 2283, 2278, 2283, 2292, 2294, 2296, 2297, 2295, 2292, 2291, 2285, 2285, 2287, 2285, 2285, 2282, 2280, 2279, 2277, 2278, 2275, 2276, 2272, 2271, 2268, 2269, 2263, 2262, 2263, 2265, 2265, 2268, 2269, 2268, 2269, 2269, 2270, 2271, 2272, 2267, 2268, 2267, 2263, 2265, 2265, 2264, 2258, 2261, 2262, 2255, 2255, 2258, 2254, 2255, 2253, 2252, 2145, 2147, 2146, 2146, 2147, 2147, 2146, 2153, 2147, 2146, 2307, 2358, 2397, 2404, 2400, 2402, 2334, 2351, 2333, 2333, 2363, 2368, 2377, 2376, 2374, 2373, 2365, 2357, 2343, 2329, 2332 }, 
{ 1732, 1729, 2104, 2116, 2142, 2181, 2181, 2195, 2201, 2239, 2219, 2280, 2472, 2572, 2584, 2571, 2592, 2579, 2543, 2107, 2033, 2033, 2002, 2495, 2393, 2169, 2161, 2153, 2149, 2153, 2098, 2092, 2061, 2039, 1998, 2388, 2552, 2651, 2461, 2444, 2426, 2462, 2438, 2412, 2255, 2241, 2204, 2154, 2142, 2118, 1826, 1824, 2388, 2383, 2508, 2581, 2563, 2486, 2618, 2638, 2479, 2434, 2393, 2383, 2326, 2283, 2278, 2217, 1947, 2393, 2406, 2450, 2328, 2425, 2352, 2334, 2365, 2269, 2257, 2249, 2234, 2239, 2245, 2244, 2235, 2203, 2174, 2182, 2174, 2159, 2161, 2150, 2145, 2138, 2141, 2139, 2130, 2127, 2116, 2108, 2101, 2094, 2090, 2083, 2086, 2085, 2074, 2075, 2051, 2051, 1920, 1914, 1913, 1914, 1907, 1906, 1921, 1933, 1963, 2132, 2187, 2242, 2263, 2262, 2259, 2376, 2432, 2446, 2488, 2509, 2714, 2721, 2729, 2726, 2698, 2647, 2637, 2617, 2632, 2610, 2604, 2605, 2586, 2586, 2577, 2572, 2510, 2362, 2344, 2284, 2251, 2240, 2224, 2223, 2210, 2211, 2199, 2190, 2189, 2186, 2181, 2176, 2174, 2173, 2164, 2162, 2159, 2142, 2122, 2116, 2112, 2106, 2095, 2089, 2083, 1991, 1990, 1991, 1981, 1981, 1977, 1981, 2018, 2022, 2060, 2090, 2304, 2365, 2373, 2395, 2415, 2443, 2512, 2517, 2562, 2571, 2847, 2852, 2852, 2853, 2859, 2847, 2818, 2807, 2810, 2788, 2752, 2755, 2738, 2740, 2738, 2736, 2710, 2682, 2655, 2630, 2612, 2581, 2506, 2497, 2484, 2480, 2475, 2472, 2455, 2454, 2449, 2445, 2443, 2424, 2421, 2420, 2413, 2410, 2406, 2398, 2394, 2390, 2389, 2388, 2386, 2382, 2377, 2375, 2375, 2364, 2362, 2357, 2346, 2345, 2340, 2337, 2334, 2334, 2328, 2327, 2322, 2324, 2322, 2324, 2315, 2313, 2314, 2308, 2308, 2306, 2302, 2300, 2300, 2299, 2294, 2296, 2294, 2295, 2292, 2291, 2290, 2287, 2285, 2285, 2285, 2285, 2281, 2281, 2280, 2277, 2274, 2275, 2272, 2272, 2269, 2265, 2263, 2262, 2262, 2261, 2259, 2258, 2255, 2255, 2252, 2253, 2252, 2251, 2249, 2247, 2247, 2239, 2239, 2239, 2237, 2237, 2236, 2235, 2231, 2231, 2229, 2224, 2222, 2222, 2222, 2220, 2218, 2217, 2220, 2217, 2215, 2212, 2211, 2209, 2208, 2207, 2209, 2208, 2205, 2203, 2202, 2198, 2198, 2196, 2192, 2191, 2187, 2185, 2185, 2185, 2182, 2177, 2176, 2177, 2176, 2171, 2169, 2169, 2167, 2165, 2162, 2162, 2159, 2159, 2156, 2156, 2157, 2155, 2151, 2153, 2149, 2148, 2145, 2143, 2144, 2144, 2144, 2144, 2146, 2143, 2140, 2141, 2139, 2141, 2136, 2136, 2137, 2135, 2135, 2134, 2134, 2134, 2130, 2132, 2133, 2132, 2133, 2182, 2307, 2359, 2369, 2432, 2443, 2467, 2472, 2435, 2414, 2405, 2410, 2409, 2420, 2412, 2410, 2428, 2458, 2467, 2490, 2507, 2518, 2526, 2542, 2546, 2536, 2507, 2533, 2562, 2567, 2593, 2614, 2666, 2655, 2635, 2328, 2278, 2230, 2242, 2265, 2273, 2274, 2237, 2246, 2252, 2249, 2245, 2238, 2225, 2196, 2167, 2168, 2168, 2172, 2170, 2163, 2147, 2150, 2177, 2186, 2246, 2258, 2296, 2322, 2356, 2356, 2377, 2395, 2397, 2398, 2395, 2394, 2395, 2390, 2387, 2384, 2354, 2330, 2324, 2298, 2286, 2229, 2116, 2331, 2192, 2181, 2250, 2251, 2262, 2169, 2171, 2202, 2206, 2199, 2245, 2243, 2228, 2232, 2231, 2232, 2222, 2207, 2213, 2198, 2193, 2187, 2174, 2177, 2185, 2187, 2171, 2169, 2155, 2149, 2190, 2230, 2243, 2252, 2267, 2266, 2270, 2271, 2269, 2269, 2260, 2272, 2270, 2273, 2274, 2275, 2280, 2282, 2280, 2283, 2279, 2277, 2274, 2270, 2266, 2259, 2261, 2265, 2273, 2262, 2261, 2263, 2257, 2259, 2260, 2258, 2257, 2259, 2253, 2249, 2245, 2244, 2247, 2246, 2243, 2241, 2239, 2239, 2237, 2235, 2239, 2234, 2234, 2236, 2230, 2230, 2227, 2228, 2226, 2228, 2228, 2227, 2228, 2227, 2230, 2227, 2226, 2224, 2225, 2224, 2224, 2221, 2221, 2222, 2223, 2226, 2220, 2220, 2221, 2216, 2215, 2216, 2215, 2213, 2219, 2220, 2112, 2112, 2112, 2114, 2113, 2113, 2110, 2112, 2112, 2111, 2325, 2360, 2363, 2330, 2301, 2278, 2211, 2221, 2207, 2198, 2214, 2228, 2227, 2233, 2236, 2237, 2247, 2256, 2246, 2255, 2269 }, 
{ 1657, 1653, 2239, 2273, 2304, 2334, 2334, 2354, 2357, 2414, 2433, 2499, 2608, 2332, 2334, 2333, 2344, 2337, 2353, 2187, 2097, 2096, 2054, 2333, 2417, 2308, 2299, 2304, 2303, 2293, 2224, 2209, 2135, 2099, 2039, 2617, 2807, 2394, 2550, 2463, 2438, 2422, 2435, 2445, 2392, 2369, 2343, 2275, 2251, 2208, 1793, 1795, 2181, 2189, 2291, 2363, 2421, 2486, 2647, 2656, 2446, 2418, 2388, 2388, 2365, 2288, 2288, 2286, 1915, 2402, 2412, 2476, 2377, 2365, 2353, 2365, 2383, 2332, 2319, 2304, 2302, 2303, 2298, 2299, 2290, 2274, 2246, 2277, 2272, 2254, 2254, 2236, 2224, 2217, 2215, 2212, 2206, 2194, 2178, 2171, 2156, 2144, 2143, 2139, 2131, 2102, 2097, 2094, 2073, 2054, 1897, 1894, 1894, 1893, 1884, 1885, 1936, 1970, 2045, 2223, 2260, 2285, 2297, 2300, 2298, 2334, 2369, 2381, 2409, 2424, 2517, 2502, 2504, 2518, 2509, 2508, 2512, 2522, 2525, 2518, 2518, 2520, 2499, 2500, 2491, 2480, 2449, 2353, 2341, 2279, 2243, 2233, 2216, 2210, 2201, 2198, 2181, 2181, 2175, 2169, 2161, 2151, 2151, 2147, 2138, 2137, 2134, 2114, 2093, 2093, 2089, 2083, 2049, 2043, 2038, 1927, 1929, 1925, 1922, 1918, 1918, 1932, 2062, 2099, 2163, 2184, 2355, 2392, 2396, 2404, 2407, 2421, 2423, 2426, 2459, 2465, 2598, 2603, 2606, 2606, 2622, 2641, 2673, 2673, 2671, 2663, 2655, 2652, 2651, 2649, 2641, 2635, 2624, 2610, 2599, 2581, 2578, 2554, 2507, 2502, 2490, 2483, 2480, 2477, 2465, 2462, 2459, 2455, 2455, 2441, 2439, 2436, 2432, 2430, 2425, 2424, 2422, 2418, 2416, 2413, 2410, 2406, 2403, 2403, 2402, 2392, 2390, 2386, 2383, 2377, 2373, 2372, 2369, 2368, 2358, 2358, 2357, 2378, 2381, 2358, 2358, 2355, 2356, 2354, 2356, 2356, 2355, 2353, 2354, 2356, 2355, 2354, 2479, 2373, 2391, 2352, 2352, 2353, 2355, 2353, 2352, 2351, 2348, 2348, 2349, 2351, 2350, 2349, 2347, 2347, 2345, 2345, 2342, 2342, 2343, 2339, 2344, 2341, 2343, 2343, 2345, 2344, 2342, 2344, 2345, 2343, 2333, 2343, 2343, 2344, 2343, 2328, 2364, 2384, 2347, 2347, 2348, 2345, 2347, 2347, 2349, 2349, 2365, 2340, 2349, 2351, 2354, 2353, 2352, 2355, 2353, 2355, 2359, 2355, 2355, 2355, 2357, 2357, 2362, 2363, 2367, 2369, 2376, 2379, 2379, 2383, 2383, 2396, 2402, 2406, 2404, 2412, 2411, 2386, 2422, 2422, 2423, 2428, 2428, 2429, 2430, 2436, 2433, 2433, 2446, 2442, 2452, 2486, 2522, 2522, 2535, 2534, 2533, 2542, 2543, 2482, 2494, 2472, 2486, 2493, 2518, 2525, 2526, 2528, 2571, 2548, 2549, 2553, 2572, 2517, 2559, 2566, 2616, 2646, 2726, 2732, 2732, 2767, 2760, 2772, 2785, 2813, 2831, 2846, 2856, 2849, 2876, 2880, 2856, 2905, 2927, 2931, 2960, 2951, 2978, 2990, 3070, 3067, 3070, 2965, 2987, 2986, 2994, 3009, 3017, 3064, 3014, 2975, 2921, 2889, 2899, 2887, 2949, 2971, 2979, 3157, 3189, 3216, 3228, 3228, 3348, 3370, 3493, 3614, 3717, 3730, 3726, 3795, 3779, 3808, 3887, 3958, 4011, 4183, 4189, 4254, 4307, 4308, 4263, 4328, 4399, 4395, 4400, 4555, 4585, 4644, 4644, 4695, 4592, 4841, 5304, 5375, 5697, 5917, 6164, 12213, 12215, 12215, 12215, 12215, 12215, 12215, 12215, 12215, 12215, 12215, 12215, 12215, 12215, 12215, 12215, 12215, 12215, 12215, 12215, 12215, 12215, 12215, 12215, 12215, 12215, 12215, 12215, 12215, 12215, 12215, 12215, 12215, 12215, 12215, 12215, 12215, 12215, 12215, 12215, 12215, 12215, 12215, 12215, 12215, 12215, 12215, 12215, 12215, 12215, 12215, 12215, 12215, 12215, 12215, 12215, 12215, 12215, 12215, 12215, 12215, 12215, 12215, 12215, 12215, 12215, 12215, 12215, 12215, 12215, 12215, 12215, 12215, 12215, 12215, 12215, 12215, 12215, 12215, 12215, 12215, 12215, 12215, 12215, 12215, 12215, 12215, 12215, 12215, 12215, 12215, 12215, 12215, 12215, 12215, 12215, 12215, 12215, 12215, 12215, 12215, 12215, 12215, 12215, 12215, 12215, 12215, 12215, 12215, 12215, 12215, 12215, 12215, 12215, 12215, 12215, 12215, 12215, 12215, 12215, 12215, 12215, 12215, 12215, 12215, 12215, 12215, 12215, 12215, 12215, 12215, 12215, 12215, 12215, 12215, 12215, 12215, 12215, 12215, 12215, 12215, 12215, 12215, 12215, 12215, 12215, 12215, 12215, 12215 }, 
{ 1579, 1575, 2017, 2075, 2083, 2136, 2142, 2159, 2160, 2208, 2213, 2285, 2530, 2673, 2680, 2703, 2677, 2665, 2620, 2061, 1985, 1987, 1940, 2790, 2756, 2278, 2263, 2234, 2224, 2225, 2142, 2144, 2059, 2016, 1945, 2559, 2843, 2855, 3037, 2837, 2811, 2791, 2770, 2744, 2331, 2302, 2260, 2156, 2139, 2090, 1701, 1702, 2600, 2600, 2780, 2921, 3013, 3143, 3312, 3253, 2793, 2739, 2678, 2669, 2603, 2489, 2479, 2400, 1844, 2859, 2882, 2986, 2577, 2714, 2616, 2616, 2593, 2431, 2418, 2413, 2411, 2405, 2397, 2397, 2380, 2334, 2292, 2218, 2200, 2181, 2181, 2156, 2139, 2136, 2130, 2126, 2116, 2087, 2075, 2051, 2028, 2017, 2011, 2008, 1998, 1952, 1945, 1943, 1929, 1894, 1776, 1767, 1772, 1771, 1757, 1761, 1828, 1908, 2010, 2328, 2406, 2467, 2484, 2481, 2477, 2663, 2753, 2784, 2835, 2859, 3054, 3075, 3074, 3049, 2994, 2948, 2944, 2936, 2924, 2903, 2865, 2876, 2792, 2778, 2790, 2738, 2587, 2337, 2318, 2247, 2207, 2189, 2173, 2168, 2155, 2157, 2136, 2125, 2123, 2112, 2099, 2092, 2089, 2085, 2075, 2073, 2072, 2046, 2020, 2013, 2002, 1998, 1980, 1970, 1965, 1873, 1873, 1871, 1867, 1865, 1861, 1883, 2008, 2038, 2135, 2198, 2515, 2596, 2612, 2628, 2666, 2724, 2825, 2833, 2907, 2924, 3249, 3239, 3242, 3245, 3232, 3219, 3156, 3136, 3133, 3076, 3029, 3020, 2957, 2930, 2922, 2912, 2827, 2759, 2694, 2652, 2626, 2578, 2495, 2487, 2479, 2469, 2459, 2458, 2438, 2435, 2430, 2426, 2421, 2399, 2396, 2394, 2388, 2383, 2376, 2369, 2367, 2359, 2359, 2353, 2352, 2347, 2341, 2337, 2335, 2327, 2325, 2316, 2309, 2301, 2298, 2297, 2286, 2285, 2281, 2280, 2278, 2275, 2274, 2272, 2267, 2265, 2261, 2260, 2257, 2256, 2255, 2251, 2250, 2252, 2248, 2247, 2246, 2246, 2245, 2243, 2242, 2239, 2236, 2235, 2229, 2228, 2225, 2225, 2223, 2220, 2218, 2214, 2212, 2211, 2208, 2192, 2190, 2188, 2187, 2185, 2183, 2184, 2181, 2181, 2180, 2178, 2177, 2173, 2172, 2171, 2169, 2157, 2155, 2153, 2152, 2150, 2146, 2145, 2136, 2136, 2134, 2132, 2131, 2132, 2132, 2131, 2130, 2128, 2127, 2125, 2123, 2118, 2116, 2114, 2116, 2116, 2114, 2110, 2107, 2106, 2102, 2102, 2101, 2101, 2095, 2089, 2082, 2079, 2075, 2077, 2074, 2076, 2075, 2069, 2071, 2062, 2058, 2063, 2060, 2057, 2049, 2043, 2047, 2047, 2054, 2054, 2056, 2048, 2045, 2043, 2045, 2039, 2036, 2036, 2037, 2041, 2040, 2041, 2041, 2039, 2035, 2037, 2040, 2039, 2032, 2030, 2030, 2031, 2028, 2024, 2025, 2025, 2026, 2024, 2032, 2026, 2039, 2260, 2408, 2520, 2543, 2626, 2636, 2667, 2680, 2717, 2762, 2754, 2788, 2794, 2812, 2820, 2831, 2850, 2912, 2927, 2961, 2963, 3006, 3026, 3040, 3056, 3059, 3033, 3040, 3096, 3139, 3157, 3167, 3266, 3233, 3226, 2647, 2590, 2551, 2665, 2796, 2810, 2723, 2649, 2659, 2691, 2633, 2593, 2496, 2502, 2410, 2271, 2216, 2218, 2182, 2175, 2143, 2090, 2100, 2087, 2080, 2302, 2320, 2361, 2398, 2430, 2433, 2453, 2460, 2461, 2463, 2459, 2454, 2453, 2453, 2447, 2437, 2409, 2383, 2375, 2346, 2334, 2271, 2068, 2267, 1987, 2000, 2109, 2138, 2216, 2320, 2336, 2457, 2506, 2726, 2720, 2686, 2572, 2536, 2529, 2528, 2463, 2431, 2425, 2388, 2385, 2337, 2343, 2298, 2159, 2116, 2051, 2043, 2001, 2007, 2234, 2289, 2301, 2324, 2334, 2311, 2309, 2311, 2308, 2308, 2312, 2315, 2308, 2310, 2318, 2322, 2324, 2319, 2324, 2326, 2313, 2308, 2316, 2318, 2312, 2312, 2309, 2306, 2302, 2300, 2302, 2299, 2300, 2294, 2294, 2294, 2295, 2294, 2285, 2282, 2279, 2279, 2277, 2275, 2273, 2271, 2267, 2265, 2265, 2264, 2261, 2259, 2257, 2257, 2251, 2252, 2253, 2251, 2250, 2254, 2259, 2260, 2259, 2260, 2252, 2253, 2250, 2251, 2251, 2253, 2249, 2247, 2249, 2249, 2250, 2248, 2243, 2245, 2243, 2242, 2240, 2236, 2236, 2234, 2242, 2244, 2142, 2141, 2141, 2140, 2139, 2139, 2139, 2142, 2141, 2142, 2348, 2329, 2276, 2147, 2122, 2070, 2001, 1998, 1990, 1997, 2018, 2027, 2039, 2051, 2060, 2069, 2086, 2126, 2146, 2163, 2175 }, 
{ 1566, 1563, 2430, 2484, 2512, 2528, 2533, 2538, 2546, 2570, 2602, 2722, 2853, 2257, 2258, 2234, 2243, 2233, 2260, 2067, 1974, 1979, 1895, 2198, 2265, 2169, 2159, 2212, 2203, 2194, 2136, 2116, 2034, 1997, 1939, 2870, 3090, 2180, 2285, 2263, 2224, 2179, 2173, 2227, 2339, 2306, 2235, 2175, 2132, 2074, 1628, 1634, 1860, 1872, 1977, 2036, 2100, 2181, 2312, 2361, 2234, 2176, 2147, 2140, 2112, 2059, 2056, 2023, 1752, 2132, 2120, 2200, 2133, 2167, 2185, 2166, 2187, 2090, 2095, 2092, 2089, 2088, 2083, 2075, 2069, 2053, 2000, 2170, 2153, 2142, 2141, 2169, 2112, 2108, 2099, 2096, 2090, 2077, 2059, 2049, 2032, 2022, 2018, 2016, 2017, 1987, 1975, 1977, 1947, 1928, 1771, 1765, 1763, 1764, 1761, 1761, 1895, 1997, 2075, 2285, 2349, 2389, 2396, 2383, 2383, 2435, 2457, 2461, 2464, 2471, 2508, 2513, 2514, 2508, 2482, 2491, 2496, 2504, 2492, 2483, 2481, 2481, 2459, 2456, 2464, 2423, 2381, 2229, 2207, 2130, 2089, 2089, 2067, 2060, 2048, 2046, 2032, 2022, 2023, 2018, 2002, 1991, 1985, 1982, 1965, 1965, 1959, 1940, 1926, 1935, 1930, 1941, 1874, 1882, 1889, 1740, 1753, 1749, 1735, 1733, 1734, 1748, 2077, 2112, 2184, 2229, 2438, 2485, 2487, 2502, 2504, 2514, 2518, 2517, 2519, 2524, 2567, 2565, 2567, 2567, 2577, 2584, 2599, 2594, 2593, 2577, 2569, 2568, 2558, 2549, 2539, 2543, 2529, 2508, 2477, 2451, 2436, 2400, 2334, 2326, 2314, 2309, 2300, 2297, 2288, 2285, 2279, 2278, 2275, 2265, 2262, 2259, 2254, 2251, 2251, 2247, 2246, 2234, 2231, 2224, 2216, 2217, 2213, 2204, 2204, 2190, 2189, 2181, 2181, 2173, 2167, 2173, 2156, 2151, 2156, 2150, 2154, 2154, 2151, 2150, 2150, 2149, 2149, 2148, 2159, 2145, 2147, 2151, 2148, 2147, 2138, 2129, 2125, 2124, 2126, 2118, 2121, 2111, 2110, 2108, 2115, 2112, 2116, 2106, 2103, 2106, 2105, 2107, 2109, 2105, 2108, 2100, 2098, 2098, 2097, 2091, 2096, 2092, 2085, 2079, 2079, 2078, 2080, 2075, 2075, 2068, 2074, 2065, 2064, 2069, 2070, 2077, 2078, 2074, 2078, 2075, 2073, 2067, 2049, 2047, 2046, 2044, 2039, 2041, 2036, 2035, 2021, 2013, 2009, 2007, 2003, 2002, 1998, 1997, 1996, 1989, 1991, 1997, 2000, 1998, 1997, 2013, 2000, 1997, 1999, 2006, 2013, 2011, 1998, 1978, 1979, 1971, 1970, 1981, 1987, 1987, 1988, 1975, 1972, 1970, 1957, 1957, 1959, 1948, 1951, 1949, 1942, 1937, 1940, 1940, 1937, 1942, 1941, 1949, 1945, 1950, 1946, 1942, 1947, 1942, 1960, 1961, 1964, 1962, 1963, 1964, 1956, 1961, 1955, 1949, 1969, 1969, 1975, 2133, 2216, 2153, 2150, 2107, 2102, 2101, 2097, 2116, 2127, 2159, 2168, 2173, 2183, 2185, 2198, 2228, 2258, 2262, 2290, 2314, 2326, 2341, 2365, 2363, 2361, 2350, 2335, 2420, 2437, 2429, 2436, 2503, 2274, 2251, 2233, 2269, 2271, 2205, 2139, 2088, 2092, 2104, 2095, 2131, 2119, 2107, 2096, 2102, 2100, 2085, 2067, 2067, 2046, 2067, 2046, 2006, 2020, 2002, 2010, 2181, 2212, 2260, 2307, 2358, 2362, 2400, 2407, 2415, 2412, 2421, 2416, 2413, 2413, 2412, 2411, 2405, 2383, 2379, 2353, 2346, 2281, 2078, 2263, 1929, 2016, 2116, 2114, 2181, 2181, 2178, 2138, 2139, 2024, 2010, 2022, 2021, 2012, 2019, 1994, 2015, 1987, 1998, 1985, 1963, 1967, 1960, 1944, 1922, 1888, 1876, 1869, 1848, 1824, 2121, 2196, 2222, 2227, 2237, 2249, 2249, 2252, 2254, 2255, 2257, 2261, 2263, 2265, 2265, 2269, 2272, 2271, 2275, 2273, 2273, 2275, 2276, 2275, 2274, 2273, 2271, 2268, 2263, 2263, 2263, 2258, 2254, 2248, 2245, 2243, 2239, 2243, 2227, 2225, 2224, 2220, 2219, 2218, 2218, 2216, 2207, 2210, 2208, 2206, 2204, 2198, 2203, 2200, 2201, 2206, 2202, 2204, 2208, 2221, 2218, 2218, 2218, 2216, 2209, 2215, 2212, 2214, 2216, 2203, 2198, 2203, 2204, 2204, 2200, 2198, 2200, 2203, 2202, 2192, 2188, 2188, 2184, 2182, 2210, 2211, 2144, 2145, 2137, 2138, 2138, 2135, 2132, 2138, 2136, 2134, 2379, 2314, 2241, 2090, 2062, 2033, 1979, 1958, 1975, 1939, 1991, 1998, 2015, 2012, 2039, 2052, 2073, 2091, 2096, 2106, 2112 }, 
{ 1534, 1520, 1743, 1796, 2271, 2348, 2355, 2362, 2379, 2479, 2484, 2435, 2481, 2361, 1979, 2020, 2101, 2149, 2043, 2000, 1917, 1906, 1846, 2611, 2505, 2366, 2243, 2167, 2290, 2256, 2139, 2129, 2045, 1999, 1928, 2633, 2666, 2223, 2154, 2145, 2090, 2090, 2113, 2219, 2236, 2207, 2161, 2089, 2057, 1995, 1642, 1647, 2738, 2741, 2815, 2163, 2127, 2181, 2253, 2334, 2530, 2539, 2511, 2516, 2514, 2475, 2469, 2410, 1833, 2148, 2139, 2169, 2129, 2565, 2570, 2576, 2585, 2592, 2606, 2604, 2581, 2581, 2564, 2579, 2528, 2452, 2283, 2266, 2254, 2226, 2220, 2196, 2177, 2163, 2161, 2157, 2147, 2132, 2108, 2098, 2077, 2068, 2069, 2064, 2055, 2026, 2020, 2022, 1997, 1979, 1781, 1775, 1774, 1773, 1762, 1765, 1776, 1808, 1868, 1991, 2032, 2062, 2081, 2083, 2085, 2187, 2232, 2241, 2278, 2304, 2559, 2579, 2581, 2609, 2712, 2778, 2825, 2878, 2922, 2972, 2981, 2994, 3024, 3021, 3007, 2991, 3076, 2555, 2501, 2361, 2288, 2269, 2234, 2230, 2217, 2215, 2185, 2181, 2175, 2167, 2155, 2144, 2141, 2136, 2119, 2114, 2111, 2081, 2057, 2050, 2044, 2040, 2022, 2019, 2009, 1903, 1903, 1902, 1893, 1891, 1889, 1885, 1908, 1924, 1960, 1977, 2132, 2181, 2187, 2200, 2217, 2239, 2288, 2295, 2340, 2349, 2663, 2677, 2680, 2688, 2773, 2854, 3112, 3125, 3148, 3260, 3283, 3284, 3287, 3349, 3353, 3363, 3417, 3395, 3304, 3272, 3176, 2993, 2726, 2704, 2682, 2667, 2653, 2648, 2620, 2613, 2605, 2599, 2594, 2564, 2560, 2556, 2550, 2540, 2529, 2520, 2516, 2508, 2504, 2498, 2496, 2488, 2484, 2480, 2477, 2462, 2461, 2449, 2439, 2432, 2428, 2427, 2412, 2409, 2404, 2402, 2400, 2397, 2397, 2393, 2387, 2382, 2379, 2376, 2370, 2368, 2366, 2363, 2359, 2357, 2352, 2349, 2348, 2344, 2343, 2343, 2340, 2336, 2334, 2332, 2326, 2325, 2322, 2322, 2319, 2317, 2315, 2312, 2308, 2304, 2304, 2296, 2295, 2292, 2287, 2287, 2285, 2283, 2275, 2274, 2274, 2274, 2273, 2275, 2270, 2266, 2264, 2256, 2256, 2251, 2251, 2251, 2250, 2249, 2242, 2241, 2238, 2232, 2228, 2225, 2224, 2224, 2224, 2222, 2222, 2220, 2217, 2209, 2207, 2206, 2203, 2202, 2200, 2200, 2197, 2197, 2194, 2193, 2190, 2185, 2184, 2181, 2177, 2176, 2175, 2173, 2170, 2159, 2157, 2150, 2151, 2147, 2147, 2143, 2138, 2136, 2131, 2134, 2134, 2132, 2130, 2130, 2129, 2126, 2121, 2122, 2121, 2114, 2113, 2114, 2113, 2113, 2110, 2111, 2109, 2111, 2106, 2107, 2108, 2107, 2103, 2100, 2100, 2100, 2096, 2096, 2096, 2094, 2096, 2096, 2096, 2094, 2098, 2246, 2463, 2557, 2527, 2331, 2296, 2232, 2159, 2118, 2089, 2085, 2083, 2083, 2085, 2087, 2087, 2090, 2119, 2122, 2143, 2145, 2169, 2177, 2190, 2207, 2202, 2180, 2181, 2189, 2198, 2211, 2213, 2249, 2043, 2026, 2063, 2070, 2089, 2074, 2110, 2120, 2116, 2257, 2253, 2334, 2460, 2516, 2618, 2597, 2678, 2744, 2736, 2738, 2726, 2696, 2651, 2588, 2559, 2510, 2485, 2519, 2549, 2598, 2622, 2606, 2599, 2581, 2566, 2556, 2554, 2520, 2502, 2502, 2500, 2495, 2490, 2461, 2426, 2420, 2386, 2374, 2322, 2150, 2359, 1946, 2089, 2085, 2090, 2079, 2049, 2071, 2095, 2106, 2128, 2160, 2188, 2452, 2488, 2497, 2504, 2559, 2581, 2596, 2604, 2602, 2610, 2618, 2686, 2629, 2546, 2508, 2511, 2451, 2426, 2423, 2430, 2433, 2433, 2432, 2420, 2417, 2416, 2414, 2412, 2405, 2405, 2404, 2402, 2401, 2398, 2395, 2395, 2390, 2390, 2385, 2383, 2379, 2376, 2373, 2359, 2355, 2347, 2341, 2338, 2336, 2334, 2334, 2334, 2333, 2332, 2331, 2328, 2310, 2305, 2302, 2299, 2298, 2292, 2290, 2290, 2288, 2287, 2284, 2282, 2280, 2278, 2275, 2273, 2271, 2272, 2273, 2273, 2273, 2280, 2281, 2279, 2278, 2277, 2276, 2275, 2274, 2275, 2275, 2268, 2266, 2265, 2268, 2267, 2265, 2264, 2259, 2257, 2259, 2251, 2249, 2246, 2244, 2244, 2240, 2240, 2152, 2153, 2152, 2153, 2152, 2153, 2154, 2154, 2155, 2158, 2408, 2386, 2319, 2211, 2160, 2108, 1975, 1937, 1934, 2018, 2120, 2126, 2125, 2116, 2090, 2080, 2084, 2085, 2092, 2090, 2091 }, 
{ 1589, 1579, 2081, 2120, 2147, 2181, 2181, 2196, 2200, 2258, 2293, 2356, 2571, 2631, 2662, 2674, 2672, 2657, 2613, 2168, 2087, 2085, 2045, 2710, 2692, 2336, 2324, 2320, 2314, 2306, 2221, 2217, 2155, 2114, 2051, 2524, 2756, 2772, 2967, 2815, 2806, 2790, 2772, 2757, 2404, 2383, 2351, 2263, 2243, 2199, 1800, 1800, 2567, 2568, 2719, 2833, 2930, 3044, 3250, 3205, 2788, 2751, 2701, 2700, 2637, 2543, 2541, 2485, 1917, 2791, 2822, 2922, 2597, 2693, 2602, 2603, 2610, 2498, 2484, 2476, 2471, 2468, 2461, 2463, 2449, 2418, 2386, 2314, 2304, 2285, 2281, 2261, 2248, 2239, 2236, 2233, 2223, 2210, 2181, 2172, 2158, 2136, 2130, 2132, 2118, 2078, 2069, 2068, 2060, 2024, 1867, 1859, 1856, 1857, 1845, 1845, 1907, 1971, 2058, 2270, 2349, 2406, 2426, 2429, 2428, 2563, 2623, 2641, 2695, 2720, 2924, 2935, 2937, 2940, 2894, 2865, 2861, 2857, 2843, 2827, 2819, 2815, 2760, 2757, 2749, 2708, 2598, 2422, 2400, 2339, 2306, 2289, 2273, 2271, 2262, 2259, 2240, 2234, 2228, 2221, 2214, 2211, 2208, 2206, 2198, 2196, 2190, 2174, 2151, 2145, 2136, 2128, 2058, 2039, 2015, 1902, 1898, 1898, 1893, 1890, 1890, 1896, 2027, 2050, 2126, 2150, 2411, 2486, 2497, 2514, 2538, 2581, 2639, 2645, 2716, 2733, 3034, 3040, 3040, 3040, 3042, 3040, 3026, 3019, 3016, 2981, 2943, 2939, 2905, 2870, 2859, 2847, 2790, 2747, 2713, 2688, 2670, 2626, 2598, 2581, 2549, 2541, 2535, 2531, 2519, 2514, 2508, 2506, 2504, 2483, 2479, 2480, 2475, 2471, 2464, 2455, 2454, 2451, 2449, 2445, 2442, 2437, 2433, 2432, 2430, 2418, 2417, 2409, 2403, 2396, 2393, 2391, 2383, 2381, 2377, 2376, 2374, 2371, 2369, 2367, 2361, 2359, 2356, 2354, 2351, 2347, 2347, 2343, 2341, 2341, 2337, 2338, 2338, 2337, 2337, 2337, 2335, 2333, 2333, 2333, 2328, 2326, 2323, 2322, 2320, 2319, 2317, 2312, 2310, 2307, 2304, 2294, 2292, 2290, 2289, 2287, 2287, 2285, 2280, 2279, 2277, 2278, 2277, 2273, 2271, 2269, 2268, 2259, 2257, 2255, 2253, 2251, 2250, 2245, 2239, 2237, 2235, 2233, 2230, 2228, 2227, 2227, 2226, 2224, 2225, 2222, 2221, 2219, 2218, 2217, 2217, 2216, 2212, 2212, 2211, 2210, 2209, 2208, 2206, 2202, 2200, 2192, 2187, 2187, 2185, 2181, 2181, 2171, 2167, 2166, 2165, 2162, 2162, 2160, 2159, 2157, 2153, 2151, 2148, 2146, 2145, 2145, 2145, 2146, 2144, 2143, 2139, 2136, 2137, 2135, 2137, 2135, 2134, 2136, 2135, 2133, 2130, 2133, 2134, 2134, 2132, 2131, 2131, 2130, 2133, 2132, 2129, 2126, 2128, 2127, 2128, 2129, 2130, 2180, 2314, 2445, 2475, 2573, 2581, 2600, 2637, 2670, 2722, 2735, 2761, 2776, 2788, 2795, 2804, 2820, 2853, 2873, 2913, 2915, 2949, 2961, 2971, 2985, 2998, 2978, 2984, 3023, 3061, 3076, 3080, 3161, 3155, 3128, 2728, 2677, 2635, 2632, 2725, 2726, 2719, 2669, 2655, 2653, 2659, 2638, 2545, 2533, 2499, 2436, 2402, 2394, 2381, 2350, 2324, 2300, 2300, 2285, 2276, 2400, 2428, 2451, 2475, 2502, 2504, 2514, 2510, 2517, 2515, 2513, 2503, 2503, 2501, 2500, 2498, 2477, 2451, 2445, 2422, 2412, 2359, 2152, 2336, 2300, 2370, 2437, 2445, 2495, 2365, 2376, 2450, 2457, 2620, 2624, 2586, 2575, 2545, 2533, 2526, 2465, 2457, 2449, 2412, 2410, 2398, 2388, 2368, 2295, 2259, 2237, 2238, 2218, 2215, 2317, 2339, 2353, 2356, 2362, 2368, 2367, 2369, 2370, 2371, 2373, 2379, 2379, 2382, 2385, 2388, 2386, 2386, 2384, 2388, 2387, 2392, 2389, 2387, 2384, 2384, 2381, 2379, 2372, 2369, 2369, 2372, 2373, 2369, 2368, 2371, 2371, 2372, 2367, 2365, 2363, 2361, 2360, 2357, 2357, 2355, 2354, 2350, 2349, 2349, 2347, 2348, 2343, 2343, 2341, 2341, 2341, 2338, 2338, 2335, 2337, 2339, 2338, 2338, 2335, 2334, 2335, 2334, 2335, 2334, 2334, 2334, 2333, 2333, 2334, 2333, 2329, 2331, 2331, 2325, 2326, 2327, 2324, 2324, 2319, 2319, 2196, 2197, 2196, 2196, 2196, 2195, 2195, 2196, 2197, 2197, 2362, 2384, 2364, 2334, 2326, 2312, 2308, 2318, 2320, 2334, 2357, 2375, 2377, 2381, 2384, 2384, 2415, 2428, 2451, 2457, 2468 }, 
{ 1573, 1564, 2418, 2475, 2482, 2537, 2543, 2563, 2569, 2608, 2638, 2730, 2935, 3135, 3168, 3182, 3161, 3141, 3112, 2162, 2065, 2058, 2020, 3128, 2972, 2405, 2383, 2347, 2326, 2314, 2216, 2204, 2114, 2061, 1998, 2958, 3194, 3231, 3414, 3299, 3296, 3277, 3270, 3270, 2414, 2376, 2341, 2242, 2224, 2175, 1759, 1762, 2924, 2944, 3141, 3231, 3325, 3473, 3644, 3591, 2952, 2912, 2836, 2810, 2730, 2581, 2573, 2512, 1862, 3214, 3235, 3333, 2812, 2845, 2712, 2723, 2677, 2532, 2525, 2522, 2513, 2509, 2508, 2504, 2484, 2443, 2401, 2285, 2268, 2256, 2255, 2234, 2215, 2214, 2208, 2200, 2193, 2176, 2151, 2143, 2121, 2107, 2108, 2098, 2093, 2059, 2050, 2051, 2028, 2005, 1831, 1824, 1826, 1826, 1816, 1818, 1905, 1981, 2077, 2357, 2448, 2526, 2554, 2549, 2544, 2717, 2784, 2802, 2824, 2825, 3070, 3079, 3086, 3064, 3010, 2958, 2951, 2936, 2912, 2892, 2888, 2880, 2829, 2835, 2808, 2754, 2616, 2378, 2361, 2297, 2254, 2238, 2212, 2210, 2200, 2197, 2178, 2168, 2163, 2153, 2143, 2136, 2136, 2133, 2125, 2118, 2116, 2092, 2067, 2055, 2051, 2040, 1998, 1983, 1974, 1849, 1849, 1846, 1837, 1835, 1834, 1856, 2053, 2082, 2159, 2205, 2584, 2682, 2695, 2720, 2745, 2790, 2866, 2873, 2929, 2947, 3204, 3158, 3207, 3219, 3252, 3206, 3142, 3132, 3130, 3065, 3012, 3012, 3001, 2946, 2929, 2917, 2845, 2775, 2726, 2680, 2658, 2618, 2541, 2533, 2520, 2512, 2503, 2500, 2481, 2480, 2471, 2467, 2464, 2435, 2432, 2429, 2426, 2417, 2407, 2400, 2397, 2391, 2389, 2386, 2384, 2378, 2375, 2371, 2369, 2361, 2357, 2349, 2339, 2336, 2334, 2332, 2325, 2325, 2319, 2318, 2316, 2316, 2310, 2308, 2308, 2304, 2300, 2299, 2298, 2296, 2296, 2293, 2295, 2295, 2286, 2284, 2285, 2283, 2282, 2280, 2279, 2275, 2276, 2273, 2273, 2272, 2267, 2268, 2265, 2263, 2260, 2262, 2256, 2251, 2249, 2236, 2237, 2239, 2236, 2235, 2235, 2228, 2222, 2219, 2222, 2219, 2218, 2218, 2215, 2210, 2206, 2193, 2190, 2187, 2185, 2183, 2182, 2181, 2179, 2176, 2173, 2169, 2163, 2162, 2163, 2162, 2161, 2161, 2156, 2154, 2155, 2150, 2148, 2147, 2144, 2143, 2140, 2140, 2138, 2138, 2140, 2138, 2138, 2130, 2128, 2124, 2118, 2116, 2118, 2118, 2120, 2108, 2107, 2101, 2102, 2095, 2097, 2096, 2095, 2095, 2092, 2090, 2089, 2084, 2080, 2078, 2075, 2078, 2076, 2076, 2073, 2070, 2067, 2066, 2063, 2063, 2067, 2067, 2070, 2065, 2063, 2065, 2063, 2065, 2062, 2063, 2061, 2063, 2063, 2061, 2061, 2061, 2063, 2061, 2065, 2063, 2071, 2402, 2474, 2779, 2830, 2983, 3020, 3070, 3094, 3126, 3178, 3182, 3228, 3248, 3233, 3240, 3261, 3280, 3330, 3340, 3380, 3378, 3420, 3443, 3456, 3455, 3459, 3432, 3440, 3483, 3527, 3531, 3526, 3598, 3549, 3526, 3395, 3348, 3310, 3255, 3260, 3259, 3241, 3161, 3131, 3206, 3197, 3145, 3076, 3065, 3000, 2849, 2703, 2702, 2680, 2639, 2581, 2552, 2542, 2516, 2506, 2425, 2446, 2461, 2495, 2517, 2517, 2523, 2527, 2532, 2532, 2528, 2526, 2525, 2524, 2520, 2517, 2491, 2465, 2457, 2427, 2415, 2348, 2154, 2833, 2918, 2991, 3113, 3109, 3166, 2842, 2859, 2938, 2957, 3058, 3029, 3024, 2967, 2943, 2923, 2927, 2811, 2757, 2803, 2742, 2718, 2700, 2692, 2667, 2565, 2518, 2477, 2462, 2420, 2406, 2320, 2357, 2375, 2380, 2386, 2389, 2389, 2390, 2391, 2390, 2390, 2394, 2394, 2393, 2397, 2398, 2399, 2399, 2399, 2400, 2400, 2399, 2399, 2397, 2394, 2390, 2389, 2384, 2381, 2379, 2379, 2378, 2378, 2374, 2375, 2373, 2372, 2372, 2362, 2360, 2357, 2357, 2357, 2353, 2350, 2349, 2347, 2345, 2345, 2344, 2340, 2336, 2335, 2334, 2334, 2331, 2331, 2330, 2333, 2333, 2334, 2335, 2335, 2334, 2328, 2327, 2322, 2322, 2322, 2318, 2316, 2319, 2318, 2317, 2316, 2316, 2316, 2312, 2313, 2311, 2308, 2305, 2304, 2302, 2306, 2308, 2204, 2203, 2202, 2201, 2199, 2199, 2200, 2200, 2200, 2199, 2778, 2862, 2935, 2982, 2971, 2953, 2910, 2917, 2904, 2945, 2983, 3005, 3027, 3028, 3020, 3026, 3056, 3078, 3105, 3125, 3154 }, 
{ 1655, 1651, 2117, 2141, 2181, 2243, 2247, 2267, 2314, 2423, 2414, 2480, 2698, 2880, 2073, 2132, 2296, 2481, 2309, 2059, 1997, 1990, 1957, 2929, 2398, 2181, 2180, 2196, 2255, 2242, 2162, 2149, 2085, 2053, 1992, 2688, 2982, 2510, 2373, 2349, 2298, 2286, 2293, 2143, 2227, 2208, 2181, 2123, 2102, 2066, 1739, 1741, 2873, 2883, 3044, 2432, 2377, 2455, 2461, 2437, 2384, 2378, 2360, 2357, 2308, 2273, 2273, 2216, 1914, 2315, 2314, 2369, 2230, 2388, 2329, 2334, 2353, 2226, 2222, 2217, 2212, 2208, 2208, 2207, 2178, 2157, 2133, 2243, 2240, 2218, 2218, 2200, 2186, 2185, 2180, 2180, 2169, 2154, 2134, 2129, 2104, 2096, 2095, 2089, 2081, 2060, 2058, 2057, 2033, 2019, 1867, 1859, 1857, 1857, 1853, 1852, 1877, 1905, 1968, 2181, 2236, 2287, 2304, 2299, 2297, 2433, 2512, 2521, 2581, 2582, 2824, 2844, 2844, 2855, 2871, 2862, 2855, 2864, 2849, 2858, 2851, 2852, 2824, 2827, 2824, 2774, 2722, 2469, 2445, 2348, 2300, 2284, 2257, 2254, 2240, 2239, 2222, 2210, 2208, 2200, 2191, 2179, 2176, 2179, 2163, 2159, 2161, 2134, 2110, 2108, 2098, 2096, 2075, 2071, 2061, 1955, 1955, 1953, 1946, 1947, 1941, 1947, 2016, 2040, 2098, 2141, 2367, 2451, 2453, 2470, 2496, 2532, 2593, 2603, 2648, 2678, 3007, 2999, 2998, 3002, 3032, 3084, 3039, 3033, 3030, 3023, 3017, 3022, 3020, 3008, 3018, 3017, 3007, 2992, 2956, 2926, 2890, 2798, 2645, 2635, 2619, 2610, 2599, 2596, 2581, 2579, 2571, 2567, 2562, 2538, 2535, 2533, 2528, 2521, 2512, 2504, 2500, 2494, 2494, 2485, 2484, 2481, 2477, 2473, 2470, 2457, 2456, 2444, 2435, 2426, 2424, 2422, 2411, 2409, 2403, 2401, 2401, 2398, 2400, 2396, 2390, 2387, 2383, 2381, 2375, 2371, 2371, 2369, 2366, 2366, 2362, 2359, 2359, 2361, 2359, 2358, 2357, 2350, 2347, 2346, 2340, 2337, 2335, 2334, 2334, 2333, 2329, 2327, 2320, 2320, 2319, 2309, 2308, 2310, 2306, 2306, 2304, 2302, 2296, 2294, 2296, 2295, 2294, 2292, 2290, 2288, 2285, 2278, 2276, 2272, 2271, 2269, 2269, 2268, 2260, 2260, 2254, 2255, 2247, 2245, 2243, 2243, 2242, 2241, 2239, 2236, 2233, 2231, 2227, 2226, 2223, 2222, 2219, 2219, 2220, 2219, 2217, 2212, 2210, 2208, 2207, 2199, 2198, 2197, 2198, 2192, 2191, 2181, 2180, 2179, 2179, 2173, 2173, 2170, 2166, 2162, 2159, 2157, 2157, 2154, 2156, 2155, 2153, 2149, 2147, 2147, 2147, 2142, 2140, 2139, 2137, 2139, 2139, 2138, 2139, 2134, 2132, 2134, 2133, 2136, 2127, 2128, 2126, 2126, 2123, 2124, 2123, 2120, 2123, 2120, 2122, 2118, 2124, 2335, 2513, 2643, 2664, 2545, 2490, 2406, 2281, 2215, 2183, 2187, 2187, 2185, 2194, 2198, 2203, 2212, 2246, 2249, 2272, 2277, 2312, 2316, 2334, 2339, 2344, 2326, 2318, 2333, 2349, 2371, 2384, 2436, 2300, 2308, 2365, 2375, 2401, 2404, 2457, 2455, 2449, 2446, 2445, 2465, 2457, 2433, 2418, 2406, 2379, 2310, 2279, 2271, 2255, 2247, 2259, 2239, 2234, 2230, 2221, 2392, 2432, 2478, 2508, 2512, 2505, 2513, 2510, 2506, 2503, 2490, 2481, 2481, 2480, 2476, 2471, 2440, 2411, 2404, 2374, 2364, 2307, 2143, 2432, 2065, 2165, 2277, 2286, 2333, 2355, 2375, 2467, 2473, 2441, 2459, 2467, 2413, 2442, 2448, 2443, 2410, 2411, 2381, 2359, 2337, 2332, 2329, 2339, 2252, 2237, 2255, 2247, 2232, 2221, 2342, 2373, 2381, 2383, 2387, 2384, 2383, 2385, 2385, 2383, 2380, 2385, 2383, 2383, 2383, 2386, 2385, 2383, 2381, 2377, 2375, 2372, 2371, 2372, 2368, 2363, 2359, 2355, 2352, 2350, 2347, 2349, 2350, 2350, 2349, 2349, 2348, 2346, 2334, 2334, 2332, 2330, 2329, 2326, 2324, 2323, 2320, 2319, 2316, 2316, 2314, 2311, 2307, 2307, 2304, 2304, 2302, 2304, 2304, 2303, 2304, 2303, 2302, 2302, 2298, 2298, 2298, 2297, 2297, 2293, 2292, 2290, 2293, 2291, 2289, 2289, 2284, 2283, 2284, 2281, 2278, 2276, 2273, 2271, 2269, 2271, 2163, 2162, 2160, 2162, 2160, 2161, 2161, 2164, 2163, 2163, 2581, 2524, 2469, 2410, 2383, 2310, 2181, 2134, 2119, 2138, 2276, 2296, 2304, 2313, 2326, 2330, 2334, 2353, 2371, 2377, 2382 }, 
{ 1645, 1637, 2230, 2260, 2302, 2319, 2326, 2347, 2343, 2394, 2412, 2469, 2581, 2441, 2420, 2408, 2428, 2403, 2397, 2128, 2030, 2027, 1958, 2321, 2312, 2187, 2181, 2217, 2212, 2203, 2147, 2126, 2051, 2016, 1957, 2552, 2726, 2397, 2535, 2499, 2498, 2473, 2463, 2482, 2356, 2335, 2307, 2229, 2198, 2141, 1683, 1687, 1967, 1971, 2045, 2114, 2173, 2257, 2373, 2410, 2285, 2261, 2247, 2249, 2223, 2171, 2181, 2147, 1812, 2196, 2205, 2272, 2226, 2252, 2251, 2252, 2260, 2205, 2203, 2200, 2196, 2195, 2192, 2190, 2181, 2165, 2135, 2196, 2190, 2180, 2179, 2161, 2146, 2143, 2138, 2136, 2130, 2115, 2102, 2095, 2080, 2072, 2073, 2069, 2059, 2036, 2030, 2027, 1998, 1983, 1838, 1832, 1830, 1830, 1825, 1825, 1871, 1902, 1989, 2113, 2165, 2187, 2208, 2213, 2214, 2256, 2290, 2300, 2306, 2315, 2402, 2400, 2395, 2404, 2403, 2399, 2399, 2417, 2414, 2412, 2408, 2412, 2394, 2392, 2391, 2373, 2337, 2251, 2233, 2159, 2134, 2126, 2108, 2100, 2095, 2093, 2077, 2071, 2067, 2063, 2055, 2039, 2038, 2033, 2020, 2021, 2017, 1999, 1985, 1983, 1981, 1975, 1937, 1930, 1928, 1806, 1802, 1802, 1800, 1797, 1796, 1803, 1955, 1973, 2015, 2046, 2230, 2268, 2272, 2265, 2283, 2280, 2292, 2296, 2326, 2328, 2432, 2425, 2428, 2433, 2457, 2476, 2504, 2504, 2498, 2500, 2502, 2496, 2490, 2481, 2475, 2469, 2451, 2451, 2436, 2412, 2388, 2376, 2353, 2342, 2336, 2331, 2331, 2327, 2320, 2322, 2314, 2312, 2312, 2302, 2297, 2294, 2290, 2286, 2283, 2279, 2276, 2275, 2270, 2264, 2264, 2256, 2253, 2249, 2248, 2239, 2236, 2230, 2221, 2216, 2210, 2211, 2201, 2200, 2196, 2195, 2195, 2195, 2193, 2191, 2187, 2183, 2181, 2181, 2181, 2181, 2181, 2180, 2180, 2177, 2175, 2171, 2168, 2166, 2165, 2163, 2165, 2155, 2156, 2154, 2155, 2155, 2154, 2151, 2151, 2146, 2149, 2143, 2141, 2140, 2140, 2132, 2132, 2130, 2129, 2129, 2130, 2124, 2120, 2118, 2116, 2115, 2114, 2112, 2110, 2112, 2110, 2102, 2100, 2102, 2102, 2104, 2103, 2105, 2104, 2103, 2099, 2094, 2087, 2085, 2087, 2082, 2080, 2080, 2077, 2072, 2070, 2060, 2061, 2059, 2055, 2051, 2049, 2048, 2045, 2045, 2045, 2045, 2043, 2044, 2043, 2045, 2039, 2039, 2037, 2039, 2039, 2034, 2032, 2025, 2024, 2020, 2018, 2022, 2021, 2020, 2014, 2014, 2010, 2003, 2000, 1998, 1998, 1997, 1994, 1994, 1990, 1993, 1991, 1992, 1991, 1994, 1995, 1995, 1994, 1993, 1990, 1991, 1991, 1993, 1991, 1996, 1996, 1996, 1997, 1996, 1996, 1993, 1992, 1992, 1996, 1998, 2006, 2025, 2181, 2162, 2159, 2149, 2147, 2153, 2169, 2183, 2210, 2223, 2236, 2237, 2257, 2264, 2267, 2282, 2310, 2318, 2347, 2351, 2371, 2381, 2396, 2402, 2405, 2401, 2392, 2412, 2430, 2439, 2450, 2498, 2400, 2381, 2334, 2320, 2300, 2283, 2277, 2274, 2273, 2281, 2277, 2288, 2285, 2282, 2285, 2280, 2276, 2262, 2250, 2255, 2249, 2235, 2223, 2207, 2204, 2198, 2188, 2250, 2285, 2308, 2348, 2381, 2384, 2405, 2410, 2419, 2416, 2428, 2427, 2426, 2423, 2422, 2424, 2403, 2383, 2377, 2359, 2351, 2298, 2109, 2254, 2075, 2069, 2121, 2121, 2165, 2155, 2160, 2192, 2196, 2215, 2217, 2224, 2244, 2239, 2238, 2237, 2232, 2222, 2228, 2217, 2220, 2218, 2215, 2204, 2181, 2167, 2155, 2153, 2134, 2130, 2187, 2226, 2249, 2253, 2258, 2265, 2268, 2267, 2267, 2270, 2273, 2271, 2275, 2276, 2277, 2277, 2284, 2282, 2287, 2286, 2285, 2286, 2287, 2286, 2286, 2285, 2284, 2280, 2274, 2279, 2279, 2276, 2273, 2271, 2271, 2271, 2271, 2270, 2264, 2259, 2258, 2258, 2258, 2256, 2254, 2252, 2249, 2248, 2247, 2246, 2245, 2243, 2241, 2239, 2235, 2230, 2230, 2226, 2223, 2230, 2230, 2229, 2228, 2227, 2220, 2222, 2224, 2224, 2224, 2218, 2217, 2217, 2216, 2217, 2215, 2211, 2216, 2215, 2214, 2214, 2214, 2212, 2210, 2208, 2197, 2200, 2117, 2120, 2121, 2120, 2117, 2120, 2121, 2121, 2116, 2121, 2315, 2289, 2265, 2194, 2172, 2143, 2086, 2076, 2073, 2071, 2077, 2079, 2079, 2086, 2089, 2089, 2103, 2115, 2124, 2128, 2132 }, 
{ 1601, 1592, 2309, 2353, 2354, 2403, 2405, 2426, 2430, 2472, 2489, 2581, 2716, 2510, 2487, 2487, 2463, 2434, 2412, 2163, 2066, 2063, 1997, 2630, 2493, 2301, 2286, 2310, 2288, 2277, 2212, 2199, 2112, 2071, 1979, 2909, 3145, 2581, 2653, 2522, 2533, 2544, 2553, 2550, 2361, 2328, 2289, 2209, 2181, 2132, 1729, 1735, 2376, 2388, 2460, 2536, 2566, 2611, 2744, 2786, 2479, 2445, 2419, 2412, 2384, 2322, 2306, 2273, 1850, 2553, 2563, 2627, 2427, 2387, 2377, 2377, 2388, 2319, 2312, 2306, 2306, 2307, 2302, 2298, 2283, 2251, 2209, 2249, 2239, 2224, 2222, 2198, 2172, 2161, 2157, 2152, 2149, 2136, 2112, 2108, 2089, 2079, 2080, 2074, 2075, 2041, 2032, 2029, 2012, 1987, 1819, 1813, 1810, 1812, 1810, 1816, 2034, 2141, 2277, 2517, 2554, 2581, 2590, 2581, 2575, 2595, 2618, 2620, 2621, 2615, 2628, 2628, 2630, 2643, 2632, 2605, 2606, 2612, 2610, 2608, 2614, 2605, 2577, 2578, 2567, 2535, 2490, 2334, 2316, 2247, 2214, 2196, 2181, 2179, 2166, 2164, 2143, 2140, 2134, 2129, 2121, 2108, 2106, 2104, 2093, 2090, 2083, 2067, 2044, 2041, 2034, 2030, 1992, 1983, 1973, 1845, 1844, 1841, 1834, 1839, 1841, 1916, 2311, 2350, 2426, 2469, 2659, 2706, 2706, 2717, 2719, 2726, 2720, 2713, 2702, 2697, 2749, 2747, 2751, 2754, 2773, 2779, 2797, 2794, 2792, 2773, 2757, 2755, 2747, 2724, 2717, 2713, 2683, 2660, 2627, 2600, 2581, 2549, 2490, 2483, 2472, 2462, 2455, 2451, 2437, 2433, 2427, 2426, 2424, 2401, 2398, 2395, 2389, 2384, 2376, 2373, 2367, 2365, 2363, 2360, 2355, 2351, 2345, 2345, 2341, 2334, 2330, 2322, 2318, 2311, 2304, 2301, 2293, 2291, 2291, 2289, 2287, 2283, 2281, 2279, 2279, 2275, 2274, 2270, 2269, 2267, 2266, 2263, 2264, 2261, 2263, 2261, 2260, 2261, 2258, 2258, 2259, 2253, 2250, 2249, 2244, 2244, 2240, 2238, 2238, 2234, 2234, 2232, 2228, 2223, 2221, 2214, 2212, 2209, 2208, 2208, 2207, 2203, 2200, 2197, 2200, 2198, 2199, 2194, 2195, 2193, 2189, 2181, 2181, 2178, 2176, 2173, 2172, 2173, 2170, 2169, 2165, 2161, 2157, 2153, 2155, 2153, 2153, 2151, 2151, 2145, 2146, 2139, 2138, 2136, 2135, 2133, 2133, 2128, 2129, 2128, 2127, 2128, 2124, 2121, 2116, 2110, 2110, 2111, 2110, 2106, 2104, 2096, 2094, 2092, 2091, 2089, 2089, 2085, 2084, 2083, 2081, 2079, 2077, 2074, 2074, 2071, 2067, 2067, 2065, 2067, 2061, 2060, 2057, 2059, 2059, 2060, 2059, 2058, 2061, 2060, 2056, 2056, 2057, 2055, 2055, 2055, 2055, 2053, 2053, 2052, 2054, 2052, 2053, 2054, 2055, 2055, 2073, 2220, 2336, 2384, 2414, 2518, 2531, 2557, 2581, 2614, 2653, 2665, 2677, 2678, 2703, 2714, 2727, 2740, 2783, 2784, 2823, 2824, 2859, 2870, 2883, 2877, 2873, 2821, 2822, 2849, 2884, 2896, 2899, 2957, 2802, 2771, 2704, 2674, 2641, 2578, 2528, 2523, 2522, 2555, 2551, 2556, 2546, 2528, 2530, 2537, 2510, 2450, 2396, 2386, 2369, 2352, 2326, 2291, 2285, 2279, 2262, 2334, 2361, 2396, 2430, 2457, 2461, 2479, 2481, 2486, 2486, 2483, 2477, 2474, 2473, 2468, 2467, 2447, 2428, 2422, 2400, 2388, 2320, 2149, 2531, 2463, 2514, 2627, 2636, 2675, 2478, 2470, 2437, 2417, 2309, 2299, 2284, 2318, 2307, 2308, 2305, 2304, 2289, 2308, 2301, 2292, 2283, 2273, 2260, 2229, 2208, 2179, 2175, 2166, 2159, 2279, 2320, 2336, 2337, 2343, 2346, 2348, 2349, 2350, 2349, 2350, 2351, 2353, 2355, 2359, 2362, 2361, 2360, 2359, 2359, 2361, 2361, 2359, 2357, 2355, 2350, 2347, 2345, 2340, 2338, 2339, 2341, 2341, 2340, 2339, 2339, 2340, 2338, 2331, 2331, 2327, 2328, 2327, 2323, 2324, 2321, 2320, 2320, 2319, 2318, 2317, 2315, 2313, 2311, 2308, 2307, 2306, 2306, 2307, 2307, 2308, 2308, 2306, 2302, 2296, 2296, 2293, 2292, 2291, 2291, 2290, 2290, 2288, 2289, 2288, 2286, 2288, 2287, 2286, 2285, 2284, 2279, 2277, 2277, 2297, 2298, 2220, 2220, 2218, 2218, 2218, 2220, 2218, 2220, 2220, 2222, 2537, 2558, 2572, 2526, 2498, 2465, 2409, 2408, 2407, 2437, 2478, 2484, 2494, 2518, 2530, 2542, 2570, 2571, 2589, 2594, 2602 }, 
{ 1535, 1536, 1558, 1567, 2114, 2181, 2188, 2239, 2315, 2439, 2334, 2337, 2424, 2228, 1872, 1869, 1930, 1978, 1904, 2002, 1859, 1858, 1789, 2670, 2273, 2217, 2181, 2214, 2263, 2236, 2134, 2112, 2026, 1981, 1909, 2617, 2751, 2161, 1913, 1915, 1894, 1910, 1965, 2128, 2242, 2205, 2145, 2053, 2016, 1942, 1567, 1573, 2616, 2633, 2782, 1941, 1926, 1961, 2014, 2140, 2277, 2308, 2306, 2312, 2326, 2294, 2290, 2224, 1777, 1931, 1930, 1932, 1936, 2241, 2320, 2320, 2347, 2363, 2375, 2369, 2367, 2353, 2356, 2357, 2333, 2289, 2204, 2253, 2237, 2208, 2207, 2190, 2180, 2167, 2161, 2154, 2148, 2133, 2094, 2089, 2071, 2061, 2059, 2053, 2051, 2022, 2015, 2013, 1991, 1972, 1761, 1755, 1755, 1753, 1751, 1749, 1749, 1754, 1777, 1873, 1900, 1938, 1956, 1955, 1956, 2055, 2098, 2116, 2157, 2174, 2426, 2441, 2447, 2458, 2555, 2637, 2666, 2718, 2745, 2803, 2809, 2820, 2848, 2850, 2861, 2816, 2835, 2461, 2432, 2321, 2263, 2242, 2223, 2216, 2206, 2204, 2181, 2174, 2167, 2161, 2149, 2132, 2130, 2125, 2106, 2100, 2100, 2071, 2050, 2043, 2042, 2038, 2023, 2018, 2014, 1913, 1911, 1910, 1903, 1900, 1901, 1894, 1911, 1910, 1911, 1917, 2026, 2060, 2064, 2077, 2086, 2112, 2162, 2167, 2209, 2219, 2520, 2522, 2511, 2517, 2610, 2679, 2885, 2901, 2906, 2976, 3020, 3031, 3065, 3138, 3139, 3139, 3104, 3082, 3049, 3013, 2952, 2843, 2654, 2647, 2628, 2616, 2605, 2600, 2581, 2579, 2573, 2567, 2561, 2539, 2534, 2532, 2526, 2514, 2507, 2499, 2497, 2491, 2489, 2483, 2481, 2475, 2469, 2464, 2461, 2446, 2443, 2434, 2424, 2415, 2412, 2409, 2396, 2393, 2390, 2387, 2387, 2383, 2383, 2381, 2374, 2369, 2365, 2363, 2358, 2353, 2349, 2349, 2347, 2347, 2341, 2337, 2335, 2334, 2334, 2334, 2334, 2328, 2327, 2327, 2317, 2317, 2313, 2312, 2309, 2308, 2305, 2303, 2300, 2300, 2298, 2291, 2290, 2288, 2286, 2286, 2283, 2279, 2273, 2273, 2272, 2271, 2269, 2269, 2267, 2265, 2263, 2257, 2253, 2254, 2252, 2250, 2249, 2247, 2245, 2241, 2241, 2237, 2234, 2233, 2232, 2229, 2228, 2226, 2224, 2220, 2216, 2207, 2204, 2204, 2202, 2202, 2197, 2195, 2194, 2194, 2191, 2188, 2185, 2182, 2181, 2179, 2174, 2175, 2175, 2173, 2172, 2165, 2162, 2155, 2154, 2149, 2148, 2147, 2144, 2143, 2141, 2141, 2139, 2137, 2136, 2134, 2132, 2128, 2127, 2126, 2122, 2118, 2118, 2117, 2118, 2116, 2114, 2116, 2112, 2112, 2111, 2110, 2111, 2109, 2107, 2106, 2106, 2104, 2102, 2102, 2103, 2102, 2100, 2099, 2101, 2100, 2104, 2265, 2459, 2463, 2428, 2212, 2159, 2090, 2017, 1988, 1973, 1974, 1971, 1971, 1973, 1973, 1977, 1979, 1991, 1992, 2005, 2005, 2018, 2023, 2031, 2039, 2039, 2036, 2033, 2044, 2047, 2055, 2057, 2100, 1820, 1814, 1816, 1817, 1831, 1835, 1921, 1964, 1962, 1900, 1896, 1994, 2105, 2126, 2272, 2287, 2352, 2394, 2373, 2377, 2375, 2366, 2341, 2295, 2289, 2264, 2237, 2443, 2477, 2513, 2529, 2530, 2530, 2520, 2520, 2513, 2512, 2496, 2474, 2472, 2472, 2470, 2468, 2440, 2408, 2402, 2369, 2360, 2306, 2117, 2302, 1741, 1960, 1860, 1865, 1853, 1828, 1832, 1832, 1831, 2028, 2124, 2173, 2140, 2109, 2118, 2126, 2161, 2172, 2188, 2191, 2204, 2225, 2212, 2255, 2251, 2214, 2198, 2190, 2139, 2097, 2296, 2335, 2335, 2335, 2338, 2327, 2324, 2322, 2317, 2315, 2312, 2320, 2317, 2314, 2314, 2314, 2315, 2314, 2314, 2310, 2309, 2306, 2304, 2301, 2299, 2292, 2287, 2281, 2279, 2277, 2276, 2276, 2274, 2267, 2266, 2265, 2264, 2262, 2245, 2241, 2238, 2236, 2234, 2231, 2230, 2228, 2227, 2225, 2223, 2220, 2219, 2215, 2210, 2210, 2205, 2206, 2210, 2210, 2210, 2213, 2212, 2214, 2214, 2211, 2209, 2209, 2209, 2207, 2207, 2201, 2200, 2201, 2199, 2200, 2198, 2196, 2191, 2190, 2190, 2185, 2185, 2182, 2181, 2181, 2179, 2179, 2085, 2085, 2085, 2084, 2085, 2087, 2086, 2089, 2090, 2090, 2349, 2277, 2165, 1954, 1940, 1846, 1739, 1685, 1691, 1800, 1957, 1955, 1927, 1873, 1847, 1841, 1837, 1840, 1845, 1844, 1844 }, 
{ 1571, 1569, 2384, 2435, 2432, 2521, 2522, 2534, 2538, 2584, 2594, 2697, 2902, 2959, 3040, 3018, 3030, 2935, 2978, 2187, 2088, 2085, 2040, 3061, 2925, 2347, 2337, 2342, 2334, 2322, 2243, 2234, 2155, 2108, 2036, 2974, 3202, 3174, 3325, 3151, 3108, 3056, 3060, 3077, 2431, 2404, 2358, 2263, 2241, 2194, 1728, 1729, 2845, 2857, 3058, 3228, 3290, 3440, 3601, 3553, 2854, 2821, 2773, 2759, 2678, 2540, 2530, 2472, 1842, 3120, 3165, 3271, 2726, 2753, 2671, 2673, 2637, 2510, 2502, 2498, 2494, 2490, 2483, 2480, 2459, 2417, 2370, 2307, 2296, 2281, 2279, 2252, 2240, 2236, 2230, 2223, 2216, 2192, 2165, 2153, 2126, 2113, 2109, 2104, 2095, 2055, 2049, 2047, 2027, 1998, 1828, 1821, 1821, 1820, 1814, 1815, 1914, 2004, 2122, 2417, 2504, 2574, 2581, 2581, 2573, 2639, 2694, 2704, 2730, 2741, 2829, 2833, 2835, 2836, 2819, 2786, 2788, 2783, 2784, 2777, 2771, 2766, 2740, 2736, 2733, 2704, 2605, 2404, 2384, 2326, 2282, 2268, 2248, 2245, 2235, 2233, 2210, 2202, 2191, 2181, 2181, 2175, 2172, 2169, 2160, 2157, 2152, 2129, 2100, 2089, 2082, 2072, 1982, 1957, 1942, 1811, 1810, 1807, 1802, 1800, 1798, 1812, 2095, 2129, 2208, 2253, 2604, 2686, 2689, 2708, 2715, 2739, 2742, 2750, 2771, 2775, 2908, 2913, 2915, 2914, 2937, 2934, 2971, 2966, 2966, 2951, 2935, 2932, 2911, 2889, 2882, 2871, 2822, 2761, 2715, 2687, 2669, 2628, 2598, 2579, 2550, 2534, 2528, 2526, 2504, 2503, 2500, 2494, 2491, 2463, 2461, 2458, 2453, 2447, 2441, 2432, 2430, 2424, 2422, 2417, 2416, 2411, 2408, 2402, 2401, 2391, 2388, 2381, 2373, 2367, 2365, 2362, 2350, 2352, 2347, 2345, 2343, 2339, 2337, 2336, 2334, 2330, 2330, 2328, 2326, 2323, 2322, 2320, 2318, 2319, 2319, 2320, 2320, 2319, 2318, 2317, 2318, 2312, 2310, 2308, 2303, 2300, 2298, 2296, 2293, 2292, 2287, 2285, 2283, 2280, 2277, 2267, 2265, 2263, 2263, 2259, 2259, 2257, 2253, 2252, 2251, 2251, 2248, 2246, 2245, 2243, 2241, 2232, 2229, 2225, 2222, 2220, 2219, 2217, 2209, 2207, 2204, 2198, 2199, 2199, 2197, 2196, 2196, 2195, 2192, 2190, 2190, 2185, 2185, 2183, 2183, 2181, 2180, 2180, 2180, 2179, 2176, 2174, 2175, 2171, 2166, 2157, 2153, 2152, 2151, 2148, 2146, 2135, 2135, 2135, 2132, 2131, 2130, 2128, 2124, 2124, 2119, 2118, 2116, 2112, 2110, 2109, 2108, 2108, 2106, 2105, 2102, 2097, 2098, 2099, 2096, 2094, 2095, 2094, 2094, 2091, 2091, 2092, 2092, 2091, 2089, 2089, 2089, 2089, 2089, 2089, 2087, 2087, 2086, 2087, 2087, 2089, 2092, 2332, 2581, 2823, 2842, 2929, 2941, 2983, 2967, 3033, 3104, 3066, 3118, 3127, 3137, 3146, 3163, 3194, 3244, 3241, 3314, 3304, 3371, 3385, 3377, 3385, 3388, 3362, 3369, 3413, 3489, 3511, 3519, 3614, 3606, 3594, 3453, 3406, 3393, 3314, 3282, 3258, 3250, 3174, 3167, 3262, 3237, 3200, 3139, 3118, 3070, 2887, 2776, 2754, 2718, 2678, 2616, 2581, 2577, 2544, 2539, 2472, 2481, 2499, 2530, 2545, 2547, 2555, 2567, 2567, 2565, 2559, 2549, 2549, 2546, 2542, 2539, 2505, 2484, 2473, 2452, 2441, 2373, 2128, 2753, 2877, 2991, 3175, 3183, 3263, 2786, 2802, 2827, 2838, 2907, 2915, 2892, 2898, 2876, 2873, 2864, 2829, 2820, 2789, 2762, 2755, 2737, 2729, 2685, 2581, 2530, 2496, 2483, 2458, 2441, 2365, 2390, 2408, 2433, 2418, 2416, 2417, 2416, 2414, 2417, 2416, 2421, 2423, 2422, 2424, 2425, 2425, 2422, 2420, 2422, 2424, 2422, 2419, 2418, 2420, 2407, 2404, 2404, 2400, 2400, 2398, 2402, 2401, 2389, 2390, 2394, 2396, 2402, 2392, 2386, 2383, 2383, 2383, 2379, 2378, 2377, 2374, 2373, 2371, 2370, 2366, 2364, 2359, 2358, 2357, 2359, 2360, 2361, 2359, 2361, 2364, 2365, 2365, 2365, 2359, 2358, 2353, 2353, 2351, 2345, 2347, 2345, 2343, 2345, 2343, 2344, 2342, 2341, 2343, 2339, 2335, 2334, 2334, 2334, 2333, 2334, 2185, 2185, 2183, 2183, 2183, 2184, 2183, 2185, 2184, 2183, 2710, 2771, 2791, 2835, 2866, 2867, 2901, 2941, 2934, 3001, 3039, 3078, 3081, 3094, 3098, 3106, 3158, 3167, 3186, 3198, 3239 }, 
{ 1769, 1761, 2124, 2173, 2198, 2233, 2236, 2249, 2251, 2304, 2282, 2303, 2365, 2523, 2525, 2530, 2526, 2527, 2442, 2090, 2022, 2020, 1987, 2341, 2254, 2071, 2077, 2076, 2083, 2085, 2068, 2068, 2024, 1997, 1963, 2320, 2402, 2481, 2361, 2440, 2440, 2468, 2510, 2481, 2246, 2236, 2202, 2180, 2161, 2129, 1838, 1835, 2269, 2273, 2357, 2363, 2375, 2409, 2337, 2256, 2214, 2194, 2214, 2215, 2247, 2197, 2180, 2156, 1893, 2431, 2447, 2458, 2154, 2174, 2151, 2155, 2168, 2133, 2131, 2133, 2132, 2132, 2134, 2137, 2138, 2133, 2116, 2137, 2129, 2126, 2126, 2109, 2105, 2100, 2099, 2098, 2091, 2090, 2075, 2072, 2059, 2053, 2051, 2049, 2044, 2028, 2028, 2026, 2009, 1996, 1867, 1865, 1862, 1861, 1858, 1856, 1881, 1897, 1928, 2002, 2030, 2059, 2071, 2073, 2073, 2152, 2187, 2199, 2236, 2251, 2433, 2441, 2443, 2449, 2456, 2461, 2466, 2471, 2479, 2481, 2482, 2476, 2467, 2463, 2461, 2449, 2411, 2292, 2281, 2225, 2192, 2181, 2163, 2164, 2153, 2151, 2142, 2138, 2133, 2131, 2120, 2115, 2112, 2108, 2100, 2096, 2095, 2078, 2059, 2053, 2046, 2047, 2033, 2024, 2021, 1942, 1937, 1937, 1932, 1931, 1927, 1930, 1966, 1971, 1998, 2009, 2119, 2156, 2160, 2167, 2179, 2196, 2236, 2238, 2277, 2280, 2505, 2508, 2511, 2510, 2531, 2545, 2581, 2577, 2579, 2577, 2570, 2571, 2567, 2555, 2557, 2549, 2531, 2510, 2488, 2471, 2456, 2432, 2390, 2384, 2374, 2370, 2368, 2366, 2352, 2351, 2347, 2345, 2344, 2330, 2328, 2326, 2324, 2320, 2315, 2311, 2308, 2307, 2306, 2303, 2303, 2298, 2295, 2291, 2291, 2283, 2283, 2277, 2270, 2267, 2266, 2264, 2255, 2255, 2252, 2251, 2249, 2247, 2246, 2245, 2239, 2237, 2236, 2236, 2232, 2231, 2230, 2226, 2226, 2225, 2223, 2223, 2222, 2222, 2221, 2222, 2220, 2214, 2215, 2215, 2212, 2210, 2209, 2206, 2204, 2203, 2202, 2200, 2198, 2197, 2195, 2190, 2187, 2187, 2185, 2183, 2183, 2184, 2181, 2179, 2180, 2181, 2181, 2181, 2179, 2173, 2175, 2169, 2164, 2164, 2163, 2163, 2161, 2163, 2158, 2158, 2156, 2153, 2147, 2146, 2146, 2145, 2143, 2143, 2145, 2143, 2141, 2136, 2136, 2137, 2138, 2147, 2134, 2134, 2131, 2130, 2131, 2127, 2124, 2122, 2118, 2118, 2116, 2117, 2116, 2114, 2112, 2110, 2106, 2102, 2103, 2098, 2098, 2098, 2096, 2097, 2094, 2094, 2094, 2089, 2089, 2089, 2087, 2083, 2082, 2081, 2081, 2076, 2077, 2076, 2077, 2076, 2076, 2077, 2076, 2076, 2069, 2071, 2073, 2074, 2068, 2067, 2069, 2071, 2068, 2066, 2065, 2066, 2064, 2064, 2068, 2069, 2076, 2153, 2324, 2409, 2424, 2444, 2446, 2450, 2437, 2446, 2464, 2438, 2442, 2442, 2433, 2443, 2448, 2448, 2454, 2462, 2486, 2485, 2506, 2507, 2473, 2419, 2389, 2279, 2270, 2255, 2260, 2264, 2268, 2302, 2239, 2236, 2171, 2162, 2161, 2243, 2238, 2241, 2239, 2193, 2187, 2202, 2187, 2187, 2179, 2181, 2181, 2140, 2156, 2155, 2158, 2150, 2131, 2114, 2120, 2163, 2181, 2187, 2195, 2224, 2250, 2273, 2275, 2296, 2308, 2311, 2314, 2318, 2321, 2322, 2322, 2321, 2320, 2312, 2290, 2288, 2267, 2259, 2218, 2088, 2434, 2385, 2381, 2419, 2406, 2420, 2181, 2181, 2184, 2188, 2126, 2171, 2178, 2136, 2155, 2163, 2164, 2163, 2151, 2155, 2141, 2136, 2129, 2123, 2135, 2186, 2180, 2165, 2164, 2148, 2135, 2121, 2149, 2165, 2168, 2180, 2179, 2181, 2181, 2181, 2181, 2185, 2190, 2192, 2192, 2190, 2192, 2195, 2196, 2198, 2199, 2200, 2198, 2196, 2200, 2200, 2197, 2196, 2200, 2199, 2198, 2197, 2200, 2199, 2201, 2203, 2203, 2203, 2203, 2203, 2203, 2202, 2202, 2200, 2197, 2197, 2197, 2197, 2194, 2194, 2192, 2190, 2191, 2191, 2188, 2188, 2188, 2188, 2186, 2181, 2186, 2183, 2185, 2186, 2187, 2187, 2183, 2183, 2183, 2185, 2182, 2181, 2181, 2181, 2180, 2181, 2182, 2179, 2181, 2181, 2179, 2179, 2179, 2177, 2177, 2179, 2177, 2098, 2097, 2096, 2098, 2098, 2097, 2096, 2098, 2099, 2098, 2428, 2445, 2460, 2445, 2438, 2420, 2391, 2386, 2369, 2390, 2390, 2400, 2410, 2414, 2400, 2407, 2422, 2414, 2415, 2421, 2435 }, 
{ 1648, 1646, 2028, 2081, 2098, 2134, 2139, 2156, 2165, 2210, 2237, 2326, 2581, 2710, 2751, 2746, 2748, 2726, 2707, 2075, 2006, 2005, 1963, 2750, 2690, 2233, 2232, 2235, 2218, 2232, 2139, 2144, 2072, 2033, 1974, 2530, 2805, 2839, 3014, 2911, 2899, 2868, 2853, 2844, 2336, 2313, 2268, 2172, 2153, 2108, 1749, 1748, 2581, 2581, 2731, 2849, 2929, 3040, 3215, 3195, 2736, 2687, 2633, 2628, 2565, 2479, 2481, 2397, 1889, 2849, 2885, 2971, 2600, 2644, 2571, 2569, 2556, 2432, 2426, 2416, 2406, 2404, 2406, 2405, 2383, 2345, 2298, 2233, 2218, 2204, 2202, 2176, 2163, 2162, 2155, 2153, 2141, 2115, 2107, 2088, 2075, 2054, 2047, 2044, 2037, 2006, 2005, 2001, 1977, 1963, 1839, 1831, 1832, 1833, 1824, 1825, 1853, 1904, 1993, 2232, 2300, 2361, 2381, 2383, 2381, 2515, 2581, 2598, 2647, 2673, 2886, 2899, 2901, 2899, 2865, 2825, 2823, 2820, 2816, 2794, 2784, 2775, 2717, 2712, 2712, 2676, 2551, 2366, 2338, 2281, 2239, 2223, 2199, 2203, 2183, 2181, 2165, 2155, 2151, 2146, 2144, 2132, 2131, 2132, 2118, 2114, 2112, 2089, 2071, 2067, 2053, 2054, 2035, 2030, 2022, 1922, 1925, 1923, 1915, 1914, 1910, 1924, 1998, 2017, 2091, 2133, 2413, 2485, 2493, 2516, 2533, 2580, 2651, 2657, 2712, 2726, 3040, 3040, 3046, 3046, 3046, 3041, 3011, 3004, 3000, 2962, 2920, 2918, 2886, 2851, 2849, 2839, 2774, 2727, 2695, 2670, 2641, 2589, 2531, 2513, 2498, 2485, 2475, 2471, 2463, 2453, 2452, 2449, 2444, 2427, 2426, 2422, 2418, 2413, 2408, 2398, 2396, 2391, 2392, 2384, 2385, 2379, 2377, 2375, 2375, 2358, 2359, 2352, 2343, 2342, 2335, 2334, 2330, 2326, 2320, 2320, 2317, 2313, 2313, 2311, 2302, 2300, 2300, 2297, 2294, 2292, 2288, 2280, 2282, 2284, 2285, 2279, 2280, 2283, 2282, 2281, 2277, 2272, 2269, 2272, 2267, 2265, 2262, 2262, 2257, 2253, 2251, 2253, 2244, 2244, 2242, 2239, 2239, 2237, 2235, 2234, 2236, 2236, 2224, 2223, 2223, 2226, 2226, 2222, 2219, 2215, 2214, 2203, 2200, 2198, 2197, 2194, 2194, 2195, 2185, 2183, 2181, 2183, 2181, 2181, 2181, 2180, 2177, 2178, 2181, 2178, 2174, 2177, 2175, 2171, 2167, 2163, 2161, 2165, 2165, 2164, 2161, 2157, 2153, 2149, 2151, 2145, 2139, 2139, 2141, 2138, 2135, 2132, 2124, 2124, 2126, 2116, 2114, 2116, 2116, 2115, 2106, 2104, 2105, 2103, 2106, 2106, 2106, 2100, 2096, 2096, 2097, 2092, 2090, 2090, 2089, 2092, 2091, 2092, 2094, 2091, 2084, 2087, 2089, 2090, 2080, 2080, 2080, 2081, 2081, 2078, 2079, 2075, 2079, 2077, 2079, 2077, 2084, 2145, 2312, 2483, 2504, 2586, 2610, 2636, 2680, 2740, 2788, 2792, 2829, 2833, 2837, 2847, 2863, 2877, 2901, 2918, 2964, 2966, 3001, 3023, 3028, 3040, 3049, 3040, 3045, 3077, 3124, 3139, 3143, 3212, 3184, 3166, 2653, 2604, 2600, 2610, 2698, 2680, 2674, 2626, 2623, 2639, 2610, 2590, 2524, 2501, 2439, 2326, 2253, 2257, 2245, 2225, 2197, 2170, 2161, 2154, 2145, 2293, 2333, 2363, 2383, 2416, 2420, 2438, 2448, 2449, 2446, 2445, 2446, 2444, 2442, 2439, 2432, 2402, 2377, 2371, 2341, 2333, 2274, 2094, 2233, 1976, 2008, 2168, 2176, 2247, 2339, 2359, 2486, 2495, 2627, 2627, 2613, 2542, 2539, 2530, 2530, 2482, 2442, 2447, 2437, 2418, 2408, 2405, 2337, 2208, 2181, 2145, 2138, 2102, 2092, 2214, 2264, 2292, 2321, 2306, 2305, 2305, 2308, 2304, 2307, 2309, 2314, 2309, 2308, 2316, 2318, 2323, 2324, 2319, 2322, 2313, 2316, 2318, 2317, 2312, 2315, 2312, 2310, 2306, 2301, 2302, 2304, 2305, 2302, 2301, 2303, 2301, 2304, 2296, 2292, 2291, 2291, 2289, 2285, 2283, 2298, 2285, 2280, 2278, 2278, 2276, 2274, 2271, 2272, 2264, 2263, 2265, 2264, 2262, 2263, 2281, 2273, 2269, 2268, 2260, 2258, 2254, 2257, 2257, 2256, 2254, 2252, 2255, 2256, 2258, 2257, 2251, 2253, 2252, 2248, 2245, 2245, 2245, 2244, 2250, 2253, 2139, 2139, 2139, 2136, 2137, 2139, 2137, 2139, 2141, 2140, 2331, 2298, 2248, 2154, 2099, 2068, 2002, 2005, 2003, 2019, 2038, 2039, 2047, 2076, 2102, 2120, 2141, 2185, 2202, 2201, 2215 }, 
{ 1742, 1740, 2048, 2090, 2130, 2194, 2194, 2206, 2237, 2277, 2096, 2077, 2193, 2283, 2267, 2277, 2275, 2269, 2204, 2115, 2050, 2050, 2009, 2170, 2260, 2220, 2211, 2213, 2212, 2214, 2155, 2151, 2108, 2088, 2030, 2439, 2274, 2406, 2263, 2341, 2282, 2298, 2303, 2261, 2268, 2255, 2223, 2178, 2159, 2121, 1801, 1802, 2101, 2096, 2194, 2247, 2284, 2315, 2414, 2408, 2339, 2315, 2292, 2288, 2249, 2155, 2146, 2108, 1953, 2207, 2197, 2244, 2164, 2363, 2320, 2318, 2299, 2159, 2163, 2147, 2142, 2142, 2159, 2156, 2168, 2157, 2124, 2219, 2214, 2204, 2204, 2188, 2181, 2179, 2180, 2177, 2166, 2158, 2148, 2135, 2130, 2115, 2113, 2105, 2107, 2099, 2095, 2093, 2070, 2059, 1928, 1924, 1922, 1921, 1914, 1916, 1941, 1964, 2016, 2227, 2291, 2343, 2362, 2361, 2358, 2501, 2566, 2581, 2620, 2647, 2869, 2889, 2889, 2897, 2860, 2837, 2846, 2848, 2846, 2856, 2853, 2844, 2798, 2786, 2795, 2759, 2670, 2471, 2437, 2343, 2295, 2283, 2264, 2263, 2257, 2258, 2236, 2238, 2234, 2226, 2212, 2204, 2200, 2199, 2196, 2192, 2190, 2179, 2155, 2153, 2142, 2141, 2122, 2115, 2108, 2006, 2003, 2004, 1998, 2000, 1996, 2002, 2063, 2082, 2146, 2176, 2423, 2491, 2500, 2516, 2536, 2578, 2638, 2643, 2699, 2708, 3035, 3039, 3035, 3030, 3040, 3063, 3040, 3023, 3022, 3014, 2991, 2990, 2982, 2967, 2969, 2959, 2915, 2878, 2843, 2816, 2787, 2730, 2625, 2617, 2604, 2594, 2581, 2581, 2568, 2562, 2555, 2551, 2539, 2525, 2524, 2512, 2502, 2506, 2495, 2489, 2475, 2469, 2469, 2477, 2474, 2469, 2459, 2453, 2450, 2445, 2435, 2433, 2422, 2417, 2414, 2412, 2402, 2398, 2391, 2390, 2388, 2390, 2389, 2384, 2374, 2380, 2370, 2367, 2368, 2362, 2360, 2356, 2361, 2363, 2351, 2349, 2355, 2353, 2354, 2352, 2347, 2339, 2337, 2339, 2336, 2334, 2331, 2328, 2326, 2329, 2326, 2320, 2315, 2314, 2312, 2307, 2306, 2304, 2302, 2302, 2304, 2299, 2292, 2292, 2295, 2293, 2295, 2288, 2285, 2285, 2283, 2275, 2271, 2271, 2269, 2271, 2272, 2272, 2259, 2263, 2262, 2259, 2250, 2250, 2249, 2248, 2247, 2248, 2249, 2241, 2241, 2239, 2238, 2236, 2233, 2230, 2230, 2231, 2232, 2232, 2228, 2223, 2221, 2219, 2222, 2214, 2220, 2216, 2214, 2210, 2210, 2200, 2192, 2196, 2195, 2193, 2190, 2191, 2191, 2192, 2194, 2192, 2187, 2184, 2181, 2181, 2181, 2181, 2181, 2182, 2174, 2180, 2180, 2176, 2172, 2168, 2167, 2166, 2169, 2175, 2164, 2169, 2165, 2167, 2165, 2166, 2165, 2164, 2165, 2167, 2165, 2165, 2157, 2160, 2161, 2159, 2161, 2250, 2334, 2317, 2311, 2290, 2308, 2334, 2331, 2333, 2322, 2258, 2236, 2232, 2216, 2212, 2224, 2230, 2277, 2282, 2307, 2310, 2339, 2343, 2361, 2379, 2377, 2373, 2377, 2396, 2416, 2434, 2439, 2511, 2375, 2352, 2292, 2263, 2246, 2302, 2363, 2362, 2348, 2359, 2347, 2348, 2310, 2290, 2262, 2243, 2200, 2140, 2100, 2105, 2099, 2100, 2119, 2110, 2114, 2181, 2202, 2334, 2352, 2416, 2462, 2475, 2469, 2483, 2484, 2485, 2486, 2477, 2472, 2472, 2471, 2471, 2466, 2422, 2384, 2383, 2351, 2340, 2283, 2110, 2266, 2163, 2156, 2230, 2236, 2260, 2096, 2108, 2198, 2202, 2304, 2317, 2315, 2262, 2261, 2262, 2265, 2230, 2239, 2239, 2226, 2181, 2181, 2171, 2138, 2195, 2187, 2173, 2159, 2169, 2155, 2274, 2318, 2337, 2359, 2355, 2349, 2349, 2352, 2353, 2350, 2345, 2359, 2355, 2355, 2356, 2354, 2360, 2357, 2356, 2351, 2343, 2340, 2347, 2351, 2354, 2336, 2335, 2340, 2331, 2325, 2330, 2332, 2332, 2328, 2330, 2330, 2332, 2333, 2322, 2312, 2314, 2312, 2314, 2306, 2304, 2302, 2304, 2302, 2300, 2298, 2296, 2297, 2291, 2290, 2290, 2293, 2288, 2289, 2285, 2292, 2296, 2291, 2290, 2291, 2290, 2291, 2289, 2291, 2292, 2289, 2285, 2283, 2285, 2286, 2287, 2287, 2279, 2283, 2283, 2277, 2276, 2275, 2274, 2272, 2269, 2269, 2149, 2147, 2146, 2150, 2149, 2143, 2143, 2145, 2145, 2142, 2316, 2294, 2265, 2286, 2273, 2244, 2186, 2184, 2180, 2175, 2220, 2243, 2246, 2243, 2220, 2212, 2243, 2259, 2249, 2249, 2262 }, 
{ 1649, 1648, 2196, 2219, 2252, 2275, 2275, 2295, 2294, 2340, 2347, 2403, 2501, 2522, 2526, 2521, 2522, 2520, 2556, 2100, 1993, 1992, 1934, 2403, 2320, 2077, 2057, 2055, 2051, 2067, 2049, 2062, 1905, 1874, 1864, 2458, 2553, 2514, 2615, 2625, 2618, 2652, 2728, 2653, 2322, 2300, 2261, 2185, 2162, 2102, 1667, 1675, 2001, 2015, 2057, 2132, 2133, 2200, 2255, 2285, 2255, 2243, 2220, 2222, 2259, 2188, 2181, 2160, 1810, 2159, 2165, 2233, 2212, 2242, 2347, 2359, 2286, 2223, 2221, 2218, 2217, 2213, 2209, 2209, 2181, 2175, 2148, 2170, 2164, 2157, 2152, 2110, 2116, 2122, 2123, 2122, 2107, 2109, 2104, 2089, 2047, 2026, 2021, 2010, 2001, 1979, 1977, 1975, 1983, 2012, 1814, 1809, 1809, 1808, 1802, 1802, 1818, 1830, 1855, 1913, 1936, 1960, 1967, 1969, 1972, 2041, 2064, 2067, 2106, 2120, 2286, 2302, 2318, 2353, 2360, 2386, 2392, 2401, 2408, 2409, 2411, 2404, 2346, 2339, 2337, 2312, 2289, 2252, 2234, 2175, 2097, 2090, 2073, 2070, 2068, 2066, 2051, 2045, 2037, 2038, 2027, 2021, 2016, 2010, 2012, 2028, 2039, 2004, 1976, 1971, 1969, 1965, 1947, 1945, 1940, 1851, 1848, 1847, 1845, 1841, 1842, 1842, 1877, 1881, 1896, 1906, 1991, 2014, 2018, 2018, 2032, 2053, 2133, 2143, 2188, 2179, 2334, 2329, 2329, 2334, 2353, 2365, 2390, 2388, 2391, 2391, 2392, 2392, 2390, 2389, 2384, 2383, 2377, 2370, 2359, 2342, 2345, 2381, 2290, 2287, 2273, 2266, 2265, 2263, 2248, 2246, 2240, 2242, 2241, 2226, 2225, 2224, 2221, 2222, 2212, 2208, 2207, 2204, 2202, 2201, 2198, 2192, 2187, 2185, 2181, 2181, 2180, 2171, 2168, 2162, 2157, 2155, 2156, 2155, 2149, 2145, 2143, 2145, 2144, 2142, 2143, 2138, 2131, 2135, 2138, 2138, 2134, 2128, 2127, 2129, 2128, 2126, 2126, 2123, 2119, 2118, 2118, 2114, 2113, 2112, 2114, 2110, 2111, 2112, 2110, 2102, 2101, 2103, 2104, 2106, 2103, 2103, 2098, 2095, 2093, 2094, 2090, 2090, 2089, 2089, 2089, 2087, 2086, 2087, 2087, 2086, 2081, 2073, 2075, 2074, 2075, 2075, 2074, 2075, 2075, 2073, 2072, 2067, 2056, 2053, 2053, 2052, 2053, 2051, 2051, 2050, 2051, 2043, 2042, 2041, 2041, 2040, 2039, 2039, 2039, 2038, 2036, 2032, 2028, 2027, 2026, 2028, 2023, 2024, 2026, 2023, 2024, 2024, 2020, 2016, 2014, 2012, 2010, 2010, 2012, 2010, 2006, 2006, 2007, 2000, 1999, 1998, 1998, 1991, 1987, 1986, 1987, 1985, 1989, 1988, 1987, 1987, 1989, 1988, 1988, 1988, 1989, 1989, 1989, 1990, 1993, 1992, 1992, 1993, 1994, 1994, 1989, 1987, 1991, 1989, 1992, 1991, 1997, 1997, 2052, 2096, 2107, 2132, 2132, 2136, 2141, 2148, 2156, 2163, 2167, 2171, 2180, 2181, 2185, 2187, 2208, 2208, 2226, 2228, 2243, 2247, 2265, 2271, 2269, 2275, 2274, 2311, 2330, 2337, 2343, 2354, 2295, 2290, 2259, 2248, 2248, 2317, 2349, 2345, 2339, 2343, 2344, 2359, 2357, 2357, 2348, 2350, 2310, 2328, 2315, 2311, 2310, 2302, 2292, 2276, 2271, 2273, 2269, 2286, 2294, 2308, 2327, 2346, 2351, 2367, 2371, 2372, 2375, 2352, 2326, 2324, 2322, 2314, 2310, 2355, 2285, 2269, 2237, 2224, 2169, 2048, 2167, 2082, 2073, 2098, 2107, 2133, 2156, 2157, 2191, 2195, 2259, 2253, 2252, 2277, 2261, 2255, 2253, 2249, 2245, 2241, 2234, 2230, 2232, 2229, 2243, 2202, 2181, 2170, 2168, 2148, 2139, 2114, 2126, 2136, 2137, 2196, 2226, 2236, 2237, 2238, 2240, 2249, 2263, 2271, 2270, 2272, 2274, 2275, 2279, 2285, 2288, 2285, 2285, 2285, 2290, 2291, 2260, 2244, 2224, 2249, 2255, 2259, 2269, 2270, 2282, 2285, 2285, 2282, 2281, 2232, 2214, 2203, 2199, 2194, 2185, 2181, 2181, 2174, 2171, 2167, 2164, 2159, 2158, 2156, 2153, 2147, 2145, 2143, 2141, 2138, 2133, 2137, 2138, 2136, 2138, 2174, 2191, 2253, 2249, 2245, 2179, 2175, 2170, 2160, 2157, 2164, 2180, 2202, 2214, 2220, 2226, 2226, 2223, 2222, 2226, 2136, 2136, 2054, 2053, 2055, 2059, 2059, 2061, 2063, 2059, 2057, 2057, 2155, 2199, 2205, 2182, 2167, 2152, 2128, 2106, 2098, 2092, 2096, 2099, 2100, 2104, 2104, 2104, 2106, 2114, 2120, 2120, 2126 }, 
{ 1579, 1573, 1932, 1965, 1998, 2045, 2045, 2089, 2141, 2248, 2186, 2212, 2287, 2581, 2596, 2624, 2619, 2624, 2281, 1928, 1790, 1785, 1678, 2436, 2221, 2142, 2124, 2125, 2118, 2097, 2020, 1990, 1900, 1849, 1790, 2377, 2502, 2462, 2447, 2295, 2300, 2310, 2322, 2332, 2199, 2173, 2117, 2031, 1974, 1901, 1479, 1481, 2365, 2379, 2510, 2239, 2213, 2243, 2237, 2158, 2165, 2160, 2128, 2128, 2106, 2080, 2074, 2048, 1691, 2288, 2296, 2334, 2129, 2185, 2196, 2202, 2213, 2151, 2147, 2150, 2149, 2147, 2148, 2147, 2142, 2130, 2106, 2188, 2181, 2171, 2168, 2152, 2138, 2131, 2129, 2127, 2118, 2108, 2084, 2079, 2063, 2053, 2055, 2051, 2044, 2018, 2010, 2016, 1992, 1979, 1795, 1791, 1791, 1789, 1779, 1781, 1782, 1785, 1797, 1831, 1837, 1853, 1861, 1865, 1867, 1920, 1934, 1943, 1979, 1989, 2181, 2186, 2193, 2207, 2286, 2303, 2324, 2366, 2400, 2417, 2439, 2449, 2452, 2459, 2462, 2483, 2486, 2337, 2334, 2205, 2162, 2157, 2140, 2132, 2122, 2124, 2107, 2097, 2100, 2090, 2069, 2039, 2032, 2024, 2003, 2012, 2016, 1988, 1983, 1980, 1992, 1994, 1982, 1988, 1987, 1888, 1888, 1885, 1886, 1886, 1882, 1853, 1861, 1856, 1844, 1848, 1871, 1891, 1894, 1897, 1898, 1909, 1932, 1933, 1963, 1971, 2243, 2257, 2261, 2273, 2316, 2358, 2537, 2548, 2563, 2623, 2657, 2655, 2678, 2710, 2717, 2728, 2795, 2791, 2771, 2750, 2733, 2679, 2558, 2549, 2536, 2528, 2521, 2520, 2503, 2499, 2490, 2487, 2484, 2461, 2460, 2457, 2452, 2447, 2430, 2423, 2420, 2420, 2421, 2417, 2412, 2407, 2402, 2399, 2396, 2380, 2377, 2375, 2359, 2351, 2348, 2343, 2334, 2334, 2330, 2332, 2330, 2332, 2328, 2323, 2318, 2312, 2309, 2303, 2302, 2301, 2302, 2301, 2293, 2293, 2290, 2277, 2273, 2269, 2268, 2269, 2267, 2263, 2255, 2244, 2259, 2260, 2255, 2255, 2253, 2251, 2253, 2254, 2249, 2251, 2249, 2244, 2243, 2244, 2242, 2238, 2237, 2232, 2228, 2228, 2226, 2227, 2225, 2221, 2220, 2216, 2219, 2213, 2210, 2207, 2206, 2201, 2200, 2199, 2193, 2192, 2190, 2190, 2191, 2189, 2187, 2188, 2185, 2183, 2181, 2171, 2162, 2147, 2148, 2149, 2150, 2147, 2139, 2137, 2135, 2132, 2128, 2131, 2135, 2141, 2139, 2139, 2136, 2138, 2136, 2138, 2137, 2131, 2116, 2108, 2111, 2107, 2112, 2109, 2111, 2108, 2106, 2105, 2104, 2092, 2085, 2081, 2081, 2079, 2087, 2088, 2079, 2081, 2085, 2083, 2075, 2077, 2081, 2075, 2076, 2077, 2073, 2067, 2067, 2065, 2064, 2069, 2065, 2067, 2070, 2069, 2059, 2062, 2065, 2061, 2065, 2067, 2066, 2105, 2280, 2337, 2347, 2324, 2316, 2330, 2323, 2322, 2332, 2334, 2332, 2332, 2335, 2334, 2342, 2344, 2334, 2332, 2350, 2350, 2358, 2360, 2359, 2344, 2328, 2232, 2222, 2185, 2172, 2167, 2168, 2160, 2088, 2063, 2073, 2076, 2112, 2186, 2196, 2197, 2196, 2149, 2152, 2160, 2152, 2143, 2144, 2148, 2160, 2180, 2179, 2179, 2176, 2178, 2171, 2157, 2157, 2169, 2193, 2260, 2311, 2334, 2372, 2396, 2398, 2414, 2416, 2419, 2421, 2435, 2422, 2419, 2418, 2412, 2412, 2379, 2360, 2359, 2329, 2324, 2266, 2112, 2353, 2269, 2276, 2319, 2318, 2330, 2098, 2090, 2108, 2153, 2169, 2187, 2203, 2216, 2231, 2220, 2216, 2152, 2140, 2134, 2124, 2118, 2114, 2112, 2104, 2157, 2147, 2139, 2137, 2126, 2122, 2193, 2229, 2242, 2248, 2250, 2249, 2250, 2248, 2250, 2250, 2251, 2251, 2257, 2257, 2257, 2258, 2255, 2256, 2263, 2266, 2265, 2258, 2256, 2251, 2251, 2238, 2239, 2239, 2237, 2242, 2239, 2229, 2225, 2216, 2213, 2215, 2212, 2208, 2189, 2187, 2181, 2180, 2180, 2175, 2175, 2172, 2165, 2165, 2160, 2163, 2159, 2159, 2153, 2153, 2138, 2136, 2130, 2129, 2128, 2137, 2134, 2137, 2137, 2136, 2133, 2136, 2132, 2131, 2131, 2126, 2126, 2128, 2126, 2127, 2128, 2127, 2131, 2127, 2129, 2121, 2118, 2110, 2107, 2107, 2110, 2114, 2037, 2039, 2036, 2037, 2037, 2041, 2042, 2043, 2044, 2043, 2289, 2304, 2323, 2329, 2333, 2326, 2288, 2286, 2277, 2276, 2310, 2311, 2317, 2333, 2341, 2347, 2352, 2351, 2345, 2345, 2358 }, 
{ 1622, 1618, 1677, 1658, 1942, 2020, 2034, 2142, 2226, 2371, 2190, 2197, 2260, 2199, 1962, 1963, 1998, 2007, 1942, 2058, 1926, 1922, 1851, 2537, 2267, 2235, 2209, 2193, 2279, 2257, 2164, 2148, 2067, 2022, 1957, 2513, 2633, 2332, 2019, 2006, 2005, 2002, 2009, 2098, 2257, 2222, 2184, 2117, 2096, 2022, 1637, 1640, 2517, 2530, 2675, 2014, 2012, 2030, 2080, 2124, 2203, 2218, 2254, 2255, 2232, 2209, 2212, 2171, 1842, 1998, 1998, 2022, 2014, 2170, 2208, 2210, 2240, 2257, 2263, 2263, 2263, 2269, 2267, 2263, 2240, 2202, 2145, 2250, 2246, 2222, 2220, 2206, 2192, 2185, 2181, 2181, 2176, 2165, 2140, 2135, 2118, 2109, 2108, 2104, 2102, 2075, 2071, 2072, 2049, 2030, 1849, 1844, 1844, 1842, 1833, 1834, 1840, 1845, 1862, 1918, 1934, 1959, 1967, 1971, 1974, 2064, 2111, 2119, 2155, 2169, 2418, 2441, 2447, 2473, 2543, 2564, 2584, 2634, 2664, 2709, 2716, 2729, 2753, 2750, 2769, 2737, 2739, 2476, 2447, 2353, 2302, 2281, 2263, 2257, 2249, 2247, 2224, 2215, 2209, 2204, 2191, 2181, 2181, 2173, 2156, 2154, 2151, 2125, 2103, 2095, 2092, 2089, 2070, 2066, 2063, 1965, 1963, 1964, 1954, 1952, 1952, 1949, 1965, 1968, 1973, 1979, 2035, 2063, 2065, 2074, 2085, 2110, 2171, 2177, 2219, 2224, 2515, 2530, 2538, 2547, 2602, 2647, 2812, 2821, 2828, 2913, 2947, 2955, 2971, 3002, 3008, 3013, 3031, 3016, 2984, 2953, 2923, 2839, 2656, 2647, 2631, 2624, 2616, 2612, 2594, 2588, 2581, 2581, 2581, 2556, 2553, 2551, 2545, 2537, 2526, 2521, 2518, 2513, 2511, 2507, 2504, 2499, 2494, 2489, 2488, 2473, 2472, 2463, 2455, 2448, 2445, 2444, 2432, 2430, 2426, 2425, 2422, 2419, 2418, 2416, 2410, 2405, 2403, 2401, 2394, 2391, 2390, 2387, 2385, 2384, 2381, 2379, 2378, 2377, 2375, 2375, 2373, 2367, 2366, 2365, 2359, 2357, 2352, 2352, 2351, 2347, 2347, 2345, 2342, 2341, 2339, 2335, 2334, 2333, 2331, 2328, 2326, 2323, 2316, 2316, 2315, 2315, 2314, 2310, 2310, 2308, 2306, 2298, 2297, 2293, 2293, 2291, 2291, 2290, 2285, 2283, 2281, 2278, 2276, 2276, 2275, 2274, 2272, 2272, 2269, 2266, 2264, 2255, 2253, 2251, 2249, 2249, 2245, 2243, 2241, 2241, 2239, 2237, 2236, 2233, 2229, 2226, 2222, 2222, 2220, 2220, 2220, 2210, 2207, 2202, 2202, 2196, 2194, 2193, 2190, 2189, 2187, 2187, 2183, 2183, 2182, 2181, 2181, 2179, 2175, 2175, 2173, 2170, 2170, 2171, 2169, 2169, 2166, 2165, 2165, 2163, 2161, 2160, 2161, 2161, 2157, 2157, 2156, 2153, 2152, 2151, 2151, 2151, 2151, 2151, 2151, 2150, 2151, 2246, 2330, 2386, 2378, 2256, 2231, 2181, 2136, 2116, 2104, 2098, 2095, 2095, 2094, 2095, 2099, 2099, 2104, 2109, 2114, 2117, 2124, 2129, 2136, 2141, 2143, 2143, 2142, 2155, 2159, 2159, 2160, 2188, 2034, 1994, 1962, 1971, 1962, 1957, 1993, 2002, 2004, 1998, 1996, 2004, 2018, 2039, 2122, 2130, 2181, 2224, 2217, 2210, 2202, 2195, 2193, 2159, 2138, 2117, 2084, 2334, 2384, 2443, 2480, 2491, 2492, 2505, 2512, 2510, 2512, 2506, 2497, 2497, 2495, 2494, 2492, 2457, 2433, 2429, 2403, 2395, 2347, 2181, 2326, 1945, 1903, 1895, 1904, 1911, 1885, 1896, 1947, 1949, 2157, 2194, 2232, 2098, 2039, 2042, 2037, 2039, 2057, 2062, 2053, 2053, 2062, 2055, 2077, 2084, 2061, 2031, 2026, 2008, 1987, 2278, 2315, 2323, 2328, 2332, 2333, 2332, 2329, 2328, 2328, 2326, 2334, 2334, 2333, 2333, 2332, 2334, 2337, 2335, 2334, 2333, 2330, 2331, 2330, 2328, 2322, 2317, 2314, 2312, 2312, 2310, 2310, 2308, 2306, 2304, 2303, 2303, 2302, 2291, 2288, 2286, 2284, 2283, 2280, 2278, 2277, 2275, 2273, 2273, 2271, 2269, 2267, 2264, 2262, 2259, 2259, 2257, 2259, 2258, 2263, 2264, 2263, 2264, 2263, 2261, 2259, 2260, 2259, 2259, 2254, 2255, 2253, 2252, 2251, 2252, 2251, 2248, 2245, 2246, 2243, 2242, 2239, 2237, 2236, 2234, 2233, 2158, 2156, 2157, 2157, 2156, 2155, 2157, 2159, 2158, 2161, 2337, 2316, 2276, 2165, 2106, 2044, 1932, 1886, 1871, 1879, 1985, 1998, 1999, 1993, 1988, 1987, 1982, 1985, 1988, 1988, 1991 }, 
{ 1514, 1511, 2124, 2141, 2196, 2257, 2271, 2277, 2298, 2405, 2406, 2512, 2724, 2940, 2020, 2071, 2271, 2506, 2237, 1989, 1893, 1889, 1841, 2944, 2435, 2298, 2266, 2250, 2275, 2246, 2134, 2106, 2028, 1983, 1902, 2752, 2953, 2565, 2391, 2303, 2251, 2236, 2277, 2226, 2214, 2177, 2138, 2042, 2013, 1966, 1637, 1640, 2820, 2835, 3016, 2562, 2441, 2581, 2412, 2419, 2419, 2390, 2383, 2381, 2367, 2370, 2375, 2340, 1831, 2362, 2369, 2436, 2226, 2393, 2357, 2375, 2413, 2334, 2329, 2323, 2315, 2329, 2334, 2330, 2310, 2304, 2236, 2228, 2219, 2187, 2187, 2169, 2151, 2144, 2139, 2139, 2124, 2104, 2071, 2069, 2042, 2028, 2032, 2028, 2020, 1994, 1987, 1989, 1967, 1944, 1735, 1735, 1728, 1727, 1724, 1728, 1755, 1773, 1842, 2047, 2118, 2190, 2211, 2204, 2194, 2343, 2404, 2451, 2438, 2453, 2669, 2704, 2715, 2729, 2729, 2733, 2793, 2850, 2895, 2968, 2959, 2979, 2963, 2921, 2948, 2909, 2839, 2473, 2430, 2316, 2238, 2220, 2197, 2188, 2177, 2175, 2147, 2136, 2127, 2120, 2107, 2106, 2106, 2099, 2079, 2073, 2071, 2038, 2016, 2004, 1997, 1990, 1970, 1964, 1961, 1845, 1845, 1848, 1838, 1838, 1831, 1836, 1908, 1923, 1972, 1996, 2175, 2237, 2245, 2262, 2280, 2318, 2395, 2404, 2465, 2482, 2839, 2848, 2849, 2852, 2913, 2961, 3130, 3128, 3137, 3175, 3176, 3184, 3183, 3202, 3208, 3196, 3138, 3112, 3050, 2957, 2940, 2834, 2635, 2627, 2603, 2594, 2582, 2581, 2558, 2554, 2538, 2535, 2533, 2493, 2492, 2488, 2482, 2475, 2464, 2455, 2451, 2445, 2443, 2441, 2439, 2435, 2432, 2427, 2422, 2405, 2403, 2393, 2383, 2374, 2371, 2368, 2349, 2350, 2341, 2339, 2335, 2332, 2332, 2332, 2325, 2321, 2316, 2316, 2309, 2304, 2300, 2295, 2294, 2292, 2293, 2289, 2286, 2286, 2285, 2285, 2285, 2281, 2279, 2276, 2273, 2269, 2261, 2262, 2261, 2258, 2255, 2253, 2249, 2248, 2249, 2239, 2239, 2236, 2236, 2235, 2236, 2224, 2223, 2222, 2218, 2216, 2213, 2212, 2213, 2220, 2214, 2199, 2199, 2197, 2190, 2190, 2189, 2184, 2181, 2180, 2178, 2171, 2168, 2166, 2166, 2164, 2165, 2163, 2162, 2156, 2154, 2150, 2145, 2150, 2143, 2140, 2139, 2142, 2140, 2141, 2137, 2137, 2137, 2134, 2127, 2121, 2114, 2116, 2117, 2115, 2112, 2098, 2096, 2092, 2092, 2086, 2084, 2084, 2081, 2079, 2073, 2075, 2073, 2071, 2070, 2068, 2067, 2064, 2062, 2064, 2061, 2053, 2051, 2051, 2053, 2051, 2051, 2049, 2045, 2050, 2047, 2046, 2047, 2046, 2041, 2039, 2038, 2039, 2036, 2031, 2033, 2035, 2036, 2033, 2034, 2033, 2038, 2216, 2407, 2598, 2629, 2512, 2466, 2388, 2254, 2182, 2145, 2138, 2136, 2137, 2146, 2151, 2157, 2165, 2202, 2210, 2235, 2240, 2269, 2283, 2297, 2300, 2304, 2273, 2273, 2283, 2311, 2334, 2339, 2414, 2169, 2203, 2335, 2346, 2410, 2400, 2455, 2451, 2437, 2416, 2408, 2432, 2450, 2445, 2418, 2425, 2426, 2392, 2359, 2369, 2349, 2339, 2355, 2335, 2328, 2300, 2293, 2457, 2481, 2522, 2545, 2539, 2537, 2530, 2530, 2519, 2514, 2496, 2477, 2475, 2472, 2465, 2457, 2425, 2388, 2382, 2350, 2339, 2278, 2114, 2408, 2050, 2167, 2303, 2332, 2392, 2392, 2420, 2539, 2553, 2386, 2436, 2442, 2438, 2461, 2459, 2469, 2445, 2428, 2379, 2335, 2325, 2323, 2333, 2387, 2296, 2333, 2347, 2335, 2322, 2321, 2384, 2406, 2413, 2412, 2404, 2403, 2400, 2398, 2397, 2394, 2391, 2396, 2394, 2392, 2392, 2388, 2383, 2388, 2375, 2376, 2378, 2375, 2369, 2364, 2361, 2348, 2343, 2337, 2335, 2334, 2334, 2332, 2333, 2329, 2327, 2323, 2322, 2316, 2304, 2304, 2302, 2298, 2295, 2292, 2290, 2290, 2286, 2284, 2280, 2280, 2279, 2274, 2266, 2269, 2271, 2275, 2278, 2277, 2277, 2283, 2282, 2282, 2279, 2280, 2278, 2277, 2275, 2275, 2273, 2267, 2265, 2263, 2261, 2262, 2263, 2261, 2256, 2255, 2253, 2248, 2245, 2243, 2239, 2240, 2246, 2246, 2147, 2147, 2147, 2144, 2143, 2145, 2145, 2146, 2146, 2148, 2569, 2534, 2461, 2361, 2344, 2292, 2156, 2102, 2085, 2129, 2278, 2296, 2311, 2333, 2352, 2355, 2373, 2408, 2424, 2432, 2441 }, 
{ 1587, 1580, 2371, 2421, 2433, 2507, 2510, 2531, 2546, 2581, 2603, 2714, 2873, 3119, 3172, 3146, 3150, 3112, 3041, 2181, 2093, 2090, 2039, 3134, 2703, 2307, 2289, 2308, 2294, 2282, 2222, 2212, 2127, 2086, 2017, 3089, 3327, 3184, 3376, 3249, 3263, 3174, 3220, 3200, 2405, 2380, 2336, 2253, 2231, 2179, 1753, 1753, 2935, 2949, 3104, 3154, 3166, 3263, 3399, 3371, 2624, 2581, 2560, 2555, 2511, 2433, 2428, 2383, 1859, 3226, 3265, 3314, 2659, 2519, 2496, 2493, 2503, 2428, 2415, 2411, 2407, 2407, 2408, 2403, 2390, 2361, 2324, 2291, 2278, 2258, 2255, 2232, 2219, 2212, 2208, 2203, 2200, 2176, 2143, 2138, 2117, 2100, 2094, 2098, 2095, 2062, 2051, 2047, 2030, 2002, 1822, 1817, 1818, 1817, 1810, 1811, 1961, 2050, 2168, 2406, 2472, 2514, 2530, 2531, 2521, 2576, 2608, 2615, 2629, 2631, 2700, 2702, 2704, 2713, 2701, 2677, 2675, 2679, 2678, 2667, 2667, 2663, 2628, 2630, 2627, 2600, 2543, 2380, 2361, 2296, 2263, 2246, 2226, 2222, 2214, 2212, 2187, 2181, 2173, 2157, 2157, 2155, 2153, 2149, 2139, 2136, 2131, 2109, 2087, 2078, 2061, 2054, 1994, 1978, 1966, 1836, 1834, 1834, 1824, 1823, 1822, 1864, 2194, 2220, 2277, 2309, 2564, 2614, 2619, 2628, 2636, 2659, 2669, 2668, 2672, 2677, 2814, 2808, 2821, 2824, 2838, 2844, 2860, 2857, 2860, 2845, 2824, 2821, 2804, 2783, 2775, 2770, 2734, 2700, 2667, 2633, 2618, 2581, 2530, 2524, 2514, 2509, 2503, 2500, 2482, 2481, 2475, 2471, 2466, 2443, 2439, 2437, 2436, 2428, 2420, 2417, 2414, 2409, 2405, 2400, 2399, 2394, 2392, 2388, 2384, 2376, 2374, 2367, 2359, 2352, 2349, 2348, 2335, 2336, 2334, 2334, 2332, 2329, 2327, 2324, 2320, 2316, 2312, 2311, 2309, 2307, 2306, 2302, 2301, 2297, 2300, 2300, 2301, 2302, 2301, 2299, 2299, 2294, 2295, 2295, 2288, 2286, 2282, 2282, 2279, 2276, 2272, 2271, 2263, 2262, 2261, 2251, 2251, 2250, 2247, 2247, 2248, 2244, 2239, 2238, 2236, 2234, 2232, 2232, 2232, 2228, 2226, 2217, 2214, 2209, 2208, 2206, 2205, 2201, 2196, 2194, 2191, 2187, 2186, 2185, 2185, 2184, 2183, 2184, 2182, 2181, 2181, 2179, 2179, 2179, 2176, 2172, 2170, 2168, 2167, 2165, 2165, 2165, 2163, 2160, 2156, 2147, 2142, 2141, 2139, 2138, 2138, 2127, 2128, 2125, 2123, 2122, 2120, 2119, 2116, 2113, 2111, 2110, 2106, 2104, 2103, 2103, 2102, 2100, 2095, 2096, 2092, 2089, 2089, 2087, 2086, 2088, 2088, 2087, 2088, 2085, 2086, 2087, 2085, 2087, 2084, 2086, 2085, 2085, 2085, 2084, 2083, 2082, 2082, 2083, 2085, 2083, 2092, 2370, 2721, 2922, 2974, 3149, 3169, 3225, 3147, 3222, 3323, 3263, 3299, 3325, 3277, 3311, 3328, 3337, 3363, 3379, 3409, 3385, 3468, 3463, 3470, 3452, 3462, 3394, 3408, 3412, 3488, 3458, 3453, 3493, 3386, 3338, 3193, 3130, 3051, 2926, 2867, 2843, 2833, 2791, 2784, 2843, 2828, 2794, 2795, 2786, 2818, 2702, 2588, 2582, 2561, 2538, 2500, 2472, 2465, 2454, 2436, 2402, 2414, 2437, 2475, 2495, 2500, 2509, 2515, 2516, 2517, 2516, 2506, 2506, 2504, 2500, 2498, 2470, 2448, 2444, 2419, 2409, 2348, 2151, 2859, 3015, 3104, 3124, 3123, 3154, 2663, 2650, 2612, 2614, 2542, 2543, 2530, 2569, 2558, 2555, 2552, 2542, 2539, 2540, 2524, 2518, 2514, 2507, 2497, 2442, 2410, 2381, 2375, 2356, 2346, 2323, 2353, 2367, 2368, 2373, 2372, 2375, 2373, 2370, 2373, 2374, 2380, 2382, 2383, 2386, 2390, 2386, 2385, 2386, 2386, 2385, 2386, 2384, 2383, 2383, 2378, 2376, 2371, 2368, 2366, 2367, 2367, 2365, 2357, 2360, 2359, 2358, 2357, 2348, 2345, 2341, 2342, 2339, 2336, 2336, 2334, 2334, 2334, 2331, 2330, 2327, 2327, 2325, 2323, 2320, 2321, 2320, 2321, 2322, 2320, 2329, 2327, 2327, 2323, 2320, 2318, 2318, 2317, 2320, 2317, 2316, 2315, 2315, 2314, 2315, 2312, 2312, 2312, 2312, 2308, 2306, 2304, 2305, 2302, 2307, 2308, 2201, 2203, 2203, 2200, 2203, 2202, 2200, 2200, 2202, 2203, 2836, 2862, 2945, 2954, 2967, 2955, 2960, 2976, 2958, 3031, 3040, 3069, 3096, 3104, 3094, 3110, 3150, 3100, 3127, 3155, 3199 }, 
{ 1611, 1607, 1938, 1942, 2145, 2222, 2222, 2288, 2332, 2433, 2368, 2421, 2582, 2569, 1900, 1927, 2115, 2285, 2040, 2047, 1946, 1943, 1877, 2751, 2210, 2166, 2149, 2152, 2258, 2246, 2159, 2143, 2073, 2036, 1965, 2688, 2836, 2326, 2109, 2118, 2091, 2079, 2103, 2106, 2234, 2216, 2183, 2124, 2104, 2043, 1671, 1671, 2697, 2713, 2862, 2252, 2132, 2218, 2145, 2173, 2194, 2181, 2215, 2214, 2187, 2187, 2198, 2160, 1867, 2187, 2193, 2221, 2089, 2161, 2173, 2178, 2222, 2224, 2216, 2221, 2231, 2230, 2223, 2216, 2204, 2164, 2110, 2243, 2239, 2217, 2216, 2198, 2186, 2181, 2180, 2179, 2170, 2161, 2138, 2134, 2122, 2115, 2112, 2104, 2102, 2079, 2079, 2077, 2053, 2036, 1845, 1841, 1840, 1839, 1830, 1829, 1830, 1836, 1855, 1922, 1949, 1993, 2006, 2012, 2016, 2107, 2152, 2166, 2204, 2211, 2461, 2486, 2487, 2506, 2559, 2581, 2594, 2620, 2636, 2686, 2691, 2703, 2728, 2726, 2745, 2716, 2730, 2485, 2459, 2362, 2321, 2301, 2276, 2273, 2259, 2257, 2234, 2226, 2222, 2213, 2202, 2192, 2189, 2185, 2169, 2166, 2167, 2136, 2109, 2100, 2095, 2089, 2073, 2069, 2069, 1967, 1964, 1966, 1957, 1955, 1951, 1947, 1956, 1961, 1971, 1973, 2068, 2108, 2112, 2118, 2132, 2159, 2206, 2214, 2256, 2263, 2562, 2563, 2568, 2576, 2612, 2647, 2779, 2795, 2806, 2886, 2921, 2925, 2941, 2980, 2986, 2991, 3022, 3012, 2977, 2950, 2912, 2824, 2668, 2662, 2649, 2642, 2633, 2633, 2616, 2612, 2604, 2602, 2598, 2581, 2576, 2576, 2568, 2560, 2551, 2547, 2543, 2539, 2535, 2531, 2529, 2524, 2520, 2514, 2511, 2498, 2498, 2488, 2481, 2473, 2468, 2467, 2456, 2455, 2447, 2447, 2444, 2443, 2441, 2437, 2430, 2425, 2420, 2420, 2412, 2409, 2406, 2403, 2398, 2396, 2390, 2391, 2394, 2393, 2391, 2388, 2386, 2383, 2382, 2381, 2375, 2373, 2365, 2364, 2359, 2359, 2355, 2353, 2349, 2349, 2349, 2341, 2338, 2339, 2337, 2337, 2334, 2331, 2327, 2325, 2322, 2320, 2318, 2316, 2316, 2316, 2314, 2308, 2306, 2301, 2302, 2298, 2294, 2296, 2287, 2285, 2283, 2282, 2279, 2277, 2279, 2279, 2277, 2274, 2273, 2270, 2268, 2257, 2255, 2254, 2253, 2252, 2248, 2246, 2245, 2243, 2242, 2241, 2239, 2236, 2236, 2232, 2229, 2227, 2226, 2226, 2224, 2212, 2211, 2206, 2204, 2200, 2198, 2195, 2194, 2192, 2189, 2189, 2186, 2186, 2183, 2181, 2181, 2180, 2181, 2181, 2178, 2176, 2173, 2171, 2173, 2172, 2171, 2169, 2171, 2167, 2167, 2168, 2166, 2164, 2165, 2161, 2159, 2161, 2161, 2159, 2160, 2160, 2156, 2159, 2161, 2152, 2156, 2321, 2524, 2587, 2573, 2432, 2373, 2317, 2198, 2145, 2109, 2098, 2090, 2092, 2091, 2088, 2092, 2096, 2112, 2116, 2130, 2137, 2139, 2145, 2156, 2162, 2163, 2140, 2136, 2134, 2139, 2145, 2144, 2180, 1934, 1962, 2084, 2083, 2128, 2083, 2102, 2100, 2091, 2114, 2114, 2119, 2126, 2125, 2146, 2144, 2181, 2187, 2187, 2187, 2187, 2190, 2183, 2177, 2166, 2149, 2139, 2347, 2400, 2440, 2469, 2475, 2474, 2473, 2481, 2475, 2474, 2475, 2473, 2474, 2475, 2472, 2471, 2460, 2433, 2428, 2406, 2397, 2352, 2198, 2384, 1969, 2090, 2123, 2134, 2145, 2089, 2124, 2171, 2162, 2103, 2136, 2151, 2037, 2107, 2115, 2118, 2134, 2130, 2119, 2090, 2076, 2082, 2083, 2144, 2120, 2138, 2138, 2138, 2121, 2114, 2274, 2320, 2334, 2334, 2332, 2328, 2325, 2323, 2322, 2322, 2322, 2328, 2328, 2329, 2327, 2329, 2333, 2340, 2334, 2334, 2334, 2332, 2331, 2333, 2332, 2323, 2318, 2312, 2314, 2313, 2317, 2317, 2313, 2310, 2308, 2307, 2306, 2306, 2296, 2294, 2292, 2292, 2288, 2285, 2285, 2284, 2281, 2283, 2278, 2277, 2276, 2273, 2269, 2270, 2265, 2265, 2266, 2266, 2267, 2268, 2268, 2268, 2270, 2270, 2267, 2266, 2265, 2265, 2264, 2260, 2261, 2262, 2259, 2258, 2259, 2257, 2257, 2255, 2254, 2250, 2249, 2245, 2243, 2241, 2240, 2241, 2169, 2168, 2170, 2170, 2170, 2170, 2172, 2173, 2173, 2175, 2498, 2465, 2388, 2273, 2266, 2220, 2078, 2007, 2001, 2014, 2133, 2151, 2162, 2175, 2168, 2159, 2164, 2165, 2187, 2194, 2196 }, 
{ 1670, 1665, 2014, 2057, 2089, 2099, 2091, 2104, 2111, 2181, 2206, 2315, 2543, 2541, 2570, 2571, 2554, 2589, 2581, 2047, 1954, 1943, 1873, 2400, 2222, 2074, 2081, 2088, 2057, 2050, 2017, 1998, 1921, 1896, 1860, 2408, 2565, 2220, 2394, 2394, 2332, 2339, 2411, 2361, 2293, 2280, 2233, 2161, 2126, 2072, 1698, 1708, 1905, 1923, 1965, 1931, 1949, 2010, 2110, 2253, 2143, 2115, 2104, 2102, 2103, 2119, 2114, 2097, 1822, 2123, 2138, 2192, 2145, 2181, 2116, 2112, 2145, 2147, 2145, 2146, 2145, 2143, 2139, 2140, 2139, 2122, 2093, 2120, 2115, 2102, 2100, 2087, 2078, 2072, 2075, 2068, 2067, 2058, 2049, 2045, 2036, 2026, 2024, 2020, 2014, 1992, 1992, 1989, 1971, 1969, 1840, 1836, 1836, 1837, 1832, 1832, 1853, 1849, 1889, 1979, 2005, 2030, 2035, 2039, 2039, 2104, 2122, 2124, 2143, 2156, 2260, 2256, 2264, 2275, 2285, 2290, 2285, 2297, 2298, 2302, 2300, 2297, 2290, 2281, 2276, 2266, 2249, 2162, 2159, 2096, 2055, 2072, 2051, 2052, 2051, 2037, 2039, 2030, 2012, 2024, 2018, 2013, 2003, 1983, 1989, 1991, 1997, 1996, 1969, 1970, 1963, 1966, 1954, 1953, 1949, 1874, 1871, 1867, 1867, 1865, 1863, 1863, 1891, 1889, 1903, 1913, 2022, 2050, 2053, 2069, 2069, 2090, 2127, 2129, 2153, 2161, 2270, 2274, 2278, 2281, 2304, 2310, 2359, 2359, 2357, 2364, 2365, 2365, 2359, 2358, 2353, 2352, 2345, 2339, 2326, 2311, 2286, 2285, 2254, 2237, 2236, 2235, 2229, 2231, 2217, 2214, 2214, 2213, 2212, 2200, 2195, 2194, 2194, 2198, 2188, 2183, 2182, 2181, 2181, 2181, 2180, 2173, 2165, 2162, 2163, 2158, 2158, 2147, 2142, 2138, 2134, 2132, 2130, 2131, 2124, 2120, 2117, 2118, 2119, 2120, 2117, 2110, 2110, 2110, 2111, 2110, 2110, 2106, 2106, 2108, 2106, 2106, 2098, 2098, 2095, 2094, 2092, 2090, 2091, 2089, 2095, 2096, 2094, 2086, 2081, 2077, 2079, 2081, 2081, 2084, 2088, 2073, 2069, 2066, 2063, 2063, 2062, 2067, 2072, 2072, 2073, 2071, 2071, 2073, 2072, 2055, 2050, 2051, 2053, 2055, 2058, 2058, 2057, 2058, 2060, 2060, 2059, 2052, 2027, 2024, 2027, 2028, 2030, 2031, 2036, 2036, 2036, 2033, 2034, 2034, 2031, 2032, 2030, 2027, 2026, 2026, 2020, 2003, 1998, 2000, 2011, 2017, 2012, 2014, 2014, 2014, 2015, 2020, 2011, 2007, 2009, 2005, 2001, 2006, 2009, 2004, 2004, 2006, 2001, 1998, 1998, 1997, 1997, 1976, 1966, 1971, 1977, 1987, 1987, 1986, 1989, 1993, 1993, 1996, 1994, 1997, 1998, 1998, 2001, 2002, 2008, 2009, 2006, 2008, 2010, 2002, 1986, 1989, 1999, 2000, 2006, 2006, 2019, 2038, 2096, 2126, 2126, 2115, 2113, 2115, 2126, 2143, 2167, 2181, 2197, 2198, 2214, 2222, 2225, 2234, 2267, 2271, 2300, 2306, 2328, 2333, 2348, 2355, 2354, 2350, 2340, 2373, 2386, 2404, 2404, 2451, 2371, 2357, 2319, 2305, 2291, 2204, 2203, 2187, 2192, 2214, 2218, 2249, 2207, 2200, 2206, 2200, 2181, 2195, 2181, 2171, 2161, 2163, 2139, 2117, 2097, 2013, 2063, 2168, 2208, 2225, 2262, 2286, 2291, 2310, 2321, 2322, 2323, 2329, 2324, 2322, 2321, 2318, 2318, 2311, 2285, 2277, 2251, 2251, 2195, 2083, 2235, 2055, 2037, 2086, 2074, 2108, 2102, 2104, 2072, 2118, 2126, 2138, 2131, 1993, 1998, 1993, 2001, 2125, 2117, 2132, 2127, 2136, 2130, 2124, 2124, 1964, 1939, 1916, 1922, 1908, 1897, 2094, 2133, 2155, 2158, 2164, 2179, 2181, 2181, 2181, 2183, 2188, 2191, 2195, 2196, 2196, 2187, 2203, 2201, 2209, 2208, 2213, 2213, 2213, 2203, 2204, 2200, 2201, 2194, 2194, 2198, 2202, 2197, 2200, 2202, 2201, 2202, 2200, 2198, 2191, 2188, 2185, 2181, 2182, 2181, 2181, 2180, 2173, 2175, 2173, 2172, 2169, 2169, 2167, 2164, 2152, 2148, 2145, 2143, 2141, 2147, 2147, 2147, 2146, 2149, 2136, 2141, 2149, 2145, 2144, 2143, 2143, 2142, 2141, 2142, 2139, 2141, 2139, 2131, 2137, 2144, 2143, 2141, 2141, 2139, 2129, 2126, 2083, 2085, 2086, 2089, 2089, 2090, 2090, 2082, 2083, 2088, 2261, 2259, 2236, 2177, 2143, 2127, 2057, 2039, 2040, 2034, 2028, 2020, 2020, 2016, 2020, 2014, 2044, 2081, 2083, 2085, 2079 }, 
{ 1667, 1659, 2381, 2432, 2451, 2497, 2514, 2520, 2525, 2569, 2581, 2655, 2817, 2960, 2970, 2994, 2968, 2952, 2946, 2227, 2136, 2132, 2091, 2961, 2724, 2338, 2321, 2338, 2334, 2327, 2264, 2255, 2187, 2149, 2087, 2778, 2990, 3040, 3161, 3141, 3107, 3103, 3032, 3059, 2456, 2429, 2391, 2312, 2286, 2238, 1800, 1801, 2713, 2734, 2883, 2965, 3027, 3076, 3220, 3251, 2726, 2689, 2651, 2648, 2591, 2503, 2499, 2455, 1915, 2990, 3014, 3133, 2724, 2606, 2561, 2561, 2556, 2478, 2471, 2469, 2468, 2465, 2461, 2459, 2445, 2418, 2387, 2340, 2330, 2313, 2310, 2291, 2276, 2272, 2267, 2265, 2256, 2242, 2221, 2212, 2194, 2182, 2181, 2179, 2168, 2132, 2126, 2125, 2104, 2081, 1911, 1905, 1903, 1903, 1894, 1893, 1969, 2028, 2108, 2284, 2325, 2361, 2377, 2383, 2383, 2480, 2532, 2545, 2580, 2590, 2813, 2824, 2825, 2824, 2790, 2761, 2763, 2760, 2743, 2734, 2722, 2723, 2681, 2674, 2667, 2639, 2572, 2427, 2407, 2349, 2312, 2302, 2278, 2273, 2265, 2263, 2242, 2236, 2230, 2224, 2217, 2209, 2208, 2204, 2197, 2193, 2190, 2171, 2146, 2141, 2136, 2127, 2051, 2037, 2025, 1896, 1895, 1893, 1884, 1883, 1881, 1897, 2074, 2093, 2153, 2181, 2350, 2406, 2414, 2430, 2443, 2469, 2547, 2551, 2614, 2620, 2911, 2913, 2914, 2918, 2926, 2920, 2919, 2914, 2913, 2884, 2855, 2855, 2826, 2807, 2798, 2791, 2758, 2721, 2699, 2677, 2662, 2626, 2581, 2575, 2564, 2561, 2555, 2551, 2538, 2533, 2528, 2526, 2520, 2499, 2495, 2491, 2487, 2482, 2474, 2467, 2467, 2465, 2463, 2459, 2455, 2450, 2447, 2443, 2441, 2432, 2430, 2426, 2416, 2410, 2408, 2408, 2396, 2396, 2392, 2389, 2389, 2386, 2385, 2383, 2378, 2377, 2375, 2373, 2369, 2364, 2364, 2362, 2360, 2359, 2358, 2357, 2359, 2359, 2357, 2355, 2355, 2350, 2348, 2349, 2344, 2341, 2339, 2337, 2336, 2334, 2333, 2329, 2324, 2323, 2322, 2313, 2311, 2311, 2307, 2306, 2304, 2303, 2296, 2296, 2294, 2295, 2293, 2292, 2292, 2290, 2286, 2276, 2275, 2274, 2274, 2272, 2270, 2269, 2263, 2261, 2259, 2253, 2250, 2249, 2250, 2248, 2249, 2248, 2245, 2241, 2241, 2239, 2237, 2236, 2234, 2231, 2228, 2228, 2228, 2231, 2228, 2228, 2226, 2221, 2217, 2214, 2207, 2205, 2206, 2200, 2201, 2190, 2188, 2187, 2187, 2182, 2181, 2181, 2180, 2181, 2175, 2171, 2171, 2169, 2167, 2169, 2166, 2163, 2162, 2161, 2159, 2156, 2154, 2151, 2151, 2151, 2153, 2152, 2152, 2152, 2147, 2148, 2148, 2149, 2148, 2147, 2147, 2147, 2147, 2146, 2145, 2145, 2143, 2145, 2145, 2145, 2146, 2220, 2469, 2662, 2703, 2835, 2854, 2880, 2922, 2961, 3055, 3026, 3067, 3081, 3090, 3078, 3080, 3092, 3135, 3151, 3211, 3195, 3258, 3282, 3276, 3259, 3304, 3307, 3295, 3335, 3371, 3370, 3373, 3426, 3314, 3295, 3020, 3005, 2970, 2877, 2857, 2845, 2836, 2831, 2826, 2868, 2855, 2833, 2819, 2808, 2816, 2729, 2655, 2633, 2604, 2581, 2539, 2513, 2506, 2490, 2481, 2463, 2468, 2484, 2508, 2533, 2535, 2544, 2544, 2551, 2552, 2549, 2546, 2546, 2545, 2541, 2539, 2522, 2499, 2494, 2469, 2463, 2400, 2185, 2699, 2785, 2821, 2903, 2902, 2937, 2551, 2560, 2560, 2560, 2569, 2566, 2550, 2601, 2590, 2586, 2582, 2580, 2581, 2575, 2560, 2557, 2549, 2547, 2529, 2480, 2447, 2422, 2416, 2400, 2395, 2361, 2383, 2397, 2401, 2406, 2408, 2408, 2412, 2412, 2413, 2414, 2418, 2419, 2421, 2425, 2427, 2428, 2428, 2425, 2427, 2428, 2429, 2432, 2430, 2428, 2423, 2420, 2419, 2411, 2412, 2412, 2412, 2409, 2406, 2407, 2406, 2408, 2409, 2404, 2402, 2402, 2403, 2401, 2397, 2394, 2395, 2392, 2392, 2391, 2391, 2388, 2384, 2384, 2384, 2382, 2382, 2378, 2377, 2379, 2378, 2381, 2381, 2379, 2377, 2371, 2370, 2364, 2365, 2365, 2364, 2365, 2364, 2363, 2362, 2360, 2359, 2359, 2357, 2358, 2355, 2356, 2354, 2353, 2351, 2351, 2352, 2220, 2221, 2218, 2218, 2220, 2219, 2218, 2219, 2219, 2220, 2664, 2731, 2749, 2775, 2771, 2767, 2761, 2766, 2753, 2774, 2805, 2816, 2824, 2833, 2835, 2833, 2854, 2865, 2875, 2896, 2916 }, 
{ 1613, 1606, 2087, 2150, 2161, 2217, 2223, 2240, 2242, 2290, 2266, 2339, 2581, 2733, 2777, 2786, 2776, 2761, 2735, 2136, 2059, 2058, 2015, 2753, 2704, 2290, 2273, 2281, 2274, 2275, 2192, 2195, 2125, 2084, 2020, 2524, 2794, 2838, 3030, 2945, 2944, 2929, 2905, 2888, 2376, 2355, 2316, 2229, 2208, 2165, 1760, 1759, 2583, 2592, 2739, 2849, 2954, 3067, 3245, 3245, 2776, 2739, 2680, 2673, 2622, 2532, 2524, 2465, 1884, 2843, 2884, 2991, 2607, 2671, 2598, 2600, 2600, 2479, 2472, 2464, 2461, 2454, 2452, 2447, 2433, 2395, 2360, 2278, 2266, 2254, 2253, 2230, 2215, 2212, 2208, 2204, 2190, 2171, 2153, 2136, 2116, 2102, 2092, 2090, 2083, 2039, 2033, 2030, 2013, 1982, 1832, 1828, 1826, 1826, 1820, 1820, 1865, 1928, 2012, 2236, 2303, 2365, 2386, 2391, 2391, 2533, 2602, 2624, 2670, 2698, 2914, 2926, 2929, 2925, 2898, 2858, 2852, 2848, 2839, 2823, 2808, 2810, 2755, 2747, 2731, 2691, 2584, 2400, 2382, 2321, 2282, 2267, 2247, 2245, 2236, 2236, 2218, 2212, 2205, 2198, 2189, 2186, 2182, 2181, 2175, 2171, 2170, 2144, 2118, 2110, 2102, 2095, 2028, 2019, 2010, 1905, 1904, 1904, 1896, 1894, 1893, 1898, 1982, 2013, 2069, 2102, 2368, 2442, 2453, 2473, 2494, 2538, 2612, 2617, 2673, 2687, 2999, 3002, 3005, 3006, 3017, 3020, 3039, 3029, 3023, 2983, 2951, 2947, 2910, 2885, 2880, 2867, 2796, 2741, 2702, 2675, 2658, 2619, 2574, 2540, 2529, 2523, 2512, 2512, 2494, 2492, 2488, 2485, 2484, 2462, 2460, 2457, 2453, 2447, 2439, 2434, 2431, 2427, 2424, 2422, 2419, 2415, 2411, 2406, 2407, 2396, 2394, 2386, 2379, 2375, 2370, 2369, 2358, 2357, 2353, 2352, 2348, 2346, 2347, 2340, 2335, 2336, 2334, 2333, 2332, 2324, 2325, 2322, 2319, 2318, 2313, 2314, 2312, 2312, 2311, 2310, 2311, 2308, 2306, 2304, 2300, 2297, 2293, 2293, 2292, 2290, 2287, 2285, 2282, 2279, 2279, 2268, 2266, 2265, 2263, 2260, 2259, 2256, 2252, 2252, 2250, 2250, 2249, 2246, 2245, 2242, 2241, 2232, 2229, 2227, 2226, 2226, 2223, 2221, 2215, 2214, 2213, 2204, 2201, 2201, 2198, 2198, 2198, 2198, 2197, 2196, 2195, 2199, 2196, 2195, 2192, 2190, 2188, 2187, 2189, 2188, 2188, 2185, 2181, 2181, 2181, 2174, 2166, 2161, 2160, 2163, 2161, 2146, 2143, 2143, 2141, 2141, 2138, 2138, 2134, 2133, 2130, 2128, 2126, 2123, 2120, 2122, 2121, 2118, 2116, 2116, 2112, 2110, 2109, 2109, 2107, 2107, 2107, 2106, 2107, 2106, 2102, 2104, 2102, 2106, 2102, 2100, 2101, 2100, 2102, 2100, 2098, 2097, 2100, 2099, 2096, 2096, 2100, 2181, 2386, 2497, 2536, 2625, 2639, 2681, 2715, 2749, 2803, 2815, 2848, 2860, 2869, 2873, 2885, 2908, 2928, 2945, 2994, 2993, 3025, 3040, 3051, 3060, 3070, 3063, 3074, 3104, 3147, 3151, 3157, 3231, 3217, 3192, 2690, 2618, 2573, 2557, 2611, 2611, 2604, 2582, 2581, 2581, 2580, 2555, 2483, 2463, 2402, 2336, 2269, 2267, 2198, 2168, 2153, 2165, 2177, 2147, 2133, 2334, 2368, 2399, 2428, 2458, 2464, 2479, 2482, 2486, 2486, 2483, 2479, 2479, 2479, 2476, 2473, 2453, 2427, 2422, 2395, 2383, 2328, 2116, 2296, 2154, 2179, 2245, 2259, 2312, 2288, 2308, 2375, 2400, 2516, 2518, 2516, 2519, 2487, 2493, 2487, 2394, 2378, 2348, 2226, 2240, 2217, 2227, 2169, 2121, 2145, 2155, 2153, 2134, 2125, 2271, 2307, 2327, 2346, 2335, 2334, 2334, 2335, 2336, 2336, 2340, 2345, 2341, 2347, 2353, 2354, 2355, 2353, 2353, 2356, 2352, 2350, 2352, 2355, 2353, 2348, 2347, 2344, 2339, 2336, 2337, 2341, 2340, 2339, 2337, 2341, 2339, 2340, 2334, 2334, 2331, 2331, 2330, 2328, 2325, 2324, 2323, 2320, 2320, 2320, 2318, 2316, 2313, 2312, 2310, 2311, 2311, 2310, 2309, 2306, 2312, 2312, 2311, 2312, 2308, 2307, 2306, 2307, 2307, 2305, 2306, 2303, 2302, 2302, 2302, 2303, 2299, 2299, 2298, 2295, 2295, 2295, 2295, 2293, 2292, 2293, 2167, 2166, 2165, 2165, 2165, 2165, 2163, 2166, 2167, 2168, 2358, 2341, 2282, 2235, 2220, 2202, 2169, 2165, 2156, 2161, 2172, 2179, 2181, 2183, 2202, 2203, 2216, 2235, 2255, 2255, 2272 }, 
{ 1776, 1770, 2142, 2177, 2210, 2231, 2236, 2250, 2251, 2290, 2280, 2292, 2357, 2496, 2494, 2506, 2502, 2492, 2420, 2110, 2041, 2043, 2011, 2329, 2259, 2121, 2118, 2120, 2121, 2124, 2089, 2089, 2055, 2033, 1997, 2366, 2393, 2476, 2299, 2390, 2359, 2399, 2454, 2360, 2222, 2212, 2197, 2180, 2174, 2149, 1865, 1869, 2310, 2317, 2373, 2381, 2426, 2359, 2350, 2341, 2282, 2263, 2243, 2236, 2239, 2182, 2168, 2148, 1934, 2344, 2345, 2320, 2194, 2265, 2226, 2223, 2237, 2181, 2181, 2181, 2178, 2177, 2177, 2179, 2181, 2169, 2149, 2164, 2162, 2162, 2160, 2149, 2143, 2139, 2138, 2136, 2129, 2126, 2116, 2114, 2100, 2095, 2091, 2089, 2085, 2072, 2073, 2070, 2053, 2042, 1927, 1922, 1920, 1919, 1904, 1909, 1922, 1922, 1971, 2053, 2080, 2113, 2125, 2128, 2130, 2209, 2241, 2253, 2292, 2312, 2486, 2496, 2496, 2506, 2514, 2517, 2518, 2526, 2530, 2531, 2535, 2532, 2520, 2517, 2516, 2496, 2449, 2332, 2321, 2269, 2239, 2229, 2208, 2210, 2202, 2202, 2189, 2185, 2182, 2180, 2173, 2162, 2162, 2157, 2147, 2146, 2147, 2125, 2104, 2100, 2101, 2097, 2079, 2072, 2066, 1981, 1977, 1977, 1970, 1969, 1968, 1969, 2010, 2010, 2042, 2057, 2181, 2221, 2224, 2230, 2243, 2267, 2308, 2312, 2347, 2351, 2578, 2581, 2581, 2581, 2597, 2610, 2645, 2649, 2646, 2640, 2635, 2635, 2629, 2621, 2624, 2616, 2593, 2574, 2550, 2530, 2516, 2487, 2435, 2428, 2415, 2412, 2410, 2409, 2394, 2389, 2388, 2387, 2387, 2369, 2368, 2369, 2368, 2364, 2358, 2353, 2351, 2349, 2346, 2345, 2346, 2341, 2335, 2334, 2334, 2329, 2328, 2321, 2318, 2316, 2311, 2310, 2304, 2301, 2300, 2297, 2296, 2293, 2292, 2290, 2287, 2286, 2283, 2283, 2278, 2280, 2277, 2273, 2275, 2272, 2270, 2268, 2268, 2269, 2267, 2269, 2268, 2262, 2263, 2261, 2261, 2260, 2259, 2258, 2255, 2250, 2249, 2253, 2248, 2249, 2248, 2241, 2240, 2238, 2236, 2235, 2236, 2236, 2229, 2229, 2231, 2229, 2230, 2228, 2227, 2226, 2223, 2214, 2212, 2214, 2212, 2210, 2209, 2207, 2206, 2205, 2206, 2201, 2198, 2196, 2196, 2195, 2192, 2191, 2194, 2194, 2188, 2189, 2191, 2187, 2185, 2183, 2183, 2187, 2186, 2181, 2181, 2176, 2177, 2174, 2170, 2171, 2167, 2165, 2165, 2163, 2163, 2155, 2151, 2151, 2152, 2149, 2148, 2146, 2146, 2145, 2142, 2141, 2140, 2138, 2138, 2138, 2138, 2136, 2130, 2129, 2126, 2125, 2124, 2124, 2124, 2125, 2123, 2123, 2123, 2122, 2119, 2119, 2120, 2121, 2120, 2117, 2118, 2119, 2118, 2118, 2114, 2114, 2114, 2113, 2112, 2117, 2117, 2147, 2239, 2372, 2403, 2457, 2462, 2469, 2459, 2439, 2428, 2386, 2354, 2352, 2341, 2335, 2338, 2338, 2336, 2335, 2355, 2359, 2369, 2376, 2381, 2370, 2363, 2330, 2331, 2340, 2349, 2365, 2366, 2412, 2313, 2285, 2217, 2187, 2162, 2206, 2210, 2211, 2212, 2195, 2188, 2188, 2183, 2181, 2189, 2187, 2159, 2180, 2167, 2169, 2169, 2171, 2165, 2155, 2150, 2173, 2182, 2193, 2212, 2243, 2278, 2304, 2305, 2324, 2344, 2347, 2351, 2349, 2355, 2356, 2355, 2355, 2353, 2344, 2321, 2317, 2297, 2288, 2248, 2118, 2411, 2361, 2352, 2383, 2388, 2394, 2169, 2163, 2181, 2181, 2171, 2194, 2195, 2162, 2182, 2188, 2190, 2180, 2179, 2179, 2172, 2169, 2165, 2163, 2155, 2174, 2175, 2161, 2159, 2145, 2138, 2132, 2175, 2190, 2192, 2203, 2206, 2212, 2210, 2211, 2212, 2220, 2226, 2222, 2220, 2224, 2228, 2228, 2230, 2230, 2234, 2232, 2229, 2230, 2234, 2230, 2232, 2232, 2232, 2229, 2229, 2230, 2230, 2231, 2233, 2232, 2233, 2234, 2234, 2235, 2236, 2236, 2236, 2235, 2232, 2230, 2232, 2231, 2230, 2228, 2227, 2225, 2225, 2224, 2223, 2220, 2223, 2221, 2218, 2216, 2222, 2219, 2222, 2222, 2223, 2223, 2218, 2218, 2219, 2220, 2218, 2216, 2216, 2214, 2214, 2218, 2220, 2212, 2214, 2214, 2210, 2210, 2210, 2208, 2207, 2208, 2208, 2126, 2125, 2128, 2129, 2130, 2126, 2128, 2130, 2129, 2128, 2349, 2407, 2436, 2430, 2419, 2410, 2375, 2359, 2349, 2351, 2365, 2366, 2375, 2383, 2376, 2380, 2390, 2380, 2394, 2410, 2414 }, 
{ 1707, 1700, 2165, 2163, 2180, 2201, 2204, 2241, 2243, 2293, 2224, 2220, 2288, 2381, 2221, 2237, 2240, 2266, 2166, 2090, 2023, 2020, 1987, 2508, 2419, 2190, 2181, 2181, 2249, 2239, 2181, 2172, 2116, 2079, 2033, 2423, 2512, 2394, 2377, 2249, 2199, 2189, 2218, 2144, 2236, 2228, 2206, 2157, 2138, 2104, 1768, 1769, 2472, 2500, 2585, 2383, 2349, 2445, 2516, 2481, 2444, 2424, 2421, 2420, 2376, 2309, 2303, 2255, 1957, 2288, 2292, 2342, 2252, 2439, 2383, 2382, 2392, 2266, 2263, 2262, 2254, 2251, 2249, 2245, 2239, 2210, 2171, 2258, 2251, 2232, 2232, 2219, 2208, 2203, 2196, 2195, 2188, 2175, 2161, 2153, 2135, 2125, 2126, 2112, 2120, 2110, 2103, 2104, 2075, 2067, 1918, 1914, 1910, 1911, 1902, 1903, 1922, 1942, 1978, 2181, 2243, 2300, 2314, 2315, 2307, 2436, 2502, 2513, 2564, 2581, 2810, 2833, 2836, 2848, 2813, 2798, 2797, 2796, 2782, 2779, 2773, 2772, 2769, 2762, 2763, 2722, 2661, 2481, 2448, 2363, 2315, 2302, 2283, 2280, 2270, 2267, 2253, 2241, 2240, 2235, 2222, 2210, 2210, 2207, 2194, 2190, 2191, 2169, 2147, 2145, 2138, 2138, 2121, 2113, 2111, 2006, 2004, 2005, 1997, 1998, 1994, 1998, 2047, 2067, 2103, 2125, 2369, 2435, 2441, 2455, 2478, 2510, 2581, 2581, 2629, 2649, 2991, 2984, 2984, 2975, 2985, 3005, 2968, 2958, 2953, 2943, 2939, 2939, 2939, 2943, 2940, 2931, 2911, 2883, 2859, 2828, 2797, 2739, 2641, 2634, 2616, 2608, 2602, 2600, 2581, 2581, 2567, 2568, 2567, 2545, 2543, 2541, 2535, 2528, 2521, 2515, 2511, 2506, 2503, 2500, 2499, 2493, 2488, 2487, 2485, 2472, 2472, 2461, 2454, 2447, 2443, 2442, 2432, 2432, 2427, 2425, 2424, 2421, 2422, 2417, 2410, 2411, 2406, 2404, 2398, 2396, 2396, 2391, 2390, 2390, 2378, 2373, 2379, 2379, 2377, 2376, 2375, 2365, 2365, 2364, 2362, 2359, 2358, 2355, 2354, 2356, 2351, 2349, 2345, 2343, 2345, 2336, 2334, 2331, 2330, 2329, 2329, 2327, 2320, 2318, 2318, 2318, 2319, 2315, 2311, 2311, 2309, 2300, 2300, 2300, 2296, 2294, 2294, 2291, 2286, 2283, 2282, 2278, 2275, 2275, 2271, 2273, 2271, 2269, 2270, 2268, 2262, 2259, 2255, 2255, 2253, 2253, 2249, 2249, 2248, 2246, 2245, 2243, 2242, 2241, 2237, 2232, 2230, 2231, 2229, 2225, 2224, 2218, 2214, 2213, 2213, 2208, 2206, 2205, 2204, 2204, 2199, 2197, 2196, 2193, 2194, 2191, 2193, 2185, 2181, 2183, 2182, 2181, 2181, 2181, 2181, 2181, 2181, 2180, 2180, 2178, 2172, 2175, 2174, 2176, 2172, 2169, 2169, 2168, 2166, 2166, 2163, 2161, 2162, 2161, 2160, 2161, 2167, 2261, 2308, 2393, 2401, 2389, 2349, 2314, 2275, 2255, 2234, 2229, 2228, 2230, 2237, 2250, 2252, 2260, 2291, 2293, 2316, 2316, 2350, 2359, 2378, 2388, 2387, 2381, 2379, 2403, 2425, 2454, 2459, 2520, 2431, 2413, 2441, 2443, 2451, 2477, 2533, 2547, 2547, 2541, 2539, 2552, 2553, 2548, 2537, 2524, 2491, 2411, 2366, 2363, 2354, 2345, 2335, 2320, 2308, 2299, 2286, 2380, 2414, 2464, 2505, 2512, 2510, 2516, 2515, 2512, 2512, 2500, 2496, 2496, 2494, 2491, 2488, 2445, 2407, 2401, 2369, 2360, 2305, 2153, 2334, 2151, 2176, 2249, 2256, 2295, 2388, 2389, 2481, 2495, 2537, 2547, 2559, 2531, 2551, 2551, 2547, 2530, 2514, 2487, 2464, 2459, 2448, 2446, 2439, 2335, 2306, 2294, 2292, 2263, 2258, 2320, 2366, 2380, 2382, 2387, 2383, 2384, 2384, 2384, 2384, 2388, 2390, 2390, 2391, 2392, 2392, 2396, 2394, 2391, 2392, 2388, 2384, 2383, 2381, 2381, 2383, 2383, 2375, 2373, 2371, 2370, 2361, 2361, 2371, 2371, 2371, 2369, 2370, 2355, 2357, 2351, 2348, 2348, 2348, 2349, 2349, 2339, 2336, 2334, 2335, 2337, 2336, 2334, 2333, 2334, 2333, 2326, 2324, 2323, 2326, 2320, 2324, 2329, 2332, 2323, 2320, 2328, 2329, 2328, 2318, 2319, 2317, 2312, 2318, 2317, 2318, 2312, 2316, 2313, 2307, 2309, 2310, 2304, 2302, 2300, 2298, 2179, 2175, 2172, 2175, 2175, 2171, 2170, 2174, 2173, 2170, 2388, 2365, 2350, 2293, 2288, 2265, 2187, 2186, 2187, 2183, 2262, 2273, 2276, 2271, 2270, 2272, 2281, 2289, 2295, 2298, 2302 }, 
{ 1779, 1775, 2199, 2228, 2272, 2297, 2298, 2330, 2331, 2360, 2348, 2386, 2422, 2567, 2541, 2547, 2553, 2565, 2497, 2129, 2069, 2062, 2027, 2465, 2357, 2177, 2174, 2177, 2168, 2173, 2119, 2118, 2073, 2054, 2017, 2460, 2530, 2609, 2375, 2433, 2343, 2349, 2405, 2334, 2243, 2236, 2224, 2182, 2171, 2149, 1838, 1832, 2433, 2433, 2492, 2535, 2601, 2407, 2506, 2490, 2407, 2376, 2345, 2341, 2295, 2239, 2230, 2202, 1958, 2347, 2347, 2373, 2290, 2355, 2315, 2316, 2322, 2243, 2245, 2236, 2224, 2215, 2224, 2228, 2206, 2200, 2162, 2195, 2192, 2183, 2181, 2173, 2165, 2162, 2161, 2160, 2151, 2145, 2136, 2134, 2127, 2120, 2116, 2117, 2109, 2102, 2098, 2097, 2074, 2061, 1930, 1922, 1922, 1923, 1912, 1912, 1931, 1943, 1981, 2089, 2123, 2165, 2171, 2177, 2179, 2263, 2315, 2323, 2357, 2370, 2623, 2622, 2638, 2635, 2641, 2615, 2615, 2624, 2628, 2629, 2630, 2624, 2609, 2606, 2605, 2581, 2519, 2369, 2351, 2290, 2261, 2252, 2237, 2236, 2231, 2230, 2217, 2215, 2210, 2207, 2198, 2189, 2187, 2187, 2179, 2178, 2173, 2156, 2133, 2129, 2127, 2123, 2107, 2103, 2093, 1996, 1994, 1994, 1989, 1983, 1986, 1991, 2030, 2040, 2067, 2086, 2235, 2285, 2287, 2289, 2304, 2334, 2383, 2388, 2434, 2453, 2729, 2729, 2739, 2741, 2752, 2747, 2798, 2802, 2798, 2782, 2772, 2769, 2765, 2744, 2746, 2738, 2709, 2681, 2653, 2628, 2608, 2581, 2505, 2492, 2484, 2481, 2477, 2472, 2455, 2452, 2447, 2444, 2442, 2425, 2424, 2420, 2418, 2412, 2408, 2402, 2398, 2393, 2390, 2390, 2388, 2383, 2377, 2377, 2377, 2363, 2364, 2359, 2350, 2347, 2342, 2339, 2334, 2333, 2330, 2328, 2326, 2326, 2325, 2323, 2318, 2316, 2316, 2314, 2311, 2309, 2309, 2304, 2305, 2306, 2302, 2298, 2300, 2300, 2300, 2299, 2298, 2292, 2291, 2292, 2290, 2289, 2288, 2287, 2286, 2284, 2283, 2282, 2281, 2280, 2278, 2274, 2273, 2272, 2271, 2269, 2268, 2269, 2263, 2263, 2263, 2263, 2262, 2259, 2257, 2256, 2256, 2251, 2249, 2249, 2248, 2246, 2245, 2243, 2240, 2240, 2240, 2234, 2236, 2234, 2233, 2232, 2230, 2230, 2230, 2227, 2226, 2224, 2224, 2222, 2219, 2219, 2216, 2217, 2218, 2216, 2214, 2213, 2211, 2210, 2207, 2204, 2199, 2200, 2198, 2198, 2196, 2191, 2188, 2185, 2186, 2181, 2182, 2181, 2181, 2181, 2179, 2179, 2178, 2175, 2176, 2173, 2173, 2171, 2169, 2168, 2163, 2163, 2163, 2163, 2162, 2162, 2161, 2160, 2162, 2160, 2168, 2160, 2157, 2157, 2153, 2155, 2155, 2156, 2153, 2153, 2153, 2151, 2150, 2150, 2152, 2151, 2154, 2200, 2358, 2429, 2464, 2514, 2516, 2527, 2508, 2465, 2404, 2375, 2374, 2378, 2377, 2375, 2372, 2375, 2391, 2397, 2412, 2426, 2437, 2445, 2459, 2464, 2463, 2457, 2464, 2465, 2489, 2506, 2510, 2581, 2413, 2396, 2301, 2270, 2230, 2227, 2264, 2272, 2265, 2259, 2257, 2251, 2247, 2239, 2226, 2216, 2180, 2148, 2163, 2165, 2181, 2190, 2192, 2181, 2185, 2219, 2251, 2249, 2279, 2314, 2342, 2368, 2368, 2388, 2404, 2403, 2408, 2402, 2405, 2404, 2404, 2402, 2399, 2375, 2341, 2334, 2310, 2300, 2251, 2140, 2441, 2536, 2602, 2521, 2508, 2408, 2181, 2174, 2197, 2204, 2226, 2249, 2244, 2242, 2234, 2239, 2237, 2201, 2203, 2194, 2187, 2181, 2180, 2181, 2181, 2219, 2274, 2253, 2252, 2236, 2245, 2205, 2241, 2262, 2261, 2273, 2273, 2275, 2277, 2279, 2278, 2280, 2274, 2278, 2279, 2283, 2287, 2290, 2295, 2289, 2294, 2289, 2286, 2289, 2288, 2279, 2281, 2278, 2284, 2283, 2278, 2279, 2275, 2277, 2283, 2279, 2278, 2276, 2277, 2274, 2272, 2268, 2270, 2270, 2266, 2263, 2263, 2261, 2259, 2259, 2257, 2256, 2255, 2255, 2255, 2250, 2247, 2247, 2242, 2239, 2249, 2247, 2247, 2250, 2247, 2242, 2241, 2243, 2241, 2241, 2237, 2237, 2236, 2237, 2241, 2246, 2247, 2235, 2239, 2240, 2235, 2235, 2232, 2230, 2230, 2236, 2236, 2151, 2151, 2149, 2147, 2147, 2150, 2149, 2153, 2154, 2151, 2393, 2431, 2461, 2461, 2475, 2504, 2567, 2602, 2605, 2628, 2577, 2562, 2559, 2564, 2555, 2565, 2564, 2559, 2537, 2525, 2519 }, 
{ 1676, 1672, 2094, 2132, 2158, 2210, 2212, 2231, 2238, 2287, 2108, 2081, 2092, 2114, 2120, 2133, 2132, 2150, 1963, 2071, 2004, 1998, 1957, 2182, 2323, 2218, 2204, 2202, 2196, 2199, 2143, 2139, 2085, 2055, 1998, 2478, 2182, 2206, 2283, 2118, 2069, 2051, 2160, 2032, 2187, 2181, 2162, 2109, 2083, 2051, 1743, 1744, 2176, 2174, 2230, 2270, 2334, 2422, 2543, 2490, 2390, 2386, 2356, 2341, 2303, 2211, 2200, 2151, 1883, 2234, 2257, 2316, 2174, 2457, 2359, 2358, 2320, 2174, 2158, 2150, 2153, 2146, 2141, 2138, 2111, 2067, 2018, 2167, 2166, 2149, 2144, 2138, 2122, 2122, 2110, 2109, 2102, 2096, 2083, 2073, 2055, 2055, 2050, 2039, 2043, 2034, 2036, 2030, 2005, 1992, 1846, 1842, 1839, 1840, 1839, 1842, 1896, 1936, 2023, 2296, 2379, 2456, 2475, 2465, 2458, 2643, 2734, 2755, 2814, 2852, 3091, 3112, 3118, 3112, 3040, 2990, 2981, 2977, 2979, 2960, 2956, 2932, 2861, 2855, 2844, 2797, 2685, 2424, 2388, 2309, 2258, 2247, 2235, 2231, 2215, 2215, 2197, 2185, 2192, 2179, 2177, 2148, 2153, 2161, 2137, 2136, 2141, 2118, 2090, 2089, 2075, 2077, 2061, 2045, 2040, 1943, 1941, 1948, 1938, 1943, 1938, 1955, 2070, 2093, 2160, 2196, 2528, 2624, 2633, 2655, 2681, 2740, 2833, 2846, 2919, 2940, 3315, 3297, 3304, 3296, 3320, 3296, 3190, 3185, 3183, 3128, 3065, 3058, 3040, 3012, 3004, 2993, 2954, 2904, 2850, 2814, 2774, 2705, 2581, 2573, 2561, 2551, 2541, 2530, 2512, 2506, 2504, 2498, 2491, 2471, 2471, 2469, 2467, 2460, 2451, 2438, 2440, 2436, 2434, 2424, 2422, 2415, 2414, 2414, 2414, 2395, 2398, 2389, 2382, 2387, 2381, 2380, 2371, 2369, 2362, 2361, 2358, 2357, 2357, 2353, 2344, 2348, 2341, 2336, 2341, 2334, 2334, 2332, 2335, 2335, 2331, 2324, 2334, 2334, 2330, 2326, 2321, 2312, 2312, 2316, 2306, 2302, 2298, 2296, 2295, 2299, 2297, 2289, 2282, 2280, 2282, 2277, 2278, 2277, 2276, 2278, 2280, 2275, 2261, 2262, 2267, 2269, 2269, 2261, 2259, 2254, 2248, 2245, 2240, 2236, 2234, 2237, 2240, 2239, 2223, 2221, 2223, 2228, 2222, 2222, 2222, 2224, 2226, 2229, 2233, 2221, 2217, 2218, 2212, 2206, 2204, 2200, 2200, 2204, 2204, 2202, 2196, 2186, 2187, 2185, 2194, 2175, 2181, 2181, 2181, 2175, 2174, 2168, 2159, 2167, 2169, 2151, 2149, 2153, 2157, 2149, 2142, 2138, 2136, 2135, 2143, 2145, 2141, 2131, 2124, 2124, 2137, 2126, 2126, 2127, 2130, 2133, 2136, 2138, 2134, 2124, 2117, 2126, 2128, 2127, 2108, 2110, 2112, 2116, 2108, 2106, 2104, 2104, 2110, 2106, 2108, 2103, 2126, 2225, 2322, 2301, 2301, 2230, 2215, 2200, 2197, 2187, 2187, 2188, 2194, 2193, 2202, 2206, 2229, 2236, 2286, 2292, 2334, 2330, 2383, 2398, 2415, 2435, 2432, 2407, 2411, 2481, 2538, 2579, 2581, 2692, 2505, 2485, 2430, 2400, 2443, 2495, 2548, 2545, 2541, 2486, 2478, 2509, 2482, 2480, 2406, 2395, 2331, 2230, 2169, 2163, 2149, 2147, 2123, 2095, 2089, 2071, 2063, 2280, 2366, 2401, 2447, 2458, 2455, 2466, 2470, 2466, 2465, 2454, 2441, 2441, 2441, 2440, 2438, 2402, 2366, 2357, 2335, 2316, 2267, 2098, 2267, 2015, 2016, 2100, 2111, 2179, 2284, 2308, 2426, 2410, 2520, 2522, 2514, 2445, 2403, 2404, 2402, 2345, 2349, 2293, 2288, 2273, 2258, 2251, 2218, 2105, 2080, 2043, 2041, 2016, 2000, 2253, 2290, 2311, 2310, 2317, 2318, 2324, 2324, 2321, 2320, 2320, 2322, 2321, 2322, 2324, 2326, 2327, 2326, 2322, 2322, 2320, 2310, 2312, 2315, 2314, 2307, 2306, 2300, 2298, 2300, 2297, 2294, 2300, 2306, 2307, 2308, 2307, 2307, 2288, 2288, 2287, 2285, 2284, 2279, 2278, 2277, 2275, 2272, 2269, 2269, 2272, 2276, 2275, 2275, 2276, 2271, 2265, 2261, 2260, 2262, 2259, 2262, 2267, 2267, 2257, 2251, 2260, 2261, 2255, 2257, 2257, 2255, 2263, 2266, 2270, 2269, 2253, 2261, 2259, 2247, 2249, 2249, 2238, 2230, 2245, 2248, 2146, 2145, 2146, 2152, 2146, 2142, 2140, 2146, 2143, 2142, 2329, 2290, 2259, 2187, 2146, 2114, 2032, 2028, 2037, 2016, 2074, 2079, 2090, 2089, 2089, 2092, 2105, 2139, 2141, 2147, 2153 }, 
{ 1640, 1640, 1656, 1651, 1857, 1965, 1977, 2132, 2265, 2359, 2119, 2102, 2177, 2211, 2106, 2103, 2124, 2130, 2013, 2081, 1926, 1918, 1828, 2686, 2260, 2218, 2206, 2229, 2276, 2262, 2173, 2145, 2056, 2008, 1943, 2670, 2815, 2414, 2039, 2014, 2026, 2018, 2070, 2045, 2261, 2243, 2204, 2123, 2087, 2014, 1609, 1616, 2633, 2651, 2814, 2020, 1969, 1983, 2065, 2113, 2181, 2216, 2175, 2180, 2131, 2114, 2109, 2089, 1820, 1969, 1985, 2026, 2073, 2150, 2144, 2153, 2200, 2183, 2181, 2168, 2169, 2166, 2166, 2161, 2149, 2138, 2069, 2273, 2270, 2255, 2253, 2238, 2225, 2219, 2216, 2213, 2205, 2192, 2168, 2163, 2147, 2136, 2137, 2135, 2130, 2099, 2090, 2095, 2074, 2055, 1867, 1860, 1860, 1857, 1852, 1853, 1861, 1862, 1875, 1924, 1938, 1960, 1967, 1970, 1971, 2043, 2075, 2089, 2123, 2138, 2388, 2406, 2422, 2451, 2498, 2517, 2543, 2581, 2604, 2643, 2649, 2656, 2675, 2675, 2696, 2679, 2679, 2481, 2451, 2352, 2304, 2285, 2266, 2263, 2253, 2251, 2227, 2219, 2215, 2213, 2196, 2177, 2175, 2165, 2146, 2144, 2143, 2116, 2096, 2094, 2097, 2095, 2081, 2080, 2078, 1983, 1982, 1981, 1973, 1971, 1970, 1966, 1976, 1979, 1977, 1977, 2032, 2068, 2072, 2077, 2089, 2106, 2145, 2147, 2183, 2193, 2495, 2511, 2524, 2530, 2575, 2600, 2775, 2782, 2784, 2851, 2898, 2904, 2921, 2959, 2967, 2971, 2986, 2969, 2941, 2910, 2873, 2780, 2659, 2651, 2637, 2628, 2619, 2617, 2599, 2593, 2585, 2581, 2581, 2564, 2562, 2560, 2554, 2544, 2535, 2531, 2530, 2526, 2523, 2518, 2514, 2508, 2504, 2499, 2497, 2483, 2479, 2474, 2464, 2456, 2456, 2451, 2438, 2439, 2432, 2430, 2430, 2428, 2426, 2425, 2418, 2415, 2412, 2410, 2406, 2402, 2401, 2397, 2396, 2395, 2390, 2386, 2384, 2384, 2383, 2383, 2383, 2375, 2375, 2374, 2366, 2365, 2363, 2360, 2357, 2356, 2356, 2356, 2353, 2351, 2352, 2343, 2343, 2341, 2338, 2337, 2336, 2334, 2332, 2329, 2329, 2328, 2326, 2324, 2324, 2322, 2320, 2311, 2310, 2306, 2308, 2305, 2306, 2304, 2300, 2300, 2298, 2294, 2293, 2290, 2289, 2287, 2286, 2284, 2283, 2279, 2277, 2269, 2266, 2264, 2262, 2262, 2256, 2255, 2252, 2251, 2250, 2246, 2245, 2246, 2245, 2238, 2236, 2236, 2236, 2235, 2233, 2226, 2224, 2216, 2216, 2211, 2211, 2208, 2206, 2206, 2204, 2203, 2202, 2199, 2193, 2192, 2189, 2186, 2188, 2188, 2185, 2181, 2181, 2181, 2181, 2181, 2181, 2180, 2180, 2181, 2180, 2179, 2179, 2179, 2174, 2177, 2173, 2172, 2170, 2171, 2170, 2170, 2169, 2171, 2170, 2170, 2174, 2368, 2471, 2420, 2392, 2247, 2222, 2181, 2131, 2108, 2097, 2098, 2093, 2094, 2099, 2092, 2095, 2096, 2119, 2115, 2112, 2113, 2135, 2130, 2139, 2144, 2149, 2168, 2164, 2173, 2181, 2181, 2179, 2204, 2151, 2134, 2100, 2102, 2100, 2098, 2170, 2163, 2175, 2148, 2149, 2156, 2093, 2075, 2064, 2076, 2110, 2138, 2132, 2135, 2136, 2120, 2116, 2085, 2075, 2064, 2059, 2315, 2367, 2432, 2459, 2480, 2483, 2504, 2517, 2516, 2517, 2524, 2512, 2512, 2512, 2511, 2507, 2484, 2463, 2458, 2428, 2421, 2375, 2207, 2317, 2053, 2008, 1983, 1976, 1982, 1959, 1974, 1989, 2011, 2218, 2272, 2300, 2258, 2049, 2033, 2028, 2006, 2000, 2006, 1979, 1975, 1978, 1979, 1981, 2004, 1994, 1981, 1977, 1998, 1962, 2246, 2291, 2311, 2316, 2328, 2327, 2330, 2331, 2330, 2330, 2333, 2335, 2336, 2337, 2341, 2340, 2341, 2342, 2345, 2346, 2345, 2343, 2344, 2345, 2343, 2335, 2334, 2333, 2332, 2334, 2332, 2328, 2325, 2322, 2318, 2316, 2316, 2315, 2300, 2296, 2293, 2291, 2288, 2288, 2285, 2282, 2281, 2280, 2279, 2279, 2276, 2273, 2270, 2271, 2262, 2256, 2257, 2257, 2256, 2265, 2266, 2266, 2264, 2263, 2261, 2264, 2263, 2264, 2263, 2258, 2257, 2257, 2256, 2253, 2257, 2254, 2251, 2252, 2251, 2245, 2243, 2240, 2238, 2237, 2238, 2237, 2179, 2177, 2178, 2179, 2178, 2180, 2180, 2181, 2181, 2181, 2351, 2304, 2243, 2163, 2151, 2120, 2047, 2010, 1996, 1986, 2007, 2014, 2010, 1998, 2022, 2006, 2034, 2026, 1998, 1997, 2014 }, 
{ 1765, 1759, 2160, 2204, 2215, 2249, 2251, 2265, 2268, 2324, 2325, 2361, 2447, 2625, 2636, 2637, 2627, 2636, 2523, 2078, 2034, 2053, 1974, 2369, 2272, 2069, 2030, 2074, 2081, 2083, 2055, 2051, 2017, 1992, 1956, 2376, 2476, 2594, 2450, 2547, 2563, 2639, 2676, 2614, 2231, 2216, 2183, 2158, 2147, 2116, 1822, 1824, 2324, 2331, 2424, 2428, 2442, 2483, 2392, 2310, 2249, 2233, 2250, 2257, 2299, 2200, 2194, 2181, 1884, 2575, 2587, 2610, 2231, 2243, 2234, 2235, 2231, 2173, 2175, 2176, 2178, 2181, 2181, 2186, 2186, 2175, 2151, 2144, 2138, 2133, 2132, 2116, 2108, 2105, 2102, 2101, 2093, 2090, 2076, 2071, 2061, 2054, 2052, 2049, 2043, 2031, 2029, 2026, 2008, 1998, 1877, 1871, 1871, 1873, 1867, 1868, 1887, 1899, 1932, 2025, 2052, 2086, 2094, 2094, 2095, 2181, 2215, 2224, 2262, 2277, 2469, 2472, 2475, 2482, 2490, 2485, 2487, 2492, 2494, 2495, 2494, 2494, 2486, 2482, 2481, 2461, 2430, 2298, 2281, 2222, 2192, 2181, 2163, 2161, 2157, 2153, 2138, 2135, 2135, 2128, 2117, 2109, 2105, 2102, 2093, 2090, 2089, 2073, 2055, 2051, 2046, 2044, 2030, 2021, 2017, 1934, 1935, 1934, 1928, 1926, 1925, 1930, 1969, 1979, 1999, 2013, 2136, 2181, 2181, 2190, 2204, 2223, 2268, 2273, 2308, 2317, 2557, 2559, 2563, 2565, 2581, 2584, 2611, 2608, 2607, 2605, 2599, 2598, 2595, 2588, 2583, 2581, 2575, 2552, 2530, 2509, 2494, 2465, 2411, 2407, 2396, 2392, 2384, 2383, 2372, 2371, 2364, 2364, 2362, 2347, 2342, 2341, 2340, 2334, 2330, 2326, 2323, 2320, 2318, 2316, 2313, 2310, 2306, 2303, 2301, 2294, 2291, 2286, 2281, 2277, 2274, 2273, 2266, 2263, 2261, 2260, 2257, 2257, 2254, 2255, 2251, 2247, 2247, 2247, 2241, 2240, 2240, 2236, 2238, 2236, 2236, 2235, 2234, 2233, 2233, 2232, 2233, 2227, 2227, 2226, 2223, 2222, 2219, 2218, 2216, 2215, 2213, 2211, 2210, 2209, 2206, 2199, 2198, 2198, 2195, 2193, 2193, 2193, 2187, 2187, 2187, 2188, 2187, 2185, 2183, 2181, 2181, 2177, 2173, 2172, 2171, 2171, 2169, 2168, 2163, 2160, 2162, 2157, 2155, 2153, 2154, 2154, 2153, 2150, 2149, 2148, 2147, 2141, 2141, 2141, 2140, 2139, 2136, 2136, 2136, 2134, 2135, 2132, 2130, 2129, 2126, 2120, 2118, 2118, 2116, 2116, 2116, 2110, 2108, 2105, 2103, 2103, 2102, 2102, 2100, 2097, 2096, 2095, 2093, 2093, 2091, 2089, 2089, 2089, 2086, 2087, 2083, 2081, 2081, 2077, 2078, 2078, 2080, 2079, 2078, 2078, 2075, 2075, 2076, 2077, 2072, 2073, 2074, 2074, 2074, 2073, 2072, 2071, 2071, 2072, 2071, 2073, 2075, 2185, 2336, 2454, 2481, 2537, 2549, 2571, 2559, 2577, 2590, 2573, 2581, 2581, 2573, 2571, 2579, 2581, 2582, 2581, 2613, 2610, 2624, 2631, 2581, 2496, 2464, 2351, 2344, 2335, 2334, 2335, 2339, 2379, 2295, 2271, 2198, 2173, 2195, 2303, 2300, 2300, 2299, 2233, 2234, 2242, 2215, 2217, 2245, 2241, 2183, 2204, 2201, 2197, 2197, 2191, 2182, 2165, 2165, 2205, 2217, 2236, 2246, 2265, 2288, 2313, 2315, 2334, 2339, 2341, 2343, 2346, 2345, 2343, 2343, 2343, 2341, 2329, 2309, 2304, 2285, 2278, 2233, 2086, 2486, 2475, 2492, 2535, 2537, 2557, 2210, 2203, 2233, 2238, 2219, 2235, 2241, 2160, 2195, 2193, 2188, 2214, 2228, 2226, 2216, 2219, 2188, 2192, 2177, 2215, 2194, 2181, 2181, 2166, 2157, 2149, 2175, 2193, 2216, 2200, 2200, 2198, 2201, 2200, 2200, 2202, 2206, 2213, 2212, 2210, 2210, 2210, 2210, 2210, 2212, 2211, 2211, 2211, 2209, 2210, 2206, 2206, 2205, 2202, 2203, 2202, 2204, 2202, 2202, 2204, 2204, 2203, 2204, 2199, 2195, 2197, 2195, 2195, 2190, 2189, 2189, 2190, 2188, 2188, 2187, 2181, 2182, 2181, 2181, 2181, 2183, 2183, 2181, 2181, 2184, 2185, 2184, 2185, 2186, 2189, 2187, 2181, 2182, 2185, 2181, 2181, 2181, 2180, 2178, 2181, 2181, 2180, 2180, 2181, 2173, 2173, 2174, 2172, 2171, 2174, 2177, 2099, 2100, 2099, 2098, 2099, 2100, 2102, 2105, 2105, 2107, 2454, 2495, 2533, 2549, 2546, 2547, 2508, 2503, 2487, 2495, 2517, 2518, 2528, 2533, 2531, 2535, 2548, 2553, 2551, 2559, 2580 }, 
{ 1626, 1618, 2148, 2162, 2221, 2298, 2296, 2326, 2353, 2457, 2465, 2496, 2667, 2914, 2079, 2130, 2322, 2554, 2336, 2036, 1965, 1963, 1928, 2936, 2558, 2245, 2220, 2216, 2264, 2247, 2147, 2133, 2069, 2029, 1957, 2688, 2907, 2640, 2489, 2407, 2355, 2336, 2336, 2172, 2206, 2185, 2155, 2088, 2063, 2032, 1706, 1707, 2883, 2890, 3078, 2609, 2547, 2693, 2634, 2597, 2543, 2538, 2505, 2503, 2455, 2359, 2351, 2298, 1894, 2438, 2446, 2514, 2289, 2545, 2478, 2482, 2469, 2294, 2283, 2279, 2285, 2283, 2272, 2271, 2251, 2223, 2187, 2244, 2238, 2224, 2220, 2199, 2188, 2180, 2179, 2177, 2160, 2139, 2110, 2106, 2091, 2081, 2071, 2068, 2059, 2043, 2040, 2039, 2024, 2004, 1826, 1822, 1816, 1818, 1815, 1817, 1845, 1862, 1934, 2092, 2153, 2190, 2222, 2216, 2210, 2359, 2423, 2443, 2484, 2500, 2748, 2758, 2764, 2777, 2778, 2770, 2791, 2804, 2813, 2852, 2839, 2844, 2838, 2819, 2835, 2790, 2749, 2482, 2441, 2334, 2272, 2255, 2229, 2225, 2214, 2212, 2185, 2179, 2172, 2163, 2152, 2144, 2144, 2139, 2124, 2120, 2117, 2086, 2063, 2055, 2046, 2043, 2022, 2015, 2002, 1902, 1904, 1904, 1893, 1891, 1883, 1893, 1972, 1994, 2041, 2069, 2254, 2314, 2324, 2349, 2369, 2389, 2469, 2474, 2526, 2533, 2889, 2888, 2890, 2895, 2927, 2949, 2992, 2998, 3000, 3044, 3040, 3040, 3035, 3019, 3037, 3045, 3044, 3040, 3006, 2946, 2906, 2815, 2644, 2633, 2619, 2610, 2602, 2596, 2570, 2567, 2557, 2552, 2545, 2510, 2504, 2501, 2497, 2487, 2478, 2470, 2465, 2459, 2457, 2455, 2452, 2451, 2446, 2439, 2437, 2426, 2425, 2416, 2408, 2399, 2394, 2394, 2381, 2381, 2377, 2373, 2371, 2370, 2368, 2363, 2358, 2353, 2350, 2347, 2341, 2335, 2334, 2334, 2333, 2331, 2328, 2327, 2327, 2325, 2325, 2325, 2325, 2319, 2316, 2315, 2306, 2305, 2303, 2298, 2300, 2296, 2294, 2290, 2285, 2285, 2285, 2273, 2273, 2271, 2267, 2266, 2262, 2259, 2253, 2250, 2250, 2248, 2250, 2247, 2247, 2240, 2241, 2229, 2226, 2224, 2224, 2222, 2220, 2218, 2214, 2212, 2206, 2202, 2196, 2196, 2195, 2194, 2194, 2195, 2193, 2188, 2189, 2181, 2181, 2181, 2181, 2181, 2179, 2179, 2179, 2177, 2173, 2169, 2168, 2165, 2161, 2154, 2153, 2153, 2153, 2148, 2145, 2135, 2135, 2132, 2130, 2128, 2126, 2122, 2116, 2112, 2111, 2109, 2106, 2106, 2104, 2105, 2103, 2098, 2098, 2098, 2098, 2090, 2090, 2092, 2090, 2088, 2089, 2088, 2089, 2085, 2085, 2087, 2085, 2085, 2084, 2081, 2078, 2078, 2075, 2075, 2075, 2073, 2073, 2076, 2073, 2069, 2074, 2197, 2444, 2624, 2648, 2587, 2546, 2467, 2314, 2241, 2215, 2215, 2216, 2216, 2230, 2234, 2241, 2255, 2309, 2316, 2339, 2346, 2381, 2390, 2408, 2422, 2416, 2401, 2402, 2445, 2480, 2508, 2518, 2602, 2486, 2492, 2556, 2550, 2596, 2648, 2730, 2717, 2714, 2659, 2650, 2681, 2687, 2674, 2650, 2651, 2581, 2505, 2457, 2456, 2447, 2427, 2426, 2406, 2406, 2396, 2382, 2410, 2436, 2481, 2506, 2507, 2504, 2510, 2511, 2504, 2502, 2484, 2474, 2473, 2473, 2467, 2464, 2432, 2401, 2393, 2361, 2351, 2295, 2147, 2452, 2057, 2210, 2367, 2390, 2465, 2525, 2570, 2678, 2694, 2688, 2710, 2703, 2615, 2628, 2628, 2635, 2606, 2592, 2581, 2554, 2534, 2530, 2530, 2497, 2424, 2398, 2385, 2388, 2355, 2332, 2340, 2379, 2387, 2388, 2390, 2387, 2385, 2384, 2384, 2385, 2383, 2392, 2388, 2390, 2390, 2391, 2393, 2389, 2381, 2377, 2373, 2369, 2365, 2363, 2362, 2355, 2351, 2345, 2342, 2339, 2336, 2345, 2346, 2346, 2345, 2347, 2346, 2346, 2334, 2331, 2327, 2325, 2323, 2321, 2321, 2319, 2315, 2313, 2312, 2309, 2308, 2306, 2298, 2299, 2297, 2299, 2300, 2299, 2300, 2302, 2300, 2298, 2296, 2296, 2293, 2293, 2290, 2290, 2289, 2285, 2285, 2280, 2281, 2279, 2278, 2276, 2272, 2271, 2270, 2267, 2266, 2262, 2259, 2257, 2261, 2260, 2160, 2161, 2155, 2157, 2156, 2155, 2156, 2159, 2159, 2159, 2608, 2561, 2506, 2432, 2424, 2357, 2209, 2163, 2144, 2200, 2329, 2348, 2370, 2402, 2420, 2428, 2437, 2471, 2484, 2499, 2503 }, 
{ 1586, 1583, 1645, 1712, 2367, 2410, 2418, 2363, 2365, 2516, 2508, 2546, 2631, 2287, 1866, 1916, 2015, 2055, 1921, 2019, 1921, 1912, 1845, 2671, 2292, 2181, 2119, 2104, 2311, 2282, 2180, 2163, 2082, 2038, 1967, 2610, 2742, 2181, 2039, 2010, 1968, 2001, 2013, 2120, 2241, 2217, 2167, 2105, 2077, 2010, 1643, 1646, 2654, 2675, 2817, 2051, 1997, 2061, 2083, 2173, 2298, 2312, 2335, 2328, 2334, 2309, 2306, 2261, 1842, 2009, 1998, 2023, 1990, 2277, 2324, 2329, 2359, 2373, 2368, 2361, 2357, 2364, 2355, 2354, 2320, 2266, 2179, 2251, 2238, 2214, 2210, 2193, 2181, 2171, 2169, 2165, 2155, 2145, 2122, 2118, 2104, 2094, 2094, 2087, 2085, 2057, 2047, 2049, 2032, 2013, 1818, 1814, 1811, 1810, 1804, 1803, 1805, 1806, 1838, 1966, 1998, 2043, 2056, 2058, 2056, 2159, 2207, 2222, 2262, 2281, 2535, 2557, 2569, 2582, 2671, 2734, 2779, 2841, 2879, 2934, 2940, 2952, 2972, 2973, 2957, 2903, 2924, 2535, 2495, 2382, 2318, 2299, 2277, 2271, 2261, 2259, 2234, 2226, 2219, 2213, 2200, 2188, 2187, 2181, 2165, 2162, 2159, 2130, 2108, 2100, 2094, 2089, 2073, 2069, 2062, 1960, 1957, 1955, 1949, 1947, 1944, 1945, 1954, 1955, 1970, 1981, 2120, 2168, 2173, 2183, 2198, 2224, 2279, 2286, 2326, 2336, 2637, 2649, 2657, 2667, 2715, 2786, 3021, 3035, 3040, 3115, 3161, 3170, 3191, 3225, 3230, 3235, 3255, 3210, 3170, 3118, 3076, 2951, 2733, 2718, 2696, 2684, 2671, 2666, 2641, 2636, 2627, 2622, 2619, 2590, 2581, 2581, 2581, 2572, 2559, 2553, 2548, 2541, 2539, 2533, 2531, 2528, 2521, 2517, 2513, 2498, 2498, 2486, 2477, 2470, 2466, 2464, 2451, 2449, 2443, 2441, 2439, 2438, 2436, 2432, 2428, 2424, 2420, 2418, 2413, 2408, 2408, 2404, 2403, 2402, 2398, 2394, 2391, 2389, 2389, 2388, 2385, 2381, 2379, 2376, 2373, 2371, 2368, 2366, 2365, 2361, 2360, 2356, 2355, 2353, 2353, 2345, 2343, 2341, 2339, 2339, 2337, 2334, 2328, 2327, 2326, 2324, 2324, 2321, 2320, 2332, 2334, 2310, 2306, 2304, 2303, 2302, 2300, 2298, 2291, 2289, 2286, 2284, 2281, 2280, 2278, 2279, 2277, 2278, 2274, 2270, 2267, 2258, 2258, 2255, 2255, 2253, 2249, 2249, 2247, 2245, 2245, 2242, 2241, 2237, 2236, 2230, 2227, 2226, 2227, 2221, 2220, 2211, 2210, 2205, 2203, 2200, 2198, 2196, 2193, 2191, 2189, 2187, 2187, 2185, 2181, 2182, 2181, 2179, 2179, 2179, 2175, 2172, 2171, 2171, 2171, 2169, 2168, 2165, 2165, 2164, 2165, 2164, 2163, 2163, 2161, 2160, 2157, 2158, 2155, 2154, 2153, 2153, 2152, 2152, 2154, 2152, 2153, 2290, 2519, 2554, 2488, 2277, 2226, 2160, 2098, 2058, 2052, 2045, 2049, 2053, 2051, 2047, 2045, 2054, 2062, 2062, 2081, 2085, 2096, 2101, 2114, 2117, 2120, 2110, 2109, 2118, 2126, 2126, 2134, 2177, 1908, 1916, 2018, 2006, 2039, 2032, 2049, 2031, 1998, 2062, 2066, 2095, 2122, 2132, 2257, 2277, 2356, 2372, 2386, 2394, 2416, 2371, 2335, 2296, 2281, 2257, 2224, 2498, 2553, 2593, 2604, 2600, 2595, 2581, 2579, 2566, 2563, 2543, 2526, 2524, 2522, 2516, 2513, 2482, 2453, 2448, 2416, 2407, 2354, 2173, 2375, 1868, 2018, 1936, 1953, 1955, 1952, 1976, 2046, 2042, 2007, 2041, 2032, 2097, 2087, 2090, 2108, 2158, 2171, 2165, 2204, 2181, 2187, 2192, 2241, 2241, 2196, 2175, 2155, 2119, 2076, 2381, 2404, 2402, 2402, 2396, 2389, 2385, 2383, 2383, 2380, 2375, 2380, 2377, 2376, 2375, 2373, 2370, 2370, 2369, 2367, 2364, 2361, 2357, 2354, 2351, 2339, 2335, 2332, 2328, 2326, 2324, 2322, 2319, 2318, 2316, 2315, 2312, 2314, 2301, 2296, 2292, 2292, 2290, 2285, 2285, 2285, 2280, 2278, 2277, 2276, 2274, 2272, 2267, 2267, 2267, 2269, 2270, 2272, 2271, 2276, 2276, 2275, 2275, 2276, 2274, 2273, 2273, 2273, 2272, 2267, 2266, 2264, 2263, 2263, 2263, 2261, 2258, 2257, 2256, 2251, 2249, 2246, 2244, 2243, 2240, 2242, 2158, 2159, 2160, 2159, 2159, 2159, 2161, 2163, 2163, 2165, 2414, 2362, 2255, 2090, 2058, 2034, 1885, 1871, 1863, 1883, 2028, 2017, 1997, 1983, 1991, 1988, 1996, 2000, 2004, 2010, 2013 }, 
{ 1651, 1649, 1786, 1825, 1875, 1954, 1957, 2085, 2204, 2333, 2120, 2117, 2173, 2188, 2141, 2133, 2145, 2174, 2145, 2042, 1889, 1881, 1769, 2581, 2263, 2241, 2228, 2218, 2254, 2237, 2153, 2129, 2036, 1984, 1922, 2524, 2651, 2359, 2203, 2220, 2251, 2278, 2245, 2274, 2246, 2223, 2185, 2117, 2062, 1987, 1546, 1551, 2510, 2523, 2665, 2171, 2125, 2152, 2219, 2176, 2207, 2220, 2194, 2198, 2173, 2145, 2146, 2119, 1787, 2213, 2222, 2266, 2115, 2159, 2181, 2185, 2209, 2210, 2209, 2210, 2210, 2210, 2210, 2204, 2194, 2181, 2161, 2246, 2241, 2228, 2225, 2211, 2199, 2192, 2188, 2186, 2181, 2172, 2144, 2140, 2126, 2116, 2121, 2117, 2110, 2081, 2075, 2081, 2057, 2038, 1850, 1844, 1844, 1844, 1836, 1838, 1839, 1844, 1860, 1912, 1922, 1942, 1951, 1953, 1955, 2019, 2043, 2052, 2089, 2098, 2325, 2326, 2341, 2360, 2433, 2449, 2469, 2511, 2542, 2567, 2570, 2581, 2584, 2589, 2602, 2601, 2599, 2427, 2424, 2332, 2286, 2267, 2250, 2246, 2236, 2232, 2212, 2209, 2205, 2202, 2190, 2167, 2159, 2152, 2133, 2132, 2135, 2111, 2095, 2093, 2096, 2097, 2089, 2085, 2081, 1985, 1981, 1985, 1978, 1971, 1967, 1974, 1987, 1987, 1986, 1985, 2026, 2049, 2052, 2058, 2067, 2082, 2117, 2118, 2146, 2153, 2420, 2433, 2444, 2446, 2498, 2537, 2705, 2710, 2716, 2767, 2801, 2803, 2830, 2861, 2869, 2872, 2882, 2870, 2861, 2845, 2825, 2765, 2630, 2623, 2615, 2606, 2597, 2591, 2581, 2579, 2573, 2569, 2565, 2542, 2540, 2537, 2533, 2526, 2521, 2516, 2512, 2508, 2505, 2501, 2498, 2492, 2487, 2481, 2481, 2470, 2469, 2461, 2453, 2444, 2440, 2437, 2429, 2428, 2423, 2421, 2420, 2418, 2416, 2414, 2407, 2402, 2400, 2400, 2395, 2391, 2388, 2390, 2387, 2384, 2381, 2379, 2374, 2373, 2371, 2370, 2370, 2363, 2363, 2361, 2359, 2356, 2354, 2353, 2350, 2349, 2348, 2348, 2344, 2343, 2345, 2336, 2334, 2333, 2333, 2332, 2330, 2327, 2322, 2324, 2321, 2319, 2319, 2315, 2316, 2312, 2313, 2305, 2304, 2297, 2298, 2296, 2296, 2297, 2295, 2295, 2292, 2287, 2288, 2286, 2285, 2283, 2281, 2281, 2278, 2273, 2269, 2257, 2258, 2257, 2256, 2256, 2250, 2250, 2245, 2243, 2245, 2243, 2239, 2240, 2236, 2237, 2233, 2233, 2232, 2228, 2230, 2222, 2215, 2212, 2214, 2208, 2208, 2205, 2203, 2202, 2197, 2199, 2199, 2198, 2194, 2193, 2189, 2187, 2184, 2185, 2181, 2181, 2181, 2181, 2180, 2180, 2179, 2176, 2178, 2176, 2174, 2177, 2176, 2175, 2167, 2170, 2170, 2166, 2164, 2161, 2163, 2164, 2160, 2159, 2166, 2162, 2163, 2358, 2377, 2390, 2373, 2269, 2249, 2222, 2204, 2201, 2210, 2210, 2213, 2215, 2220, 2225, 2236, 2235, 2230, 2230, 2247, 2246, 2265, 2271, 2273, 2278, 2275, 2261, 2256, 2239, 2259, 2259, 2259, 2265, 2186, 2181, 2159, 2162, 2179, 2244, 2263, 2269, 2266, 2213, 2210, 2216, 2209, 2195, 2205, 2209, 2226, 2239, 2250, 2250, 2251, 2248, 2239, 2230, 2223, 2224, 2239, 2333, 2388, 2434, 2469, 2482, 2484, 2502, 2510, 2509, 2509, 2513, 2502, 2502, 2500, 2496, 2493, 2464, 2441, 2437, 2413, 2404, 2361, 2175, 2327, 2226, 2236, 2257, 2261, 2261, 2135, 2126, 2136, 2134, 2229, 2271, 2301, 2247, 2169, 2163, 2153, 2150, 2152, 2150, 2145, 2143, 2141, 2141, 2131, 2179, 2167, 2161, 2161, 2147, 2140, 2249, 2293, 2307, 2310, 2315, 2315, 2314, 2312, 2314, 2312, 2314, 2318, 2320, 2321, 2322, 2324, 2320, 2324, 2331, 2330, 2330, 2327, 2326, 2325, 2324, 2319, 2318, 2314, 2314, 2314, 2313, 2310, 2310, 2305, 2304, 2303, 2303, 2300, 2288, 2285, 2281, 2279, 2276, 2274, 2271, 2269, 2268, 2265, 2265, 2265, 2261, 2258, 2254, 2252, 2241, 2236, 2232, 2227, 2226, 2239, 2234, 2236, 2237, 2237, 2236, 2237, 2236, 2236, 2236, 2226, 2228, 2230, 2228, 2226, 2227, 2226, 2230, 2226, 2225, 2221, 2216, 2210, 2209, 2206, 2210, 2212, 2129, 2132, 2133, 2131, 2132, 2134, 2138, 2138, 2138, 2138, 2330, 2294, 2259, 2237, 2254, 2257, 2238, 2230, 2209, 2212, 2234, 2234, 2228, 2249, 2256, 2260, 2268, 2269, 2260, 2257, 2257 }, 
{ 1663, 1644, 2020, 2014, 2061, 2124, 2120, 2147, 2174, 2246, 2139, 2164, 2390, 2496, 2157, 2156, 2153, 2194, 2131, 2049, 1996, 1989, 1958, 2759, 2546, 2098, 2210, 2204, 2214, 2201, 2124, 2110, 2039, 2006, 1955, 2443, 2701, 2445, 2454, 2163, 2129, 2094, 2149, 2059, 2182, 2176, 2159, 2113, 2092, 2057, 1742, 1742, 2655, 2677, 2844, 2450, 2538, 2585, 2695, 2612, 2537, 2539, 2519, 2513, 2445, 2343, 2332, 2271, 1902, 2327, 2337, 2413, 2249, 2546, 2475, 2473, 2463, 2271, 2235, 2228, 2219, 2210, 2200, 2202, 2162, 2122, 2085, 2197, 2196, 2175, 2172, 2155, 2140, 2135, 2128, 2127, 2117, 2109, 2100, 2089, 2078, 2067, 2067, 2047, 2048, 2043, 2042, 2041, 2024, 1998, 1866, 1857, 1855, 1853, 1849, 1848, 1875, 1914, 1992, 2225, 2298, 2366, 2386, 2383, 2374, 2553, 2622, 2635, 2699, 2713, 2901, 2915, 2900, 2918, 2882, 2824, 2894, 2898, 2879, 2862, 2856, 2849, 2802, 2783, 2805, 2785, 2707, 2447, 2416, 2317, 2260, 2245, 2222, 2221, 2204, 2201, 2187, 2170, 2180, 2163, 2155, 2137, 2135, 2136, 2120, 2117, 2124, 2097, 2074, 2079, 2063, 2067, 2055, 2054, 2039, 1940, 1940, 1947, 1940, 1942, 1933, 1936, 2023, 2051, 2123, 2157, 2422, 2516, 2531, 2555, 2581, 2620, 2701, 2708, 2760, 2776, 3082, 3061, 3058, 3063, 3081, 3031, 3087, 3082, 3079, 3027, 2996, 2993, 2994, 3008, 3006, 2993, 2974, 2937, 2895, 2862, 2830, 2751, 2616, 2606, 2588, 2581, 2575, 2571, 2550, 2544, 2538, 2533, 2530, 2504, 2500, 2498, 2494, 2486, 2476, 2467, 2464, 2460, 2459, 2452, 2449, 2443, 2441, 2437, 2435, 2418, 2418, 2407, 2400, 2392, 2386, 2385, 2375, 2371, 2366, 2364, 2361, 2359, 2359, 2357, 2350, 2348, 2342, 2340, 2335, 2330, 2329, 2323, 2326, 2328, 2320, 2320, 2320, 2321, 2321, 2318, 2318, 2311, 2309, 2306, 2302, 2298, 2292, 2291, 2290, 2290, 2289, 2284, 2279, 2277, 2274, 2266, 2265, 2263, 2262, 2262, 2267, 2262, 2249, 2252, 2253, 2254, 2255, 2248, 2244, 2238, 2236, 2236, 2232, 2230, 2224, 2233, 2235, 2235, 2214, 2210, 2205, 2218, 2201, 2198, 2197, 2196, 2198, 2202, 2206, 2196, 2190, 2196, 2188, 2183, 2181, 2181, 2180, 2181, 2181, 2182, 2181, 2171, 2170, 2167, 2173, 2155, 2157, 2161, 2162, 2150, 2147, 2139, 2138, 2138, 2141, 2131, 2129, 2129, 2132, 2126, 2121, 2118, 2116, 2117, 2118, 2117, 2115, 2109, 2107, 2106, 2110, 2102, 2100, 2100, 2100, 2102, 2108, 2106, 2102, 2097, 2092, 2100, 2099, 2101, 2089, 2087, 2087, 2094, 2084, 2083, 2082, 2080, 2086, 2084, 2082, 2079, 2090, 2128, 2255, 2401, 2436, 2383, 2353, 2283, 2185, 2185, 2181, 2190, 2203, 2211, 2211, 2222, 2228, 2237, 2312, 2324, 2366, 2371, 2417, 2437, 2464, 2469, 2469, 2459, 2462, 2502, 2545, 2589, 2599, 2711, 2586, 2584, 2554, 2537, 2579, 2574, 2677, 2714, 2697, 2703, 2670, 2718, 2712, 2678, 2632, 2634, 2580, 2469, 2423, 2414, 2393, 2387, 2357, 2331, 2322, 2304, 2291, 2352, 2397, 2435, 2465, 2469, 2468, 2477, 2479, 2474, 2473, 2465, 2457, 2455, 2453, 2451, 2449, 2416, 2379, 2371, 2337, 2330, 2267, 2094, 2268, 2020, 2158, 2317, 2323, 2363, 2478, 2477, 2616, 2618, 2732, 2694, 2724, 2634, 2683, 2674, 2677, 2624, 2581, 2579, 2572, 2542, 2527, 2526, 2481, 2377, 2316, 2289, 2285, 2261, 2235, 2298, 2334, 2344, 2344, 2349, 2346, 2347, 2344, 2344, 2344, 2342, 2349, 2347, 2347, 2348, 2349, 2349, 2346, 2344, 2345, 2344, 2338, 2336, 2335, 2334, 2330, 2329, 2320, 2319, 2319, 2317, 2314, 2314, 2316, 2316, 2315, 2314, 2314, 2296, 2294, 2291, 2292, 2290, 2285, 2284, 2282, 2278, 2278, 2277, 2275, 2274, 2273, 2265, 2265, 2268, 2265, 2263, 2265, 2265, 2266, 2265, 2266, 2267, 2267, 2264, 2262, 2263, 2264, 2262, 2257, 2259, 2258, 2254, 2256, 2256, 2255, 2251, 2251, 2249, 2246, 2246, 2244, 2239, 2236, 2236, 2235, 2127, 2128, 2124, 2123, 2122, 2124, 2123, 2125, 2124, 2125, 2363, 2355, 2319, 2274, 2247, 2219, 2120, 2091, 2077, 2069, 2232, 2235, 2237, 2247, 2267, 2285, 2296, 2318, 2347, 2335, 2329 }, 
{ 1818, 1811, 2295, 2304, 2334, 2360, 2363, 2371, 2392, 2422, 2399, 2402, 2447, 2630, 2644, 2657, 2646, 2633, 2592, 2157, 2085, 2081, 2051, 2503, 2298, 2163, 2158, 2157, 2164, 2163, 2129, 2129, 2091, 2065, 2024, 2425, 2581, 2602, 2233, 2398, 2325, 2369, 2422, 2305, 2251, 2243, 2230, 2202, 2200, 2178, 1885, 1886, 2453, 2486, 2558, 2557, 2611, 2333, 2339, 2349, 2258, 2241, 2234, 2235, 2198, 2142, 2132, 2166, 1986, 2303, 2305, 2239, 2187, 2249, 2214, 2222, 2226, 2181, 2181, 2181, 2181, 2179, 2181, 2180, 2181, 2181, 2164, 2208, 2203, 2200, 2199, 2183, 2180, 2179, 2178, 2176, 2171, 2162, 2157, 2149, 2146, 2139, 2138, 2134, 2132, 2126, 2124, 2124, 2105, 2094, 1968, 1964, 1963, 1961, 1953, 1955, 1963, 1973, 2000, 2110, 2149, 2187, 2208, 2214, 2214, 2312, 2363, 2374, 2411, 2426, 2603, 2610, 2609, 2615, 2612, 2593, 2592, 2592, 2602, 2598, 2598, 2597, 2581, 2581, 2581, 2567, 2502, 2365, 2352, 2302, 2273, 2261, 2246, 2247, 2237, 2239, 2227, 2220, 2218, 2215, 2204, 2196, 2196, 2195, 2184, 2183, 2181, 2169, 2149, 2148, 2145, 2143, 2128, 2122, 2116, 2030, 2030, 2030, 2022, 2021, 2018, 2020, 2053, 2057, 2078, 2092, 2262, 2318, 2320, 2334, 2350, 2375, 2425, 2426, 2471, 2476, 2710, 2710, 2716, 2714, 2737, 2746, 2743, 2746, 2746, 2742, 2729, 2724, 2718, 2717, 2716, 2706, 2683, 2659, 2631, 2611, 2588, 2556, 2522, 2497, 2477, 2473, 2468, 2466, 2449, 2447, 2443, 2441, 2440, 2422, 2420, 2417, 2414, 2410, 2407, 2400, 2399, 2394, 2393, 2392, 2387, 2386, 2383, 2380, 2380, 2373, 2370, 2366, 2358, 2356, 2354, 2351, 2343, 2344, 2339, 2340, 2336, 2336, 2335, 2334, 2330, 2329, 2326, 2324, 2322, 2321, 2320, 2317, 2316, 2314, 2312, 2310, 2310, 2310, 2311, 2310, 2309, 2304, 2302, 2302, 2300, 2299, 2296, 2295, 2294, 2295, 2292, 2290, 2288, 2288, 2286, 2283, 2281, 2282, 2279, 2277, 2277, 2275, 2272, 2271, 2270, 2271, 2271, 2269, 2269, 2265, 2265, 2260, 2256, 2254, 2255, 2252, 2253, 2253, 2247, 2245, 2246, 2243, 2243, 2239, 2240, 2239, 2237, 2236, 2236, 2237, 2233, 2232, 2230, 2228, 2226, 2226, 2224, 2226, 2223, 2223, 2222, 2220, 2220, 2218, 2216, 2210, 2208, 2207, 2208, 2204, 2206, 2198, 2198, 2196, 2195, 2190, 2192, 2190, 2187, 2189, 2184, 2186, 2187, 2183, 2182, 2181, 2181, 2181, 2181, 2181, 2178, 2175, 2176, 2173, 2173, 2175, 2173, 2171, 2171, 2171, 2169, 2170, 2170, 2170, 2168, 2166, 2168, 2167, 2166, 2167, 2165, 2164, 2164, 2163, 2164, 2163, 2163, 2187, 2362, 2523, 2563, 2630, 2629, 2633, 2543, 2448, 2393, 2326, 2290, 2286, 2276, 2274, 2279, 2273, 2274, 2275, 2280, 2286, 2294, 2294, 2314, 2316, 2317, 2315, 2318, 2339, 2355, 2376, 2376, 2432, 2277, 2260, 2142, 2138, 2102, 2181, 2147, 2177, 2179, 2171, 2165, 2160, 2171, 2182, 2201, 2195, 2169, 2189, 2201, 2203, 2210, 2211, 2209, 2193, 2191, 2220, 2239, 2262, 2280, 2314, 2339, 2365, 2363, 2380, 2400, 2400, 2401, 2400, 2401, 2401, 2399, 2399, 2396, 2377, 2351, 2347, 2328, 2320, 2279, 2163, 2561, 2511, 2510, 2490, 2469, 2396, 2199, 2195, 2220, 2228, 2188, 2218, 2230, 2154, 2216, 2220, 2220, 2214, 2213, 2213, 2202, 2196, 2192, 2191, 2186, 2230, 2243, 2236, 2236, 2223, 2210, 2212, 2256, 2263, 2266, 2281, 2278, 2279, 2279, 2279, 2279, 2281, 2282, 2285, 2283, 2283, 2284, 2285, 2286, 2284, 2288, 2285, 2283, 2282, 2283, 2279, 2277, 2276, 2276, 2276, 2272, 2273, 2275, 2274, 2278, 2281, 2283, 2283, 2282, 2280, 2277, 2275, 2277, 2276, 2273, 2272, 2271, 2269, 2267, 2268, 2265, 2263, 2263, 2259, 2256, 2255, 2254, 2254, 2254, 2252, 2255, 2259, 2257, 2255, 2257, 2258, 2258, 2255, 2256, 2257, 2253, 2252, 2252, 2251, 2251, 2251, 2253, 2250, 2252, 2251, 2247, 2247, 2245, 2246, 2245, 2240, 2240, 2161, 2161, 2162, 2161, 2161, 2161, 2161, 2160, 2160, 2162, 2402, 2540, 2559, 2518, 2513, 2529, 2514, 2523, 2511, 2510, 2513, 2514, 2535, 2534, 2533, 2524, 2546, 2519, 2478, 2471, 2469 }, 
{ 1622, 1620, 1938, 1994, 2003, 2055, 2056, 2079, 2079, 2123, 1975, 1982, 1990, 2070, 2045, 2052, 2056, 2053, 2001, 2028, 1963, 1959, 1921, 2113, 2291, 2146, 2142, 2151, 2145, 2153, 2092, 2086, 2032, 1999, 1943, 2412, 2123, 2168, 2291, 2155, 2135, 2116, 2120, 2132, 2226, 2209, 2167, 2085, 2064, 2034, 1726, 1724, 2085, 2079, 2151, 2212, 2259, 2365, 2518, 2505, 2349, 2322, 2281, 2279, 2250, 2175, 2172, 2101, 1861, 2220, 2220, 2282, 2170, 2341, 2275, 2280, 2269, 2154, 2151, 2147, 2139, 2133, 2132, 2126, 2117, 2086, 2045, 2137, 2131, 2120, 2112, 2101, 2090, 2088, 2080, 2079, 2072, 2065, 2046, 2037, 2028, 2008, 2013, 2003, 2010, 1997, 1992, 1987, 1971, 1955, 1833, 1830, 1830, 1827, 1825, 1826, 1867, 1893, 1957, 2237, 2322, 2388, 2412, 2412, 2408, 2562, 2629, 2655, 2708, 2745, 2951, 2971, 2973, 2969, 2915, 2878, 2879, 2877, 2869, 2859, 2852, 2839, 2788, 2787, 2775, 2733, 2619, 2390, 2364, 2286, 2234, 2218, 2198, 2200, 2181, 2180, 2167, 2151, 2155, 2140, 2144, 2128, 2129, 2130, 2112, 2110, 2111, 2087, 2062, 2061, 2045, 2044, 2023, 2015, 2002, 1916, 1914, 1916, 1907, 1908, 1904, 1921, 2017, 2041, 2114, 2160, 2460, 2551, 2555, 2566, 2581, 2628, 2716, 2727, 2784, 2798, 3139, 3139, 3145, 3147, 3147, 3139, 3079, 3072, 3067, 3032, 2992, 2987, 2966, 2944, 2942, 2928, 2866, 2809, 2759, 2729, 2691, 2638, 2576, 2572, 2534, 2520, 2510, 2503, 2486, 2483, 2474, 2469, 2465, 2447, 2447, 2441, 2439, 2433, 2420, 2412, 2408, 2406, 2405, 2397, 2395, 2389, 2386, 2389, 2390, 2369, 2372, 2361, 2356, 2354, 2345, 2343, 2338, 2332, 2330, 2326, 2326, 2327, 2325, 2319, 2312, 2314, 2309, 2306, 2305, 2298, 2296, 2292, 2298, 2298, 2294, 2288, 2294, 2296, 2294, 2289, 2287, 2279, 2279, 2280, 2273, 2267, 2263, 2261, 2259, 2265, 2261, 2253, 2244, 2242, 2241, 2237, 2236, 2235, 2233, 2236, 2238, 2236, 2222, 2222, 2224, 2226, 2228, 2221, 2218, 2211, 2210, 2203, 2199, 2196, 2193, 2197, 2199, 2199, 2183, 2181, 2181, 2185, 2178, 2181, 2191, 2205, 2210, 2213, 2188, 2178, 2172, 2175, 2169, 2166, 2161, 2158, 2158, 2163, 2164, 2163, 2161, 2151, 2150, 2145, 2151, 2138, 2141, 2140, 2139, 2132, 2131, 2124, 2120, 2124, 2124, 2114, 2112, 2113, 2113, 2110, 2100, 2099, 2097, 2098, 2102, 2105, 2102, 2093, 2091, 2090, 2094, 2090, 2087, 2085, 2087, 2090, 2091, 2092, 2090, 2084, 2079, 2084, 2087, 2085, 2075, 2075, 2073, 2077, 2073, 2071, 2069, 2069, 2072, 2070, 2072, 2071, 2079, 2183, 2236, 2196, 2184, 2180, 2174, 2178, 2168, 2173, 2186, 2194, 2202, 2205, 2223, 2229, 2234, 2241, 2287, 2286, 2312, 2321, 2364, 2376, 2402, 2413, 2402, 2383, 2391, 2418, 2460, 2484, 2485, 2577, 2408, 2407, 2379, 2349, 2341, 2351, 2398, 2381, 2376, 2334, 2339, 2331, 2339, 2337, 2305, 2283, 2247, 2120, 2095, 2091, 2087, 2077, 2064, 2043, 2032, 2035, 2035, 2214, 2249, 2335, 2396, 2410, 2407, 2427, 2428, 2433, 2433, 2422, 2412, 2413, 2410, 2410, 2408, 2365, 2320, 2305, 2282, 2270, 2209, 2026, 2163, 1999, 2000, 2073, 2077, 2129, 2140, 2158, 2229, 2254, 2326, 2340, 2338, 2334, 2334, 2297, 2306, 2259, 2236, 2234, 2200, 2181, 2164, 2163, 2126, 2063, 2039, 2018, 2017, 1996, 1989, 2190, 2243, 2263, 2264, 2277, 2279, 2281, 2284, 2283, 2284, 2285, 2286, 2287, 2289, 2292, 2290, 2296, 2296, 2291, 2290, 2287, 2282, 2285, 2287, 2286, 2281, 2276, 2271, 2274, 2269, 2270, 2266, 2271, 2272, 2275, 2277, 2271, 2271, 2257, 2257, 2251, 2249, 2247, 2246, 2247, 2247, 2243, 2239, 2237, 2237, 2236, 2238, 2237, 2232, 2236, 2236, 2235, 2234, 2231, 2234, 2230, 2234, 2236, 2236, 2231, 2229, 2235, 2236, 2236, 2232, 2232, 2228, 2230, 2230, 2234, 2232, 2224, 2227, 2225, 2215, 2219, 2219, 2215, 2211, 2210, 2210, 2087, 2081, 2083, 2087, 2084, 2078, 2075, 2081, 2077, 2069, 2241, 2203, 2181, 2130, 2110, 2075, 2024, 2006, 2012, 2010, 2035, 2040, 2043, 2055, 2071, 2073, 2077, 2092, 2094, 2102, 2106 }, 
{ 1585, 1580, 1963, 1968, 2299, 2373, 2375, 2355, 2362, 2469, 2481, 2529, 2647, 2590, 2011, 2041, 2190, 2333, 2193, 2042, 1941, 1937, 1870, 2714, 2277, 2224, 2198, 2192, 2273, 2253, 2163, 2146, 2075, 2034, 1963, 2655, 2791, 2344, 2216, 2270, 2216, 2187, 2229, 2183, 2249, 2226, 2187, 2118, 2089, 2028, 1659, 1660, 2726, 2737, 2894, 2293, 2176, 2259, 2225, 2250, 2281, 2254, 2269, 2270, 2253, 2265, 2258, 2236, 1867, 2213, 2210, 2245, 2125, 2247, 2251, 2257, 2293, 2305, 2298, 2301, 2298, 2307, 2301, 2313, 2294, 2258, 2212, 2277, 2271, 2245, 2241, 2222, 2211, 2203, 2200, 2194, 2191, 2181, 2155, 2148, 2136, 2122, 2124, 2120, 2112, 2086, 2079, 2078, 2056, 2039, 1826, 1822, 1816, 1817, 1807, 1807, 1808, 1821, 1859, 1957, 1994, 2048, 2058, 2066, 2064, 2177, 2212, 2232, 2282, 2281, 2563, 2587, 2591, 2608, 2601, 2621, 2658, 2695, 2732, 2785, 2792, 2799, 2822, 2819, 2835, 2808, 2804, 2494, 2461, 2359, 2302, 2283, 2262, 2257, 2245, 2243, 2218, 2206, 2200, 2196, 2182, 2173, 2171, 2163, 2149, 2144, 2143, 2114, 2091, 2083, 2078, 2077, 2060, 2053, 2052, 1949, 1945, 1943, 1937, 1935, 1933, 1924, 1940, 1949, 1967, 1974, 2126, 2181, 2183, 2193, 2204, 2234, 2288, 2290, 2334, 2343, 2701, 2706, 2712, 2714, 2734, 2756, 2871, 2889, 2904, 2981, 3031, 3035, 3055, 3078, 3077, 3085, 3112, 3108, 3076, 3031, 2988, 2883, 2668, 2659, 2643, 2630, 2622, 2618, 2597, 2593, 2584, 2581, 2581, 2564, 2562, 2557, 2552, 2543, 2531, 2526, 2521, 2516, 2514, 2508, 2505, 2498, 2495, 2492, 2490, 2477, 2474, 2468, 2457, 2449, 2444, 2444, 2432, 2431, 2426, 2424, 2422, 2420, 2417, 2414, 2406, 2404, 2400, 2399, 2394, 2389, 2389, 2385, 2383, 2383, 2378, 2375, 2375, 2375, 2373, 2372, 2370, 2365, 2364, 2363, 2357, 2354, 2350, 2350, 2348, 2346, 2342, 2341, 2339, 2337, 2336, 2330, 2329, 2326, 2324, 2322, 2322, 2318, 2313, 2310, 2310, 2308, 2308, 2306, 2304, 2300, 2299, 2294, 2292, 2290, 2288, 2288, 2285, 2282, 2278, 2276, 2274, 2273, 2268, 2268, 2267, 2265, 2263, 2263, 2257, 2254, 2251, 2245, 2244, 2241, 2242, 2241, 2236, 2235, 2235, 2234, 2231, 2228, 2229, 2224, 2219, 2217, 2212, 2213, 2210, 2209, 2210, 2202, 2195, 2187, 2187, 2181, 2182, 2181, 2181, 2180, 2180, 2178, 2179, 2172, 2169, 2165, 2164, 2162, 2159, 2160, 2155, 2153, 2153, 2153, 2151, 2149, 2148, 2148, 2146, 2146, 2145, 2142, 2143, 2142, 2141, 2139, 2138, 2138, 2135, 2135, 2134, 2133, 2134, 2132, 2133, 2132, 2136, 2282, 2528, 2601, 2582, 2423, 2365, 2316, 2214, 2165, 2137, 2129, 2129, 2128, 2127, 2126, 2130, 2144, 2163, 2167, 2181, 2181, 2190, 2195, 2204, 2208, 2207, 2204, 2203, 2204, 2208, 2194, 2192, 2235, 2059, 2029, 2117, 2125, 2150, 2139, 2181, 2181, 2170, 2253, 2224, 2257, 2225, 2214, 2262, 2271, 2277, 2291, 2298, 2283, 2279, 2285, 2297, 2259, 2254, 2241, 2222, 2425, 2458, 2498, 2518, 2518, 2519, 2522, 2523, 2518, 2515, 2506, 2495, 2493, 2492, 2486, 2482, 2459, 2433, 2429, 2397, 2389, 2339, 2181, 2395, 2003, 2115, 2136, 2153, 2176, 2146, 2181, 2239, 2243, 2123, 2158, 2176, 2187, 2210, 2216, 2222, 2224, 2214, 2238, 2212, 2202, 2206, 2190, 2239, 2236, 2250, 2230, 2222, 2208, 2200, 2335, 2376, 2384, 2384, 2380, 2375, 2373, 2371, 2371, 2371, 2369, 2380, 2377, 2375, 2375, 2376, 2375, 2380, 2377, 2373, 2372, 2371, 2370, 2367, 2364, 2355, 2353, 2347, 2343, 2341, 2339, 2337, 2337, 2335, 2335, 2334, 2334, 2330, 2321, 2319, 2315, 2314, 2312, 2308, 2308, 2306, 2304, 2302, 2300, 2300, 2296, 2294, 2290, 2290, 2287, 2287, 2288, 2290, 2287, 2292, 2292, 2294, 2294, 2293, 2292, 2290, 2290, 2290, 2288, 2285, 2285, 2285, 2283, 2283, 2285, 2283, 2277, 2275, 2276, 2272, 2271, 2267, 2266, 2265, 2261, 2261, 2172, 2171, 2170, 2170, 2171, 2173, 2172, 2174, 2175, 2176, 2499, 2449, 2384, 2308, 2282, 2243, 2060, 2006, 1992, 2044, 2164, 2181, 2187, 2198, 2202, 2198, 2204, 2219, 2225, 2230, 2236 }, 
{ 1746, 1746, 2089, 2161, 2236, 2286, 2285, 2320, 2335, 2383, 2329, 2296, 2340, 2394, 2308, 2311, 2348, 2330, 2209, 2130, 2065, 2065, 2032, 2469, 2409, 2243, 2235, 2232, 2233, 2242, 2181, 2180, 2116, 2091, 2041, 2476, 2462, 2436, 2286, 2269, 2220, 2220, 2275, 2192, 2263, 2255, 2230, 2185, 2171, 2136, 1807, 1811, 2437, 2435, 2559, 2437, 2436, 2390, 2449, 2422, 2349, 2360, 2329, 2328, 2296, 2255, 2254, 2255, 1975, 2275, 2292, 2261, 2241, 2365, 2333, 2330, 2320, 2279, 2262, 2263, 2263, 2265, 2269, 2266, 2265, 2230, 2181, 2247, 2236, 2233, 2229, 2211, 2198, 2198, 2189, 2185, 2177, 2176, 2168, 2148, 2139, 2137, 2135, 2122, 2125, 2112, 2112, 2107, 2096, 2078, 1946, 1942, 1938, 1936, 1929, 1929, 1957, 1981, 2033, 2218, 2278, 2329, 2349, 2350, 2345, 2485, 2557, 2572, 2623, 2650, 2896, 2902, 2908, 2921, 2894, 2848, 2842, 2859, 2858, 2834, 2826, 2822, 2803, 2786, 2780, 2744, 2676, 2483, 2451, 2360, 2319, 2308, 2288, 2288, 2274, 2272, 2259, 2250, 2249, 2240, 2225, 2214, 2212, 2214, 2200, 2200, 2201, 2183, 2165, 2153, 2157, 2150, 2139, 2132, 2131, 2034, 2033, 2031, 2028, 2025, 2024, 2024, 2074, 2089, 2151, 2178, 2411, 2486, 2491, 2504, 2529, 2573, 2644, 2651, 2712, 2726, 3058, 3053, 3051, 3050, 3072, 3093, 3070, 3065, 3058, 3006, 2994, 2994, 2975, 2955, 2958, 2944, 2924, 2890, 2860, 2835, 2796, 2741, 2637, 2630, 2614, 2602, 2593, 2582, 2581, 2579, 2569, 2565, 2550, 2541, 2537, 2531, 2515, 2521, 2510, 2504, 2496, 2485, 2484, 2490, 2489, 2486, 2476, 2467, 2468, 2462, 2454, 2453, 2438, 2433, 2432, 2430, 2418, 2416, 2410, 2408, 2404, 2401, 2402, 2398, 2391, 2392, 2385, 2382, 2382, 2379, 2375, 2373, 2379, 2381, 2372, 2370, 2373, 2375, 2371, 2371, 2368, 2361, 2359, 2359, 2354, 2350, 2345, 2343, 2343, 2347, 2343, 2335, 2333, 2331, 2329, 2327, 2326, 2325, 2322, 2330, 2334, 2326, 2312, 2312, 2316, 2321, 2319, 2307, 2304, 2300, 2302, 2297, 2291, 2289, 2288, 2294, 2294, 2293, 2281, 2280, 2277, 2283, 2274, 2273, 2270, 2270, 2271, 2280, 2281, 2268, 2263, 2267, 2260, 2257, 2253, 2250, 2251, 2251, 2251, 2253, 2248, 2240, 2239, 2239, 2240, 2232, 2234, 2234, 2234, 2225, 2224, 2215, 2216, 2218, 2217, 2205, 2204, 2207, 2210, 2204, 2198, 2195, 2195, 2199, 2200, 2201, 2193, 2187, 2185, 2183, 2189, 2182, 2181, 2179, 2181, 2181, 2186, 2185, 2183, 2179, 2181, 2181, 2181, 2181, 2177, 2175, 2175, 2174, 2175, 2173, 2171, 2169, 2170, 2172, 2166, 2169, 2179, 2210, 2386, 2481, 2492, 2432, 2405, 2381, 2334, 2305, 2316, 2300, 2290, 2289, 2284, 2280, 2270, 2275, 2295, 2287, 2294, 2302, 2331, 2334, 2345, 2363, 2362, 2362, 2361, 2384, 2415, 2432, 2433, 2499, 2399, 2378, 2342, 2332, 2348, 2373, 2427, 2439, 2435, 2429, 2425, 2443, 2437, 2435, 2426, 2413, 2374, 2352, 2328, 2332, 2319, 2327, 2316, 2300, 2286, 2279, 2280, 2358, 2378, 2447, 2483, 2496, 2485, 2505, 2500, 2498, 2495, 2485, 2481, 2478, 2476, 2481, 2472, 2429, 2401, 2404, 2383, 2363, 2304, 2147, 2439, 2194, 2198, 2310, 2290, 2296, 2332, 2334, 2380, 2414, 2416, 2435, 2440, 2424, 2435, 2439, 2445, 2408, 2413, 2402, 2388, 2396, 2377, 2379, 2384, 2299, 2275, 2269, 2266, 2228, 2236, 2304, 2331, 2355, 2358, 2368, 2364, 2369, 2364, 2355, 2350, 2353, 2378, 2372, 2363, 2360, 2359, 2368, 2377, 2369, 2361, 2358, 2354, 2358, 2369, 2371, 2349, 2347, 2357, 2339, 2334, 2346, 2349, 2347, 2345, 2343, 2343, 2352, 2359, 2340, 2327, 2335, 2340, 2336, 2328, 2323, 2321, 2329, 2331, 2328, 2329, 2318, 2316, 2321, 2318, 2313, 2320, 2325, 2326, 2322, 2322, 2323, 2321, 2316, 2313, 2322, 2318, 2314, 2316, 2321, 2322, 2320, 2309, 2307, 2309, 2310, 2313, 2306, 2306, 2311, 2301, 2303, 2303, 2308, 2302, 2298, 2296, 2181, 2178, 2177, 2181, 2181, 2174, 2174, 2181, 2180, 2177, 2439, 2475, 2459, 2374, 2338, 2309, 2246, 2219, 2215, 2237, 2278, 2288, 2302, 2338, 2358, 2335, 2325, 2343, 2341, 2330, 2330 }, 
{ 1628, 1625, 2065, 2079, 2179, 2261, 2264, 2302, 2326, 2405, 2443, 2489, 2598, 2844, 2160, 2171, 2277, 2480, 2328, 2063, 1980, 1977, 1939, 2759, 2394, 2216, 2200, 2193, 2235, 2234, 2161, 2148, 2086, 2046, 1984, 2603, 2726, 2624, 2407, 2394, 2332, 2332, 2318, 2171, 2215, 2201, 2179, 2114, 2090, 2046, 1700, 1708, 2717, 2721, 2857, 2505, 2394, 2501, 2462, 2432, 2369, 2347, 2336, 2332, 2298, 2279, 2274, 2246, 1938, 2380, 2384, 2439, 2248, 2384, 2309, 2312, 2320, 2237, 2237, 2236, 2235, 2234, 2228, 2229, 2220, 2202, 2181, 2261, 2265, 2251, 2250, 2234, 2222, 2216, 2210, 2208, 2200, 2188, 2160, 2157, 2136, 2125, 2126, 2116, 2110, 2091, 2089, 2087, 2067, 2052, 1820, 1816, 1812, 1813, 1803, 1804, 1834, 1882, 1940, 2131, 2206, 2257, 2275, 2269, 2262, 2408, 2479, 2494, 2543, 2558, 2778, 2783, 2793, 2803, 2773, 2763, 2763, 2767, 2772, 2770, 2773, 2774, 2775, 2769, 2771, 2744, 2677, 2468, 2438, 2342, 2285, 2265, 2240, 2236, 2226, 2224, 2202, 2195, 2188, 2181, 2175, 2161, 2162, 2157, 2143, 2139, 2138, 2106, 2083, 2077, 2070, 2065, 2043, 2039, 2031, 1925, 1924, 1923, 1915, 1912, 1909, 1912, 1989, 2006, 2059, 2082, 2324, 2397, 2406, 2422, 2441, 2481, 2544, 2556, 2604, 2624, 2914, 2912, 2915, 2918, 2942, 2933, 2944, 2946, 2947, 2938, 2954, 2953, 2975, 2963, 2959, 2950, 2946, 2932, 2906, 2874, 2849, 2768, 2637, 2628, 2611, 2600, 2591, 2585, 2573, 2565, 2558, 2555, 2549, 2528, 2525, 2522, 2516, 2508, 2499, 2491, 2488, 2482, 2480, 2477, 2473, 2468, 2463, 2459, 2457, 2442, 2442, 2432, 2422, 2413, 2410, 2407, 2396, 2396, 2388, 2388, 2384, 2383, 2382, 2380, 2372, 2368, 2366, 2361, 2356, 2351, 2352, 2347, 2345, 2343, 2338, 2337, 2335, 2334, 2334, 2334, 2333, 2327, 2324, 2321, 2318, 2318, 2318, 2316, 2314, 2311, 2308, 2308, 2304, 2301, 2298, 2293, 2291, 2289, 2287, 2285, 2284, 2280, 2276, 2274, 2274, 2274, 2272, 2269, 2267, 2263, 2264, 2255, 2254, 2249, 2245, 2245, 2243, 2240, 2232, 2232, 2227, 2225, 2222, 2222, 2220, 2219, 2219, 2220, 2218, 2216, 2215, 2208, 2208, 2206, 2204, 2203, 2201, 2200, 2198, 2199, 2198, 2195, 2193, 2189, 2185, 2181, 2177, 2179, 2176, 2174, 2169, 2158, 2156, 2153, 2153, 2150, 2150, 2144, 2140, 2138, 2136, 2136, 2133, 2134, 2134, 2134, 2132, 2127, 2127, 2127, 2123, 2119, 2118, 2118, 2118, 2118, 2115, 2116, 2114, 2112, 2112, 2112, 2113, 2113, 2110, 2108, 2106, 2106, 2103, 2102, 2102, 2102, 2100, 2100, 2104, 2101, 2104, 2165, 2384, 2577, 2606, 2575, 2530, 2465, 2334, 2256, 2212, 2210, 2211, 2202, 2203, 2206, 2209, 2214, 2249, 2250, 2275, 2280, 2305, 2315, 2335, 2339, 2342, 2321, 2322, 2341, 2349, 2377, 2392, 2445, 2354, 2356, 2394, 2407, 2442, 2435, 2494, 2501, 2496, 2449, 2444, 2457, 2456, 2445, 2431, 2421, 2390, 2370, 2347, 2342, 2341, 2329, 2329, 2314, 2301, 2291, 2283, 2390, 2418, 2461, 2500, 2501, 2497, 2498, 2496, 2491, 2490, 2481, 2477, 2475, 2474, 2470, 2467, 2443, 2414, 2406, 2383, 2373, 2326, 2149, 2425, 2121, 2179, 2314, 2328, 2383, 2392, 2422, 2530, 2548, 2465, 2471, 2475, 2427, 2442, 2452, 2455, 2403, 2392, 2382, 2347, 2359, 2335, 2322, 2330, 2271, 2267, 2273, 2273, 2253, 2248, 2335, 2369, 2390, 2390, 2390, 2387, 2388, 2388, 2388, 2389, 2388, 2396, 2396, 2396, 2397, 2403, 2398, 2395, 2398, 2398, 2390, 2390, 2388, 2388, 2385, 2382, 2380, 2376, 2372, 2369, 2367, 2367, 2368, 2369, 2368, 2368, 2368, 2368, 2358, 2357, 2355, 2353, 2353, 2345, 2343, 2342, 2338, 2338, 2336, 2335, 2334, 2330, 2332, 2329, 2324, 2324, 2326, 2327, 2325, 2321, 2320, 2324, 2322, 2322, 2322, 2320, 2318, 2319, 2320, 2310, 2308, 2309, 2306, 2306, 2306, 2306, 2302, 2302, 2300, 2296, 2293, 2290, 2286, 2285, 2286, 2285, 2160, 2161, 2161, 2161, 2161, 2161, 2161, 2165, 2164, 2167, 2539, 2546, 2482, 2431, 2404, 2385, 2207, 2159, 2142, 2165, 2292, 2306, 2324, 2352, 2363, 2370, 2380, 2399, 2412, 2416, 2422 }, 
{ 1657, 1646, 2275, 2314, 2338, 2372, 2377, 2392, 2396, 2441, 2458, 2538, 2655, 2512, 2489, 2516, 2512, 2486, 2433, 2235, 2110, 2107, 2059, 2555, 2600, 2298, 2288, 2320, 2310, 2298, 2242, 2225, 2147, 2118, 2042, 2678, 2892, 2581, 2737, 2655, 2606, 2594, 2604, 2621, 2397, 2374, 2343, 2274, 2253, 2206, 1783, 1781, 2361, 2365, 2459, 2530, 2580, 2648, 2808, 2826, 2581, 2543, 2515, 2509, 2471, 2369, 2358, 2306, 1900, 2590, 2582, 2668, 2489, 2474, 2410, 2404, 2426, 2321, 2320, 2294, 2302, 2305, 2301, 2298, 2276, 2240, 2218, 2279, 2271, 2257, 2257, 2234, 2220, 2216, 2210, 2205, 2202, 2193, 2175, 2169, 2149, 2137, 2139, 2136, 2128, 2090, 2089, 2088, 2060, 2039, 1877, 1870, 1870, 1868, 1861, 1864, 1939, 2022, 2096, 2259, 2306, 2340, 2355, 2351, 2347, 2397, 2431, 2437, 2461, 2476, 2587, 2588, 2593, 2610, 2606, 2591, 2591, 2593, 2587, 2581, 2581, 2581, 2565, 2563, 2555, 2538, 2481, 2365, 2354, 2287, 2249, 2237, 2218, 2214, 2205, 2204, 2182, 2180, 2175, 2168, 2160, 2151, 2150, 2149, 2139, 2134, 2135, 2112, 2090, 2085, 2079, 2074, 2038, 2029, 2020, 1893, 1892, 1890, 1881, 1879, 1877, 1896, 2096, 2129, 2177, 2201, 2393, 2438, 2441, 2447, 2458, 2469, 2484, 2484, 2508, 2515, 2694, 2698, 2699, 2704, 2720, 2730, 2734, 2738, 2740, 2730, 2721, 2720, 2708, 2691, 2687, 2681, 2665, 2641, 2606, 2581, 2564, 2540, 2495, 2490, 2479, 2473, 2465, 2463, 2451, 2449, 2444, 2442, 2439, 2425, 2422, 2421, 2416, 2412, 2406, 2403, 2402, 2396, 2394, 2389, 2388, 2384, 2380, 2376, 2374, 2364, 2363, 2353, 2346, 2341, 2337, 2335, 2328, 2326, 2323, 2322, 2320, 2318, 2316, 2315, 2310, 2308, 2304, 2303, 2300, 2299, 2298, 2294, 2294, 2294, 2292, 2292, 2291, 2290, 2289, 2289, 2288, 2283, 2281, 2280, 2276, 2275, 2273, 2271, 2271, 2268, 2265, 2264, 2261, 2260, 2258, 2248, 2247, 2249, 2246, 2247, 2246, 2244, 2239, 2237, 2236, 2236, 2234, 2232, 2231, 2229, 2229, 2221, 2218, 2217, 2215, 2213, 2215, 2213, 2208, 2208, 2206, 2200, 2197, 2196, 2195, 2194, 2193, 2192, 2189, 2187, 2186, 2180, 2180, 2177, 2177, 2176, 2171, 2171, 2169, 2169, 2165, 2163, 2162, 2160, 2157, 2153, 2151, 2150, 2149, 2146, 2147, 2140, 2139, 2136, 2135, 2132, 2131, 2129, 2127, 2126, 2124, 2122, 2120, 2117, 2114, 2112, 2112, 2110, 2108, 2106, 2104, 2102, 2102, 2101, 2101, 2101, 2100, 2102, 2099, 2098, 2094, 2095, 2095, 2096, 2093, 2094, 2094, 2094, 2093, 2092, 2090, 2091, 2092, 2092, 2093, 2096, 2110, 2217, 2339, 2429, 2453, 2488, 2492, 2507, 2522, 2567, 2581, 2609, 2623, 2630, 2643, 2649, 2658, 2662, 2700, 2724, 2749, 2763, 2777, 2792, 2798, 2801, 2800, 2813, 2805, 2832, 2861, 2871, 2880, 2943, 2810, 2788, 2720, 2694, 2680, 2616, 2591, 2592, 2581, 2581, 2580, 2582, 2581, 2581, 2560, 2557, 2553, 2494, 2450, 2433, 2430, 2408, 2360, 2338, 2316, 2315, 2304, 2355, 2372, 2400, 2435, 2465, 2467, 2487, 2494, 2500, 2501, 2502, 2503, 2502, 2502, 2502, 2500, 2485, 2468, 2466, 2481, 2434, 2373, 2183, 2477, 2396, 2404, 2501, 2502, 2555, 2394, 2420, 2444, 2435, 2437, 2447, 2413, 2472, 2437, 2430, 2435, 2434, 2420, 2448, 2435, 2430, 2417, 2412, 2399, 2261, 2253, 2179, 2181, 2197, 2193, 2282, 2325, 2341, 2343, 2350, 2353, 2357, 2359, 2359, 2359, 2360, 2370, 2368, 2368, 2373, 2375, 2376, 2372, 2372, 2370, 2373, 2372, 2369, 2367, 2367, 2361, 2361, 2359, 2357, 2355, 2354, 2359, 2357, 2356, 2357, 2355, 2355, 2355, 2351, 2348, 2346, 2345, 2343, 2342, 2341, 2339, 2339, 2339, 2339, 2337, 2334, 2334, 2333, 2334, 2330, 2332, 2333, 2330, 2330, 2330, 2334, 2335, 2334, 2331, 2324, 2322, 2318, 2320, 2319, 2317, 2316, 2318, 2314, 2314, 2314, 2316, 2313, 2310, 2310, 2309, 2309, 2306, 2304, 2303, 2310, 2310, 2225, 2224, 2223, 2223, 2224, 2224, 2224, 2225, 2225, 2228, 2496, 2516, 2501, 2466, 2432, 2417, 2380, 2376, 2377, 2383, 2404, 2403, 2415, 2426, 2433, 2436, 2464, 2467, 2488, 2497, 2510 }, 
{ 1561, 1557, 1931, 1949, 2019, 2061, 2067, 2094, 2109, 2210, 2198, 2224, 2305, 2580, 2592, 2618, 2612, 2614, 2347, 1890, 1761, 1755, 1657, 2269, 2221, 2085, 2075, 2073, 2053, 2061, 1959, 1930, 1836, 1789, 1734, 2214, 2353, 2445, 2490, 2378, 2371, 2414, 2425, 2408, 2168, 2138, 2077, 1991, 1942, 1871, 1457, 1461, 2228, 2239, 2334, 2241, 2215, 2249, 2282, 2195, 2200, 2181, 2138, 2134, 2110, 2077, 2073, 2046, 1662, 2341, 2346, 2403, 2170, 2224, 2246, 2246, 2252, 2150, 2145, 2145, 2146, 2144, 2145, 2145, 2145, 2133, 2103, 2141, 2140, 2132, 2130, 2109, 2094, 2089, 2087, 2083, 2076, 2068, 2049, 2041, 2027, 2017, 2014, 2012, 2003, 1981, 1974, 1977, 1963, 1944, 1773, 1769, 1767, 1766, 1759, 1759, 1764, 1769, 1780, 1816, 1825, 1842, 1846, 1846, 1850, 1899, 1913, 1918, 1949, 1958, 2134, 2151, 2147, 2155, 2208, 2232, 2242, 2274, 2294, 2317, 2324, 2333, 2342, 2349, 2346, 2365, 2374, 2273, 2255, 2137, 2104, 2090, 2074, 2068, 2057, 2055, 2041, 2034, 2033, 2031, 2006, 1991, 1983, 1975, 1957, 1957, 1959, 1937, 1927, 1940, 1934, 1936, 1926, 1929, 1930, 1844, 1842, 1837, 1833, 1833, 1833, 1814, 1821, 1821, 1817, 1817, 1839, 1855, 1857, 1863, 1866, 1879, 1905, 1908, 1934, 1942, 2197, 2206, 2215, 2222, 2249, 2279, 2408, 2426, 2437, 2487, 2516, 2524, 2541, 2579, 2581, 2590, 2624, 2634, 2627, 2618, 2605, 2571, 2479, 2471, 2456, 2450, 2442, 2438, 2425, 2421, 2413, 2412, 2408, 2390, 2387, 2384, 2382, 2374, 2367, 2365, 2361, 2358, 2352, 2348, 2343, 2341, 2334, 2328, 2328, 2311, 2308, 2300, 2288, 2281, 2279, 2276, 2262, 2261, 2256, 2255, 2251, 2254, 2255, 2252, 2244, 2241, 2237, 2236, 2234, 2231, 2231, 2230, 2227, 2229, 2222, 2211, 2206, 2204, 2201, 2198, 2198, 2190, 2190, 2185, 2185, 2185, 2183, 2183, 2181, 2181, 2181, 2181, 2183, 2181, 2181, 2180, 2176, 2178, 2177, 2175, 2170, 2167, 2163, 2162, 2160, 2161, 2159, 2154, 2153, 2153, 2153, 2147, 2145, 2143, 2143, 2142, 2141, 2142, 2139, 2138, 2136, 2134, 2130, 2131, 2129, 2126, 2126, 2124, 2120, 2114, 2108, 2091, 2090, 2089, 2089, 2087, 2082, 2080, 2076, 2075, 2069, 2069, 2070, 2073, 2076, 2075, 2073, 2074, 2072, 2072, 2073, 2067, 2060, 2052, 2052, 2045, 2046, 2048, 2051, 2049, 2046, 2047, 2045, 2040, 2034, 2028, 2025, 2024, 2026, 2027, 2024, 2021, 2020, 2022, 2019, 2018, 2018, 2017, 2015, 2017, 2016, 2009, 2009, 2006, 2006, 2007, 2008, 2007, 2007, 2008, 2004, 2004, 2008, 2006, 2004, 2010, 2011, 2022, 2132, 2226, 2255, 2315, 2312, 2322, 2321, 2324, 2335, 2336, 2341, 2347, 2352, 2352, 2355, 2358, 2373, 2374, 2392, 2397, 2411, 2416, 2406, 2383, 2349, 2247, 2237, 2217, 2202, 2196, 2197, 2198, 2108, 2092, 2100, 2111, 2152, 2232, 2253, 2254, 2253, 2207, 2211, 2228, 2222, 2203, 2177, 2180, 2194, 2211, 2200, 2203, 2198, 2199, 2196, 2182, 2181, 2208, 2222, 2242, 2259, 2287, 2315, 2337, 2340, 2362, 2361, 2365, 2371, 2377, 2364, 2362, 2359, 2357, 2353, 2326, 2306, 2304, 2277, 2275, 2219, 2069, 2294, 2313, 2330, 2370, 2368, 2380, 2151, 2143, 2153, 2190, 2181, 2181, 2185, 2260, 2236, 2237, 2244, 2199, 2186, 2181, 2167, 2162, 2156, 2154, 2145, 2202, 2187, 2175, 2171, 2157, 2151, 2175, 2197, 2202, 2211, 2205, 2203, 2203, 2203, 2204, 2203, 2204, 2205, 2206, 2208, 2208, 2206, 2204, 2205, 2210, 2210, 2212, 2208, 2205, 2204, 2198, 2187, 2186, 2185, 2187, 2187, 2187, 2181, 2180, 2171, 2168, 2169, 2166, 2164, 2143, 2139, 2136, 2133, 2132, 2128, 2127, 2126, 2122, 2119, 2117, 2116, 2114, 2111, 2107, 2106, 2098, 2093, 2091, 2090, 2088, 2092, 2092, 2092, 2092, 2093, 2091, 2091, 2092, 2090, 2090, 2086, 2085, 2087, 2084, 2085, 2084, 2085, 2085, 2082, 2082, 2078, 2075, 2072, 2071, 2066, 2067, 2069, 1998, 1998, 1998, 1999, 2000, 2002, 2001, 2006, 2006, 2007, 2234, 2282, 2318, 2330, 2334, 2334, 2311, 2320, 2314, 2321, 2343, 2350, 2354, 2363, 2365, 2363, 2373, 2384, 2383, 2385, 2392 } };
# 52 "/home/tinyos/local/src/tinyos-2x/tos/chips/atm128/timer/Atm128Timer.h"
enum __nesc_unnamed4301 {
  ATM128_CLK8_OFF = 0x0, 
  ATM128_CLK8_NORMAL = 0x1, 
  ATM128_CLK8_DIVIDE_8 = 0x2, 
  ATM128_CLK8_DIVIDE_32 = 0x3, 
  ATM128_CLK8_DIVIDE_64 = 0x4, 
  ATM128_CLK8_DIVIDE_128 = 0x5, 
  ATM128_CLK8_DIVIDE_256 = 0x6, 
  ATM128_CLK8_DIVIDE_1024 = 0x7
};

enum __nesc_unnamed4302 {
  ATM128_CLK16_OFF = 0x0, 
  ATM128_CLK16_NORMAL = 0x1, 
  ATM128_CLK16_DIVIDE_8 = 0x2, 
  ATM128_CLK16_DIVIDE_64 = 0x3, 
  ATM128_CLK16_DIVIDE_256 = 0x4, 
  ATM128_CLK16_DIVIDE_1024 = 0x5, 
  ATM128_CLK16_EXTERNAL_FALL = 0x6, 
  ATM128_CLK16_EXTERNAL_RISE = 0x7
};


enum __nesc_unnamed4303 {
  AVR_CLOCK_OFF = 0, 
  AVR_CLOCK_ON = 1, 
  AVR_CLOCK_DIVIDE_8 = 2
};


enum __nesc_unnamed4304 {
  ATM128_WAVE8_NORMAL = 0, 
  ATM128_WAVE8_PWM, 
  ATM128_WAVE8_CTC, 
  ATM128_WAVE8_PWM_FAST
};


enum __nesc_unnamed4305 {
  ATM128_COMPARE_OFF = 0, 
  ATM128_COMPARE_TOGGLE, 
  ATM128_COMPARE_CLEAR, 
  ATM128_COMPARE_SET
};
#line 108
#line 98
typedef union __nesc_unnamed4306 {

  uint8_t flat;
  struct __nesc_unnamed4307 {
    uint8_t cs : 3;
    uint8_t wgm1 : 1;
    uint8_t com : 2;
    uint8_t wgm0 : 1;
    uint8_t foc : 1;
  } bits;
} Atm128TimerControl_t;

typedef Atm128TimerControl_t Atm128_TCCR0_t;
typedef uint8_t Atm128_TCNT0_t;
typedef uint8_t Atm128_OCR0_t;

typedef Atm128TimerControl_t Atm128_TCCR2_t;
typedef uint8_t Atm128_TCNT2_t;
typedef uint8_t Atm128_OCR2_t;
#line 130
#line 120
typedef union __nesc_unnamed4308 {

  uint8_t flat;
  struct __nesc_unnamed4309 {
    uint8_t tcr0ub : 1;
    uint8_t ocr0ub : 1;
    uint8_t tcn0ub : 1;
    uint8_t as0 : 1;
    uint8_t rsvd : 4;
  } bits;
} Atm128Assr_t;
#line 146
#line 133
typedef union __nesc_unnamed4310 {

  uint8_t flat;
  struct __nesc_unnamed4311 {
    uint8_t toie0 : 1;
    uint8_t ocie0 : 1;
    uint8_t toie1 : 1;
    uint8_t ocie1b : 1;
    uint8_t ocie1a : 1;
    uint8_t ticie1 : 1;
    uint8_t toie2 : 1;
    uint8_t ocie2 : 1;
  } bits;
} Atm128_TIMSK_t;
#line 163
#line 150
typedef union __nesc_unnamed4312 {

  uint8_t flat;
  struct __nesc_unnamed4313 {
    uint8_t tov0 : 1;
    uint8_t ocf0 : 1;
    uint8_t tov1 : 1;
    uint8_t ocf1b : 1;
    uint8_t ocf1a : 1;
    uint8_t icf1 : 1;
    uint8_t tov2 : 1;
    uint8_t ocf2 : 1;
  } bits;
} Atm128_TIFR_t;
#line 178
#line 167
typedef union __nesc_unnamed4314 {

  uint8_t flat;
  struct __nesc_unnamed4315 {
    uint8_t psr321 : 1;
    uint8_t psr0 : 1;
    uint8_t pud : 1;
    uint8_t acme : 1;
    uint8_t rsvd : 3;
    uint8_t tsm : 1;
  } bits;
} Atm128_SFIOR_t;






enum __nesc_unnamed4316 {
  ATM128_TIMER_COMPARE_NORMAL = 0, 
  ATM128_TIMER_COMPARE_TOGGLE, 
  ATM128_TIMER_COMPARE_CLEAR, 
  ATM128_TIMER_COMPARE_SET
};
#line 202
#line 193
typedef union __nesc_unnamed4317 {

  uint8_t flat;
  struct __nesc_unnamed4318 {
    uint8_t wgm10 : 2;
    uint8_t comC : 2;
    uint8_t comB : 2;
    uint8_t comA : 2;
  } bits;
} Atm128TimerCtrlCompare_t;


typedef Atm128TimerCtrlCompare_t Atm128_TCCR1A_t;


typedef Atm128TimerCtrlCompare_t Atm128_TCCR3A_t;


enum __nesc_unnamed4319 {
  ATM128_WAVE16_NORMAL = 0, 
  ATM128_WAVE16_PWM_8BIT, 
  ATM128_WAVE16_PWM_9BIT, 
  ATM128_WAVE16_PWM_10BIT, 
  ATM128_WAVE16_CTC_COMPARE, 
  ATM128_WAVE16_PWM_FAST_8BIT, 
  ATM128_WAVE16_PWM_FAST_9BIT, 
  ATM128_WAVE16_PWM_FAST_10BIT, 
  ATM128_WAVE16_PWM_CAPTURE_LOW, 
  ATM128_WAVE16_PWM_COMPARE_LOW, 
  ATM128_WAVE16_PWM_CAPTURE_HIGH, 
  ATM128_WAVE16_PWM_COMPARE_HIGH, 
  ATM128_WAVE16_CTC_CAPTURE, 
  ATM128_WAVE16_RESERVED, 
  ATM128_WAVE16_PWM_FAST_CAPTURE, 
  ATM128_WAVE16_PWM_FAST_COMPARE
};
#line 241
#line 231
typedef union __nesc_unnamed4320 {

  uint8_t flat;
  struct __nesc_unnamed4321 {
    uint8_t cs : 3;
    uint8_t wgm32 : 2;
    uint8_t rsvd : 1;
    uint8_t ices1 : 1;
    uint8_t icnc1 : 1;
  } bits;
} Atm128TimerCtrlCapture_t;


typedef Atm128TimerCtrlCapture_t Atm128_TCCR1B_t;


typedef Atm128TimerCtrlCapture_t Atm128_TCCR3B_t;
#line 259
#line 250
typedef union __nesc_unnamed4322 {

  uint8_t flat;
  struct __nesc_unnamed4323 {
    uint8_t rsvd : 5;
    uint8_t focC : 1;
    uint8_t focB : 1;
    uint8_t focA : 1;
  } bits;
} Atm128TimerCtrlClock_t;


typedef Atm128TimerCtrlClock_t Atm128_TCCR1C_t;


typedef Atm128TimerCtrlClock_t Atm128_TCCR3C_t;



typedef uint8_t Atm128_TCNT1H_t;
typedef uint8_t Atm128_TCNT1L_t;
typedef uint8_t Atm128_TCNT3H_t;
typedef uint8_t Atm128_TCNT3L_t;


typedef uint8_t Atm128_OCR1AH_t;
typedef uint8_t Atm128_OCR1AL_t;
typedef uint8_t Atm128_OCR1BH_t;
typedef uint8_t Atm128_OCR1BL_t;
typedef uint8_t Atm128_OCR1CH_t;
typedef uint8_t Atm128_OCR1CL_t;


typedef uint8_t Atm128_OCR3AH_t;
typedef uint8_t Atm128_OCR3AL_t;
typedef uint8_t Atm128_OCR3BH_t;
typedef uint8_t Atm128_OCR3BL_t;
typedef uint8_t Atm128_OCR3CH_t;
typedef uint8_t Atm128_OCR3CL_t;


typedef uint8_t Atm128_ICR1H_t;
typedef uint8_t Atm128_ICR1L_t;
typedef uint8_t Atm128_ICR3H_t;
typedef uint8_t Atm128_ICR3L_t;
#line 309
#line 297
typedef union __nesc_unnamed4324 {

  uint8_t flat;
  struct __nesc_unnamed4325 {
    uint8_t ocie1c : 1;
    uint8_t ocie3c : 1;
    uint8_t toie3 : 1;
    uint8_t ocie3b : 1;
    uint8_t ocie3a : 1;
    uint8_t ticie3 : 1;
    uint8_t rsvd : 2;
  } bits;
} Atm128_ETIMSK_t;
#line 324
#line 312
typedef union __nesc_unnamed4326 {

  uint8_t flat;
  struct __nesc_unnamed4327 {
    uint8_t ocf1c : 1;
    uint8_t ocf3c : 1;
    uint8_t tov3 : 1;
    uint8_t ocf3b : 1;
    uint8_t ocf3a : 1;
    uint8_t icf3 : 1;
    uint8_t rsvd : 2;
  } bits;
} Atm128_ETIFR_t;
typedef uint16_t CpmModelC__ReadRssi__val_t;
typedef TMilli MyMainC__Timer0__precision_tag;
typedef TMilli MyMainC__PendingShutdownTimer__precision_tag;
typedef TMilli MyMainC__Timer1__precision_tag;
typedef TMilli /*AlarmCounterMilliP.Atm128AlarmAsyncC*/Atm128AlarmAsyncC__0__precision;
typedef /*AlarmCounterMilliP.Atm128AlarmAsyncC*/Atm128AlarmAsyncC__0__precision /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__precision;
typedef /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__precision /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Alarm__precision_tag;
typedef uint32_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Alarm__size_type;
typedef /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__precision /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Counter__precision_tag;
typedef uint32_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Counter__size_type;
typedef uint8_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Compare__size_type;
typedef uint8_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Timer__timer_size;
typedef uint8_t HplAtm128Timer0AsyncP__Timer0__timer_size;
typedef uint8_t HplAtm128Timer0AsyncP__Compare__size_type;
typedef TMilli /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__precision_tag;
typedef /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__precision_tag /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__precision_tag;
typedef uint32_t /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__size_type;
typedef /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__precision_tag /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Timer__precision_tag;
typedef TMilli /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__precision_tag;
typedef /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__precision_tag /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__precision_tag;
typedef /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__precision_tag /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__precision_tag;
typedef TMilli /*HilTimerMilliC.CounterToLocalTimeC*/CounterToLocalTimeC__0__precision_tag;
typedef /*HilTimerMilliC.CounterToLocalTimeC*/CounterToLocalTimeC__0__precision_tag /*HilTimerMilliC.CounterToLocalTimeC*/CounterToLocalTimeC__0__LocalTime__precision_tag;
typedef /*HilTimerMilliC.CounterToLocalTimeC*/CounterToLocalTimeC__0__precision_tag /*HilTimerMilliC.CounterToLocalTimeC*/CounterToLocalTimeC__0__Counter__precision_tag;
typedef uint32_t /*HilTimerMilliC.CounterToLocalTimeC*/CounterToLocalTimeC__0__Counter__size_type;
enum AMQueueP____nesc_unnamed4328 {
  AMQueueP__NUM_CLIENTS = 1U
};
# 62 "/home/tinyos/local/src/tinyos-2x/tos/interfaces/Init.nc"
static error_t PlatformC__Init__init(void );
# 67 "/home/tinyos/local/src/tinyos-2x/tos/interfaces/TaskBasic.nc"
static error_t SimSchedulerBasicP__TaskBasic__postTask(
# 49 "/home/tinyos/local/src/tinyos-2x/tos/lib/tossim/SimSchedulerBasicP.nc"
uint8_t arg_0x7f65b669a108);
# 75 "/home/tinyos/local/src/tinyos-2x/tos/interfaces/TaskBasic.nc"
static void SimSchedulerBasicP__TaskBasic__default__runTask(
# 49 "/home/tinyos/local/src/tinyos-2x/tos/lib/tossim/SimSchedulerBasicP.nc"
uint8_t arg_0x7f65b669a108);
# 57 "/home/tinyos/local/src/tinyos-2x/tos/interfaces/Scheduler.nc"
static void SimSchedulerBasicP__Scheduler__init(void );







static bool SimSchedulerBasicP__Scheduler__runNextTask(void );
# 44 "/home/tinyos/local/src/tinyos-2x/tos/lib/tossim/SimMote.nc"
static void SimMoteP__SimMote__setEuid(long long int euid);


static int SimMoteP__SimMote__getVariableInfo(char *name, void **ptr, size_t *len);

static void SimMoteP__SimMote__turnOff(void );
#line 48
static void SimMoteP__SimMote__turnOn(void );
#line 43
static long long int SimMoteP__SimMote__getEuid(void );







static error_t SimMoteP__SimMote__setRadioChannel(uint8_t newRadioChannel);
#line 46
static bool SimMoteP__SimMote__isOn(void );





static uint8_t SimMoteP__SimMote__getRadioChannel(void );
#line 45
static long long int SimMoteP__SimMote__getStartTime(void );
# 80 "/home/tinyos/local/src/tinyos-2x/tos/interfaces/AMSend.nc"
static error_t TossimActiveMessageC__AMSend__send(
# 47 "/home/tinyos/local/src/tinyos-2x/tos/lib/tossim/TossimActiveMessageC.nc"
am_id_t arg_0x7f65b64d1408, 
# 80 "/home/tinyos/local/src/tinyos-2x/tos/interfaces/AMSend.nc"
am_addr_t addr, 
#line 71
message_t * msg, 








uint8_t len);
# 78 "/home/tinyos/local/src/tinyos-2x/tos/interfaces/Receive.nc"
static 
#line 74
message_t * 



TossimActiveMessageC__Snoop__default__receive(
# 49 "/home/tinyos/local/src/tinyos-2x/tos/lib/tossim/TossimActiveMessageC.nc"
am_id_t arg_0x7f65b64cf1a0, 
# 71 "/home/tinyos/local/src/tinyos-2x/tos/interfaces/Receive.nc"
message_t * msg, 
void * payload, 





uint8_t len);
# 78 "/home/tinyos/local/src/tinyos-2x/tos/interfaces/Packet.nc"
static uint8_t TossimActiveMessageC__Packet__payloadLength(
#line 74
message_t * msg);
#line 126
static 
#line 123
void * 


TossimActiveMessageC__Packet__getPayload(
#line 121
message_t * msg, 




uint8_t len);
#line 106
static uint8_t TossimActiveMessageC__Packet__maxPayloadLength(void );
#line 94
static void TossimActiveMessageC__Packet__setPayloadLength(
#line 90
message_t * msg, 



uint8_t len);
# 78 "/home/tinyos/local/src/tinyos-2x/tos/interfaces/Receive.nc"
static 
#line 74
message_t * 



TossimActiveMessageC__Receive__default__receive(
# 48 "/home/tinyos/local/src/tinyos-2x/tos/lib/tossim/TossimActiveMessageC.nc"
am_id_t arg_0x7f65b64d05f8, 
# 71 "/home/tinyos/local/src/tinyos-2x/tos/interfaces/Receive.nc"
message_t * msg, 
void * payload, 





uint8_t len);
# 85 "/home/tinyos/local/src/tinyos-2x/tos/lib/tossim/TossimPacketModel.nc"
static void TossimActiveMessageC__Model__receive(message_t *msg);
#line 76
static void TossimActiveMessageC__Model__sendDone(message_t *msg, error_t error);










static bool TossimActiveMessageC__Model__shouldAck(message_t *msg);
# 68 "/home/tinyos/local/src/tinyos-2x/tos/interfaces/AMPacket.nc"
static am_addr_t TossimActiveMessageC__AMPacket__address(void );









static am_addr_t TossimActiveMessageC__AMPacket__destination(
#line 74
message_t * amsg);
#line 103
static void TossimActiveMessageC__AMPacket__setDestination(
#line 99
message_t * amsg, 



am_addr_t addr);
#line 147
static am_id_t TossimActiveMessageC__AMPacket__type(
#line 143
message_t * amsg);
#line 162
static void TossimActiveMessageC__AMPacket__setType(
#line 158
message_t * amsg, 



am_id_t t);
#line 136
static bool TossimActiveMessageC__AMPacket__isForMe(
#line 133
message_t * amsg);
# 75 "/home/tinyos/local/src/tinyos-2x/tos/interfaces/TaskBasic.nc"
static void TossimPacketModelC__stopDoneTask__runTask(void );
# 57 "/home/tinyos/local/src/tinyos-2x/tos/lib/tossim/TossimPacketModel.nc"
static error_t TossimPacketModelC__Packet__send(int node, message_t *msg, uint8_t len);
# 75 "/home/tinyos/local/src/tinyos-2x/tos/interfaces/TaskBasic.nc"
static void TossimPacketModelC__sendDoneTask__runTask(void );
# 62 "/home/tinyos/local/src/tinyos-2x/tos/interfaces/Init.nc"
static error_t TossimPacketModelC__Init__init(void );
# 75 "/home/tinyos/local/src/tinyos-2x/tos/interfaces/TaskBasic.nc"
static void TossimPacketModelC__startDoneTask__runTask(void );
# 104 "/home/tinyos/local/src/tinyos-2x/tos/interfaces/SplitControl.nc"
static error_t TossimPacketModelC__Control__start(void );
#line 130
static error_t TossimPacketModelC__Control__stop(void );
# 59 "/home/tinyos/local/src/tinyos-2x/tos/interfaces/PacketAcknowledgements.nc"
static error_t TossimPacketModelC__PacketAcknowledgements__requestAck(
#line 53
message_t * msg);
#line 85
static bool TossimPacketModelC__PacketAcknowledgements__wasAcked(
#line 80
message_t * msg);
# 60 "/home/tinyos/local/src/tinyos-2x/tos/lib/tossim/GainRadioModel.nc"
static void TossimPacketModelC__GainRadioModel__receive(message_t *msg);
#line 59
static void TossimPacketModelC__GainRadioModel__acked(message_t *msg);

static bool TossimPacketModelC__GainRadioModel__shouldAck(message_t *msg);
# 75 "/home/tinyos/local/src/tinyos-2x/tos/interfaces/TaskBasic.nc"
static void CpmModelC__read_rssi_task__runTask(void );
# 63 "/home/tinyos/local/src/tinyos-2x/tos/interfaces/Read.nc"
static void CpmModelC__ReadRssi__default__readDone(error_t result, CpmModelC__ReadRssi__val_t val);
# 48 "/home/tinyos/local/src/tinyos-2x/tos/lib/tossim/GainRadioModel.nc"
static void CpmModelC__Model__putOnAirTo(int dest, 
message_t *msg, 
bool ack, 
sim_time_t endTime, 
double gain, 
double reverseGain);


static bool CpmModelC__Model__clearChannel(void );
static void CpmModelC__Model__setPendingTransmission(void );
# 60 "/home/tinyos/local/src/tinyos-2x/tos/lib/tossim/ActiveMessageAddressC.nc"
static am_addr_t ActiveMessageAddressC__amAddress(void );
# 50 "/home/tinyos/local/src/tinyos-2x/tos/interfaces/ActiveMessageAddress.nc"
static am_addr_t ActiveMessageAddressC__ActiveMessageAddress__amAddress(void );
# 83 "/home/tinyos/local/src/tinyos-2x/tos/lib/timer/Timer.nc"
static void MyMainC__Timer0__fired(void );
# 113 "/home/tinyos/local/src/tinyos-2x/tos/interfaces/SplitControl.nc"
static void MyMainC__AMControl__startDone(error_t error);
#line 138
static void MyMainC__AMControl__stopDone(error_t error);
# 60 "/home/tinyos/local/src/tinyos-2x/tos/interfaces/Boot.nc"
static void MyMainC__Boot__booted(void );
# 110 "/home/tinyos/local/src/tinyos-2x/tos/interfaces/AMSend.nc"
static void MyMainC__AMSend__sendDone(
#line 103
message_t * msg, 






error_t error);
# 83 "/home/tinyos/local/src/tinyos-2x/tos/lib/timer/Timer.nc"
static void MyMainC__PendingShutdownTimer__fired(void );
#line 83
static void MyMainC__Timer1__fired(void );
# 78 "/home/tinyos/local/src/tinyos-2x/tos/interfaces/Receive.nc"
static 
#line 74
message_t * 



MyMainC__Receive__receive(
#line 71
message_t * msg, 
void * payload, 





uint8_t len);
# 109 "/home/tinyos/local/src/tinyos-2x/tos/lib/timer/Alarm.nc"
static /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Alarm__size_type /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Alarm__getNow(void );
#line 103
static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Alarm__startAt(/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Alarm__size_type t0, /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Alarm__size_type dt);
#line 116
static /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Alarm__size_type /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Alarm__getAlarm(void );
#line 73
static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Alarm__stop(void );
# 62 "/home/tinyos/local/src/tinyos-2x/tos/interfaces/Init.nc"
static error_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Init__init(void );
# 64 "/home/tinyos/local/src/tinyos-2x/tos/lib/timer/Counter.nc"
static /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Counter__size_type /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Counter__get(void );
# 58 "/home/tinyos/local/src/tinyos-2x/tos/chips/atm128/timer/HplAtm128Compare.nc"
static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Compare__fired(void );
# 70 "/home/tinyos/local/src/tinyos-2x/tos/chips/atm128/timer/HplAtm128Timer.nc"
static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Timer__overflow(void );
#line 61
static HplAtm128Timer0AsyncP__Timer0__timer_size HplAtm128Timer0AsyncP__Timer0__get(void );
#line 110
static uint8_t HplAtm128Timer0AsyncP__Timer0__getScale(void );
#line 67
static void HplAtm128Timer0AsyncP__Timer0__set(HplAtm128Timer0AsyncP__Timer0__timer_size t);
# 44 "/home/tinyos/local/src/tinyos-2x/tos/chips/atm128/timer/HplAtm128TimerAsync.nc"
static int HplAtm128Timer0AsyncP__TimerAsync__compareBusy(void );
#line 32
static void HplAtm128Timer0AsyncP__TimerAsync__setTimer0Asynchronous(void );
# 53 "/home/tinyos/local/src/tinyos-2x/tos/chips/atm128/timer/HplAtm128TimerCtrl8.nc"
static Atm128_TIFR_t HplAtm128Timer0AsyncP__Timer0Ctrl__getInterruptFlag(void );
#line 46
static void HplAtm128Timer0AsyncP__Timer0Ctrl__setControl(Atm128TimerControl_t control);
# 48 "/home/tinyos/local/src/tinyos-2x/tos/chips/atm128/timer/HplAtm128Compare.nc"
static HplAtm128Timer0AsyncP__Compare__size_type HplAtm128Timer0AsyncP__Compare__get(void );





static void HplAtm128Timer0AsyncP__Compare__set(HplAtm128Timer0AsyncP__Compare__size_type t);










static void HplAtm128Timer0AsyncP__Compare__start(void );
# 75 "/home/tinyos/local/src/tinyos-2x/tos/interfaces/TaskBasic.nc"
static void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__fired__runTask(void );
# 78 "/home/tinyos/local/src/tinyos-2x/tos/lib/timer/Alarm.nc"
static void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__fired(void );
# 136 "/home/tinyos/local/src/tinyos-2x/tos/lib/timer/Timer.nc"
static uint32_t /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Timer__getNow(void );
#line 129
static void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Timer__startOneShotAt(uint32_t t0, uint32_t dt);
#line 78
static void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Timer__stop(void );
# 75 "/home/tinyos/local/src/tinyos-2x/tos/interfaces/TaskBasic.nc"
static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__updateFromTimer__runTask(void );
# 83 "/home/tinyos/local/src/tinyos-2x/tos/lib/timer/Timer.nc"
static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__fired(void );
#line 83
static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__default__fired(
# 48 "/home/tinyos/local/src/tinyos-2x/tos/lib/timer/VirtualizeTimerC.nc"
uint8_t arg_0x7f65b5420da0);
# 64 "/home/tinyos/local/src/tinyos-2x/tos/lib/timer/Timer.nc"
static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__startPeriodic(
# 48 "/home/tinyos/local/src/tinyos-2x/tos/lib/timer/VirtualizeTimerC.nc"
uint8_t arg_0x7f65b5420da0, 
# 64 "/home/tinyos/local/src/tinyos-2x/tos/lib/timer/Timer.nc"
uint32_t dt);








static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__startOneShot(
# 48 "/home/tinyos/local/src/tinyos-2x/tos/lib/timer/VirtualizeTimerC.nc"
uint8_t arg_0x7f65b5420da0, 
# 73 "/home/tinyos/local/src/tinyos-2x/tos/lib/timer/Timer.nc"
uint32_t dt);




static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__stop(
# 48 "/home/tinyos/local/src/tinyos-2x/tos/lib/timer/VirtualizeTimerC.nc"
uint8_t arg_0x7f65b5420da0);
# 82 "/home/tinyos/local/src/tinyos-2x/tos/lib/timer/Counter.nc"
static void /*HilTimerMilliC.CounterToLocalTimeC*/CounterToLocalTimeC__0__Counter__overflow(void );
# 80 "/home/tinyos/local/src/tinyos-2x/tos/interfaces/AMSend.nc"
static error_t /*MyMainAppC.AMSenderC.SenderC.AMQueueEntryP*/AMQueueEntryP__0__AMSend__send(am_addr_t addr, 
#line 71
message_t * msg, 








uint8_t len);
# 100 "/home/tinyos/local/src/tinyos-2x/tos/interfaces/Send.nc"
static void /*MyMainAppC.AMSenderC.SenderC.AMQueueEntryP*/AMQueueEntryP__0__Send__sendDone(
#line 96
message_t * msg, 



error_t error);
# 110 "/home/tinyos/local/src/tinyos-2x/tos/interfaces/AMSend.nc"
static void /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__AMSend__sendDone(
# 48 "/home/tinyos/local/src/tinyos-2x/tos/system/AMQueueImplP.nc"
am_id_t arg_0x7f65b537b488, 
# 103 "/home/tinyos/local/src/tinyos-2x/tos/interfaces/AMSend.nc"
message_t * msg, 






error_t error);
# 75 "/home/tinyos/local/src/tinyos-2x/tos/interfaces/Send.nc"
static error_t /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__Send__send(
# 46 "/home/tinyos/local/src/tinyos-2x/tos/system/AMQueueImplP.nc"
uint8_t arg_0x7f65b537c318, 
# 67 "/home/tinyos/local/src/tinyos-2x/tos/interfaces/Send.nc"
message_t * msg, 







uint8_t len);
#line 100
static void /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__Send__default__sendDone(
# 46 "/home/tinyos/local/src/tinyos-2x/tos/system/AMQueueImplP.nc"
uint8_t arg_0x7f65b537c318, 
# 96 "/home/tinyos/local/src/tinyos-2x/tos/interfaces/Send.nc"
message_t * msg, 



error_t error);
# 75 "/home/tinyos/local/src/tinyos-2x/tos/interfaces/TaskBasic.nc"
static void /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__errorTask__runTask(void );
#line 75
static void /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__CancelTask__runTask(void );
# 45 "/home/tinyos/local/src/tinyos-2x/tos/lib/tossim/PlatformC.nc"
static inline error_t PlatformC__Init__init(void );
# 62 "/home/tinyos/local/src/tinyos-2x/tos/interfaces/Init.nc"
static error_t SimMainP__SoftwareInit__init(void );
# 60 "/home/tinyos/local/src/tinyos-2x/tos/interfaces/Boot.nc"
static void SimMainP__Boot__booted(void );
# 62 "/home/tinyos/local/src/tinyos-2x/tos/interfaces/Init.nc"
static error_t SimMainP__PlatformInit__init(void );
# 57 "/home/tinyos/local/src/tinyos-2x/tos/interfaces/Scheduler.nc"
static void SimMainP__Scheduler__init(void );







static bool SimMainP__Scheduler__runNextTask(void );
# 51 "/home/tinyos/local/src/tinyos-2x/tos/lib/tossim/SimMainP.nc"
int sim_main_start_mote(void )   ;
# 75 "/home/tinyos/local/src/tinyos-2x/tos/interfaces/TaskBasic.nc"
static void SimSchedulerBasicP__TaskBasic__runTask(
# 49 "/home/tinyos/local/src/tinyos-2x/tos/lib/tossim/SimSchedulerBasicP.nc"
uint8_t arg_0x7f65b669a108);



enum SimSchedulerBasicP____nesc_unnamed4329 {

  SimSchedulerBasicP__NUM_TASKS = 8U, 
  SimSchedulerBasicP__NO_TASK = 255
};

uint8_t SimSchedulerBasicP__m_head[1000];
uint8_t SimSchedulerBasicP__m_tail[1000];
uint8_t SimSchedulerBasicP__m_next[1000][SimSchedulerBasicP__NUM_TASKS];




bool SimSchedulerBasicP__sim_scheduler_event_pending[1000];
sim_event_t SimSchedulerBasicP__sim_scheduler_event[1000];

static inline int SimSchedulerBasicP__sim_config_task_latency(void );







static void SimSchedulerBasicP__sim_scheduler_submit_event(void );







static inline void SimSchedulerBasicP__sim_scheduler_event_handle(sim_event_t *e);
#line 103
static inline void SimSchedulerBasicP__sim_scheduler_event_init(sim_event_t *e);
#line 120
static inline uint8_t SimSchedulerBasicP__popTask(void );
#line 139
static inline bool SimSchedulerBasicP__isWaiting(uint8_t id);




static inline bool SimSchedulerBasicP__pushTask(uint8_t id);
#line 166
static inline void SimSchedulerBasicP__Scheduler__init(void );
#line 180
static bool SimSchedulerBasicP__Scheduler__runNextTask(void );
#line 205
static error_t SimSchedulerBasicP__TaskBasic__postTask(uint8_t id);
#line 221
static inline void SimSchedulerBasicP__TaskBasic__default__runTask(uint8_t id);
# 51 "/home/tinyos/local/src/tinyos-2x/tos/lib/tossim/SimMoteP.nc"
long long int SimMoteP__euid[1000];
long long int SimMoteP__startTime[1000];
bool SimMoteP__isOn[1000];
sim_event_t *SimMoteP__bootEvent[1000];

uint8_t SimMoteP__radioChannel[1000];




static inline error_t SimMoteP__SimMote__setRadioChannel(uint8_t newRadioChannel);
#line 74
static inline uint8_t SimMoteP__SimMote__getRadioChannel(void );
#line 86
error_t sim_mote_set_radio_channel(int mote, uint8_t newRadioChannel)   ;
#line 98
uint8_t sim_mote_get_radio_channel(int mote)   ;








static inline long long int SimMoteP__SimMote__getEuid(void );


static inline void SimMoteP__SimMote__setEuid(long long int e);


static inline long long int SimMoteP__SimMote__getStartTime(void );


static inline bool SimMoteP__SimMote__isOn(void );



static inline int SimMoteP__SimMote__getVariableInfo(char *name, void **addr, size_t *size);



static void SimMoteP__SimMote__turnOn(void );
#line 137
static inline void SimMoteP__SimMote__turnOff(void );




long long int sim_mote_euid(int mote)   ;








void sim_mote_set_euid(int mote, long long int id)   ;






long long int sim_mote_start_time(int mote)   ;








int sim_mote_get_variable_info(int mote, char *name, void **ptr, size_t *len)   ;









void sim_mote_set_start_time(int mote, long long int t)   ;








bool sim_mote_is_on(int mote)   ;








void sim_mote_turn_on(int mote)   ;






void sim_mote_turn_off(int mote)   ;






static inline void SimMoteP__sim_mote_boot_handle(sim_event_t *e);








void sim_mote_enqueue_boot_event(int mote)   ;
# 57 "/home/tinyos/local/src/tinyos-2x/tos/lib/tossim/TossimActiveMessageC.nc"
static am_addr_t TossimActiveMessageC__amAddress(void );
# 110 "/home/tinyos/local/src/tinyos-2x/tos/interfaces/AMSend.nc"
static void TossimActiveMessageC__AMSend__sendDone(
# 47 "/home/tinyos/local/src/tinyos-2x/tos/lib/tossim/TossimActiveMessageC.nc"
am_id_t arg_0x7f65b64d1408, 
# 103 "/home/tinyos/local/src/tinyos-2x/tos/interfaces/AMSend.nc"
message_t * msg, 






error_t error);
# 78 "/home/tinyos/local/src/tinyos-2x/tos/interfaces/Receive.nc"
static 
#line 74
message_t * 



TossimActiveMessageC__Snoop__receive(
# 49 "/home/tinyos/local/src/tinyos-2x/tos/lib/tossim/TossimActiveMessageC.nc"
am_id_t arg_0x7f65b64cf1a0, 
# 71 "/home/tinyos/local/src/tinyos-2x/tos/interfaces/Receive.nc"
message_t * msg, 
void * payload, 





uint8_t len);
#line 78
static 
#line 74
message_t * 



TossimActiveMessageC__Receive__receive(
# 48 "/home/tinyos/local/src/tinyos-2x/tos/lib/tossim/TossimActiveMessageC.nc"
am_id_t arg_0x7f65b64d05f8, 
# 71 "/home/tinyos/local/src/tinyos-2x/tos/interfaces/Receive.nc"
message_t * msg, 
void * payload, 





uint8_t len);
# 57 "/home/tinyos/local/src/tinyos-2x/tos/lib/tossim/TossimPacketModel.nc"
static error_t TossimActiveMessageC__Model__send(int node, message_t *msg, uint8_t len);
# 62 "/home/tinyos/local/src/tinyos-2x/tos/lib/tossim/TossimActiveMessageC.nc"
message_t TossimActiveMessageC__buffer[1000];
message_t *TossimActiveMessageC__bufferPointer[1000];

static inline tossim_header_t *TossimActiveMessageC__getHeader(message_t *amsg);







static error_t TossimActiveMessageC__AMSend__send(am_id_t id, am_addr_t addr, 
message_t *amsg, 
uint8_t len);
#line 103
static inline void TossimActiveMessageC__Model__sendDone(message_t *msg, error_t result);





static void TossimActiveMessageC__Model__receive(message_t *msg);
#line 127
static inline bool TossimActiveMessageC__Model__shouldAck(message_t *msg);








static inline am_addr_t TossimActiveMessageC__AMPacket__address(void );



static am_addr_t TossimActiveMessageC__AMPacket__destination(message_t *amsg);




static inline void TossimActiveMessageC__AMPacket__setDestination(message_t *amsg, am_addr_t addr);
#line 160
static inline bool TossimActiveMessageC__AMPacket__isForMe(message_t *amsg);




static am_id_t TossimActiveMessageC__AMPacket__type(message_t *amsg);




static inline void TossimActiveMessageC__AMPacket__setType(message_t *amsg, am_id_t t);






static inline uint8_t TossimActiveMessageC__Packet__payloadLength(message_t *msg);



static inline void TossimActiveMessageC__Packet__setPayloadLength(message_t *msg, uint8_t len);



static inline uint8_t TossimActiveMessageC__Packet__maxPayloadLength(void );



static inline void *TossimActiveMessageC__Packet__getPayload(message_t *msg, uint8_t len);
#line 212
static inline message_t *TossimActiveMessageC__Receive__default__receive(am_id_t id, message_t *msg, void *payload, uint8_t len);



static inline message_t *TossimActiveMessageC__Snoop__default__receive(am_id_t id, message_t *msg, void *payload, uint8_t len);
#line 236
static inline void TossimActiveMessageC__active_message_deliver_handle(sim_event_t *evt);





static inline sim_event_t *TossimActiveMessageC__allocate_deliver_event(int node, message_t *msg, sim_time_t t);
#line 254
void active_message_deliver(int node, message_t *msg, sim_time_t t)   ;
# 67 "/home/tinyos/local/src/tinyos-2x/tos/interfaces/TaskBasic.nc"
static error_t TossimPacketModelC__stopDoneTask__postTask(void );
# 85 "/home/tinyos/local/src/tinyos-2x/tos/lib/tossim/TossimPacketModel.nc"
static void TossimPacketModelC__Packet__receive(message_t *msg);
#line 76
static void TossimPacketModelC__Packet__sendDone(message_t *msg, error_t error);










static bool TossimPacketModelC__Packet__shouldAck(message_t *msg);
# 67 "/home/tinyos/local/src/tinyos-2x/tos/interfaces/TaskBasic.nc"
static error_t TossimPacketModelC__startDoneTask__postTask(void );
# 113 "/home/tinyos/local/src/tinyos-2x/tos/interfaces/SplitControl.nc"
static void TossimPacketModelC__Control__startDone(error_t error);
#line 138
static void TossimPacketModelC__Control__stopDone(error_t error);
# 48 "/home/tinyos/local/src/tinyos-2x/tos/lib/tossim/GainRadioModel.nc"
static void TossimPacketModelC__GainRadioModel__putOnAirTo(int dest, 
message_t *msg, 
bool ack, 
sim_time_t endTime, 
double gain, 
double reverseGain);


static bool TossimPacketModelC__GainRadioModel__clearChannel(void );
static void TossimPacketModelC__GainRadioModel__setPendingTransmission(void );
# 96 "/home/tinyos/local/src/tinyos-2x/tos/lib/tossim/TossimPacketModelC.nc"
enum TossimPacketModelC____nesc_unnamed4330 {
#line 96
  TossimPacketModelC__startDoneTask = 0U
};
#line 96
typedef int TossimPacketModelC____nesc_sillytask_startDoneTask[TossimPacketModelC__startDoneTask];




enum TossimPacketModelC____nesc_unnamed4331 {
#line 101
  TossimPacketModelC__stopDoneTask = 1U
};
#line 101
typedef int TossimPacketModelC____nesc_sillytask_stopDoneTask[TossimPacketModelC__stopDoneTask];
#line 145
enum TossimPacketModelC____nesc_unnamed4332 {
#line 145
  TossimPacketModelC__sendDoneTask = 2U
};
#line 145
typedef int TossimPacketModelC____nesc_sillytask_sendDoneTask[TossimPacketModelC__sendDoneTask];
#line 70
bool TossimPacketModelC__initialized[1000];
bool TossimPacketModelC__running[1000];
uint8_t TossimPacketModelC__backoffCount[1000];
uint8_t TossimPacketModelC__neededFreeSamples[1000];
message_t *TossimPacketModelC__sending[1000];
bool TossimPacketModelC__transmitting[1000];
uint8_t TossimPacketModelC__sendingLength[1000];
int TossimPacketModelC__destNode[1000];
sim_event_t TossimPacketModelC__sendEvent[1000];



static inline tossim_metadata_t *TossimPacketModelC__getMetadata(message_t *msg);



static inline error_t TossimPacketModelC__Init__init(void );









static inline void TossimPacketModelC__startDoneTask__runTask(void );




static inline void TossimPacketModelC__stopDoneTask__runTask(void );




static error_t TossimPacketModelC__Control__start(void );








static inline error_t TossimPacketModelC__Control__stop(void );
#line 128
static error_t TossimPacketModelC__PacketAcknowledgements__requestAck(message_t *msg);
#line 140
static inline error_t TossimPacketModelC__PacketAcknowledgements__wasAcked(message_t *ack);




static inline void TossimPacketModelC__sendDoneTask__runTask(void );
#line 159
static inline void TossimPacketModelC__start_csma(void );

static inline error_t TossimPacketModelC__Packet__send(int dest, message_t *msg, uint8_t len);
#line 183
static inline void TossimPacketModelC__send_backoff(sim_event_t *evt);
static inline void TossimPacketModelC__send_transmit(sim_event_t *evt);
static inline void TossimPacketModelC__send_transmit_done(sim_event_t *evt);

static inline void TossimPacketModelC__start_csma(void );
#line 211
static inline void TossimPacketModelC__send_backoff(sim_event_t *evt);
#line 253
static inline void TossimPacketModelC__send_transmit(sim_event_t *evt);
#line 280
static inline void TossimPacketModelC__send_transmit_done(sim_event_t *evt);







static inline void TossimPacketModelC__GainRadioModel__receive(message_t *msg);





uint8_t TossimPacketModelC__error[1000];

static inline void TossimPacketModelC__GainRadioModel__acked(message_t *msg);










static bool TossimPacketModelC__GainRadioModel__shouldAck(message_t *msg);
# 63 "/home/tinyos/local/src/tinyos-2x/tos/interfaces/Read.nc"
static void CpmModelC__ReadRssi__readDone(error_t result, CpmModelC__ReadRssi__val_t val);
# 60 "/home/tinyos/local/src/tinyos-2x/tos/lib/tossim/GainRadioModel.nc"
static void CpmModelC__Model__receive(message_t *msg);
#line 59
static void CpmModelC__Model__acked(message_t *msg);

static bool CpmModelC__Model__shouldAck(message_t *msg);
# 528 "/home/tinyos/local/src/tinyos-2x/tos/lib/tossim/CpmModelC.nc"
enum CpmModelC____nesc_unnamed4333 {
#line 528
  CpmModelC__read_rssi_task = 3U
};
#line 528
typedef int CpmModelC____nesc_sillytask_read_rssi_task[CpmModelC__read_rssi_task];
#line 60
message_t *CpmModelC__outgoing[1000];
bool CpmModelC__requestAck[1000];
bool CpmModelC__receiving[1000];
bool CpmModelC__rssi[1000];
bool CpmModelC__transmitting[1000];
sim_time_t CpmModelC__transmissionEndTime[1000];
struct CpmModelC__receive_message;
typedef struct CpmModelC__receive_message CpmModelC__receive_message_t;

struct CpmModelC__receive_message {
  int source;
  sim_time_t start;
  sim_time_t end;
  double power;
  double reversePower;
  int8_t strength;
  bool lost;
  bool ack;
  message_t *msg;
  CpmModelC__receive_message_t *next;
  uint8_t channel;
  uint8_t lqi;
};

CpmModelC__receive_message_t *CpmModelC__outstandingReceptionHead[1000];

static inline CpmModelC__receive_message_t *CpmModelC__allocate_receive_message(void );
static inline void CpmModelC__free_receive_message(CpmModelC__receive_message_t *msg);
static inline sim_event_t *CpmModelC__allocate_receive_event(sim_time_t t, CpmModelC__receive_message_t *m);

static bool CpmModelC__shouldReceive(double SNR);
static inline bool CpmModelC__checkReceive(CpmModelC__receive_message_t *msg);
static double CpmModelC__packetNoise(CpmModelC__receive_message_t *msg);


static inline double CpmModelC__timeInMs(void );
#line 131
static double CpmModelC__noise_hash_generation(void );
#line 156
static inline double CpmModelC__arr_estimate_from_snr(double SNR);
#line 171
static inline int CpmModelC__shouldAckReceive(double snr);
#line 183
static inline void CpmModelC__sim_gain_ack_handle(sim_event_t *evt);
#line 205
double CpmModelC__clearThreshold[1000];










static inline bool CpmModelC__Model__clearChannel(void );




static void CpmModelC__sim_gain_schedule_ack(int source, sim_time_t t, CpmModelC__receive_message_t *r);
#line 235
static inline double CpmModelC__prr_estimate_from_snr(double SNR);
#line 253
static bool CpmModelC__shouldReceive(double SNR);
#line 265
static inline bool CpmModelC__checkReceive(CpmModelC__receive_message_t *msg);
#line 290
static double CpmModelC__packetNoise(CpmModelC__receive_message_t *msg);
#line 321
static inline void CpmModelC__sim_gain_receive_handle(sim_event_t *evt);
#line 402
static inline void CpmModelC__enqueue_receive_event(int source, sim_time_t endTime, message_t *msg, bool receive, double power, double reversePower);
#line 469
static inline void CpmModelC__sim_gain_put(int dest, message_t *msg, sim_time_t endTime, bool receive, double power, double reversePower);







static inline void CpmModelC__Model__putOnAirTo(int dest, message_t *msg, bool ack, sim_time_t endTime, double power, double reversePower);
#line 500
static inline void CpmModelC__Model__setPendingTransmission(void );







static inline sim_event_t *CpmModelC__allocate_receive_event(sim_time_t endTime, CpmModelC__receive_message_t *msg);
#line 520
static inline CpmModelC__receive_message_t *CpmModelC__allocate_receive_message(void );



static inline void CpmModelC__free_receive_message(CpmModelC__receive_message_t *msg);



static inline void CpmModelC__read_rssi_task__runTask(void );
#line 548
static inline void CpmModelC__ReadRssi__default__readDone(error_t error, uint16_t data);
# 66 "/home/tinyos/local/src/tinyos-2x/tos/lib/tossim/ActiveMessageAddressC.nc"
bool ActiveMessageAddressC__set[1000];
am_addr_t ActiveMessageAddressC__addr[1000];









static am_addr_t ActiveMessageAddressC__ActiveMessageAddress__amAddress(void );
#line 89
static inline am_addr_t ActiveMessageAddressC__amAddress(void );
# 64 "/home/tinyos/local/src/tinyos-2x/tos/lib/timer/Timer.nc"
static void MyMainC__Timer0__startPeriodic(uint32_t dt);
#line 78
static void MyMainC__Timer0__stop(void );
# 104 "/home/tinyos/local/src/tinyos-2x/tos/interfaces/SplitControl.nc"
static error_t MyMainC__AMControl__start(void );
#line 130
static error_t MyMainC__AMControl__stop(void );
# 126 "/home/tinyos/local/src/tinyos-2x/tos/interfaces/Packet.nc"
static 
#line 123
void * 


MyMainC__Packet__getPayload(
#line 121
message_t * msg, 




uint8_t len);
# 80 "/home/tinyos/local/src/tinyos-2x/tos/interfaces/AMSend.nc"
static error_t MyMainC__AMSend__send(am_addr_t addr, 
#line 71
message_t * msg, 








uint8_t len);
# 73 "/home/tinyos/local/src/tinyos-2x/tos/lib/timer/Timer.nc"
static void MyMainC__PendingShutdownTimer__startOneShot(uint32_t dt);
#line 64
static void MyMainC__Timer1__startPeriodic(uint32_t dt);
#line 78
static void MyMainC__Timer1__stop(void );
# 59 "/home/tinyos/local/src/tinyos-2x/tos/interfaces/PacketAcknowledgements.nc"
static error_t MyMainC__PacketAcknowledgements__requestAck(
#line 53
message_t * msg);
#line 85
static bool MyMainC__PacketAcknowledgements__wasAcked(
#line 80
message_t * msg);
# 27 "MyMainC.nc"
uint16_t MyMainC__Baseindex[1000];
uint16_t MyMainC__FAILS[1000];
uint16_t MyMainC__LOST[1000];
uint16_t MyMainC__index[1000];
uint16_t MyMainC__receivedData[1000][30000];
uint16_t MyMainC__receivedDataCount[1000];
uint16_t MyMainC__BasereceivedData[1000][30000];
uint16_t MyMainC__BasereceivedDataCount[1000];
uint32_t MyMainC__ClusterBytes[1000];
uint32_t MyMainC__ClusterNacks[1000];
uint32_t MyMainC__BaseBytes[1000];
uint32_t MyMainC__BaseNacks[1000];


static inline void MyMainC__printReceivedData(void );
static void MyMainC__sendData(BasicSendReceiveMsg *btrpktt);
static void MyMainC__sendDatatoBase(BasicSendReceiveMsg *btrpktt);
static inline void MyMainC__shutdown(void );
static void MyMainC__sendData(BasicSendReceiveMsg *arg_0x7f65b57ba060);
bool MyMainC__busy[1000];
BasicSendReceiveMsg *MyMainC__btrpkt[1000];
BasicSendReceiveMsg *MyMainC__btrpkts[1000];
message_t MyMainC__pkt[1000];
uint16_t MyMainC__receivedFromNode1Counter[1000];
uint16_t MyMainC__receivedFromNode2Counter[1000];
uint16_t MyMainC__receivedFromNode3Counter[1000];
uint16_t MyMainC__receivedFromNode4Counter[1000];
uint16_t MyMainC__receivedFromNode5Counter[1000];
uint16_t MyMainC__receivedFromNode6Counter[1000];
uint16_t MyMainC__receivedFromNode7Counter[1000];
uint16_t MyMainC__receivedFromNode8Counter[1000];
uint16_t MyMainC__receivedFromNode9Counter[1000];
uint16_t MyMainC__receivedFromNode10Counter[1000];
uint16_t MyMainC__receivedFromNode11Counter[1000];
uint16_t MyMainC__receivedFromNode12Counter[1000];
uint16_t MyMainC__receivedFromNode13Counter[1000];
uint16_t MyMainC__receivedFromNode14Counter[1000];
uint16_t MyMainC__receivedFromNode15Counter[1000];

uint16_t MyMainC__receivedFromNode17Counter[1000];
uint16_t MyMainC__receivedFromNode18Counter[1000];
uint16_t MyMainC__receivedFromNode19Counter[1000];
uint16_t MyMainC__receivedFromNode20Counter[1000];
uint16_t MyMainC__receivedFromNode21Counter[1000];
uint16_t MyMainC__receivedFromNode22Counter[1000];
uint16_t MyMainC__receivedFromNode23Counter[1000];
uint16_t MyMainC__receivedFromNode24Counter[1000];
uint16_t MyMainC__receivedFromNode25Counter[1000];
uint16_t MyMainC__receivedFromNode26Counter[1000];
uint16_t MyMainC__receivedFromNode27Counter[1000];
uint16_t MyMainC__receivedFromNode28Counter[1000];
uint16_t MyMainC__receivedFromNode29Counter[1000];
uint16_t MyMainC__receivedFromNode30Counter[1000];
uint16_t MyMainC__receivedFromNode31Counter[1000];
uint16_t MyMainC__receivedFromNode32Counter[1000];
uint16_t MyMainC__receivedFromNode33Counter[1000];
uint16_t MyMainC__receivedFromNode34Counter[1000];
uint16_t MyMainC__receivedFromNode35Counter[1000];
uint16_t MyMainC__receivedFromNode36Counter[1000];
uint16_t MyMainC__receivedFromNode37Counter[1000];
uint16_t MyMainC__receivedFromNode38Counter[1000];
uint16_t MyMainC__receivedFromNode39Counter[1000];
uint16_t MyMainC__receivedFromNode40Counter[1000];
uint16_t MyMainC__receivedFromNode41Counter[1000];
uint16_t MyMainC__receivedFromNode42Counter[1000];
uint16_t MyMainC__receivedFromNode43Counter[1000];
uint16_t MyMainC__receivedFromNode44Counter[1000];
uint16_t MyMainC__receivedFromNode45Counter[1000];
uint16_t MyMainC__receivedFromNode46Counter[1000];
uint16_t MyMainC__receivedFromNode47Counter[1000];
uint16_t MyMainC__receivedFromNode48Counter[1000];
uint16_t MyMainC__receivedFromNode49Counter[1000];
uint16_t MyMainC__receivedFromNode50Counter[1000];
uint16_t MyMainC__receivedFromNode51Counter[1000];
uint16_t MyMainC__receivedFromNode52Counter[1000];
uint16_t MyMainC__receivedFromNode53Counter[1000];
uint16_t MyMainC__receivedFromNode54Counter[1000];
uint16_t MyMainC__receivedFromNode55Counter[1000];
uint16_t MyMainC__receivedFromNode56Counter[1000];

static inline void MyMainC__Boot__booted(void );






static inline void MyMainC__AMControl__startDone(error_t err);
#line 137
static inline void MyMainC__AMControl__stopDone(error_t err);



static inline void MyMainC__Timer0__fired(void );
#line 173
static void MyMainC__sendData(BasicSendReceiveMsg *btrpktt);
#line 273
static void MyMainC__AMSend__sendDone(message_t *msg, error_t err);
#line 319
static inline message_t *MyMainC__Receive__receive(message_t *msg, void *payload, uint8_t len);
#line 596
static inline void MyMainC__Timer1__fired(void );
#line 657
static void MyMainC__sendDatatoBase(BasicSendReceiveMsg *btrpktt);
#line 676
static inline void MyMainC__printReceivedData(void );
#line 697
static inline void MyMainC__shutdown(void );









static inline void MyMainC__PendingShutdownTimer__fired(void );
# 53 "/home/tinyos/local/src/tinyos-2x/tos/chips/atm128/timer/HplAtm128TimerCtrl8.nc"
static Atm128_TIFR_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__TimerCtrl__getInterruptFlag(void );
#line 46
static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__TimerCtrl__setControl(Atm128TimerControl_t control);
# 78 "/home/tinyos/local/src/tinyos-2x/tos/lib/timer/Alarm.nc"
static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Alarm__fired(void );
# 82 "/home/tinyos/local/src/tinyos-2x/tos/lib/timer/Counter.nc"
static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Counter__overflow(void );
# 44 "/home/tinyos/local/src/tinyos-2x/tos/chips/atm128/timer/HplAtm128TimerAsync.nc"
static int /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__TimerAsync__compareBusy(void );
#line 32
static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__TimerAsync__setTimer0Asynchronous(void );
# 48 "/home/tinyos/local/src/tinyos-2x/tos/chips/atm128/timer/HplAtm128Compare.nc"
static /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Compare__size_type /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Compare__get(void );





static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Compare__set(/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Compare__size_type t);










static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Compare__start(void );
# 61 "/home/tinyos/local/src/tinyos-2x/tos/chips/atm128/timer/HplAtm128Timer.nc"
static /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Timer__timer_size /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Timer__get(void );
# 38 "/home/tinyos/local/src/tinyos-2x/tos/chips/atm128/timer/Atm128AlarmAsyncP.nc"
uint8_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__set[1000];
uint32_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__t0[1000];
#line 39
uint32_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__dt[1000];
uint32_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__base[1000];



enum /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0____nesc_unnamed4334 {
  Atm128AlarmAsyncP__0__MINDT = 2, 
  Atm128AlarmAsyncP__0__MAXT = 230
};



static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__setInterrupt(void );


static inline error_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Init__init(void );
#line 74
static inline void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__setOcr0(uint8_t n);
#line 90
static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__setInterrupt(void );
#line 149
static inline void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Compare__fired(void );
#line 161
static uint32_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Counter__get(void );
#line 204
static inline void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Alarm__stop(void );







static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Alarm__startAt(uint32_t nt0, uint32_t ndt);









static inline uint32_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Alarm__getNow(void );



static inline uint32_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Alarm__getAlarm(void );



static inline void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Timer__overflow(void );
# 70 "/home/tinyos/local/src/tinyos-2x/tos/chips/atm128/timer/HplAtm128Timer.nc"
static void HplAtm128Timer0AsyncP__Timer0__overflow(void );
# 58 "/home/tinyos/local/src/tinyos-2x/tos/chips/atm128/timer/HplAtm128Compare.nc"
static void HplAtm128Timer0AsyncP__Compare__fired(void );
# 57 "/home/tinyos/local/src/tinyos-2x/tos/chips/atm128/timer/sim/HplAtm128Timer0AsyncP.nc"
bool HplAtm128Timer0AsyncP__inOverflow[1000];




static inline void HplAtm128Timer0AsyncP__cancel_overflow(void );
static inline sim_event_t *HplAtm128Timer0AsyncP__allocate_overflow(void );
static void HplAtm128Timer0AsyncP__configure_overflow(sim_event_t *e);
static inline void HplAtm128Timer0AsyncP__schedule_new_overflow(void );

static inline sim_time_t HplAtm128Timer0AsyncP__clock_to_sim(sim_time_t t);
static inline sim_time_t HplAtm128Timer0AsyncP__sim_to_clock(sim_time_t t);
static uint16_t HplAtm128Timer0AsyncP__shiftFromScale(void );




sim_time_t HplAtm128Timer0AsyncP__lastZero[1000];





uint8_t HplAtm128Timer0AsyncP__oldScale[1000];



static inline void HplAtm128Timer0AsyncP__cancel_compare(void );
static inline sim_event_t *HplAtm128Timer0AsyncP__allocate_compare(void );
static void HplAtm128Timer0AsyncP__configure_compare(sim_event_t *e);
static void HplAtm128Timer0AsyncP__schedule_new_compare(void );

static inline sim_time_t HplAtm128Timer0AsyncP__clock_to_sim(sim_time_t t);
static inline sim_time_t HplAtm128Timer0AsyncP__sim_to_clock(sim_time_t t);
static uint16_t HplAtm128Timer0AsyncP__shiftFromScale(void );


void INTERRUPT_15(void )   ;





void INTERRUPT_16(void )   ;







static sim_time_t HplAtm128Timer0AsyncP__last_zero(void );







static inline void HplAtm128Timer0AsyncP__notify_changed(void );










static inline sim_time_t HplAtm128Timer0AsyncP__notify_clockTicksPerSec(void );
#line 148
static inline sim_time_t HplAtm128Timer0AsyncP__clock_to_sim(sim_time_t t);





static inline sim_time_t HplAtm128Timer0AsyncP__sim_to_clock(sim_time_t t);





static uint16_t HplAtm128Timer0AsyncP__shiftFromScale(void );
#line 185
sim_event_t *HplAtm128Timer0AsyncP__compare[1000];

static inline void HplAtm128Timer0AsyncP__timer0_compare_handle(sim_event_t *evt);
#line 223
static inline sim_event_t *HplAtm128Timer0AsyncP__allocate_compare(void );







static void HplAtm128Timer0AsyncP__configure_compare(sim_event_t *evt);
#line 267
static void HplAtm128Timer0AsyncP__schedule_new_compare(void );
#line 282
static uint8_t HplAtm128Timer0AsyncP__Timer0__get(void );
#line 297
static inline void HplAtm128Timer0AsyncP__Timer0__set(uint8_t newVal);
#line 321
static uint8_t HplAtm128Timer0AsyncP__Timer0__getScale(void );
#line 364
static inline void HplAtm128Timer0AsyncP__Timer0Ctrl__setControl(Atm128TimerControl_t x);
#line 383
static Atm128_TIFR_t HplAtm128Timer0AsyncP__Timer0Ctrl__getInterruptFlag(void );
#line 447
static inline void HplAtm128Timer0AsyncP__Compare__start(void );









static uint8_t HplAtm128Timer0AsyncP__Compare__get(void );





static void HplAtm128Timer0AsyncP__Compare__set(uint8_t t);
#line 480
sim_event_t *HplAtm128Timer0AsyncP__overflow[1000];
static inline void HplAtm128Timer0AsyncP__timer0_overflow_handle(sim_event_t *evt);
#line 500
static inline sim_event_t *HplAtm128Timer0AsyncP__allocate_overflow(void );







static void HplAtm128Timer0AsyncP__configure_overflow(sim_event_t *evt);
#line 534
static inline void HplAtm128Timer0AsyncP__schedule_new_overflow(void );










static inline void HplAtm128Timer0AsyncP__cancel_overflow(void );
#line 561
static inline void HplAtm128Timer0AsyncP__TimerAsync__setTimer0Asynchronous(void );







static inline int HplAtm128Timer0AsyncP__TimerAsync__compareBusy(void );







static inline void HplAtm128Timer0AsyncP__cancel_compare(void );
# 67 "/home/tinyos/local/src/tinyos-2x/tos/interfaces/TaskBasic.nc"
static error_t /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__fired__postTask(void );
# 109 "/home/tinyos/local/src/tinyos-2x/tos/lib/timer/Alarm.nc"
static /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__size_type /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__getNow(void );
#line 103
static void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__startAt(/*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__size_type t0, /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__size_type dt);
#line 116
static /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__size_type /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__getAlarm(void );
#line 73
static void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__stop(void );
# 83 "/home/tinyos/local/src/tinyos-2x/tos/lib/timer/Timer.nc"
static void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Timer__fired(void );
# 74 "/home/tinyos/local/src/tinyos-2x/tos/lib/timer/AlarmToTimerC.nc"
enum /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0____nesc_unnamed4335 {
#line 74
  AlarmToTimerC__0__fired = 4U
};
#line 74
typedef int /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0____nesc_sillytask_fired[/*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__fired];
#line 55
uint32_t /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__m_dt[1000];
bool /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__m_oneshot[1000];

static inline void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__start(uint32_t t0, uint32_t dt, bool oneshot);
#line 71
static inline void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Timer__stop(void );


static inline void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__fired__runTask(void );






static inline void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__fired(void );
#line 93
static inline void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Timer__startOneShotAt(uint32_t t0, uint32_t dt);


static inline uint32_t /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Timer__getNow(void );
# 67 "/home/tinyos/local/src/tinyos-2x/tos/interfaces/TaskBasic.nc"
static error_t /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__updateFromTimer__postTask(void );
# 136 "/home/tinyos/local/src/tinyos-2x/tos/lib/timer/Timer.nc"
static uint32_t /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__getNow(void );
#line 129
static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__startOneShotAt(uint32_t t0, uint32_t dt);
#line 78
static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__stop(void );




static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__fired(
# 48 "/home/tinyos/local/src/tinyos-2x/tos/lib/timer/VirtualizeTimerC.nc"
uint8_t arg_0x7f65b5420da0);
#line 71
enum /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0____nesc_unnamed4336 {
#line 71
  VirtualizeTimerC__0__updateFromTimer = 5U
};
#line 71
typedef int /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0____nesc_sillytask_updateFromTimer[/*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__updateFromTimer];
#line 53
enum /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0____nesc_unnamed4337 {

  VirtualizeTimerC__0__NUM_TIMERS = 3U, 
  VirtualizeTimerC__0__END_OF_LIST = 255
};








#line 59
typedef struct /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0____nesc_unnamed4338 {

  uint32_t t0;
  uint32_t dt;
  bool isoneshot : 1;
  bool isrunning : 1;
  bool _reserved : 6;
} /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer_t;

/*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer_t /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__m_timers[1000][/*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__NUM_TIMERS];




static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__fireTimers(uint32_t now);
#line 100
static inline void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__updateFromTimer__runTask(void );
#line 139
static inline void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__fired(void );




static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__startTimer(uint8_t num, uint32_t t0, uint32_t dt, bool isoneshot);









static inline void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__startPeriodic(uint8_t num, uint32_t dt);




static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__startOneShot(uint8_t num, uint32_t dt);




static inline void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__stop(uint8_t num);
#line 204
static inline void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__default__fired(uint8_t num);
# 58 "/home/tinyos/local/src/tinyos-2x/tos/lib/timer/CounterToLocalTimeC.nc"
static inline void /*HilTimerMilliC.CounterToLocalTimeC*/CounterToLocalTimeC__0__Counter__overflow(void );
# 110 "/home/tinyos/local/src/tinyos-2x/tos/interfaces/AMSend.nc"
static void /*MyMainAppC.AMSenderC.SenderC.AMQueueEntryP*/AMQueueEntryP__0__AMSend__sendDone(
#line 103
message_t * msg, 






error_t error);
# 75 "/home/tinyos/local/src/tinyos-2x/tos/interfaces/Send.nc"
static error_t /*MyMainAppC.AMSenderC.SenderC.AMQueueEntryP*/AMQueueEntryP__0__Send__send(
#line 67
message_t * msg, 







uint8_t len);
# 103 "/home/tinyos/local/src/tinyos-2x/tos/interfaces/AMPacket.nc"
static void /*MyMainAppC.AMSenderC.SenderC.AMQueueEntryP*/AMQueueEntryP__0__AMPacket__setDestination(
#line 99
message_t * amsg, 



am_addr_t addr);
#line 162
static void /*MyMainAppC.AMSenderC.SenderC.AMQueueEntryP*/AMQueueEntryP__0__AMPacket__setType(
#line 158
message_t * amsg, 



am_id_t t);
# 53 "/home/tinyos/local/src/tinyos-2x/tos/system/AMQueueEntryP.nc"
static error_t /*MyMainAppC.AMSenderC.SenderC.AMQueueEntryP*/AMQueueEntryP__0__AMSend__send(am_addr_t dest, 
message_t *msg, 
uint8_t len);









static inline void /*MyMainAppC.AMSenderC.SenderC.AMQueueEntryP*/AMQueueEntryP__0__Send__sendDone(message_t *m, error_t err);
# 80 "/home/tinyos/local/src/tinyos-2x/tos/interfaces/AMSend.nc"
static error_t /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__AMSend__send(
# 48 "/home/tinyos/local/src/tinyos-2x/tos/system/AMQueueImplP.nc"
am_id_t arg_0x7f65b537b488, 
# 80 "/home/tinyos/local/src/tinyos-2x/tos/interfaces/AMSend.nc"
am_addr_t addr, 
#line 71
message_t * msg, 








uint8_t len);
# 100 "/home/tinyos/local/src/tinyos-2x/tos/interfaces/Send.nc"
static void /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__Send__sendDone(
# 46 "/home/tinyos/local/src/tinyos-2x/tos/system/AMQueueImplP.nc"
uint8_t arg_0x7f65b537c318, 
# 96 "/home/tinyos/local/src/tinyos-2x/tos/interfaces/Send.nc"
message_t * msg, 



error_t error);
# 78 "/home/tinyos/local/src/tinyos-2x/tos/interfaces/Packet.nc"
static uint8_t /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__Packet__payloadLength(
#line 74
message_t * msg);
#line 94
static void /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__Packet__setPayloadLength(
#line 90
message_t * msg, 



uint8_t len);
# 67 "/home/tinyos/local/src/tinyos-2x/tos/interfaces/TaskBasic.nc"
static error_t /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__errorTask__postTask(void );
# 78 "/home/tinyos/local/src/tinyos-2x/tos/interfaces/AMPacket.nc"
static am_addr_t /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__AMPacket__destination(
#line 74
message_t * amsg);
#line 147
static am_id_t /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__AMPacket__type(
#line 143
message_t * amsg);
# 126 "/home/tinyos/local/src/tinyos-2x/tos/system/AMQueueImplP.nc"
enum /*AMQueueP.AMQueueImplP*/AMQueueImplP__0____nesc_unnamed4339 {
#line 126
  AMQueueImplP__0__CancelTask = 6U
};
#line 126
typedef int /*AMQueueP.AMQueueImplP*/AMQueueImplP__0____nesc_sillytask_CancelTask[/*AMQueueP.AMQueueImplP*/AMQueueImplP__0__CancelTask];
#line 169
enum /*AMQueueP.AMQueueImplP*/AMQueueImplP__0____nesc_unnamed4340 {
#line 169
  AMQueueImplP__0__errorTask = 7U
};
#line 169
typedef int /*AMQueueP.AMQueueImplP*/AMQueueImplP__0____nesc_sillytask_errorTask[/*AMQueueP.AMQueueImplP*/AMQueueImplP__0__errorTask];
#line 57
#line 55
typedef struct /*AMQueueP.AMQueueImplP*/AMQueueImplP__0____nesc_unnamed4341 {
  message_t * msg;
} /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__queue_entry_t;

uint8_t /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__current[1000];
/*AMQueueP.AMQueueImplP*/AMQueueImplP__0__queue_entry_t /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__queue[1000][1];
uint8_t /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__cancelMask[1000][1 / 8 + 1];

static inline void /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__tryToSend(void );

static inline void /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__nextPacket(void );
#line 90
static inline error_t /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__Send__send(uint8_t clientId, message_t *msg, 
uint8_t len);
#line 126
static inline void /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__CancelTask__runTask(void );
#line 163
static void /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__sendDone(uint8_t last, message_t * msg, error_t err);





static inline void /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__errorTask__runTask(void );




static inline void /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__tryToSend(void );
#line 189
static void /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__AMSend__sendDone(am_id_t id, message_t *msg, error_t err);
#line 215
static inline void /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__Send__default__sendDone(uint8_t id, message_t *msg, error_t err);
# 80 "/home/tinyos/local/src/tinyos-2x/tos/lib/tossim/heap.c"
static inline void init_heap(heap_t *heap)
#line 80
{
  heap->size = 0;
  heap->private_size = STARTING_SIZE;
  heap->data = malloc(sizeof(node_t ) * heap->private_size);
}

#line 132
static inline void expand_heap(heap_t *heap)
#line 132
{
  int new_size = heap->private_size * 2 + 1;
  void *new_data = malloc(sizeof(node_t ) * new_size);



  memcpy(new_data, heap->data, sizeof(node_t ) * heap->private_size);
  free(heap->data);

  heap->data = new_data;
  heap->private_size = new_size;
}


static inline void heap_insert(heap_t *heap, void *data, long long int key)
#line 146
{
  int findex = heap->size;

#line 148
  if (findex == heap->private_size) {
      expand_heap(heap);
    }

  findex = heap->size;
  ((node_t *)heap->data)[findex].key = key;
  ((node_t *)heap->data)[findex].data = data;
  up_heap(heap, findex);

  heap->size++;
}

#line 90
static inline int is_empty(heap_t *heap)
#line 90
{
  return heap->size == 0;
}

static inline int heap_is_empty(heap_t *heap)
#line 94
{
  return is_empty(heap);
}

static inline long long int heap_get_min_key(heap_t *heap)
#line 98
{
  if (is_empty(heap)) {
      return -1;
    }
  else {
      return ((node_t *)heap->data)[0].key;
    }
}

# 317 "/home/tinyos/local/src/tinyos-2x/tos/lib/tossim/sim_log.c"
inline static int sim_log_eq(void *key1, void *key2)
#line 317
{
  return strcmp((char *)key1, (char *)key2) == 0;
}

#line 306
inline static unsigned int sim_log_hash(void *key)
#line 306
{
  char *str = (char *)key;
  unsigned int hashVal = 0;
  int hashChar;

  while ((hashChar = * str++)) 
    hashVal = hashChar + (hashVal << 6) + (hashVal << 16) - hashVal;

  return hashVal;
}

#line 159
static inline void sim_log_init()
#line 159
{
  int i;

  channelTable = create_hashtable(128, sim_log_hash, sim_log_eq);

  for (i = 0; i < SIM_LOG_OUTPUT_COUNT; i++) {
      outputs[i].num = 1;
      outputs[i].files = (FILE **)malloc(sizeof(FILE *));
      outputs[i].files[0] = fdopen(1, "w");
    }
}

# 140 "/home/tinyos/local/src/tinyos-2x/tos/lib/tossim/sim_noise.c"
inline static unsigned int sim_noise_hash(void *key)
#line 140
{
  char *pt = (char *)key;
  unsigned int hashVal = 0;
  int i;

#line 144
  for (i = 0; i < NOISE_HISTORY; i++) {
      hashVal = pt[i] + (hashVal << 6) + (hashVal << 16) - hashVal;
    }
  return hashVal;
}

inline static int sim_noise_eq(void *key1, void *key2)
#line 150
{
  return memcmp((void *)key1, (void *)key2, NOISE_HISTORY) == 0;
}

# 116 "/home/tinyos/local/src/tinyos-2x/tos/lib/tossim/SimMoteP.nc"
static inline bool SimMoteP__SimMote__isOn(void )
#line 116
{
  return SimMoteP__isOn[sim_node()];
}

# 172 "/home/tinyos/local/src/tinyos-2x/tos/lib/tossim/sim_log.c"
static inline void sim_log_add_channel(char *name, FILE *file)
#line 172
{
  sim_log_channel_t *channel;

#line 174
  channel = (sim_log_channel_t *)hashtable_search(channelTable, name);



  if (channel == (void *)0) {
      char *newName = (char *)malloc(strlen(name) + 1);

#line 180
      strcpy(newName, name);
      newName[strlen(name)] = 0;

      channel = (sim_log_channel_t *)malloc(sizeof(sim_log_channel_t ));
      channel->name = newName;
      channel->numOutputs = 0;
      channel->size = DEFAULT_CHANNEL_SIZE;
      channel->outputs = (FILE **)malloc(sizeof(FILE *) * channel->size);
      memset(channel->outputs, 0, sizeof(FILE *) * channel->size);
      hashtable_insert(channelTable, newName, channel);
    }



  if (channel->numOutputs == channel->size) {
      FILE **newOutputs;
      int newSize = channel->size * 2;

      newOutputs = (FILE **)malloc(sizeof(FILE *) * newSize);
      memcpy(newOutputs, channel->outputs, channel->size * sizeof(FILE **));

      free(channel->outputs);

      channel->outputs = newOutputs;
      channel->size = newSize;
    }

  channel->outputs[channel->numOutputs] = file;
  channel->numOutputs++;
  sim_log_commit_change();
}

static inline bool sim_log_remove_channel(char *output, FILE *file)
#line 212
{
  sim_log_channel_t *channel;
  int i;

#line 215
  channel = (sim_log_channel_t *)hashtable_search(channelTable, output);

  if (channel == (void *)0) {
      return FALSE;
    }


  for (i = 0; i < channel->numOutputs; i++) {
      FILE *f = channel->outputs[i];

#line 224
      if (file == f) {
          memcpy(&channel->outputs[i], &channel->outputs[i + 1], channel->numOutputs - (i + 1));
          channel->outputs[channel->numOutputs - 1] = (void *)0;
          channel->numOutputs--;
        }
    }

  return TRUE;
}

# 161 "/home/tinyos/local/src/tinyos-2x/tos/lib/tossim/sim_gain.c"
static inline gain_entry_t *sim_gain_allocate_link(int mote)
#line 161
{
  gain_entry_t *newLink = (gain_entry_t *)malloc(sizeof(gain_entry_t ));

#line 163
  newLink->next = (void *)0;
  newLink->mote = mote;
  newLink->gain = -10000000.0;
  return newLink;
}

# 55 "/home/tinyos/local/src/tinyos-2x/tos/lib/tossim/randomlib.c"
static inline void RandomInitialise(int ij, int kl)
{
  double s;
#line 57
  double t;
  int ii;
#line 58
  int i;
#line 58
  int j;
#line 58
  int k;
#line 58
  int l;
#line 58
  int jj;
#line 58
  int m;






  if (((ij < 0 || ij > 31328) || kl < 0) || kl > 30081) {
      ij = 1802;
      kl = 9373;
    }

  i = ij / 177 % 177 + 2;
  j = ij % 177 + 2;
  k = kl / 169 % 178 + 1;
  l = kl % 169;

  for (ii = 0; ii < 97; ii++) {
      s = 0.0;
      t = 0.5;
      for (jj = 0; jj < 24; jj++) {
          m = i * j % 179 * k % 179;
          i = j;
          j = k;
          k = m;
          l = (53 * l + 1) % 169;
          if (l * m % 64 >= 32) {
            s += t;
            }
#line 86
          t *= 0.5;
        }
      randU[ii] = s;
    }

  randC = 362436.0 / 16777216.0;
  randCD = 7654321.0 / 16777216.0;
  randCM = 16777213.0 / 16777216.0;
  i97 = 97;
  j97 = 33;
  test = TRUE;
}

# 299 "/home/tinyos/local/src/tinyos-2x/tos/lib/tossim/sim_noise.c"
static inline void sim_noise_alarm()
#line 299
{
  dummy = 5;
}

# 50 "/home/tinyos/local/src/tinyos-2x/tos/lib/tossim/sim_packet.c"
inline static tossim_header_t *getHeader(message_t *msg)
#line 50
{
  return (tossim_header_t *)(msg->data - sizeof(tossim_header_t ));
}

# 236 "/home/tinyos/local/src/tinyos-2x/tos/lib/tossim/TossimActiveMessageC.nc"
static inline void TossimActiveMessageC__active_message_deliver_handle(sim_event_t *evt)
#line 236
{
  message_t *m = (message_t *)evt->data;

#line 238
  sim_log_debug(61U, "Packet", "Delivering packet to %i at %s\n", (int )sim_node(), sim_time_string());
  TossimActiveMessageC__Model__receive(m);
}

static inline sim_event_t *TossimActiveMessageC__allocate_deliver_event(int node, message_t *msg, sim_time_t t)
#line 242
{
  sim_event_t *evt = (sim_event_t *)malloc(sizeof(sim_event_t ));

#line 244
  evt->mote = node;
  evt->time = t;
  evt->handle = TossimActiveMessageC__active_message_deliver_handle;
  evt->cleanup = sim_queue_cleanup_event;
  evt->cancelled = 0;
  evt->force = 0;
  evt->data = msg;
  return evt;
}

#line 185
static inline uint8_t TossimActiveMessageC__Packet__maxPayloadLength(void )
#line 185
{
  return 70;
}

# 89 "/home/tinyos/local/src/tinyos-2x/tos/lib/tossim/ActiveMessageAddressC.nc"
static inline am_addr_t ActiveMessageAddressC__amAddress(void )
#line 89
{
  return ActiveMessageAddressC__ActiveMessageAddress__amAddress();
}

# 57 "/home/tinyos/local/src/tinyos-2x/tos/lib/tossim/TossimActiveMessageC.nc"
inline static am_addr_t TossimActiveMessageC__amAddress(void ){
#line 57
  unsigned short __nesc_result;
#line 57

#line 57
  __nesc_result = ActiveMessageAddressC__amAddress();
#line 57

#line 57
  return __nesc_result;
#line 57
}
#line 57
#line 136
static inline am_addr_t TossimActiveMessageC__AMPacket__address(void )
#line 136
{
  return TossimActiveMessageC__amAddress();
}

#line 160
static inline bool TossimActiveMessageC__AMPacket__isForMe(message_t *amsg)
#line 160
{
  return TossimActiveMessageC__AMPacket__destination(amsg) == TossimActiveMessageC__AMPacket__address() || 
  TossimActiveMessageC__AMPacket__destination(amsg) == AM_BROADCAST_ADDR;
}

# 281 "/home/tinyos/local/compilers/lib/ncc/nesc_nx.h"
static __inline  uint8_t __nesc_ntoh_uint8(const void * source)
#line 281
{
  const uint8_t *base = source;

#line 283
  return base[0];
}

#line 310
static __inline  uint16_t __nesc_ntoh_uint16(const void * source)
#line 310
{
  const uint8_t *base = source;

#line 312
  return ((uint16_t )base[0] << 8) | base[1];
}

#line 334
static __inline  int16_t __nesc_ntoh_int16(const void * source)
#line 334
{
#line 334
  return __nesc_ntoh_uint16(source);
}

# 164 "/home/tinyos/local/src/tinyos-2x/tos/lib/timer/VirtualizeTimerC.nc"
static inline void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__stop(uint8_t num)
{
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__m_timers[sim_node()][num].isrunning = FALSE;
}

# 78 "/home/tinyos/local/src/tinyos-2x/tos/lib/timer/Timer.nc"
inline static void MyMainC__Timer1__stop(void ){
#line 78
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__stop(1U);
#line 78
}
#line 78
#line 73
inline static void MyMainC__PendingShutdownTimer__startOneShot(uint32_t dt){
#line 73
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__startOneShot(2U, dt);
#line 73
}
#line 73





inline static void MyMainC__Timer0__stop(void ){
#line 78
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__stop(0U);
#line 78
}
#line 78
# 222 "/home/tinyos/local/src/tinyos-2x/tos/chips/atm128/timer/Atm128AlarmAsyncP.nc"
static inline uint32_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Alarm__getNow(void )
#line 222
{
  return /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Counter__get();
}

# 109 "/home/tinyos/local/src/tinyos-2x/tos/lib/timer/Alarm.nc"
inline static /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__size_type /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__getNow(void ){
#line 109
  unsigned int __nesc_result;
#line 109

#line 109
  __nesc_result = /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Alarm__getNow();
#line 109

#line 109
  return __nesc_result;
#line 109
}
#line 109
# 96 "/home/tinyos/local/src/tinyos-2x/tos/lib/timer/AlarmToTimerC.nc"
static inline uint32_t /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Timer__getNow(void )
{
#line 97
  return /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__getNow();
}

# 136 "/home/tinyos/local/src/tinyos-2x/tos/lib/timer/Timer.nc"
inline static uint32_t /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__getNow(void ){
#line 136
  unsigned int __nesc_result;
#line 136

#line 136
  __nesc_result = /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Timer__getNow();
#line 136

#line 136
  return __nesc_result;
#line 136
}
#line 136
# 154 "/home/tinyos/local/src/tinyos-2x/tos/lib/timer/VirtualizeTimerC.nc"
static inline void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__startPeriodic(uint8_t num, uint32_t dt)
{
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__startTimer(num, /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__getNow(), dt, FALSE);
}

# 64 "/home/tinyos/local/src/tinyos-2x/tos/lib/timer/Timer.nc"
inline static void MyMainC__Timer1__startPeriodic(uint32_t dt){
#line 64
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__startPeriodic(1U, dt);
#line 64
}
#line 64
# 319 "MyMainC.nc"
static inline message_t *MyMainC__Receive__receive(message_t *msg, void *payload, uint8_t len)
#line 319
{
  if (len == sizeof(BasicSendReceiveMsg )) 
    {
      MyMainC__btrpkts[sim_node()] = (BasicSendReceiveMsg *)payload;
      if (((((((TOS_NODE_ID == 49 || TOS_NODE_ID == 50) || TOS_NODE_ID == 51) || TOS_NODE_ID == 52) || TOS_NODE_ID == 53) || TOS_NODE_ID == 54) || TOS_NODE_ID == 55) || TOS_NODE_ID == 56) 
        {
          if (MyMainC__receivedDataCount[sim_node()] < 30000) 
            {
              MyMainC__receivedData[sim_node()][MyMainC__receivedDataCount[sim_node()]] = __nesc_ntoh_int16(MyMainC__btrpkts[sim_node()]->data[0].nxdata);
              MyMainC__receivedData[sim_node()][MyMainC__receivedDataCount[sim_node()] + 1] = __nesc_ntoh_int16(MyMainC__btrpkts[sim_node()]->data[1].nxdata);
              MyMainC__receivedData[sim_node()][MyMainC__receivedDataCount[sim_node()] + 2] = __nesc_ntoh_int16(MyMainC__btrpkts[sim_node()]->data[2].nxdata);
              MyMainC__receivedData[sim_node()][MyMainC__receivedDataCount[sim_node()] + 3] = __nesc_ntoh_int16(MyMainC__btrpkts[sim_node()]->data[3].nxdata);
              MyMainC__receivedData[sim_node()][MyMainC__receivedDataCount[sim_node()] + 4] = __nesc_ntoh_int16(MyMainC__btrpkts[sim_node()]->data[4].nxdata);
              MyMainC__receivedData[sim_node()][MyMainC__receivedDataCount[sim_node()] + 5] = __nesc_ntoh_int16(MyMainC__btrpkts[sim_node()]->data[5].nxdata);
              MyMainC__receivedData[sim_node()][MyMainC__receivedDataCount[sim_node()] + 6] = __nesc_ntoh_int16(MyMainC__btrpkts[sim_node()]->data[6].nxdata);
              MyMainC__receivedData[sim_node()][MyMainC__receivedDataCount[sim_node()] + 7] = __nesc_ntoh_int16(MyMainC__btrpkts[sim_node()]->data[7].nxdata);
              MyMainC__receivedData[sim_node()][MyMainC__receivedDataCount[sim_node()] + 8] = __nesc_ntoh_int16(MyMainC__btrpkts[sim_node()]->data[8].nxdata);
              MyMainC__receivedData[sim_node()][MyMainC__receivedDataCount[sim_node()] + 9] = __nesc_ntoh_int16(MyMainC__btrpkts[sim_node()]->data[9].nxdata);
              MyMainC__receivedData[sim_node()][MyMainC__receivedDataCount[sim_node()] + 10] = __nesc_ntoh_int16(MyMainC__btrpkts[sim_node()]->data[10].nxdata);
              MyMainC__receivedData[sim_node()][MyMainC__receivedDataCount[sim_node()] + 11] = __nesc_ntoh_int16(MyMainC__btrpkts[sim_node()]->data[11].nxdata);
              MyMainC__receivedData[sim_node()][MyMainC__receivedDataCount[sim_node()] + 12] = __nesc_ntoh_int16(MyMainC__btrpkts[sim_node()]->data[12].nxdata);
              MyMainC__receivedData[sim_node()][MyMainC__receivedDataCount[sim_node()] + 13] = __nesc_ntoh_int16(MyMainC__btrpkts[sim_node()]->data[13].nxdata);
              MyMainC__receivedData[sim_node()][MyMainC__receivedDataCount[sim_node()] + 14] = __nesc_ntoh_int16(MyMainC__btrpkts[sim_node()]->data[14].nxdata);
              MyMainC__receivedData[sim_node()][MyMainC__receivedDataCount[sim_node()] + 15] = __nesc_ntoh_int16(MyMainC__btrpkts[sim_node()]->data[15].nxdata);
              MyMainC__receivedDataCount[sim_node()] = MyMainC__receivedDataCount[sim_node()] + 16;
            }
        }
      if (TOS_NODE_ID == 50) 
        {

          MyMainC__Timer1__startPeriodic(1050);
          if (__nesc_ntoh_uint8(MyMainC__btrpkts[sim_node()]->nodeid.nxdata) == 7) {
              MyMainC__receivedFromNode7Counter[sim_node()] = MyMainC__receivedFromNode7Counter[sim_node()] + 16;
            }
          else {
#line 352
            if (__nesc_ntoh_uint8(MyMainC__btrpkts[sim_node()]->nodeid.nxdata) == 8) {
                MyMainC__receivedFromNode8Counter[sim_node()] = MyMainC__receivedFromNode8Counter[sim_node()] + 16;
              }
            else {
#line 354
              if (__nesc_ntoh_uint8(MyMainC__btrpkts[sim_node()]->nodeid.nxdata) == 9) {
                  MyMainC__receivedFromNode9Counter[sim_node()] = MyMainC__receivedFromNode9Counter[sim_node()] + 16;
                }
              else {
#line 356
                if (__nesc_ntoh_uint8(MyMainC__btrpkts[sim_node()]->nodeid.nxdata) == 10) {
                    MyMainC__receivedFromNode10Counter[sim_node()] = MyMainC__receivedFromNode10Counter[sim_node()] + 16;
                  }
                else {
#line 358
                  if (__nesc_ntoh_uint8(MyMainC__btrpkts[sim_node()]->nodeid.nxdata) == 11) {
                      MyMainC__receivedFromNode11Counter[sim_node()] = MyMainC__receivedFromNode11Counter[sim_node()] + 16;
                    }
                  else {
#line 360
                    if (__nesc_ntoh_uint8(MyMainC__btrpkts[sim_node()]->nodeid.nxdata) == 12) {
                        MyMainC__receivedFromNode12Counter[sim_node()] = MyMainC__receivedFromNode12Counter[sim_node()] + 16;
                      }
                    }
                  }
                }
              }
            }
#line 364
          if (MyMainC__receivedFromNode7Counter[sim_node()] == 624 && MyMainC__receivedFromNode8Counter[sim_node()] == 624 && MyMainC__receivedFromNode9Counter[sim_node()] == 624 && MyMainC__receivedFromNode10Counter[sim_node()] == 624 && MyMainC__receivedFromNode11Counter[sim_node()] == 624 && MyMainC__receivedFromNode12Counter[sim_node()] == 624) 
            {

              MyMainC__Timer0__stop();
            }
        }
      if (TOS_NODE_ID == 51) 
        {
          MyMainC__Timer1__startPeriodic(1100);
          if (__nesc_ntoh_uint8(MyMainC__btrpkts[sim_node()]->nodeid.nxdata) == 13) {
              MyMainC__receivedFromNode13Counter[sim_node()] = MyMainC__receivedFromNode13Counter[sim_node()] + 16;
            }
          else {
#line 375
            if (__nesc_ntoh_uint8(MyMainC__btrpkts[sim_node()]->nodeid.nxdata) == 14) {
                MyMainC__receivedFromNode14Counter[sim_node()] = MyMainC__receivedFromNode14Counter[sim_node()] + 16;
              }
            else {
#line 377
              if (__nesc_ntoh_uint8(MyMainC__btrpkts[sim_node()]->nodeid.nxdata) == 15) {
                  MyMainC__receivedFromNode15Counter[sim_node()] = MyMainC__receivedFromNode15Counter[sim_node()] + 16;
                }
              else {
#line 379
                if (__nesc_ntoh_uint8(MyMainC__btrpkts[sim_node()]->nodeid.nxdata) == 16) {
                    MyMainC__receivedFromNode2Counter[sim_node()] = MyMainC__receivedFromNode2Counter[sim_node()] + 16;
                  }
                else {
#line 381
                  if (__nesc_ntoh_uint8(MyMainC__btrpkts[sim_node()]->nodeid.nxdata) == 17) {
                      MyMainC__receivedFromNode17Counter[sim_node()] = MyMainC__receivedFromNode17Counter[sim_node()] + 16;
                    }
                  else {
#line 383
                    if (__nesc_ntoh_uint8(MyMainC__btrpkts[sim_node()]->nodeid.nxdata) == 18) {
                        MyMainC__receivedFromNode18Counter[sim_node()] = MyMainC__receivedFromNode18Counter[sim_node()] + 16;
                      }
                    }
                  }
                }
              }
            }
#line 388
          if (MyMainC__receivedFromNode13Counter[sim_node()] == 624 && MyMainC__receivedFromNode14Counter[sim_node()] == 624 && MyMainC__receivedFromNode15Counter[sim_node()] == 624 && MyMainC__receivedFromNode2Counter[sim_node()] == 624 && MyMainC__receivedFromNode17Counter[sim_node()] == 624 && MyMainC__receivedFromNode18Counter[sim_node()] == 624) 
            {

              MyMainC__Timer0__stop();
            }
        }

      if (TOS_NODE_ID == 52) 
        {

          MyMainC__Timer1__startPeriodic(1150);
          if (__nesc_ntoh_uint8(MyMainC__btrpkts[sim_node()]->nodeid.nxdata) == 19) {
              MyMainC__receivedFromNode19Counter[sim_node()] = MyMainC__receivedFromNode19Counter[sim_node()] + 16;
            }
          else {
#line 401
            if (__nesc_ntoh_uint8(MyMainC__btrpkts[sim_node()]->nodeid.nxdata) == 20) {
                MyMainC__receivedFromNode20Counter[sim_node()] = MyMainC__receivedFromNode20Counter[sim_node()] + 16;
              }
            else {
#line 403
              if (__nesc_ntoh_uint8(MyMainC__btrpkts[sim_node()]->nodeid.nxdata) == 21) {
                  MyMainC__receivedFromNode21Counter[sim_node()] = MyMainC__receivedFromNode21Counter[sim_node()] + 16;
                }
              else {
#line 405
                if (__nesc_ntoh_uint8(MyMainC__btrpkts[sim_node()]->nodeid.nxdata) == 22) {
                    MyMainC__receivedFromNode22Counter[sim_node()] = MyMainC__receivedFromNode22Counter[sim_node()] + 16;
                  }
                else {
#line 407
                  if (__nesc_ntoh_uint8(MyMainC__btrpkts[sim_node()]->nodeid.nxdata) == 23) {
                      MyMainC__receivedFromNode23Counter[sim_node()] = MyMainC__receivedFromNode23Counter[sim_node()] + 16;
                    }
                  else {
#line 409
                    if (__nesc_ntoh_uint8(MyMainC__btrpkts[sim_node()]->nodeid.nxdata) == 24) {
                        MyMainC__receivedFromNode24Counter[sim_node()] = MyMainC__receivedFromNode24Counter[sim_node()] + 16;
                      }
                    }
                  }
                }
              }
            }
#line 413
          if (MyMainC__receivedFromNode19Counter[sim_node()] == 624 && MyMainC__receivedFromNode20Counter[sim_node()] == 624 && MyMainC__receivedFromNode21Counter[sim_node()] == 624 && MyMainC__receivedFromNode22Counter[sim_node()] == 624 && MyMainC__receivedFromNode23Counter[sim_node()] == 624 && MyMainC__receivedFromNode24Counter[sim_node()] == 624) 
            {

              MyMainC__Timer0__stop();
            }
        }
      if (TOS_NODE_ID == 53) 
        {

          MyMainC__Timer1__startPeriodic(1200);
          if (__nesc_ntoh_uint8(MyMainC__btrpkts[sim_node()]->nodeid.nxdata) == 25) {
              MyMainC__receivedFromNode25Counter[sim_node()] = MyMainC__receivedFromNode25Counter[sim_node()] + 16;
            }
          else {
#line 425
            if (__nesc_ntoh_uint8(MyMainC__btrpkts[sim_node()]->nodeid.nxdata) == 26) {
                MyMainC__receivedFromNode26Counter[sim_node()] = MyMainC__receivedFromNode26Counter[sim_node()] + 16;
              }
            else {
#line 427
              if (__nesc_ntoh_uint8(MyMainC__btrpkts[sim_node()]->nodeid.nxdata) == 27) {
                  MyMainC__receivedFromNode27Counter[sim_node()] = MyMainC__receivedFromNode27Counter[sim_node()] + 16;
                }
              else {
#line 429
                if (__nesc_ntoh_uint8(MyMainC__btrpkts[sim_node()]->nodeid.nxdata) == 28) {
                    MyMainC__receivedFromNode28Counter[sim_node()] = MyMainC__receivedFromNode28Counter[sim_node()] + 16;
                  }
                else {
#line 431
                  if (__nesc_ntoh_uint8(MyMainC__btrpkts[sim_node()]->nodeid.nxdata) == 29) {
                      MyMainC__receivedFromNode29Counter[sim_node()] = MyMainC__receivedFromNode29Counter[sim_node()] + 16;
                    }
                  else {
#line 433
                    if (__nesc_ntoh_uint8(MyMainC__btrpkts[sim_node()]->nodeid.nxdata) == 30) {
                        MyMainC__receivedFromNode30Counter[sim_node()] = MyMainC__receivedFromNode30Counter[sim_node()] + 16;
                      }
                    }
                  }
                }
              }
            }
#line 437
          if (MyMainC__receivedFromNode25Counter[sim_node()] == 624 && MyMainC__receivedFromNode26Counter[sim_node()] == 624 && MyMainC__receivedFromNode27Counter[sim_node()] == 624 && MyMainC__receivedFromNode28Counter[sim_node()] == 624 && MyMainC__receivedFromNode29Counter[sim_node()] == 624 && MyMainC__receivedFromNode30Counter[sim_node()] == 624) 
            {

              MyMainC__Timer0__stop();
            }
        }
      if (TOS_NODE_ID == 54) 
        {

          MyMainC__Timer1__startPeriodic(1250);
          if (__nesc_ntoh_uint8(MyMainC__btrpkts[sim_node()]->nodeid.nxdata) == 31) {
              MyMainC__receivedFromNode31Counter[sim_node()] = MyMainC__receivedFromNode31Counter[sim_node()] + 16;
            }
          else {
#line 449
            if (__nesc_ntoh_uint8(MyMainC__btrpkts[sim_node()]->nodeid.nxdata) == 32) {
                MyMainC__receivedFromNode32Counter[sim_node()] = MyMainC__receivedFromNode32Counter[sim_node()] + 16;
              }
            else {
#line 451
              if (__nesc_ntoh_uint8(MyMainC__btrpkts[sim_node()]->nodeid.nxdata) == 33) {
                  MyMainC__receivedFromNode33Counter[sim_node()] = MyMainC__receivedFromNode33Counter[sim_node()] + 16;
                }
              else {
#line 453
                if (__nesc_ntoh_uint8(MyMainC__btrpkts[sim_node()]->nodeid.nxdata) == 34) {
                    MyMainC__receivedFromNode34Counter[sim_node()] = MyMainC__receivedFromNode34Counter[sim_node()] + 16;
                  }
                else {
#line 455
                  if (__nesc_ntoh_uint8(MyMainC__btrpkts[sim_node()]->nodeid.nxdata) == 35) {
                      MyMainC__receivedFromNode35Counter[sim_node()] = MyMainC__receivedFromNode35Counter[sim_node()] + 16;
                    }
                  else {
#line 457
                    if (__nesc_ntoh_uint8(MyMainC__btrpkts[sim_node()]->nodeid.nxdata) == 36) {
                        MyMainC__receivedFromNode36Counter[sim_node()] = MyMainC__receivedFromNode36Counter[sim_node()] + 16;
                      }
                    }
                  }
                }
              }
            }
#line 461
          if (MyMainC__receivedFromNode31Counter[sim_node()] == 624 && MyMainC__receivedFromNode32Counter[sim_node()] == 624 && MyMainC__receivedFromNode33Counter[sim_node()] == 624 && MyMainC__receivedFromNode34Counter[sim_node()] == 624 && MyMainC__receivedFromNode35Counter[sim_node()] == 624 && MyMainC__receivedFromNode36Counter[sim_node()] == 624) 
            {

              MyMainC__Timer0__stop();
            }
        }
      if (TOS_NODE_ID == 55) 
        {

          MyMainC__Timer1__startPeriodic(1300);
          if (__nesc_ntoh_uint8(MyMainC__btrpkts[sim_node()]->nodeid.nxdata) == 37) {
              MyMainC__receivedFromNode37Counter[sim_node()] = MyMainC__receivedFromNode37Counter[sim_node()] + 16;
            }
          else {
#line 473
            if (__nesc_ntoh_uint8(MyMainC__btrpkts[sim_node()]->nodeid.nxdata) == 38) {
                MyMainC__receivedFromNode38Counter[sim_node()] = MyMainC__receivedFromNode38Counter[sim_node()] + 16;
              }
            else {
#line 475
              if (__nesc_ntoh_uint8(MyMainC__btrpkts[sim_node()]->nodeid.nxdata) == 39) {
                  MyMainC__receivedFromNode39Counter[sim_node()] = MyMainC__receivedFromNode39Counter[sim_node()] + 16;
                }
              else {
#line 477
                if (__nesc_ntoh_uint8(MyMainC__btrpkts[sim_node()]->nodeid.nxdata) == 40) {
                    MyMainC__receivedFromNode40Counter[sim_node()] = MyMainC__receivedFromNode40Counter[sim_node()] + 16;
                  }
                else {
#line 479
                  if (__nesc_ntoh_uint8(MyMainC__btrpkts[sim_node()]->nodeid.nxdata) == 41) {
                      MyMainC__receivedFromNode41Counter[sim_node()] = MyMainC__receivedFromNode41Counter[sim_node()] + 16;
                    }
                  else {
#line 481
                    if (__nesc_ntoh_uint8(MyMainC__btrpkts[sim_node()]->nodeid.nxdata) == 42) {
                        MyMainC__receivedFromNode42Counter[sim_node()] = MyMainC__receivedFromNode42Counter[sim_node()] + 16;
                      }
                    }
                  }
                }
              }
            }
#line 485
          if (MyMainC__receivedFromNode37Counter[sim_node()] == 624 && MyMainC__receivedFromNode38Counter[sim_node()] == 624 && MyMainC__receivedFromNode39Counter[sim_node()] == 624 && MyMainC__receivedFromNode40Counter[sim_node()] == 624 && MyMainC__receivedFromNode41Counter[sim_node()] == 624 && MyMainC__receivedFromNode42Counter[sim_node()] == 624) 
            {

              MyMainC__Timer0__stop();
            }
        }
      if (TOS_NODE_ID == 56) 
        {

          MyMainC__Timer1__startPeriodic(1350);
          if (__nesc_ntoh_uint8(MyMainC__btrpkts[sim_node()]->nodeid.nxdata) == 43) {
              MyMainC__receivedFromNode43Counter[sim_node()] = MyMainC__receivedFromNode43Counter[sim_node()] + 16;
            }
          else {
#line 497
            if (__nesc_ntoh_uint8(MyMainC__btrpkts[sim_node()]->nodeid.nxdata) == 44) {
                MyMainC__receivedFromNode44Counter[sim_node()] = MyMainC__receivedFromNode44Counter[sim_node()] + 16;
              }
            else {
#line 499
              if (__nesc_ntoh_uint8(MyMainC__btrpkts[sim_node()]->nodeid.nxdata) == 45) {
                  MyMainC__receivedFromNode45Counter[sim_node()] = MyMainC__receivedFromNode45Counter[sim_node()] + 16;
                }
              else {
#line 501
                if (__nesc_ntoh_uint8(MyMainC__btrpkts[sim_node()]->nodeid.nxdata) == 46) {
                    MyMainC__receivedFromNode46Counter[sim_node()] = MyMainC__receivedFromNode46Counter[sim_node()] + 16;
                  }
                else {
#line 503
                  if (__nesc_ntoh_uint8(MyMainC__btrpkts[sim_node()]->nodeid.nxdata) == 47) {
                      MyMainC__receivedFromNode47Counter[sim_node()] = MyMainC__receivedFromNode47Counter[sim_node()] + 16;
                    }
                  else {
#line 505
                    if (__nesc_ntoh_uint8(MyMainC__btrpkts[sim_node()]->nodeid.nxdata) == 48) {
                        MyMainC__receivedFromNode48Counter[sim_node()] = MyMainC__receivedFromNode48Counter[sim_node()] + 16;
                      }
                    }
                  }
                }
              }
            }
#line 509
          if (MyMainC__receivedFromNode43Counter[sim_node()] == 624 && MyMainC__receivedFromNode44Counter[sim_node()] == 624 && MyMainC__receivedFromNode45Counter[sim_node()] == 624 && MyMainC__receivedFromNode46Counter[sim_node()] == 624 && MyMainC__receivedFromNode47Counter[sim_node()] == 624 && MyMainC__receivedFromNode48Counter[sim_node()] == 624) 
            {

              MyMainC__Timer0__stop();
            }
        }
      if (TOS_NODE_ID == 49) 
        {

          MyMainC__Timer1__startPeriodic(1000);
          if (__nesc_ntoh_uint8(MyMainC__btrpkts[sim_node()]->nodeid.nxdata) == 1) {
              MyMainC__receivedFromNode1Counter[sim_node()] = MyMainC__receivedFromNode1Counter[sim_node()] + 16;
            }
          else {
#line 521
            if (__nesc_ntoh_uint8(MyMainC__btrpkts[sim_node()]->nodeid.nxdata) == 2) {
                MyMainC__receivedFromNode2Counter[sim_node()] = MyMainC__receivedFromNode2Counter[sim_node()] + 16;
              }
            else {
#line 523
              if (__nesc_ntoh_uint8(MyMainC__btrpkts[sim_node()]->nodeid.nxdata) == 3) {
                  MyMainC__receivedFromNode3Counter[sim_node()] = MyMainC__receivedFromNode3Counter[sim_node()] + 16;
                }
              else {
#line 525
                if (__nesc_ntoh_uint8(MyMainC__btrpkts[sim_node()]->nodeid.nxdata) == 4) {
                    MyMainC__receivedFromNode4Counter[sim_node()] = MyMainC__receivedFromNode4Counter[sim_node()] + 16;
                  }
                else {
#line 527
                  if (__nesc_ntoh_uint8(MyMainC__btrpkts[sim_node()]->nodeid.nxdata) == 5) {
                      MyMainC__receivedFromNode5Counter[sim_node()] = MyMainC__receivedFromNode5Counter[sim_node()] + 16;
                    }
                  else {
#line 529
                    if (__nesc_ntoh_uint8(MyMainC__btrpkts[sim_node()]->nodeid.nxdata) == 6) {
                        MyMainC__receivedFromNode6Counter[sim_node()] = MyMainC__receivedFromNode6Counter[sim_node()] + 16;
                      }
                    }
                  }
                }
              }
            }
#line 534
          if (MyMainC__receivedFromNode1Counter[sim_node()] == 624 && MyMainC__receivedFromNode2Counter[sim_node()] == 624 && MyMainC__receivedFromNode3Counter[sim_node()] == 624 && MyMainC__receivedFromNode4Counter[sim_node()] == 624 && MyMainC__receivedFromNode5Counter[sim_node()] == 624 && MyMainC__receivedFromNode6Counter[sim_node()] == 624) 
            {

              MyMainC__Timer0__stop();
            }
        }


      if (TOS_NODE_ID == 57) 
        {
          if (MyMainC__BasereceivedDataCount[sim_node()] < 30000) 
            {
              MyMainC__BasereceivedData[sim_node()][MyMainC__BasereceivedDataCount[sim_node()]] = __nesc_ntoh_int16(MyMainC__btrpkts[sim_node()]->data[0].nxdata);
              MyMainC__BasereceivedData[sim_node()][MyMainC__BasereceivedDataCount[sim_node()] + 1] = __nesc_ntoh_int16(MyMainC__btrpkts[sim_node()]->data[1].nxdata);
              MyMainC__BasereceivedData[sim_node()][MyMainC__BasereceivedDataCount[sim_node()] + 2] = __nesc_ntoh_int16(MyMainC__btrpkts[sim_node()]->data[2].nxdata);
              MyMainC__BasereceivedData[sim_node()][MyMainC__BasereceivedDataCount[sim_node()] + 3] = __nesc_ntoh_int16(MyMainC__btrpkts[sim_node()]->data[3].nxdata);
              MyMainC__BasereceivedData[sim_node()][MyMainC__BasereceivedDataCount[sim_node()] + 4] = __nesc_ntoh_int16(MyMainC__btrpkts[sim_node()]->data[4].nxdata);
              MyMainC__BasereceivedData[sim_node()][MyMainC__BasereceivedDataCount[sim_node()] + 5] = __nesc_ntoh_int16(MyMainC__btrpkts[sim_node()]->data[5].nxdata);
              MyMainC__BasereceivedData[sim_node()][MyMainC__BasereceivedDataCount[sim_node()] + 6] = __nesc_ntoh_int16(MyMainC__btrpkts[sim_node()]->data[6].nxdata);
              MyMainC__BasereceivedData[sim_node()][MyMainC__BasereceivedDataCount[sim_node()] + 7] = __nesc_ntoh_int16(MyMainC__btrpkts[sim_node()]->data[7].nxdata);
              MyMainC__BasereceivedData[sim_node()][MyMainC__BasereceivedDataCount[sim_node()] + 8] = __nesc_ntoh_int16(MyMainC__btrpkts[sim_node()]->data[8].nxdata);
              MyMainC__BasereceivedData[sim_node()][MyMainC__BasereceivedDataCount[sim_node()] + 9] = __nesc_ntoh_int16(MyMainC__btrpkts[sim_node()]->data[9].nxdata);
              MyMainC__BasereceivedData[sim_node()][MyMainC__BasereceivedDataCount[sim_node()] + 10] = __nesc_ntoh_int16(MyMainC__btrpkts[sim_node()]->data[10].nxdata);
              MyMainC__BasereceivedData[sim_node()][MyMainC__BasereceivedDataCount[sim_node()] + 11] = __nesc_ntoh_int16(MyMainC__btrpkts[sim_node()]->data[11].nxdata);
              MyMainC__BasereceivedData[sim_node()][MyMainC__BasereceivedDataCount[sim_node()] + 12] = __nesc_ntoh_int16(MyMainC__btrpkts[sim_node()]->data[12].nxdata);
              MyMainC__BasereceivedData[sim_node()][MyMainC__BasereceivedDataCount[sim_node()] + 13] = __nesc_ntoh_int16(MyMainC__btrpkts[sim_node()]->data[13].nxdata);
              MyMainC__BasereceivedData[sim_node()][MyMainC__BasereceivedDataCount[sim_node()] + 14] = __nesc_ntoh_int16(MyMainC__btrpkts[sim_node()]->data[14].nxdata);
              MyMainC__BasereceivedData[sim_node()][MyMainC__BasereceivedDataCount[sim_node()] + 15] = __nesc_ntoh_int16(MyMainC__btrpkts[sim_node()]->data[15].nxdata);
              MyMainC__BasereceivedDataCount[sim_node()] = MyMainC__BasereceivedDataCount[sim_node()] + 16;
            }

          if (__nesc_ntoh_uint8(MyMainC__btrpkts[sim_node()]->nodeid.nxdata) == 49) {
              MyMainC__receivedFromNode49Counter[sim_node()] = MyMainC__receivedFromNode49Counter[sim_node()] + 16;
            }
          else {
#line 567
            if (__nesc_ntoh_uint8(MyMainC__btrpkts[sim_node()]->nodeid.nxdata) == 50) {
                MyMainC__receivedFromNode50Counter[sim_node()] = MyMainC__receivedFromNode50Counter[sim_node()] + 16;
              }
            else {
#line 569
              if (__nesc_ntoh_uint8(MyMainC__btrpkts[sim_node()]->nodeid.nxdata) == 51) {
                  MyMainC__receivedFromNode51Counter[sim_node()] = MyMainC__receivedFromNode51Counter[sim_node()] + 16;
                }
              else {
#line 571
                if (__nesc_ntoh_uint8(MyMainC__btrpkts[sim_node()]->nodeid.nxdata) == 52) {
                    MyMainC__receivedFromNode52Counter[sim_node()] = MyMainC__receivedFromNode52Counter[sim_node()] + 16;
                  }
                else {
#line 573
                  if (__nesc_ntoh_uint8(MyMainC__btrpkts[sim_node()]->nodeid.nxdata) == 53) {
                      MyMainC__receivedFromNode53Counter[sim_node()] = MyMainC__receivedFromNode53Counter[sim_node()] + 16;
                    }
                  else {
#line 575
                    if (__nesc_ntoh_uint8(MyMainC__btrpkts[sim_node()]->nodeid.nxdata) == 54) {
                        MyMainC__receivedFromNode54Counter[sim_node()] = MyMainC__receivedFromNode54Counter[sim_node()] + 16;
                      }
                    else {
#line 577
                      if (__nesc_ntoh_uint8(MyMainC__btrpkts[sim_node()]->nodeid.nxdata) == 55) {
                          MyMainC__receivedFromNode55Counter[sim_node()] = MyMainC__receivedFromNode55Counter[sim_node()] + 16;
                        }
                      else {
#line 579
                        if (__nesc_ntoh_uint8(MyMainC__btrpkts[sim_node()]->nodeid.nxdata) == 56) {
                            MyMainC__receivedFromNode56Counter[sim_node()] = MyMainC__receivedFromNode56Counter[sim_node()] + 16;
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
#line 584
          if (MyMainC__receivedFromNode49Counter[sim_node()] == 3744 && MyMainC__receivedFromNode50Counter[sim_node()] == 3744 && MyMainC__receivedFromNode51Counter[sim_node()] == 3744 && MyMainC__receivedFromNode52Counter[sim_node()] == 3744 && MyMainC__receivedFromNode53Counter[sim_node()] == 3744 && MyMainC__receivedFromNode54Counter[sim_node()] == 3744 && MyMainC__receivedFromNode55Counter[sim_node()] == 3744 && MyMainC__receivedFromNode56Counter[sim_node()] == 3744) {
              MyMainC__PendingShutdownTimer__startOneShot(1000);
              MyMainC__Timer1__stop();
            }
        }
    }

  return msg;
}

# 212 "/home/tinyos/local/src/tinyos-2x/tos/lib/tossim/TossimActiveMessageC.nc"
static inline message_t *TossimActiveMessageC__Receive__default__receive(am_id_t id, message_t *msg, void *payload, uint8_t len)
#line 212
{
  return msg;
}

# 78 "/home/tinyos/local/src/tinyos-2x/tos/interfaces/Receive.nc"
inline static message_t * TossimActiveMessageC__Receive__receive(am_id_t arg_0x7f65b64d05f8, message_t * msg, void * payload, uint8_t len){
#line 78
  nx_struct message_t *__nesc_result;
#line 78

#line 78
  switch (arg_0x7f65b64d05f8) {
#line 78
    case 6:
#line 78
      __nesc_result = MyMainC__Receive__receive(msg, payload, len);
#line 78
      break;
#line 78
    default:
#line 78
      __nesc_result = TossimActiveMessageC__Receive__default__receive(arg_0x7f65b64d05f8, msg, payload, len);
#line 78
      break;
#line 78
    }
#line 78

#line 78
  return __nesc_result;
#line 78
}
#line 78
# 67 "/home/tinyos/local/src/tinyos-2x/tos/interfaces/TaskBasic.nc"
inline static error_t /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__updateFromTimer__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SimSchedulerBasicP__TaskBasic__postTask(/*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__updateFromTimer);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 139 "/home/tinyos/local/src/tinyos-2x/tos/lib/tossim/SimSchedulerBasicP.nc"
static inline bool SimSchedulerBasicP__isWaiting(uint8_t id)
{
  return SimSchedulerBasicP__m_next[sim_node()][id] != SimSchedulerBasicP__NO_TASK || SimSchedulerBasicP__m_tail[sim_node()] == id;
}

static inline bool SimSchedulerBasicP__pushTask(uint8_t id)
{
  if (!SimSchedulerBasicP__isWaiting(id)) 
    {
      if (SimSchedulerBasicP__m_head[sim_node()] == SimSchedulerBasicP__NO_TASK) 
        {
          SimSchedulerBasicP__m_head[sim_node()] = id;
          SimSchedulerBasicP__m_tail[sim_node()] = id;
        }
      else 
        {
          SimSchedulerBasicP__m_next[sim_node()][SimSchedulerBasicP__m_tail[sim_node()]] = id;
          SimSchedulerBasicP__m_tail[sim_node()] = id;
        }
      return TRUE;
    }
  else 
    {
      return FALSE;
    }
}

#line 69
static inline int SimSchedulerBasicP__sim_config_task_latency(void )
#line 69
{
#line 69
  return 100;
}

# 113 "/home/tinyos/local/src/tinyos-2x/tos/lib/tossim/SimMoteP.nc"
static inline long long int SimMoteP__SimMote__getStartTime(void )
#line 113
{
  return SimMoteP__startTime[sim_node()];
}

# 127 "/home/tinyos/local/src/tinyos-2x/tos/chips/atm128/timer/sim/HplAtm128Timer0AsyncP.nc"
static inline sim_time_t HplAtm128Timer0AsyncP__notify_clockTicksPerSec(void )
#line 127
{
  return ATM128_TIMER0_TICKSPPS;
}

#line 154
static inline sim_time_t HplAtm128Timer0AsyncP__sim_to_clock(sim_time_t t)
#line 154
{
  t *= HplAtm128Timer0AsyncP__notify_clockTicksPerSec();
  t /= sim_ticks_per_sec();
  return t;
}

# 53 "/home/tinyos/local/src/tinyos-2x/tos/chips/atm128/timer/HplAtm128TimerCtrl8.nc"
inline static Atm128_TIFR_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__TimerCtrl__getInterruptFlag(void ){
#line 53
  union __nesc_unnamed4312 __nesc_result;
#line 53

#line 53
  __nesc_result = HplAtm128Timer0AsyncP__Timer0Ctrl__getInterruptFlag();
#line 53

#line 53
  return __nesc_result;
#line 53
}
#line 53
# 216 "/home/tinyos/local/src/tinyos-2x/tos/lib/tossim/TossimActiveMessageC.nc"
static inline message_t *TossimActiveMessageC__Snoop__default__receive(am_id_t id, message_t *msg, void *payload, uint8_t len)
#line 216
{
  return msg;
}

# 78 "/home/tinyos/local/src/tinyos-2x/tos/interfaces/Receive.nc"
inline static message_t * TossimActiveMessageC__Snoop__receive(am_id_t arg_0x7f65b64cf1a0, message_t * msg, void * payload, uint8_t len){
#line 78
  nx_struct message_t *__nesc_result;
#line 78

#line 78
    __nesc_result = TossimActiveMessageC__Snoop__default__receive(arg_0x7f65b64cf1a0, msg, payload, len);
#line 78

#line 78
  return __nesc_result;
#line 78
}
#line 78
# 89 "/home/tinyos/local/src/tinyos-2x/tos/chips/atm128/sim/atm128hardware.h"
static __inline void __nesc_disable_interrupt()
#line 89
{
  atm128RegFile[sim_node()][* (volatile uint8_t *)&atm128RegFile[sim_node()][0x3F]] &= ~(1 << 7);
}






#line 97
__inline  __nesc_atomic_t 
__nesc_atomic_start(void )
{
  __nesc_atomic_t result = * (volatile uint8_t *)&atm128RegFile[sim_node()][0x3F];

#line 101
  __nesc_disable_interrupt();
  return result;
}



#line 106
__inline  void 
__nesc_atomic_end(__nesc_atomic_t original_SREG)
{
  * (volatile uint8_t *)&atm128RegFile[sim_node()][0x3F] = original_SREG;
}

# 85 "/home/tinyos/local/src/tinyos-2x/tos/lib/tossim/SimSchedulerBasicP.nc"
static inline void SimSchedulerBasicP__sim_scheduler_event_handle(sim_event_t *e)
#line 85
{
  SimSchedulerBasicP__sim_scheduler_event_pending[sim_node()] = FALSE;








  if (SimSchedulerBasicP__Scheduler__runNextTask()) {
      SimSchedulerBasicP__sim_scheduler_submit_event();
    }
}




static inline void SimSchedulerBasicP__sim_scheduler_event_init(sim_event_t *e)
#line 103
{
  e->mote = sim_node();
  e->force = 0;
  e->data = (void *)0;
  e->handle = SimSchedulerBasicP__sim_scheduler_event_handle;
  e->cleanup = sim_queue_cleanup_none;
}

#line 166
static inline void SimSchedulerBasicP__Scheduler__init(void )
{
  sim_log_debug(48U, "Scheduler", "Initializing scheduler.\n");
  /* atomic removed: atomic calls only */
  {
    memset(SimSchedulerBasicP__m_next[sim_node()], SimSchedulerBasicP__NO_TASK, sizeof SimSchedulerBasicP__m_next[sim_node()]);
    SimSchedulerBasicP__m_head[sim_node()] = SimSchedulerBasicP__NO_TASK;
    SimSchedulerBasicP__m_tail[sim_node()] = SimSchedulerBasicP__NO_TASK;

    SimSchedulerBasicP__sim_scheduler_event_pending[sim_node()] = FALSE;
    SimSchedulerBasicP__sim_scheduler_event_init(&SimSchedulerBasicP__sim_scheduler_event[sim_node()]);
  }
}

# 57 "/home/tinyos/local/src/tinyos-2x/tos/interfaces/Scheduler.nc"
inline static void SimMainP__Scheduler__init(void ){
#line 57
  SimSchedulerBasicP__Scheduler__init();
#line 57
}
#line 57
# 120 "/home/tinyos/local/src/tinyos-2x/tos/lib/tossim/SimSchedulerBasicP.nc"
static inline uint8_t SimSchedulerBasicP__popTask(void )
{
  if (SimSchedulerBasicP__m_head[sim_node()] != SimSchedulerBasicP__NO_TASK) 
    {
      uint8_t id = SimSchedulerBasicP__m_head[sim_node()];

#line 125
      SimSchedulerBasicP__m_head[sim_node()] = SimSchedulerBasicP__m_next[sim_node()][SimSchedulerBasicP__m_head[sim_node()]];
      if (SimSchedulerBasicP__m_head[sim_node()] == SimSchedulerBasicP__NO_TASK) 
        {
          SimSchedulerBasicP__m_tail[sim_node()] = SimSchedulerBasicP__NO_TASK;
        }
      SimSchedulerBasicP__m_next[sim_node()][id] = SimSchedulerBasicP__NO_TASK;
      return id;
    }
  else 
    {
      return SimSchedulerBasicP__NO_TASK;
    }
}

# 104 "/home/tinyos/local/src/tinyos-2x/tos/interfaces/SplitControl.nc"
inline static error_t MyMainC__AMControl__start(void ){
#line 104
  unsigned char __nesc_result;
#line 104

#line 104
  __nesc_result = TossimPacketModelC__Control__start();
#line 104

#line 104
  return __nesc_result;
#line 104
}
#line 104
# 114 "MyMainC.nc"
static inline void MyMainC__AMControl__startDone(error_t err)
#line 114
{

  if (err != SUCCESS) {
      sim_log_debug(109U, "radio", "Fail to start AMControl\n");
      MyMainC__AMControl__start();
      return;
    }
  if (err == SUCCESS) {
      if (((((((TOS_NODE_ID == 1 || TOS_NODE_ID == 7) || TOS_NODE_ID == 13) || TOS_NODE_ID == 19) || TOS_NODE_ID == 25) || TOS_NODE_ID == 31) || TOS_NODE_ID == 37) || TOS_NODE_ID == 43) {
          MyMainC__Timer0__startPeriodic(1000);
        }
#line 124
      if (((((((TOS_NODE_ID == 2 || TOS_NODE_ID == 8) || TOS_NODE_ID == 14) || TOS_NODE_ID == 20) || TOS_NODE_ID == 26) || TOS_NODE_ID == 32) || TOS_NODE_ID == 38) || TOS_NODE_ID == 44) {
          MyMainC__Timer0__startPeriodic(1050);
        }
#line 126
      if (((((((TOS_NODE_ID == 3 || TOS_NODE_ID == 9) || TOS_NODE_ID == 15) || TOS_NODE_ID == 21) || TOS_NODE_ID == 27) || TOS_NODE_ID == 33) || TOS_NODE_ID == 39) || TOS_NODE_ID == 45) {
          MyMainC__Timer0__startPeriodic(1100);
        }
#line 128
      if (((((((TOS_NODE_ID == 4 || TOS_NODE_ID == 10) || TOS_NODE_ID == 16) || TOS_NODE_ID == 22) || TOS_NODE_ID == 28) || TOS_NODE_ID == 34) || TOS_NODE_ID == 40) || TOS_NODE_ID == 46) {
          MyMainC__Timer0__startPeriodic(1150);
        }
#line 130
      if (((((((TOS_NODE_ID == 5 || TOS_NODE_ID == 11) || TOS_NODE_ID == 17) || TOS_NODE_ID == 23) || TOS_NODE_ID == 29) || TOS_NODE_ID == 35) || TOS_NODE_ID == 41) || TOS_NODE_ID == 47) {
          MyMainC__Timer0__startPeriodic(1200);
        }
#line 132
      if (((((((TOS_NODE_ID == 6 || TOS_NODE_ID == 12) || TOS_NODE_ID == 18) || TOS_NODE_ID == 24) || TOS_NODE_ID == 30) || TOS_NODE_ID == 36) || TOS_NODE_ID == 42) || TOS_NODE_ID == 48) {
          MyMainC__Timer0__startPeriodic(1250);
        }
    }
}

# 113 "/home/tinyos/local/src/tinyos-2x/tos/interfaces/SplitControl.nc"
inline static void TossimPacketModelC__Control__startDone(error_t error){
#line 113
  MyMainC__AMControl__startDone(error);
#line 113
}
#line 113
# 96 "/home/tinyos/local/src/tinyos-2x/tos/lib/tossim/TossimPacketModelC.nc"
static inline void TossimPacketModelC__startDoneTask__runTask(void )
#line 96
{
  TossimPacketModelC__running[sim_node()] = TRUE;
  TossimPacketModelC__Control__startDone(SUCCESS);
}

# 137 "MyMainC.nc"
static inline void MyMainC__AMControl__stopDone(error_t err)
#line 137
{
}

# 138 "/home/tinyos/local/src/tinyos-2x/tos/interfaces/SplitControl.nc"
inline static void TossimPacketModelC__Control__stopDone(error_t error){
#line 138
  MyMainC__AMControl__stopDone(error);
#line 138
}
#line 138
# 101 "/home/tinyos/local/src/tinyos-2x/tos/lib/tossim/TossimPacketModelC.nc"
static inline void TossimPacketModelC__stopDoneTask__runTask(void )
#line 101
{
  TossimPacketModelC__running[sim_node()] = FALSE;
  TossimPacketModelC__Control__stopDone(SUCCESS);
}

# 315 "/home/tinyos/local/compilers/lib/ncc/nesc_nx.h"
static __inline  uint16_t __nesc_hton_uint16(void * target, uint16_t value)
#line 315
{
  uint8_t *base = target;

#line 317
  base[1] = value;
  base[0] = value >> 8;
  return value;
}

#line 286
static __inline  uint8_t __nesc_hton_uint8(void * target, uint8_t value)
#line 286
{
  uint8_t *base = target;

#line 288
  base[0] = value;
  return value;
}

#line 303
static __inline  int8_t __nesc_hton_int8(void * target, int8_t value)
#line 303
{
#line 303
  __nesc_hton_uint8(target, value);
#line 303
  return value;
}

# 110 "/home/tinyos/local/src/tinyos-2x/tos/interfaces/AMSend.nc"
inline static void TossimActiveMessageC__AMSend__sendDone(am_id_t arg_0x7f65b64d1408, message_t * msg, error_t error){
#line 110
  /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__AMSend__sendDone(arg_0x7f65b64d1408, msg, error);
#line 110
}
#line 110
# 103 "/home/tinyos/local/src/tinyos-2x/tos/lib/tossim/TossimActiveMessageC.nc"
static inline void TossimActiveMessageC__Model__sendDone(message_t *msg, error_t result)
#line 103
{
  TossimActiveMessageC__AMSend__sendDone(TossimActiveMessageC__AMPacket__type(msg), msg, result);
}

# 76 "/home/tinyos/local/src/tinyos-2x/tos/lib/tossim/TossimPacketModel.nc"
inline static void TossimPacketModelC__Packet__sendDone(message_t *msg, error_t error){
#line 76
  TossimActiveMessageC__Model__sendDone(msg, error);
#line 76
}
#line 76
# 82 "/home/tinyos/local/src/tinyos-2x/tos/lib/tossim/TossimPacketModelC.nc"
static inline tossim_metadata_t *TossimPacketModelC__getMetadata(message_t *msg)
#line 82
{
  return (tossim_metadata_t *)& msg->metadata;
}

#line 145
static inline void TossimPacketModelC__sendDoneTask__runTask(void )
#line 145
{
  message_t *msg = TossimPacketModelC__sending[sim_node()];
  tossim_metadata_t *meta = TossimPacketModelC__getMetadata(msg);

#line 148
  __nesc_hton_uint8(meta->ack.nxdata, 0);
  __nesc_hton_int8(meta->strength.nxdata, 0);
  __nesc_hton_uint16(meta->time.nxdata, 0);
  TossimPacketModelC__sending[sim_node()] = FALSE;
  TossimPacketModelC__Packet__sendDone(msg, TossimPacketModelC__running[sim_node()] ? SUCCESS : EOFF);
}

# 548 "/home/tinyos/local/src/tinyos-2x/tos/lib/tossim/CpmModelC.nc"
static inline void CpmModelC__ReadRssi__default__readDone(error_t error, uint16_t data)
#line 548
{
}

# 63 "/home/tinyos/local/src/tinyos-2x/tos/interfaces/Read.nc"
inline static void CpmModelC__ReadRssi__readDone(error_t result, CpmModelC__ReadRssi__val_t val){
#line 63
  CpmModelC__ReadRssi__default__readDone(result, val);
#line 63
}
#line 63
# 528 "/home/tinyos/local/src/tinyos-2x/tos/lib/tossim/CpmModelC.nc"
static inline void CpmModelC__read_rssi_task__runTask(void )
{
  double noise = CpmModelC__packetNoise((void *)0);

#line 531
  CpmModelC__rssi[sim_node()] = FALSE;
  sim_log_debug(106U, "CpmModelC", "ReadRssi: noise %f\n", noise);


  CpmModelC__ReadRssi__readDone(SUCCESS, noise + 45);
}

# 139 "/home/tinyos/local/src/tinyos-2x/tos/lib/timer/VirtualizeTimerC.nc"
static inline void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__fired(void )
{
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__fireTimers(/*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__getNow());
}

# 83 "/home/tinyos/local/src/tinyos-2x/tos/lib/timer/Timer.nc"
inline static void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Timer__fired(void ){
#line 83
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__fired();
#line 83
}
#line 83
# 226 "/home/tinyos/local/src/tinyos-2x/tos/chips/atm128/timer/Atm128AlarmAsyncP.nc"
static inline uint32_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Alarm__getAlarm(void )
#line 226
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 227
    {
      unsigned int __nesc_temp = 
#line 227
      /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__t0[sim_node()] + /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__dt[sim_node()];

      {
#line 227
        __nesc_atomic_end(__nesc_atomic); 
#line 227
        return __nesc_temp;
      }
    }
#line 229
    __nesc_atomic_end(__nesc_atomic); }
}

# 116 "/home/tinyos/local/src/tinyos-2x/tos/lib/timer/Alarm.nc"
inline static /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__size_type /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__getAlarm(void ){
#line 116
  unsigned int __nesc_result;
#line 116

#line 116
  __nesc_result = /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Alarm__getAlarm();
#line 116

#line 116
  return __nesc_result;
#line 116
}
#line 116
#line 103
inline static void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__startAt(/*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__size_type t0, /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__size_type dt){
#line 103
  /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Alarm__startAt(t0, dt);
#line 103
}
#line 103
# 58 "/home/tinyos/local/src/tinyos-2x/tos/lib/timer/AlarmToTimerC.nc"
static inline void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__start(uint32_t t0, uint32_t dt, bool oneshot)
{
  /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__m_dt[sim_node()] = dt;
  /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__m_oneshot[sim_node()] = oneshot;
  /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__startAt(t0, dt);
}










static inline void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__fired__runTask(void )
{
  if (/*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__m_oneshot[sim_node()] == FALSE) {
    /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__start(/*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__getAlarm(), /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__m_dt[sim_node()], FALSE);
    }
#line 78
  /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Timer__fired();
}

#line 93
static inline void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Timer__startOneShotAt(uint32_t t0, uint32_t dt)
{
#line 94
  /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__start(t0, dt, TRUE);
}

# 129 "/home/tinyos/local/src/tinyos-2x/tos/lib/timer/Timer.nc"
inline static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__startOneShotAt(uint32_t t0, uint32_t dt){
#line 129
  /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Timer__startOneShotAt(t0, dt);
#line 129
}
#line 129
# 204 "/home/tinyos/local/src/tinyos-2x/tos/chips/atm128/timer/Atm128AlarmAsyncP.nc"
static inline void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Alarm__stop(void )
#line 204
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 205
    /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__set[sim_node()] = FALSE;
#line 205
    __nesc_atomic_end(__nesc_atomic); }
}

# 73 "/home/tinyos/local/src/tinyos-2x/tos/lib/timer/Alarm.nc"
inline static void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__stop(void ){
#line 73
  /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Alarm__stop();
#line 73
}
#line 73
# 71 "/home/tinyos/local/src/tinyos-2x/tos/lib/timer/AlarmToTimerC.nc"
static inline void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Timer__stop(void )
{
#line 72
  /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__stop();
}

# 78 "/home/tinyos/local/src/tinyos-2x/tos/lib/timer/Timer.nc"
inline static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__stop(void ){
#line 78
  /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Timer__stop();
#line 78
}
#line 78
# 100 "/home/tinyos/local/src/tinyos-2x/tos/lib/timer/VirtualizeTimerC.nc"
static inline void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__updateFromTimer__runTask(void )
{




  uint32_t now = /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__getNow();
  int32_t min_remaining = (1UL << 31) - 1;
  bool min_remaining_isset = FALSE;
  uint16_t num;

  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__stop();

  for (num = 0; num < /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__NUM_TIMERS; num++) 
    {
      /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer_t *timer = &/*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__m_timers[sim_node()][num];

      if (timer->isrunning) 
        {
          uint32_t elapsed = now - timer->t0;
          int32_t remaining = timer->dt - elapsed;

          if (remaining < min_remaining) 
            {
              min_remaining = remaining;
              min_remaining_isset = TRUE;
            }
        }
    }

  if (min_remaining_isset) 
    {
      if (min_remaining <= 0) {
        /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__fireTimers(now);
        }
      else {
#line 135
        /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__startOneShotAt(now, min_remaining);
        }
    }
}

# 169 "/home/tinyos/local/src/tinyos-2x/tos/system/AMQueueImplP.nc"
static inline void /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__errorTask__runTask(void )
#line 169
{
  /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__sendDone(/*AMQueueP.AMQueueImplP*/AMQueueImplP__0__current[sim_node()], /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__queue[sim_node()][/*AMQueueP.AMQueueImplP*/AMQueueImplP__0__current[sim_node()]].msg, FAIL);
}

# 110 "/home/tinyos/local/src/tinyos-2x/tos/interfaces/AMSend.nc"
inline static void /*MyMainAppC.AMSenderC.SenderC.AMQueueEntryP*/AMQueueEntryP__0__AMSend__sendDone(message_t * msg, error_t error){
#line 110
  MyMainC__AMSend__sendDone(msg, error);
#line 110
}
#line 110
# 65 "/home/tinyos/local/src/tinyos-2x/tos/system/AMQueueEntryP.nc"
static inline void /*MyMainAppC.AMSenderC.SenderC.AMQueueEntryP*/AMQueueEntryP__0__Send__sendDone(message_t *m, error_t err)
#line 65
{
  /*MyMainAppC.AMSenderC.SenderC.AMQueueEntryP*/AMQueueEntryP__0__AMSend__sendDone(m, err);
}

# 215 "/home/tinyos/local/src/tinyos-2x/tos/system/AMQueueImplP.nc"
static inline void /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__Send__default__sendDone(uint8_t id, message_t *msg, error_t err)
#line 215
{
}

# 100 "/home/tinyos/local/src/tinyos-2x/tos/interfaces/Send.nc"
inline static void /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__Send__sendDone(uint8_t arg_0x7f65b537c318, message_t * msg, error_t error){
#line 100
  switch (arg_0x7f65b537c318) {
#line 100
    case 0U:
#line 100
      /*MyMainAppC.AMSenderC.SenderC.AMQueueEntryP*/AMQueueEntryP__0__Send__sendDone(msg, error);
#line 100
      break;
#line 100
    default:
#line 100
      /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__Send__default__sendDone(arg_0x7f65b537c318, msg, error);
#line 100
      break;
#line 100
    }
#line 100
}
#line 100
# 126 "/home/tinyos/local/src/tinyos-2x/tos/system/AMQueueImplP.nc"
static inline void /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__CancelTask__runTask(void )
#line 126
{
  uint8_t i;
#line 127
  uint8_t j;
#line 127
  uint8_t mask;
#line 127
  uint8_t last;
  message_t *msg;

#line 129
  for (i = 0; i < 1 / 8 + 1; i++) {
      if (/*AMQueueP.AMQueueImplP*/AMQueueImplP__0__cancelMask[sim_node()][i]) {
          for (mask = 1, j = 0; j < 8; j++) {
              if (/*AMQueueP.AMQueueImplP*/AMQueueImplP__0__cancelMask[sim_node()][i] & mask) {
                  last = i * 8 + j;
                  msg = /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__queue[sim_node()][last].msg;
                  /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__queue[sim_node()][last].msg = (void *)0;
                  /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__cancelMask[sim_node()][i] &= ~mask;
                  /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__Send__sendDone(last, msg, ECANCEL);
                }
              mask <<= 1;
            }
        }
    }
}

# 221 "/home/tinyos/local/src/tinyos-2x/tos/lib/tossim/SimSchedulerBasicP.nc"
static inline void SimSchedulerBasicP__TaskBasic__default__runTask(uint8_t id)
{
}

# 75 "/home/tinyos/local/src/tinyos-2x/tos/interfaces/TaskBasic.nc"
inline static void SimSchedulerBasicP__TaskBasic__runTask(uint8_t arg_0x7f65b669a108){
#line 75
  switch (arg_0x7f65b669a108) {
#line 75
    case TossimPacketModelC__startDoneTask:
#line 75
      TossimPacketModelC__startDoneTask__runTask();
#line 75
      break;
#line 75
    case TossimPacketModelC__stopDoneTask:
#line 75
      TossimPacketModelC__stopDoneTask__runTask();
#line 75
      break;
#line 75
    case TossimPacketModelC__sendDoneTask:
#line 75
      TossimPacketModelC__sendDoneTask__runTask();
#line 75
      break;
#line 75
    case CpmModelC__read_rssi_task:
#line 75
      CpmModelC__read_rssi_task__runTask();
#line 75
      break;
#line 75
    case /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__fired:
#line 75
      /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__fired__runTask();
#line 75
      break;
#line 75
    case /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__updateFromTimer:
#line 75
      /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__updateFromTimer__runTask();
#line 75
      break;
#line 75
    case /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__CancelTask:
#line 75
      /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__CancelTask__runTask();
#line 75
      break;
#line 75
    case /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__errorTask:
#line 75
      /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__errorTask__runTask();
#line 75
      break;
#line 75
    default:
#line 75
      SimSchedulerBasicP__TaskBasic__default__runTask(arg_0x7f65b669a108);
#line 75
      break;
#line 75
    }
#line 75
}
#line 75
# 140 "/home/tinyos/local/src/tinyos-2x/tos/lib/tossim/TossimPacketModelC.nc"
static inline error_t TossimPacketModelC__PacketAcknowledgements__wasAcked(message_t *ack)
#line 140
{
  tossim_metadata_t *meta = TossimPacketModelC__getMetadata(ack);

#line 142
  return __nesc_ntoh_uint8(meta->ack.nxdata);
}

# 85 "/home/tinyos/local/src/tinyos-2x/tos/interfaces/PacketAcknowledgements.nc"
inline static bool MyMainC__PacketAcknowledgements__wasAcked(message_t * msg){
#line 85
  unsigned char __nesc_result;
#line 85

#line 85
  __nesc_result = TossimPacketModelC__PacketAcknowledgements__wasAcked(msg);
#line 85

#line 85
  return __nesc_result;
#line 85
}
#line 85
#line 59
inline static error_t MyMainC__PacketAcknowledgements__requestAck(message_t * msg){
#line 59
  unsigned char __nesc_result;
#line 59

#line 59
  __nesc_result = TossimPacketModelC__PacketAcknowledgements__requestAck(msg);
#line 59

#line 59
  return __nesc_result;
#line 59
}
#line 59
# 80 "/home/tinyos/local/src/tinyos-2x/tos/interfaces/AMSend.nc"
inline static error_t MyMainC__AMSend__send(am_addr_t addr, message_t * msg, uint8_t len){
#line 80
  unsigned char __nesc_result;
#line 80

#line 80
  __nesc_result = /*MyMainAppC.AMSenderC.SenderC.AMQueueEntryP*/AMQueueEntryP__0__AMSend__send(addr, msg, len);
#line 80

#line 80
  return __nesc_result;
#line 80
}
#line 80
# 65 "/home/tinyos/local/src/tinyos-2x/tos/lib/tossim/TossimActiveMessageC.nc"
static inline tossim_header_t *TossimActiveMessageC__getHeader(message_t *amsg)
#line 65
{
  return (tossim_header_t *)(amsg->data - sizeof(tossim_header_t ));
}

#line 145
static inline void TossimActiveMessageC__AMPacket__setDestination(message_t *amsg, am_addr_t addr)
#line 145
{
  tossim_header_t *header = TossimActiveMessageC__getHeader(amsg);

#line 147
  __nesc_hton_uint16(header->dest.nxdata, addr);
}

# 103 "/home/tinyos/local/src/tinyos-2x/tos/interfaces/AMPacket.nc"
inline static void /*MyMainAppC.AMSenderC.SenderC.AMQueueEntryP*/AMQueueEntryP__0__AMPacket__setDestination(message_t * amsg, am_addr_t addr){
#line 103
  TossimActiveMessageC__AMPacket__setDestination(amsg, addr);
#line 103
}
#line 103
# 170 "/home/tinyos/local/src/tinyos-2x/tos/lib/tossim/TossimActiveMessageC.nc"
static inline void TossimActiveMessageC__AMPacket__setType(message_t *amsg, am_id_t t)
#line 170
{
  tossim_header_t *header = TossimActiveMessageC__getHeader(amsg);

#line 172
  __nesc_hton_uint8(header->type.nxdata, t);
}

# 162 "/home/tinyos/local/src/tinyos-2x/tos/interfaces/AMPacket.nc"
inline static void /*MyMainAppC.AMSenderC.SenderC.AMQueueEntryP*/AMQueueEntryP__0__AMPacket__setType(message_t * amsg, am_id_t t){
#line 162
  TossimActiveMessageC__AMPacket__setType(amsg, t);
#line 162
}
#line 162
# 80 "/home/tinyos/local/src/tinyos-2x/tos/interfaces/AMSend.nc"
inline static error_t /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__AMSend__send(am_id_t arg_0x7f65b537b488, am_addr_t addr, message_t * msg, uint8_t len){
#line 80
  unsigned char __nesc_result;
#line 80

#line 80
  __nesc_result = TossimActiveMessageC__AMSend__send(arg_0x7f65b537b488, addr, msg, len);
#line 80

#line 80
  return __nesc_result;
#line 80
}
#line 80
# 78 "/home/tinyos/local/src/tinyos-2x/tos/interfaces/AMPacket.nc"
inline static am_addr_t /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__AMPacket__destination(message_t * amsg){
#line 78
  unsigned short __nesc_result;
#line 78

#line 78
  __nesc_result = TossimActiveMessageC__AMPacket__destination(amsg);
#line 78

#line 78
  return __nesc_result;
#line 78
}
#line 78
#line 147
inline static am_id_t /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__AMPacket__type(message_t * amsg){
#line 147
  unsigned char __nesc_result;
#line 147

#line 147
  __nesc_result = TossimActiveMessageC__AMPacket__type(amsg);
#line 147

#line 147
  return __nesc_result;
#line 147
}
#line 147
# 181 "/home/tinyos/local/src/tinyos-2x/tos/lib/tossim/TossimActiveMessageC.nc"
static inline void TossimActiveMessageC__Packet__setPayloadLength(message_t *msg, uint8_t len)
#line 181
{
  __nesc_hton_uint8(TossimActiveMessageC__getHeader(msg)->length.nxdata, len);
}

# 94 "/home/tinyos/local/src/tinyos-2x/tos/interfaces/Packet.nc"
inline static void /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__Packet__setPayloadLength(message_t * msg, uint8_t len){
#line 94
  TossimActiveMessageC__Packet__setPayloadLength(msg, len);
#line 94
}
#line 94
# 90 "/home/tinyos/local/src/tinyos-2x/tos/system/AMQueueImplP.nc"
static inline error_t /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__Send__send(uint8_t clientId, message_t *msg, 
uint8_t len)
#line 91
{
  if (clientId >= 1) {
      return FAIL;
    }
  if (/*AMQueueP.AMQueueImplP*/AMQueueImplP__0__queue[sim_node()][clientId].msg != (void *)0) {
      return EBUSY;
    }
  sim_log_debug(149U, "AMQueue", "AMQueue: request to send from %hhu (%p): passed checks\n", clientId, msg);

  /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__queue[sim_node()][clientId].msg = msg;
  /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__Packet__setPayloadLength(msg, len);

  if (/*AMQueueP.AMQueueImplP*/AMQueueImplP__0__current[sim_node()] >= 1) {
      error_t err;
      am_id_t amId = /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__AMPacket__type(msg);
      am_addr_t dest = /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__AMPacket__destination(msg);

      sim_log_debug(150U, "AMQueue", "%s: request to send from %hhu (%p): queue empty\n", __FUNCTION__, clientId, msg);
      /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__current[sim_node()] = clientId;

      err = /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__AMSend__send(amId, dest, msg, len);
      if (err != SUCCESS) {
          sim_log_debug(151U, "AMQueue", "%s: underlying send failed.\n", __FUNCTION__);
          /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__current[sim_node()] = 1;
          /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__queue[sim_node()][clientId].msg = (void *)0;
        }

      return err;
    }
  else {
      sim_log_debug(152U, "AMQueue", "AMQueue: request to send from %hhu (%p): queue not empty\n", clientId, msg);
    }
  return SUCCESS;
}

# 75 "/home/tinyos/local/src/tinyos-2x/tos/interfaces/Send.nc"
inline static error_t /*MyMainAppC.AMSenderC.SenderC.AMQueueEntryP*/AMQueueEntryP__0__Send__send(message_t * msg, uint8_t len){
#line 75
  unsigned char __nesc_result;
#line 75

#line 75
  __nesc_result = /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__Send__send(0U, msg, len);
#line 75

#line 75
  return __nesc_result;
#line 75
}
#line 75
# 524 "/home/tinyos/local/src/tinyos-2x/tos/lib/tossim/CpmModelC.nc"
static inline void CpmModelC__free_receive_message(CpmModelC__receive_message_t *msg)
#line 524
{
  free(msg);
}

# 61 "/home/tinyos/local/src/tinyos-2x/tos/lib/tossim/GainRadioModel.nc"
inline static bool CpmModelC__Model__shouldAck(message_t *msg){
#line 61
  unsigned char __nesc_result;
#line 61

#line 61
  __nesc_result = TossimPacketModelC__GainRadioModel__shouldAck(msg);
#line 61

#line 61
  return __nesc_result;
#line 61
}
#line 61
# 85 "/home/tinyos/local/src/tinyos-2x/tos/lib/tossim/TossimPacketModel.nc"
inline static void TossimPacketModelC__Packet__receive(message_t *msg){
#line 85
  TossimActiveMessageC__Model__receive(msg);
#line 85
}
#line 85
# 288 "/home/tinyos/local/src/tinyos-2x/tos/lib/tossim/TossimPacketModelC.nc"
static inline void TossimPacketModelC__GainRadioModel__receive(message_t *msg)
#line 288
{
  if (TossimPacketModelC__running[sim_node()] && !TossimPacketModelC__transmitting[sim_node()]) {
      TossimPacketModelC__Packet__receive(msg);
    }
}

# 60 "/home/tinyos/local/src/tinyos-2x/tos/lib/tossim/GainRadioModel.nc"
inline static void CpmModelC__Model__receive(message_t *msg){
#line 60
  TossimPacketModelC__GainRadioModel__receive(msg);
#line 60
}
#line 60
# 265 "/home/tinyos/local/src/tinyos-2x/tos/lib/tossim/CpmModelC.nc"
static inline bool CpmModelC__checkReceive(CpmModelC__receive_message_t *msg)
#line 265
{
  double noise = CpmModelC__noise_hash_generation();
  CpmModelC__receive_message_t *list = CpmModelC__outstandingReceptionHead[sim_node()];
  int count = 0;

#line 269
  noise = pow(10.0, noise / 10.0);
  while (list != (void *)0) {
      sim_log_debug(81U, "CpmModelC", "checkReceive: outstanding from %d\n", list->source);
      count++;

      if (list->channel != sim_mote_get_radio_channel(sim_node())) {
          list = list->next;
          continue;
        }

      if (list != msg) {
          noise += pow(10.0, list->power / 10.0);
        }
      list = list->next;
    }
  noise = 10.0 * log(noise) / log(10.0);
  sim_log_debug(82U, "CpmModelC", "checkReceive: outstanding count %d noise %lf at %lf\n", count, noise, (double )sim_time() / sim_ticks_per_sec());
  msg->lqi = sim_lqi_generate(msg->power - noise);
  return CpmModelC__shouldReceive(msg->power - noise);
}

#line 321
static inline void CpmModelC__sim_gain_receive_handle(sim_event_t *evt)
#line 321
{
  CpmModelC__receive_message_t *mine = (CpmModelC__receive_message_t *)evt->data;
  CpmModelC__receive_message_t *predecessor = (void *)0;
  CpmModelC__receive_message_t *list = CpmModelC__outstandingReceptionHead[sim_node()];

  sim_log_debug(85U, "CpmModelC", "Handling reception event @ %s.\n", sim_time_string());
  while (list != (void *)0) {
      if (list->next == mine) {
          predecessor = list;
        }
      list = list->next;
    }
  if (predecessor) {
      predecessor->next = mine->next;
    }
  else {
#line 336
    if (mine == CpmModelC__outstandingReceptionHead[sim_node()]) {
        CpmModelC__outstandingReceptionHead[sim_node()] = mine->next;
      }
    else {
        sim_log_error(86U, "CpmModelC", "Incoming packet list structure is corrupted: entry is not the head and no entry points to it.\n");
      }
    }
#line 342
  sim_log_debug(87U, "CpmModelC,SNRLoss", "Packet from %i to %i\n", (int )mine->source, (int )sim_node());
  if (!CpmModelC__checkReceive(mine)) {
      sim_log_debug(88U, "CpmModelC,SNRLoss", " - lost packet from %i as SNR was too low.\n", (int )mine->source);
      mine->lost = 1;
    }

  if (mine->channel != sim_mote_get_radio_channel(sim_node())) {
      CpmModelC__free_receive_message(mine);
      CpmModelC__receiving[sim_node()] = 0;
      return;
    }
  if (! mine->lost) {



      tossim_metadata_t *meta = (tossim_metadata_t *)& mine->msg->metadata;

#line 358
      __nesc_hton_int8(meta->strength.nxdata, mine->strength);
      __nesc_hton_uint8(meta->lqi.nxdata, mine->lqi);

      sim_log_debug(89U, "CpmModelC,SNRLoss", "-signaling reception\n");
      CpmModelC__Model__receive(mine->msg);
      if (mine->ack) {
          sim_log_debug(90U, "CpmModelC", "yes acknowledgment requested, \n");
        }
      else {
          sim_log_debug(91U, "CpmModelC", "no acknowledgment requested.\n");
        }

      if (mine->ack && CpmModelC__Model__shouldAck(mine->msg)) {
          sim_log_debug(92U, "CpmModelC", " scheduling ack.\n");
          CpmModelC__sim_gain_schedule_ack(mine->source, sim_time() + 1, mine);
        }
      else {
          sim_log_debug(93U, "CpmModelC", " should not ack.\n");
          CpmModelC__free_receive_message(mine);
        }

      CpmModelC__receiving[sim_node()] = 0;
    }
  else {
      if (RandomUniform() < 0.001) {
          sim_log_debug(94U, "CpmModelC,SNRLoss", "Packet was technically lost, but TOSSIM introduces an ack false positive rate.\n");
          if (mine->ack && CpmModelC__Model__shouldAck(mine->msg)) {
              sim_log_debug_clear(95U, "CpmModelC", " scheduling ack.\n");
              CpmModelC__sim_gain_schedule_ack(mine->source, sim_time() + 1, mine);
            }
          else {
              CpmModelC__free_receive_message(mine);
            }
        }
      else {
          CpmModelC__free_receive_message(mine);
        }
      CpmModelC__receiving[sim_node()] = 0;
      sim_log_debug_clear(96U, "CpmModelC,SNRLoss", "  -packet was lost.\n");
    }
}

#line 508
static inline sim_event_t *CpmModelC__allocate_receive_event(sim_time_t endTime, CpmModelC__receive_message_t *msg)
#line 508
{
  sim_event_t *evt = (sim_event_t *)malloc(sizeof(sim_event_t ));

#line 510
  evt->mote = sim_node();
  evt->time = endTime;
  evt->handle = CpmModelC__sim_gain_receive_handle;
  evt->cleanup = sim_queue_cleanup_event;
  evt->cancelled = 0;
  evt->force = 1;
  evt->data = msg;
  return evt;
}

static inline CpmModelC__receive_message_t *CpmModelC__allocate_receive_message(void )
#line 520
{
  return (CpmModelC__receive_message_t *)malloc(sizeof(CpmModelC__receive_message_t ));
}

#line 402
static inline void CpmModelC__enqueue_receive_event(int source, sim_time_t endTime, message_t *msg, bool receive, double power, double reversePower)
#line 402
{
  sim_event_t *evt;
  CpmModelC__receive_message_t *list;
  CpmModelC__receive_message_t *rcv = CpmModelC__allocate_receive_message();
  double noiseStr = CpmModelC__packetNoise(rcv);

#line 407
  rcv->source = source;
  rcv->start = sim_time();
  rcv->end = endTime;
  rcv->power = power;
  rcv->reversePower = reversePower;




  rcv->strength = (int8_t )floor(10.0 * log(pow(10.0, power / 10.0) + pow(10.0, noiseStr / 10.0)) / log(10.0));
  rcv->msg = msg;
  rcv->lost = 0;
  rcv->ack = receive;
  rcv->channel = sim_mote_get_radio_channel(source);





  if (!sim_mote_is_on(sim_node())) {
      sim_log_debug(97U, "CpmModelC", "Lost packet from %i due to %i being off\n", source, sim_node());
      rcv->lost = 1;
    }
  else {
#line 430
    if (!CpmModelC__shouldReceive(power - noiseStr)) {
        sim_log_debug(98U, "CpmModelC,SNRLoss", "Lost packet from %i to %i due to SNR being too low (%i)\n", source, sim_node(), (int )(power - noiseStr));
        rcv->lost = 1;
      }
    else {
#line 434
      if (sim_mote_get_radio_channel(sim_node()) != sim_mote_get_radio_channel(source)) {
          rcv->lost = 1;
        }
      else {
#line 437
        if (CpmModelC__receiving[sim_node()]) {
            sim_log_debug(99U, "CpmModelC,SNRLoss", "Lost packet from %i due to %i being mid-reception\n", source, sim_node());
            rcv->lost = 1;
          }
        else {
#line 441
          if (CpmModelC__transmitting[sim_node()] && rcv->start < CpmModelC__transmissionEndTime[sim_node()] && CpmModelC__transmissionEndTime[sim_node()] <= rcv->end) {
              sim_log_debug(100U, "CpmModelC,SNRLoss", "Lost packet from %i due to %i being mid-transmission, transmissionEndTime %llu\n", source, sim_node(), CpmModelC__transmissionEndTime[sim_node()]);
              rcv->lost = 1;
            }
          else {
              CpmModelC__receiving[sim_node()] = 1;
            }
          }
        }
      }
    }
#line 449
  list = CpmModelC__outstandingReceptionHead[sim_node()];
  while (list != (void *)0) {
      if (list->channel != sim_mote_get_radio_channel(source)) {
          list = list->next;
          continue;
        }
      if (!CpmModelC__shouldReceive(list->power - rcv->power)) {
          sim_log_debug(101U, "Gain,SNRLoss", "Going to lose packet from %i with signal %lf as am receiving a packet from %i with signal %lf\n", list->source, list->power, source, rcv->power);
          list->lost = 1;
        }
      list = list->next;
    }

  rcv->next = CpmModelC__outstandingReceptionHead[sim_node()];
  CpmModelC__outstandingReceptionHead[sim_node()] = rcv;
  evt = CpmModelC__allocate_receive_event(endTime, rcv);
  sim_queue_insert(evt);
}


static inline void CpmModelC__sim_gain_put(int dest, message_t *msg, sim_time_t endTime, bool receive, double power, double reversePower)
#line 469
{
  int prevNode = sim_node();

#line 471
  sim_log_debug(102U, "CpmModelC", "Enqueing reception event for %i at %llu with power %lf.\n", dest, endTime, power);
  sim_set_node(dest);
  CpmModelC__enqueue_receive_event(prevNode, endTime, msg, receive, power, reversePower);
  sim_set_node(prevNode);
}

static inline void CpmModelC__Model__putOnAirTo(int dest, message_t *msg, bool ack, sim_time_t endTime, double power, double reversePower)
#line 477
{
  CpmModelC__receive_message_t *list;
  gain_entry_t *neighborEntry = sim_gain_first(sim_node());

#line 480
  CpmModelC__requestAck[sim_node()] = ack;
  CpmModelC__outgoing[sim_node()] = msg;
  CpmModelC__transmissionEndTime[sim_node()] = endTime;
  sim_log_debug(103U, "CpmModelC", "Node %i transmitting to %i, finishes at %llu.\n", sim_node(), dest, endTime);

  while (neighborEntry != (void *)0) {
      int other = neighborEntry->mote;

#line 487
      CpmModelC__sim_gain_put(other, msg, endTime, ack, power + sim_gain_value(sim_node(), other), reversePower + sim_gain_value(other, sim_node()));
      neighborEntry = sim_gain_next(neighborEntry);
    }

  list = CpmModelC__outstandingReceptionHead[sim_node()];
  while (list != (void *)0) {
      list->lost = 1;
      sim_log_debug(104U, "CpmModelC,SNRLoss", "Lost packet from %i because %i has outstanding reception, startTime %llu endTime %llu\n", list->source, sim_node(), list->start, list->end);
      list = list->next;
    }
}

# 48 "/home/tinyos/local/src/tinyos-2x/tos/lib/tossim/GainRadioModel.nc"
inline static void TossimPacketModelC__GainRadioModel__putOnAirTo(int dest, message_t *msg, bool ack, sim_time_t endTime, double gain, double reverseGain){
#line 48
  CpmModelC__Model__putOnAirTo(dest, msg, ack, endTime, gain, reverseGain);
#line 48
}
#line 48
# 280 "/home/tinyos/local/src/tinyos-2x/tos/lib/tossim/TossimPacketModelC.nc"
static inline void TossimPacketModelC__send_transmit_done(sim_event_t *evt)
#line 280
{
  message_t *rval = TossimPacketModelC__sending[sim_node()];

#line 282
  TossimPacketModelC__sending[sim_node()] = (void *)0;
  TossimPacketModelC__transmitting[sim_node()] = FALSE;
  sim_log_debug(73U, "TossimPacketModelC", "PACKET: Signaling send done at %llu.\n", sim_time());
  TossimPacketModelC__Packet__sendDone(rval, TossimPacketModelC__running[sim_node()] ? SUCCESS : EOFF);
}

#line 253
static inline void TossimPacketModelC__send_transmit(sim_event_t *evt)
#line 253
{
  sim_time_t duration;
  tossim_metadata_t *metadata = TossimPacketModelC__getMetadata(TossimPacketModelC__sending[sim_node()]);

  duration = 8 * TossimPacketModelC__sendingLength[sim_node()];
  duration /= sim_csma_bits_per_symbol();
  duration += sim_csma_preamble_length();

  if (__nesc_ntoh_uint8(metadata->ack.nxdata)) {
      duration += sim_csma_ack_time();
    }
  duration *= sim_ticks_per_sec() / sim_csma_symbols_per_sec();

  evt->time += duration;
  evt->handle = TossimPacketModelC__send_transmit_done;

  sim_log_debug(71U, "TossimPacketModelC", "PACKET: Broadcasting packet to everyone.\n");
  TossimPacketModelC__GainRadioModel__putOnAirTo(TossimPacketModelC__destNode[sim_node()], TossimPacketModelC__sending[sim_node()], __nesc_ntoh_uint8(metadata->ack.nxdata), evt->time, 0.0, 0.0);
  __nesc_hton_uint8(metadata->ack.nxdata, 0);

  evt->time += sim_csma_rxtx_delay() * (sim_ticks_per_sec() / sim_csma_symbols_per_sec());

  sim_log_debug(72U, "TossimPacketModelC", "PACKET: Send done at %llu.\n", evt->time);

  sim_queue_insert(evt);
}

# 500 "/home/tinyos/local/src/tinyos-2x/tos/lib/tossim/CpmModelC.nc"
static inline void CpmModelC__Model__setPendingTransmission(void )
#line 500
{
  CpmModelC__transmitting[sim_node()] = TRUE;
  sim_log_debug(105U, "CpmModelC", "setPendingTransmission: transmitting %i @ %s\n", CpmModelC__transmitting[sim_node()], sim_time_string());
}

# 57 "/home/tinyos/local/src/tinyos-2x/tos/lib/tossim/GainRadioModel.nc"
inline static void TossimPacketModelC__GainRadioModel__setPendingTransmission(void ){
#line 57
  CpmModelC__Model__setPendingTransmission();
#line 57
}
#line 57
# 216 "/home/tinyos/local/src/tinyos-2x/tos/lib/tossim/CpmModelC.nc"
static inline bool CpmModelC__Model__clearChannel(void )
#line 216
{
  sim_log_debug(79U, "CpmModelC", "Checking clear channel @ %s: %f <= %f \n", sim_time_string(), (double )CpmModelC__packetNoise((void *)0), CpmModelC__clearThreshold[sim_node()]);
  return CpmModelC__packetNoise((void *)0) < CpmModelC__clearThreshold[sim_node()];
}

# 56 "/home/tinyos/local/src/tinyos-2x/tos/lib/tossim/GainRadioModel.nc"
inline static bool TossimPacketModelC__GainRadioModel__clearChannel(void ){
#line 56
  unsigned char __nesc_result;
#line 56

#line 56
  __nesc_result = CpmModelC__Model__clearChannel();
#line 56

#line 56
  return __nesc_result;
#line 56
}
#line 56
# 211 "/home/tinyos/local/src/tinyos-2x/tos/lib/tossim/TossimPacketModelC.nc"
static inline void TossimPacketModelC__send_backoff(sim_event_t *evt)
#line 211
{
  TossimPacketModelC__backoffCount[sim_node()]++;
  if (TossimPacketModelC__GainRadioModel__clearChannel()) {
      TossimPacketModelC__neededFreeSamples[sim_node()]--;
    }
  else {
      TossimPacketModelC__neededFreeSamples[sim_node()] = sim_csma_min_free_samples();
    }
  if (TossimPacketModelC__neededFreeSamples[sim_node()] == 0) {
      sim_time_t delay;

#line 221
      delay = sim_csma_rxtx_delay();
      delay *= sim_ticks_per_sec() / sim_csma_symbols_per_sec();
      evt->time += delay;
      TossimPacketModelC__transmitting[sim_node()] = TRUE;
      TossimPacketModelC__GainRadioModel__setPendingTransmission();
      evt->handle = TossimPacketModelC__send_transmit;
      sim_queue_insert(evt);
    }
  else {
#line 229
    if (sim_csma_max_iterations() == 0 || 
    TossimPacketModelC__backoffCount[sim_node()] <= sim_csma_max_iterations()) {
        sim_time_t backoff = sim_random();
        sim_time_t modulo = sim_csma_high() - sim_csma_low();

#line 233
        modulo *= pow(sim_csma_exponent_base(), TossimPacketModelC__backoffCount[sim_node()]);
        backoff %= modulo;

        backoff += sim_csma_init_low();
        backoff *= sim_ticks_per_sec() / sim_csma_symbols_per_sec();
        evt->time += backoff;
        sim_queue_insert(evt);
      }
    else {
        message_t *rval = TossimPacketModelC__sending[sim_node()];

#line 243
        TossimPacketModelC__sending[sim_node()] = (void *)0;
        sim_log_debug(70U, "TossimPacketModelC", "PACKET: Failed to send packet due to busy channel.\n");
        TossimPacketModelC__Packet__sendDone(rval, EBUSY);
      }
    }
}

#line 187
static inline void TossimPacketModelC__start_csma(void )
#line 187
{
  sim_time_t first_sample;




  sim_time_t backoff = sim_random();

#line 194
  backoff %= sim_csma_init_high() - sim_csma_init_low();
  backoff += sim_csma_init_low();
  backoff *= sim_ticks_per_sec() / sim_csma_symbols_per_sec();
  sim_log_debug(69U, "TossimPacketModelC", "Starting CMSA with %lli.\n", backoff);
  first_sample = sim_time() + backoff;

  TossimPacketModelC__sendEvent[sim_node()].mote = sim_node();
  TossimPacketModelC__sendEvent[sim_node()].time = first_sample;
  TossimPacketModelC__sendEvent[sim_node()].force = 0;
  TossimPacketModelC__sendEvent[sim_node()].cancelled = 0;

  TossimPacketModelC__sendEvent[sim_node()].handle = TossimPacketModelC__send_backoff;
  TossimPacketModelC__sendEvent[sim_node()].cleanup = sim_queue_cleanup_none;
  sim_queue_insert(&TossimPacketModelC__sendEvent[sim_node()]);
}

#line 161
static inline error_t TossimPacketModelC__Packet__send(int dest, message_t *msg, uint8_t len)
#line 161
{
  if (!TossimPacketModelC__initialized[sim_node()]) {
      sim_log_error(67U, "TossimPacketModelC", "TossimPacketModelC: Send.send() called, but not initialized!\n");
      return EOFF;
    }
  if (!TossimPacketModelC__running[sim_node()]) {
      sim_log_error(68U, "TossimPacketModelC", "TossimPacketModelC: Send.send() called, but not running!\n");
      return EOFF;
    }

  if (TossimPacketModelC__sending[sim_node()] != (void *)0) {
      return EBUSY;
    }
  TossimPacketModelC__sendingLength[sim_node()] = len;
  TossimPacketModelC__sending[sim_node()] = msg;
  TossimPacketModelC__destNode[sim_node()] = dest;
  TossimPacketModelC__backoffCount[sim_node()] = 0;
  TossimPacketModelC__neededFreeSamples[sim_node()] = sim_csma_min_free_samples();
  TossimPacketModelC__start_csma();
  return SUCCESS;
}

# 57 "/home/tinyos/local/src/tinyos-2x/tos/lib/tossim/TossimPacketModel.nc"
inline static error_t TossimActiveMessageC__Model__send(int node, message_t *msg, uint8_t len){
#line 57
  unsigned char __nesc_result;
#line 57

#line 57
  __nesc_result = TossimPacketModelC__Packet__send(node, msg, len);
#line 57

#line 57
  return __nesc_result;
#line 57
}
#line 57
# 95 "/home/tinyos/local/src/tinyos-2x/tos/lib/tossim/CpmModelC.nc"
static inline double CpmModelC__timeInMs(void )
#line 95
{
  sim_time_t ftime = sim_time();
  int hours;
#line 97
  int minutes;
#line 97
  int seconds;
  sim_time_t secondBillionths;
  int temp_time;
  double ms_time;

  secondBillionths = ftime % sim_ticks_per_sec();
  if (sim_ticks_per_sec() > (sim_time_t )1000000000) {
      secondBillionths /= sim_ticks_per_sec() / (sim_time_t )1000000000;
    }
  else {
      secondBillionths *= (sim_time_t )1000000000 / sim_ticks_per_sec();
    }
  temp_time = (int )(secondBillionths / 10000);

  if (temp_time % 10 >= 5) {
      temp_time += 10 - temp_time % 10;
    }
  else {
      temp_time -= temp_time % 10;
    }
  ms_time = (float )(temp_time / 100.0);

  seconds = (int )(ftime / sim_ticks_per_sec());
  minutes = seconds / 60;
  hours = minutes / 60;
  seconds %= 60;
  minutes %= 60;

  ms_time += (hours * 3600 + minutes * 60 + seconds) * 1000;

  return ms_time;
}

# 74 "/home/tinyos/local/src/tinyos-2x/tos/lib/tossim/SimMoteP.nc"
static inline uint8_t SimMoteP__SimMote__getRadioChannel(void )
{
  if (SimMoteP__radioChannel[sim_node()] < 11 || SimMoteP__radioChannel[sim_node()] > 26) {
      return 26;
    }

  return SimMoteP__radioChannel[sim_node()];
}

# 67 "/home/tinyos/local/src/tinyos-2x/tos/interfaces/TaskBasic.nc"
inline static error_t /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__errorTask__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SimSchedulerBasicP__TaskBasic__postTask(/*AMQueueP.AMQueueImplP*/AMQueueImplP__0__errorTask);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 177 "/home/tinyos/local/src/tinyos-2x/tos/lib/tossim/TossimActiveMessageC.nc"
static inline uint8_t TossimActiveMessageC__Packet__payloadLength(message_t *msg)
#line 177
{
  return __nesc_ntoh_uint8(TossimActiveMessageC__getHeader(msg)->length.nxdata);
}

# 78 "/home/tinyos/local/src/tinyos-2x/tos/interfaces/Packet.nc"
inline static uint8_t /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__Packet__payloadLength(message_t * msg){
#line 78
  unsigned char __nesc_result;
#line 78

#line 78
  __nesc_result = TossimActiveMessageC__Packet__payloadLength(msg);
#line 78

#line 78
  return __nesc_result;
#line 78
}
#line 78
# 65 "/home/tinyos/local/src/tinyos-2x/tos/system/AMQueueImplP.nc"
static inline void /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__nextPacket(void )
#line 65
{
  uint8_t i;

#line 67
  /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__current[sim_node()] = (/*AMQueueP.AMQueueImplP*/AMQueueImplP__0__current[sim_node()] + 1) % 1;
  for (i = 0; i < 1; i++) {
      if (/*AMQueueP.AMQueueImplP*/AMQueueImplP__0__queue[sim_node()][/*AMQueueP.AMQueueImplP*/AMQueueImplP__0__current[sim_node()]].msg == (void *)0 || 
      /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__cancelMask[sim_node()][/*AMQueueP.AMQueueImplP*/AMQueueImplP__0__current[sim_node()] / 8] & (1 << /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__current[sim_node()] % 8)) 
        {
          /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__current[sim_node()] = (/*AMQueueP.AMQueueImplP*/AMQueueImplP__0__current[sim_node()] + 1) % 1;
        }
      else {
          break;
        }
    }
  if (i >= 1) {
#line 78
    /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__current[sim_node()] = 1;
    }
}

#line 174
static inline void /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__tryToSend(void )
#line 174
{
  /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__nextPacket();
  if (/*AMQueueP.AMQueueImplP*/AMQueueImplP__0__current[sim_node()] < 1) {
      error_t nextErr;
      message_t *nextMsg = /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__queue[sim_node()][/*AMQueueP.AMQueueImplP*/AMQueueImplP__0__current[sim_node()]].msg;
      am_id_t nextId = /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__AMPacket__type(nextMsg);
      am_addr_t nextDest = /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__AMPacket__destination(nextMsg);
      uint8_t len = /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__Packet__payloadLength(nextMsg);

#line 182
      nextErr = /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__AMSend__send(nextId, nextDest, nextMsg, len);
      if (nextErr != SUCCESS) {
          /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__errorTask__postTask();
        }
    }
}

# 235 "/home/tinyos/local/src/tinyos-2x/tos/lib/tossim/CpmModelC.nc"
static inline double CpmModelC__prr_estimate_from_snr(double SNR)
#line 235
{



  double beta1 = 0.9794;
  double beta2 = 2.3851;
  double X = SNR - beta2;
  double PSE = 0.5 * erfc(beta1 * X / sqrt(2));
  double prr_hat = pow(1 - PSE, 23 * 2);

#line 244
  sim_log_debug(80U, "CpmModelC,SNR", "SNR is %lf, PRR is %lf\n", SNR, prr_hat);
  if (prr_hat > 1) {
    prr_hat = 1.1;
    }
  else {
#line 247
    if (prr_hat < 0) {
      prr_hat = -0.1;
      }
    }
#line 250
  return prr_hat;
}

# 127 "/home/tinyos/local/src/tinyos-2x/tos/lib/tossim/TossimActiveMessageC.nc"
static inline bool TossimActiveMessageC__Model__shouldAck(message_t *msg)
#line 127
{
  tossim_header_t *header = TossimActiveMessageC__getHeader(msg);

#line 129
  if (__nesc_ntoh_uint16(header->dest.nxdata) == TossimActiveMessageC__amAddress()) {
      sim_log_debug(60U, "Acks", "Received packet addressed to me so ack it\n");
      return TRUE;
    }
  return FALSE;
}

# 87 "/home/tinyos/local/src/tinyos-2x/tos/lib/tossim/TossimPacketModel.nc"
inline static bool TossimPacketModelC__Packet__shouldAck(message_t *msg){
#line 87
  unsigned char __nesc_result;
#line 87

#line 87
  __nesc_result = TossimActiveMessageC__Model__shouldAck(msg);
#line 87

#line 87
  return __nesc_result;
#line 87
}
#line 87
# 296 "/home/tinyos/local/src/tinyos-2x/tos/lib/tossim/TossimPacketModelC.nc"
static inline void TossimPacketModelC__GainRadioModel__acked(message_t *msg)
#line 296
{
  if (TossimPacketModelC__running[sim_node()]) {
      tossim_metadata_t *metadata = TossimPacketModelC__getMetadata(TossimPacketModelC__sending[sim_node()]);

#line 299
      __nesc_hton_uint8(metadata->ack.nxdata, 1);
      if (msg != TossimPacketModelC__sending[sim_node()]) {
          TossimPacketModelC__error[sim_node()] = 1;
          sim_log_debug(74U, "TossimPacketModelC", "Requested ack for 0x%x, but outgoing packet is 0x%x.\n", msg, TossimPacketModelC__sending[sim_node()]);
        }
    }
}

# 59 "/home/tinyos/local/src/tinyos-2x/tos/lib/tossim/GainRadioModel.nc"
inline static void CpmModelC__Model__acked(message_t *msg){
#line 59
  TossimPacketModelC__GainRadioModel__acked(msg);
#line 59
}
#line 59
# 156 "/home/tinyos/local/src/tinyos-2x/tos/lib/tossim/CpmModelC.nc"
static inline double CpmModelC__arr_estimate_from_snr(double SNR)
#line 156
{
  double beta1 = 0.9794;
  double beta2 = 2.3851;
  double X = SNR - beta2;
  double PSE = 0.5 * erfc(beta1 * X / sqrt(2));
  double prr_hat = pow(1 - PSE, 23 * 2);

#line 162
  sim_log_debug(77U, "CpmModelC,SNRLoss", "SNR is %lf, ARR is %lf\n", SNR, prr_hat);
  if (prr_hat > 1) {
    prr_hat = 1.1;
    }
  else {
#line 165
    if (prr_hat < 0) {
      prr_hat = -0.1;
      }
    }
#line 168
  return prr_hat;
}

static inline int CpmModelC__shouldAckReceive(double snr)
#line 171
{
  double prr = CpmModelC__arr_estimate_from_snr(snr);
  double coin = RandomUniform();

#line 174
  if (prr >= 0 && prr <= 1) {
      if (coin < prr) {
        prr = 1.0;
        }
      else {
#line 178
        prr = 0.0;
        }
    }
#line 180
  return (int )prr;
}

static inline void CpmModelC__sim_gain_ack_handle(sim_event_t *evt)
#line 183
{






  if (
#line 189
  CpmModelC__requestAck[sim_node()] && 
  CpmModelC__outgoing[sim_node()] != (void *)0 && 
  sim_mote_is_on(sim_node())) {
      CpmModelC__receive_message_t *rcv = (CpmModelC__receive_message_t *)evt->data;
      double power = rcv->reversePower;
      double noise = CpmModelC__packetNoise(rcv);
      double snr = power - noise;

#line 196
      if (CpmModelC__shouldAckReceive(snr)) {
          CpmModelC__Model__acked(CpmModelC__outgoing[sim_node()]);
        }
    }
  CpmModelC__free_receive_message((CpmModelC__receive_message_t *)evt->data);
}

# 334 "/home/tinyos/local/compilers/lib/ncc/nesc_nx.h"
static __inline  int16_t __nesc_hton_int16(void * target, int16_t value)
#line 334
{
#line 334
  __nesc_hton_uint16(target, value);
#line 334
  return value;
}

# 189 "/home/tinyos/local/src/tinyos-2x/tos/lib/tossim/TossimActiveMessageC.nc"
static inline void *TossimActiveMessageC__Packet__getPayload(message_t *msg, uint8_t len)
#line 189
{
  if (len <= 70) {
      return msg->data;
    }
  else {
      return (void *)0;
    }
}

# 126 "/home/tinyos/local/src/tinyos-2x/tos/interfaces/Packet.nc"
inline static void * MyMainC__Packet__getPayload(message_t * msg, uint8_t len){
#line 126
  void *__nesc_result;
#line 126

#line 126
  __nesc_result = TossimActiveMessageC__Packet__getPayload(msg, len);
#line 126

#line 126
  return __nesc_result;
#line 126
}
#line 126
# 141 "MyMainC.nc"
static inline void MyMainC__Timer0__fired(void )
#line 141
{

  MyMainC__btrpkt[sim_node()] = (BasicSendReceiveMsg *)MyMainC__Packet__getPayload(&MyMainC__pkt[sim_node()], sizeof(BasicSendReceiveMsg ));

  if (MyMainC__btrpkt[sim_node()] == (void *)0) {
      sim_log_debug(110U, "radio_send", "!!!!!!!Packet not created!!!!!! \n");
      return;
    }
  if (TOS_NODE_ID != 49 && TOS_NODE_ID != 50 && TOS_NODE_ID != 51 && TOS_NODE_ID != 52 && TOS_NODE_ID != 53 && TOS_NODE_ID != 54 && TOS_NODE_ID != 55 && TOS_NODE_ID != 56 && TOS_NODE_ID != 57) {
      __nesc_hton_uint8(MyMainC__btrpkt[sim_node()]->nodeid.nxdata, TOS_NODE_ID);
      __nesc_hton_int16(MyMainC__btrpkt[sim_node()]->data[0].nxdata, TEMP_DATA[TOS_NODE_ID - 1][MyMainC__index[sim_node()]]);
      __nesc_hton_int16(MyMainC__btrpkt[sim_node()]->data[1].nxdata, TEMP_DATA[TOS_NODE_ID - 1][MyMainC__index[sim_node()] + 1]);
      __nesc_hton_int16(MyMainC__btrpkt[sim_node()]->data[2].nxdata, TEMP_DATA[TOS_NODE_ID - 1][MyMainC__index[sim_node()] + 2]);
      __nesc_hton_int16(MyMainC__btrpkt[sim_node()]->data[3].nxdata, TEMP_DATA[TOS_NODE_ID - 1][MyMainC__index[sim_node()] + 3]);
      __nesc_hton_int16(MyMainC__btrpkt[sim_node()]->data[4].nxdata, TEMP_DATA[TOS_NODE_ID - 1][MyMainC__index[sim_node()] + 4]);
      __nesc_hton_int16(MyMainC__btrpkt[sim_node()]->data[5].nxdata, TEMP_DATA[TOS_NODE_ID - 1][MyMainC__index[sim_node()] + 5]);
      __nesc_hton_int16(MyMainC__btrpkt[sim_node()]->data[6].nxdata, TEMP_DATA[TOS_NODE_ID - 1][MyMainC__index[sim_node()] + 6]);
      __nesc_hton_int16(MyMainC__btrpkt[sim_node()]->data[7].nxdata, TEMP_DATA[TOS_NODE_ID - 1][MyMainC__index[sim_node()] + 7]);
      __nesc_hton_int16(MyMainC__btrpkt[sim_node()]->data[8].nxdata, TEMP_DATA[TOS_NODE_ID - 1][MyMainC__index[sim_node()] + 8]);
      __nesc_hton_int16(MyMainC__btrpkt[sim_node()]->data[9].nxdata, TEMP_DATA[TOS_NODE_ID - 1][MyMainC__index[sim_node()] + 9]);
      __nesc_hton_int16(MyMainC__btrpkt[sim_node()]->data[10].nxdata, TEMP_DATA[TOS_NODE_ID - 1][MyMainC__index[sim_node()] + 10]);
      __nesc_hton_int16(MyMainC__btrpkt[sim_node()]->data[11].nxdata, TEMP_DATA[TOS_NODE_ID - 1][MyMainC__index[sim_node()] + 11]);
      __nesc_hton_int16(MyMainC__btrpkt[sim_node()]->data[12].nxdata, TEMP_DATA[TOS_NODE_ID - 1][MyMainC__index[sim_node()] + 12]);
      __nesc_hton_int16(MyMainC__btrpkt[sim_node()]->data[13].nxdata, TEMP_DATA[TOS_NODE_ID - 1][MyMainC__index[sim_node()] + 13]);
      __nesc_hton_int16(MyMainC__btrpkt[sim_node()]->data[14].nxdata, TEMP_DATA[TOS_NODE_ID - 1][MyMainC__index[sim_node()] + 14]);
      __nesc_hton_int16(MyMainC__btrpkt[sim_node()]->data[15].nxdata, TEMP_DATA[TOS_NODE_ID - 1][MyMainC__index[sim_node()] + 15]);
    }
  MyMainC__sendData(MyMainC__btrpkt[sim_node()]);
  if (TOS_NODE_ID == 57) {
#line 169
      MyMainC__Timer1__startPeriodic(1000);
    }
}

#line 596
static inline void MyMainC__Timer1__fired(void )
#line 596
{
  if (((((((TOS_NODE_ID == 49 || TOS_NODE_ID == 50) || TOS_NODE_ID == 51) || TOS_NODE_ID == 52) || TOS_NODE_ID == 53) || TOS_NODE_ID == 54) || TOS_NODE_ID == 55) || TOS_NODE_ID == 56) 
    {

      MyMainC__btrpkt[sim_node()] = (BasicSendReceiveMsg *)MyMainC__Packet__getPayload(&MyMainC__pkt[sim_node()], sizeof(BasicSendReceiveMsg ));

      if (MyMainC__btrpkt[sim_node()] == (void *)0) 
        {
          sim_log_debug(120U, "radio_send", "!!!!!!!Packet not created!!!!!! \n");
          return;
        }
      if (((((((TOS_NODE_ID == 49 || TOS_NODE_ID == 50) || TOS_NODE_ID == 51) || TOS_NODE_ID == 52) || TOS_NODE_ID == 53) || TOS_NODE_ID == 54) || TOS_NODE_ID == 55) || TOS_NODE_ID == 56) 
        {

          __nesc_hton_uint8(MyMainC__btrpkt[sim_node()]->nodeid.nxdata, TOS_NODE_ID);
          __nesc_hton_int16(MyMainC__btrpkt[sim_node()]->data[0].nxdata, MyMainC__receivedData[sim_node()][MyMainC__Baseindex[sim_node()]]);
          __nesc_hton_int16(MyMainC__btrpkt[sim_node()]->data[1].nxdata, MyMainC__receivedData[sim_node()][MyMainC__Baseindex[sim_node()] + 1]);
          __nesc_hton_int16(MyMainC__btrpkt[sim_node()]->data[2].nxdata, MyMainC__receivedData[sim_node()][MyMainC__Baseindex[sim_node()] + 2]);
          __nesc_hton_int16(MyMainC__btrpkt[sim_node()]->data[3].nxdata, MyMainC__receivedData[sim_node()][MyMainC__Baseindex[sim_node()] + 3]);
          __nesc_hton_int16(MyMainC__btrpkt[sim_node()]->data[4].nxdata, MyMainC__receivedData[sim_node()][MyMainC__Baseindex[sim_node()] + 4]);
          __nesc_hton_int16(MyMainC__btrpkt[sim_node()]->data[5].nxdata, MyMainC__receivedData[sim_node()][MyMainC__Baseindex[sim_node()] + 5]);
          __nesc_hton_int16(MyMainC__btrpkt[sim_node()]->data[6].nxdata, MyMainC__receivedData[sim_node()][MyMainC__Baseindex[sim_node()] + 6]);
          __nesc_hton_int16(MyMainC__btrpkt[sim_node()]->data[7].nxdata, MyMainC__receivedData[sim_node()][MyMainC__Baseindex[sim_node()] + 7]);
          __nesc_hton_int16(MyMainC__btrpkt[sim_node()]->data[8].nxdata, MyMainC__receivedData[sim_node()][MyMainC__Baseindex[sim_node()] + 8]);
          __nesc_hton_int16(MyMainC__btrpkt[sim_node()]->data[9].nxdata, MyMainC__receivedData[sim_node()][MyMainC__Baseindex[sim_node()] + 9]);
          __nesc_hton_int16(MyMainC__btrpkt[sim_node()]->data[10].nxdata, MyMainC__receivedData[sim_node()][MyMainC__Baseindex[sim_node()] + 10]);
          __nesc_hton_int16(MyMainC__btrpkt[sim_node()]->data[11].nxdata, MyMainC__receivedData[sim_node()][MyMainC__Baseindex[sim_node()] + 11]);
          __nesc_hton_int16(MyMainC__btrpkt[sim_node()]->data[12].nxdata, MyMainC__receivedData[sim_node()][MyMainC__Baseindex[sim_node()] + 12]);
          __nesc_hton_int16(MyMainC__btrpkt[sim_node()]->data[13].nxdata, MyMainC__receivedData[sim_node()][MyMainC__Baseindex[sim_node()] + 13]);
          __nesc_hton_int16(MyMainC__btrpkt[sim_node()]->data[14].nxdata, MyMainC__receivedData[sim_node()][MyMainC__Baseindex[sim_node()] + 14]);
          __nesc_hton_int16(MyMainC__btrpkt[sim_node()]->data[15].nxdata, MyMainC__receivedData[sim_node()][MyMainC__Baseindex[sim_node()] + 15]);
        }

      if (!(__nesc_ntoh_int16(MyMainC__btrpkt[sim_node()]->data[0].nxdata) == 0 && __nesc_ntoh_int16(MyMainC__btrpkt[sim_node()]->data[1].nxdata) == 0 && __nesc_ntoh_int16(MyMainC__btrpkt[sim_node()]->data[7].nxdata) == 0 && __nesc_ntoh_int16(MyMainC__btrpkt[sim_node()]->data[8].nxdata) == 0 && __nesc_ntoh_int16(MyMainC__btrpkt[sim_node()]->data[14].nxdata) == 0 && __nesc_ntoh_int16(MyMainC__btrpkt[sim_node()]->data[15].nxdata) == 0)) 
        {
          MyMainC__sendDatatoBase(MyMainC__btrpkt[sim_node()]);
        }
      else {
          MyMainC__LOST[sim_node()] = (3744 - MyMainC__Baseindex[sim_node()]) / 16;
          if (TOS_NODE_ID == 49) {
              MyMainC__receivedFromNode49Counter[sim_node()] = 3744;
            }
          else {
#line 637
            if (TOS_NODE_ID == 50) {
                MyMainC__receivedFromNode50Counter[sim_node()] = 3744;
              }
            else {
#line 639
              if (TOS_NODE_ID == 51) {
                  MyMainC__receivedFromNode51Counter[sim_node()] = 3744;
                }
              else {
#line 641
                if (TOS_NODE_ID == 52) {
                    MyMainC__receivedFromNode52Counter[sim_node()] = 3744;
                  }
                else {
#line 643
                  if (TOS_NODE_ID == 53) {
                      MyMainC__receivedFromNode53Counter[sim_node()] = 3744;
                    }
                  else {
#line 645
                    if (TOS_NODE_ID == 54) {
                        MyMainC__receivedFromNode54Counter[sim_node()] = 3744;
                      }
                    else {
#line 647
                      if (TOS_NODE_ID == 55) {
                          MyMainC__receivedFromNode55Counter[sim_node()] = 3744;
                        }
                      else {
#line 649
                        if (TOS_NODE_ID == 56) {
                            MyMainC__receivedFromNode56Counter[sim_node()] = 3744;
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
#line 652
          MyMainC__Timer1__stop();
          MyMainC__PendingShutdownTimer__startOneShot(1000);
        }
    }
}

# 67 "/home/tinyos/local/src/tinyos-2x/tos/interfaces/TaskBasic.nc"
inline static error_t TossimPacketModelC__stopDoneTask__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SimSchedulerBasicP__TaskBasic__postTask(TossimPacketModelC__stopDoneTask);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 115 "/home/tinyos/local/src/tinyos-2x/tos/lib/tossim/TossimPacketModelC.nc"
static inline error_t TossimPacketModelC__Control__stop(void )
#line 115
{
  if (!TossimPacketModelC__initialized[sim_node()]) {
      sim_log_error(65U, "TossimPacketModelC", "TossimPacketModelC: Control.stop() called before initialization!\n");
      return FAIL;
    }
  TossimPacketModelC__running[sim_node()] = FALSE;
  sim_log_debug(66U, "TossimPacketModelC", "TossimPacketModelC: Control.stop() called.\n");
  TossimPacketModelC__stopDoneTask__postTask();
  return SUCCESS;
}

# 130 "/home/tinyos/local/src/tinyos-2x/tos/interfaces/SplitControl.nc"
inline static error_t MyMainC__AMControl__stop(void ){
#line 130
  unsigned char __nesc_result;
#line 130

#line 130
  __nesc_result = TossimPacketModelC__Control__stop();
#line 130

#line 130
  return __nesc_result;
#line 130
}
#line 130
# 676 "MyMainC.nc"
static inline void MyMainC__printReceivedData(void )
#line 676
{
#line 690
  if (((((((TOS_NODE_ID == 49 || TOS_NODE_ID == 50) || TOS_NODE_ID == 51) || TOS_NODE_ID == 52) || TOS_NODE_ID == 53) || TOS_NODE_ID == 54) || TOS_NODE_ID == 55) || TOS_NODE_ID == 56) 
    {
      printf("\n###############################\nBYTE COUNTER FOR NODE[%d]:  B:%d, BN:%d,LOST:%d\n############################\n", TOS_NODE_ID, MyMainC__BaseBytes[sim_node()], MyMainC__BaseNacks[sim_node()], MyMainC__LOST[sim_node()]);
    }
  else 
#line 693
    {
#line 693
      printf("\n////////////////////////////\nBYTE COUNTER FOR NODE[%d]: CL:%d , CLN:%d, FAILS:%d\n////////////////////////////\n", TOS_NODE_ID, MyMainC__ClusterBytes[sim_node()], MyMainC__ClusterNacks[sim_node()], MyMainC__FAILS[sim_node()]);
    }
}

static inline void MyMainC__shutdown(void )
{


  MyMainC__printReceivedData();

  MyMainC__AMControl__stop();
}


static inline void MyMainC__PendingShutdownTimer__fired(void )
#line 707
{

  MyMainC__shutdown();
}

# 204 "/home/tinyos/local/src/tinyos-2x/tos/lib/timer/VirtualizeTimerC.nc"
static inline void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__default__fired(uint8_t num)
{
}

# 83 "/home/tinyos/local/src/tinyos-2x/tos/lib/timer/Timer.nc"
inline static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__fired(uint8_t arg_0x7f65b5420da0){
#line 83
  switch (arg_0x7f65b5420da0) {
#line 83
    case 0U:
#line 83
      MyMainC__Timer0__fired();
#line 83
      break;
#line 83
    case 1U:
#line 83
      MyMainC__Timer1__fired();
#line 83
      break;
#line 83
    case 2U:
#line 83
      MyMainC__PendingShutdownTimer__fired();
#line 83
      break;
#line 83
    default:
#line 83
      /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__default__fired(arg_0x7f65b5420da0);
#line 83
      break;
#line 83
    }
#line 83
}
#line 83
# 54 "/home/tinyos/local/src/tinyos-2x/tos/chips/atm128/timer/HplAtm128Compare.nc"
inline static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Compare__set(/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Compare__size_type t){
#line 54
  HplAtm128Timer0AsyncP__Compare__set(t);
#line 54
}
#line 54
# 61 "/home/tinyos/local/src/tinyos-2x/tos/chips/atm128/timer/HplAtm128Timer.nc"
inline static /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Timer__timer_size /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Timer__get(void ){
#line 61
  unsigned char __nesc_result;
#line 61

#line 61
  __nesc_result = HplAtm128Timer0AsyncP__Timer0__get();
#line 61

#line 61
  return __nesc_result;
#line 61
}
#line 61
# 569 "/home/tinyos/local/src/tinyos-2x/tos/chips/atm128/timer/sim/HplAtm128Timer0AsyncP.nc"
static inline int HplAtm128Timer0AsyncP__TimerAsync__compareBusy(void )
#line 569
{
  return (* (volatile uint8_t *)&atm128RegFile[sim_node()][0x30] & (1 << OCR0UB)) != 0;
}

# 44 "/home/tinyos/local/src/tinyos-2x/tos/chips/atm128/timer/HplAtm128TimerAsync.nc"
inline static int /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__TimerAsync__compareBusy(void ){
#line 44
  int __nesc_result;
#line 44

#line 44
  __nesc_result = HplAtm128Timer0AsyncP__TimerAsync__compareBusy();
#line 44

#line 44
  return __nesc_result;
#line 44
}
#line 44
# 74 "/home/tinyos/local/src/tinyos-2x/tos/chips/atm128/timer/Atm128AlarmAsyncP.nc"
static inline void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__setOcr0(uint8_t n)
#line 74
{
  while (/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__TimerAsync__compareBusy()) 
    ;
  if (n == /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Timer__get()) {
    n++;
    }


  if (/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__base[sim_node()] + n + 1 < /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__base[sim_node()]) {
    n = -/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__base[sim_node()] - 1;
    }
#line 84
  /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Compare__set(n);
}

# 577 "/home/tinyos/local/src/tinyos-2x/tos/chips/atm128/timer/sim/HplAtm128Timer0AsyncP.nc"
static inline void HplAtm128Timer0AsyncP__cancel_compare(void )
#line 577
{
  sim_log_debug(148U, "HplAtm128CompareC", "Cancelling compare at 0x%p\n", HplAtm128Timer0AsyncP__compare[sim_node()]);
  if (HplAtm128Timer0AsyncP__compare[sim_node()] != (void *)0) {
      HplAtm128Timer0AsyncP__compare[sim_node()]->cancelled = 1;
      HplAtm128Timer0AsyncP__compare[sim_node()]->cleanup = sim_queue_cleanup_total;
    }
}

#line 116
static inline void HplAtm128Timer0AsyncP__notify_changed(void )
#line 116
{
  uint8_t newScale = HplAtm128Timer0AsyncP__Timer0__getScale();

#line 118
  if (newScale != AVR_CLOCK_OFF && 
  HplAtm128Timer0AsyncP__oldScale[sim_node()] == AVR_CLOCK_OFF) {
      HplAtm128Timer0AsyncP__lastZero[sim_node()] = sim_time();
    }
  HplAtm128Timer0AsyncP__oldScale[sim_node()] = newScale;

  HplAtm128Timer0AsyncP__schedule_new_compare();
}

#line 545
static inline void HplAtm128Timer0AsyncP__cancel_overflow(void )
#line 545
{
  if (HplAtm128Timer0AsyncP__overflow[sim_node()] != (void *)0) {
      HplAtm128Timer0AsyncP__overflow[sim_node()]->cancelled = 1;
      sim_log_debug(147U, "HplAtm128Timer0AsyncP", "Cancelling overflow %p.\n", HplAtm128Timer0AsyncP__overflow[sim_node()]);
      HplAtm128Timer0AsyncP__overflow[sim_node()]->cleanup = sim_queue_cleanup_total;
    }
}

#line 481
static inline void HplAtm128Timer0AsyncP__timer0_overflow_handle(sim_event_t *evt)
#line 481
{
  if (evt->cancelled) {
      return;
    }
  else {
      if ((atm128RegFile[sim_node()][ATM128_TIMSK] & (1 << TOIE0)) != 0) {
          atm128RegFile[sim_node()][ATM128_TIFR] &= ~(1 << TOV0);
          sim_log_debug(144U, "HplAtm128Timer0AsyncP", "Overflow interrupt at %s\n", sim_time_string());
          INTERRUPT_16();
        }
      else {
          sim_log_debug(145U, "HplAtm128Timer0AsyncP", "Setting overflow bit at %s\n", sim_time_string());
          atm128RegFile[sim_node()][ATM128_TIFR] |= 1 << TOV0;
        }
      HplAtm128Timer0AsyncP__configure_overflow(evt);
      sim_queue_insert(evt);
    }
}

static inline sim_event_t *HplAtm128Timer0AsyncP__allocate_overflow(void )
#line 500
{
  sim_event_t *newEvent = sim_queue_allocate_event();

  newEvent->handle = HplAtm128Timer0AsyncP__timer0_overflow_handle;
  newEvent->cleanup = sim_queue_cleanup_none;
  return newEvent;
}

#line 534
static inline void HplAtm128Timer0AsyncP__schedule_new_overflow(void )
#line 534
{
  sim_event_t *newEvent = HplAtm128Timer0AsyncP__allocate_overflow();

#line 536
  HplAtm128Timer0AsyncP__configure_overflow(newEvent);

  if (HplAtm128Timer0AsyncP__overflow[sim_node()] != (void *)0) {
      HplAtm128Timer0AsyncP__cancel_overflow();
    }
  HplAtm128Timer0AsyncP__overflow[sim_node()] = newEvent;
  sim_queue_insert(newEvent);
}

#line 148
static inline sim_time_t HplAtm128Timer0AsyncP__clock_to_sim(sim_time_t t)
#line 148
{
  t *= sim_ticks_per_sec();
  t /= HplAtm128Timer0AsyncP__notify_clockTicksPerSec();
  return t;
}

#line 297
static inline void HplAtm128Timer0AsyncP__Timer0__set(uint8_t newVal)
#line 297
{
  uint8_t curVal = HplAtm128Timer0AsyncP__Timer0__get();

#line 299
  sim_log_debug(137U, "HplAtm128Timer0AsyncP", "HplAtm128Timer0AsyncP: Setting timer: %hhu\n", newVal);
  if (newVal == curVal) {
      return;
    }
  else {
      sim_time_t adjustment = curVal - newVal;

#line 305
      adjustment = adjustment << HplAtm128Timer0AsyncP__shiftFromScale();
      adjustment = HplAtm128Timer0AsyncP__clock_to_sim(adjustment);

      if (newVal < curVal) {
          HplAtm128Timer0AsyncP__lastZero[sim_node()] += adjustment;
        }
      else {
          HplAtm128Timer0AsyncP__lastZero[sim_node()] -= adjustment;
        }

      HplAtm128Timer0AsyncP__schedule_new_overflow();
      HplAtm128Timer0AsyncP__notify_changed();
    }
}

#line 187
static inline void HplAtm128Timer0AsyncP__timer0_compare_handle(sim_event_t *evt)
#line 187
{
  sim_log_debug(127U, "HplAtm128Timer0AsyncP", "Beginning compare 0x%p at %s\n", evt, sim_time_string());
  if (evt->cancelled) {
      return;
    }
  else {
      char timeStr[128];

#line 194
      sim_print_now(timeStr, 128);
      sim_log_debug(128U, "HplAtm128Timer0AsyncP", "Handling compare at 0x%p @ %s\n", evt, sim_time_string());

      if ((atm128RegFile[sim_node()][ATM128_TCCR0] & (1 << WGM01)) != 0 && !((atm128RegFile[sim_node()][ATM128_TCCR0] & (1 << WGM00)) != 0)) {
          sim_log_debug(129U, "HplAtm128Timer0AsyncP", "%s: CTC is set, clear timer.\n", __FUNCTION__);
          HplAtm128Timer0AsyncP__Timer0__set(0);
        }
      else {
          sim_log_debug(130U, "HplAtm128Timer0AsyncP", "%s: TCCR is 0x%hhx, %i, %i\n", __FUNCTION__, * (volatile uint8_t *)&atm128RegFile[sim_node()][0x33], (int )((atm128RegFile[sim_node()][ATM128_TCCR0] & (1 << WGM01)) != 0), (int )((atm128RegFile[sim_node()][ATM128_TCCR0] & (1 << WGM00)) != 0));
        }

      if ((atm128RegFile[sim_node()][ATM128_TIMSK] & (1 << OCIE0)) != 0) {
          sim_log_debug(131U, "HplAtm128Timer0AsyncP", "TIFR is %hhx\n", * (volatile uint8_t *)&atm128RegFile[sim_node()][0x36]);
          atm128RegFile[sim_node()][ATM128_TIFR] &= ~(1 << OCF0);
          sim_log_debug(132U, "HplAtm128Timer0AsyncP", "TIFR is %hhx\n", * (volatile uint8_t *)&atm128RegFile[sim_node()][0x36]);
          sim_log_debug(133U, "HplAtm128Timer0AsyncP", "Compare interrupt @ %s\n", timeStr);
          INTERRUPT_15();
        }
      else {
          atm128RegFile[sim_node()][ATM128_TIFR] |= 1 << OCF0;
        }

      if (! evt->cancelled) {
          HplAtm128Timer0AsyncP__configure_compare(evt);
          sim_queue_insert(evt);
        }
    }
}

static inline sim_event_t *HplAtm128Timer0AsyncP__allocate_compare(void )
#line 223
{
  sim_event_t *newEvent = sim_queue_allocate_event();

#line 225
  sim_log_debug(134U, "HplAtm128Timer0AsyncP", "Allocated compare at 0x%p\n", newEvent);
  newEvent->handle = HplAtm128Timer0AsyncP__timer0_compare_handle;
  newEvent->cleanup = sim_queue_cleanup_none;
  return newEvent;
}

# 230 "/home/tinyos/local/src/tinyos-2x/tos/chips/atm128/timer/Atm128AlarmAsyncP.nc"
static inline void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Timer__overflow(void )
#line 230
{
}

# 70 "/home/tinyos/local/src/tinyos-2x/tos/chips/atm128/timer/HplAtm128Timer.nc"
inline static void HplAtm128Timer0AsyncP__Timer0__overflow(void ){
#line 70
  /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Timer__overflow();
#line 70
}
#line 70
# 58 "/home/tinyos/local/src/tinyos-2x/tos/lib/timer/CounterToLocalTimeC.nc"
static inline void /*HilTimerMilliC.CounterToLocalTimeC*/CounterToLocalTimeC__0__Counter__overflow(void )
{
}

# 82 "/home/tinyos/local/src/tinyos-2x/tos/lib/timer/Counter.nc"
inline static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Counter__overflow(void ){
#line 82
  /*HilTimerMilliC.CounterToLocalTimeC*/CounterToLocalTimeC__0__Counter__overflow();
#line 82
}
#line 82
# 85 "/home/tinyos/local/src/tinyos-2x/tos/chips/atm128/sim/atm128hardware.h"
static __inline void __nesc_enable_interrupt()
#line 85
{
  atm128RegFile[sim_node()][* (volatile uint8_t *)&atm128RegFile[sim_node()][0x3F]] |= 1 << 7;
}

# 48 "/home/tinyos/local/src/tinyos-2x/tos/chips/atm128/timer/HplAtm128Compare.nc"
inline static /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Compare__size_type /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Compare__get(void ){
#line 48
  unsigned char __nesc_result;
#line 48

#line 48
  __nesc_result = HplAtm128Timer0AsyncP__Compare__get();
#line 48

#line 48
  return __nesc_result;
#line 48
}
#line 48
# 149 "/home/tinyos/local/src/tinyos-2x/tos/chips/atm128/timer/Atm128AlarmAsyncP.nc"
static inline void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Compare__fired(void )
#line 149
{
  int overflowed;


  /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__base[sim_node()] += /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Compare__get() + 1U;
  overflowed = !/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__base[sim_node()];
  __nesc_enable_interrupt();
  /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__setInterrupt();
  if (overflowed) {
    /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Counter__overflow();
    }
}

# 58 "/home/tinyos/local/src/tinyos-2x/tos/chips/atm128/timer/HplAtm128Compare.nc"
inline static void HplAtm128Timer0AsyncP__Compare__fired(void ){
#line 58
  /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Compare__fired();
#line 58
}
#line 58
# 67 "/home/tinyos/local/src/tinyos-2x/tos/interfaces/TaskBasic.nc"
inline static error_t /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__fired__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SimSchedulerBasicP__TaskBasic__postTask(/*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__fired);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 81 "/home/tinyos/local/src/tinyos-2x/tos/lib/timer/AlarmToTimerC.nc"
static inline void /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__fired(void )
{
#line 82
  /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__fired__postTask();
}

# 78 "/home/tinyos/local/src/tinyos-2x/tos/lib/timer/Alarm.nc"
inline static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Alarm__fired(void ){
#line 78
  /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__Alarm__fired();
#line 78
}
#line 78
# 67 "/home/tinyos/local/src/tinyos-2x/tos/interfaces/TaskBasic.nc"
inline static error_t TossimPacketModelC__startDoneTask__postTask(void ){
#line 67
  unsigned char __nesc_result;
#line 67

#line 67
  __nesc_result = SimSchedulerBasicP__TaskBasic__postTask(TossimPacketModelC__startDoneTask);
#line 67

#line 67
  return __nesc_result;
#line 67
}
#line 67
# 45 "/home/tinyos/local/src/tinyos-2x/tos/lib/tossim/PlatformC.nc"
static inline error_t PlatformC__Init__init(void )
#line 45
{
  sim_log_debug(46U, "PlatformC", "Initialized mote.\n");
  return SUCCESS;
}

# 62 "/home/tinyos/local/src/tinyos-2x/tos/interfaces/Init.nc"
inline static error_t SimMainP__PlatformInit__init(void ){
#line 62
  unsigned char __nesc_result;
#line 62

#line 62
  __nesc_result = PlatformC__Init__init();
#line 62

#line 62
  return __nesc_result;
#line 62
}
#line 62
# 65 "/home/tinyos/local/src/tinyos-2x/tos/interfaces/Scheduler.nc"
inline static bool SimMainP__Scheduler__runNextTask(void ){
#line 65
  unsigned char __nesc_result;
#line 65

#line 65
  __nesc_result = SimSchedulerBasicP__Scheduler__runNextTask();
#line 65

#line 65
  return __nesc_result;
#line 65
}
#line 65
# 70 "/home/tinyos/local/src/tinyos-2x/tos/types/TinyError.h"
static inline  error_t ecombine(error_t r1, error_t r2)




{
  return r1 == r2 ? r1 : FAIL;
}

# 86 "/home/tinyos/local/src/tinyos-2x/tos/lib/tossim/TossimPacketModelC.nc"
static inline error_t TossimPacketModelC__Init__init(void )
#line 86
{
  sim_log_debug(62U, "TossimPacketModelC", "TossimPacketModelC: Init.init() called\n");
  TossimPacketModelC__initialized[sim_node()] = TRUE;



  TossimPacketModelC__sendEvent[sim_node()].cancelled = 1;
  return SUCCESS;
}

# 447 "/home/tinyos/local/src/tinyos-2x/tos/chips/atm128/timer/sim/HplAtm128Timer0AsyncP.nc"
static inline void HplAtm128Timer0AsyncP__Compare__start(void )
#line 447
{
#line 447
  atm128RegFile[sim_node()][ATM128_TIMSK] |= 1 << OCIE0;
}

# 65 "/home/tinyos/local/src/tinyos-2x/tos/chips/atm128/timer/HplAtm128Compare.nc"
inline static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Compare__start(void ){
#line 65
  HplAtm128Timer0AsyncP__Compare__start();
#line 65
}
#line 65
# 364 "/home/tinyos/local/src/tinyos-2x/tos/chips/atm128/timer/sim/HplAtm128Timer0AsyncP.nc"
static inline void HplAtm128Timer0AsyncP__Timer0Ctrl__setControl(Atm128TimerControl_t x)
#line 364
{
  sim_log_debug(139U, "HplAtm128Timer0AsyncP", "Setting control to be 0x%hhx\n", x.flat);
  * (volatile uint8_t *)&atm128RegFile[sim_node()][0x33] = x.flat;
}

# 46 "/home/tinyos/local/src/tinyos-2x/tos/chips/atm128/timer/HplAtm128TimerCtrl8.nc"
inline static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__TimerCtrl__setControl(Atm128TimerControl_t control){
#line 46
  HplAtm128Timer0AsyncP__Timer0Ctrl__setControl(control);
#line 46
}
#line 46
# 561 "/home/tinyos/local/src/tinyos-2x/tos/chips/atm128/timer/sim/HplAtm128Timer0AsyncP.nc"
static inline void HplAtm128Timer0AsyncP__TimerAsync__setTimer0Asynchronous(void )
#line 561
{
  * (volatile uint8_t *)&atm128RegFile[sim_node()][0x30] |= 1 << AS0;
}

# 32 "/home/tinyos/local/src/tinyos-2x/tos/chips/atm128/timer/HplAtm128TimerAsync.nc"
inline static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__TimerAsync__setTimer0Asynchronous(void ){
#line 32
  HplAtm128Timer0AsyncP__TimerAsync__setTimer0Asynchronous();
#line 32
}
#line 32
# 54 "/home/tinyos/local/src/tinyos-2x/tos/chips/atm128/timer/Atm128AlarmAsyncP.nc"
static inline error_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Init__init(void )
#line 54
{
  /* atomic removed: atomic calls only */
  {
    Atm128TimerControl_t x;

    /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__TimerAsync__setTimer0Asynchronous();
    x.flat = 0;
    x.bits.cs = 3;
    x.bits.wgm1 = 1;
    /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__TimerCtrl__setControl(x);
    /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Compare__set(/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__MAXT);
    /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Compare__start();
  }
  /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__setInterrupt();
  return SUCCESS;
}

# 62 "/home/tinyos/local/src/tinyos-2x/tos/interfaces/Init.nc"
inline static error_t SimMainP__SoftwareInit__init(void ){
#line 62
  unsigned char __nesc_result;
#line 62

#line 62
  __nesc_result = /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Init__init();
#line 62
  __nesc_result = ecombine(__nesc_result, TossimPacketModelC__Init__init());
#line 62

#line 62
  return __nesc_result;
#line 62
}
#line 62
# 107 "MyMainC.nc"
static inline void MyMainC__Boot__booted(void )
#line 107
{
  MyMainC__AMControl__start();
  sim_log_debug(107U, "boot", "Application booted.\n");
  sim_log_debug_clear(108U, "boot", "Application booted on node %u.\n", TOS_NODE_ID);
}

# 60 "/home/tinyos/local/src/tinyos-2x/tos/interfaces/Boot.nc"
inline static void SimMainP__Boot__booted(void ){
#line 60
  MyMainC__Boot__booted();
#line 60
}
#line 60
# 61 "/home/tinyos/local/src/tinyos-2x/tos/lib/tossim/SimMoteP.nc"
static inline error_t SimMoteP__SimMote__setRadioChannel(uint8_t newRadioChannel)
{
  if (newRadioChannel >= 11 && newRadioChannel <= 26) {
      SimMoteP__radioChannel[sim_node()] = newRadioChannel;
      return SUCCESS;
    }

  return FAIL;
}

#line 107
static inline long long int SimMoteP__SimMote__getEuid(void )
#line 107
{
  return SimMoteP__euid[sim_node()];
}

#line 110
static inline void SimMoteP__SimMote__setEuid(long long int e)
#line 110
{
  SimMoteP__euid[sim_node()] = e;
}







static inline int SimMoteP__SimMote__getVariableInfo(char *name, void **addr, size_t *size)
#line 120
{
  return __nesc_nido_resolve(sim_node(), name, (uintptr_t *)addr, (size_t *)size);
}

#line 137
static inline void SimMoteP__SimMote__turnOff(void )
#line 137
{
  SimMoteP__isOn[sim_node()] = FALSE;
}

#line 209
static inline void SimMoteP__sim_mote_boot_handle(sim_event_t *e)
#line 209
{
  char buf[128];

#line 211
  sim_print_now(buf, 128);

  SimMoteP__bootEvent[sim_node()] = (sim_event_t *)(void *)0;
  sim_log_debug(56U, "SimMoteP", "Turning on mote %i at time %s.\n", (int )sim_node(), buf);
  SimMoteP__SimMote__turnOn();
}

# 46 "/home/tinyos/local/src/tinyos-2x/tos/lib/tossim/sim_event_queue.c"
  void sim_queue_init()
#line 46
{
  init_heap(&eventHeap);
}

  void sim_queue_insert(sim_event_t *event)
#line 50
{
  sim_log_debug(0U, "Queue", "Inserting 0x%p\n", event);
  heap_insert(&eventHeap, event, event->time);
}

# 246 "/home/tinyos/local/src/tinyos-2x/tos/lib/tossim/sim_log.c"
static void sim_log_debug(uint16_t id, char *string, const char *format, ...)
#line 246
{
  va_list args;
  int i;

#line 249
  if (outputs[id].files == (void *)0) {
      fillInOutput(id, string);
    }
  for (i = 0; i < outputs[id].num; i++) {
      FILE *file = outputs[id].files[i];

#line 254
      __builtin_va_start(args, format);
      fprintf(file, "%s DEBUG (%i): ", sim_time_string(), (int )sim_node());
      vfprintf(file, format, args);
      fflush(file);
    }
}

#line 84
static void fillInOutput(int id, char *name)
#line 84
{
  char *termination = name;
  char *namePos = name;
  int count = 0;
  char *newName = (char *)malloc(strlen(name) + 1);

#line 89
  memset(newName, 0, strlen(name) + 1);

  while (termination != (void *)0) {
      sim_log_channel_t *channel;

      termination = strrchr(namePos, ',');

      if (termination == (void *)0) {
          strcpy(newName, namePos);
        }
      else 
        {
          memcpy(newName, namePos, termination - namePos);
          newName[termination - namePos] = 0;
        }

      channel = hashtable_search(channelTable, newName);
      if (channel != (void *)0) {
          count += channel->numOutputs;
        }

      namePos = termination + 1;
    }

  termination = name;
  namePos = name;


  outputs[id].files = (FILE **)malloc(sizeof(FILE *) * count);
  outputs[id].num = 0;


  while (termination != (void *)0) {
      sim_log_channel_t *channel;

      termination = strrchr(namePos, ',');

      if (termination == (void *)0) {
          strcpy(newName, namePos);
        }
      else 
        {
          memcpy(newName, namePos, termination - namePos);
          newName[termination - namePos] = 0;
        }

      channel = hashtable_search(channelTable, newName);
      if (channel != (void *)0) {
          int i;
#line 137
          int j;

#line 138
          for (i = 0; i < channel->numOutputs; i++) {
              int duplicate = 0;
              int outputCount = outputs[id].num;


              for (j = 0; j < outputCount; j++) {
                  if (fileno(outputs[id].files[j]) == fileno(channel->outputs[i])) {
                      duplicate = 1;
                      j = outputCount;
                    }
                }
              if (!duplicate) {
                  outputs[id].files[outputCount] = channel->outputs[i];
                  outputs[id].num++;
                }
            }
        }
      namePos = termination + 1;
    }
}

# 184 "/home/tinyos/local/src/tinyos-2x/tos/lib/tossim/sim_tossim.c"
  char *sim_time_string()
#line 184
{
  sim_print_now(simTimeBuf, 128);
  return simTimeBuf;
}

#line 179
  int sim_print_now(char *buf, int len)
#line 179
{
  return sim_print_time(buf, len, sim_time());
}

#line 156
  int sim_print_time(char *buf, int len, sim_time_t ftime)
#line 156
{
  int hours;
  int minutes;
  int seconds;
  sim_time_t secondBillionths;

  secondBillionths = ftime % sim_ticks_per_sec();
  if (sim_ticks_per_sec() > (sim_time_t )1000000000) {
      secondBillionths /= sim_ticks_per_sec() / (sim_time_t )1000000000;
    }
  else {
      secondBillionths *= (sim_time_t )1000000000 / sim_ticks_per_sec();
    }

  seconds = (int )(ftime / sim_ticks_per_sec());
  minutes = seconds / 60;
  hours = minutes / 60;
  seconds %= 60;
  minutes %= 60;
  buf[len - 1] = 0;
  return snprintf(buf, len - 1, "%i:%i:%i.%09llu", hours, minutes, seconds, secondBillionths);
}

#line 117
  sim_time_t sim_ticks_per_sec()
#line 117
{
  return 10000000000ULL;
}

#line 110
  sim_time_t sim_time()
#line 110
{
  return sim_ticks;
}








  unsigned long sim_node()
#line 121
{
  return current_node;
}

# 199 "/home/tinyos/local/src/tinyos-2x/tos/lib/tossim/heap.c"
static void up_heap(heap_t *heap, int findex)
#line 199
{
  int parent_index;

#line 201
  if (findex == 0) {
      return;
    }

  parent_index = (findex - 1) / 2;

  if (((node_t *)heap->data)[parent_index].key > ((node_t *)heap->data)[findex].key) {
      swap(&((node_t *)heap->data)[findex], &((node_t *)heap->data)[parent_index]);
      up_heap(heap, parent_index);
    }
}

#line 160
static void swap(node_t *first, node_t *second)
#line 160
{
  long long int key;
  void *data;

  key = first->key;
  first->key = second->key;
  second->key = key;

  data = first->data;
  first->data = second->data;
  second->data = data;
}

# 55 "/home/tinyos/local/src/tinyos-2x/tos/lib/tossim/sim_event_queue.c"
  sim_event_t *sim_queue_pop()
#line 55
{
  long long int key;

#line 57
  return (sim_event_t *)heap_pop_min_data(&eventHeap, &key);
}

# 116 "/home/tinyos/local/src/tinyos-2x/tos/lib/tossim/heap.c"
static void *heap_pop_min_data(heap_t *heap, long long int *key)
#line 116
{
  int last_index = heap->size - 1;
  void *data = ((node_t *)heap->data)[0].data;

#line 119
  if (key != (void *)0) {
      *key = ((node_t *)heap->data)[0].key;
    }
  ((node_t *)heap->data)[0].data = ((node_t *)heap->data)[last_index].data;
  ((node_t *)heap->data)[0].key = ((node_t *)heap->data)[last_index].key;

  heap->size--;

  down_heap(heap, 0);

  return data;
}

#line 173
static void down_heap(heap_t *heap, int findex)
#line 173
{
  int right_index = (findex + 1) * 2;
  int left_index = findex * 2 + 1;

  if (right_index < heap->size) {
      long long int left_key = ((node_t *)heap->data)[left_index].key;
      long long int right_key = ((node_t *)heap->data)[right_index].key;
      int min_key_index = left_key < right_key ? left_index : right_index;

      if (((node_t *)heap->data)[min_key_index].key < ((node_t *)heap->data)[findex].key) {
          swap(&((node_t *)heap->data)[findex], &((node_t *)heap->data)[min_key_index]);
          down_heap(heap, min_key_index);
        }
    }
  else {
#line 187
    if (left_index >= heap->size) {
        return;
      }
    else {
        long long int left_key = ((node_t *)heap->data)[left_index].key;

#line 192
        if (left_key < ((node_t *)heap->data)[findex].key) {
            swap(&((node_t *)heap->data)[findex], &((node_t *)heap->data)[left_index]);
            return;
          }
      }
    }
}

# 60 "/home/tinyos/local/src/tinyos-2x/tos/lib/tossim/sim_event_queue.c"
  bool sim_queue_is_empty()
#line 60
{
  return heap_is_empty(&eventHeap);
}

  long long int sim_queue_peek_time()
#line 64
{
  if (heap_is_empty(&eventHeap)) {
      return -1;
    }
  else {
      return heap_get_min_key(&eventHeap);
    }
}


  void sim_queue_cleanup_none(sim_event_t *event)
#line 74
{
  sim_log_debug(1U, "Queue", "cleanup_none: 0x%p\n", event);
}


  void sim_queue_cleanup_event(sim_event_t *event)
#line 79
{
  sim_log_debug(2U, "Queue", "cleanup_event: 0x%p\n", event);
  free(event);
}

  void sim_queue_cleanup_data(sim_event_t *event)
#line 84
{
  sim_log_debug(3U, "Queue", "cleanup_data: 0x%p\n", event);
  free(event->data);
  event->data = (void *)0;
}

  void sim_queue_cleanup_total(sim_event_t *event)
#line 90
{
  sim_log_debug(4U, "Queue", "cleanup_total: 0x%p\n", event);
  free(event->data);
  event->data = (void *)0;
  free(event);
}

# 57 "/home/tinyos/local/src/tinyos-2x/tos/lib/tossim/sim_tossim.c"
  void sim_init()
#line 57
{
  sim_queue_init();
  sim_log_init();
  sim_log_commit_change();
  sim_noise_init();

  {
    struct timeval tv;

#line 65
    gettimeofday(&tv, (void *)0);





    if (tv.tv_usec != 0) {
        sim_random_seed(tv.tv_usec);
      }
    else {
        sim_random_seed(tv.tv_sec);
      }
  }
}

# 234 "/home/tinyos/local/src/tinyos-2x/tos/lib/tossim/sim_log.c"
static void sim_log_commit_change()
#line 234
{
  int i;

#line 236
  for (i = 0; i < SIM_LOG_OUTPUT_COUNT; i++) {
      if (outputs[i].files != (void *)0) {
          outputs[i].num = 0;
          free(outputs[i].files);
          outputs[i].files = (void *)0;
        }
    }
}

# 67 "/home/tinyos/local/src/tinyos-2x/tos/lib/tossim/sim_noise.c"
  void sim_noise_init()
{
  int j;
  int i;



  for (j = 0; j < 1000; j++) {
      for (i = 0; i < 16; i++) {
          noiseData[j].noiseGenTime[i] = 0;
          noiseData[j].key[i] = (char *)malloc(NOISE_HISTORY);
        }
      noiseData[j].noiseTable = create_hashtable(NOISE_HASHTABLE_SIZE, sim_noise_hash, sim_noise_eq);
      noiseData[j].noiseTrace = (char *)malloc(sizeof(char ) * NOISE_MIN_TRACE);
      noiseData[j].noiseTraceLen = NOISE_MIN_TRACE;
      noiseData[j].noiseTraceIndex = 0;
    }
}

# 102 "/home/tinyos/local/src/tinyos-2x/tos/lib/tossim/sim_tossim.c"
  void sim_random_seed(int seed)
#line 102
{

  if (seed == 0) {
      seed = 1;
    }
  sim_seed = seed;
}

#line 80
  void sim_end()
#line 80
{
  sim_queue_init();
}



  int sim_random()
#line 86
{
  uint32_t mlcg;
#line 87
  uint32_t p;
#line 87
  uint32_t q;
  uint64_t tmpseed;

#line 89
  tmpseed = (uint64_t )33614U * (uint64_t )sim_seed;
  q = tmpseed;
  q = q >> 1;
  p = tmpseed >> 32;
  mlcg = p + q;
  if (mlcg & 0x80000000) {
      mlcg = mlcg & 0x7FFFFFFF;
      mlcg++;
    }
  sim_seed = mlcg;
  return mlcg;
}

#line 113
  void sim_set_time(sim_time_t t)
#line 113
{
  sim_ticks = t;
}








  void sim_set_node(unsigned long node)
#line 124
{
  current_node = node;
  TOS_NODE_ID = node;
}

  bool sim_run_next_event()
#line 129
{
  bool result = FALSE;

#line 131
  if (!sim_queue_is_empty()) {
      sim_event_t *event = sim_queue_pop();

#line 133
      sim_set_time(event->time);
      sim_set_node(event->mote);



      sim_log_debug(5U, "Tossim", "CORE: popping event 0x%p for %i at %llu with handler %p... ", event, sim_node(), sim_time(), event->handle);
      if ((sim_mote_is_on(event->mote) || event->force) && 
      event->handle != (void *)0) {
          result = TRUE;
          sim_log_debug_clear(6U, "Tossim", " mote is on (or forced event), run it.\n");
          event->handle(event);
        }
      else {
          sim_log_debug_clear(7U, "Tossim", "\n");
        }
      if (event->cleanup != (void *)0) {
          event->cleanup(event);
        }
    }

  return result;
}

# 186 "/home/tinyos/local/src/tinyos-2x/tos/lib/tossim/SimMoteP.nc"
  bool sim_mote_is_on(int mote)
#line 186
{
  bool result;
  int tmp = sim_node();

#line 189
  sim_set_node(mote);
  result = SimMoteP__SimMote__isOn();
  sim_set_node(tmp);
  return result;
}

# 276 "/home/tinyos/local/src/tinyos-2x/tos/lib/tossim/sim_log.c"
static void sim_log_debug_clear(uint16_t id, char *string, const char *format, ...)
#line 276
{
  va_list args;
  int i;

#line 279
  if (outputs[id].files == (void *)0) {
      fillInOutput(id, string);
    }
  for (i = 0; i < outputs[id].num; i++) {
      FILE *file = outputs[id].files[i];

#line 284
      __builtin_va_start(args, format);
      vfprintf(file, format, args);
      fflush(file);
    }
}

# 189 "/home/tinyos/local/src/tinyos-2x/tos/lib/tossim/sim_tossim.c"
  void sim_add_channel(char *channel, FILE *file)
#line 189
{
  sim_log_add_channel(channel, file);
}

  bool sim_remove_channel(char *channel, FILE *file)
#line 193
{
  return sim_log_remove_channel(channel, file);
}

# 57 "/home/tinyos/local/src/tinyos-2x/tos/lib/tossim/sim_csma.c"
  int sim_csma_init_high()
#line 57
{
  return csmaInitHigh;
}

#line 60
  int sim_csma_init_low()
#line 60
{
  return csmaInitLow;
}

#line 63
  int sim_csma_high()
#line 63
{
  return csmaHigh;
}

#line 66
  int sim_csma_low()
#line 66
{
  return csmaLow;
}

#line 69
  int sim_csma_symbols_per_sec()
#line 69
{
  return csmaSymbolsPerSec;
}

#line 72
  int sim_csma_bits_per_symbol()
#line 72
{
  return csmaBitsPerSymbol;
}

#line 75
  int sim_csma_preamble_length()
#line 75
{
  return csmaPreambleLength;
}

#line 78
  int sim_csma_exponent_base()
#line 78
{
  return csmaExponentBase;
#line 79
  ;
}

#line 81
  int sim_csma_max_iterations()
#line 81
{
  return csmaMaxIterations;
}

#line 84
  int sim_csma_min_free_samples()
#line 84
{
  return csmaMinFreeSamples;
}

#line 87
  int sim_csma_rxtx_delay()
#line 87
{
  return csmaRxTxDelay;
}

#line 90
  int sim_csma_ack_time()
#line 90
{
  return csmaAckTime;
}



  void sim_csma_set_init_high(int val)
#line 96
{
  csmaInitHigh = val;
}

#line 99
  void sim_csma_set_init_low(int val)
#line 99
{
  csmaInitLow = val;
}

#line 102
  void sim_csma_set_high(int val)
#line 102
{
  csmaHigh = val;
}

#line 105
  void sim_csma_set_low(int val)
#line 105
{
  csmaLow = val;
}

#line 108
  void sim_csma_set_symbols_per_sec(int val)
#line 108
{
  csmaSymbolsPerSec = val;
}

#line 111
  void sim_csma_set_bits_per_symbol(int val)
#line 111
{
  csmaBitsPerSymbol = val;
}

#line 114
  void sim_csma_set_preamble_length(int val)
#line 114
{
  csmaPreambleLength = val;
}

#line 117
  void sim_csma_set_exponent_base(int val)
#line 117
{
  csmaExponentBase = val;
}

#line 120
  void sim_csma_set_max_iterations(int val)
#line 120
{
  csmaMaxIterations = val;
}

#line 123
  void sim_csma_set_min_free_samples(int val)
#line 123
{
  csmaMinFreeSamples = val;
}

#line 126
  void sim_csma_set_rxtx_delay(int val)
#line 126
{
  csmaRxTxDelay = val;
}

#line 129
  void sim_csma_set_ack_time(int val)
#line 129
{
  csmaAckTime = val;
}

# 16 "/home/tinyos/local/src/tinyos-2x/tos/lib/tossim/sim_gain.c"
  gain_entry_t *sim_gain_first(int src)
#line 16
{
  if (src > 1000) {
      return connectivity[1000];
    }
  return connectivity[src];
}

  gain_entry_t *sim_gain_next(gain_entry_t *currentLink)
#line 23
{
  return currentLink->next;
}

  void sim_gain_add(int src, int dest, double gain)
#line 27
{
  gain_entry_t *current;
  int temp = sim_node();

#line 30
  if (src > 1000) {
      src = 1000;
    }
  sim_set_node(src);

  current = sim_gain_first(src);
  while (current != (void *)0) {
      if (current->mote == dest) {
          sim_set_node(temp);
          break;
        }
      current = current->next;
    }

  if (current == (void *)0) {
      current = sim_gain_allocate_link(dest);
      current->next = connectivity[src];
      connectivity[src] = current;
    }
  current->mote = dest;
  current->gain = gain;
  sim_log_debug(8U, "Gain", "Adding link from %i to %i with gain %f\n", src, dest, gain);
  sim_set_node(temp);
}

  double sim_gain_value(int src, int dest)
#line 55
{
  gain_entry_t *current;
  int temp = sim_node();

#line 58
  sim_set_node(src);
  current = sim_gain_first(src);
  while (current != (void *)0) {
      if (current->mote == dest) {
          sim_set_node(temp);
          sim_log_debug(9U, "Gain", "Getting link from %i to %i with gain %f\n", src, dest, current->gain);
          return current->gain;
        }
      current = current->next;
    }
  sim_set_node(temp);
  sim_log_debug(10U, "Gain", "Getting default link from %i to %i with gain %f\n", src, dest, 1.0);
  return 1.0;
}

  bool sim_gain_connected(int src, int dest)
#line 73
{
  gain_entry_t *current;
  int temp = sim_node();

#line 76
  sim_set_node(src);
  current = sim_gain_first(src);
  while (current != (void *)0) {
      if (current->mote == dest) {
          sim_set_node(temp);
          return TRUE;
        }
      current = current->next;
    }
  sim_set_node(temp);
  return FALSE;
}

  void sim_gain_remove(int src, int dest)
#line 89
{
  gain_entry_t *current;
  gain_entry_t *prevLink;
  int temp = sim_node();

  if (src > 1000) {
      src = 1000;
    }

  sim_set_node(src);

  current = sim_gain_first(src);
  prevLink = (void *)0;

  while (current != (void *)0) {
      gain_entry_t *tmp;

#line 105
      if (current->mote == dest) {
          if (prevLink == (void *)0) {
              connectivity[src] = current->next;
            }
          else {
              prevLink->next = current->next;
            }
          tmp = current->next;
          sim_gain_deallocate_link(current);
          current = tmp;
        }
      else {
          prevLink = current;
          current = current->next;
        }
    }
  sim_set_node(temp);
}

#line 169
  void sim_gain_deallocate_link(gain_entry_t *linkToDelete)
#line 169
{
  free(linkToDelete);
}

#line 124
  void sim_gain_set_noise_floor(int node, double mean, double range)
#line 124
{
  if (node > 1000) {
      node = 1000;
    }
  localNoise[node].mean = mean;
  localNoise[node].range = range;
}

#line 148
  double sim_gain_sample_noise(int node)
#line 148
{
  double val;
#line 149
  double adjust;

#line 150
  if (node > 1000) {
      node = 1000;
    }
  val = localNoise[node].mean;
  adjust = sim_random() % 2000000;
  adjust /= 1000000.0;
  adjust -= 1.0;
  adjust *= localNoise[node].range;
  return val + adjust;
}

#line 173
  void sim_gain_set_sensitivity(double s)
#line 173
{
  sensitivity = s;
}

  double sim_gain_sensitivity()
#line 177
{
  return sensitivity;
}

# 88 "/home/tinyos/local/src/tinyos-2x/tos/lib/tossim/sim_noise.c"
  void sim_noise_create_model(uint16_t node_id)
#line 88
{
  int i;

  makeNoiseModel(node_id);
  makePmfDistr(node_id);

  for (i = 1; i < 16; i++) {
      memcpy((void *)noiseData[node_id].key[i], (void *)noiseData[node_id].key[0], NOISE_HISTORY);
    }
}

#line 436
  void makeNoiseModel(uint16_t node_id)
#line 436
{
  int i;

#line 438
  for (i = 0; i < NOISE_HISTORY; i++) {
      noiseData[node_id].key[0][i] = search_bin_num(noiseData[node_id].noiseTrace[i]);
      sim_log_debug(44U, "Insert", "Setting history %i to be %i\n", (int )i, (int )noiseData[node_id].key[i]);
    }




  for (i = NOISE_HISTORY; i < noiseData[node_id].noiseTraceIndex; i++) {
      sim_noise_add(node_id, noiseData[node_id].noiseTrace[i]);
      arrangeKey(node_id, 11);
      noiseData[node_id].key[0][NOISE_HISTORY - 1] = search_bin_num(noiseData[node_id].noiseTrace[i]);
    }
  noiseData[node_id].generated = 1;
}

#line 123
  uint8_t search_bin_num(char noise)
{
  uint8_t bin;

#line 126
  if (noise > NOISE_MAX || noise < NOISE_MIN) {
      noise = NOISE_MIN;
    }
  bin = (noise - NOISE_MIN) / NOISE_QUANTIZE_INTERVAL + 1;
  return bin;
}

#line 154
  void sim_noise_add(uint16_t node_id, char noise)
{
  int i;
  struct hashtable *pnoiseTable = noiseData[node_id].noiseTable;
  char *key = noiseData[node_id].key[0];
  sim_noise_hash_t *noise_hash;

#line 160
  noise_hash = (sim_noise_hash_t *)hashtable_search(pnoiseTable, key);
  sim_log_debug(13U, "Insert", "Adding noise value %hhi\n", noise);
  if (noise_hash == (void *)0) {
      noise_hash = (sim_noise_hash_t *)malloc(sizeof(sim_noise_hash_t ));
      memcpy((void *)noise_hash->key, (void *)key, NOISE_HISTORY);

      noise_hash->numElements = 0;
      noise_hash->size = NOISE_DEFAULT_ELEMENT_SIZE;
      noise_hash->elements = (char *)malloc(sizeof(char ) * noise_hash->size);
      memset((void *)noise_hash->elements, 0, sizeof(char ) * noise_hash->size);

      noise_hash->flag = 0;
      for (i = 0; i < NOISE_NUM_VALUES; i++) {
          noise_hash->dist[i] = 0;
        }
      {
        void *ckey = malloc(NOISE_HISTORY);

#line 177
        memcpy(ckey, key, NOISE_HISTORY);
        hashtable_insert(pnoiseTable, ckey, noise_hash);
      }
      sim_log_debug(14U, "Insert", "Inserting %p into table %p with key ", noise_hash, pnoiseTable);
      {
        int ctr;

#line 183
        for (ctr = 0; ctr < NOISE_HISTORY; ctr++) 
          sim_log_debug_clear(15U, "Insert", "%0.3hhi ", key[ctr]);
      }
      sim_log_debug_clear(16U, "Insert", "\n");
    }

  if (noise_hash->numElements == noise_hash->size) 
    {
      char *newElements;
      int newSize = noise_hash->size * 2;

      newElements = (char *)malloc(sizeof(char ) * newSize);
      memcpy(newElements, noise_hash->elements, noise_hash->size);
      free(noise_hash->elements);
      noise_hash->elements = newElements;
      noise_hash->size = newSize;
    }

  noise_hash->elements[noise_hash->numElements] = noise;

  noise_hash->numElements++;
}

#line 259
  void arrangeKey(uint16_t node_id, uint8_t channel)
{
  uint8_t cchannel = channel >= 11 && channel <= 26 ? channel - 11 : channel;
  char *pKey = noiseData[node_id].key[cchannel];

#line 263
  memcpy(pKey, pKey + 1, NOISE_HISTORY - 1);
}





  void makePmfDistr(uint16_t node_id)
{
  int i;
  char *pKey = noiseData[node_id].key[0];
  char *fKey = noiseData[node_id].freqKey;

  FreqKeyNum = 0;
  for (i = 0; i < NOISE_HISTORY; i++) {
      pKey[i] = search_bin_num(noiseData[node_id].noiseTrace[i]);
    }

  for (i = NOISE_HISTORY; i < noiseData[node_id].noiseTraceIndex; i++) {
      if (i == NOISE_HISTORY) {
        }

      sim_noise_dist(node_id);
      arrangeKey(node_id, 11);
      pKey[NOISE_HISTORY - 1] = search_bin_num(noiseData[node_id].noiseTrace[i]);
    }

  sim_log_debug_clear(21U, "HASH", "FreqKey = ");
  for (i = 0; i < NOISE_HISTORY; i++) 
    {
      sim_log_debug_clear(22U, "HASH", "%d,", fKey[i]);
    }
  sim_log_debug_clear(23U, "HASH", "\n");
}

#line 206
  void sim_noise_dist(uint16_t node_id)
{
  int i;
  uint8_t bin;
  float cmf = 0;
  struct hashtable *pnoiseTable = noiseData[node_id].noiseTable;
  char *key = noiseData[node_id].key[0];
  char *freqKey = noiseData[node_id].freqKey;
  sim_noise_hash_t *noise_hash;

#line 215
  noise_hash = (sim_noise_hash_t *)hashtable_search(pnoiseTable, key);



  if (noise_hash->flag == 1) {
    return;
    }
  for (i = 0; i < NOISE_NUM_VALUES; i++) {
      noise_hash->dist[i] = 0.0;
    }

  for (i = 0; i < noise_hash->numElements; i++) 
    {
      float val;

#line 229
      sim_log_debug(17U, "Noise_output", "Noise is found to be %i\n", noise_hash->elements[i]);
      bin = noise_hash->elements[i] - NOISE_MIN_QUANTIZE;

      val = noise_hash->dist[bin];
      val += (float )1.0;
      noise_hash->dist[bin] = val;
    }

  for (i = 0; i < NOISE_NUM_VALUES; i++) 
    {
      noise_hash->dist[i] = noise_hash->dist[i] / noise_hash->numElements;
      cmf += noise_hash->dist[i];
      noise_hash->dist[i] = cmf;
    }
  noise_hash->flag = 1;


  if (noise_hash->numElements > FreqKeyNum) 
    {
      int j;

#line 249
      FreqKeyNum = noise_hash->numElements;
      memcpy((void *)freqKey, (void *)key, NOISE_HISTORY);
      sim_log_debug(18U, "HashZeroDebug", "Setting most frequent key (%i): ", (int )FreqKeyNum);
      for (j = 0; j < NOISE_HISTORY; j++) {
          sim_log_debug_clear(19U, "HashZeroDebug", "[%hhu] ", key[j]);
        }
      sim_log_debug_clear(20U, "HashZeroDebug", "\n");
    }
}

#line 107
  void sim_noise_trace_add(uint16_t node_id, char noiseVal)
#line 107
{

  if (noiseData[node_id].noiseTraceIndex == 
  noiseData[node_id].noiseTraceLen) {
      char *data = (char *)malloc(sizeof(char ) * noiseData[node_id].noiseTraceLen * 2);

#line 112
      memcpy(data, noiseData[node_id].noiseTrace, noiseData[node_id].noiseTraceLen);
      free(noiseData[node_id].noiseTrace);
      noiseData[node_id].noiseTraceLen *= 2;
      noiseData[node_id].noiseTrace = data;
    }
  noiseData[node_id].noiseTrace[noiseData[node_id].noiseTraceIndex] = noiseVal;
  noiseData[node_id].noiseTraceIndex++;
  sim_log_debug(12U, "Insert", "Adding noise value %i for %i of %i\n", (int )noiseData[node_id].noiseTraceIndex, (int )node_id, (int )noiseVal);
}

#line 133
  char search_noise_from_bin_num(int i)
{
  char noise;

#line 136
  noise = NOISE_MIN + (i - 1) * NOISE_QUANTIZE_INTERVAL;
  return noise;
}

#line 303
  char sim_noise_gen(uint16_t node_id, uint8_t channel)
{
  uint8_t cchannel = channel >= 11 && channel <= 26 ? channel - 11 : channel;
  int i;
  int noiseIndex = 0;
  char noise;
  struct hashtable *pnoiseTable = noiseData[node_id].noiseTable;
  char *pKey = noiseData[node_id].key[cchannel];
  char *fKey = noiseData[node_id].freqKey;
  double ranNum = RandomUniform();
  sim_noise_hash_t *noise_hash;

#line 314
  noise_hash = (sim_noise_hash_t *)hashtable_search(pnoiseTable, pKey);

  if (noise_hash == (void *)0) {

      sim_log_debug(24U, "Noise_c", "Did not pattern match");

      sim_noise_alarm();
      noise = 0;
      sim_log_debug_clear(25U, "HASH", "(N)Noise\n");
      sim_log_debug(26U, "HashZeroDebug", "Defaulting to common hash.\n");
      memcpy((void *)pKey, (void *)fKey, NOISE_HISTORY);
      noise_hash = (sim_noise_hash_t *)hashtable_search(pnoiseTable, pKey);
    }

  sim_log_debug_clear(27U, "HASH", "Key = ");
  for (i = 0; i < NOISE_HISTORY; i++) {
      sim_log_debug_clear(28U, "HASH", "%d,", pKey[i]);
    }
  sim_log_debug_clear(29U, "HASH", "\n");

  sim_log_debug(30U, "HASH", "Printing Key\n");
  sim_log_debug(31U, "HASH", "noise_hash->numElements=%d\n", noise_hash->numElements);


  numTotal++;


  if (noise_hash->numElements == 1) {
      noise = noise_hash->elements[0];
      sim_log_debug_clear(32U, "HASH", "(E)Noise = %d\n", noise);

      numCase1++;
      sim_log_debug(33U, "Noise_c", "In case 1: %i of %i\n", numCase1, numTotal);

      sim_log_debug(34U, "NoiseAudit", "Noise: %i\n", noise);
      return noise;
    }


  numCase2++;
  sim_log_debug(35U, "Noise_c", "In case 2: %i of %i\n", numCase2, numTotal);


  for (i = 0; i < NOISE_NUM_VALUES - 1; i++) {
      sim_log_debug(36U, "HASH", "IN:for i=%d\n", i);
      if (i == 0) {
          if (ranNum <= noise_hash->dist[i]) {
              noiseIndex = i;
              sim_log_debug_clear(37U, "HASH", "Selected Bin = %d -> ", i + 1);
              break;
            }
        }
      else {
#line 366
        if (noise_hash->dist[i - 1] < ranNum && 
        ranNum <= noise_hash->dist[i]) {
            noiseIndex = i;
            sim_log_debug_clear(38U, "HASH", "Selected Bin = %d -> ", i + 1);
            break;
          }
        }
    }
#line 373
  sim_log_debug(39U, "HASH", "OUT:for i=%d\n", i);

  noise = NOISE_MIN_QUANTIZE + i;
  sim_log_debug(40U, "NoiseAudit", "Noise: %i\n", noise);
  return noise;
}

# 103 "/home/tinyos/local/src/tinyos-2x/tos/lib/tossim/randomlib.c"
static double RandomUniform(void )
{
  double uni;
  int seed1;
#line 106
  int seed2;


  if (!test) 
    {



      seed1 = sim_random() % 31329;
      seed2 = sim_random() % 30082;
      RandomInitialise(seed1, seed2);
    }

  uni = randU[i97 - 1] - randU[j97 - 1];
  if (uni <= 0.0) {
    uni++;
    }
#line 122
  randU[i97 - 1] = uni;
  i97--;
  if (i97 == 0) {
    i97 = 97;
    }
#line 126
  j97--;
  if (j97 == 0) {
    j97 = 97;
    }
#line 129
  randC -= randCD;
  if (randC < 0.0) {
    randC += randCM;
    }
#line 132
  uni -= randC;
  if (uni < 0.0) {
    uni++;
    }
  return uni;
}

# 380 "/home/tinyos/local/src/tinyos-2x/tos/lib/tossim/sim_noise.c"
  char sim_noise_generate(uint16_t node_id, uint8_t channel, uint32_t cur_t)
#line 380
{
  uint32_t i;
  uint32_t prev_t;
  uint32_t delta_t;
  char *noiseG;
  char noise;
  uint8_t cchannel = channel >= 11 && channel <= 26 ? channel - 11 : channel;

  prev_t = noiseData[node_id].noiseGenTime[cchannel];

  if (noiseData[node_id].generated == 0) {
      sim_log_error(41U, "TOSSIM", "Tried to generate noise from an uninitialized radio model of node %hu.\n", node_id);
      return 127;
    }

  if (0 <= cur_t && cur_t < NOISE_HISTORY) {
      noiseData[node_id].noiseGenTime[cchannel] = cur_t;
      noiseData[node_id].key[cchannel][cur_t] = search_bin_num(noiseData[node_id].noiseTrace[cur_t]);
      noiseData[node_id].lastNoiseVal[cchannel] = noiseData[node_id].noiseTrace[cur_t];
      return noiseData[node_id].noiseTrace[cur_t];
    }

  if (prev_t == 0) {
    delta_t = cur_t - (NOISE_HISTORY - 1);
    }
  else {
#line 405
    delta_t = cur_t - prev_t;
    }
  sim_log_debug_clear(42U, "HASH", "delta_t = %d\n", delta_t);

  if (delta_t == 0) {
    noise = noiseData[node_id].lastNoiseVal[cchannel];
    }
  else 
#line 411
    {
      noiseG = (char *)malloc(sizeof(char ) * delta_t);

      for (i = 0; i < delta_t; i++) {
          noiseG[i] = sim_noise_gen(node_id, channel);
          arrangeKey(node_id, channel);
          noiseData[node_id].key[cchannel][NOISE_HISTORY - 1] = search_bin_num(noiseG[i]);
        }
      noise = noiseG[delta_t - 1];
      noiseData[node_id].lastNoiseVal[cchannel] = noise;

      free(noiseG);
    }
  noiseData[node_id].noiseGenTime[cchannel] = cur_t;
  if (noise == 0) {
      sim_log_debug(43U, "HashZeroDebug", "Generated noise of zero.\n");
    }

  return noise;
}

# 261 "/home/tinyos/local/src/tinyos-2x/tos/lib/tossim/sim_log.c"
static void sim_log_error(uint16_t id, char *string, const char *format, ...)
#line 261
{
  va_list args;
  int i;

#line 264
  if (outputs[id].files == (void *)0) {
      fillInOutput(id, string);
    }
  for (i = 0; i < outputs[id].num; i++) {
      FILE *file = outputs[id].files[i];

#line 269
      __builtin_va_start(args, format);
      fprintf(file, "ERROR (%i): ", (int )sim_node());
      vfprintf(file, format, args);
      fflush(file);
    }
}

# 54 "/home/tinyos/local/src/tinyos-2x/tos/lib/tossim/sim_packet.c"
  void sim_packet_set_source(sim_packet_t *msg, uint16_t src)
#line 54
{
  tossim_header_t *hdr = getHeader((message_t *)msg);

#line 56
  __nesc_hton_uint16(hdr->src.nxdata, src);
}

  uint16_t sim_packet_source(sim_packet_t *msg)
#line 59
{
  tossim_header_t *hdr = getHeader((message_t *)msg);

#line 61
  return __nesc_ntoh_uint16(hdr->src.nxdata);
}

  void sim_packet_set_destination(sim_packet_t *msg, uint16_t dest)
#line 64
{
  tossim_header_t *hdr = getHeader((message_t *)msg);

#line 66
  __nesc_hton_uint16(hdr->dest.nxdata, dest);
}

  uint16_t sim_packet_destination(sim_packet_t *msg)
#line 69
{
  tossim_header_t *hdr = getHeader((message_t *)msg);

#line 71
  return __nesc_ntoh_uint16(hdr->dest.nxdata);
}

  void sim_packet_set_length(sim_packet_t *msg, uint8_t length)
#line 74
{
  tossim_header_t *hdr = getHeader((message_t *)msg);

#line 76
  __nesc_hton_uint8(hdr->length.nxdata, length);
}

#line 78
  uint16_t sim_packet_length(sim_packet_t *msg)
#line 78
{
  tossim_header_t *hdr = getHeader((message_t *)msg);

#line 80
  return __nesc_ntoh_uint8(hdr->length.nxdata);
}

  void sim_packet_set_type(sim_packet_t *msg, uint8_t type)
#line 83
{
  tossim_header_t *hdr = getHeader((message_t *)msg);

#line 85
  __nesc_hton_uint8(hdr->type.nxdata, type);
}

  uint8_t sim_packet_type(sim_packet_t *msg)
#line 88
{
  tossim_header_t *hdr = getHeader((message_t *)msg);

#line 90
  return __nesc_ntoh_uint8(hdr->type.nxdata);
}

  uint8_t *sim_packet_data(sim_packet_t *p)
#line 93
{
  message_t *msg = (message_t *)p;

#line 95
  return (uint8_t *)& msg->data;
}

#line 97
  void sim_packet_set_strength(sim_packet_t *p, uint16_t str)
#line 97
{
  message_t *msg = (message_t *)p;
  tossim_metadata_t *md = (tossim_metadata_t *)& msg->metadata;

#line 100
  __nesc_hton_int8(md->strength.nxdata, str);
}

#line 102
  void sim_packet_deliver(int node, sim_packet_t *msg, sim_time_t t)
#line 102
{
  if (t < sim_time()) {
      t = sim_time();
    }
  sim_log_debug(45U, "Packet", "sim_packet.c: Delivering packet %p to %i at %llu\n", msg, node, t);
  active_message_deliver(node, (message_t *)msg, t);
}

# 254 "/home/tinyos/local/src/tinyos-2x/tos/lib/tossim/TossimActiveMessageC.nc"
  void active_message_deliver(int node, message_t *msg, sim_time_t t)
#line 254
{
  sim_event_t *evt = TossimActiveMessageC__allocate_deliver_event(node, msg, t);

#line 256
  sim_queue_insert(evt);
}

#line 109
static void TossimActiveMessageC__Model__receive(message_t *msg)
#line 109
{
  uint8_t len;
  void *payload;

  memcpy(TossimActiveMessageC__bufferPointer[sim_node()], msg, sizeof(message_t ));
  len = TossimActiveMessageC__Packet__payloadLength(TossimActiveMessageC__bufferPointer[sim_node()]);
  payload = TossimActiveMessageC__Packet__getPayload(TossimActiveMessageC__bufferPointer[sim_node()], TossimActiveMessageC__Packet__maxPayloadLength());

  if (TossimActiveMessageC__AMPacket__isForMe(msg)) {
      sim_log_debug(58U, "AM", "Received active message (%p) of type %hhu and length %hhu for me @ %s.\n", TossimActiveMessageC__bufferPointer[sim_node()], TossimActiveMessageC__AMPacket__type(TossimActiveMessageC__bufferPointer[sim_node()]), len, sim_time_string());
      TossimActiveMessageC__bufferPointer[sim_node()] = TossimActiveMessageC__Receive__receive(TossimActiveMessageC__AMPacket__type(TossimActiveMessageC__bufferPointer[sim_node()]), TossimActiveMessageC__bufferPointer[sim_node()], payload, len);
    }
  else {
      sim_log_debug(59U, "AM", "Snooped on active message of type %hhu and length %hhu for %hu @ %s.\n", TossimActiveMessageC__AMPacket__type(TossimActiveMessageC__bufferPointer[sim_node()]), len, TossimActiveMessageC__AMPacket__destination(TossimActiveMessageC__bufferPointer[sim_node()]), sim_time_string());
      TossimActiveMessageC__bufferPointer[sim_node()] = TossimActiveMessageC__Snoop__receive(TossimActiveMessageC__AMPacket__type(TossimActiveMessageC__bufferPointer[sim_node()]), TossimActiveMessageC__bufferPointer[sim_node()], payload, len);
    }
}

#line 140
static am_addr_t TossimActiveMessageC__AMPacket__destination(message_t *amsg)
#line 140
{
  tossim_header_t *header = TossimActiveMessageC__getHeader(amsg);

#line 142
  return __nesc_ntoh_uint16(header->dest.nxdata);
}

# 77 "/home/tinyos/local/src/tinyos-2x/tos/lib/tossim/ActiveMessageAddressC.nc"
static am_addr_t ActiveMessageAddressC__ActiveMessageAddress__amAddress(void )
#line 77
{
  if (!ActiveMessageAddressC__set[sim_node()]) {
      ActiveMessageAddressC__addr[sim_node()] = TOS_NODE_ID;
      ActiveMessageAddressC__set[sim_node()] = TRUE;
    }
  return ActiveMessageAddressC__addr[sim_node()];
}

# 165 "/home/tinyos/local/src/tinyos-2x/tos/lib/tossim/TossimActiveMessageC.nc"
static am_id_t TossimActiveMessageC__AMPacket__type(message_t *amsg)
#line 165
{
  tossim_header_t *header = TossimActiveMessageC__getHeader(amsg);

#line 167
  return __nesc_ntoh_uint8(header->type.nxdata);
}

# 144 "/home/tinyos/local/src/tinyos-2x/tos/lib/timer/VirtualizeTimerC.nc"
static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__startTimer(uint8_t num, uint32_t t0, uint32_t dt, bool isoneshot)
{
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer_t *timer = &/*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__m_timers[sim_node()][num];

#line 147
  timer->t0 = t0;
  timer->dt = dt;
  timer->isoneshot = isoneshot;
  timer->isrunning = TRUE;
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__updateFromTimer__postTask();
}

# 205 "/home/tinyos/local/src/tinyos-2x/tos/lib/tossim/SimSchedulerBasicP.nc"
static error_t SimSchedulerBasicP__TaskBasic__postTask(uint8_t id)
{
  error_t result;

#line 208
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 208
    {
      result = SimSchedulerBasicP__pushTask(id) ? SUCCESS : EBUSY;
    }
#line 210
    __nesc_atomic_end(__nesc_atomic); }
  if (result == SUCCESS) {
      sim_log_debug(51U, "Scheduler", "Posting task %hhu.\n", id);
      SimSchedulerBasicP__sim_scheduler_submit_event();
    }
  else {
      sim_log_debug(52U, "Scheduler", "Posting task %hhu, but already posted.\n", id);
    }
  return result;
}

#line 77
static void SimSchedulerBasicP__sim_scheduler_submit_event(void )
#line 77
{
  if (SimSchedulerBasicP__sim_scheduler_event_pending[sim_node()] == FALSE) {
      SimSchedulerBasicP__sim_scheduler_event[sim_node()].time = sim_time() + SimSchedulerBasicP__sim_config_task_latency();
      sim_queue_insert(&SimSchedulerBasicP__sim_scheduler_event[sim_node()]);
      SimSchedulerBasicP__sim_scheduler_event_pending[sim_node()] = TRUE;
    }
}

# 161 "/home/tinyos/local/src/tinyos-2x/tos/chips/atm128/timer/Atm128AlarmAsyncP.nc"
static uint32_t /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Counter__get(void )
#line 161
{
  uint32_t now;

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {


      uint8_t now8 = /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Timer__get();

      if (/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__TimerCtrl__getInterruptFlag().bits.ocf0) {


        now = /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__base[sim_node()] + /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Compare__get() + 1 + /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Timer__get();
        }
      else {

        now = /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__base[sim_node()] + now8;
        }
    }
#line 179
    __nesc_atomic_end(__nesc_atomic); }
#line 179
  return now;
}

# 282 "/home/tinyos/local/src/tinyos-2x/tos/chips/atm128/timer/sim/HplAtm128Timer0AsyncP.nc"
static uint8_t HplAtm128Timer0AsyncP__Timer0__get(void )
#line 282
{
  uint8_t rval;
  sim_time_t elapsed = sim_time() - HplAtm128Timer0AsyncP__last_zero();

#line 285
  elapsed = HplAtm128Timer0AsyncP__sim_to_clock(elapsed);
  elapsed = elapsed >> HplAtm128Timer0AsyncP__shiftFromScale();
  rval = (uint8_t )(elapsed & 0xff);
  sim_log_debug(136U, "HplAtm128Timer0AsyncP", "HplAtm128Timer0AsyncP: Getting timer: %hhu\n", rval);
  return rval;
}

#line 108
static sim_time_t HplAtm128Timer0AsyncP__last_zero(void )
#line 108
{
  if (HplAtm128Timer0AsyncP__lastZero[sim_node()] == 0) {
      HplAtm128Timer0AsyncP__lastZero[sim_node()] = sim_mote_start_time(sim_node());
    }
  return HplAtm128Timer0AsyncP__lastZero[sim_node()];
}

# 158 "/home/tinyos/local/src/tinyos-2x/tos/lib/tossim/SimMoteP.nc"
  long long int sim_mote_start_time(int mote)
#line 158
{
  long long int result;
  int tmp = sim_node();

#line 161
  sim_set_node(mote);
  result = SimMoteP__SimMote__getStartTime();
  sim_set_node(tmp);
  return result;
}

# 160 "/home/tinyos/local/src/tinyos-2x/tos/chips/atm128/timer/sim/HplAtm128Timer0AsyncP.nc"
static uint16_t HplAtm128Timer0AsyncP__shiftFromScale(void )
#line 160
{
  uint8_t scale = HplAtm128Timer0AsyncP__Timer0__getScale();

#line 162
  switch (scale) {
      case 0: 
        return 0;
      case 1: 
        return 0;
      case 2: 
        return 3;
      case 3: 
        return 5;
      case 4: 
        return 6;
      case 5: 
        return 7;
      case 6: 
        return 8;
      case 7: 
        return 10;
      default: 
        return 255;
    }
}

#line 321
static uint8_t HplAtm128Timer0AsyncP__Timer0__getScale(void )
#line 321
{
  return * (volatile uint8_t *)&atm128RegFile[sim_node()][0x33] & 0x7;
}

#line 383
static Atm128_TIFR_t HplAtm128Timer0AsyncP__Timer0Ctrl__getInterruptFlag(void )
#line 383
{
  Atm128_TIFR_t at;

#line 385
  at.flat = * (volatile uint8_t *)&atm128RegFile[sim_node()][0x36];
  return at;
}

#line 457
static uint8_t HplAtm128Timer0AsyncP__Compare__get(void )
#line 457
{
  sim_log_debug(142U, "HplAtm128Timer0AsyncP", "HplAtm128Timer0AsyncP: Getting compare: %hhu\n", * (volatile uint8_t *)&atm128RegFile[sim_node()][0x31]);
  return * (volatile uint8_t *)&atm128RegFile[sim_node()][0x31];
}

# 159 "/home/tinyos/local/src/tinyos-2x/tos/lib/timer/VirtualizeTimerC.nc"
static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__startOneShot(uint8_t num, uint32_t dt)
{
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__startTimer(num, /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__TimerFrom__getNow(), dt, TRUE);
}

# 110 "/home/tinyos/local/src/tinyos-2x/tos/lib/tossim/sim_packet.c"
  uint8_t sim_packet_max_length(sim_packet_t *msg)
#line 110
{
  return 70;
}

  sim_packet_t *sim_packet_allocate()
#line 114
{
  return (sim_packet_t *)malloc(sizeof(message_t ));
}

  void sim_packet_free(sim_packet_t *p)
#line 118
{
  printf("sim_packet.c: Freeing packet %p\n", p);
  free(p);
}

  void sim_packet_set_dsn(sim_packet_t *msg, uint8_t dsn)
#line 123
{
  tossim_header_t *hdr = getHeader((message_t *)msg);

#line 125
  __nesc_hton_uint8(hdr->dsn.nxdata, dsn);
}

  uint8_t sim_packet_dsn(sim_packet_t *msg)
#line 128
{
  tossim_header_t *hdr = getHeader((message_t *)msg);

#line 130
  return __nesc_ntoh_uint8(hdr->dsn.nxdata);
}

# 51 "/home/tinyos/local/src/tinyos-2x/tos/lib/tossim/SimMainP.nc"
  int sim_main_start_mote(void )
#line 51
{
  char timeBuf[128];

#line 53
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
#line 53
    {






      SimMainP__Scheduler__init();





      SimMainP__PlatformInit__init();
      while (SimMainP__Scheduler__runNextTask()) ;





      SimMainP__SoftwareInit__init();
      while (SimMainP__Scheduler__runNextTask()) ;
    }
#line 75
    __nesc_atomic_end(__nesc_atomic); }


  __nesc_enable_interrupt();

  sim_print_now(timeBuf, 128);
  sim_log_debug(47U, "SimMainP", "Mote %li signaling boot at time %s.\n", sim_node(), timeBuf);
  SimMainP__Boot__booted();





  return 0;
}

# 180 "/home/tinyos/local/src/tinyos-2x/tos/lib/tossim/SimSchedulerBasicP.nc"
static bool SimSchedulerBasicP__Scheduler__runNextTask(void )
{
  uint8_t nextTask;

#line 183
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {
      nextTask = SimSchedulerBasicP__popTask();
      if (nextTask == SimSchedulerBasicP__NO_TASK) 
        {
          sim_log_debug(49U, "Scheduler", "Told to run next task, but no task to run.\n");
          {
            unsigned char __nesc_temp = 
#line 189
            FALSE;

            {
#line 189
              __nesc_atomic_end(__nesc_atomic); 
#line 189
              return __nesc_temp;
            }
          }
        }
    }
#line 193
    __nesc_atomic_end(__nesc_atomic); }
#line 192
  sim_log_debug(50U, "Scheduler", "Running task %hhu.\n", nextTask);
  SimSchedulerBasicP__TaskBasic__runTask(nextTask);
  return TRUE;
}

# 273 "MyMainC.nc"
static void MyMainC__AMSend__sendDone(message_t *msg, error_t err)
#line 273
{
  if (&MyMainC__pkt[sim_node()] == msg) {
      MyMainC__busy[sim_node()] = FALSE;
    }
  if (err == SUCCESS) 
    {

      if (MyMainC__PacketAcknowledgements__wasAcked(msg)) 
        {

          if (((((((TOS_NODE_ID == 49 || TOS_NODE_ID == 50) || TOS_NODE_ID == 51) || TOS_NODE_ID == 52) || TOS_NODE_ID == 53) || TOS_NODE_ID == 54) || TOS_NODE_ID == 55) || TOS_NODE_ID == 56) 
            {
              MyMainC__Baseindex[sim_node()] = MyMainC__Baseindex[sim_node()] + 16;
              if (MyMainC__Baseindex[sim_node()] == 3744) 
                {
                  MyMainC__Timer1__stop();
                  MyMainC__PendingShutdownTimer__startOneShot(1000);
                }
            }
          else {
#line 292
            if (((((((((((((((((((((((((((((((((((((((((((((((TOS_NODE_ID == 1 || TOS_NODE_ID == 2) || TOS_NODE_ID == 3) || TOS_NODE_ID == 4) || TOS_NODE_ID == 5) || TOS_NODE_ID == 6) || TOS_NODE_ID == 7) || TOS_NODE_ID == 8) || TOS_NODE_ID == 9) || TOS_NODE_ID == 10) || TOS_NODE_ID == 11) || TOS_NODE_ID == 12) || TOS_NODE_ID == 13) || TOS_NODE_ID == 14) || TOS_NODE_ID == 15) || TOS_NODE_ID == 16) || TOS_NODE_ID == 17) || TOS_NODE_ID == 18) || TOS_NODE_ID == 19) || TOS_NODE_ID == 20) || TOS_NODE_ID == 21) || TOS_NODE_ID == 22) || TOS_NODE_ID == 23) || TOS_NODE_ID == 24) || TOS_NODE_ID == 25) || TOS_NODE_ID == 26) || TOS_NODE_ID == 27) || TOS_NODE_ID == 28) || TOS_NODE_ID == 29) || TOS_NODE_ID == 30) || TOS_NODE_ID == 31) || TOS_NODE_ID == 32) || TOS_NODE_ID == 33) || TOS_NODE_ID == 34) || TOS_NODE_ID == 35) || TOS_NODE_ID == 36) || TOS_NODE_ID == 37) || TOS_NODE_ID == 38) || TOS_NODE_ID == 39) || TOS_NODE_ID == 40) || TOS_NODE_ID == 41) || TOS_NODE_ID == 42) || TOS_NODE_ID == 43) || TOS_NODE_ID == 44) || TOS_NODE_ID == 45) || TOS_NODE_ID == 46) || TOS_NODE_ID == 47) || TOS_NODE_ID == 48) 
              {
                MyMainC__index[sim_node()] = MyMainC__index[sim_node()] + 16;
                if (MyMainC__index[sim_node()] == 624) 
                  {
                    MyMainC__Timer0__stop();
                    MyMainC__PendingShutdownTimer__startOneShot(1000);
                  }
              }
            }
        }
      else {

          if (((((((((((((((((((((((((((((((((((((((((((((((TOS_NODE_ID == 1 || TOS_NODE_ID == 2) || TOS_NODE_ID == 3) || TOS_NODE_ID == 4) || TOS_NODE_ID == 5) || TOS_NODE_ID == 6) || TOS_NODE_ID == 7) || TOS_NODE_ID == 8) || TOS_NODE_ID == 9) || TOS_NODE_ID == 10) || TOS_NODE_ID == 11) || TOS_NODE_ID == 12) || TOS_NODE_ID == 13) || TOS_NODE_ID == 14) || TOS_NODE_ID == 15) || TOS_NODE_ID == 16) || TOS_NODE_ID == 17) || TOS_NODE_ID == 18) || TOS_NODE_ID == 19) || TOS_NODE_ID == 20) || TOS_NODE_ID == 21) || TOS_NODE_ID == 22) || TOS_NODE_ID == 23) || TOS_NODE_ID == 24) || TOS_NODE_ID == 25) || TOS_NODE_ID == 26) || TOS_NODE_ID == 27) || TOS_NODE_ID == 28) || TOS_NODE_ID == 29) || TOS_NODE_ID == 30) || TOS_NODE_ID == 31) || TOS_NODE_ID == 32) || TOS_NODE_ID == 33) || TOS_NODE_ID == 34) || TOS_NODE_ID == 35) || TOS_NODE_ID == 36) || TOS_NODE_ID == 37) || TOS_NODE_ID == 38) || TOS_NODE_ID == 39) || TOS_NODE_ID == 40) || TOS_NODE_ID == 41) || TOS_NODE_ID == 42) || TOS_NODE_ID == 43) || TOS_NODE_ID == 44) || TOS_NODE_ID == 45) || TOS_NODE_ID == 46) || TOS_NODE_ID == 47) || TOS_NODE_ID == 48) 
            {
              MyMainC__ClusterNacks[sim_node()] = MyMainC__ClusterNacks[sim_node()] + 64;
              MyMainC__sendData(MyMainC__btrpkt[sim_node()]);
            }
          if (((((((TOS_NODE_ID == 49 || TOS_NODE_ID == 50) || TOS_NODE_ID == 51) || TOS_NODE_ID == 52) || TOS_NODE_ID == 53) || TOS_NODE_ID == 54) || TOS_NODE_ID == 55) || TOS_NODE_ID == 56) 
            {
              MyMainC__BaseNacks[sim_node()] = MyMainC__BaseNacks[sim_node()] + 64;
              MyMainC__sendDatatoBase(MyMainC__btrpkt[sim_node()]);
            }
        }
    }
  else {
#line 315
    sim_log_error(119U, "radio_send", "Send  ERROR!\n");
    }
}

#line 173
static void MyMainC__sendData(BasicSendReceiveMsg *btrpktt)
#line 173
{
  if (!MyMainC__busy[sim_node()]) {

      if (TOS_NODE_ID != 49 && TOS_NODE_ID != 50 && TOS_NODE_ID != 51 && TOS_NODE_ID != 52 && TOS_NODE_ID != 53 && TOS_NODE_ID != 54 && TOS_NODE_ID != 55 && TOS_NODE_ID != 56 && TOS_NODE_ID != 57) 
        {

          if (((((TOS_NODE_ID == 1 || TOS_NODE_ID == 2) || TOS_NODE_ID == 3) || TOS_NODE_ID == 4) || TOS_NODE_ID == 5) || TOS_NODE_ID == 6) 
            {

              MyMainC__PacketAcknowledgements__requestAck(&MyMainC__pkt[sim_node()]);
              MyMainC__ClusterBytes[sim_node()] = MyMainC__ClusterBytes[sim_node()] + 64;
              if (__nesc_ntoh_int16(MyMainC__btrpkt[sim_node()]->data[0].nxdata) == 0 && __nesc_ntoh_int16(MyMainC__btrpkt[sim_node()]->data[1].nxdata) == 0 && __nesc_ntoh_int16(MyMainC__btrpkt[sim_node()]->data[7].nxdata) == 0 && __nesc_ntoh_int16(MyMainC__btrpkt[sim_node()]->data[8].nxdata) == 0 && __nesc_ntoh_int16(MyMainC__btrpkt[sim_node()]->data[14].nxdata) == 0 && __nesc_ntoh_int16(MyMainC__btrpkt[sim_node()]->data[15].nxdata) == 0) {
#line 184
                  MyMainC__FAILS[sim_node()]++;
#line 184
                  MyMainC__ClusterBytes[sim_node()] = MyMainC__ClusterBytes[sim_node()] - 64;
                }
#line 185
              if (MyMainC__AMSend__send(49, &MyMainC__pkt[sim_node()], sizeof(BasicSendReceiveMsg )) == SUCCESS) 
                {

                  MyMainC__busy[sim_node()] = TRUE;
                }
              else {
#line 189
                sim_log_error(111U, "radio_send", "Send error!\n");
                }
            }
          else {
#line 190
            if (((((TOS_NODE_ID == 7 || TOS_NODE_ID == 8) || TOS_NODE_ID == 9) || TOS_NODE_ID == 10) || TOS_NODE_ID == 11) || TOS_NODE_ID == 12) 
              {

                MyMainC__PacketAcknowledgements__requestAck(&MyMainC__pkt[sim_node()]);
                MyMainC__ClusterBytes[sim_node()] = MyMainC__ClusterBytes[sim_node()] + 64;
                if (__nesc_ntoh_int16(MyMainC__btrpkt[sim_node()]->data[0].nxdata) == 0 && __nesc_ntoh_int16(MyMainC__btrpkt[sim_node()]->data[1].nxdata) == 0 && __nesc_ntoh_int16(MyMainC__btrpkt[sim_node()]->data[7].nxdata) == 0 && __nesc_ntoh_int16(MyMainC__btrpkt[sim_node()]->data[8].nxdata) == 0 && __nesc_ntoh_int16(MyMainC__btrpkt[sim_node()]->data[14].nxdata) == 0 && __nesc_ntoh_int16(MyMainC__btrpkt[sim_node()]->data[15].nxdata) == 0) {
#line 195
                    MyMainC__FAILS[sim_node()]++;
#line 195
                    MyMainC__ClusterBytes[sim_node()] = MyMainC__ClusterBytes[sim_node()] - 64;
                  }
#line 196
                if (MyMainC__AMSend__send(50, &MyMainC__pkt[sim_node()], sizeof(BasicSendReceiveMsg )) == SUCCESS) 
                  {

                    MyMainC__busy[sim_node()] = TRUE;
                  }
                else {
#line 200
                  sim_log_error(112U, "radio_send", "Send error!\n");
                  }
              }
            else {
#line 201
              if (((((TOS_NODE_ID == 13 || TOS_NODE_ID == 14) || TOS_NODE_ID == 15) || TOS_NODE_ID == 16) || TOS_NODE_ID == 17) || TOS_NODE_ID == 18) 
                {

                  MyMainC__PacketAcknowledgements__requestAck(&MyMainC__pkt[sim_node()]);
                  MyMainC__ClusterBytes[sim_node()] = MyMainC__ClusterBytes[sim_node()] + 64;
                  if (__nesc_ntoh_int16(MyMainC__btrpkt[sim_node()]->data[0].nxdata) == 0 && __nesc_ntoh_int16(MyMainC__btrpkt[sim_node()]->data[1].nxdata) == 0 && __nesc_ntoh_int16(MyMainC__btrpkt[sim_node()]->data[7].nxdata) == 0 && __nesc_ntoh_int16(MyMainC__btrpkt[sim_node()]->data[8].nxdata) == 0 && __nesc_ntoh_int16(MyMainC__btrpkt[sim_node()]->data[14].nxdata) == 0 && __nesc_ntoh_int16(MyMainC__btrpkt[sim_node()]->data[15].nxdata) == 0) {
#line 206
                      MyMainC__FAILS[sim_node()]++;
#line 206
                      MyMainC__ClusterBytes[sim_node()] = MyMainC__ClusterBytes[sim_node()] - 64;
                    }
#line 207
                  if (MyMainC__AMSend__send(51, &MyMainC__pkt[sim_node()], sizeof(BasicSendReceiveMsg )) == SUCCESS) 
                    {

                      MyMainC__busy[sim_node()] = TRUE;
                    }
                  else {
#line 211
                    sim_log_error(113U, "radio_send", "Send error!\n");
                    }
                }
              else {
#line 212
                if (((((TOS_NODE_ID == 19 || TOS_NODE_ID == 20) || TOS_NODE_ID == 21) || TOS_NODE_ID == 22) || TOS_NODE_ID == 23) || TOS_NODE_ID == 24) 
                  {

                    MyMainC__PacketAcknowledgements__requestAck(&MyMainC__pkt[sim_node()]);
                    MyMainC__ClusterBytes[sim_node()] = MyMainC__ClusterBytes[sim_node()] + 64;
                    if (__nesc_ntoh_int16(MyMainC__btrpkt[sim_node()]->data[0].nxdata) == 0 && __nesc_ntoh_int16(MyMainC__btrpkt[sim_node()]->data[1].nxdata) == 0 && __nesc_ntoh_int16(MyMainC__btrpkt[sim_node()]->data[7].nxdata) == 0 && __nesc_ntoh_int16(MyMainC__btrpkt[sim_node()]->data[8].nxdata) == 0 && __nesc_ntoh_int16(MyMainC__btrpkt[sim_node()]->data[14].nxdata) == 0 && __nesc_ntoh_int16(MyMainC__btrpkt[sim_node()]->data[15].nxdata) == 0) {
#line 217
                        MyMainC__FAILS[sim_node()]++;
#line 217
                        MyMainC__ClusterBytes[sim_node()] = MyMainC__ClusterBytes[sim_node()] - 64;
                      }
#line 218
                    if (MyMainC__AMSend__send(52, &MyMainC__pkt[sim_node()], sizeof(BasicSendReceiveMsg )) == SUCCESS) 
                      {

                        MyMainC__busy[sim_node()] = TRUE;
                      }
                    else {
#line 222
                      sim_log_error(114U, "radio_send", "Send error!\n");
                      }
                  }
                else {
#line 223
                  if (((((TOS_NODE_ID == 25 || TOS_NODE_ID == 26) || TOS_NODE_ID == 27) || TOS_NODE_ID == 28) || TOS_NODE_ID == 29) || TOS_NODE_ID == 30) 
                    {

                      MyMainC__PacketAcknowledgements__requestAck(&MyMainC__pkt[sim_node()]);
                      MyMainC__ClusterBytes[sim_node()] = MyMainC__ClusterBytes[sim_node()] + 64;
                      if (__nesc_ntoh_int16(MyMainC__btrpkt[sim_node()]->data[0].nxdata) == 0 && __nesc_ntoh_int16(MyMainC__btrpkt[sim_node()]->data[1].nxdata) == 0 && __nesc_ntoh_int16(MyMainC__btrpkt[sim_node()]->data[7].nxdata) == 0 && __nesc_ntoh_int16(MyMainC__btrpkt[sim_node()]->data[8].nxdata) == 0 && __nesc_ntoh_int16(MyMainC__btrpkt[sim_node()]->data[14].nxdata) == 0 && __nesc_ntoh_int16(MyMainC__btrpkt[sim_node()]->data[15].nxdata) == 0) {
#line 228
                          MyMainC__FAILS[sim_node()]++;
#line 228
                          MyMainC__ClusterBytes[sim_node()] = MyMainC__ClusterBytes[sim_node()] - 64;
                        }
#line 229
                      if (MyMainC__AMSend__send(53, &MyMainC__pkt[sim_node()], sizeof(BasicSendReceiveMsg )) == SUCCESS) 
                        {

                          MyMainC__busy[sim_node()] = TRUE;
                        }
                      else {
#line 233
                        sim_log_error(115U, "radio_send", "Send error!\n");
                        }
                    }
                  else {
#line 234
                    if (((((TOS_NODE_ID == 31 || TOS_NODE_ID == 32) || TOS_NODE_ID == 33) || TOS_NODE_ID == 34) || TOS_NODE_ID == 35) || TOS_NODE_ID == 36) 
                      {

                        MyMainC__PacketAcknowledgements__requestAck(&MyMainC__pkt[sim_node()]);
                        MyMainC__ClusterBytes[sim_node()] = MyMainC__ClusterBytes[sim_node()] + 64;
                        if (__nesc_ntoh_int16(MyMainC__btrpkt[sim_node()]->data[0].nxdata) == 0 && __nesc_ntoh_int16(MyMainC__btrpkt[sim_node()]->data[1].nxdata) == 0 && __nesc_ntoh_int16(MyMainC__btrpkt[sim_node()]->data[7].nxdata) == 0 && __nesc_ntoh_int16(MyMainC__btrpkt[sim_node()]->data[8].nxdata) == 0 && __nesc_ntoh_int16(MyMainC__btrpkt[sim_node()]->data[14].nxdata) == 0 && __nesc_ntoh_int16(MyMainC__btrpkt[sim_node()]->data[15].nxdata) == 0) {
#line 239
                            MyMainC__FAILS[sim_node()]++;
#line 239
                            MyMainC__ClusterBytes[sim_node()] = MyMainC__ClusterBytes[sim_node()] - 64;
                          }
#line 240
                        if (MyMainC__AMSend__send(54, &MyMainC__pkt[sim_node()], sizeof(BasicSendReceiveMsg )) == SUCCESS) 
                          {

                            MyMainC__busy[sim_node()] = TRUE;
                          }
                        else {
#line 244
                          sim_log_error(116U, "radio_send", "Send error!\n");
                          }
                      }
                    else {
#line 245
                      if (((((TOS_NODE_ID == 37 || TOS_NODE_ID == 38) || TOS_NODE_ID == 39) || TOS_NODE_ID == 40) || TOS_NODE_ID == 41) || TOS_NODE_ID == 42) 
                        {

                          MyMainC__PacketAcknowledgements__requestAck(&MyMainC__pkt[sim_node()]);
                          MyMainC__ClusterBytes[sim_node()] = MyMainC__ClusterBytes[sim_node()] + 64;
                          if (__nesc_ntoh_int16(MyMainC__btrpkt[sim_node()]->data[0].nxdata) == 0 && __nesc_ntoh_int16(MyMainC__btrpkt[sim_node()]->data[1].nxdata) == 0 && __nesc_ntoh_int16(MyMainC__btrpkt[sim_node()]->data[7].nxdata) == 0 && __nesc_ntoh_int16(MyMainC__btrpkt[sim_node()]->data[8].nxdata) == 0 && __nesc_ntoh_int16(MyMainC__btrpkt[sim_node()]->data[14].nxdata) == 0 && __nesc_ntoh_int16(MyMainC__btrpkt[sim_node()]->data[15].nxdata) == 0) {
#line 250
                              MyMainC__FAILS[sim_node()]++;
#line 250
                              MyMainC__ClusterBytes[sim_node()] = MyMainC__ClusterBytes[sim_node()] - 64;
                            }
#line 251
                          if (MyMainC__AMSend__send(55, &MyMainC__pkt[sim_node()], sizeof(BasicSendReceiveMsg )) == SUCCESS) 
                            {

                              MyMainC__busy[sim_node()] = TRUE;
                            }
                          else {
#line 255
                            sim_log_error(117U, "radio_send", "Send error!\n");
                            }
                        }
                      else {
#line 256
                        if (((((TOS_NODE_ID == 43 || TOS_NODE_ID == 44) || TOS_NODE_ID == 45) || TOS_NODE_ID == 46) || TOS_NODE_ID == 47) || TOS_NODE_ID == 48) 
                          {

                            MyMainC__PacketAcknowledgements__requestAck(&MyMainC__pkt[sim_node()]);
                            MyMainC__ClusterBytes[sim_node()] = MyMainC__ClusterBytes[sim_node()] + 64;
                            if (__nesc_ntoh_int16(MyMainC__btrpkt[sim_node()]->data[0].nxdata) == 0 && __nesc_ntoh_int16(MyMainC__btrpkt[sim_node()]->data[1].nxdata) == 0 && __nesc_ntoh_int16(MyMainC__btrpkt[sim_node()]->data[7].nxdata) == 0 && __nesc_ntoh_int16(MyMainC__btrpkt[sim_node()]->data[8].nxdata) == 0 && __nesc_ntoh_int16(MyMainC__btrpkt[sim_node()]->data[14].nxdata) == 0 && __nesc_ntoh_int16(MyMainC__btrpkt[sim_node()]->data[15].nxdata) == 0) {
#line 261
                                MyMainC__FAILS[sim_node()]++;
#line 261
                                MyMainC__ClusterBytes[sim_node()] = MyMainC__ClusterBytes[sim_node()] - 64;
                              }
#line 262
                            if (MyMainC__AMSend__send(56, &MyMainC__pkt[sim_node()], sizeof(BasicSendReceiveMsg )) == SUCCESS) 
                              {

                                MyMainC__busy[sim_node()] = TRUE;
                              }
                            else {
#line 266
                              sim_log_error(118U, "radio_send", "Send error!\n");
                              }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
        }
    }
}

# 128 "/home/tinyos/local/src/tinyos-2x/tos/lib/tossim/TossimPacketModelC.nc"
static error_t TossimPacketModelC__PacketAcknowledgements__requestAck(message_t *msg)
#line 128
{
  tossim_metadata_t *meta = TossimPacketModelC__getMetadata(msg);

#line 130
  __nesc_hton_uint8(meta->ack.nxdata, TRUE);
  return SUCCESS;
}

# 53 "/home/tinyos/local/src/tinyos-2x/tos/system/AMQueueEntryP.nc"
static error_t /*MyMainAppC.AMSenderC.SenderC.AMQueueEntryP*/AMQueueEntryP__0__AMSend__send(am_addr_t dest, 
message_t *msg, 
uint8_t len)
#line 55
{
  /*MyMainAppC.AMSenderC.SenderC.AMQueueEntryP*/AMQueueEntryP__0__AMPacket__setDestination(msg, dest);
  /*MyMainAppC.AMSenderC.SenderC.AMQueueEntryP*/AMQueueEntryP__0__AMPacket__setType(msg, 6);
  return /*MyMainAppC.AMSenderC.SenderC.AMQueueEntryP*/AMQueueEntryP__0__Send__send(msg, len);
}

# 73 "/home/tinyos/local/src/tinyos-2x/tos/lib/tossim/TossimActiveMessageC.nc"
static error_t TossimActiveMessageC__AMSend__send(am_id_t id, am_addr_t addr, 
message_t *amsg, 
uint8_t len)
#line 75
{
  error_t err;
  tossim_header_t *header = TossimActiveMessageC__getHeader(amsg);

#line 78
  sim_log_debug(57U, "AM", "AM: Sending packet (id=%hhu, len=%hhu) to %hu\n", id, len, addr);
  __nesc_hton_uint8(header->type.nxdata, id);
  __nesc_hton_uint16(header->dest.nxdata, addr);
  __nesc_hton_uint16(header->src.nxdata, TossimActiveMessageC__AMPacket__address());
  __nesc_hton_uint8(header->length.nxdata, len);
  err = TossimActiveMessageC__Model__send((int )addr, amsg, len + sizeof(tossim_header_t ) + sizeof(tossim_footer_t ));
  return err;
}

# 290 "/home/tinyos/local/src/tinyos-2x/tos/lib/tossim/CpmModelC.nc"
static double CpmModelC__packetNoise(CpmModelC__receive_message_t *msg)
#line 290
{
  double noise = CpmModelC__noise_hash_generation();
  CpmModelC__receive_message_t *list = CpmModelC__outstandingReceptionHead[sim_node()];
  int count = 0;

#line 294
  noise = pow(10.0, noise / 10.0);
  while (list != (void *)0) {
      sim_log_debug(83U, "CpmModelC", "packetReceive: outstanding from %d\n", list->source);
      count++;

      if (list->channel != sim_mote_get_radio_channel(sim_node())) {
          list = list->next;
          continue;
        }
      if (list != msg) {
          noise += pow(10.0, list->power / 10.0);
        }
      list = list->next;
    }
  noise = 10.0 * log(noise) / log(10.0);
  sim_log_debug(84U, "CpmModelC", "packetReceive: outstanding count %d noise %lf at %lf\n", count, noise, (double )sim_time() / sim_ticks_per_sec());
  return noise;
}

#line 131
static double CpmModelC__noise_hash_generation(void )
#line 131
{
  double CT = CpmModelC__timeInMs();
  uint32_t quotient = (sim_time_t )(CT * 10) / 10;
  uint8_t remain = (uint8_t )((sim_time_t )(CT * 10) % 10);
  double noise_val;
  uint16_t node_id = sim_node();

  sim_log_debug(75U, "CpmModelC", "IN: noise_hash_generation()\n");
  if (5 <= remain && remain < 10) {
      noise_val = (double )sim_noise_generate(node_id, sim_mote_get_radio_channel(node_id), quotient + 1);
    }
  else {
      noise_val = (double )sim_noise_generate(node_id, sim_mote_get_radio_channel(node_id), quotient);
    }
  sim_log_debug(76U, "CpmModelC,Tal", "%s: OUT: noise_hash_generation(): %lf\n", sim_time_string(), noise_val);

  return noise_val;
}

# 98 "/home/tinyos/local/src/tinyos-2x/tos/lib/tossim/SimMoteP.nc"
  uint8_t sim_mote_get_radio_channel(int mote)
#line 98
{
  uint8_t result;
  int tmp = sim_node();

#line 101
  sim_set_node(mote);
  result = SimMoteP__SimMote__getRadioChannel();
  sim_set_node(tmp);
  return result;
}

# 189 "/home/tinyos/local/src/tinyos-2x/tos/system/AMQueueImplP.nc"
static void /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__AMSend__sendDone(am_id_t id, message_t *msg, error_t err)
#line 189
{





  if (/*AMQueueP.AMQueueImplP*/AMQueueImplP__0__current[sim_node()] >= 1) {
      return;
    }
  if (/*AMQueueP.AMQueueImplP*/AMQueueImplP__0__queue[sim_node()][/*AMQueueP.AMQueueImplP*/AMQueueImplP__0__current[sim_node()]].msg == msg) {
      /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__sendDone(/*AMQueueP.AMQueueImplP*/AMQueueImplP__0__current[sim_node()], msg, err);
    }
  else {
      sim_log_debug(153U, "PointerBug", "%s received send done for %p, signaling for %p.\n", __FUNCTION__, msg, /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__queue[sim_node()][/*AMQueueP.AMQueueImplP*/AMQueueImplP__0__current[sim_node()]].msg);
    }
}

#line 163
static void /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__sendDone(uint8_t last, message_t * msg, error_t err)
#line 163
{
  /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__queue[sim_node()][last].msg = (void *)0;
  /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__tryToSend();
  /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__Send__sendDone(last, msg, err);
}

# 253 "/home/tinyos/local/src/tinyos-2x/tos/lib/tossim/CpmModelC.nc"
static bool CpmModelC__shouldReceive(double SNR)
#line 253
{
  double prr = CpmModelC__prr_estimate_from_snr(SNR);
  double coin = RandomUniform();

#line 256
  if (prr >= 0 && prr <= 1) {
      if (coin < prr) {
        prr = 1.0;
        }
      else {
#line 260
        prr = 0.0;
        }
    }
#line 262
  return prr;
}

# 19 "/home/tinyos/local/src/tinyos-2x/tos/lib/tossim/sim_lqi.c"
  uint8_t sim_lqi_generate(double SNR)
{
  uint8_t coin = RandomUniform() * 100;
  uint8_t i;
#line 22
  uint8_t closest_i = 0;


  for (i = 0; i < allSnr_len; i++) {
      if (allSnr[i].snr == SNR) {
          break;
        }
      else 
#line 28
        {
          if (fabs(SNR - allSnr[i].snr) < fabs(SNR - allSnr[closest_i].snr)) {
              closest_i = i;
            }
        }
    }
  i = i == allSnr_len ? closest_i : i;


  return bi_search(allSnr[i].lqi, 0, allSnr[i].numLqi - 1, coin);
}

#line 5
static uint8_t bi_search(lqi_dist_t *lqi, uint8_t low_i, uint8_t high_i, uint8_t coin)
{
  uint8_t i = low_i + (high_i - low_i + 1) / 2;
  uint8_t fromCDF = i == 0 ? 0 : lqi[i - 1].cdf;
  uint8_t toCDF = lqi[i].cdf;

#line 10
  if (fromCDF <= coin && coin < toCDF) {
      return lqi[i].lqi;
    }
  else {
#line 12
    if (fromCDF > coin) {
        return bi_search(lqi, low_i, i - 1, coin);
      }
    else 
#line 14
      {
        return bi_search(lqi, i + 1, high_i, coin);
      }
    }
}

# 307 "/home/tinyos/local/src/tinyos-2x/tos/lib/tossim/TossimPacketModelC.nc"
static bool TossimPacketModelC__GainRadioModel__shouldAck(message_t *msg)
#line 307
{
  if (TossimPacketModelC__running[sim_node()] && !TossimPacketModelC__transmitting[sim_node()]) {
      return TossimPacketModelC__Packet__shouldAck(msg);
    }
  else {
      return FALSE;
    }
}

# 221 "/home/tinyos/local/src/tinyos-2x/tos/lib/tossim/CpmModelC.nc"
static void CpmModelC__sim_gain_schedule_ack(int source, sim_time_t t, CpmModelC__receive_message_t *r)
#line 221
{
  sim_event_t *ackEvent = (sim_event_t *)malloc(sizeof(sim_event_t ));

  ackEvent->mote = source;
  ackEvent->force = 1;
  ackEvent->cancelled = 0;
  ackEvent->time = t;
  ackEvent->handle = CpmModelC__sim_gain_ack_handle;
  ackEvent->cleanup = sim_queue_cleanup_event;
  ackEvent->data = r;

  sim_queue_insert(ackEvent);
}

# 657 "MyMainC.nc"
static void MyMainC__sendDatatoBase(BasicSendReceiveMsg *btrpktt)
#line 657
{
  if (!MyMainC__busy[sim_node()]) 
    {

      if (((((((TOS_NODE_ID == 49 || TOS_NODE_ID == 50) || TOS_NODE_ID == 51) || TOS_NODE_ID == 52) || TOS_NODE_ID == 53) || TOS_NODE_ID == 54) || TOS_NODE_ID == 55) || TOS_NODE_ID == 56) 
        {

          MyMainC__BaseBytes[sim_node()] = MyMainC__BaseBytes[sim_node()] + 64;
          MyMainC__PacketAcknowledgements__requestAck(&MyMainC__pkt[sim_node()]);
          if (MyMainC__AMSend__send(57, &MyMainC__pkt[sim_node()], sizeof(BasicSendReceiveMsg )) == SUCCESS) 
            {

              MyMainC__busy[sim_node()] = TRUE;
            }
          else {
#line 670
            sim_log_error(121U, "radio_send", "Send error!\n");
            }
        }
    }
}

# 73 "/home/tinyos/local/src/tinyos-2x/tos/lib/timer/VirtualizeTimerC.nc"
static void /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__fireTimers(uint32_t now)
{
  uint16_t num;

  for (num = 0; num < /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__NUM_TIMERS; num++) 
    {
      /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer_t *timer = &/*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__m_timers[sim_node()][num];

      if (timer->isrunning) 
        {
          uint32_t elapsed = now - timer->t0;

          if (elapsed >= timer->dt) 
            {
              if (timer->isoneshot) {
                timer->isrunning = FALSE;
                }
              else {
#line 90
                timer->t0 += timer->dt;
                }
              /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__fired(num);
              break;
            }
        }
    }
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__updateFromTimer__postTask();
}

# 212 "/home/tinyos/local/src/tinyos-2x/tos/chips/atm128/timer/Atm128AlarmAsyncP.nc"
static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Alarm__startAt(uint32_t nt0, uint32_t ndt)
#line 212
{
  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {
      /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__set[sim_node()] = TRUE;
      /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__t0[sim_node()] = nt0;
      /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__dt[sim_node()] = ndt;
    }
#line 218
    __nesc_atomic_end(__nesc_atomic); }
  /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__setInterrupt();
}

#line 90
static void /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__setInterrupt(void )
#line 90
{
  bool fired = FALSE;

  { __nesc_atomic_t __nesc_atomic = __nesc_atomic_start();
    {



      uint8_t interrupt_in = 1 + /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Compare__get() - /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Timer__get();
      uint8_t newOcr0;
      uint8_t tifr = (uint8_t )/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__TimerCtrl__getInterruptFlag().flat;

#line 101
      sim_log_debug(122U, "Atm128AlarmAsyncP", "Atm128AlarmAsyncP: TIFR is %hhx\n", tifr);
      if ((interrupt_in != 0 && interrupt_in < /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__MINDT) || tifr & (1 << OCF0)) {
          if (interrupt_in < /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__MINDT) {
              sim_log_debug(123U, "Atm128AlarmAsyncP", "Atm128AlarmAsyncP: under min: %hhu.\n", interrupt_in);
            }
          else {
              sim_log_debug(124U, "Atm128AlarmAsyncP", "Atm128AlarmAsyncP: OCF set.\n");
            }
          {
#line 109
            __nesc_atomic_end(__nesc_atomic); 
#line 109
            return;
          }
        }

      if (!/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__set[sim_node()]) {
          newOcr0 = /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__MAXT;
          sim_log_debug(125U, "Atm128AlarmAsyncP", "Atm128AlarmAsyncP: no alarm set, set at max.\n");
        }
      else 
        {
          uint32_t now = /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Counter__get();

#line 120
          sim_log_debug(126U, "Atm128AlarmAsyncP", "Atm128AlarmAsyncP: now-t0 = %llu, dt = %llu\n", now - /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__t0[sim_node()], /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__dt[sim_node()]);

          if ((uint32_t )(now - /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__t0[sim_node()]) >= /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__dt[sim_node()]) 
            {
              /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__set[sim_node()] = FALSE;
              fired = TRUE;
              newOcr0 = /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__MAXT;
            }
          else 
            {


              uint32_t alarm_in = /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__t0[sim_node()] + /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__dt[sim_node()] - /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__base[sim_node()];

              if (alarm_in > /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__MAXT) {
                newOcr0 = /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__MAXT;
                }
              else {
#line 136
                if ((uint8_t )alarm_in < /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__MINDT) {
                  newOcr0 = /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__MINDT;
                  }
                else {
#line 139
                  newOcr0 = alarm_in;
                  }
                }
            }
        }
#line 142
      newOcr0--;
      /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__setOcr0(newOcr0);
    }
#line 144
    __nesc_atomic_end(__nesc_atomic); }
  if (fired) {
    /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__Alarm__fired();
    }
}

# 463 "/home/tinyos/local/src/tinyos-2x/tos/chips/atm128/timer/sim/HplAtm128Timer0AsyncP.nc"
static void HplAtm128Timer0AsyncP__Compare__set(uint8_t t)
#line 463
{
  sim_log_debug(143U, "HplAtm128Timer0AsyncP", "HplAtm128Timer0AsyncP: Setting compare: %hhu\n", t);
  /* atomic removed: atomic calls only */
#line 465
  {




    if (t == 0 || t >= 0xfe) {
      t = 1;
      }
    if (t != * (volatile uint8_t *)&atm128RegFile[sim_node()][0x31]) {
        * (volatile uint8_t *)&atm128RegFile[sim_node()][0x31] = t;
        HplAtm128Timer0AsyncP__schedule_new_compare();
      }
  }
}

#line 267
static void HplAtm128Timer0AsyncP__schedule_new_compare(void )
#line 267
{
  if (HplAtm128Timer0AsyncP__compare[sim_node()] != (void *)0) {
      HplAtm128Timer0AsyncP__cancel_compare();
    }
  if (HplAtm128Timer0AsyncP__Timer0__getScale() != AVR_CLOCK_OFF) {
      sim_event_t *newEvent = HplAtm128Timer0AsyncP__allocate_compare();

#line 273
      HplAtm128Timer0AsyncP__configure_compare(newEvent);

      HplAtm128Timer0AsyncP__compare[sim_node()] = newEvent;
      sim_queue_insert(newEvent);
    }
}

# 97 "/home/tinyos/local/src/tinyos-2x/tos/lib/tossim/sim_event_queue.c"
static sim_event_t *sim_queue_allocate_event()
#line 97
{
  sim_event_t *evt = (sim_event_t *)malloc(sizeof(sim_event_t ));

#line 99
  memset(evt, 0, sizeof(sim_event_t ));
  evt->mote = sim_node();
  return evt;
}

# 100 "/home/tinyos/local/src/tinyos-2x/tos/chips/atm128/timer/sim/HplAtm128Timer0AsyncP.nc"
  void INTERRUPT_16(void )
#line 100
{
  HplAtm128Timer0AsyncP__inOverflow[sim_node()] = TRUE;
  HplAtm128Timer0AsyncP__Timer0__overflow();
  HplAtm128Timer0AsyncP__inOverflow[sim_node()] = FALSE;
}

#line 508
static void HplAtm128Timer0AsyncP__configure_overflow(sim_event_t *evt)
#line 508
{
  sim_time_t overflowTime = 0;
  uint8_t timerVal = HplAtm128Timer0AsyncP__Timer0__get();
  uint8_t overflowVal = 0;




  overflowTime = (overflowVal - timerVal) & 0xff;
  if (overflowTime == 0) {
      overflowTime = 256;
    }




  overflowTime = overflowTime << HplAtm128Timer0AsyncP__shiftFromScale();
  overflowTime = HplAtm128Timer0AsyncP__clock_to_sim(overflowTime);
  overflowTime += sim_time();
  overflowTime -= (sim_time() - HplAtm128Timer0AsyncP__last_zero()) % (1 << HplAtm128Timer0AsyncP__shiftFromScale());

  sim_log_debug(146U, "HplAtm128Timer0AsyncP", "Scheduling new overflow for %i at time %llu\n", sim_node(), overflowTime);

  evt->time = overflowTime;
}

#line 94
  void INTERRUPT_15(void )
#line 94
{

  HplAtm128Timer0AsyncP__Compare__fired();
}

#line 231
static void HplAtm128Timer0AsyncP__configure_compare(sim_event_t *evt)
#line 231
{
  sim_time_t compareTime = 0;
  sim_time_t phaseOffset = 0;
  uint8_t timerVal = HplAtm128Timer0AsyncP__Timer0__get();
  uint8_t compareVal = HplAtm128Timer0AsyncP__Compare__get();




  compareTime = (compareVal - timerVal) & 0xff;
  if (compareTime == 0) {
      compareTime = 256;
    }






  compareTime = (compareTime + 1) << HplAtm128Timer0AsyncP__shiftFromScale();
  compareTime = HplAtm128Timer0AsyncP__clock_to_sim(compareTime);
  compareTime += sim_time();




  phaseOffset = sim_time();
  phaseOffset -= HplAtm128Timer0AsyncP__last_zero();
  phaseOffset %= HplAtm128Timer0AsyncP__clock_to_sim(1 << HplAtm128Timer0AsyncP__shiftFromScale());
  compareTime -= phaseOffset;

  sim_log_debug(135U, "HplAtm128Timer0AsyncP", "Configuring new compare of %i for %i at time %llu  (@ %llu)\n", (int )compareVal, sim_node(), compareTime, sim_time());

  evt->time = compareTime;
}

# 106 "/home/tinyos/local/src/tinyos-2x/tos/lib/tossim/TossimPacketModelC.nc"
static error_t TossimPacketModelC__Control__start(void )
#line 106
{
  if (!TossimPacketModelC__initialized[sim_node()]) {
      sim_log_error(63U, "TossimPacketModelC", "TossimPacketModelC: Control.start() called before initialization!\n");
      return FAIL;
    }
  sim_log_debug(64U, "TossimPacketModelC", "TossimPacketModelC: Control.start() called.\n");
  TossimPacketModelC__startDoneTask__postTask();
  return SUCCESS;
}

# 64 "/home/tinyos/local/src/tinyos-2x/tos/lib/timer/Timer.nc"
static void MyMainC__Timer0__startPeriodic(uint32_t dt){
#line 64
  /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__Timer__startPeriodic(0U, dt);
#line 64
}
#line 64
# 86 "/home/tinyos/local/src/tinyos-2x/tos/lib/tossim/SimMoteP.nc"
  error_t sim_mote_set_radio_channel(int mote, uint8_t newRadioChannel)
#line 86
{
  error_t result;
  int tmp = sim_node();

#line 89
  sim_set_node(mote);
  result = SimMoteP__SimMote__setRadioChannel(newRadioChannel);
  sim_set_node(tmp);
  return result;
}

#line 142
  long long int sim_mote_euid(int mote)
#line 142
{
  long long int result;
  int tmp = sim_node();

#line 145
  sim_set_node(mote);
  result = SimMoteP__SimMote__getEuid();
  sim_set_node(tmp);
  return result;
}

  void sim_mote_set_euid(int mote, long long int id)
#line 151
{
  int tmp = sim_node();

#line 153
  sim_set_node(mote);
  SimMoteP__SimMote__setEuid(id);
  sim_set_node(tmp);
}










  int sim_mote_get_variable_info(int mote, char *name, void **ptr, size_t *len)
#line 167
{
  int result;
  int tmpID = sim_node();

#line 170
  sim_set_node(mote);
  result = SimMoteP__SimMote__getVariableInfo(name, ptr, len);
  sim_log_debug(54U, "SimMoteP", "Fetched %s of %i to be %p with len %i (result %i)\n", name, mote, *ptr, *len, result);
  sim_set_node(tmpID);
  return result;
}

  void sim_mote_set_start_time(int mote, long long int t)
#line 177
{
  int tmpID = sim_node();

#line 179
  sim_set_node(mote);
  SimMoteP__startTime[sim_node()] = t;
  sim_log_debug(55U, "SimMoteP", "Setting start time to %llu\n", SimMoteP__startTime[sim_node()]);
  sim_set_node(tmpID);
  return;
}










  void sim_mote_turn_on(int mote)
#line 195
{
  int tmp = sim_node();

#line 197
  sim_set_node(mote);
  SimMoteP__SimMote__turnOn();
  sim_set_node(tmp);
}

#line 124
static void SimMoteP__SimMote__turnOn(void )
#line 124
{
  if (!SimMoteP__isOn[sim_node()]) {
      if (SimMoteP__bootEvent[sim_node()] != (void *)0) {
          SimMoteP__bootEvent[sim_node()]->cancelled = TRUE;
        }
      __nesc_nido_initialise(sim_node());
      SimMoteP__startTime[sim_node()] = sim_time();
      sim_log_debug(53U, "SimMoteP", "Setting start time to %llu\n", SimMoteP__startTime[sim_node()]);
      SimMoteP__isOn[sim_node()] = TRUE;
      sim_main_start_mote();
    }
}

#line 202
  void sim_mote_turn_off(int mote)
#line 202
{
  int tmp = sim_node();

#line 204
  sim_set_node(mote);
  SimMoteP__SimMote__turnOff();
  sim_set_node(tmp);
}










  void sim_mote_enqueue_boot_event(int mote)
#line 218
{
  int tmp = sim_node();

#line 220
  sim_set_node(mote);

  if (SimMoteP__bootEvent[sim_node()] != (void *)0) {
      if (SimMoteP__bootEvent[sim_node()]->time == SimMoteP__startTime[sim_node()]) {

          SimMoteP__bootEvent[sim_node()]->cancelled = FALSE;
          return;
        }
      else {
          SimMoteP__bootEvent[sim_node()]->cancelled = TRUE;
        }
    }

  SimMoteP__bootEvent[sim_node()] = (sim_event_t *)malloc(sizeof(sim_event_t ));
  SimMoteP__bootEvent[sim_node()]->time = SimMoteP__startTime[sim_node()];
  SimMoteP__bootEvent[sim_node()]->mote = mote;
  SimMoteP__bootEvent[sim_node()]->force = TRUE;
  SimMoteP__bootEvent[sim_node()]->data = (void *)0;
  SimMoteP__bootEvent[sim_node()]->handle = SimMoteP__sim_mote_boot_handle;
  SimMoteP__bootEvent[sim_node()]->cleanup = sim_queue_cleanup_event;
  sim_queue_insert(SimMoteP__bootEvent[sim_node()]);

  sim_set_node(tmp);
}

/* Nido variable resolver function */

static int __nesc_nido_resolve(int __nesc_mote,
                               char* varname,
                               uintptr_t* addr, size_t* size)
{
  /* Module PlatformC */

  /* Module SimMainP */

  /* Module SimSchedulerBasicP */
  if (!strcmp(varname, "SimSchedulerBasicP__m_head"))
  {
    *addr = (uintptr_t)&SimSchedulerBasicP__m_head[__nesc_mote];
    *size = sizeof(SimSchedulerBasicP__m_head[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "SimSchedulerBasicP__m_tail"))
  {
    *addr = (uintptr_t)&SimSchedulerBasicP__m_tail[__nesc_mote];
    *size = sizeof(SimSchedulerBasicP__m_tail[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "SimSchedulerBasicP__m_next"))
  {
    *addr = (uintptr_t)&SimSchedulerBasicP__m_next[__nesc_mote];
    *size = sizeof(SimSchedulerBasicP__m_next[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "SimSchedulerBasicP__sim_scheduler_event_pending"))
  {
    *addr = (uintptr_t)&SimSchedulerBasicP__sim_scheduler_event_pending[__nesc_mote];
    *size = sizeof(SimSchedulerBasicP__sim_scheduler_event_pending[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "SimSchedulerBasicP__sim_scheduler_event"))
  {
    *addr = (uintptr_t)&SimSchedulerBasicP__sim_scheduler_event[__nesc_mote];
    *size = sizeof(SimSchedulerBasicP__sim_scheduler_event[__nesc_mote]);
    return 0;
  }

  /* Module SimMoteP */
  if (!strcmp(varname, "SimMoteP__euid"))
  {
    *addr = (uintptr_t)&SimMoteP__euid[__nesc_mote];
    *size = sizeof(SimMoteP__euid[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "SimMoteP__startTime"))
  {
    *addr = (uintptr_t)&SimMoteP__startTime[__nesc_mote];
    *size = sizeof(SimMoteP__startTime[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "SimMoteP__isOn"))
  {
    *addr = (uintptr_t)&SimMoteP__isOn[__nesc_mote];
    *size = sizeof(SimMoteP__isOn[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "SimMoteP__bootEvent"))
  {
    *addr = (uintptr_t)&SimMoteP__bootEvent[__nesc_mote];
    *size = sizeof(SimMoteP__bootEvent[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "SimMoteP__radioChannel"))
  {
    *addr = (uintptr_t)&SimMoteP__radioChannel[__nesc_mote];
    *size = sizeof(SimMoteP__radioChannel[__nesc_mote]);
    return 0;
  }

  /* Module TossimActiveMessageC */
  if (!strcmp(varname, "TossimActiveMessageC__buffer"))
  {
    *addr = (uintptr_t)&TossimActiveMessageC__buffer[__nesc_mote];
    *size = sizeof(TossimActiveMessageC__buffer[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "TossimActiveMessageC__bufferPointer"))
  {
    *addr = (uintptr_t)&TossimActiveMessageC__bufferPointer[__nesc_mote];
    *size = sizeof(TossimActiveMessageC__bufferPointer[__nesc_mote]);
    return 0;
  }

  /* Module TossimPacketModelC */
  if (!strcmp(varname, "TossimPacketModelC__initialized"))
  {
    *addr = (uintptr_t)&TossimPacketModelC__initialized[__nesc_mote];
    *size = sizeof(TossimPacketModelC__initialized[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "TossimPacketModelC__running"))
  {
    *addr = (uintptr_t)&TossimPacketModelC__running[__nesc_mote];
    *size = sizeof(TossimPacketModelC__running[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "TossimPacketModelC__backoffCount"))
  {
    *addr = (uintptr_t)&TossimPacketModelC__backoffCount[__nesc_mote];
    *size = sizeof(TossimPacketModelC__backoffCount[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "TossimPacketModelC__neededFreeSamples"))
  {
    *addr = (uintptr_t)&TossimPacketModelC__neededFreeSamples[__nesc_mote];
    *size = sizeof(TossimPacketModelC__neededFreeSamples[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "TossimPacketModelC__sending"))
  {
    *addr = (uintptr_t)&TossimPacketModelC__sending[__nesc_mote];
    *size = sizeof(TossimPacketModelC__sending[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "TossimPacketModelC__transmitting"))
  {
    *addr = (uintptr_t)&TossimPacketModelC__transmitting[__nesc_mote];
    *size = sizeof(TossimPacketModelC__transmitting[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "TossimPacketModelC__sendingLength"))
  {
    *addr = (uintptr_t)&TossimPacketModelC__sendingLength[__nesc_mote];
    *size = sizeof(TossimPacketModelC__sendingLength[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "TossimPacketModelC__destNode"))
  {
    *addr = (uintptr_t)&TossimPacketModelC__destNode[__nesc_mote];
    *size = sizeof(TossimPacketModelC__destNode[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "TossimPacketModelC__sendEvent"))
  {
    *addr = (uintptr_t)&TossimPacketModelC__sendEvent[__nesc_mote];
    *size = sizeof(TossimPacketModelC__sendEvent[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "TossimPacketModelC__error"))
  {
    *addr = (uintptr_t)&TossimPacketModelC__error[__nesc_mote];
    *size = sizeof(TossimPacketModelC__error[__nesc_mote]);
    return 0;
  }

  /* Module CpmModelC */
  if (!strcmp(varname, "CpmModelC__outgoing"))
  {
    *addr = (uintptr_t)&CpmModelC__outgoing[__nesc_mote];
    *size = sizeof(CpmModelC__outgoing[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "CpmModelC__requestAck"))
  {
    *addr = (uintptr_t)&CpmModelC__requestAck[__nesc_mote];
    *size = sizeof(CpmModelC__requestAck[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "CpmModelC__receiving"))
  {
    *addr = (uintptr_t)&CpmModelC__receiving[__nesc_mote];
    *size = sizeof(CpmModelC__receiving[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "CpmModelC__rssi"))
  {
    *addr = (uintptr_t)&CpmModelC__rssi[__nesc_mote];
    *size = sizeof(CpmModelC__rssi[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "CpmModelC__transmitting"))
  {
    *addr = (uintptr_t)&CpmModelC__transmitting[__nesc_mote];
    *size = sizeof(CpmModelC__transmitting[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "CpmModelC__transmissionEndTime"))
  {
    *addr = (uintptr_t)&CpmModelC__transmissionEndTime[__nesc_mote];
    *size = sizeof(CpmModelC__transmissionEndTime[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "CpmModelC__outstandingReceptionHead"))
  {
    *addr = (uintptr_t)&CpmModelC__outstandingReceptionHead[__nesc_mote];
    *size = sizeof(CpmModelC__outstandingReceptionHead[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "CpmModelC__clearThreshold"))
  {
    *addr = (uintptr_t)&CpmModelC__clearThreshold[__nesc_mote];
    *size = sizeof(CpmModelC__clearThreshold[__nesc_mote]);
    return 0;
  }

  /* Module ActiveMessageAddressC */
  if (!strcmp(varname, "ActiveMessageAddressC__set"))
  {
    *addr = (uintptr_t)&ActiveMessageAddressC__set[__nesc_mote];
    *size = sizeof(ActiveMessageAddressC__set[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "ActiveMessageAddressC__addr"))
  {
    *addr = (uintptr_t)&ActiveMessageAddressC__addr[__nesc_mote];
    *size = sizeof(ActiveMessageAddressC__addr[__nesc_mote]);
    return 0;
  }

  /* Module MyMainC */
  if (!strcmp(varname, "MyMainC__Baseindex"))
  {
    *addr = (uintptr_t)&MyMainC__Baseindex[__nesc_mote];
    *size = sizeof(MyMainC__Baseindex[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "MyMainC__FAILS"))
  {
    *addr = (uintptr_t)&MyMainC__FAILS[__nesc_mote];
    *size = sizeof(MyMainC__FAILS[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "MyMainC__LOST"))
  {
    *addr = (uintptr_t)&MyMainC__LOST[__nesc_mote];
    *size = sizeof(MyMainC__LOST[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "MyMainC__index"))
  {
    *addr = (uintptr_t)&MyMainC__index[__nesc_mote];
    *size = sizeof(MyMainC__index[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "MyMainC__receivedData"))
  {
    *addr = (uintptr_t)&MyMainC__receivedData[__nesc_mote];
    *size = sizeof(MyMainC__receivedData[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "MyMainC__receivedDataCount"))
  {
    *addr = (uintptr_t)&MyMainC__receivedDataCount[__nesc_mote];
    *size = sizeof(MyMainC__receivedDataCount[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "MyMainC__BasereceivedData"))
  {
    *addr = (uintptr_t)&MyMainC__BasereceivedData[__nesc_mote];
    *size = sizeof(MyMainC__BasereceivedData[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "MyMainC__BasereceivedDataCount"))
  {
    *addr = (uintptr_t)&MyMainC__BasereceivedDataCount[__nesc_mote];
    *size = sizeof(MyMainC__BasereceivedDataCount[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "MyMainC__ClusterBytes"))
  {
    *addr = (uintptr_t)&MyMainC__ClusterBytes[__nesc_mote];
    *size = sizeof(MyMainC__ClusterBytes[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "MyMainC__ClusterNacks"))
  {
    *addr = (uintptr_t)&MyMainC__ClusterNacks[__nesc_mote];
    *size = sizeof(MyMainC__ClusterNacks[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "MyMainC__BaseBytes"))
  {
    *addr = (uintptr_t)&MyMainC__BaseBytes[__nesc_mote];
    *size = sizeof(MyMainC__BaseBytes[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "MyMainC__BaseNacks"))
  {
    *addr = (uintptr_t)&MyMainC__BaseNacks[__nesc_mote];
    *size = sizeof(MyMainC__BaseNacks[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "MyMainC__busy"))
  {
    *addr = (uintptr_t)&MyMainC__busy[__nesc_mote];
    *size = sizeof(MyMainC__busy[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "MyMainC__btrpkt"))
  {
    *addr = (uintptr_t)&MyMainC__btrpkt[__nesc_mote];
    *size = sizeof(MyMainC__btrpkt[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "MyMainC__btrpkts"))
  {
    *addr = (uintptr_t)&MyMainC__btrpkts[__nesc_mote];
    *size = sizeof(MyMainC__btrpkts[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "MyMainC__pkt"))
  {
    *addr = (uintptr_t)&MyMainC__pkt[__nesc_mote];
    *size = sizeof(MyMainC__pkt[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "MyMainC__receivedFromNode1Counter"))
  {
    *addr = (uintptr_t)&MyMainC__receivedFromNode1Counter[__nesc_mote];
    *size = sizeof(MyMainC__receivedFromNode1Counter[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "MyMainC__receivedFromNode2Counter"))
  {
    *addr = (uintptr_t)&MyMainC__receivedFromNode2Counter[__nesc_mote];
    *size = sizeof(MyMainC__receivedFromNode2Counter[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "MyMainC__receivedFromNode3Counter"))
  {
    *addr = (uintptr_t)&MyMainC__receivedFromNode3Counter[__nesc_mote];
    *size = sizeof(MyMainC__receivedFromNode3Counter[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "MyMainC__receivedFromNode4Counter"))
  {
    *addr = (uintptr_t)&MyMainC__receivedFromNode4Counter[__nesc_mote];
    *size = sizeof(MyMainC__receivedFromNode4Counter[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "MyMainC__receivedFromNode5Counter"))
  {
    *addr = (uintptr_t)&MyMainC__receivedFromNode5Counter[__nesc_mote];
    *size = sizeof(MyMainC__receivedFromNode5Counter[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "MyMainC__receivedFromNode6Counter"))
  {
    *addr = (uintptr_t)&MyMainC__receivedFromNode6Counter[__nesc_mote];
    *size = sizeof(MyMainC__receivedFromNode6Counter[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "MyMainC__receivedFromNode7Counter"))
  {
    *addr = (uintptr_t)&MyMainC__receivedFromNode7Counter[__nesc_mote];
    *size = sizeof(MyMainC__receivedFromNode7Counter[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "MyMainC__receivedFromNode8Counter"))
  {
    *addr = (uintptr_t)&MyMainC__receivedFromNode8Counter[__nesc_mote];
    *size = sizeof(MyMainC__receivedFromNode8Counter[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "MyMainC__receivedFromNode9Counter"))
  {
    *addr = (uintptr_t)&MyMainC__receivedFromNode9Counter[__nesc_mote];
    *size = sizeof(MyMainC__receivedFromNode9Counter[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "MyMainC__receivedFromNode10Counter"))
  {
    *addr = (uintptr_t)&MyMainC__receivedFromNode10Counter[__nesc_mote];
    *size = sizeof(MyMainC__receivedFromNode10Counter[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "MyMainC__receivedFromNode11Counter"))
  {
    *addr = (uintptr_t)&MyMainC__receivedFromNode11Counter[__nesc_mote];
    *size = sizeof(MyMainC__receivedFromNode11Counter[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "MyMainC__receivedFromNode12Counter"))
  {
    *addr = (uintptr_t)&MyMainC__receivedFromNode12Counter[__nesc_mote];
    *size = sizeof(MyMainC__receivedFromNode12Counter[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "MyMainC__receivedFromNode13Counter"))
  {
    *addr = (uintptr_t)&MyMainC__receivedFromNode13Counter[__nesc_mote];
    *size = sizeof(MyMainC__receivedFromNode13Counter[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "MyMainC__receivedFromNode14Counter"))
  {
    *addr = (uintptr_t)&MyMainC__receivedFromNode14Counter[__nesc_mote];
    *size = sizeof(MyMainC__receivedFromNode14Counter[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "MyMainC__receivedFromNode15Counter"))
  {
    *addr = (uintptr_t)&MyMainC__receivedFromNode15Counter[__nesc_mote];
    *size = sizeof(MyMainC__receivedFromNode15Counter[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "MyMainC__receivedFromNode17Counter"))
  {
    *addr = (uintptr_t)&MyMainC__receivedFromNode17Counter[__nesc_mote];
    *size = sizeof(MyMainC__receivedFromNode17Counter[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "MyMainC__receivedFromNode18Counter"))
  {
    *addr = (uintptr_t)&MyMainC__receivedFromNode18Counter[__nesc_mote];
    *size = sizeof(MyMainC__receivedFromNode18Counter[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "MyMainC__receivedFromNode19Counter"))
  {
    *addr = (uintptr_t)&MyMainC__receivedFromNode19Counter[__nesc_mote];
    *size = sizeof(MyMainC__receivedFromNode19Counter[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "MyMainC__receivedFromNode20Counter"))
  {
    *addr = (uintptr_t)&MyMainC__receivedFromNode20Counter[__nesc_mote];
    *size = sizeof(MyMainC__receivedFromNode20Counter[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "MyMainC__receivedFromNode21Counter"))
  {
    *addr = (uintptr_t)&MyMainC__receivedFromNode21Counter[__nesc_mote];
    *size = sizeof(MyMainC__receivedFromNode21Counter[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "MyMainC__receivedFromNode22Counter"))
  {
    *addr = (uintptr_t)&MyMainC__receivedFromNode22Counter[__nesc_mote];
    *size = sizeof(MyMainC__receivedFromNode22Counter[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "MyMainC__receivedFromNode23Counter"))
  {
    *addr = (uintptr_t)&MyMainC__receivedFromNode23Counter[__nesc_mote];
    *size = sizeof(MyMainC__receivedFromNode23Counter[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "MyMainC__receivedFromNode24Counter"))
  {
    *addr = (uintptr_t)&MyMainC__receivedFromNode24Counter[__nesc_mote];
    *size = sizeof(MyMainC__receivedFromNode24Counter[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "MyMainC__receivedFromNode25Counter"))
  {
    *addr = (uintptr_t)&MyMainC__receivedFromNode25Counter[__nesc_mote];
    *size = sizeof(MyMainC__receivedFromNode25Counter[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "MyMainC__receivedFromNode26Counter"))
  {
    *addr = (uintptr_t)&MyMainC__receivedFromNode26Counter[__nesc_mote];
    *size = sizeof(MyMainC__receivedFromNode26Counter[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "MyMainC__receivedFromNode27Counter"))
  {
    *addr = (uintptr_t)&MyMainC__receivedFromNode27Counter[__nesc_mote];
    *size = sizeof(MyMainC__receivedFromNode27Counter[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "MyMainC__receivedFromNode28Counter"))
  {
    *addr = (uintptr_t)&MyMainC__receivedFromNode28Counter[__nesc_mote];
    *size = sizeof(MyMainC__receivedFromNode28Counter[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "MyMainC__receivedFromNode29Counter"))
  {
    *addr = (uintptr_t)&MyMainC__receivedFromNode29Counter[__nesc_mote];
    *size = sizeof(MyMainC__receivedFromNode29Counter[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "MyMainC__receivedFromNode30Counter"))
  {
    *addr = (uintptr_t)&MyMainC__receivedFromNode30Counter[__nesc_mote];
    *size = sizeof(MyMainC__receivedFromNode30Counter[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "MyMainC__receivedFromNode31Counter"))
  {
    *addr = (uintptr_t)&MyMainC__receivedFromNode31Counter[__nesc_mote];
    *size = sizeof(MyMainC__receivedFromNode31Counter[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "MyMainC__receivedFromNode32Counter"))
  {
    *addr = (uintptr_t)&MyMainC__receivedFromNode32Counter[__nesc_mote];
    *size = sizeof(MyMainC__receivedFromNode32Counter[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "MyMainC__receivedFromNode33Counter"))
  {
    *addr = (uintptr_t)&MyMainC__receivedFromNode33Counter[__nesc_mote];
    *size = sizeof(MyMainC__receivedFromNode33Counter[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "MyMainC__receivedFromNode34Counter"))
  {
    *addr = (uintptr_t)&MyMainC__receivedFromNode34Counter[__nesc_mote];
    *size = sizeof(MyMainC__receivedFromNode34Counter[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "MyMainC__receivedFromNode35Counter"))
  {
    *addr = (uintptr_t)&MyMainC__receivedFromNode35Counter[__nesc_mote];
    *size = sizeof(MyMainC__receivedFromNode35Counter[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "MyMainC__receivedFromNode36Counter"))
  {
    *addr = (uintptr_t)&MyMainC__receivedFromNode36Counter[__nesc_mote];
    *size = sizeof(MyMainC__receivedFromNode36Counter[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "MyMainC__receivedFromNode37Counter"))
  {
    *addr = (uintptr_t)&MyMainC__receivedFromNode37Counter[__nesc_mote];
    *size = sizeof(MyMainC__receivedFromNode37Counter[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "MyMainC__receivedFromNode38Counter"))
  {
    *addr = (uintptr_t)&MyMainC__receivedFromNode38Counter[__nesc_mote];
    *size = sizeof(MyMainC__receivedFromNode38Counter[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "MyMainC__receivedFromNode39Counter"))
  {
    *addr = (uintptr_t)&MyMainC__receivedFromNode39Counter[__nesc_mote];
    *size = sizeof(MyMainC__receivedFromNode39Counter[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "MyMainC__receivedFromNode40Counter"))
  {
    *addr = (uintptr_t)&MyMainC__receivedFromNode40Counter[__nesc_mote];
    *size = sizeof(MyMainC__receivedFromNode40Counter[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "MyMainC__receivedFromNode41Counter"))
  {
    *addr = (uintptr_t)&MyMainC__receivedFromNode41Counter[__nesc_mote];
    *size = sizeof(MyMainC__receivedFromNode41Counter[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "MyMainC__receivedFromNode42Counter"))
  {
    *addr = (uintptr_t)&MyMainC__receivedFromNode42Counter[__nesc_mote];
    *size = sizeof(MyMainC__receivedFromNode42Counter[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "MyMainC__receivedFromNode43Counter"))
  {
    *addr = (uintptr_t)&MyMainC__receivedFromNode43Counter[__nesc_mote];
    *size = sizeof(MyMainC__receivedFromNode43Counter[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "MyMainC__receivedFromNode44Counter"))
  {
    *addr = (uintptr_t)&MyMainC__receivedFromNode44Counter[__nesc_mote];
    *size = sizeof(MyMainC__receivedFromNode44Counter[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "MyMainC__receivedFromNode45Counter"))
  {
    *addr = (uintptr_t)&MyMainC__receivedFromNode45Counter[__nesc_mote];
    *size = sizeof(MyMainC__receivedFromNode45Counter[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "MyMainC__receivedFromNode46Counter"))
  {
    *addr = (uintptr_t)&MyMainC__receivedFromNode46Counter[__nesc_mote];
    *size = sizeof(MyMainC__receivedFromNode46Counter[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "MyMainC__receivedFromNode47Counter"))
  {
    *addr = (uintptr_t)&MyMainC__receivedFromNode47Counter[__nesc_mote];
    *size = sizeof(MyMainC__receivedFromNode47Counter[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "MyMainC__receivedFromNode48Counter"))
  {
    *addr = (uintptr_t)&MyMainC__receivedFromNode48Counter[__nesc_mote];
    *size = sizeof(MyMainC__receivedFromNode48Counter[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "MyMainC__receivedFromNode49Counter"))
  {
    *addr = (uintptr_t)&MyMainC__receivedFromNode49Counter[__nesc_mote];
    *size = sizeof(MyMainC__receivedFromNode49Counter[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "MyMainC__receivedFromNode50Counter"))
  {
    *addr = (uintptr_t)&MyMainC__receivedFromNode50Counter[__nesc_mote];
    *size = sizeof(MyMainC__receivedFromNode50Counter[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "MyMainC__receivedFromNode51Counter"))
  {
    *addr = (uintptr_t)&MyMainC__receivedFromNode51Counter[__nesc_mote];
    *size = sizeof(MyMainC__receivedFromNode51Counter[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "MyMainC__receivedFromNode52Counter"))
  {
    *addr = (uintptr_t)&MyMainC__receivedFromNode52Counter[__nesc_mote];
    *size = sizeof(MyMainC__receivedFromNode52Counter[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "MyMainC__receivedFromNode53Counter"))
  {
    *addr = (uintptr_t)&MyMainC__receivedFromNode53Counter[__nesc_mote];
    *size = sizeof(MyMainC__receivedFromNode53Counter[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "MyMainC__receivedFromNode54Counter"))
  {
    *addr = (uintptr_t)&MyMainC__receivedFromNode54Counter[__nesc_mote];
    *size = sizeof(MyMainC__receivedFromNode54Counter[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "MyMainC__receivedFromNode55Counter"))
  {
    *addr = (uintptr_t)&MyMainC__receivedFromNode55Counter[__nesc_mote];
    *size = sizeof(MyMainC__receivedFromNode55Counter[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "MyMainC__receivedFromNode56Counter"))
  {
    *addr = (uintptr_t)&MyMainC__receivedFromNode56Counter[__nesc_mote];
    *size = sizeof(MyMainC__receivedFromNode56Counter[__nesc_mote]);
    return 0;
  }

  /* Module Atm128AlarmAsyncP__0 */
  if (!strcmp(varname, "/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__set"))
  {
    *addr = (uintptr_t)&/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__set[__nesc_mote];
    *size = sizeof(/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__set[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__t0"))
  {
    *addr = (uintptr_t)&/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__t0[__nesc_mote];
    *size = sizeof(/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__t0[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__dt"))
  {
    *addr = (uintptr_t)&/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__dt[__nesc_mote];
    *size = sizeof(/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__dt[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__base"))
  {
    *addr = (uintptr_t)&/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__base[__nesc_mote];
    *size = sizeof(/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__base[__nesc_mote]);
    return 0;
  }

  /* Module HplAtm128Timer0AsyncP */
  if (!strcmp(varname, "HplAtm128Timer0AsyncP__inOverflow"))
  {
    *addr = (uintptr_t)&HplAtm128Timer0AsyncP__inOverflow[__nesc_mote];
    *size = sizeof(HplAtm128Timer0AsyncP__inOverflow[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "HplAtm128Timer0AsyncP__lastZero"))
  {
    *addr = (uintptr_t)&HplAtm128Timer0AsyncP__lastZero[__nesc_mote];
    *size = sizeof(HplAtm128Timer0AsyncP__lastZero[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "HplAtm128Timer0AsyncP__oldScale"))
  {
    *addr = (uintptr_t)&HplAtm128Timer0AsyncP__oldScale[__nesc_mote];
    *size = sizeof(HplAtm128Timer0AsyncP__oldScale[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "HplAtm128Timer0AsyncP__compare"))
  {
    *addr = (uintptr_t)&HplAtm128Timer0AsyncP__compare[__nesc_mote];
    *size = sizeof(HplAtm128Timer0AsyncP__compare[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "HplAtm128Timer0AsyncP__overflow"))
  {
    *addr = (uintptr_t)&HplAtm128Timer0AsyncP__overflow[__nesc_mote];
    *size = sizeof(HplAtm128Timer0AsyncP__overflow[__nesc_mote]);
    return 0;
  }

  /* Module AlarmToTimerC__0 */
  if (!strcmp(varname, "/*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__m_dt"))
  {
    *addr = (uintptr_t)&/*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__m_dt[__nesc_mote];
    *size = sizeof(/*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__m_dt[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "/*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__m_oneshot"))
  {
    *addr = (uintptr_t)&/*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__m_oneshot[__nesc_mote];
    *size = sizeof(/*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__m_oneshot[__nesc_mote]);
    return 0;
  }

  /* Module VirtualizeTimerC__0 */
  if (!strcmp(varname, "/*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__m_timers"))
  {
    *addr = (uintptr_t)&/*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__m_timers[__nesc_mote];
    *size = sizeof(/*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__m_timers[__nesc_mote]);
    return 0;
  }

  /* Module CounterToLocalTimeC__0 */

  /* Module AMQueueEntryP__0 */

  /* Module AMQueueImplP__0 */
  if (!strcmp(varname, "/*AMQueueP.AMQueueImplP*/AMQueueImplP__0__current"))
  {
    *addr = (uintptr_t)&/*AMQueueP.AMQueueImplP*/AMQueueImplP__0__current[__nesc_mote];
    *size = sizeof(/*AMQueueP.AMQueueImplP*/AMQueueImplP__0__current[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "/*AMQueueP.AMQueueImplP*/AMQueueImplP__0__queue"))
  {
    *addr = (uintptr_t)&/*AMQueueP.AMQueueImplP*/AMQueueImplP__0__queue[__nesc_mote];
    *size = sizeof(/*AMQueueP.AMQueueImplP*/AMQueueImplP__0__queue[__nesc_mote]);
    return 0;
  }
  if (!strcmp(varname, "/*AMQueueP.AMQueueImplP*/AMQueueImplP__0__cancelMask"))
  {
    *addr = (uintptr_t)&/*AMQueueP.AMQueueImplP*/AMQueueImplP__0__cancelMask[__nesc_mote];
    *size = sizeof(/*AMQueueP.AMQueueImplP*/AMQueueImplP__0__cancelMask[__nesc_mote]);
    return 0;
  }

  return -1;
}
/* Invoke static initialisers for mote '__nesc_mote' */

static void __nesc_nido_initialise(int __nesc_mote)
{
  /* Module PlatformC */

  /* Module SimMainP */

  /* Module SimSchedulerBasicP */
  memset((void *)&SimSchedulerBasicP__m_head[__nesc_mote], 0, sizeof SimSchedulerBasicP__m_head[__nesc_mote]);
  memset((void *)&SimSchedulerBasicP__m_tail[__nesc_mote], 0, sizeof SimSchedulerBasicP__m_tail[__nesc_mote]);
  memset((void *)&SimSchedulerBasicP__m_next[__nesc_mote], 0, sizeof SimSchedulerBasicP__m_next[__nesc_mote]);
  SimSchedulerBasicP__sim_scheduler_event_pending[__nesc_mote] = FALSE;
  memset((void *)&SimSchedulerBasicP__sim_scheduler_event[__nesc_mote], 0, sizeof SimSchedulerBasicP__sim_scheduler_event[__nesc_mote]);

  /* Module SimMoteP */
  memset((void *)&SimMoteP__euid[__nesc_mote], 0, sizeof SimMoteP__euid[__nesc_mote]);
  memset((void *)&SimMoteP__startTime[__nesc_mote], 0, sizeof SimMoteP__startTime[__nesc_mote]);
  memset((void *)&SimMoteP__isOn[__nesc_mote], 0, sizeof SimMoteP__isOn[__nesc_mote]);
  memset((void *)&SimMoteP__bootEvent[__nesc_mote], 0, sizeof SimMoteP__bootEvent[__nesc_mote]);
  SimMoteP__radioChannel[__nesc_mote] = 26;

  /* Module TossimActiveMessageC */
  memset((void *)&TossimActiveMessageC__buffer[__nesc_mote], 0, sizeof TossimActiveMessageC__buffer[__nesc_mote]);
  TossimActiveMessageC__bufferPointer[__nesc_mote] = &TossimActiveMessageC__buffer[__nesc_mote];

  /* Module TossimPacketModelC */
  TossimPacketModelC__initialized[__nesc_mote] = FALSE;
  TossimPacketModelC__running[__nesc_mote] = FALSE;
  memset((void *)&TossimPacketModelC__backoffCount[__nesc_mote], 0, sizeof TossimPacketModelC__backoffCount[__nesc_mote]);
  memset((void *)&TossimPacketModelC__neededFreeSamples[__nesc_mote], 0, sizeof TossimPacketModelC__neededFreeSamples[__nesc_mote]);
  TossimPacketModelC__sending[__nesc_mote] = (void *)0;
  TossimPacketModelC__transmitting[__nesc_mote] = FALSE;
  TossimPacketModelC__sendingLength[__nesc_mote] = 0;
  memset((void *)&TossimPacketModelC__destNode[__nesc_mote], 0, sizeof TossimPacketModelC__destNode[__nesc_mote]);
  memset((void *)&TossimPacketModelC__sendEvent[__nesc_mote], 0, sizeof TossimPacketModelC__sendEvent[__nesc_mote]);
  TossimPacketModelC__error[__nesc_mote] = 0;

  /* Module CpmModelC */
  memset((void *)&CpmModelC__outgoing[__nesc_mote], 0, sizeof CpmModelC__outgoing[__nesc_mote]);
  memset((void *)&CpmModelC__requestAck[__nesc_mote], 0, sizeof CpmModelC__requestAck[__nesc_mote]);
  CpmModelC__receiving[__nesc_mote] = 0;
  CpmModelC__rssi[__nesc_mote] = FALSE;
  CpmModelC__transmitting[__nesc_mote] = 0;
  memset((void *)&CpmModelC__transmissionEndTime[__nesc_mote], 0, sizeof CpmModelC__transmissionEndTime[__nesc_mote]);
  CpmModelC__outstandingReceptionHead[__nesc_mote] = (void *)0;
  CpmModelC__clearThreshold[__nesc_mote] = -72.0;

  /* Module ActiveMessageAddressC */
  ActiveMessageAddressC__set[__nesc_mote] = FALSE;
  memset((void *)&ActiveMessageAddressC__addr[__nesc_mote], 0, sizeof ActiveMessageAddressC__addr[__nesc_mote]);

  /* Module MyMainC */
  MyMainC__Baseindex[__nesc_mote] = 0;
  MyMainC__FAILS[__nesc_mote] = 0;
  MyMainC__LOST[__nesc_mote] = 0;
  MyMainC__index[__nesc_mote] = 0;
  memset((void *)&MyMainC__receivedData[__nesc_mote], 0, sizeof MyMainC__receivedData[__nesc_mote]);
  MyMainC__receivedDataCount[__nesc_mote] = 0;
  memset((void *)&MyMainC__BasereceivedData[__nesc_mote], 0, sizeof MyMainC__BasereceivedData[__nesc_mote]);
  MyMainC__BasereceivedDataCount[__nesc_mote] = 0;
  MyMainC__ClusterBytes[__nesc_mote] = 0;
  MyMainC__ClusterNacks[__nesc_mote] = 0;
  MyMainC__BaseBytes[__nesc_mote] = 0;
  MyMainC__BaseNacks[__nesc_mote] = 0;
  MyMainC__busy[__nesc_mote] = FALSE;
  memset((void *)&MyMainC__btrpkt[__nesc_mote], 0, sizeof MyMainC__btrpkt[__nesc_mote]);
  memset((void *)&MyMainC__btrpkts[__nesc_mote], 0, sizeof MyMainC__btrpkts[__nesc_mote]);
  memset((void *)&MyMainC__pkt[__nesc_mote], 0, sizeof MyMainC__pkt[__nesc_mote]);
  MyMainC__receivedFromNode1Counter[__nesc_mote] = 0;
  MyMainC__receivedFromNode2Counter[__nesc_mote] = 0;
  MyMainC__receivedFromNode3Counter[__nesc_mote] = 0;
  MyMainC__receivedFromNode4Counter[__nesc_mote] = 0;
  MyMainC__receivedFromNode5Counter[__nesc_mote] = 0;
  MyMainC__receivedFromNode6Counter[__nesc_mote] = 0;
  MyMainC__receivedFromNode7Counter[__nesc_mote] = 0;
  MyMainC__receivedFromNode8Counter[__nesc_mote] = 0;
  MyMainC__receivedFromNode9Counter[__nesc_mote] = 0;
  MyMainC__receivedFromNode10Counter[__nesc_mote] = 0;
  MyMainC__receivedFromNode11Counter[__nesc_mote] = 0;
  MyMainC__receivedFromNode12Counter[__nesc_mote] = 0;
  MyMainC__receivedFromNode13Counter[__nesc_mote] = 0;
  MyMainC__receivedFromNode14Counter[__nesc_mote] = 0;
  MyMainC__receivedFromNode15Counter[__nesc_mote] = 0;
  MyMainC__receivedFromNode17Counter[__nesc_mote] = 0;
  MyMainC__receivedFromNode18Counter[__nesc_mote] = 0;
  MyMainC__receivedFromNode19Counter[__nesc_mote] = 0;
  MyMainC__receivedFromNode20Counter[__nesc_mote] = 0;
  MyMainC__receivedFromNode21Counter[__nesc_mote] = 0;
  MyMainC__receivedFromNode22Counter[__nesc_mote] = 0;
  MyMainC__receivedFromNode23Counter[__nesc_mote] = 0;
  MyMainC__receivedFromNode24Counter[__nesc_mote] = 0;
  MyMainC__receivedFromNode25Counter[__nesc_mote] = 0;
  MyMainC__receivedFromNode26Counter[__nesc_mote] = 0;
  MyMainC__receivedFromNode27Counter[__nesc_mote] = 0;
  MyMainC__receivedFromNode28Counter[__nesc_mote] = 0;
  MyMainC__receivedFromNode29Counter[__nesc_mote] = 0;
  MyMainC__receivedFromNode30Counter[__nesc_mote] = 0;
  MyMainC__receivedFromNode31Counter[__nesc_mote] = 0;
  MyMainC__receivedFromNode32Counter[__nesc_mote] = 0;
  MyMainC__receivedFromNode33Counter[__nesc_mote] = 0;
  MyMainC__receivedFromNode34Counter[__nesc_mote] = 0;
  MyMainC__receivedFromNode35Counter[__nesc_mote] = 0;
  MyMainC__receivedFromNode36Counter[__nesc_mote] = 0;
  MyMainC__receivedFromNode37Counter[__nesc_mote] = 0;
  MyMainC__receivedFromNode38Counter[__nesc_mote] = 0;
  MyMainC__receivedFromNode39Counter[__nesc_mote] = 0;
  MyMainC__receivedFromNode40Counter[__nesc_mote] = 0;
  MyMainC__receivedFromNode41Counter[__nesc_mote] = 0;
  MyMainC__receivedFromNode42Counter[__nesc_mote] = 0;
  MyMainC__receivedFromNode43Counter[__nesc_mote] = 0;
  MyMainC__receivedFromNode44Counter[__nesc_mote] = 0;
  MyMainC__receivedFromNode45Counter[__nesc_mote] = 0;
  MyMainC__receivedFromNode46Counter[__nesc_mote] = 0;
  MyMainC__receivedFromNode47Counter[__nesc_mote] = 0;
  MyMainC__receivedFromNode48Counter[__nesc_mote] = 0;
  MyMainC__receivedFromNode49Counter[__nesc_mote] = 0;
  MyMainC__receivedFromNode50Counter[__nesc_mote] = 0;
  MyMainC__receivedFromNode51Counter[__nesc_mote] = 0;
  MyMainC__receivedFromNode52Counter[__nesc_mote] = 0;
  MyMainC__receivedFromNode53Counter[__nesc_mote] = 0;
  MyMainC__receivedFromNode54Counter[__nesc_mote] = 0;
  MyMainC__receivedFromNode55Counter[__nesc_mote] = 0;
  MyMainC__receivedFromNode56Counter[__nesc_mote] = 0;

  /* Module Atm128AlarmAsyncP__0 */
  memset((void *)&/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__set[__nesc_mote], 0, sizeof /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__set[__nesc_mote]);
  memset((void *)&/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__t0[__nesc_mote], 0, sizeof /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__t0[__nesc_mote]);
  memset((void *)&/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__dt[__nesc_mote], 0, sizeof /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__dt[__nesc_mote]);
  memset((void *)&/*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__base[__nesc_mote], 0, sizeof /*AlarmCounterMilliP.Atm128AlarmAsyncC.Atm128AlarmAsyncP*/Atm128AlarmAsyncP__0__base[__nesc_mote]);

  /* Module HplAtm128Timer0AsyncP */
  HplAtm128Timer0AsyncP__inOverflow[__nesc_mote] = 0;
  HplAtm128Timer0AsyncP__lastZero[__nesc_mote] = 0;
  HplAtm128Timer0AsyncP__oldScale[__nesc_mote] = AVR_CLOCK_OFF;
  memset((void *)&HplAtm128Timer0AsyncP__compare[__nesc_mote], 0, sizeof HplAtm128Timer0AsyncP__compare[__nesc_mote]);
  memset((void *)&HplAtm128Timer0AsyncP__overflow[__nesc_mote], 0, sizeof HplAtm128Timer0AsyncP__overflow[__nesc_mote]);

  /* Module AlarmToTimerC__0 */
  memset((void *)&/*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__m_dt[__nesc_mote], 0, sizeof /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__m_dt[__nesc_mote]);
  memset((void *)&/*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__m_oneshot[__nesc_mote], 0, sizeof /*HilTimerMilliC.AlarmToTimerC*/AlarmToTimerC__0__m_oneshot[__nesc_mote]);

  /* Module VirtualizeTimerC__0 */
  memset((void *)&/*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__m_timers[__nesc_mote], 0, sizeof /*HilTimerMilliC.VirtualizeTimerC*/VirtualizeTimerC__0__m_timers[__nesc_mote]);

  /* Module CounterToLocalTimeC__0 */

  /* Module AMQueueEntryP__0 */

  /* Module AMQueueImplP__0 */
  /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__current[__nesc_mote] = 1;
  memset((void *)&/*AMQueueP.AMQueueImplP*/AMQueueImplP__0__queue[__nesc_mote], 0, sizeof /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__queue[__nesc_mote]);
  memset((void *)&/*AMQueueP.AMQueueImplP*/AMQueueImplP__0__cancelMask[__nesc_mote], 0, sizeof /*AMQueueP.AMQueueImplP*/AMQueueImplP__0__cancelMask[__nesc_mote]);

}
