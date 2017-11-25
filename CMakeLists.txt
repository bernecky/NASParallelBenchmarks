CMAKE_MINIMUM_REQUIRED (VERSION 3.6)

PROJECT (sac-nasbench)

# Where the compiled sac modules result
SET (DLL_BUILD_DIR  "${PROJECT_BINARY_DIR}/lib")

# For what targets we build modules
SET (TARGETS            seq mt_pth  CACHE STRING "Build stdlib-jpeg for these targets")
SET (SAC2C_EXEC                     CACHE STRING "A path to sac2c compiler")
SET (LINKSETSIZE        "500"       CACHE STRING "Set a value for -linksetsize parameter of sac2c")
OPTION (EXCLUDE_ERRORS "Do not build benchmarks that cause compiler errors (may change)" ON)

# Check whether sac2c is operational
INCLUDE ("cmake-common/check-sac2c.cmake") # get SAC2C_VERSION
INCLUDE ("cmake-common/misc-macros.cmake")

# The old Makefile had SAC2CFLAGS set to "-O3 -v1 -maxlur 3"
# We port -O3 and -maxlur 3, but we use -v0
SET (SAC2C_DEF_FLAGS -v0 -O3 -maxlur 3 -linksetsize ${LINKSETSIZE} -L ${DLL_BUILD_DIR} -T ${DLL_BUILD_DIR})

FOREACH (TARGET IN ITEMS ${TARGETS})
    #ADD_SUBDIRECTORY (BT   BT-${TARGET}) # not implemented
    #ADD_SUBDIRECTORY (IS   IS-${TARGET}) # not implemented
    #ADD_SUBDIRECTORY (LU   LU-${TARGET}) # not implemented
    #ADD_SUBDIRECTORY (SP   SP-${TARGET}) # not implemented
    ADD_SUBDIRECTORY (CG   CG-${TARGET})
    ADD_SUBDIRECTORY (EP   EP-${TARGET})
    ADD_SUBDIRECTORY (FT   FT-${TARGET})
    IF (NOT EXCLUDE_ERRORS)
        ADD_SUBDIRECTORY (MG   MG-${TARGET})
    ENDIF ()
ENDFOREACH ()
