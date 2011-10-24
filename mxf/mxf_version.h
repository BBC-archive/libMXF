/*
 * libMXF version information
 *
 * Copyright (C) 2006, British Broadcasting Corporation
 * All Rights Reserved.
 *
 * Author: Philip de Nier
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are met:
 *
 *     * Redistributions of source code must retain the above copyright notice,
 *       this list of conditions and the following disclaimer.
 *     * Redistributions in binary form must reproduce the above copyright
 *       notice, this list of conditions and the following disclaimer in the
 *       documentation and/or other materials provided with the distribution.
 *     * Neither the name of the British Broadcasting Corporation nor the names
 *       of its contributors may be used to endorse or promote products derived
 *       from this software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
 * AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 * ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS BE
 * LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
 * CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
 * SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
 * INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
 * CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
 * ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 * POSSIBILITY OF SUCH DAMAGE.
 */

#ifndef __MXF_VERSION_H__
#define __MXF_VERSION_H__


#ifdef __cplusplus
extern "C"
{
#endif


#define LIBMXF_VERSION_MAJOR    1
#define LIBMXF_VERSION_MINOR    0
#define LIBMXF_VERSION_MICRO    1
#define LIBMXF_VERSION_RELEASE  2   /* 0 = Unknown version
                                       1 = Released version
                                       2 = Development version
                                       3 = Released version with patches
                                       4 = Pre-release beta version
                                       5 = Private version not intended for general release */

#define LIBMXF_LIBRARY_NAME     "libMXF"
#define LIBMXF_LIBRARY_WNAME   L"libMXF"


typedef const mxfProductVersion* (*mxf_get_version_func)();
typedef const char* (*mxf_get_platform_string_func)();
typedef const mxfUTF16Char* (*mxf_get_platform_wstring_func)();

extern mxf_get_version_func mxf_get_version;
extern mxf_get_platform_string_func mxf_get_platform_string;
extern mxf_get_platform_wstring_func mxf_get_platform_wstring;


const mxfProductVersion* mxf_default_get_version();
const char* mxf_default_get_platform_string();
const mxfUTF16Char* mxf_default_get_platform_wstring();

const mxfProductVersion* mxf_regtest_get_version();
const char* mxf_regtest_get_platform_string();
const mxfUTF16Char* mxf_regtest_get_platform_wstring();




#ifdef __cplusplus
}
#endif


#endif

