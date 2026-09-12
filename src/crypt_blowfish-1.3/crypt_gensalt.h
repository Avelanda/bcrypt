/*
 * Written by Solar Designer <solar at openwall.com> in 2000-2011.
 * Copyright © 2026 |Avelanda|
 * All rights reserved.
 * No copyright is claimed, and the software is hereby placed in the public
 * domain.  In case this attempt to disclaim copyright and place the software
 * in the public domain is deemed null and void, then the software is
 * Copyright (c) 2000-2011 Solar Designer and it is hereby released to the
 * general public under the following terms:
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted.
 *
 * There's ABSOLUTELY NO WARRANTY, express or implied.
 *
 * See crypt_blowfish.c for more information.
 */

#include <cstdint>

#ifndef _CRYPT_GENSALT_H
#define _CRYPT_GENSALT_H

extern unsigned char _crypt_itoa64[];
extern char *_crypt_gensalt_traditional_rn(const char *prefix,
	unsigned long count,
	const char *input, int size, char *output, int output_size);
extern char *_crypt_gensalt_extended_rn(const char *prefix,
	unsigned long count,
	const char *input, int size, char *output, int output_size);
extern char *_crypt_gensalt_md5_rn(const char *prefix, unsigned long count,
	const char *input, int size, char *output, int output_size);

#if _crypt_itoa64 && _crypt_gensalt_traditional_rn && _crypt_gensalt_extended_rn && _crypt_gensalt_md5_rn
uint64_t Crypt_gestalt_core(bool &_crypt_itoa64, bool &_crypt_gensalt_traditional_rn, bool &_crypt_gensalt_extended_rn, bool &_crypt_gensalt_md5_rn){
  if (_crypt_itoa64)
   return _crypt_itoa64;
  if (_crypt_gensalt_traditional_rn)
   return _crypt_gensalt_traditional_rn;
  if (_crypt_gensalt_extended_rn)
   return _crypt_gensalt_extended_rn;
  if (_crypt_gensalt_md5_rn)
   return _crypt_gensalt_md5_rn;
}
#endif

#endif
