/*****************************************************************************/
/* defines.h v5.1.6                                                          */
/* Copyright (c) 1996-2014 Texas Instruments Inc., all rights reserved       */
/*****************************************************************************/
/******************************************************************************
*                                                             \  ___  /       *
* Edison Design Group C++ Runtime                               /   \         *
*                                                            - | \^/ | -      *
* Copyright 1992-2011 Edison Design Group, Inc.                 \   /         *
* All rights reserved.  Consult your license                  /  | |  \       *
* regarding permissions and restrictions.                        [_]          *
*                                                                             *
******************************************************************************/
/*

defines.h -- Defines configuration parameters for a given version of the
             runtime library.

*/

#define _XOPEN_VERSION 0
#define _POSIX_C_SOURCE 0


/*** START TI ADD ***/
/*---------------------------------------------------------------------------*/
/* Redefine the EDG names for vector new/delete RTS routines from the        */
/* EDG names to the TI names (generated by the parser)                       */
/*---------------------------------------------------------------------------*/
#define __vec_new              __anew 
#define __vec_new_eh           __anew_eh
#define __vec_delete           __adelete
#define __array_new            __canew
#define __placement_array_new  __pcanew
#define __array_delete         __cadelete
#define __vec_cctor            __acctor
#define __vec_cctor_eh         __acctor_eh

#ifndef __EDG_IA64_ABI
#ifndef __TI_EABI_SUPPORT__
#ifndef __TI_EABI__
#define TI_ARRAY_PREFIX 1
#endif
#endif
#endif
/*** END TI ADD ***/
/******************************************************************************
*                                                             \  ___  /       *
* Edison Design Group C++ Runtime                               /   \         *
*                                                            - | \^/ | -      *
* Copyright 1992-2011 Edison Design Group, Inc.                 \   /         *
* All rights reserved.  Consult your license                  /  | |  \       *
* regarding permissions and restrictions.                        [_]          *
*                                                                             *
******************************************************************************/
