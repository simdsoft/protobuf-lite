/* config.h.  Generated from config.h.in by configure.  */
/* config.h.in.  Generated from configure.ac by autoheader.  */

/* the name of <unordered_map> */
#define HASH_MAP_CLASS unordered_map

/* the location of <unordered_map> or <unordered_map> */
#define HASH_MAP_H <unordered_map>

/* the namespace of unordered_map/unordered_set */
#define HASH_NAMESPACE std

/* the name of <unordered_set> */
#define HASH_SET_CLASS unordered_set

/* the location of <unordered_set> or <unordered_set> */
#define HASH_SET_H <unordered_set>

/* Define if you have POSIX threads libraries and header files. */
#define HAVE_PTHREAD 1

/* Define to necessary symbol if this constant uses a non-standard name on
   your system. */
/* #undef PTHREAD_CREATE_JOINABLE */

/* Define to 1 if you have the ANSI C header files. */
#define STDC_HEADERS 1

/* Enable extensions on AIX 3, Interix.  */
#ifndef _ALL_SOURCE
# define _ALL_SOURCE 1
#endif
/* Enable GNU extensions on systems that have them.  */
#ifndef _GNU_SOURCE
# define _GNU_SOURCE 1
#endif
/* Enable threading extensions on Solaris.  */
#ifndef _POSIX_PTHREAD_SEMANTICS
# define _POSIX_PTHREAD_SEMANTICS 1
#endif
/* Enable extensions on HP NonStop.  */
#ifndef _TANDEM_SOURCE
# define _TANDEM_SOURCE 1
#endif
/* Enable general extensions on Solaris.  */
#ifndef __EXTENSIONS__
# define __EXTENSIONS__ 1
#endif

